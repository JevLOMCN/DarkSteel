// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 105

// AddUserDefinedAttribute<int> @ 14db26c20

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddUserDefinedAttribute<int>
          (FCollectionClothFacade *this,FName *param_1,FName *param_2,FName *param_3)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TManagedArray<int> *pTVar6;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db26c90;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x65a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14db26c90:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar6 = FClothCollection::FindOrAddUserDefinedAttribute<int>(this_01,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar6 != (TManagedArray<int> *)0x0;
}

// AddUserDefinedAttribute<float> @ 14db26cf0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddUserDefinedAttribute<float>
          (FCollectionClothFacade *this,FName *param_1,FName *param_2,FName *param_3)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TManagedArray<float> *pTVar6;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db26d60;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x65a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14db26d60:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar6 = FClothCollection::FindOrAddUserDefinedAttribute<float>(this_01,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar6 != (TManagedArray<float> *)0x0;
}

// AddUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db26dc0

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddUserDefinedAttribute<UE::Math::TVector<float>_>
          (FCollectionClothFacade *this,FName *param_1,FName *param_2,FName *param_3)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db26e30;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x65a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14db26e30:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar6 = FClothCollection::FindOrAddUserDefinedAttribute<UE::Math::TVector<float>_>
                     (this_01,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar6 != (TManagedArray<UE::Math::TVector<float>_> *)0x0;
}

// AddUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db26e90

bool __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::
AddUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothFacade *this,FName *param_1,FName *param_2,FName *param_3)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db26f00;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x65a,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_14db26f00:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar6 = FClothCollection::FindOrAddUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this_01,param_1,param_2,param_3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return pTVar6 != (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0;
}

// GetUserDefinedAttribute<int> @ 14db2dea0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetUserDefinedAttribute<int>
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__,FName *param_1,
          FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TManagedArray<int> *pTVar6;
  TArrayView<int,int> *pTVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar6 = FClothCollection::GetUserDefinedAttribute<int>(this_00,param_1,param_2);
  if (pTVar6 == (TManagedArray<int> *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    __return_storage_ptr__->DataPtr = *(int **)&pTVar6->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<int,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<float> @ 14db2e540

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetUserDefinedAttribute<float>
          (FCollectionClothFacade *this,TArrayView<float,int> *__return_storage_ptr__,FName *param_1
          ,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TManagedArray<float> *pTVar6;
  TArrayView<float,int> *pTVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar6 = FClothCollection::GetUserDefinedAttribute<float>(this_00,param_1,param_2);
  if (pTVar6 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar6->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<float,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<UE::Math::TVector<float>_> @ 14db2ebe0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetUserDefinedAttribute<UE::Math::TVector<float>_>
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__,FName *param_1,
          FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  TArrayView<UE::Math::TVector<float>,int> *pTVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar6 = FClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                     (this_00,param_1,param_2);
  if (pTVar6 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    __return_storage_ptr__->DataPtr = *(TVector<float> **)&pTVar6->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14db2f280

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::
GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__,
          FName *param_1,FName *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar6 = FClothCollection::GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                     (this_00,param_1,param_2);
  if (pTVar6 == (TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    __return_storage_ptr__->DataPtr =
         *(TArray<int,TSizedDefaultAllocator<32>_> **)&pTVar6->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// FCollectionClothFacade @ 14db3abc0

FCollectionClothFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::FCollectionClothFacade
          (FCollectionClothFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    *(undefined ***)this = &___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
    *(FClothCollection **)&this->field_0x8 = pFVar1;
    *(undefined8 *)&this->field_0x10 = 0;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined ***)this = &___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
    *(FClothCollection **)&this->field_0x8 = pFVar1;
    *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  *(undefined ***)this = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// FCollectionClothFacade @ 14db3ac20

FCollectionClothFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::FCollectionClothFacade
          (FCollectionClothFacade *this,TSharedRef<FManagedArrayCollection,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FCollectionClothFacade *pFVar4;
  
  pTVar3 = ::operator_new(0x298);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    *(undefined ***)this = &___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
    *(undefined8 *)&this->field_0x8 = 0x10;
    *(undefined8 *)&this->field_0x10 = 0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFClothCollection_ClothAsset_Chaos_UE___00_SharedPointerInternals__6B_
    ;
    FConstClothCollection::FConstClothCollection<FManagedArrayCollection>
              ((FConstClothCollection *)(pTVar3 + 1),param_1,(TProtectedInit)0x0);
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FCollectionClothFacade *)(*pcVar1)();
        return pFVar4;
      }
    }
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    *(undefined ***)this = &___7FCollectionClothConstFacade_ClothAsset_Chaos_UE__6B_;
    *(TReferenceControllerBase<1> **)&this->field_0x8 = pTVar3 + 1;
    *(TReferenceControllerBase<1> **)&this->field_0x10 = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  *(undefined ***)this = &___7FCollectionClothFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothFacade @ 14db3bb40

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::~FCollectionClothFacade(FCollectionClothFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// AddFabric @ 14db3d750

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddFabric(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Fabrics);
  SetNumFabrics(this,iVar1 + 1);
  return iVar1;
}

// AddRenderPattern @ 14db3d790

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddRenderPattern(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::RenderPatterns);
  SetNumRenderPatterns(this,iVar1 + 1);
  return iVar1;
}

// AddSeam @ 14db3d7d0

int __thiscall UE::Chaos::ClothAsset::FCollectionClothFacade::AddSeam(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Seams);
  SetNumSeams(this,iVar1 + 1);
  return iVar1;
}

// AddSimAccessoryMesh @ 14db3ddc0

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddSimAccessoryMesh(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimAccessoryMeshes);
  SetNumSimAccessoryMeshes(this,iVar1 + 1,false);
  return iVar1;
}

// AddSimMorphTarget @ 14db3e230

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddSimMorphTarget(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimMorphTargets);
  SetNumSimMorphTargets(this,iVar1 + 1,false);
  return iVar1;
}

// AddSimPattern @ 14db3e280

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddSimPattern(FCollectionClothFacade *this)

{
  int iVar1;
  
  iVar1 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimPatterns);
  SetNumSimPatterns(this,iVar1 + 1);
  return iVar1;
}

// AddWeightMap @ 14db3e2c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::AddWeightMap
          (FCollectionClothFacade *this,FName *param_1)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FName local_res8;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar4 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar4 == 1) goto LAB_14db3e321;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x648,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14db3e321:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  FClothCollection::FindOrAddUserDefinedAttribute<float>
            (this_01,param_1,&ClothCollectionGroup::SimVertices3D,&local_res8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Append @ 14db3e380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::Append
          (FCollectionClothFacade *this,FCollectionClothConstFacade *param_1)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 uVar3;
  TReferenceControllerBase<1> *pTVar4;
  FClothCollection *pFVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  FCollectionClothSeamConstFacade *pFVar16;
  FSoftObjectPath *pFVar17;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *pTVar18;
  FName FVar19;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar20;
  TArrayView<UE::Math::TVector<float>,int> *pTVar21;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar22;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar23;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar24;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar25;
  TArrayView<float,int> *pTVar26;
  FCollectionClothFabricFacade *this_00;
  FCollectionClothSimPatternFacade *this_01;
  FCollectionClothSeamFacade *this_02;
  FCollectionClothSimMorphTargetFacade *this_03;
  FCollectionClothRenderPatternFacade *this_04;
  TArrayView<FString,int> *pTVar27;
  TArrayView<int,int> *pTVar28;
  TManagedArray<float> *pTVar29;
  TManagedArray<int> *pTVar30;
  int *piVar31;
  TManagedArray<UE::Math::TVector<float>_> *pTVar32;
  TVector<float> *pTVar33;
  longlong *plVar34;
  ulonglong uVar35;
  int iVar36;
  uint uVar37;
  FConstClothCollection *pFVar38;
  ForAnyElementType FVar39;
  undefined4 *puVar40;
  FName *pFVar41;
  ForAnyElementType FVar42;
  ulonglong uVar43;
  int iVar44;
  int iVar45;
  longlong lVar46;
  longlong *plVar47;
  undefined1 auStackY_9d8 [32];
  undefined1 local_978;
  undefined1 local_977;
  undefined1 local_976;
  undefined1 local_975;
  undefined1 local_974 [4];
  uint local_970;
  FClothCollection *local_968;
  FName *local_960;
  FName *local_958;
  undefined1 local_950 [16];
  TReferenceControllerBase<1> *local_940;
  FName local_930;
  FName local_928;
  FName local_920;
  TArrayView<int_const_,int> local_918;
  TArrayView<UE::Math::TVector<float>_const_,int> local_908;
  FCollectionClothSimAccessoryMeshConstFacade local_8f8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_8d8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_8c8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_8b8;
  TArray<FName,TSizedDefaultAllocator<32>_> local_8a8;
  TArrayView<int_const_,int> local_898;
  TArrayView<float_const_,int> local_888;
  TArrayView<int,int> local_878;
  TArrayView<UE::Math::TVector<float>,int> local_868;
  FName *local_858;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_850;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_840;
  FCollectionClothSimAccessoryMeshConstFacade local_830;
  TArrayView<int,int> local_810;
  TArrayView<FName_const_,int> local_800;
  TArrayView<UE::Math::TVector<float>_const_,int> local_7f0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_7e0;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_7d0;
  TArrayView<float,int> local_7c0;
  TArrayView<UE::Math::TVector<float>,int> local_7b0;
  TArrayView<UE::Math::TVector<float>,int> local_7a0;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_790;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_780;
  TArrayView<UE::Math::TVector<float>,int> local_770;
  TArrayView<UE::Math::TVector<float>,int> local_760;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_750;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_740;
  TArrayView<UE::Math::TVector<float>_const_,int> local_730;
  TArrayView<UE::Math::TVector<float>,int> local_720;
  TArrayView<UE::Math::TVector<float>,int> local_710;
  TArrayView<FString,int> local_700;
  FCollectionClothSimAccessoryMeshConstFacade local_6f0;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_6c8;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_6b8;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_6a8;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_698;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_680;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_670;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_660;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_650;
  TArrayView<float,int> local_640;
  TArrayView<float_const_,int> local_630;
  TArrayView<FString_const_,int> local_620;
  TArrayView<int,int> local_610;
  TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> local_600 [2];
  FCollectionClothFabricConstFacade local_5d8;
  FCollectionClothSimPatternConstFacade local_5b8;
  FCollectionClothSeamConstFacade local_598;
  FCollectionClothSeamConstFacade local_578;
  FCollectionClothSimMorphTargetConstFacade local_558;
  FCollectionClothRenderPatternConstFacade local_538;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_518;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_508;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_4f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_4e8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_4d8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_4c8;
  TArrayView<float,int> local_4b8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_4a8;
  TArrayView<UE::Math::TVector<float>,int> local_498;
  TArrayView<UE::Math::TVector<float>,int> local_488;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_478;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_468;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_458;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_448;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_438;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_428;
  TArrayView<FString,int> local_418;
  TArrayView<int,int> local_408;
  TArrayView<UE::Math::TVector<float>_const_,int> local_3f8;
  TArrayView<UE::Math::TVector<float>,int> local_3e8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_3d8;
  TArrayView<UE::Math::TVector<float>,int> local_3c8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_3b8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_3a8;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_398;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_388;
  TArrayView<UE::Math::TVector<float>_const_,int> local_378;
  TArrayView<UE::Math::TVector<float>,int> local_368;
  TArrayView<UE::Math::TVector<float>_const_,int> local_358;
  TArrayView<UE::Math::TVector<float>,int> local_348;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_338;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_328;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_318;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_308;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_2f8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_2e8;
  TArrayView<UE::Math::TVector<float>,int> local_2d8;
  TArrayView<UE::Math::TVector<float>,int> local_2c8;
  TArrayView<UE::Math::TVector<float>,int> local_2b8;
  TArrayView<UE::Math::TVector<float>,int> local_2a8;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_298;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_288;
  TArrayView<UE::Math::TVector<float>_const_,int> local_278;
  TArrayView<UE::Math::TVector<float>,int> local_268;
  TArrayView<UE::Math::TVector<float>_const_,int> local_258;
  TArrayView<UE::Math::TVector<float>,int> local_248;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_238;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_228;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_218;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_208;
  TArrayView<float,int> local_1f8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1e8;
  TArrayView<UE::Math::TVector<float>,int> local_1d8;
  TArrayView<UE::Math::TVector<float>,int> local_1c8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_1b8;
  TArrayView<UE::Math::TVector<float>,int> local_1a8;
  TArrayView<UE::Math::TVector<float>,int> local_198;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_188;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_178;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_168;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_158;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [32];
  undefined1 local_e8 [32];
  undefined1 local_c8 [32];
  undefined1 local_a8 [32];
  undefined1 local_88 [32];
  FName local_68;
  FName FStack_60;
  FName local_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  iVar13 = 0;
  iVar11 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::Seams);
  iVar36 = iVar13;
  if (0 < iVar11) {
    do {
      pFVar16 = (FCollectionClothSeamConstFacade *)
                GetSeam(this,(FCollectionClothSeamFacade *)local_148,iVar36);
      FCollectionClothSeamConstFacade::ValidateSeam(pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_148._16_8_);
      iVar36 = iVar36 + 1;
      iVar11 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                          ClothCollectionGroup::Seams);
    } while (iVar36 < iVar11);
  }
  pFVar17 = FCollectionClothConstFacade::GetPhysicsAssetSoftObjectPathName
                      ((FCollectionClothConstFacade *)this);
  if ((pFVar17->AssetPath).PackageName == (FName)0x0) {
    pFVar17 = FCollectionClothConstFacade::GetPhysicsAssetSoftObjectPathName(param_1);
    iVar36 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                        ClothCollectionGroup::Lods);
    if (iVar36 == 0) {
LAB_14db3e485:
      bVar8 = false;
    }
    else {
      iVar13 = 1;
      pTVar18 = GetClothCollection(this,&local_6c8);
      if (*(longlong *)&pTVar18->Object->field_0x10 == 0) goto LAB_14db3e485;
      bVar8 = true;
    }
    if (iVar13 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6c8.SharedReferenceCount.ReferenceController);
    }
    if (bVar8) {
      pTVar18 = GetClothCollection(this,&local_6b8);
      lVar46 = *(longlong *)&pTVar18->Object->field_0x10;
      if ((*(int *)(lVar46 + 0x18) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FSoftObjectPath::operator=(*(FSoftObjectPath **)(lVar46 + 0x10),pFVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6b8.SharedReferenceCount.ReferenceController);
    }
  }
  bVar8 = false;
  pFVar17 = FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName
                      ((FCollectionClothConstFacade *)this);
  if ((pFVar17->AssetPath).PackageName == (FName)0x0) {
    pFVar17 = FCollectionClothConstFacade::GetSkeletalMeshSoftObjectPathName(param_1);
    iVar36 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                        ClothCollectionGroup::Lods);
    if (iVar36 == 0) {
LAB_14db3e558:
      bVar9 = false;
    }
    else {
      bVar8 = true;
      pTVar18 = GetClothCollection(this,&local_6a8);
      if (*(longlong *)&pTVar18->Object->field_0x18 == 0) goto LAB_14db3e558;
      bVar9 = true;
    }
    if (bVar8) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_6a8.SharedReferenceCount.ReferenceController);
    }
    if (bVar9) {
      pTVar18 = GetClothCollection(this,&local_698);
      lVar46 = *(longlong *)&pTVar18->Object->field_0x18;
      if ((*(int *)(lVar46 + 0x18) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FSoftObjectPath::operator=(*(FSoftObjectPath **)(lVar46 + 0x10),pFVar17);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_698.SharedReferenceCount.ReferenceController);
    }
  }
  FVar19 = FCollectionClothConstFacade::GetReferenceBoneName((FCollectionClothConstFacade *)this);
  if (*(longlong *)FVar19 == 0) {
    FVar19 = FCollectionClothConstFacade::GetReferenceBoneName(param_1);
    iVar36 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                        ClothCollectionGroup::Lods);
    if (iVar36 != 0) {
      uVar3 = *(undefined8 *)FVar19;
      pTVar18 = GetClothCollection(this,local_600);
      lVar46 = *(longlong *)&pTVar18->Object->field_0x30;
      if ((*(int *)(lVar46 + 0x18) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      **(undefined8 **)(lVar46 + 0x10) = uVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_600[0].SharedReferenceCount.ReferenceController);
    }
  }
  pFVar38 = (param_1->ClothCollection).Object;
  bVar8 = FConstClothCollection::IsValid(pFVar38,Resizing);
  if ((bVar8) &&
     (iVar36 = FManagedArrayCollection::NumElements
                         ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar36 == 1)) {
    bVar8 = true;
    DefineSchema(this,Resizing);
  }
  else {
    bVar8 = false;
  }
  iVar36 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SimVertices3D);
  uVar12 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimVertices3D);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar5 = *(FClothCollection **)&this->field_0x8;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_970 = uVar12;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  FClothCollection::SetNumElements(pFVar5,uVar12 + iVar36,&ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar20 = FCollectionClothConstFacade::GetSimPosition3D(param_1,&local_1e8);
  pTVar21 = GetSimPosition3D(this,&local_1d8);
  pTVar21 = TArrayView<UE::Math::TVector<float>,int>::Right(pTVar21,&local_1c8,uVar12);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar21,pTVar20);
  pTVar20 = FCollectionClothConstFacade::GetSimNormal(param_1,&local_1b8);
  pTVar21 = GetSimNormal(this,&local_1a8);
  pTVar21 = TArrayView<UE::Math::TVector<float>,int>::Right(pTVar21,&local_198,uVar12);
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar21,pTVar20);
  pTVar22 = FCollectionClothConstFacade::GetSimBoneIndices(param_1,&local_188);
  pTVar23 = GetSimBoneIndices(this,&local_178);
  pTVar23 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar23,&local_168,uVar12);
  FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
            (pTVar23,pTVar22);
  pTVar24 = FCollectionClothConstFacade::GetSimBoneWeights(param_1,&local_158);
  pTVar25 = GetSimBoneWeights(this,&local_518);
  pTVar25 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar25,&local_508,uVar12);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar25,pTVar24);
  FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
            (&local_680,((param_1->ClothCollection).Object)->TetherKinematicIndex);
  pTVar23 = GetTetherKinematicIndex(this,&local_4f8);
  pTVar23 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar23,&local_4e8,uVar12);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>(pTVar23,&local_680,iVar36);
  FConstClothCollection::GetElements<TArray<float,TSizedDefaultAllocator<32>_>_>
            (&local_670,((param_1->ClothCollection).Object)->TetherReferenceLength);
  pTVar25 = GetTetherReferenceLength(this,&local_4d8);
  pTVar25 = TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar25,&local_4c8,uVar12);
  FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
            (pTVar25,&local_670);
  if (bVar8) {
    FConstClothCollection::GetElements<float>
              (&local_630,((param_1->ClothCollection).Object)->SimCustomResizingBlend);
    GetClothCollection(this,&local_650);
    pTVar18 = GetClothCollection(this,&local_660);
    FConstClothCollection::GetElements<float>
              (&local_640,*(TManagedArray<float> **)&pTVar18->Object->field_0x190);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_660.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_650.SharedReferenceCount.ReferenceController);
    pTVar26 = TArrayView<float,int>::Right(&local_640,&local_4b8,uVar12);
    FConstClothCollection::CopyArrayViewData<float>(pTVar26,&local_630);
    pTVar20 = FCollectionClothConstFacade::GetPreResizedSimPosition3D(param_1,&local_4a8);
    pTVar21 = GetPreResizedSimPosition3D(this,&local_498);
    pTVar21 = TArrayView<UE::Math::TVector<float>,int>::Right(pTVar21,&local_488,uVar12);
    FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar21,pTVar20);
  }
  iVar11 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::Fabrics);
  iVar13 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::Fabrics);
  SetNumFabrics(this,iVar11 + iVar13);
  iVar44 = 0;
  if (0 < iVar13) {
    do {
      this_00 = GetFabric(this,(FCollectionClothFabricFacade *)local_128,iVar44 + iVar11);
      FCollectionClothFabricConstFacade::FCollectionClothFabricConstFacade
                (&local_5d8,&param_1->ClothCollection,iVar44);
      FCollectionClothFabricFacade::Initialize(this_00,&local_5d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5d8.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_128._16_8_);
      iVar44 = iVar44 + 1;
      uVar12 = local_970;
    } while (iVar44 < iVar13);
  }
  pFVar38 = *(FConstClothCollection **)&this->field_0x8;
  bVar9 = FConstClothCollection::IsValid(pFVar38,Import);
  if (bVar9) {
    iVar13 = FManagedArrayCollection::NumElements
                       ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    pFVar38 = *(FConstClothCollection **)&this->field_0x8;
    bVar9 = true;
    if (iVar13 == 1) goto LAB_14db3ea62;
  }
  bVar9 = false;
LAB_14db3ea62:
  iVar13 = FManagedArrayCollection::NumElements
                     ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::SimVertices2D);
  iVar44 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SimPatterns);
  iVar14 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimPatterns);
  SetNumSimPatterns(this,iVar44 + iVar14);
  iVar45 = 0;
  if (0 < iVar14) {
    do {
      this_01 = GetSimPattern(this,(FCollectionClothSimPatternFacade *)local_108,iVar45 + iVar44);
      FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                (&local_5b8,&param_1->ClothCollection,iVar45);
      FCollectionClothSimPatternFacade::Initialize(this_01,&local_5b8,iVar36,iVar11);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_5b8.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_108._16_8_);
      iVar45 = iVar45 + 1;
      uVar12 = local_970;
    } while (iVar45 < iVar14);
  }
  pFVar38 = (param_1->ClothCollection).Object;
  bVar10 = FConstClothCollection::IsValid(pFVar38,Import);
  if (((bVar10) &&
      (iVar11 = FManagedArrayCollection::NumElements
                          ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
      iVar11 == 1)) && (!bVar9)) {
    DefineSchema(this,Import);
    GetSimImportVertexID(this,&local_810);
    uVar37 = 0;
    if (0 < (longlong)iVar13) {
      lVar46 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar37 < local_810.ArrayNum) {
          uVar15 = ~uVar37 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        uVar37 = uVar37 + 1;
        local_810.DataPtr[lVar46] = -1;
        lVar46 = lVar46 + 1;
      } while (lVar46 < iVar13);
    }
  }
  iVar11 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SeamStitches);
  iVar44 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::Seams);
  iVar14 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::Seams);
  SetNumSeams(this,iVar14 + iVar44);
  iVar45 = 0;
  if (0 < iVar14) {
    do {
      FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
                (&local_598,&param_1->ClothCollection,iVar45);
      FCollectionClothSeamConstFacade::ValidateSeam(&local_598);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_598.ClothCollection.SharedReferenceCount.ReferenceController);
      this_02 = GetSeam(this,(FCollectionClothSeamFacade *)local_e8,iVar45 + iVar44);
      FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
                (&local_578,&param_1->ClothCollection,iVar45);
      FCollectionClothSeamFacade::Initialize(this_02,&local_578,iVar13,iVar36);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_578.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_e8._16_8_);
      iVar45 = iVar45 + 1;
      uVar12 = local_970;
    } while (iVar45 < iVar14);
  }
  local_968 = (FClothCollection *)
              FCollectionClothConstFacade::GetSimVertex2DLookup(param_1,&local_478);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar46 = *(longlong *)&this->field_0x8;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar23 = FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_468,
                       *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(lVar46 + 0x180)
                      );
  pTVar23 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar23,&local_458,uVar12);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>
            (pTVar23,(TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)local_968,
             iVar13);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  local_968 = (FClothCollection *)
              FCollectionClothConstFacade::GetSeamStitchLookup(param_1,&local_448);
  pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar46 = *(longlong *)&this->field_0x8;
  if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  pTVar23 = FConstClothCollection::GetElements<TArray<int,TSizedDefaultAllocator<32>_>_>
                      (&local_438,
                       *(TManagedArray<TArray<int,TSizedDefaultAllocator<32>_>_> **)(lVar46 + 0x188)
                      );
  pTVar23 = TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int>::Right
                      (pTVar23,&local_428,uVar12);
  FConstClothCollection::CopyArrayViewDataAndApplyOffset<int>
            (pTVar23,(TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *)local_968,
             iVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar11 = 0;
  if (0 < iVar14) {
    do {
      pFVar16 = (FCollectionClothSeamConstFacade *)
                GetSeam(this,(FCollectionClothSeamFacade *)local_c8,iVar11 + iVar44);
      FCollectionClothSeamConstFacade::ValidateSeam(pFVar16);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_c8._16_8_);
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar14);
  }
  iVar11 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SimMorphTargets);
  iVar13 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimMorphTargets);
  SetNumSimMorphTargets(this,iVar13 + iVar11,false);
  iVar44 = 0;
  if (0 < iVar13) {
    do {
      this_03 = GetSimMorphTarget(this,(FCollectionClothSimMorphTargetFacade *)local_a8,
                                  iVar44 + iVar11);
      FCollectionClothSimMorphTargetConstFacade::FCollectionClothSimMorphTargetConstFacade
                (&local_558,&param_1->ClothCollection,iVar44);
      FCollectionClothSimMorphTargetFacade::Initialize(this_03,&local_558,iVar36);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_558.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_a8._16_8_);
      iVar44 = iVar44 + 1;
      uVar12 = local_970;
    } while (iVar44 < iVar13);
  }
  iVar11 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::RenderPatterns);
  iVar13 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::RenderPatterns);
  SetNumRenderPatterns(this,iVar13 + iVar11);
  iVar44 = 0;
  if (0 < iVar13) {
    do {
      this_04 = GetRenderPattern(this,(FCollectionClothRenderPatternFacade *)local_88,
                                 iVar44 + iVar11);
      FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
                (&local_538,&param_1->ClothCollection,iVar44);
      FCollectionClothRenderPatternFacade::Initialize(this_04,&local_538,iVar36);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_538.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_88._16_8_);
      iVar44 = iVar44 + 1;
      uVar12 = local_970;
    } while (iVar44 < iVar13);
  }
  if (bVar8) {
    iVar36 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                        ClothCollectionGroup::CustomResizingRegions);
    iVar13 = FManagedArrayCollection::NumElements
                       ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                        ClothCollectionGroup::CustomResizingRegions);
    SetNumCustomResizingRegions(this,iVar13 + iVar36);
    FConstClothCollection::GetElements<FString>
              (&local_620,((param_1->ClothCollection).Object)->CustomResizingRegionSet);
    pTVar27 = GetCustomResizingRegionSet(this,&local_418);
    iVar36 = pTVar27->ArrayNum;
    iVar11 = iVar36;
    if (iVar13 < iVar36) {
      iVar11 = iVar13;
    }
    local_700.ArrayNum = 0;
    if (0 < iVar11) {
      local_700.ArrayNum = iVar11;
    }
    local_700.DataPtr = pTVar27->DataPtr + ((longlong)iVar36 - (longlong)local_700.ArrayNum);
    if ((local_700.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FConstClothCollection::CopyArrayViewData<FString>(&local_700,&local_620);
    pTVar30 = ((param_1->ClothCollection).Object)->CustomResizingRegionType;
    if (pTVar30 == (TManagedArray<int> *)0x0) {
      local_898.DataPtr = (int *)0x0;
      local_898.ArrayNum = 0;
    }
    else {
      local_898.ArrayNum = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
      local_898.DataPtr = *(int **)&pTVar30->field_0x10;
      if ((local_898.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar46 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    FConstClothCollection::GetElements<int>(&local_610,*(TManagedArray<int> **)(lVar46 + 600));
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar28 = TArrayView<int,int>::Right(&local_610,&local_408,iVar13);
    FConstClothCollection::CopyArrayViewData<int>(pTVar28,&local_898);
  }
  iVar36 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::SimAccessoryMeshes);
  iVar11 = FManagedArrayCollection::NumElements
                     ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimAccessoryMeshes);
  FCollectionClothConstFacade::GetSimAccessoryMeshName(param_1,&local_800);
  iVar13 = 0;
  if (0 < iVar36) {
    do {
      GetSimAccessoryMesh(this,(FCollectionClothSimAccessoryMeshFacade *)&local_8f8,iVar13);
      FVar19 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName(&local_8f8);
      if (local_800.DataPtr != local_800.DataPtr + local_800.ArrayNum) {
        pFVar41 = local_800.DataPtr;
        do {
          if (*pFVar41 == *(FName *)FVar19) {
            iVar44 = (int)((longlong)pFVar41 - (longlong)local_800.DataPtr >> 3);
            if (iVar44 != -1) {
              FCollectionClothSimAccessoryMeshConstFacade::
              FCollectionClothSimAccessoryMeshConstFacade
                        (&local_6f0,&param_1->ClothCollection,iVar44);
              pTVar20 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
                                  (&local_6f0,&local_3f8);
              pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                                  ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_3e8);
              iVar44 = pTVar21->ArrayNum;
              iVar14 = iVar44;
              if ((int)uVar12 < iVar44) {
                iVar14 = uVar12;
              }
              local_7b0.ArrayNum = 0;
              if (0 < iVar14) {
                local_7b0.ArrayNum = iVar14;
              }
              local_7b0.DataPtr =
                   pTVar21->DataPtr + ((longlong)iVar44 - (longlong)local_7b0.ArrayNum);
              if ((local_7b0.ArrayNum < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>
                        (&local_7b0,pTVar20);
              pTVar20 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
                                  (&local_6f0,&local_3d8);
              pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                                  ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_3c8);
              iVar44 = pTVar21->ArrayNum;
              iVar14 = iVar44;
              if ((int)uVar12 < iVar44) {
                iVar14 = uVar12;
              }
              local_7a0.ArrayNum = 0;
              if (0 < iVar14) {
                local_7a0.ArrayNum = iVar14;
              }
              local_7a0.DataPtr =
                   pTVar21->DataPtr + ((longlong)iVar44 - (longlong)local_7a0.ArrayNum);
              if ((local_7a0.ArrayNum < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>
                        (&local_7a0,pTVar20);
              pTVar22 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
                                  (&local_6f0,&local_3b8);
              pTVar23 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                                  ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_3a8);
              iVar44 = pTVar23->ArrayNum;
              iVar14 = iVar44;
              if ((int)uVar12 < iVar44) {
                iVar14 = uVar12;
              }
              local_790.ArrayNum = 0;
              if (0 < iVar14) {
                local_790.ArrayNum = iVar14;
              }
              local_790.DataPtr =
                   pTVar23->DataPtr + ((longlong)iVar44 - (longlong)local_790.ArrayNum);
              if ((local_790.ArrayNum < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (&local_790,pTVar22);
              pTVar24 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
                                  (&local_6f0,&local_398);
              pTVar25 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                                  ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_388);
              iVar44 = pTVar25->ArrayNum;
              iVar14 = iVar44;
              if ((int)uVar12 < iVar44) {
                iVar14 = uVar12;
              }
              local_780.ArrayNum = 0;
              if (0 < iVar14) {
                local_780.ArrayNum = iVar14;
              }
              local_780.DataPtr =
                   pTVar25->DataPtr + ((longlong)iVar44 - (longlong)local_780.ArrayNum);
              if ((local_780.ArrayNum < 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ArrayNum >= 0",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0xfe,L""), bVar8)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
                        (&local_780,pTVar24);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_6f0.ClothCollection.SharedReferenceCount.ReferenceController);
              goto LAB_14db3f466;
            }
            break;
          }
          pFVar41 = pFVar41 + 1;
        } while (pFVar41 != local_800.DataPtr + local_800.ArrayNum);
      }
      pTVar20 = FCollectionClothConstFacade::GetSimPosition3D(param_1,&local_378);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_368);
      iVar44 = pTVar21->ArrayNum;
      iVar14 = iVar44;
      if ((int)uVar12 < iVar44) {
        iVar14 = uVar12;
      }
      local_770.ArrayNum = 0;
      if (0 < iVar14) {
        local_770.ArrayNum = iVar14;
      }
      local_770.DataPtr = pTVar21->DataPtr + ((longlong)iVar44 - (longlong)local_770.ArrayNum);
      if ((local_770.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(&local_770,pTVar20);
      pTVar20 = FCollectionClothConstFacade::GetSimNormal(param_1,&local_358);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_348);
      iVar44 = pTVar21->ArrayNum;
      iVar14 = iVar44;
      if ((int)uVar12 < iVar44) {
        iVar14 = uVar12;
      }
      local_760.ArrayNum = 0;
      if (0 < iVar14) {
        local_760.ArrayNum = iVar14;
      }
      local_760.DataPtr = pTVar21->DataPtr + ((longlong)iVar44 - (longlong)local_760.ArrayNum);
      if ((local_760.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(&local_760,pTVar20);
      pTVar22 = FCollectionClothConstFacade::GetSimBoneIndices(param_1,&local_338);
      pTVar23 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_328);
      iVar44 = pTVar23->ArrayNum;
      iVar14 = iVar44;
      if ((int)uVar12 < iVar44) {
        iVar14 = uVar12;
      }
      local_750.ArrayNum = 0;
      if (0 < iVar14) {
        local_750.ArrayNum = iVar14;
      }
      local_750.DataPtr = pTVar23->DataPtr + ((longlong)iVar44 - (longlong)local_750.ArrayNum);
      if ((local_750.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
                (&local_750,pTVar22);
      pTVar24 = FCollectionClothConstFacade::GetSimBoneWeights(param_1,&local_318);
      pTVar25 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_8f8,&local_308);
      iVar44 = pTVar25->ArrayNum;
      iVar14 = iVar44;
      if ((int)uVar12 < iVar44) {
        iVar14 = uVar12;
      }
      local_740.ArrayNum = 0;
      if (0 < iVar14) {
        local_740.ArrayNum = iVar14;
      }
      local_740.DataPtr = pTVar25->DataPtr + ((longlong)iVar44 - (longlong)local_740.ArrayNum);
      if ((local_740.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
                (&local_740,pTVar24);
LAB_14db3f466:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_8f8.ClothCollection.SharedReferenceCount.ReferenceController);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar36);
  }
  iVar36 = 0;
  if (0 < iVar11) {
    do {
      FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
                (&local_830,&param_1->ClothCollection,iVar36);
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      lVar46 = *(longlong *)&this->field_0x8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      plVar47 = *(longlong **)(lVar46 + 0x260);
      if (plVar47 == (longlong *)0x0) {
        iVar13 = 0;
        plVar47 = (longlong *)0x0;
      }
      else {
        iVar13 = (**(code **)(*plVar47 + 0x60))(plVar47);
        plVar47 = (longlong *)plVar47[2];
        if ((iVar13 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FVar19 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName(&local_830);
      if (plVar47 != plVar47 + iVar13) {
        plVar34 = plVar47;
        do {
          if (*plVar34 == *(longlong *)FVar19) {
            if ((int)((longlong)plVar34 - (longlong)plVar47 >> 3) != -1) goto LAB_14db3fc93;
            break;
          }
          plVar34 = plVar34 + 1;
        } while (plVar34 != plVar47 + iVar13);
      }
      iVar13 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                          ClothCollectionGroup::SimAccessoryMeshes);
      SetNumSimAccessoryMeshes(this,iVar13 + 1,false);
      GetSimAccessoryMesh(this,(FCollectionClothSimAccessoryMeshFacade *)local_950,iVar13);
      pTVar25 = GetSimBoneWeights(this,&local_2f8);
      local_840.DataPtr = pTVar25->DataPtr;
      local_840.ArrayNum = pTVar25->ArrayNum;
      pTVar23 = GetSimBoneIndices(this,&local_2e8);
      local_850.DataPtr = pTVar23->DataPtr;
      local_850.ArrayNum = pTVar23->ArrayNum;
      pTVar21 = GetSimNormal(this,&local_2d8);
      local_7f0.DataPtr = pTVar21->DataPtr;
      iVar13 = pTVar21->ArrayNum;
      local_7f0.ArrayNum = iVar13;
      pTVar21 = GetSimPosition3D(this,&local_2c8);
      local_730.DataPtr = pTVar21->DataPtr;
      iVar44 = pTVar21->ArrayNum;
      local_730.ArrayNum = iVar44;
      FVar19 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName(&local_830);
      iVar14 = FManagedArrayCollection::NumElements
                         (*(FManagedArrayCollection **)local_950._8_8_,
                          ClothCollectionGroup::SimVertices3D);
      if ((iVar44 != iVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Positions.Num() == NumExpectedVertices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                             ,0x5a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((iVar13 != iVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Normals.Num() == NumExpectedVertices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                             ,0x5b,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((local_850.ArrayNum != iVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneIndices.Num() == NumExpectedVertices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                             ,0x5c,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((local_840.ArrayNum != iVar14) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("BoneWeights.Num() == NumExpectedVertices",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                             ,0x5d,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FCollectionClothSimAccessoryMeshFacade::GenerateDynamicAttributesIfNecessary
                ((FCollectionClothSimAccessoryMeshFacade *)local_950);
      FCollectionClothSimAccessoryMeshFacade::SetSimAccessoryMeshName
                ((FCollectionClothSimAccessoryMeshFacade *)local_950,(FName *)FVar19);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_2b8);
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar21,&local_730);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_2a8);
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar21,&local_7f0);
      pTVar23 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_298);
      FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pTVar23,&local_850);
      pTVar25 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_288);
      FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
                (pTVar25,&local_840);
      pTVar20 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
                          (&local_830,&local_278);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_268);
      iVar13 = pTVar21->ArrayNum;
      iVar44 = iVar13;
      if ((int)uVar12 < iVar13) {
        iVar44 = uVar12;
      }
      local_720.ArrayNum = 0;
      if (0 < iVar44) {
        local_720.ArrayNum = iVar44;
      }
      local_720.DataPtr = pTVar21->DataPtr + ((longlong)iVar13 - (longlong)local_720.ArrayNum);
      if ((local_720.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(&local_720,pTVar20);
      pTVar20 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
                          (&local_830,&local_258);
      pTVar21 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_248);
      iVar13 = pTVar21->ArrayNum;
      iVar44 = iVar13;
      if ((int)uVar12 < iVar13) {
        iVar44 = uVar12;
      }
      local_710.ArrayNum = 0;
      if (0 < iVar44) {
        local_710.ArrayNum = iVar44;
      }
      local_710.DataPtr = pTVar21->DataPtr + ((longlong)iVar13 - (longlong)local_710.ArrayNum);
      if ((local_710.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(&local_710,pTVar20);
      pTVar22 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
                          (&local_830,&local_238);
      pTVar23 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_228);
      iVar13 = pTVar23->ArrayNum;
      iVar44 = iVar13;
      if ((int)uVar12 < iVar13) {
        iVar44 = uVar12;
      }
      local_7e0.ArrayNum = 0;
      if (0 < iVar44) {
        local_7e0.ArrayNum = iVar44;
      }
      local_7e0.DataPtr = pTVar23->DataPtr + ((longlong)iVar13 - (longlong)local_7e0.ArrayNum);
      if ((local_7e0.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
                (&local_7e0,pTVar22);
      pTVar24 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
                          (&local_830,&local_218);
      pTVar25 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                          ((FCollectionClothSimAccessoryMeshFacade *)local_950,&local_208);
      iVar13 = pTVar25->ArrayNum;
      iVar44 = iVar13;
      if ((int)uVar12 < iVar13) {
        iVar44 = uVar12;
      }
      local_7d0.ArrayNum = 0;
      if (0 < iVar44) {
        local_7d0.ArrayNum = iVar44;
      }
      local_7d0.DataPtr = pTVar25->DataPtr + ((longlong)iVar13 - (longlong)local_7d0.ArrayNum);
      if ((local_7d0.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
                (&local_7d0,pTVar24);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_940)
      ;
LAB_14db3fc93:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_830.ClothCollection.SharedReferenceCount.ReferenceController);
      iVar36 = iVar36 + 1;
    } while (iVar36 < iVar11);
  }
  FConstClothCollection::GetUserDefinedAttributeNames<float>
            ((param_1->ClothCollection).Object,&local_8a8,&ClothCollectionGroup::SimVertices3D);
  iVar36 = local_8a8.ArrayNum;
  pFVar41 = (FName *)(local_8a8.AllocatorInstance.Data + (longlong)iVar36 * 8);
  FVar39.Data = local_8a8.AllocatorInstance.Data;
  while( true ) {
    if (local_8a8.ArrayNum != iVar36) {
      local_978 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_978);
    }
    if ((FName *)FVar39.Data == pFVar41) break;
    AddWeightMap(this,(FName *)FVar39.Data);
    pTVar29 = FConstClothCollection::GetUserDefinedAttribute<float>
                        ((param_1->ClothCollection).Object,(FName *)FVar39.Data,
                         &ClothCollectionGroup::SimVertices3D);
    if (pTVar29 == (TManagedArray<float> *)0x0) {
      local_888.ArrayNum = 0;
      local_888.DataPtr = (float *)0x0;
    }
    else {
      local_888.ArrayNum = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
      local_888.DataPtr = *(float **)&pTVar29->field_0x10;
      if ((local_888.ArrayNum < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pTVar26 = GetWeightMap(this,&local_1f8,(FName *)FVar39.Data);
    iVar11 = pTVar26->ArrayNum;
    iVar13 = iVar11;
    if ((int)uVar12 < iVar11) {
      iVar13 = uVar12;
    }
    local_7c0.ArrayNum = 0;
    if (0 < iVar13) {
      local_7c0.ArrayNum = iVar13;
    }
    local_7c0.DataPtr = pTVar26->DataPtr + ((longlong)iVar11 - (longlong)local_7c0.ArrayNum);
    if ((local_7c0.ArrayNum < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FConstClothCollection::CopyArrayViewData<float>(&local_7c0,&local_888);
    FVar39.Data = FVar39.Data + 8;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    local_68 = ClothCollectionGroup::SimFaces;
    FStack_60 = ClothCollectionGroup::RenderPatterns;
    local_58 = ClothCollectionGroup::RenderVertices;
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,3,0,&ClothCollectionGroups.AllocatorInstance,3,&ClothCollectionGroups.ArrayMax);
    FVar39 = ClothCollectionGroups.AllocatorInstance;
    *(FName *)ClothCollectionGroups.AllocatorInstance.Data = local_68;
    *(FName *)(FVar39.Data + 8) = FStack_60;
    *(FName *)(FVar39.Data + 0x10) = local_58;
    atexit(`UE::Chaos::ClothAsset::FCollectionClothFacade::Append'::__l2::
           _dynamic_atexit_destructor_for__ClothCollectionGroups__);
    _Init_thread_footer(&::_TSS1);
  }
  local_970 = ClothCollectionGroups.ArrayNum;
  uVar35 = (ulonglong)(int)local_970;
  local_858 = (FName *)(ClothCollectionGroups.AllocatorInstance.Data + uVar35 * 8);
  FVar39.Data = ClothCollectionGroups.AllocatorInstance.Data;
  do {
    pFVar41 = local_858;
    local_960 = (FName *)FVar39.Data;
    if (ClothCollectionGroups.ArrayNum != (int)uVar35) {
      local_977 = 0;
      `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_977);
    }
    if ((FName *)FVar39.Data == pFVar41) {
      if ((FName *)local_8a8.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_8a8.AllocatorInstance.Data);
      }
      return;
    }
    iVar36 = FManagedArrayCollection::NumElements
                       ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                        *(FName *)FVar39.Data);
    FConstClothCollection::GetUserDefinedAttributeNames<int>
              ((param_1->ClothCollection).Object,&local_8b8,(FName *)FVar39.Data);
    uVar3 = local_8b8._8_8_;
    uVar35 = (ulonglong)local_8b8.ArrayNum;
    pFVar41 = (FName *)(local_8b8.AllocatorInstance.Data + uVar35 * 8);
    FVar42.Data = local_8b8.AllocatorInstance.Data;
    while( true ) {
      if (local_8b8.ArrayNum != (int)uVar35) {
        local_976 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_976);
      }
      if ((FName *)FVar42.Data == pFVar41) break;
      pFVar38 = *(FConstClothCollection **)&this->field_0x8;
      local_930.ComparisonIndex.Value = 0;
      local_930.Number = 0;
      bVar8 = FConstClothCollection::IsValid(pFVar38,None);
      if (((!bVar8) ||
          (iVar11 = FManagedArrayCollection::NumElements
                              ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
          iVar11 != 1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                             ,0x65a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar5 = *(FClothCollection **)&this->field_0x8;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FClothCollection::FindOrAddUserDefinedAttribute<int>
                (pFVar5,(FName *)FVar42.Data,(FName *)FVar39.Data,&local_930);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar30 = FConstClothCollection::GetUserDefinedAttribute<int>
                          ((param_1->ClothCollection).Object,(FName *)FVar42.Data,
                           (FName *)FVar39.Data);
      if (pTVar30 == (TManagedArray<int> *)0x0) {
        local_918.DataPtr = (int *)0x0;
        local_918.ArrayNum = 0;
      }
      else {
        local_918.ArrayNum = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
        local_918.DataPtr = *(int **)&pTVar30->field_0x10;
        if ((local_918.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar5 = *(FClothCollection **)&this->field_0x8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pTVar30 = FClothCollection::GetUserDefinedAttribute<int>
                          (pFVar5,(FName *)FVar42.Data,(FName *)FVar39.Data);
      if (pTVar30 == (TManagedArray<int> *)0x0) {
        lVar46 = 0;
        iVar11 = 0;
      }
      else {
        iVar11 = (**(code **)(*(longlong *)pTVar30 + 0x60))(pTVar30);
        lVar46 = *(longlong *)&pTVar30->field_0x10;
        if ((iVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar13 = iVar11;
      if (iVar36 < iVar11) {
        iVar13 = iVar36;
      }
      iVar44 = 0;
      if (0 < iVar13) {
        iVar44 = iVar13;
      }
      local_878.DataPtr = (int *)(((longlong)iVar11 - (longlong)iVar44) * 4 + lVar46);
      local_878.ArrayNum = iVar44;
      if ((iVar44 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((iVar44 != local_918.ArrayNum) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("To.Num() == From.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                             ,0x297,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = 0;
      if (0 < iVar44) {
        do {
          piVar31 = TArrayView<int_const_,int>::operator[](&local_918,iVar11);
          iVar13 = *piVar31;
          piVar31 = TArrayView<int,int>::operator[](&local_878,iVar11);
          iVar11 = iVar11 + 1;
          *piVar31 = iVar13;
        } while (iVar11 < iVar44);
      }
      FVar42.Data = FVar42.Data + 8;
      uVar35 = uVar3 & 0xffffffff;
      FVar39.Data = (FScriptContainerElement *)local_960;
    }
    FConstClothCollection::GetUserDefinedAttributeNames<float>
              ((param_1->ClothCollection).Object,&local_8c8,(FName *)FVar39.Data);
    uVar3 = local_8c8._8_8_;
    uVar35 = (ulonglong)local_8c8.ArrayNum;
    local_958 = (FName *)(local_8c8.AllocatorInstance.Data + uVar35 * 8);
    FVar42.Data = local_8c8.AllocatorInstance.Data;
    while( true ) {
      pFVar41 = local_958;
      uVar43 = 0;
      if (local_8c8.ArrayNum != (int)uVar35) {
        local_975 = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_975);
      }
      if ((FName *)FVar42.Data == pFVar41) break;
      pFVar38 = *(FConstClothCollection **)&this->field_0x8;
      local_928.ComparisonIndex.Value = 0;
      local_928.Number = 0;
      bVar8 = FConstClothCollection::IsValid(pFVar38,None);
      if (((!bVar8) ||
          (iVar11 = FManagedArrayCollection::NumElements
                              ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
          iVar11 != 1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                             ,0x65a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar5 = *(FClothCollection **)&this->field_0x8;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FClothCollection::FindOrAddUserDefinedAttribute<float>
                (pFVar5,(FName *)FVar42.Data,(FName *)FVar39.Data,&local_928);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar29 = FConstClothCollection::GetUserDefinedAttribute<float>
                          ((param_1->ClothCollection).Object,(FName *)FVar42.Data,
                           (FName *)FVar39.Data);
      uVar35 = uVar43;
      if (pTVar29 != (TManagedArray<float> *)0x0) {
        uVar12 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
        uVar43 = *(ulonglong *)&pTVar29->field_0x10;
        uVar35 = (ulonglong)uVar12;
        if (((int)uVar12 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      local_968 = *(FClothCollection **)&this->field_0x8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pTVar29 = FClothCollection::GetUserDefinedAttribute<float>
                          (local_968,(FName *)FVar42.Data,(FName *)FVar39.Data);
      if (pTVar29 == (TManagedArray<float> *)0x0) {
        local_968 = (FClothCollection *)0x0;
        iVar11 = 0;
      }
      else {
        iVar11 = (**(code **)(*(longlong *)pTVar29 + 0x60))(pTVar29);
        local_968 = *(FClothCollection **)&pTVar29->field_0x10;
        if ((iVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar13 = iVar11;
      if (iVar36 < iVar11) {
        iVar13 = iVar36;
      }
      iVar44 = 0;
      if (0 < iVar13) {
        iVar44 = iVar13;
      }
      puVar40 = (undefined4 *)((longlong)local_968 + ((longlong)iVar11 - (longlong)iVar44) * 4);
      if ((iVar44 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((iVar44 != (int)uVar35) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("To.Num() == From.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                             ,0x297,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = 0;
      if (0 < iVar44) {
        lVar46 = uVar43 - (longlong)puVar40;
        do {
          uVar37 = 0;
          if ((int)uVar12 < (int)uVar35) {
            uVar37 = ~uVar12 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar8)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar12 = uVar12 + 1;
          *puVar40 = *(undefined4 *)((longlong)puVar40 + lVar46);
          puVar40 = puVar40 + 1;
        } while ((int)uVar12 < iVar44);
      }
      FVar42.Data = FVar42.Data + 8;
      uVar35 = uVar3 & 0xffffffff;
      FVar39.Data = (FScriptContainerElement *)local_960;
    }
    FConstClothCollection::GetUserDefinedAttributeNames<UE::Math::TVector<float>_>
              ((param_1->ClothCollection).Object,&local_8d8,(FName *)FVar39.Data);
    uVar3 = local_8d8._8_8_;
    uVar35 = (ulonglong)local_8d8.ArrayNum;
    local_958 = (FName *)(local_8d8.AllocatorInstance.Data + uVar35 * 8);
    FVar42.Data = local_8d8.AllocatorInstance.Data;
    while( true ) {
      pFVar41 = local_958;
      if (local_8d8.ArrayNum != (int)uVar35) {
        local_974[0] = 0;
        `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_974);
      }
      if ((FName *)FVar42.Data == pFVar41) break;
      pFVar38 = *(FConstClothCollection **)&this->field_0x8;
      local_920.ComparisonIndex.Value = 0;
      local_920.Number = 0;
      bVar8 = FConstClothCollection::IsValid(pFVar38,None);
      if (((!bVar8) ||
          (iVar11 = FManagedArrayCollection::NumElements
                              ((pFVar38->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
          iVar11 != 1)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                             ,0x65a,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar5 = *(FClothCollection **)&this->field_0x8;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      FClothCollection::FindOrAddUserDefinedAttribute<UE::Math::TVector<float>_>
                (pFVar5,(FName *)FVar42.Data,(FName *)FVar39.Data,&local_920);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar32 = FConstClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                          ((param_1->ClothCollection).Object,(FName *)FVar42.Data,
                           (FName *)FVar39.Data);
      if (pTVar32 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        local_908.DataPtr = (TVector<float> *)0x0;
        local_908.ArrayNum = 0;
      }
      else {
        local_908.ArrayNum = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32);
        local_908.DataPtr = *(TVector<float> **)&pTVar32->field_0x10;
        if ((local_908.ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      pTVar4 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar5 = *(FClothCollection **)&this->field_0x8;
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      pTVar32 = FClothCollection::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                          (pFVar5,(FName *)FVar42.Data,(FName *)FVar39.Data);
      if (pTVar32 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
        lVar46 = 0;
        iVar11 = 0;
      }
      else {
        iVar11 = (**(code **)(*(longlong *)pTVar32 + 0x60))(pTVar32);
        lVar46 = *(longlong *)&pTVar32->field_0x10;
        if ((iVar11 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      iVar13 = iVar11;
      if (iVar36 < iVar11) {
        iVar13 = iVar36;
      }
      iVar44 = 0;
      if (0 < iVar13) {
        iVar44 = iVar13;
      }
      local_868.DataPtr = (TVector<float> *)(((longlong)iVar11 - (longlong)iVar44) * 0xc + lVar46);
      local_868.ArrayNum = iVar44;
      if ((iVar44 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((iVar44 != local_908.ArrayNum) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("To.Num() == From.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\ClothCollection.h"
                             ,0x297,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar11 = 0;
      if (0 < iVar44) {
        do {
          pTVar33 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&local_908,iVar11);
          uVar1 = *(undefined8 *)&pTVar33->field0_0x0;
          fVar2 = (pTVar33->field0_0x0)._s_0.Z;
          pTVar33 = TArrayView<UE::Math::TVector<float>,int>::operator[](&local_868,iVar11);
          iVar11 = iVar11 + 1;
          *(undefined8 *)&pTVar33->field0_0x0 = uVar1;
          (pTVar33->field0_0x0)._s_0.Z = fVar2;
        } while (iVar11 < iVar44);
      }
      FVar42.Data = FVar42.Data + 8;
      uVar35 = uVar3 & 0xffffffff;
      FVar39.Data = (FScriptContainerElement *)local_960;
    }
    if ((FName *)local_8d8.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_8d8.AllocatorInstance.Data);
    }
    if ((FName *)local_8c8.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_8c8.AllocatorInstance.Data);
    }
    if ((FName *)local_8b8.AllocatorInstance.Data != (FName *)0x0) {
      FMemory::Free(local_8b8.AllocatorInstance.Data);
    }
    FVar39.Data = FVar39.Data + 8;
    uVar35 = (ulonglong)local_970;
  } while( true );
}

// CompactSeamStitchLookup @ 14db4eb40

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::CompactSeamStitchLookup(FCollectionClothFacade *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_28;
  
  GetSeamStitchLookupPrivate(this,&local_28);
  if (local_28.DataPtr != local_28.DataPtr + local_28.ArrayNum) {
    piVar7 = &(local_28.DataPtr)->ArrayNum;
    do {
      iVar6 = *piVar7;
      uVar9 = 0;
      if (0 < iVar6) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < iVar6) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
                       AllocatorInstance).Data + lVar8) == -1) {
            uVar5 = 0;
            if ((int)uVar9 < *piVar7) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->AllocatorInstance)
                     .Data;
            iVar6 = ~uVar9 + *piVar7;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(pFVar2 + (longlong)(int)uVar9 * 4,pFVar2 + (longlong)(*piVar7 - iVar6) * 4,
                      (longlong)iVar6 << 2);
            }
            *piVar7 = *piVar7 + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)(piVar7 + -2),*piVar7,piVar7 + 1);
          }
          else {
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 4;
          }
          iVar6 = *piVar7;
        } while ((int)uVar9 < iVar6);
      }
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + 2);
      piVar7 = piVar7 + 4;
    } while (pTVar1 != local_28.DataPtr + local_28.ArrayNum);
  }
  return;
}

// CompactSimMorphTargets @ 14db4ecd0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::CompactSimMorphTargets(FCollectionClothFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *this_00;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TArrayView<int,int> *pTVar9;
  int local_88;
  uint local_84;
  TArray<int,TSizedDefaultAllocator<32>_> local_80;
  TArray<int,TSizedDefaultAllocator<32>_> local_70;
  TArrayView<int,int> local_60;
  undefined **local_50;
  FConstClothCollection *local_48;
  TReferenceControllerBase<1> *local_40;
  int local_38;
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  local_88 = 0;
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimMorphTargets);
  if (local_88 < iVar6) {
    do {
      iVar6 = local_88;
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FConstClothCollection **)&this->field_0x8;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = iVar6;
      local_48 = this_00;
      local_40 = pTVar1;
      bVar5 = FConstClothCollection::IsValid(this_00,CookedOnly);
      if (((!bVar5) && (bVar5 = FConstClothCollection::IsValid(this_00,SimMorphTargets), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                             ,0x44,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((iVar6 < 0) ||
          (iVar7 = FManagedArrayCollection::NumElements
                             ((this_00->ManagedArrayCollection).Object,
                              ClothCollectionGroup::SimMorphTargets), iVar7 <= iVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                             ,0x45,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_50 = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_80.ArrayNum = 0;
      local_80.ArrayMax = 0;
      pTVar9 = FCollectionClothSimMorphTargetFacade::GetSimMorphTargetSimVertex3DIndex
                         ((FCollectionClothSimMorphTargetFacade *)&local_50,&local_60);
      local_84 = 0;
      iVar6 = pTVar9->ArrayNum;
      piVar2 = pTVar9->DataPtr;
      if (0 < iVar6) {
        do {
          uVar4 = local_84;
          uVar8 = 0;
          if ((int)local_84 < iVar6) {
            uVar8 = ~local_84 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (piVar2[(int)uVar4] == -1) {
            if (((local_80.AllocatorInstance.Data <= (FScriptContainerElement *)&local_84) &&
                ((FScriptContainerElement *)&local_84 <
                 local_80.AllocatorInstance.Data + (longlong)local_80.ArrayMax * 4)) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar7 = local_80.ArrayNum;
            if (local_80.ArrayNum == local_80.ArrayMax) {
              iVar7 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_80.AllocatorInstance,&local_80.ArrayMax);
            }
            local_80.ArrayNum = iVar7 + 1;
            *(uint *)(local_80.AllocatorInstance.Data + (longlong)iVar7 * 4) = local_84;
          }
          local_84 = local_84 + 1;
        } while ((int)local_84 < iVar6);
      }
      FCollectionClothSimMorphTargetFacade::RemoveSimMorphTargetVertices
                ((FCollectionClothSimMorphTargetFacade *)&local_50,&local_80);
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      iVar6 = FConstClothCollection::GetNumElements
                        (local_48,local_48->SimMorphTargetVerticesStart,
                         local_48->SimMorphTargetVerticesEnd,local_38);
      if (iVar6 == 0) {
        if (((local_70.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             local_70.AllocatorInstance.Data + (longlong)local_70.ArrayMax * 4)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = local_70.ArrayNum;
        if (local_70.ArrayNum == local_70.ArrayMax) {
          iVar6 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&local_70.AllocatorInstance,&local_70.ArrayMax);
        }
        local_70.ArrayNum = iVar6 + 1;
        *(int *)(local_70.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_88;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
      local_88 = local_88 + 1;
      iVar6 = FManagedArrayCollection::NumElements
                        ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                         ClothCollectionGroup::SimMorphTargets);
    } while (local_88 < iVar6);
  }
  RemoveSimMorphTargets(this,&local_70);
  if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.AllocatorInstance.Data);
  }
  return;
}

// CompactSimVertex2DLookup @ 14db4f0c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::CompactSimVertex2DLookup
          (FCollectionClothFacade *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  uint uVar9;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_28;
  
  GetSimVertex2DLookupPrivate(this,&local_28);
  if (local_28.DataPtr != local_28.DataPtr + local_28.ArrayNum) {
    piVar7 = &(local_28.DataPtr)->ArrayNum;
    do {
      iVar6 = *piVar7;
      uVar9 = 0;
      if (0 < iVar6) {
        lVar8 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar9 < iVar6) {
            uVar5 = ~uVar9 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->
                       AllocatorInstance).Data + lVar8) == -1) {
            uVar5 = 0;
            if ((int)uVar9 < *piVar7) {
              uVar5 = ~uVar9 >> 0x1f;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + -2))->AllocatorInstance)
                     .Data;
            iVar6 = ~uVar9 + *piVar7;
            if (1 < iVar6) {
              iVar6 = 1;
            }
            if (iVar6 != 0) {
              memmove(pFVar2 + (longlong)(int)uVar9 * 4,pFVar2 + (longlong)(*piVar7 - iVar6) * 4,
                      (longlong)iVar6 << 2);
            }
            *piVar7 = *piVar7 + -1;
            Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,(ForAnyElementType *)(piVar7 + -2),*piVar7,piVar7 + 1);
          }
          else {
            uVar9 = uVar9 + 1;
            lVar8 = lVar8 + 4;
          }
          iVar6 = *piVar7;
        } while ((int)uVar9 < iVar6);
      }
      pTVar1 = (TArray<int,TSizedDefaultAllocator<32>_> *)(piVar7 + 2);
      piVar7 = piVar7 + 4;
    } while (pTVar1 != local_28.DataPtr + local_28.ArrayNum);
  }
  return;
}

// DefineSchema @ 14db54b80

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::DefineSchema
          (FCollectionClothFacade *this,EClothCollectionExtendedSchemas param_1)

{
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::DefineSchema(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SetDefaults(this);
  return;
}

// GetClothCollection @ 14db57570

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetClothCollection
          (FCollectionClothFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *__return_storage_ptr__)

{
  FClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  
  pFVar1 = *(FClothCollection **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    __return_storage_ptr__->Object = pFVar1;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Object = pFVar1;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetCustomResizingRegionSet @ 14db57880

TArrayView<FString,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetCustomResizingRegionSet
          (FCollectionClothFacade *this,TArrayView<FString,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FString,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x250);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FString *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FString *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FString,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetCustomResizingRegionType @ 14db579f0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetCustomResizingRegionType
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 600);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (int *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<int,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetFabric @ 14db57d90

FCollectionClothFabricFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetFabric
          (FCollectionClothFacade *this,FCollectionClothFabricFacade *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothFabricConstFacade::FCollectionClothFabricConstFacade
            ((FCollectionClothFabricConstFacade *)__return_storage_ptr__,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ =
       &___7FCollectionClothFabricFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPreResizedSimPosition3D @ 14db586b0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetPreResizedSimPosition3D
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x198);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderBoneIndices @ 14db58960

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderBoneIndices
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x208);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderBoneWeights @ 14db58e80

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderBoneWeights
          (FCollectionClothFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x210);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderColor @ 14db59140

TArrayView<FLinearColor,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderColor
          (FCollectionClothFacade *this,TArrayView<FLinearColor,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FLinearColor,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x200);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FLinearColor *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FLinearColor *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FLinearColor,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderCustomResizingBlend @ 14db59660

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderCustomResizingBlend
          (FCollectionClothFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<float,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x248);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (float *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<float,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerNormalBaryCoordsAndDist @ 14db59920

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerNormalBaryCoordsAndDist
          (FCollectionClothFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x220);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerNumInfluences @ 14db59be0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerNumInfluences
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x110);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (int *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<int,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerPositionBaryCoordsAndDist @ 14db59e00

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerPositionBaryCoordsAndDist
          (FCollectionClothFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x218);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerSimIndices3D @ 14db5a0c0

TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerSimIndices3D
          (FCollectionClothFacade *this,
          TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x230);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerSkinningBlend @ 14db5a5e0

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerSkinningBlend
          (FCollectionClothFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<float,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x240);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (float *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<float,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerTangentBaryCoordsAndDist @ 14db5a8a0

TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerTangentBaryCoordsAndDist
          (FCollectionClothFacade *this,
          TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x228);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderDeformerWeight @ 14db5ab60

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderDeformerWeight
          (FCollectionClothFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x238);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderIndices @ 14db5ae40

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderIndices
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1d0);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderMaterialSoftObjectPathName @ 14db5b100

TArrayView<FSoftObjectPath,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderMaterialSoftObjectPathName
          (FCollectionClothFacade *this,TArrayView<FSoftObjectPath,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FSoftObjectPath,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x118);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FSoftObjectPath *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FSoftObjectPath *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FSoftObjectPath,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderNormal @ 14db5b380

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderNormal
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1e0);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderPattern @ 14db5b5e0

FCollectionClothRenderPatternFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderPattern
          (FCollectionClothFacade *this,FCollectionClothRenderPatternFacade *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothRenderPatternConstFacade::FCollectionClothRenderPatternConstFacade
            ((FCollectionClothRenderPatternConstFacade *)__return_storage_ptr__,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ =
       &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderPosition @ 14db5b720

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderPosition
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1d8);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderTangentU @ 14db5b9e0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderTangentU
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1e8);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderTangentV @ 14db5bca0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderTangentV
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1f0);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetRenderUVs @ 14db5bf60

TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetRenderUVs
          (FCollectionClothFacade *this,
          TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1f8);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr =
         (TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>,int> *)
                 (*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSeam @ 14db5c440

FCollectionClothSeamFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSeam
          (FCollectionClothFacade *this,FCollectionClothSeamFacade *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSeamConstFacade::FCollectionClothSeamConstFacade
            ((FCollectionClothSeamConstFacade *)__return_storage_ptr__,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSeamStitchLookupPrivate @ 14db5ca80

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSeamStitchLookupPrivate
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x188);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMesh @ 14db5d070

FCollectionClothSimAccessoryMeshFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMesh
          (FCollectionClothFacade *this,
          FCollectionClothSimAccessoryMeshFacade *__return_storage_ptr__,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
            ((FCollectionClothSimAccessoryMeshConstFacade *)__return_storage_ptr__,&local_18,param_1
            );
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ =
       &___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneIndicesAttribute @ 14db5d480

TArrayView<FName,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMeshBoneIndicesAttribute
          (FCollectionClothFacade *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FName,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x278);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FName *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FName,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshBoneWeightsAttribute @ 14db5d950

TArrayView<FName,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMeshBoneWeightsAttribute
          (FCollectionClothFacade *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FName,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x280);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FName *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FName,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshName @ 14db5db80

TArrayView<FName,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMeshName
          (FCollectionClothFacade *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FName,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x260);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FName *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FName,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshNormalAttribute @ 14db5e080

TArrayView<FName,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMeshNormalAttribute
          (FCollectionClothFacade *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FName,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x270);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FName *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FName,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimAccessoryMeshPosition3DAttribute @ 14db5e580

TArrayView<FName,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimAccessoryMeshPosition3DAttribute
          (FCollectionClothFacade *this,TArrayView<FName,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<FName,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x268);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (FName *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (FName *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<FName,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimBoneIndices @ 14db5e7b0

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimBoneIndices
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x160);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimBoneWeights @ 14db5e920

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimBoneWeights
          (FCollectionClothFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x168);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimCustomResizingBlend @ 14db5ea90

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimCustomResizingBlend
          (FCollectionClothFacade *this,TArrayView<float,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<float,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 400);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (float *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<float,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimImportVertexID @ 14db5ec20

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimImportVertexID
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar6 = FConstClothCollection::IsValid(this_00,Import);
  if ((!bVar6) ||
     (iVar7 = FManagedArrayCollection::NumElements
                        ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
     iVar7 != 1)) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    this_01 = *(FClothCollection **)&this->field_0x8;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FClothCollection::DefineSchema(this_01,Import);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SetDefaults(this);
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x148);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (int *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TArrayView<int,int> *)(*pcVar5)();
      return pTVar8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimIndices2D @ 14db5efc0

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimIndices2D
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x128);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimIndices3D @ 14db5f280

TArrayView<UE::Math::TIntVector3<int>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimIndices3D
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TIntVector3<int>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TIntVector3<int>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x130);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TIntVector3<int> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TIntVector3<int>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimMorphTarget @ 14db5f4e0

FCollectionClothSimMorphTargetFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimMorphTarget
          (FCollectionClothFacade *this,FCollectionClothSimMorphTargetFacade *__return_storage_ptr__
          ,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSimMorphTargetConstFacade::FCollectionClothSimMorphTargetConstFacade
            ((FCollectionClothSimMorphTargetConstFacade *)__return_storage_ptr__,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ =
       &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimMorphTargetPositionDelta @ 14db5f7c0

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimMorphTargetPositionDelta
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1b8);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimMorphTargetSimVertex3DIndex @ 14db5fa80

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimMorphTargetSimVertex3DIndex
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1c8);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (int *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<int,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimMorphTargetTangentZDelta @ 14db5fd40

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimMorphTargetTangentZDelta
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x1c0);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimNormal @ 14db60020

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimNormal
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x158);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimPattern @ 14db60130

FCollectionClothSimPatternFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimPattern
          (FCollectionClothFacade *this,FCollectionClothSimPatternFacade *__return_storage_ptr__,
          int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  else {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.Object = pFVar2;
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
            ((FCollectionClothSimPatternConstFacade *)__return_storage_ptr__,&local_18,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)__return_storage_ptr__ =
       &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimPosition2D @ 14db60270

TArrayView<UE::Math::TVector2<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimPosition2D
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector2<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector2<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x138);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector2<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector2<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector2<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimPosition3D @ 14db60790

TArrayView<UE::Math::TVector<float>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimPosition3D
          (FCollectionClothFacade *this,
          TArrayView<UE::Math::TVector<float>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<UE::Math::TVector<float>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x150);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TVector<float> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TVector<float> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<UE::Math::TVector<float>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimVertex2DLookupPrivate @ 14db60900

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimVertex2DLookupPrivate
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x180);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetSimVertex3DLookupPrivate @ 14db60bc0

TArrayView<int,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetSimVertex3DLookupPrivate
          (FCollectionClothFacade *this,TArrayView<int,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<int,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x140);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (int *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (int *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<int,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTetherKinematicIndex @ 14db61150

TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetTetherKinematicIndex
          (FCollectionClothFacade *this,
          TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x170);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<int,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetTetherReferenceLength @ 14db612c0

TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetTetherReferenceLength
          (FCollectionClothFacade *this,
          TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar8;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar3 = *(longlong *)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar4 = *(longlong **)(lVar3 + 0x178);
  if (plVar4 == (longlong *)0x0) {
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar7 = (**(code **)(*plVar4 + 0x60))(plVar4);
    __return_storage_ptr__->DataPtr = (TArray<float,TSizedDefaultAllocator<32>_> *)plVar4[2];
    __return_storage_ptr__->ArrayNum = iVar7;
    if (iVar7 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar8 = (TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *)(*pcVar5)();
        return pTVar8;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetWeightMap @ 14db614c0

TArrayView<float,int> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::GetWeightMap
          (FCollectionClothFacade *this,TArrayView<float,int> *__return_storage_ptr__,FName *param_1
          )

{
  TReferenceControllerBase<1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TManagedArray<float> *pTVar6;
  TArrayView<float,int> *pTVar7;
  
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar6 = FClothCollection::GetUserDefinedAttribute<float>
                     (this_00,param_1,&ClothCollectionGroup::SimVertices3D);
  if (pTVar6 == (TManagedArray<float> *)0x0) {
    __return_storage_ptr__->DataPtr = (float *)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar5 = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    __return_storage_ptr__->DataPtr = *(float **)&pTVar6->field_0x10;
    __return_storage_ptr__->ArrayNum = iVar5;
    if (iVar5 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar7 = (TArrayView<float,int> *)(*pcVar3)();
        return pTVar7;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Initialize @ 14db62510

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::Initialize
          (FCollectionClothFacade *this,FCollectionClothConstFacade *param_1)

{
  FConstClothCollection *this_00;
  bool bVar1;
  int iVar2;
  TVector<float> *pTVar3;
  float fVar4;
  
  Reset(this);
  this_00 = (param_1->ClothCollection).Object;
  bVar1 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar1) {
    iVar2 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar2 == 1) {
      iVar2 = FManagedArrayCollection::NumElements
                        ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                         ClothCollectionGroup::Solvers);
      if (iVar2 == 1) {
        pTVar3 = FCollectionClothConstFacade::GetSolverGravity(param_1);
        SetSolverGravity(this,pTVar3);
        fVar4 = FCollectionClothConstFacade::GetSolverAirDamping(param_1);
        SetSolverAirDamping(this,fVar4);
        iVar2 = FCollectionClothConstFacade::GetSolverSubSteps(param_1);
        SetSolverSubSteps(this,iVar2);
        fVar4 = FCollectionClothConstFacade::GetSolverTimeStep(param_1);
        SetSolverTimeStep(this,fVar4);
      }
    }
  }
  Append(this,param_1);
  return;
}

// InitializeCookedOnly @ 14db652f0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::InitializeCookedOnly
          (FCollectionClothFacade *this,FCollectionClothConstFacade *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  FClothCollection *this_00;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  TArrayView<UE::Math::TVector<float>,int> *pTVar9;
  FName FVar10;
  TArrayView<UE::Math::TVector<float>_const_,int> *pTVar11;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> *pTVar12;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> *pTVar13;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> *pTVar14;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> *pTVar15;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *pTVar16;
  int iVar17;
  undefined **local_168;
  FConstClothCollection *local_160;
  TReferenceControllerBase<1> *local_158;
  int local_150;
  TArrayView<UE::Math::TVector<float>_const_,int> local_148;
  undefined **local_138;
  FConstClothCollection *local_130;
  TReferenceControllerBase<1> *local_128;
  int local_120;
  FCollectionClothSimAccessoryMeshConstFacade local_118;
  TArrayView<UE::Math::TVector<float>,int> local_f8;
  FCollectionClothSimMorphTargetConstFacade local_e8;
  TArrayView<UE::Math::TVector<float>,int> local_c8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_b8;
  TArrayView<UE::Math::TVector<float>,int> local_a8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_98;
  TArrayView<UE::Math::TVector<float>,int> local_88;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>_const_,int> local_78;
  TArrayView<TArray<int,TSizedDefaultAllocator<32>_>,int> local_68;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>_const_,int> local_58;
  TArrayView<TArray<float,TSizedDefaultAllocator<32>_>,int> local_48;
  
  SetNumSimMorphTargets(this,0,true);
  iVar6 = FManagedArrayCollection::NumElements
                    ((((param_1->ClothCollection).Object)->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimMorphTargets);
  SetNumSimMorphTargets(this,iVar6,true);
  iVar17 = 0;
  if (0 < iVar6) {
    do {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar2 = *(FConstClothCollection **)&this->field_0x8;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_130 = pFVar2;
      local_128 = pTVar1;
      local_120 = iVar17;
      bVar5 = FConstClothCollection::IsValid(pFVar2,CookedOnly);
      if (((!bVar5) && (bVar5 = FConstClothCollection::IsValid(pFVar2,SimMorphTargets), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                             ,0x44,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar17 < 0) ||
          (iVar7 = FManagedArrayCollection::NumElements
                             ((pFVar2->ManagedArrayCollection).Object,
                              ClothCollectionGroup::SimMorphTargets), iVar7 <= iVar17)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                             ,0x45,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_138 = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FCollectionClothSimMorphTargetConstFacade::FCollectionClothSimMorphTargetConstFacade
                (&local_e8,&param_1->ClothCollection,iVar17);
      FCollectionClothSimMorphTargetFacade::Initialize
                ((FCollectionClothSimMorphTargetFacade *)&local_138,&local_e8,0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_e8.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_128)
      ;
      iVar17 = iVar17 + 1;
    } while (iVar17 < iVar6);
  }
  iVar6 = 0;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar16 = &param_1->ClothCollection;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  iVar17 = FManagedArrayCollection::NumElements
                     ((pTVar16->Object->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimVertices3D);
  FClothCollection::SetNumElements(this_00,iVar17,&ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  pTVar3 = pTVar16->Object->PreResizedSimPosition3D;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    local_148.DataPtr = (TVector<float> *)0x0;
    local_148.ArrayNum = 0;
  }
  else {
    local_148.ArrayNum = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3);
    local_148.DataPtr = *(TVector<float> **)&pTVar3->field_0x10;
    if ((local_148.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pTVar9 = GetPreResizedSimPosition3D(this,&local_c8);
  iVar8 = FManagedArrayCollection::NumElements
                    ((pTVar16->Object->ManagedArrayCollection).Object,
                     ClothCollectionGroup::SimVertices3D);
  iVar17 = pTVar9->ArrayNum;
  iVar7 = iVar17;
  if (iVar8 < iVar17) {
    iVar7 = iVar8;
  }
  local_f8.ArrayNum = 0;
  if (0 < iVar7) {
    local_f8.ArrayNum = iVar7;
  }
  local_f8.DataPtr = pTVar9->DataPtr + ((longlong)iVar17 - (longlong)local_f8.ArrayNum);
  if ((local_f8.ArrayNum < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(&local_f8,&local_148);
  SetNumSimAccessoryMeshes(this,0,false);
  iVar17 = FManagedArrayCollection::NumElements
                     ((pTVar16->Object->ManagedArrayCollection).Object,
                      ClothCollectionGroup::SimAccessoryMeshes);
  SetNumSimAccessoryMeshes(this,iVar17,false);
  if (0 < iVar17) {
    do {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      pFVar2 = *(FConstClothCollection **)&this->field_0x8;
      if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
      }
      else {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_160 = pFVar2;
      local_158 = pTVar1;
      local_150 = iVar6;
      bVar5 = FConstClothCollection::IsValid(pFVar2,CookedOnly);
      if (((!bVar5) && (bVar5 = FConstClothCollection::IsValid(pFVar2,SimAccessoryMeshes), !bVar5))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimAccessoryMeshes)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                                ,0x3f,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (((iVar6 < 0) ||
          (iVar7 = FManagedArrayCollection::NumElements
                             ((pFVar2->ManagedArrayCollection).Object,
                              ClothCollectionGroup::SimAccessoryMeshes), iVar7 <= iVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("MeshIndex >= 0 && MeshIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimAccessoryMeshes)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                             ,0x40,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      local_168 = &___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FCollectionClothSimAccessoryMeshConstFacade::FCollectionClothSimAccessoryMeshConstFacade
                (&local_118,pTVar16,iVar6);
      FCollectionClothSimAccessoryMeshFacade::GenerateDynamicAttributesIfNecessary
                ((FCollectionClothSimAccessoryMeshFacade *)&local_168);
      FVar10 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshName(&local_118);
      FCollectionClothSimAccessoryMeshFacade::SetSimAccessoryMeshName
                ((FCollectionClothSimAccessoryMeshFacade *)&local_168,(FName *)FVar10);
      pTVar11 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshPosition3D
                          (&local_118,&local_b8);
      pTVar9 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshPosition3D
                         ((FCollectionClothSimAccessoryMeshFacade *)&local_168,&local_a8);
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar9,pTVar11);
      pTVar11 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshNormal
                          (&local_118,&local_98);
      pTVar9 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshNormal
                         ((FCollectionClothSimAccessoryMeshFacade *)&local_168,&local_88);
      FConstClothCollection::CopyArrayViewData<UE::Math::TVector<float>_>(pTVar9,pTVar11);
      pTVar12 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneIndices
                          (&local_118,&local_78);
      pTVar13 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneIndices
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_168,&local_68);
      FConstClothCollection::CopyArrayViewData<TArray<int,TSizedDefaultAllocator<32>_>_>
                (pTVar13,pTVar12);
      pTVar14 = FCollectionClothSimAccessoryMeshConstFacade::GetSimAccessoryMeshBoneWeights
                          (&local_118,&local_58);
      pTVar15 = FCollectionClothSimAccessoryMeshFacade::GetSimAccessoryMeshBoneWeights
                          ((FCollectionClothSimAccessoryMeshFacade *)&local_168,&local_48);
      FConstClothCollection::CopyArrayViewData<TArray<float,TSizedDefaultAllocator<32>_>_>
                (pTVar15,pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.ClothCollection.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_158)
      ;
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar17);
  }
  return;
}

// PostSerialize @ 14db66590

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::PostSerialize
          (FCollectionClothFacade *this,FArchive *param_1)

{
  FClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  
  this_00 = *(FClothCollection **)&this->field_0x8;
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::PostSerialize(this_00,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveAllSimVertices3D @ 14db67cc0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveAllSimVertices3D(FCollectionClothFacade *this)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimVertices3D);
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimVertices3D);
  if (iVar4 < iVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSimVertices >= NumSimVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                       ,0x46d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::SetNumElements(this_00,iVar5 - iVar4,&ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveFabrics @ 14db68440

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveFabrics
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FConstClothCollection *this_00;
  undefined8 *puVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  undefined **local_58;
  FConstClothCollection *local_50;
  TReferenceControllerBase<1> *local_48;
  int local_40;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_res10 = pFVar11 + (longlong)iVar1 * 4;
  do {
    pFVar8 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar8) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar4 = *(undefined8 **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      plVar5 = (longlong *)*puVar4;
      pTVar6 = (TReferenceControllerBase<1> *)puVar4[1];
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&ClothCollectionGroup::Fabrics,param_1,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    iVar2 = *(int *)pFVar11;
    this_00 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = this_00;
    local_48 = pTVar3;
    local_40 = iVar2;
    bVar9 = FConstClothCollection::IsValid(this_00,None);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                         ,0x55,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar2 < 0) {
LAB_14db6852c:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("FabricIndex >= 0 && FabricIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Fabrics)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                         ,0x56,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      iVar10 = FManagedArrayCollection::NumElements
                         ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Fabrics);
      if (iVar10 <= iVar2) goto LAB_14db6852c;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = &___7FCollectionClothFabricFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothFabricFacade::SetDefaults((FCollectionClothFabricFacade *)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// RemoveRenderPatterns @ 14db68810

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveRenderPatterns
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FConstClothCollection *this_00;
  undefined8 *puVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  undefined **local_58;
  FConstClothCollection *local_50;
  TReferenceControllerBase<1> *local_48;
  int local_40;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_res10 = pFVar11 + (longlong)iVar1 * 4;
  do {
    pFVar8 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar8) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar4 = *(undefined8 **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      plVar5 = (longlong *)*puVar4;
      pTVar6 = (TReferenceControllerBase<1> *)puVar4[1];
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&ClothCollectionGroup::RenderPatterns,param_1,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    iVar2 = *(int *)pFVar11;
    this_00 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = this_00;
    local_48 = pTVar3;
    local_40 = iVar2;
    bVar9 = FConstClothCollection::IsValid(this_00,None);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                         ,0xd1,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar2 < 0) {
LAB_14db688fc:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                         ,0xd2,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      iVar10 = FManagedArrayCollection::NumElements
                         ((this_00->ManagedArrayCollection).Object,
                          ClothCollectionGroup::RenderPatterns);
      if (iVar10 <= iVar2) goto LAB_14db688fc;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothRenderPatternFacade::SetNumRenderVertices
              ((FCollectionClothRenderPatternFacade *)&local_58,0);
    FCollectionClothRenderPatternFacade::SetNumRenderFaces
              ((FCollectionClothRenderPatternFacade *)&local_58,0);
    FCollectionClothRenderPatternFacade::SetDefaults
              ((FCollectionClothRenderPatternFacade *)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// RemoveSeams @ 14db68c00

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSeams
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FConstClothCollection *this_00;
  undefined8 *puVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  undefined **local_58;
  FConstClothCollection *local_50;
  TReferenceControllerBase<1> *local_48;
  int local_40;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_res10 = pFVar11 + (longlong)iVar1 * 4;
  do {
    pFVar8 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar8) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar4 = *(undefined8 **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      plVar5 = (longlong *)*puVar4;
      pTVar6 = (TReferenceControllerBase<1> *)puVar4[1];
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&ClothCollectionGroup::Seams,param_1,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    iVar2 = *(int *)pFVar11;
    this_00 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = this_00;
    local_48 = pTVar3;
    local_40 = iVar2;
    bVar9 = FConstClothCollection::IsValid(this_00,None);
    if (!bVar9) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x28a,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (iVar2 < 0) {
LAB_14db68ce8:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                         ,0x28b,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      iVar10 = FManagedArrayCollection::NumElements
                         ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Seams);
      if (iVar10 <= iVar2) goto LAB_14db68ce8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothSeamFacade::Reset((FCollectionClothSeamFacade *)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// RemoveSimAccessoryMeshes @ 14db690b0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimAccessoryMeshes
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  atomic<int> *paVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  FConstClothCollection *this_00;
  TManagedArray<FName> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  undefined1 local_res8 [8];
  uint local_res10;
  FScriptContainerElement *local_res18;
  undefined **local_58;
  FConstClothCollection *local_50;
  TReferenceControllerBase<1> *local_48;
  uint local_40;
  
  local_res10 = param_1->ArrayNum;
  uVar13 = (ulonglong)(int)local_res10;
  pFVar14 = (param_1->AllocatorInstance).Data;
  local_res18 = pFVar14 + uVar13 * 4;
  while( true ) {
    pFVar9 = local_res18;
    if (param_1->ArrayNum != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar9) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar5 = *(undefined8 **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      plVar6 = (longlong *)*puVar5;
      pTVar7 = (TReferenceControllerBase<1> *)puVar5[1];
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar6 + 0x28))(plVar6,&ClothCollectionGroup::SimAccessoryMeshes,param_1,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    uVar2 = *(uint *)pFVar14;
    this_00 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = this_00;
    local_48 = pTVar3;
    local_40 = uVar2;
    bVar10 = FConstClothCollection::IsValid(this_00,CookedOnly);
    if (((!bVar10) && (bVar10 = FConstClothCollection::IsValid(this_00,SimAccessoryMeshes), !bVar10)
        ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimAccessoryMeshes)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                                  ,0x3f,L""), bVar10)) break;
    if ((((int)uVar2 < 0) ||
        (iVar11 = FManagedArrayCollection::NumElements
                            ((this_00->ManagedArrayCollection).Object,
                             ClothCollectionGroup::SimAccessoryMeshes), iVar11 <= (int)uVar2)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("MeshIndex >= 0 && MeshIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimAccessoryMeshes)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                            ,0x40,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = &___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar4 = local_50->SimAccessoryMeshName;
    uVar12 = 0;
    if ((int)uVar2 < *(int *)&pTVar4->field_0x18) {
      uVar12 = ~uVar2 >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    *(undefined8 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar2 * 8) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothSimAccessoryMeshFacade::ClearDynamicAttributes
              ((FCollectionClothSimAccessoryMeshFacade *)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    uVar13 = (ulonglong)local_res10;
    pFVar14 = pFVar14 + 4;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// RemoveSimMorphTargetVertices3D @ 14db69550

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimMorphTargetVertices3D
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar3 = (longlong *)*puVar1;
  pTVar4 = (TReferenceControllerBase<1> *)puVar1[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&ClothCollectionGroup::SimMorphTargetVertices,param_1,0x101);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// RemoveSimMorphTargets @ 14db697d0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimMorphTargets
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FConstClothCollection *this_00;
  undefined8 *puVar4;
  longlong *plVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  FScriptContainerElement *pFVar8;
  bool bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res8 [8];
  FScriptContainerElement *local_res10;
  undefined **local_58;
  FConstClothCollection *local_50;
  TReferenceControllerBase<1> *local_48;
  int local_40;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  local_res10 = pFVar11 + (longlong)iVar1 * 4;
  do {
    pFVar8 = local_res10;
    if (param_1->ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar11 == pFVar8) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar4 = *(undefined8 **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      plVar5 = (longlong *)*puVar4;
      pTVar6 = (TReferenceControllerBase<1> *)puVar4[1];
      if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar5 + 0x28))(plVar5,&ClothCollectionGroup::SimMorphTargets,param_1,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    iVar2 = *(int *)pFVar11;
    this_00 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50 = this_00;
    local_48 = pTVar3;
    local_40 = iVar2;
    bVar9 = FConstClothCollection::IsValid(this_00,CookedOnly);
    if (!bVar9) {
      bVar9 = FConstClothCollection::IsValid(this_00,SimMorphTargets);
      if (!bVar9) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                           ,0x44,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
    }
    if (iVar2 < 0) {
LAB_14db698d0:
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                         ,0x45,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      iVar10 = FManagedArrayCollection::NumElements
                         ((this_00->ManagedArrayCollection).Object,
                          ClothCollectionGroup::SimMorphTargets);
      if (iVar10 <= iVar2) goto LAB_14db698d0;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_58 = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothSimMorphTargetFacade::SetNumSimMorphTargetVertices
              ((FCollectionClothSimMorphTargetFacade *)&local_58,0);
    FCollectionClothSimMorphTargetFacade::SetDefaults
              ((FCollectionClothSimMorphTargetFacade *)&local_58);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_48);
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// RemoveSimPatterns @ 14db699c0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimPatterns
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FConstClothCollection *pFVar3;
  TManagedArray<int> *pTVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  TReferenceControllerBase<1> *pTVar7;
  code *pcVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  atomic<int> *paVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  undefined **local_68;
  FConstClothCollection *local_60;
  TReferenceControllerBase<1> *local_58;
  int local_50;
  
  local_res18 = param_1->ArrayNum;
  uVar14 = (ulonglong)(int)local_res18;
  pFVar16 = (param_1->AllocatorInstance).Data;
  local_res20 = pFVar16 + uVar14 * 4;
  local_res10 = param_1;
  while( true ) {
    pFVar10 = local_res20;
    pTVar9 = local_res10;
    if (local_res10->ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar10) {
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar5 = *(undefined8 **)&this->field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      plVar6 = (longlong *)*puVar5;
      pTVar7 = (TReferenceControllerBase<1> *)puVar5[1];
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(*plVar6 + 0x28))(plVar6,&ClothCollectionGroup::SimPatterns,pTVar9,0x101);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    iVar1 = *(int *)pFVar16;
    pFVar3 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = pFVar3;
    local_58 = pTVar2;
    local_50 = iVar1;
    bVar11 = FConstClothCollection::IsValid(pFVar3,None);
    if ((!bVar11) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ClothCollection->IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                            ,0x71,L""), bVar11)) break;
    if (((iVar1 < 0) ||
        (iVar12 = FManagedArrayCollection::NumElements
                            ((pFVar3->ManagedArrayCollection).Object,
                             ClothCollectionGroup::SimPatterns), iVar12 <= iVar1)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                            ,0x72,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_68 = &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FCollectionClothSimPatternFacade::SetNumSimFaces
              ((FCollectionClothSimPatternFacade *)&local_68,0);
    iVar1 = local_50;
    pFVar3 = local_60;
    iVar12 = FConstClothCollection::GetNumElements
                       (local_60,local_60->SimVertices2DStart,local_60->SimVertices2DEnd,local_50);
    iVar13 = FConstClothCollection::GetNumElements
                       (pFVar3,pFVar3->SimVertices2DStart,pFVar3->SimVertices2DEnd,iVar1);
    if ((iVar12 < iVar13) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumSimVertices >= NumSimVertices",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                            ,0x126,L""), bVar11)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pTVar2 = local_58;
    if (local_58 == (TReferenceControllerBase<1> *)0x0) {
      paVar15 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar15 = &local_58->SharedReferenceCount;
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar15 = (atomic<int>)((int)*paVar15 + 1);
      UNLOCK();
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar15 = (atomic<int>)((int)*paVar15 + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = pFVar3->SimVertices2DEnd;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FClothCollection::SetNumElements
              ((FClothCollection *)pFVar3,iVar13 - iVar12,&ClothCollectionGroup::SimVertices2D,
               pFVar3->SimVertices2DStart,pTVar4,iVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FCollectionClothSimPatternFacade::SetDefaults((FCollectionClothSimPatternFacade *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    uVar14 = (ulonglong)local_res18;
    pFVar16 = pFVar16 + 4;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// RemoveSimVertices3D @ 14db69f50

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimVertices3D
          (FCollectionClothFacade *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong *plVar3;
  TReferenceControllerBase<1> *pTVar4;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  plVar3 = (longlong *)*puVar1;
  pTVar4 = (TReferenceControllerBase<1> *)puVar1[1];
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,&ClothCollectionGroup::SimVertices3D,param_1,0x101);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// RemoveSimVertices3D @ 14db69fd0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveSimVertices3D
          (FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimVertices3D);
  if (param_1 < iVar4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumSimVertices >= NumSimVertices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                       ,0x46d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::SetNumElements(this_00,iVar4 - param_1,&ClothCollectionGroup::SimVertices3D);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveUserDefinedAttribute @ 14db6a250

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveUserDefinedAttribute
          (FCollectionClothFacade *this,FName *param_1,FName *param_2)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar4 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar4 == 1) goto LAB_14db6a2b9;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x664,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14db6a2b9:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::RemoveUserDefinedAttribute(this_01,param_1,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// RemoveWeightMap @ 14db6a310

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::RemoveWeightMap
          (FCollectionClothFacade *this,FName *param_1)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_01;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_00,None);
  if (bVar3) {
    iVar4 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar4 == 1) goto LAB_14db6a371;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFacade.cpp"
                     ,0x64e,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_14db6a371:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_01 = *(FClothCollection **)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::RemoveUserDefinedAttribute(this_01,param_1,&ClothCollectionGroup::SimVertices3D)
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Reset @ 14db6a460

void __thiscall UE::Chaos::ClothAsset::FCollectionClothFacade::Reset(FCollectionClothFacade *this)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FManagedArrayCollection *pFVar4;
  FClothCollection *this_00;
  int iVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
  pFVar4 = (FManagedArrayCollection *)*puVar1;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = FManagedArrayCollection::NumElements(pFVar4,ClothCollectionGroup::Lods);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar6 = -iVar5;
  if (iVar6 != 0) {
    pFVar4 = (FManagedArrayCollection *)*puVar1;
    pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
    if (iVar6 < 1) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&ClothCollectionGroup::Lods,iVar5,0);
    }
    else {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::AddElements(pFVar4,iVar6,ClothCollectionGroup::Lods);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  puVar1 = *(undefined8 **)&this->field_0x8;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
  pFVar4 = (FManagedArrayCollection *)*puVar1;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar5 = FManagedArrayCollection::NumElements(pFVar4,ClothCollectionGroup::Lods);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar5 = 1 - iVar5;
  if (iVar5 != 0) {
    pFVar4 = (FManagedArrayCollection *)*puVar1;
    pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
    if (iVar5 < 1) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(pFVar4->_padding_ + 0x20))();
    }
    else {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::AddElements(pFVar4,iVar5,ClothCollectionGroup::Lods);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  RemoveAllSimVertices3D(this);
  SetNumSimPatterns(this,0);
  SetNumRenderPatterns(this,0);
  SetNumSeams(this,0);
  SetNumFabrics(this,0);
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Solvers);
  if (iVar5 == 1) {
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    puVar1 = *(undefined8 **)&this->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
    pFVar4 = (FManagedArrayCollection *)*puVar1;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar5 = FManagedArrayCollection::NumElements(pFVar4,ClothCollectionGroup::Solvers);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    iVar6 = -iVar5;
    if (iVar6 != 0) {
      pFVar4 = (FManagedArrayCollection *)*puVar1;
      pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
      if (iVar6 < 1) {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&ClothCollectionGroup::Solvers,iVar5,0);
      }
      else {
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        FManagedArrayCollection::AddElements(pFVar4,iVar6,ClothCollectionGroup::Solvers);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    this_00 = *(FClothCollection **)&this->field_0x8;
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FClothCollection::SetNumElements(this_00,1,&ClothCollectionGroup::Solvers);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  }
  SetNumSimMorphTargets(this,0,false);
  SetNumCustomResizingRegions(this,0);
  SetNumSimAccessoryMeshes(this,0,false);
  return;
}

// SetDefaults @ 14db6cd40

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetDefaults(FCollectionClothFacade *this)

{
  undefined8 *puVar1;
  TReferenceControllerBase<1> *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  FManagedArrayCollection *pFVar4;
  FConstClothCollection *this_00;
  bool bVar5;
  int iVar6;
  
  puVar1 = *(undefined8 **)&this->field_0x8;
  pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
  pFVar4 = (FManagedArrayCollection *)*puVar1;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar6 = FManagedArrayCollection::NumElements(pFVar4,ClothCollectionGroup::Lods);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar6 = 1 - iVar6;
  if (iVar6 != 0) {
    pFVar4 = (FManagedArrayCollection *)*puVar1;
    pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
    if (iVar6 < 1) {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&ClothCollectionGroup::Lods,-iVar6,1);
    }
    else {
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      FManagedArrayCollection::AddElements(pFVar4,iVar6,ClothCollectionGroup::Lods);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar5 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar5) {
    iVar6 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar6 == 1) {
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      puVar1 = *(undefined8 **)&this->field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
      pFVar4 = (FManagedArrayCollection *)*puVar1;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      iVar6 = FManagedArrayCollection::NumElements(pFVar4,ClothCollectionGroup::Solvers);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      iVar6 = 1 - iVar6;
      if (iVar6 != 0) {
        pFVar4 = (FManagedArrayCollection *)*puVar1;
        pTVar3 = (TReferenceControllerBase<1> *)puVar1[1];
        if (iVar6 < 1) {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,&ClothCollectionGroup::Solvers,-iVar6,1);
        }
        else {
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          FManagedArrayCollection::AddElements(pFVar4,iVar6,ClothCollectionGroup::Solvers);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      SetSolverGravity(this,&FDefaultSolver::Gravity);
      SetSolverAirDamping(this,__real_3d0f5c29);
      SetSolverSubSteps(this,1);
      SetSolverTimeStep(this,__real_3d072b02);
    }
  }
  return;
}

// SetNumCustomResizingRegions @ 14db6d7b0

/* WARNING: Removing unreachable block (ram,0x00014db6d95c) */

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumCustomResizingRegions
          (FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FClothCollection *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TArrayView<FString,int> *pTVar5;
  uint uVar6;
  FConstClothCollection *this_01;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 local_48;
  undefined8 local_40;
  TArrayView<FString,int> local_38;
  
  this_01 = *(FConstClothCollection **)&this->field_0x8;
  bVar3 = FConstClothCollection::IsValid(this_01,Resizing);
  if (bVar3) {
    iVar4 = FManagedArrayCollection::NumElements
                      ((this_01->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar4 == 1) goto LAB_14db6d82d;
    this_01 = *(FConstClothCollection **)&this->field_0x8;
  }
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::DefineSchema((FClothCollection *)this_01,Resizing);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SetDefaults(this);
LAB_14db6d82d:
  iVar4 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::CustomResizingRegions);
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FClothCollection **)&this->field_0x8;
  uVar8 = (ulonglong)iVar4;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::CustomResizingRegions);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  if (iVar4 < param_1) {
    lVar10 = uVar8 << 4;
    do {
      local_48 = 0;
      local_40 = 0;
      pTVar5 = GetCustomResizingRegionSet(this,&local_38);
      uVar7 = (uint)uVar8;
      uVar6 = 0;
      if ((int)uVar7 < pTVar5->ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      puVar9 = (undefined8 *)((longlong)&(pTVar5->DataPtr->Data).AllocatorInstance.Data + lVar10);
      if (puVar9 != &local_48) {
        if ((void *)*puVar9 != (void *)0x0) {
          FMemory::Free((void *)*puVar9);
        }
        *puVar9 = 0;
        *(undefined4 *)(puVar9 + 1) = 0;
        *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      lVar10 = lVar10 + 0x10;
    } while ((int)(uVar7 + 1) < param_1);
  }
  return;
}

// SetNumFabrics @ 14db6dde0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumFabrics
          (FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  FClothCollection *this_00;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  FAnisotropicData local_f8;
  FAnisotropicData local_ec;
  FAnisotropicData local_e0;
  undefined **local_d0;
  FConstClothCollection *local_c8;
  TReferenceControllerBase<1> *local_c0;
  int local_b8;
  undefined **local_b0;
  FConstClothCollection *local_a8;
  TReferenceControllerBase<1> *local_a0;
  int local_98;
  
  iVar10 = FManagedArrayCollection::NumElements
                     ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                      ClothCollectionGroup::Fabrics);
  iVar12 = param_1;
  while( true ) {
    if (iVar10 <= iVar12) {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::Fabrics);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      fVar8 = __real_3eb33333;
      fVar7 = __real_3f4ccccd;
      fVar6 = __real_3dcccccd;
      fVar5 = __real_3f000000;
      fVar4 = __real_3f800000;
      while( true ) {
        if (param_1 <= iVar10) {
          return;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar2 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_a8 = pFVar2;
        local_a0 = pTVar1;
        local_98 = iVar10;
        bVar9 = FConstClothCollection::IsValid(pFVar2,None);
        if ((!bVar9) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClothCollection->IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                               ,0x55,L""), bVar9)) break;
        if (((iVar10 < 0) ||
            (iVar12 = FManagedArrayCollection::NumElements
                                ((pFVar2->ManagedArrayCollection).Object,
                                 ClothCollectionGroup::Fabrics), iVar12 <= iVar10)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("FabricIndex >= 0 && FabricIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Fabrics)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                               ,0x56,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        local_b0 = &___7FCollectionClothFabricFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        local_f8.Weft = 100.0;
        local_f8.Warp = 100.0;
        local_f8.Bias = 100.0;
        local_ec.Weft = 50.0;
        local_ec.Warp = 50.0;
        local_ec.Bias = 50.0;
        local_e0.Weft = 100.0;
        local_e0.Warp = 100.0;
        local_e0.Bias = 100.0;
        FCollectionClothFabricFacade::Initialize
                  ((FCollectionClothFabricFacade *)&local_b0,&local_e0,fVar5,&local_ec,&local_f8,
                   fVar8,fVar7,fVar6,0.0,-1,fVar4);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_a0);
        iVar10 = iVar10 + 1;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar2 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_c8 = pFVar2;
    local_c0 = pTVar1;
    local_b8 = iVar12;
    bVar9 = FConstClothCollection::IsValid(pFVar2,None);
    if ((!bVar9) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                           ,0x55,L""), bVar9)) break;
    if (((iVar12 < 0) ||
        (iVar11 = FManagedArrayCollection::NumElements
                            ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::Fabrics),
        iVar11 <= iVar12)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("FabricIndex >= 0 && FabricIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Fabrics)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                           ,0x56,L""), bVar9)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_d0 = &___7FCollectionClothFabricFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FCollectionClothFabricFacade::SetDefaults((FCollectionClothFabricFacade *)&local_d0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c0);
    iVar12 = iVar12 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetNumRenderPatterns @ 14db6e2a0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumRenderPatterns
          (FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined **local_68;
  FConstClothCollection *local_60;
  TReferenceControllerBase<1> *local_58;
  int local_50;
  undefined **local_48;
  FConstClothCollection *local_40;
  TReferenceControllerBase<1> *local_38;
  int local_30;
  
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::RenderPatterns);
  iVar7 = param_1;
  while( true ) {
    if (iVar5 <= iVar7) {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::RenderPatterns);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      while( true ) {
        if (param_1 <= iVar5) {
          return;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar2 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_40 = pFVar2;
        local_38 = pTVar1;
        local_30 = iVar5;
        bVar4 = FConstClothCollection::IsValid(pFVar2,None);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClothCollection->IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                               ,0xd1,L""), bVar4)) break;
        if (((iVar5 < 0) ||
            (iVar7 = FManagedArrayCollection::NumElements
                               ((pFVar2->ManagedArrayCollection).Object,
                                ClothCollectionGroup::RenderPatterns), iVar7 <= iVar5)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                               ,0xd2,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        local_48 = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        FCollectionClothRenderPatternFacade::SetDefaults
                  ((FCollectionClothRenderPatternFacade *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38);
        iVar5 = iVar5 + 1;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar2 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = pFVar2;
    local_58 = pTVar1;
    local_50 = iVar7;
    bVar4 = FConstClothCollection::IsValid(pFVar2,None);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                           ,0xd1,L""), bVar4)) break;
    if (((iVar7 < 0) ||
        (iVar6 = FManagedArrayCollection::NumElements
                           ((pFVar2->ManagedArrayCollection).Object,
                            ClothCollectionGroup::RenderPatterns), iVar6 <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::RenderPatterns)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothRenderPatternFacade.cpp"
                           ,0xd2,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_68 = &___7FCollectionClothRenderPatternFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FCollectionClothRenderPatternFacade::SetNumRenderVertices
              ((FCollectionClothRenderPatternFacade *)&local_68,0);
    FCollectionClothRenderPatternFacade::SetNumRenderFaces
              ((FCollectionClothRenderPatternFacade *)&local_68,0);
    FCollectionClothRenderPatternFacade::SetDefaults
              ((FCollectionClothRenderPatternFacade *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    iVar7 = iVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetNumSeams @ 14db6e750

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumSeams(FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined **local_68;
  FConstClothCollection *local_60;
  TReferenceControllerBase<1> *local_58;
  int local_50;
  undefined **local_48;
  FConstClothCollection *local_40;
  TReferenceControllerBase<1> *local_38;
  int local_30;
  
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Seams);
  iVar7 = param_1;
  while( true ) {
    if (iVar5 <= iVar7) {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::Seams);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      while( true ) {
        if (param_1 <= iVar5) {
          return;
        }
        pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar2 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_40 = pFVar2;
        local_38 = pTVar1;
        local_30 = iVar5;
        bVar4 = FConstClothCollection::IsValid(pFVar2,None);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClothCollection->IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                               ,0x28a,L""), bVar4)) break;
        if (((iVar5 < 0) ||
            (iVar7 = FManagedArrayCollection::NumElements
                               ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::Seams)
            , iVar7 <= iVar5)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                               ,0x28b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        local_48 = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        FCollectionClothSeamFacade::SetDefaults((FCollectionClothSeamFacade *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38);
        iVar5 = iVar5 + 1;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar2 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = pFVar2;
    local_58 = pTVar1;
    local_50 = iVar7;
    bVar4 = FConstClothCollection::IsValid(pFVar2,None);
    if ((!bVar4) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                           ,0x28a,L""), bVar4)) break;
    if (((iVar7 < 0) ||
        (iVar6 = FManagedArrayCollection::NumElements
                           ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::Seams),
        iVar6 <= iVar7)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("SeamIndex >= 0 && SeamIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Seams)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSeamFacade.cpp"
                           ,0x28b,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_68 = &___7FCollectionClothSeamFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FCollectionClothSeamFacade::Reset((FCollectionClothSeamFacade *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    iVar7 = iVar7 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetNumSimAccessoryMeshes @ 14db6e9f0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumSimAccessoryMeshes
          (FCollectionClothFacade *this,int param_1,bool param_2)

{
  atomic<int> *paVar1;
  FConstClothCollection *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  TManagedArray<FName> *pTVar4;
  FClothCollection *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  EClothCollectionExtendedSchemas EVar10;
  uint uVar11;
  undefined **local_48;
  FConstClothCollection *local_40;
  TReferenceControllerBase<1> *local_38;
  uint local_30;
  
  pFVar2 = *(FConstClothCollection **)&this->field_0x8;
  EVar10 = SimAccessoryMeshes;
  if (param_2) {
    EVar10 = CookedOnly;
  }
  bVar6 = FConstClothCollection::IsValid(pFVar2,EVar10);
  if ((!bVar6) ||
     (((EVar10 & CookedOnly) == None &&
      (iVar7 = FManagedArrayCollection::NumElements
                         ((pFVar2->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
      iVar7 != 1)))) {
    DefineSchema(this,EVar10);
  }
  iVar7 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimAccessoryMeshes);
  uVar11 = param_1;
  while( true ) {
    if (iVar7 <= (int)uVar11) {
      pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::SimAccessoryMeshes);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      while( true ) {
        if (param_1 <= iVar7) {
          return;
        }
        pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar2 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        bVar6 = FConstClothCollection::IsValid(pFVar2,CookedOnly);
        if (((!bVar6) && (bVar6 = FConstClothCollection::IsValid(pFVar2,SimAccessoryMeshes), !bVar6)
            ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimAccessoryMeshes)"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                                     ,0x3f,L""), bVar6)) break;
        if (((iVar7 < 0) ||
            (iVar8 = FManagedArrayCollection::NumElements
                               ((pFVar2->ManagedArrayCollection).Object,
                                ClothCollectionGroup::SimAccessoryMeshes), iVar8 <= iVar7)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("MeshIndex >= 0 && MeshIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimAccessoryMeshes)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                               ,0x40,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        iVar7 = iVar7 + 1;
      }
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar2 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_40 = pFVar2;
    local_38 = pTVar3;
    local_30 = uVar11;
    bVar6 = FConstClothCollection::IsValid(pFVar2,CookedOnly);
    if (((!bVar6) && (bVar6 = FConstClothCollection::IsValid(pFVar2,SimAccessoryMeshes), !bVar6)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimAccessoryMeshes)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                           ,0x3f,L""), bVar6)) break;
    if ((((int)uVar11 < 0) ||
        (iVar8 = FManagedArrayCollection::NumElements
                           ((pFVar2->ManagedArrayCollection).Object,
                            ClothCollectionGroup::SimAccessoryMeshes), iVar8 <= (int)uVar11)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MeshIndex >= 0 && MeshIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimAccessoryMeshes)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimAccessoryMeshFacade.cpp"
                           ,0x40,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    local_48 = &___7FCollectionClothSimAccessoryMeshFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      paVar1 = &pTVar3->SharedReferenceCount;
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
      LOCK();
      *paVar1 = (atomic<int>)((int)*paVar1 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar4 = local_40->SimAccessoryMeshName;
    uVar9 = 0;
    if ((int)uVar11 < *(int *)&pTVar4->field_0x18) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    *(undefined8 *)(*(longlong *)&pTVar4->field_0x10 + (longlong)(int)uVar11 * 8) = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    FCollectionClothSimAccessoryMeshFacade::ClearDynamicAttributes
              ((FCollectionClothSimAccessoryMeshFacade *)&local_48);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
    uVar11 = uVar11 + 1;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// SetNumSimMorphTargets @ 14db6ef70

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumSimMorphTargets
          (FCollectionClothFacade *this,int param_1,bool param_2)

{
  FConstClothCollection *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FClothCollection *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  EClothCollectionExtendedSchemas EVar8;
  undefined **local_68;
  FConstClothCollection *local_60;
  TReferenceControllerBase<1> *local_58;
  int local_50;
  undefined **local_48;
  FConstClothCollection *local_40;
  TReferenceControllerBase<1> *local_38;
  int local_30;
  
  pFVar1 = *(FConstClothCollection **)&this->field_0x8;
  EVar8 = (param_2 + 1) * 0x10;
  bVar4 = FConstClothCollection::IsValid(pFVar1,EVar8);
  if ((!bVar4) ||
     (((EVar8 & CookedOnly) == None &&
      (iVar5 = FManagedArrayCollection::NumElements
                         ((pFVar1->ManagedArrayCollection).Object,ClothCollectionGroup::Lods),
      iVar5 != 1)))) {
    DefineSchema(this,EVar8);
  }
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimMorphTargets);
  iVar5 = param_1;
  while( true ) {
    if (iVar6 <= iVar5) {
      pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::SimMorphTargets);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      while( true ) {
        if (param_1 <= iVar6) {
          return;
        }
        pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar1 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar2);
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_40 = pFVar1;
        local_38 = pTVar2;
        local_30 = iVar6;
        bVar4 = FConstClothCollection::IsValid(pFVar1,CookedOnly);
        if (((!bVar4) && (bVar4 = FConstClothCollection::IsValid(pFVar1,SimMorphTargets), !bVar4))
           && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                                  ,0x44,L""), bVar4)) break;
        if (((iVar6 < 0) ||
            (iVar5 = FManagedArrayCollection::NumElements
                               ((pFVar1->ManagedArrayCollection).Object,
                                ClothCollectionGroup::SimMorphTargets), iVar5 <= iVar6)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                               ,0x45,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        local_48 = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
        FCollectionClothSimMorphTargetFacade::SetDefaults
                  ((FCollectionClothSimMorphTargetFacade *)&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_38);
        iVar6 = iVar6 + 1;
      }
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar2 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar1 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = pFVar1;
    local_58 = pTVar2;
    local_50 = iVar5;
    bVar4 = FConstClothCollection::IsValid(pFVar1,CookedOnly);
    if (((!bVar4) && (bVar4 = FConstClothCollection::IsValid(pFVar1,SimMorphTargets), !bVar4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid(EClothCollectionExtendedSchemas::CookedOnly) || ClothCollection->IsValid(EClothCollectionExtendedSchemas::SimMorphTargets)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                           ,0x44,L""), bVar4)) break;
    if (((iVar5 < 0) ||
        (iVar7 = FManagedArrayCollection::NumElements
                           ((pFVar1->ManagedArrayCollection).Object,
                            ClothCollectionGroup::SimMorphTargets), iVar7 <= iVar5)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("MorphTargetIndex >= 0 && MorphTargetIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimMorphTargets)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimMorphTargetFacade.cpp"
                           ,0x45,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    local_68 = &___7FCollectionClothSimMorphTargetFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    FCollectionClothSimMorphTargetFacade::SetNumSimMorphTargetVertices
              ((FCollectionClothSimMorphTargetFacade *)&local_68,0);
    FCollectionClothSimMorphTargetFacade::SetDefaults
              ((FCollectionClothSimMorphTargetFacade *)&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_58);
    iVar5 = iVar5 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// SetNumSimPatterns @ 14db6f290

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetNumSimPatterns
          (FCollectionClothFacade *this,int param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FConstClothCollection *pFVar2;
  TManagedArray<int> *pTVar3;
  FClothCollection *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  atomic<int> *paVar10;
  int iVar11;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_98;
  undefined **local_88;
  FConstClothCollection *local_80;
  TReferenceControllerBase<1> *local_78;
  int local_70;
  FCollectionClothSimPatternConstFacade local_68;
  
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::SimPatterns);
  iVar11 = param_1;
  while( true ) {
    if (iVar6 <= iVar11) {
      pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
      this_00 = *(FClothCollection **)&this->field_0x8;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      FClothCollection::SetNumElements(this_00,param_1,&ClothCollectionGroup::SimPatterns);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      for (; iVar6 < param_1; iVar6 = iVar6 + 1) {
        pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
        pFVar2 = *(FConstClothCollection **)&this->field_0x8;
        if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
        }
        else {
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar1);
          LOCK();
          pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_98.Object = pFVar2;
        local_98.SharedReferenceCount.ReferenceController = pTVar1;
        FCollectionClothSimPatternConstFacade::FCollectionClothSimPatternConstFacade
                  (&local_68,&local_98,iVar6);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        local_68._padding_ =
             (longlong)&___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
        FCollectionClothSimPatternFacade::SetDefaults((FCollectionClothSimPatternFacade *)&local_68)
        ;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.ClothCollection.SharedReferenceCount.ReferenceController);
      }
      return;
    }
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    pFVar2 = *(FConstClothCollection **)&this->field_0x8;
    if (pTVar1 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80 = pFVar2;
    local_78 = pTVar1;
    local_70 = iVar11;
    bVar5 = FConstClothCollection::IsValid(pFVar2,None);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClothCollection->IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                           ,0x71,L""), bVar5)) break;
    if (((iVar11 < 0) ||
        (iVar7 = FManagedArrayCollection::NumElements
                           ((pFVar2->ManagedArrayCollection).Object,
                            ClothCollectionGroup::SimPatterns), iVar7 <= iVar11)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PatternIndex >= 0 && PatternIndex < ClothCollection->GetNumElements(ClothCollectionGroup::SimPatterns)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                           ,0x72,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    local_88 = &___7FCollectionClothSimPatternFacade_ClothAsset_Chaos_UE__6B_;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FCollectionClothSimPatternFacade::SetNumSimFaces
              ((FCollectionClothSimPatternFacade *)&local_88,0);
    iVar7 = local_70;
    pFVar2 = local_80;
    iVar8 = FConstClothCollection::GetNumElements
                      (local_80,local_80->SimVertices2DStart,local_80->SimVertices2DEnd,local_70);
    iVar9 = FConstClothCollection::GetNumElements
                      (pFVar2,pFVar2->SimVertices2DStart,pFVar2->SimVertices2DEnd,iVar7);
    if ((iVar8 < iVar9) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumSimVertices >= NumSimVertices",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothSimPatternFacade.cpp"
                           ,0x126,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar1 = local_78;
    if (local_78 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &local_78->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        *paVar10 = (atomic<int>)((int)*paVar10 + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    pTVar3 = pFVar2->SimVertices2DEnd;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
        UNLOCK();
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FClothCollection::SetNumElements
              ((FClothCollection *)pFVar2,iVar9 - iVar8,&ClothCollectionGroup::SimVertices2D,
               pFVar2->SimVertices2DStart,pTVar3,iVar7);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    FCollectionClothSimPatternFacade::SetDefaults((FCollectionClothSimPatternFacade *)&local_88);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_78);
    iVar11 = iVar11 + 1;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// SetPhysicsAssetSoftObjectPathName @ 14db6f6e0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetPhysicsAssetSoftObjectPathName
          (FCollectionClothFacade *this,FSoftObjectPath *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uStackX_c;
  
  bVar4 = false;
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Lods);
  if (iVar5 == 0) {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar1 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    bVar4 = true;
    if (*(longlong *)(lVar1 + 0x10) != 0) {
      bVar3 = true;
      goto LAB_14db6f752;
    }
  }
  bVar3 = false;
LAB_14db6f752:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar1 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if (*(int *)(lVar1 + 0x18) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FSoftObjectPath::operator=(*(FSoftObjectPath **)(lVar1 + 0x10),param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// SetReferenceBoneName @ 14db6f800

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetReferenceBoneName
          (FCollectionClothFacade *this,FName *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FName FVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  iVar6 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Lods);
  if (iVar6 != 0) {
    pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    FVar2 = *param_1;
    lVar3 = *(longlong *)&this->field_0x8;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    lVar3 = *(longlong *)(lVar3 + 0x30);
    if (*(int *)(lVar3 + 0x18) < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    **(FName **)(lVar3 + 0x10) = FVar2;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  }
  return;
}

// SetSkeletalMeshSoftObjectPathName @ 14db6fc50

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetSkeletalMeshSoftObjectPathName
          (FCollectionClothFacade *this,FSoftObjectPath *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  TReferenceControllerBase<1> *pTVar6;
  uint uStackX_c;
  
  bVar4 = false;
  iVar5 = FManagedArrayCollection::NumElements
                    ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                     ClothCollectionGroup::Lods);
  if (iVar5 == 0) {
    pTVar6 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
  }
  else {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar1 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    bVar4 = true;
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      bVar3 = true;
      goto LAB_14db6fcc2;
    }
  }
  bVar3 = false;
LAB_14db6fcc2:
  if (bVar4) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  if (bVar3) {
    pTVar6 = *(TReferenceControllerBase<1> **)&this->field_0x10;
    lVar1 = *(longlong *)&this->field_0x8;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if (*(int *)(lVar1 + 0x18) < 1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FSoftObjectPath::operator=(*(FSoftObjectPath **)(lVar1 + 0x10),param_1);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  }
  return;
}

// SetSolverAirDamping @ 14db6fd70

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetSolverAirDamping
          (FCollectionClothFacade *this,float param_1)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar4 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar4) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db6fdbb;
  }
  DefineSchema(this,Solvers);
LAB_14db6fdbb:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  lVar2 = *(longlong *)(lVar2 + 0x40);
  if (*(int *)(lVar2 + 0x18) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(float **)(lVar2 + 0x10) = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetSolverGravity @ 14db6fe40

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetSolverGravity
          (FCollectionClothFacade *this,TVector<float> *param_1)

{
  undefined8 uVar1;
  float fVar2;
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar7 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar7) {
    iVar8 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar8 == 1) goto LAB_14db6fe8b;
  }
  DefineSchema(this,Solvers);
LAB_14db6fe8b:
  pTVar3 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  uVar1 = *(undefined8 *)&param_1->field0_0x0;
  lVar4 = *(longlong *)&this->field_0x8;
  fVar2 = (param_1->field0_0x0)._s_0.Z;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  lVar4 = *(longlong *)(lVar4 + 0x38);
  if (*(int *)(lVar4 + 0x18) < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  puVar5 = *(undefined8 **)(lVar4 + 0x10);
  *puVar5 = uVar1;
  *(float *)(puVar5 + 1) = fVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// SetSolverSubSteps @ 14db6ff30

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetSolverSubSteps
          (FCollectionClothFacade *this,int param_1)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar4 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar4) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db6ff7a;
  }
  DefineSchema(this,Solvers);
LAB_14db6ff7a:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  lVar2 = *(longlong *)(lVar2 + 0x48);
  if (*(int *)(lVar2 + 0x18) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(int **)(lVar2 + 0x10) = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// SetSolverTimeStep @ 14db70000

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFacade::SetSolverTimeStep
          (FCollectionClothFacade *this,float param_1)

{
  FConstClothCollection *this_00;
  TReferenceControllerBase<1> *pTVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  bVar4 = FConstClothCollection::IsValid(this_00,Solvers);
  if (bVar4) {
    iVar5 = FManagedArrayCollection::NumElements
                      ((this_00->ManagedArrayCollection).Object,ClothCollectionGroup::Lods);
    if (iVar5 == 1) goto LAB_14db7004b;
  }
  DefineSchema(this,Solvers);
LAB_14db7004b:
  pTVar1 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  lVar2 = *(longlong *)&this->field_0x8;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  lVar2 = *(longlong *)(lVar2 + 0x50);
  if (*(int *)(lVar2 + 0x18) < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  **(float **)(lVar2 + 0x10) = param_1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

