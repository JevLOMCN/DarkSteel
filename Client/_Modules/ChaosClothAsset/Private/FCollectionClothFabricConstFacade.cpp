// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 12

// FCollectionClothFabricConstFacade @ 14db3aa90

FCollectionClothFabricConstFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::FCollectionClothFabricConstFacade
          (FCollectionClothFabricConstFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FCollectionClothFabricConstFacade *pFVar5;
  
  this->_padding_ = (longlong)&___7FCollectionClothFabricConstFacade_ClothAsset_Chaos_UE__6B_;
  (this->ClothCollection).Object = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  (this->ClothCollection).SharedReferenceCount.ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  this->FabricIndex = param_2;
  bVar3 = FConstClothCollection::IsValid(param_1->Object,None);
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClothCollection->IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                         ,0x55,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FCollectionClothFabricConstFacade *)(*pcVar2)();
    return pFVar5;
  }
  if ((-1 < this->FabricIndex) &&
     (iVar4 = FManagedArrayCollection::NumElements
                        ((param_1->Object->ManagedArrayCollection).Object,
                         ClothCollectionGroup::Fabrics), this->FabricIndex < iVar4)) {
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("FabricIndex >= 0 && FabricIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Fabrics)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                     ,0x56,L"");
  if (!bVar3) {
    return this;
  }
  pcVar2 = (code *)swi(3);
  pFVar5 = (FCollectionClothFabricConstFacade *)(*pcVar2)();
  return pFVar5;
}

// ~FCollectionClothFabricConstFacade @ 14db3bb20

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::~FCollectionClothFabricConstFacade
          (FCollectionClothFabricConstFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ClothCollection).SharedReferenceCount.ReferenceController);
  return;
}

// GetBendingStiffness @ 14db572f0

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetBendingStiffness
          (FCollectionClothFabricConstFacade *this,FAnisotropicData *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FAnisotropicData *pFVar5;
  TVector<float> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  fVar3 = __real_42c80000;
  pTVar1 = ((this->ClothCollection).Object)->FabricBendingStiffness;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->Weft = 100.0;
    __return_storage_ptr__->Warp = 100.0;
    __return_storage_ptr__->Bias = fVar3;
    return __return_storage_ptr__;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnisotropicData *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&local_18,this->FabricIndex);
  __return_storage_ptr__->Weft = (pTVar6->field0_0x0)._s_0.X;
  __return_storage_ptr__->Warp = (pTVar6->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Bias = (pTVar6->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetBucklingRatio @ 14db573c0

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetBucklingRatio
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricBucklingRatio;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return __real_3f000000;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetBucklingStiffness @ 14db57450

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetBucklingStiffness
          (FCollectionClothFabricConstFacade *this,FAnisotropicData *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FAnisotropicData *pFVar5;
  TVector<float> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  fVar3 = __real_42480000;
  pTVar1 = ((this->ClothCollection).Object)->FabricBucklingStiffness;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->Weft = 50.0;
    __return_storage_ptr__->Warp = 50.0;
    __return_storage_ptr__->Bias = fVar3;
    return __return_storage_ptr__;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnisotropicData *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&local_18,this->FabricIndex);
  __return_storage_ptr__->Weft = (pTVar6->field0_0x0)._s_0.X;
  __return_storage_ptr__->Warp = (pTVar6->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Bias = (pTVar6->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

// GetCollisionThickness @ 14db57750

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetCollisionThickness
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricCollisionThickness;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return __real_3f800000;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetDamping @ 14db57ad0

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetDamping
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricDamping;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return __real_3dcccccd;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetDensity @ 14db57b70

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetDensity
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricDensity;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return __real_3eb33333;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetFriction @ 14db57ed0

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetFriction
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricFriction;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return __real_3f4ccccd;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetLayer @ 14db57f70

int __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetLayer
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<int> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  TArrayView<int_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricLayer;
  if (pTVar1 == (TManagedArray<int> *)0x0) {
    return -1;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(int **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  piVar5 = TArrayView<int_const_,int>::operator[](&local_18,this->FabricIndex);
  return *piVar5;
}

// GetPressure @ 14db58790

float __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetPressure
          (FCollectionClothFabricConstFacade *this)

{
  TManagedArray<float> *pTVar1;
  code *pcVar2;
  bool bVar3;
  float *pfVar4;
  float fVar5;
  TArrayView<float_const_,int> local_18;
  
  pTVar1 = ((this->ClothCollection).Object)->FabricPressure;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    return 0.0;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(float **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  pfVar4 = TArrayView<float_const_,int>::operator[](&local_18,this->FabricIndex);
  return *pfVar4;
}

// GetStretchStiffness @ 14db60ff0

FAnisotropicData * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricConstFacade::GetStretchStiffness
          (FCollectionClothFabricConstFacade *this,FAnisotropicData *__return_storage_ptr__)

{
  TManagedArray<UE::Math::TVector<float>_> *pTVar1;
  code *pcVar2;
  float fVar3;
  bool bVar4;
  FAnisotropicData *pFVar5;
  TVector<float> *pTVar6;
  TArrayView<UE::Math::TVector<float>_const_,int> local_18;
  
  fVar3 = __real_42c80000;
  pTVar1 = ((this->ClothCollection).Object)->FabricStretchStiffness;
  if (pTVar1 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    __return_storage_ptr__->Weft = 100.0;
    __return_storage_ptr__->Warp = 100.0;
    __return_storage_ptr__->Bias = fVar3;
    return __return_storage_ptr__;
  }
  local_18.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
  local_18.DataPtr = *(TVector<float> **)&pTVar1->field_0x10;
  if (local_18.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FAnisotropicData *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar6 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[](&local_18,this->FabricIndex);
  __return_storage_ptr__->Weft = (pTVar6->field0_0x0)._s_0.X;
  __return_storage_ptr__->Warp = (pTVar6->field0_0x0)._s_0.Y;
  __return_storage_ptr__->Bias = (pTVar6->field0_0x0)._s_0.Z;
  return __return_storage_ptr__;
}

