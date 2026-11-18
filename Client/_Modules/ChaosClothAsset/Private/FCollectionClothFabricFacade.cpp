// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAsset
// Functions: 8

// FCollectionClothFabricFacade @ 14db3ab60

FCollectionClothFabricFacade * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::FCollectionClothFabricFacade
          (FCollectionClothFabricFacade *this,
          TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> *param_1,int param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  TSharedRef<UE::Chaos::ClothAsset::FConstClothCollection_const_,1> local_18;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  local_18.Object = (FConstClothCollection *)param_1->Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar1;
  FCollectionClothFabricConstFacade::FCollectionClothFabricConstFacade
            ((FCollectionClothFabricConstFacade *)this,&local_18,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  *(undefined ***)this = &___7FCollectionClothFabricFacade_ClothAsset_Chaos_UE__6B_;
  return this;
}

// ~FCollectionClothFabricFacade @ 14db3bb30

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::~FCollectionClothFabricFacade
          (FCollectionClothFabricFacade *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x10);
  return;
}

// GetClothCollection @ 14db57520

TSharedRef<UE::Chaos::ClothAsset::FClothCollection,1> * __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::GetClothCollection
          (FCollectionClothFabricFacade *this,
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

// Initialize @ 14db61a90

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::Initialize
          (FCollectionClothFabricFacade *this,FAnisotropicData *param_1,float param_2,
          FAnisotropicData *param_3,FAnisotropicData *param_4,float param_5,float param_6,
          float param_7,float param_8,int param_9,float param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FConstClothCollection *this_00;
  TManagedArray<UE::Math::TVector<float>_> *pTVar6;
  TManagedArray<float> *pTVar7;
  TManagedArray<int> *pTVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  TVector<float> *pTVar12;
  float *pfVar13;
  int *piVar14;
  TArrayView<UE::Math::TVector<float>,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<UE::Math::TVector<float>,int> local_d8;
  TArrayView<UE::Math::TVector<float>,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<int,int> local_78;
  TArrayView<float,int> local_68 [5];
  
  iVar4 = *(int *)&this->field_0x18;
  if (-1 < iVar4) {
    iVar11 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)**(undefined8 **)&this->field_0x8,
                        ClothCollectionGroup::Fabrics);
    if (iVar4 < iVar11) goto LAB_14db61b16;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("(ElementIndex >= 0) && (ElementIndex < ClothCollection->GetNumElements(ClothCollectionGroup::Fabrics))"
                      ,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\ChaosClothAsset\\Source\\ChaosClothAsset\\Private\\ChaosClothAsset\\CollectionClothFabricFacade.cpp"
                      ,0x5e,L"");
  if (bVar10) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
LAB_14db61b16:
  pTVar5 = *(TReferenceControllerBase<1> **)&this->field_0x10;
  this_00 = *(FConstClothCollection **)&this->field_0x8;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  bVar10 = FConstClothCollection::IsValid(this_00,Fabrics);
  if (!bVar10) {
    FClothCollection::DefineSchema((FClothCollection *)this_00,Fabrics);
  }
  fVar1 = param_1->Weft;
  fVar2 = param_1->Warp;
  fVar3 = param_1->Bias;
  pTVar6 = this_00->FabricBendingStiffness;
  if (pTVar6 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    local_f8.DataPtr = (TVector<float> *)0x0;
    local_f8.ArrayNum = 0;
  }
  else {
    local_f8.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    local_f8.DataPtr = *(TVector<float> **)&pTVar6->field_0x10;
    if (local_f8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[](&local_f8,iVar4);
  (pTVar12->field0_0x0)._s_0.X = fVar1;
  (pTVar12->field0_0x0)._s_0.Y = fVar2;
  (pTVar12->field0_0x0)._s_0.Z = fVar3;
  pTVar7 = this_00->FabricBucklingRatio;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_e8.DataPtr = (float *)0x0;
    local_e8.ArrayNum = 0;
  }
  else {
    local_e8.ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_e8.DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_e8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](&local_e8,iVar4);
  *pfVar13 = param_2;
  pTVar6 = this_00->FabricStretchStiffness;
  fVar1 = param_4->Weft;
  fVar2 = param_4->Warp;
  fVar3 = param_4->Bias;
  if (pTVar6 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    local_d8.DataPtr = (TVector<float> *)0x0;
    local_d8.ArrayNum = 0;
  }
  else {
    local_d8.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    local_d8.DataPtr = *(TVector<float> **)&pTVar6->field_0x10;
    if (local_d8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[](&local_d8,iVar4);
  (pTVar12->field0_0x0)._s_0.X = fVar1;
  (pTVar12->field0_0x0)._s_0.Y = fVar2;
  (pTVar12->field0_0x0)._s_0.Z = fVar3;
  pTVar6 = this_00->FabricBucklingStiffness;
  fVar1 = param_3->Weft;
  fVar2 = param_3->Warp;
  fVar3 = param_3->Bias;
  if (pTVar6 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    local_c8.DataPtr = (TVector<float> *)0x0;
    local_c8.ArrayNum = 0;
  }
  else {
    local_c8.ArrayNum = (**(code **)(*(longlong *)pTVar6 + 0x60))(pTVar6);
    local_c8.DataPtr = *(TVector<float> **)&pTVar6->field_0x10;
    if (local_c8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pTVar12 = TArrayView<UE::Math::TVector<float>,int>::operator[](&local_c8,iVar4);
  (pTVar12->field0_0x0)._s_0.X = fVar1;
  (pTVar12->field0_0x0)._s_0.Y = fVar2;
  (pTVar12->field0_0x0)._s_0.Z = fVar3;
  pTVar7 = this_00->FabricFriction;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_b8.DataPtr = (float *)0x0;
    local_b8.ArrayNum = 0;
  }
  else {
    local_b8.ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_b8.DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_b8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](&local_b8,iVar4);
  *pfVar13 = param_6;
  pTVar7 = this_00->FabricDensity;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_a8.DataPtr = (float *)0x0;
    local_a8.ArrayNum = 0;
  }
  else {
    local_a8.ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_a8.DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_a8.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](&local_a8,iVar4);
  *pfVar13 = param_5;
  pTVar7 = this_00->FabricDamping;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_98.DataPtr = (float *)0x0;
    local_98.ArrayNum = 0;
  }
  else {
    local_98.ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_98.DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_98.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](&local_98,iVar4);
  *pfVar13 = param_7;
  pTVar7 = this_00->FabricPressure;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_88.DataPtr = (float *)0x0;
    local_88.ArrayNum = 0;
  }
  else {
    local_88.ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_88.DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_88.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](&local_88,iVar4);
  *pfVar13 = param_8;
  pTVar8 = this_00->FabricLayer;
  if (pTVar8 == (TManagedArray<int> *)0x0) {
    local_78.DataPtr = (int *)0x0;
    local_78.ArrayNum = 0;
  }
  else {
    local_78.ArrayNum = (**(code **)(*(longlong *)pTVar8 + 0x60))(pTVar8);
    local_78.DataPtr = *(int **)&pTVar8->field_0x10;
    if (local_78.ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  piVar14 = TArrayView<int,int>::operator[](&local_78,iVar4);
  *piVar14 = param_9;
  pTVar7 = this_00->FabricCollisionThickness;
  if (pTVar7 == (TManagedArray<float> *)0x0) {
    local_68[0].DataPtr = (float *)0x0;
    local_68[0].ArrayNum = 0;
  }
  else {
    local_68[0].ArrayNum = (**(code **)(*(longlong *)pTVar7 + 0x60))(pTVar7);
    local_68[0].DataPtr = *(float **)&pTVar7->field_0x10;
    if (local_68[0].ArrayNum < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L"");
      if (bVar10) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
  }
  pfVar13 = TArrayView<float,int>::operator[](local_68,iVar4);
  *pfVar13 = param_10;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return;
}

// Initialize @ 14db62000

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::Initialize
          (FCollectionClothFabricFacade *this,FCollectionClothFabricConstFacade *param_1)

{
  TManagedArray<float> *pTVar1;
  TManagedArray<int> *pTVar2;
  TManagedArray<UE::Math::TVector<float>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  float *pfVar6;
  int *piVar7;
  TVector<float> *pTVar8;
  FAnisotropicData *pFVar9;
  FAnisotropicData *pFVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  FAnisotropicData local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<int_const_,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<UE::Math::TVector<float>_const_,int> local_98;
  FAnisotropicData local_88;
  FAnisotropicData local_7c [9];
  
  pTVar1 = ((param_1->ClothCollection).Object)->FabricCollisionThickness;
  fVar17 = __real_3f800000;
  if (pTVar1 != (TManagedArray<float> *)0x0) {
    local_f8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_f8.DataPtr = *(float **)&pTVar1->field_0x10;
    if ((local_f8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pfVar6 = TArrayView<float_const_,int>::operator[](&local_f8,param_1->FabricIndex);
    fVar17 = *pfVar6;
  }
  pTVar2 = ((param_1->ClothCollection).Object)->FabricLayer;
  if (pTVar2 == (TManagedArray<int> *)0x0) {
    iVar11 = -1;
  }
  else {
    local_e8.ArrayNum = (**(code **)(*(longlong *)pTVar2 + 0x60))(pTVar2);
    local_e8.DataPtr = *(int **)&pTVar2->field_0x10;
    if ((local_e8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    piVar7 = TArrayView<int_const_,int>::operator[](&local_e8,param_1->FabricIndex);
    iVar11 = *piVar7;
  }
  pTVar1 = ((param_1->ClothCollection).Object)->FabricPressure;
  if (pTVar1 == (TManagedArray<float> *)0x0) {
    fVar16 = 0.0;
  }
  else {
    local_d8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_d8.DataPtr = *(float **)&pTVar1->field_0x10;
    if ((local_d8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pfVar6 = TArrayView<float_const_,int>::operator[](&local_d8,param_1->FabricIndex);
    fVar16 = *pfVar6;
  }
  pTVar1 = ((param_1->ClothCollection).Object)->FabricDamping;
  fVar15 = __real_3dcccccd;
  if (pTVar1 != (TManagedArray<float> *)0x0) {
    local_c8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_c8.DataPtr = *(float **)&pTVar1->field_0x10;
    if ((local_c8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pfVar6 = TArrayView<float_const_,int>::operator[](&local_c8,param_1->FabricIndex);
    fVar15 = *pfVar6;
  }
  pTVar1 = ((param_1->ClothCollection).Object)->FabricFriction;
  fVar14 = __real_3f4ccccd;
  if (pTVar1 != (TManagedArray<float> *)0x0) {
    local_b8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_b8.DataPtr = *(float **)&pTVar1->field_0x10;
    if ((local_b8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pfVar6 = TArrayView<float_const_,int>::operator[](&local_b8,param_1->FabricIndex);
    fVar14 = *pfVar6;
  }
  pTVar1 = ((param_1->ClothCollection).Object)->FabricDensity;
  fVar13 = __real_3eb33333;
  if (pTVar1 != (TManagedArray<float> *)0x0) {
    local_a8.ArrayNum = (**(code **)(*(longlong *)pTVar1 + 0x60))(pTVar1);
    local_a8.DataPtr = *(float **)&pTVar1->field_0x10;
    if ((local_a8.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pfVar6 = TArrayView<float_const_,int>::operator[](&local_a8,param_1->FabricIndex);
    fVar13 = *pfVar6;
  }
  pTVar3 = ((param_1->ClothCollection).Object)->FabricStretchStiffness;
  if (pTVar3 == (TManagedArray<UE::Math::TVector<float>_> *)0x0) {
    local_108.Weft = 100.0;
    local_108.Warp = 100.0;
    local_108.Bias = 100.0;
  }
  else {
    local_98.ArrayNum = (**(code **)(*(longlong *)pTVar3 + 0x60))(pTVar3);
    local_98.DataPtr = *(TVector<float> **)&pTVar3->field_0x10;
    if ((local_98.ArrayNum < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar8 = TArrayView<UE::Math::TVector<float>_const_,int>::operator[]
                       (&local_98,param_1->FabricIndex);
    local_108.Weft = (pTVar8->field0_0x0)._s_0.X;
    local_108.Warp = (pTVar8->field0_0x0)._s_0.Y;
    local_108.Bias = (pTVar8->field0_0x0)._s_0.Z;
  }
  pFVar9 = FCollectionClothFabricConstFacade::GetBucklingStiffness(param_1,&local_88);
  fVar12 = FCollectionClothFabricConstFacade::GetBucklingRatio(param_1);
  pFVar10 = FCollectionClothFabricConstFacade::GetBendingStiffness(param_1,local_7c);
  Initialize(this,pFVar10,fVar12,pFVar9,&local_108,fVar13,fVar14,fVar15,fVar16,iVar11,fVar17);
  return;
}

// Initialize @ 14db623f0

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::Initialize
          (FCollectionClothFabricFacade *this,FCollectionClothFabricConstFacade *param_1,
          float param_2,int param_3,float param_4)

{
  FAnisotropicData *pFVar1;
  FAnisotropicData *pFVar2;
  FAnisotropicData *pFVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FAnisotropicData local_88;
  FAnisotropicData local_7c;
  FAnisotropicData local_70 [8];
  
  fVar4 = FCollectionClothFabricConstFacade::GetDamping(param_1);
  fVar5 = FCollectionClothFabricConstFacade::GetFriction(param_1);
  fVar6 = FCollectionClothFabricConstFacade::GetDensity(param_1);
  pFVar1 = FCollectionClothFabricConstFacade::GetStretchStiffness(param_1,&local_88);
  pFVar2 = FCollectionClothFabricConstFacade::GetBucklingStiffness(param_1,&local_7c);
  fVar7 = FCollectionClothFabricConstFacade::GetBucklingRatio(param_1);
  pFVar3 = FCollectionClothFabricConstFacade::GetBendingStiffness(param_1,local_70);
  Initialize(this,pFVar3,fVar7,pFVar2,pFVar1,fVar6,fVar5,fVar4,param_2,param_3,param_4);
  return;
}

// Reset @ 14db6a450

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::Reset(FCollectionClothFabricFacade *this)

{
  FAnisotropicData FStack_38;
  FAnisotropicData FStack_2c;
  FAnisotropicData aFStack_20 [2];
  
  FStack_38.Weft = 100.0;
  FStack_38.Warp = 100.0;
  FStack_38.Bias = 100.0;
  FStack_2c.Weft = 50.0;
  FStack_2c.Warp = 50.0;
  FStack_2c.Bias = 50.0;
  aFStack_20[0].Weft = 100.0;
  aFStack_20[0].Warp = 100.0;
  aFStack_20[0].Bias = 100.0;
  Initialize(this,aFStack_20,__real_3f000000,&FStack_2c,&FStack_38,__real_3eb33333,__real_3f4ccccd,
             __real_3dcccccd,0.0,-1,__real_3f800000);
  return;
}

// SetDefaults @ 14db6cc80

void __thiscall
UE::Chaos::ClothAsset::FCollectionClothFabricFacade::SetDefaults(FCollectionClothFabricFacade *this)

{
  FAnisotropicData local_38;
  FAnisotropicData local_2c;
  FAnisotropicData local_20 [2];
  
  local_38.Weft = 100.0;
  local_38.Warp = 100.0;
  local_38.Bias = 100.0;
  local_2c.Weft = 50.0;
  local_2c.Warp = 50.0;
  local_2c.Bias = 50.0;
  local_20[0].Weft = 100.0;
  local_20[0].Warp = 100.0;
  local_20[0].Bias = 100.0;
  Initialize(this,local_20,__real_3f000000,&local_2c,&local_38,__real_3eb33333,__real_3f4ccccd,
             __real_3dcccccd,0.0,-1,__real_3f800000);
  return;
}

