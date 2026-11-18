// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 48

// CoercePropertyValue @ 14664e4e0

FIntermediatePropertyValue * __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::CoercePropertyValue
          (TDynamicVariantPropertyTraits<double,double> *this,
          FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_48;
  double local_40;
  double local_38 [2];
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 1);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_48 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_48 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_48[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_48[1]._padding_ == lVar4;
      }
      if (bVar7) {
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_40);
        pdVar12 = &local_40;
        goto LAB_14664e749;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_48[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_48[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar11 = iVar3 - 1;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,local_38);
  pdVar12 = local_38;
LAB_14664e749:
  FIntermediatePropertyValue::FromValue<double_&>(__return_storage_ptr__,pdVar12);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 14664e860

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::CoercePropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FDoubleIntermediateVector *pFVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_78;
  FDoubleIntermediateVector local_70;
  FDoubleIntermediateVector local_50;
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 5);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_78 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_78 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_78[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_78[1]._padding_ == lVar4;
      }
      if (bVar7) {
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        local_70.X = 0.0;
        local_70.Y = 0.0;
        local_70.Z = 0.0;
        local_70.W = 0.0;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_70);
        pFVar12 = &local_70;
        goto LAB_14664ead9;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_78[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_78[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  local_50.X = 0.0;
  local_50.Y = 0.0;
  uVar11 = iVar3 - 1;
  local_50.Z = 0.0;
  local_50.W = 0.0;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,&local_50);
  pFVar12 = &local_50;
LAB_14664ead9:
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FDoubleIntermediateVector_&>
            (__return_storage_ptr__,pFVar12);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 14664ec00

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::CoercePropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FFloatIntermediateVector *pFVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_78;
  FFloatIntermediateVector local_70;
  FFloatIntermediateVector local_50;
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 3);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_78 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_78 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_78[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_78[1]._padding_ == lVar4;
      }
      if (bVar7) {
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        local_70.X = 0.0;
        local_70.Y = 0.0;
        local_70.Z = 0.0;
        local_70.W = 0.0;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_70);
        pFVar12 = &local_70;
        goto LAB_14664ee79;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_78[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_78[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  local_50.X = 0.0;
  local_50.Y = 0.0;
  uVar11 = iVar3 - 1;
  local_50.Z = 0.0;
  local_50.W = 0.0;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,&local_50);
  pFVar12 = &local_50;
LAB_14664ee79:
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FFloatIntermediateVector_&>
            (__return_storage_ptr__,pFVar12);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 14664efa0

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::CoercePropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
          FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FIntermediate3DTransform *pFVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_d8;
  FIntermediate3DTransform local_c8;
  FIntermediate3DTransform local_78;
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 1);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_d8 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_d8 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_d8[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_d8[1]._padding_ == lVar4;
      }
      if (bVar7) {
        local_c8.S_Z = 0.0;
        local_c8.T_X = 0.0;
        local_c8.T_Y = 0.0;
        local_c8.T_Z = 0.0;
        local_c8.R_X = 0.0;
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        local_c8.R_Y = 0.0;
        local_c8.R_Z = 0.0;
        local_c8.S_X = 0.0;
        local_c8.S_Y = 0.0;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_c8);
        pFVar12 = &local_c8;
        goto LAB_14664f22c;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_d8[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_d8[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  local_78.S_Z = 0.0;
  local_78.T_X = 0.0;
  local_78.T_Y = 0.0;
  local_78.T_Z = 0.0;
  local_78.R_X = 0.0;
  uVar11 = iVar3 - 1;
  local_78.R_Y = 0.0;
  local_78.R_Z = 0.0;
  local_78.S_X = 0.0;
  local_78.S_Y = 0.0;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,&local_78);
  pFVar12 = &local_78;
LAB_14664f22c:
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediate3DTransform_&>
            (__return_storage_ptr__,pFVar12);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 14664f370

FIntermediatePropertyValue * __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
CoercePropertyValue(TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
                    *this,FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  FIntermediateColor *pFVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_78;
  FIntermediateColor local_70;
  FIntermediateColor local_50;
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 3);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_78 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_78 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_78[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_78[1]._padding_ == lVar4;
      }
      if (bVar7) {
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        local_70.R = 0.0;
        local_70.G = 0.0;
        local_70.B = 0.0;
        local_70.A = 0.0;
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_70);
        pFVar12 = &local_70;
        goto LAB_14664f5e9;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_78[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_78[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  local_50.R = 0.0;
  local_50.G = 0.0;
  uVar11 = iVar3 - 1;
  local_50.B = 0.0;
  local_50.A = 0.0;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,&local_50);
  pFVar12 = &local_50;
LAB_14664f5e9:
  FIntermediatePropertyValue::FromValue<UE::MovieScene::FIntermediateColor_&>
            (__return_storage_ptr__,pFVar12);
  return __return_storage_ptr__;
}

// CoercePropertyValue @ 14664f710

FIntermediatePropertyValue * __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
CoercePropertyValue(TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
                   FIntermediatePropertyValue *__return_storage_ptr__,FProperty *param_1,
                   FSourcePropertyValue *param_2)

{
  TArray<UE::MovieScene::TDynamicVariantTraitsBase<__int64>,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  FIntermediatePropertyValue *pFVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  long64 *plVar12;
  uint uVar13;
  ulonglong uVar15;
  FProperty *local_48;
  long64 local_40;
  long64 local_38 [2];
  ulonglong uVar14;
  
  uVar9 = 0;
  uVar14 = uVar9;
  do {
    cVar6 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar14])(param_1);
    if (cVar6 != '\0') {
      (*(code *)(&`public:_static_struct_UE::MovieScene::FIntermediatePropertyValue___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::CoercePropertyValueChecked(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex,UE::MovieScene::FSourcePropertyValue_const&___ptr64)'
                  ::__l2::Funcs)[uVar14 & 0xff])(__return_storage_ptr__,param_1,param_2);
      return __return_storage_ptr__;
    }
    uVar13 = (int)uVar14 + 1;
    uVar14 = (ulonglong)uVar13;
  } while ((int)uVar13 < 4);
  if (((this->DynamicTraits).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DynamicTraits.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1ef,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  if ((param_1 == (FProperty *)0x0) ||
     (local_48 = param_1, (*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
    local_48 = (FProperty *)0x0;
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x480,L"CastFieldChecked failed with 0x%016llx");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
      return pFVar8;
    }
  }
  pTVar1 = &this->DynamicTraits;
  uVar13 = 0;
  uVar14 = uVar9;
  uVar15 = uVar9;
  if (0 < (this->DynamicTraits).ArrayNum + -1) {
    do {
      uVar10 = (uint)uVar14;
      uVar11 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
        return pFVar8;
      }
      lVar4 = *(longlong *)((pTVar1->AllocatorInstance).Data + uVar15);
      if (local_48[1]._padding_ == 0) {
        bVar7 = lVar4 == 0;
      }
      else {
        bVar7 = local_48[1]._padding_ == lVar4;
      }
      if (bVar7) {
        if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
          return pFVar8;
        }
        pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x38 + 0x10);
        if ((param_2->Value).bIsValid) {
          if (!(param_2->Value).bInline) {
            param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
          }
          uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
        }
        (*pcVar5)(uVar9,&local_40);
        plVar12 = &local_40;
        goto LAB_14664f979;
      }
      uVar14 = (ulonglong)(uVar10 + 1);
      uVar15 = uVar15 + 0x38;
    } while ((int)(uVar10 + 1) < (this->DynamicTraits).ArrayNum + -1);
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar10 = iVar3 - 1;
  uVar11 = uVar13;
  if ((int)uVar10 < iVar3) {
    uVar11 = ~uVar10 >> 0x1f;
  }
  if ((uVar11 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  lVar4 = *(longlong *)
           ((pTVar1->AllocatorInstance).Data +
           (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x38);
  if (local_48[1]._padding_ == 0) {
    bVar7 = lVar4 == 0;
  }
  else {
    bVar7 = local_48[1]._padding_ == lVar4;
  }
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct == DynamicTraits.Last().Struct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyTraits.h"
                         ,0x1fd,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  iVar3 = (this->DynamicTraits).ArrayNum;
  uVar11 = iVar3 - 1;
  if ((int)uVar11 < iVar3) {
    uVar13 = ~uVar11 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    pFVar8 = (FIntermediatePropertyValue *)(*pcVar5)();
    return pFVar8;
  }
  pcVar5 = *(code **)((pTVar1->AllocatorInstance).Data +
                     (longlong)(this->DynamicTraits).ArrayNum * 0x38 + -0x28);
  if ((param_2->Value).bIsValid) {
    if (!(param_2->Value).bInline) {
      param_2 = *(FSourcePropertyValue **)(param_2->Value).Data.Pad;
    }
    uVar9 = (**(code **)(*(longlong *)(param_2->Value).Data.Pad + 8))(param_2);
  }
  (*pcVar5)(uVar9,local_38);
  plVar12 = local_38;
LAB_14664f979:
  FIntermediatePropertyValue::FromValue<__int64_&>(__return_storage_ptr__,plVar12);
  return __return_storage_ptr__;
}

// ComputeVariantIndex @ 1466514d0

bool __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::ComputeVariantIndex
          (TDynamicVariantPropertyTraits<double,double> *this,FProperty *param_1,
          FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<double,double>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_1466515bd;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 1);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 1);
LAB_1466515bd:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// ComputeVariantIndex @ 1466515f0

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::ComputeVariantIndex
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,FProperty *param_1,FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_1466516de;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 5);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 5);
LAB_1466516de:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// ComputeVariantIndex @ 146651710

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::ComputeVariantIndex
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,FProperty *param_1,FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_1466517fe;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 3);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 3);
LAB_1466517fe:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// ComputeVariantIndex @ 146651830

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::ComputeVariantIndex
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,FProperty *param_1,FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_14665191d;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 1);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 1);
LAB_14665191d:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// ComputeVariantIndex @ 146651950

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
ComputeVariantIndex(TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
                    *this,FProperty *param_1,FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_146651a3e;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 3);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 3);
LAB_146651a3e:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// ComputeVariantIndex @ 146651a70

bool __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
ComputeVariantIndex(TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
                   FProperty *param_1,FVariantPropertyTypeIndex *param_2)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar8 = 0;
  do {
    cVar3 = (*(code *)(&`public:_static_bool___cdecl_UE::MovieScene::TVariantPropertyTraits<__int64,__int64,int,short,signed_char>::ComputeVariantIndex(FProperty_const&___ptr64,UE::MovieScene::FVariantPropertyTypeIndex&___ptr64)'
                        ::__l2::Funcs)[uVar8])(param_1);
    if (cVar3 != '\0') goto LAB_146651b5e;
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
  } while ((int)uVar7 < 4);
  if (((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
     && (uVar7 = 0, 0 < (this->DynamicTraits).ArrayNum)) {
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      lVar1 = *(longlong *)
               ((this->DynamicTraits).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x38);
      if (param_1[1]._padding_ == 0) {
        bVar4 = lVar1 == 0;
      }
      else {
        bVar4 = param_1[1]._padding_ == lVar1;
      }
      if (bVar4) {
        uVar8 = (ulonglong)(byte)((char)uVar7 + 4);
LAB_146651b5e:
        param_2->Index = (uchar)uVar8;
        return true;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (this->DynamicTraits).ArrayNum);
  }
  return false;
}

// GetObjectPropertyValue @ 14668cbe0

/* WARNING: Switch with 1 destination removed at 0x00014668ccc0 */

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<double,double> *this,UObject *param_1,
          FVariantPropertyTypeIndex param_2,ushort param_3,double *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2.Index == '\0') {
    *param_4 = *(double *)(&param_1->field_0x0 + param_3);
    return;
  }
  uVar4 = param_2.Index - 1;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x28))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668ccd0

/* WARNING: Switch with 1 destination removed at 0x00014668cdb1 */

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<double,double> *this,UObject *param_1,
          FVariantPropertyTypeIndex param_2,FTrackInstancePropertyBindings *param_3,double *param_4)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FResolvedPropertyAndFunction *this_00;
  double *pdVar5;
  uint uVar6;
  
  if (param_2.Index != '\0') {
    uVar6 = param_2.Index - 1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < (this->DynamicTraits).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar6 < (this->DynamicTraits).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                  (ulonglong)param_2.Index * 0x38 + -0x18))(param_1,param_3,param_4);
    }
    return;
  }
  this_00 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  uVar1 = (this_00->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pdVar5 = FCachedProperty::GetPropertyAddress<double>((FCachedProperty *)this_00);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668d948;
    pdVar5 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this_00,false);
  }
  if (pdVar5 != (double *)0x0) {
    *param_4 = *pdVar5;
    return;
  }
LAB_14668d948:
  *param_4 = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668cdc0

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FDoubleIntermediateVector *param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  switch(param_2.Index) {
  case '\0':
    dVar1 = *(double *)(&param_1->field_0x8 + param_3);
    param_4->X = *(double *)(&param_1->field_0x0 + param_3);
    param_4->Y = dVar1;
    param_4->Z = 0.0;
    param_4->W = 0.0;
    return;
  case '\x01':
  case '\x02':
    dVar1 = *(double *)(&param_1->field_0x8 + param_3);
    dVar3 = *(double *)((longlong)(&param_1->field_0x8 + param_3) + 8);
    param_4->X = *(double *)(&param_1->field_0x0 + param_3);
    param_4->Y = dVar1;
    param_4->Z = dVar3;
    param_4->W = 0.0;
    return;
  case '\x03':
  case '\x04':
    dVar3 = *(double *)(&param_1->field_0x8 + param_3);
    dVar4 = *(double *)((longlong)(&param_1->field_0x8 + param_3) + 8);
    dVar1 = *(double *)(&param_1->field_0x18 + param_3);
    param_4->X = *(double *)(&param_1->field_0x0 + param_3);
    param_4->Y = dVar3;
    param_4->Z = dVar4;
    param_4->W = dVar1;
    return;
  }
  uVar7 = param_2.Index - 5;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->DynamicTraits).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x108))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668ceb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FDoubleIntermediateVector *param_4)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<double> *pTVar5;
  FResolvedPropertyAndFunction *pFVar6;
  TVector4<double> *pTVar7;
  TVector<double> *pTVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  double dVar15;
  
  dVar15 = _UNK_15061cbc8;
  dVar14 = ___xmm_3ff00000000000000000000000000000;
  switch(param_2.Index) {
  case '\0':
    break;
  case '\x01':
  case '\x02':
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    dVar14 = 0.0;
    pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar8 = FCachedProperty::GetPropertyAddress<UE::Math::TVector<double>_>
                         ((FCachedProperty *)pFVar6);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668de45;
      pTVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
    }
    dVar14 = 0.0;
    if (pTVar8 != (TVector<double> *)0x0) {
      uVar10 = *(undefined4 *)&pTVar8->field0_0x0;
      uVar11 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 4);
      uVar12 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 8);
      uVar13 = *(undefined4 *)((longlong)&pTVar8->field0_0x0 + 0xc);
      dVar14 = (pTVar8->field0_0x0)._s_0.Z;
    }
LAB_14668de45:
    param_4->X = (double)CONCAT44(uVar11,uVar10);
    param_4->Y = (double)CONCAT44(uVar13,uVar12);
    param_4->Z = dVar14;
    param_4->W = 0.0;
    return;
  case '\x03':
  case '\x04':
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar7 = FCachedProperty::GetPropertyAddress<UE::Math::TVector4<double>_>
                         ((FCachedProperty *)pFVar6);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668dc89;
      pTVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
    }
    if (pTVar7 != (TVector4<double> *)0x0) {
      uVar10 = *(undefined4 *)&pTVar7->field0_0x0;
      uVar11 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
      uVar12 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
      uVar13 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
      dVar14 = (pTVar7->field0_0x0)._s_0.Z;
      dVar15 = (pTVar7->field0_0x0)._s_0.W;
    }
LAB_14668dc89:
    param_4->X = (double)CONCAT44(uVar11,uVar10);
    param_4->Y = (double)CONCAT44(uVar13,uVar12);
    param_4->Z = dVar14;
    param_4->W = dVar15;
    return;
  default:
    uVar9 = param_2.Index - 5;
    if ((-1 < (int)uVar9) && ((int)uVar9 < (this->DynamicTraits).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar9 < (this->DynamicTraits).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                  (ulonglong)param_2.Index * 0x38 + -0xf8))(param_1,param_3,param_4);
    }
    return;
  }
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar5 = FCachedProperty::GetPropertyAddress<UE::Math::TVector2<double>_>
                       ((FCachedProperty *)pFVar6);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668daf8;
    pTVar5 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
  }
  if (pTVar5 != (TVector2<double> *)0x0) {
    uVar10 = *(undefined4 *)&pTVar5->field0_0x0;
    uVar11 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 4);
    uVar12 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 8);
    uVar13 = *(undefined4 *)((longlong)&pTVar5->field0_0x0 + 0xc);
  }
LAB_14668daf8:
  param_4->X = (double)CONCAT44(uVar11,uVar10);
  param_4->Y = (double)CONCAT44(uVar13,uVar12);
  param_4->Z = 0.0;
  param_4->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668cfa0

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FFloatIntermediateVector *param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  
  switch(param_2.Index) {
  case '\0':
    fVar1 = *(float *)(&param_1->field_0x4 + param_3);
    param_4->X = (double)*(float *)(&param_1->field_0x0 + param_3);
    param_4->Y = (double)fVar1;
    param_4->Z = 0.0;
    param_4->W = 0.0;
    return;
  case '\x01':
    fVar1 = *(float *)(&param_1->field_0x4 + param_3);
    fVar2 = *(float *)(&param_1->field_0x8 + param_3);
    param_4->X = (double)*(float *)(&param_1->field_0x0 + param_3);
    param_4->Y = (double)fVar1;
    param_4->Z = (double)fVar2;
    param_4->W = 0.0;
    return;
  case '\x02':
    fVar1 = *(float *)(&param_1->field_0x4 + param_3);
    uVar3 = *(undefined8 *)(&param_1->field_0x8 + param_3);
    param_4->X = (double)*(float *)(&param_1->field_0x0 + param_3);
    dVar6 = (double)(float)uVar3;
    dVar7 = (double)(float)((ulonglong)uVar3 >> 0x20);
    param_4->Y = (double)fVar1;
    auVar5._8_4_ = SUB84(dVar7,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    param_4->Z = dVar6;
    param_4->W = (double)auVar5._8_8_;
    return;
  }
  uVar10 = param_2.Index - 3;
  if ((-1 < (int)uVar10) && ((int)uVar10 < (this->DynamicTraits).ArrayNum)) {
    uVar9 = 0;
    if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x98))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668d090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FFloatIntermediateVector *param_4)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector2<float>_u_0_s_0 *pTVar5;
  FResolvedPropertyAndFunction *pFVar6;
  TVector4<float> *pTVar7;
  TVector<float> *pTVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  TVector2<float>_u_0 TVar14;
  
  fVar11 = _UNK_15068964c;
  fVar12 = _UNK_150689648;
  fVar10 = _UNK_150689644;
  fVar13 = ___xmm_3f800000000000000000000000000000;
  switch(param_2.Index) {
  case '\0':
    break;
  case '\x01':
    fVar13 = 0.0;
    fVar10 = 0.0;
    fVar12 = 0.0;
    pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar8 = FCachedProperty::GetPropertyAddress<UE::Math::TVector<float>_>
                         ((FCachedProperty *)pFVar6);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668dd77;
      pTVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
    }
    fVar10 = 0.0;
    if (pTVar8 != (TVector<float> *)0x0) {
      fVar13 = (pTVar8->field0_0x0)._s_0.Z;
      fVar12 = (float)((ulonglong)*(undefined8 *)&pTVar8->field0_0x0 >> 0x20);
      fVar10 = (float)*(undefined8 *)&pTVar8->field0_0x0;
    }
LAB_14668dd77:
    param_4->X = (double)fVar10;
    param_4->Y = (double)fVar12;
    param_4->Z = (double)fVar13;
    param_4->W = 0.0;
    return;
  case '\x02':
    pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pTVar7 = FCachedProperty::GetPropertyAddress<UE::Math::TVector4<float>_>
                         ((FCachedProperty *)pFVar6);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668dbad;
      pTVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
    }
    if (pTVar7 != (TVector4<float> *)0x0) {
      fVar13 = (pTVar7->field0_0x0)._s_0.X;
      fVar10 = (pTVar7->field0_0x0)._s_0.Y;
      fVar12 = (pTVar7->field0_0x0)._s_0.Z;
      fVar11 = (pTVar7->field0_0x0)._s_0.W;
    }
LAB_14668dbad:
    param_4->X = (double)fVar13;
    param_4->Y = (double)fVar10;
    param_4->Z = (double)fVar12;
    param_4->W = (double)fVar11;
    return;
  default:
    uVar9 = param_2.Index - 3;
    if ((-1 < (int)uVar9) && ((int)uVar9 < (this->DynamicTraits).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar9 < (this->DynamicTraits).ArrayNum) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                  (ulonglong)param_2.Index * 0x38 + -0x88))(param_1,param_3,param_4);
    }
    return;
  }
  TVar14 = (TVector2<float>_u_0)0x0;
  pFVar6 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  uVar1 = (pFVar6->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pTVar5 = (TVector2<float>_u_0_s_0 *)
             FCachedProperty::GetPropertyAddress<UE::Math::TVector2<float>_>
                       ((FCachedProperty *)pFVar6);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668da3e;
    pTVar5 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar6,false);
  }
  if (pTVar5 != (TVector2<float>_u_0_s_0 *)0x0) {
    TVar14._s_0 = *pTVar5;
  }
LAB_14668da3e:
  param_4->X = (double)TVar14._s_0.X;
  param_4->Y = (double)TVar14._s_0.Y;
  param_4->Z = 0.0;
  param_4->W = 0.0;
  return;
}

// GetObjectPropertyValue @ 14668d180

/* WARNING: Switch with 1 destination removed at 0x00014668d260 */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FIntermediate3DTransform *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2.Index == '\0') {
    MovieScene::ConvertOperationalProperty
              ((TTransform<double> *)(&param_1->field_0x0 + param_3),param_4);
    return;
  }
  uVar4 = param_2.Index - 1;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x28))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668d270

/* WARNING: Switch with 1 destination removed at 0x00014668d351 */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FIntermediate3DTransform *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TTransform<double> TStack_68;
  
  if (param_2.Index == '\0') {
    FTrackInstancePropertyBindings::GetCurrentValue<UE::Math::TTransform<double>_>
              (param_3,&TStack_68,param_1);
    MovieScene::ConvertOperationalProperty(&TStack_68,param_4);
    return;
  }
  uVar5 = param_2.Index - 1;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->DynamicTraits).ArrayNum)) {
    iVar1 = (this->DynamicTraits).ArrayNum;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      TStack_68.Scale3D.ZW.m128d_f64[0] = (double)((longlong)(int)(uint)param_2.Index + -1);
      TStack_68.Translation.XY.m128d_f64[1] = 2.70562312055159e-314;
      TStack_68.Scale3D.ZW.m128d_f64[1] = (double)(longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    TStack_68.Translation.XY.m128d_f64[1] = 2.70562313685576e-314;
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x18))(param_1,param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668d360

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FIntermediateColor *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  FLinearColor *pFVar8;
  FSlateColor *this_00;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  switch(param_2.Index) {
  case '\0':
    fVar11 = *(float *)(&param_1->field_0x4 + param_3);
    uVar1 = *(undefined8 *)(&param_1->field_0x8 + param_3);
    param_4->R = (double)*(float *)(&param_1->field_0x0 + param_3);
    dVar4 = (double)(float)uVar1;
    dVar5 = (double)(float)((ulonglong)uVar1 >> 0x20);
    param_4->G = (double)fVar11;
    auVar3._8_4_ = SUB84(dVar5,0);
    auVar3._0_8_ = dVar4;
    auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    param_4->B = dVar4;
    param_4->A = (double)auVar3._8_8_;
    return;
  case '\x01':
    fVar11 = FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x1)[param_3]];
    fVar12 = FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x0)[param_3]];
    fVar10 = (float)(byte)(&param_1->field_0x3)[param_3] * __real_3b808081;
    param_4->R = (double)FLinearColor::sRGBToLinearTable[(byte)(&param_1->field_0x2)[param_3]];
    param_4->G = (double)fVar11;
    param_4->B = (double)fVar12;
    param_4->A = (double)fVar10;
    return;
  case '\x02':
    this_00 = (FSlateColor *)(&param_1->field_0x0 + param_3);
    if (this_00->ColorUseRule == UseColor_ColorTable) {
      pFVar8 = FSlateColor::GetColorFromTable(this_00);
      fVar11 = (pFVar8->field0_0x0)._s_0.R;
      fVar12 = (pFVar8->field0_0x0)._s_0.G;
      fVar10 = (pFVar8->field0_0x0)._s_0.B;
      fVar13 = (pFVar8->field0_0x0)._s_0.A;
    }
    else {
      fVar11 = (this_00->SpecifiedColor).field0_0x0._s_0.R;
      fVar12 = (this_00->SpecifiedColor).field0_0x0._s_0.G;
      fVar10 = (this_00->SpecifiedColor).field0_0x0._s_0.B;
      fVar13 = (this_00->SpecifiedColor).field0_0x0._s_0.A;
    }
    param_4->R = (double)fVar11;
    param_4->G = (double)fVar12;
    param_4->B = (double)fVar10;
    param_4->A = (double)fVar13;
    return;
  }
  uVar9 = param_2.Index - 3;
  if ((-1 < (int)uVar9) && ((int)uVar9 < (this->DynamicTraits).ArrayNum)) {
    uVar7 = 0;
    if ((int)uVar9 < (this->DynamicTraits).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x98))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668d450

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FIntermediateColor *param_4)

{
  uchar uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FColor_u_0_s_0 *pFVar7;
  FResolvedPropertyAndFunction *pFVar8;
  FSlateColor *pFVar9;
  FLinearColor *pFVar10;
  FColor_u_0 FVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  FLinearColor_u_0 FStack_28;
  ulonglong local_18;
  longlong local_10;
  
  switch(param_2.Index) {
  case '\0':
    break;
  case '\x01':
    FVar11.Bits = 0;
    pFVar8 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar8->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar7 = (FColor_u_0_s_0 *)
               FCachedProperty::GetPropertyAddress<FColor>((FCachedProperty *)pFVar8);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668df35;
      pFVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar8,false);
    }
    FVar11.Bits = 0;
    if (pFVar7 != (FColor_u_0_s_0 *)0x0) {
      FVar11._s_0 = *pFVar7;
    }
LAB_14668df35:
    fVar13 = FLinearColor::sRGBToLinearTable[FVar11.Bits >> 8 & 0xff];
    fVar14 = FLinearColor::sRGBToLinearTable[FVar11.Bits & 0xff];
    param_4->R = (double)FLinearColor::sRGBToLinearTable[FVar11.Bits >> 0x10 & 0xff];
    param_4->G = (double)fVar13;
    param_4->B = (double)fVar14;
    param_4->A = (double)((float)(FVar11.Bits >> 0x18) * __real_3b808081);
    return;
  case '\x02':
    local_18 = local_18 & 0xffffffffffffff00;
    FStack_28._0_8_ = ___xmm_3f8000003f800000000000003f800000;
    FStack_28._8_8_ = _UNK_15090c6d8;
    pFVar8 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar8->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pFVar9 = FCachedProperty::GetPropertyAddress<FSlateColor>((FCachedProperty *)pFVar8);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668e15e;
      pFVar9 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar8,false);
    }
    if (pFVar9 != (FSlateColor *)0x0) {
      FStack_28._0_8_ = *(undefined8 *)&(pFVar9->SpecifiedColor).field0_0x0;
      FStack_28._8_8_ = *(undefined8 *)((longlong)&(pFVar9->SpecifiedColor).field0_0x0 + 8);
      uVar3._0_1_ = pFVar9->ColorUseRule;
      uVar3._1_1_ = pFVar9->ColorTableId;
      uVar3._2_2_ = *(undefined2 *)&pFVar9->field_0x12;
      local_18 = CONCAT44(local_18._4_4_,uVar3);
    }
LAB_14668e15e:
    if ((char)local_18 == '\x01') {
      pFVar10 = FSlateColor::GetColorFromTable((FSlateColor *)&FStack_28._s_0);
      FStack_28._s_0.R = (pFVar10->field0_0x0)._s_0.R;
      FStack_28._s_0.G = (pFVar10->field0_0x0)._s_0.G;
      FStack_28._s_0.B = (pFVar10->field0_0x0)._s_0.B;
      FStack_28._s_0.A = (pFVar10->field0_0x0)._s_0.A;
    }
    else {
    }
    param_4->R = (double)FStack_28._s_0.R;
    param_4->G = (double)FStack_28._s_0.G;
    param_4->B = (double)FStack_28._s_0.B;
    param_4->A = (double)FStack_28._s_0.A;
    return;
  default:
    uVar12 = param_2.Index - 3;
    if ((-1 < (int)uVar12) && ((int)uVar12 < (this->DynamicTraits).ArrayNum)) {
      iVar2 = (this->DynamicTraits).ArrayNum;
      uVar6 = 0;
      if ((int)uVar12 < iVar2) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if (uVar6 == 0) {
        local_18 = (longlong)(int)(uint)param_2.Index - 3;
        local_10 = (longlong)iVar2;
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
      (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                  (ulonglong)param_2.Index * 0x38 + -0x88))(param_1,param_3,param_4);
    }
    return;
  }
  fVar13 = 0.0;
  fVar14 = 0.0;
  fVar15 = 0.0;
  fVar16 = 0.0;
  pFVar8 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  uVar1 = (pFVar8->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pFVar10 = FCachedProperty::GetPropertyAddress<FLinearColor>((FCachedProperty *)pFVar8);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e028;
    pFVar10 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar8,false);
  }
  if (pFVar10 != (FLinearColor *)0x0) {
    fVar13 = (pFVar10->field0_0x0)._s_0.R;
    fVar14 = (pFVar10->field0_0x0)._s_0.G;
    fVar15 = (pFVar10->field0_0x0)._s_0.B;
    fVar16 = (pFVar10->field0_0x0)._s_0.A;
  }
LAB_14668e028:
  param_4->R = (double)fVar13;
  param_4->G = (double)fVar14;
  param_4->B = (double)fVar15;
  param_4->A = (double)fVar16;
  return;
}

// GetObjectPropertyValue @ 14668d540

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,long64 *param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_2.Index) {
  case '\0':
    *param_4 = *(long64 *)(&param_1->field_0x0 + param_3);
    return;
  case '\x01':
    *param_4 = (longlong)*(int *)(&param_1->field_0x0 + param_3);
    return;
  case '\x02':
    *param_4 = (longlong)*(short *)(&param_1->field_0x0 + param_3);
    return;
  case '\x03':
    *param_4 = (longlong)(char)(&param_1->field_0x0)[param_3];
    return;
  }
  uVar4 = param_2.Index - 4;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0xd0))(&param_1->field_0x0 + param_3,param_4);
  }
  return;
}

// GetObjectPropertyValue @ 14668d630

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
GetObjectPropertyValue
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          UObject *param_1,FVariantPropertyTypeIndex param_2,FTrackInstancePropertyBindings *param_3
          ,long64 *param_4)

{
  uchar uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FResolvedPropertyAndFunction *pFVar5;
  char *pcVar6;
  short *psVar7;
  int *piVar8;
  long64 *plVar9;
  uint uVar10;
  
  switch(param_2.Index) {
  case '\0':
    break;
  case '\x01':
    pFVar5 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar5->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      piVar8 = FCachedProperty::GetPropertyAddress<int>((FCachedProperty *)pFVar5);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668d8b4;
      piVar8 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar5,false);
    }
    if (piVar8 != (int *)0x0) {
      *param_4 = (longlong)*piVar8;
      return;
    }
LAB_14668d8b4:
    *param_4 = 0;
    return;
  case '\x02':
    pFVar5 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar5->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      psVar7 = FCachedProperty::GetPropertyAddress<short>((FCachedProperty *)pFVar5);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668d825;
      psVar7 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar5,false);
    }
    if (psVar7 != (short *)0x0) {
      *param_4 = (longlong)*psVar7;
      return;
    }
LAB_14668d825:
    *param_4 = 0;
    return;
  case '\x03':
    pFVar5 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
    uVar1 = (pFVar5->ResolvedProperty).TypeIndex;
    if (uVar1 == '\0') {
      pcVar6 = FCachedProperty::GetPropertyAddress<signed_char>((FCachedProperty *)pFVar5);
    }
    else {
      if (uVar1 != '\x01') goto LAB_14668d796;
      pcVar6 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar5,false);
    }
    if (pcVar6 != (char *)0x0) {
      *param_4 = (longlong)*pcVar6;
      return;
    }
LAB_14668d796:
    *param_4 = 0;
    return;
  default:
    uVar10 = param_2.Index - 4;
    if ((-1 < (int)uVar10) && ((int)uVar10 < (this->DynamicTraits).ArrayNum)) {
      uVar4 = 0;
      if ((int)uVar10 < (this->DynamicTraits).ArrayNum) {
        uVar4 = ~uVar10 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                  (ulonglong)param_2.Index * 0x38 + -0xc0))(param_1,param_3,param_4);
    }
    return;
  }
  pFVar5 = FTrackInstancePropertyBindings::FindOrAdd(param_3,param_1);
  uVar1 = (pFVar5->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    plVar9 = FCachedProperty::GetPropertyAddress<__int64>((FCachedProperty *)pFVar5);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e249;
    plVar9 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)pFVar5,false);
  }
  if (plVar9 != (long64 *)0x0) {
    *param_4 = *plVar9;
    return;
  }
LAB_14668e249:
  *param_4 = 0;
  return;
}

// GetTrackClass @ 146698470

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::GetTrackClass
          (TDynamicVariantPropertyTraits<double,double> *this,FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<double> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<double>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<double>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_2509e14a)0x0), pTVar2 == (TDynamicVariantTraitsBase<double> *)0x0)) {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// GetTrackClass @ 1466984e0

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::GetTrackClass(TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
                *this,FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_9d1655ce)0x0),
     pTVar2 == (TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector> *)0x0)) {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// GetTrackClass @ 146698550

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::GetTrackClass(TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
                *this,FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_eb4113d7)0x0),
     pTVar2 == (TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector> *)0x0)) {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// GetTrackClass @ 1466985c0

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::GetTrackClass(TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
                *this,FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_5cea14a1)0x0),
     pTVar2 == (TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform> *)0x0)) {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// GetTrackClass @ 146698630

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
GetTrackClass(TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
              *this,FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_4bcf8a69)0x0),
     pTVar2 == (TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor> *)0x0)) {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// GetTrackClass @ 1466986a0

TSubclassOf<UMovieSceneTrack> __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::GetTrackClass
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          FProperty *param_1)

{
  UClass *pUVar1;
  TDynamicVariantTraitsBase<__int64> *pTVar2;
  longlong in_R8;
  
  if (((in_R8 == 0) || ((*(uint *)(*(longlong *)(in_R8 + 8) + 0x18) >> 0x14 & 1) == 0)) ||
     (pTVar2 = AlgoImpl::
               FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<__int64>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<__int64>::*>
                         (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(in_R8 + 0x70),
                          (pdm_117b1454)0x0), pTVar2 == (TDynamicVariantTraitsBase<__int64> *)0x0))
  {
    param_1->_padding_ = 0;
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  pUVar1 = (pTVar2->TrackClass).Class.field0_0x0.DebugPtr;
  param_1->_padding_ = (longlong)pUVar1;
  if (GC::GIsIncrementalReachabilityPending == false) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  if (pUVar1 == (UClass *)0x0) {
    return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
  }
  GC::MarkAsReachable((UObject *)pUVar1);
  return (TSubclassOf<UMovieSceneTrack>)(TObjectPtr<UClass>)param_1;
}

// InitializeTrackFromProperty @ 1466a3870

bool __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<double,double> *this,UMovieSceneTrack *param_1,
          FProperty *param_2)

{
  TDynamicVariantTraitsBase<double> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<double>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<double>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_2509e14a)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<double> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// InitializeTrackFromProperty @ 1466a38e0

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,UMovieSceneTrack *param_1,FProperty *param_2)

{
  TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_9d1655ce)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<UE::MovieScene::FDoubleIntermediateVector> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// InitializeTrackFromProperty @ 1466a3950

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,UMovieSceneTrack *param_1,FProperty *param_2)

{
  TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_eb4113d7)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<UE::MovieScene::FFloatIntermediateVector> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// InitializeTrackFromProperty @ 1466a39c0

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,UMovieSceneTrack *param_1,FProperty *param_2)

{
  TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_5cea14a1)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<UE::MovieScene::FIntermediate3DTransform> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// InitializeTrackFromProperty @ 1466a3a30

bool __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
           *this,UMovieSceneTrack *param_1,FProperty *param_2)

{
  TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_4bcf8a69)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<UE::MovieScene::FIntermediateColor> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// InitializeTrackFromProperty @ 1466a3aa0

bool __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
InitializeTrackFromProperty
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          UMovieSceneTrack *param_1,FProperty *param_2)

{
  TDynamicVariantTraitsBase<__int64> *pTVar1;
  
  if ((param_2 != (FProperty *)0x0) && ((*(uint *)(param_2->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pTVar1 = AlgoImpl::
             FindBy<TArray<UE::MovieScene::TDynamicVariantTraitsBase<__int64>,TSizedDefaultAllocator<32>_>_const_&,TObjectPtr<UScriptStruct>,UScriptStruct_*_UE::MovieScene::TDynamicVariantTraitsBase<__int64>::*>
                       (&this->DynamicTraits,(TObjectPtr<UScriptStruct> *)(param_2 + 1),
                        (pdm_117b1454)0x0);
    if ((pTVar1 != (TDynamicVariantTraitsBase<__int64> *)0x0) &&
       (pTVar1->InitializeNewTrack != (_func___cdecl_void_UMovieSceneTrack_ptr_FProperty_ptr *)0x0))
    {
      (*pTVar1->InitializeNewTrack)(param_1,param_2);
      return true;
    }
  }
  return false;
}

// SetObjectPropertyValue @ 1466f9740

/* WARNING: Switch with 1 destination removed at 0x0001466f9822 */

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<double,double> *this,UObject *param_1,
          FVariantPropertyTypeIndex param_2,ushort param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2.Index == '\0') {
    *(double *)(&param_1->field_0x0 + param_3) = param_4;
    return;
  }
  uVar4 = param_2.Index - 1;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x20))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9830

/* WARNING: Switch with 1 destination removed at 0x0001466f9913 */

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<double,double>::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<double,double> *this,UObject *param_1,
          FVariantPropertyTypeIndex param_2,FTrackInstancePropertyBindings *param_3,double param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2.Index == '\0') {
    FTrackInstancePropertyBindings::CallFunction<double>(param_3,param_1,param_4);
    return;
  }
  uVar4 = param_2.Index - 1;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x10))(param_1,param_3,param_4);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9920

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FDoubleIntermediateVector *param_4)

{
  double dVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  
  switch(param_2.Index) {
  case '\0':
    dVar1 = param_4->Y;
    *(double *)(&param_1->field_0x0 + param_3) = param_4->X;
    *(double *)(&param_1->field_0x8 + param_3) = dVar1;
    return;
  case '\x01':
  case '\x02':
    dVar1 = param_4->Y;
    dVar3 = param_4->Z;
    *(double *)(&param_1->field_0x0 + param_3) = param_4->X;
    *(double *)(&param_1->field_0x8 + param_3) = dVar1;
    *(double *)((longlong)(&param_1->field_0x8 + param_3) + 8) = dVar3;
    return;
  case '\x03':
  case '\x04':
    dVar3 = param_4->Y;
    dVar4 = param_4->Z;
    dVar1 = param_4->W;
    *(double *)(&param_1->field_0x0 + param_3) = param_4->X;
    *(double *)(&param_1->field_0x8 + param_3) = dVar3;
    *(double *)((longlong)(&param_1->field_0x8 + param_3) + 8) = dVar4;
    *(double *)(&param_1->field_0x18 + param_3) = dVar1;
    return;
  }
  uVar7 = param_2.Index - 5;
  if ((-1 < (int)uVar7) && ((int)uVar7 < (this->DynamicTraits).ArrayNum)) {
    uVar6 = 0;
    if ((int)uVar7 < (this->DynamicTraits).ArrayNum) {
      uVar6 = ~uVar7 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x100))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9a10

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FDoubleIntermediateVector *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_28 [32];
  
  switch(param_2.Index) {
  case '\0':
    auStack_28._16_8_ = param_4->X;
    auStack_28._24_8_ = param_4->Y;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<double>_>
              (param_3,param_1,(TVector2<double> *)(auStack_28 + 0x10));
    return;
  case '\x01':
  case '\x02':
    auStack_28._0_8_ = param_4->X;
    auStack_28._8_8_ = param_4->Y;
    auStack_28._16_8_ = param_4->Z;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<double>_>
              (param_3,param_1,(TVector<double> *)auStack_28);
    return;
  case '\x03':
  case '\x04':
    auStack_28._0_8_ = param_4->X;
    auStack_28._8_8_ = param_4->Y;
    auStack_28._16_8_ = param_4->Z;
    auStack_28._24_8_ = param_4->W;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<double>_>
              (param_3,param_1,(TVector4<double> *)auStack_28);
    return;
  }
  uVar5 = param_2.Index - 5;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->DynamicTraits).ArrayNum)) {
    iVar1 = (this->DynamicTraits).ArrayNum;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      auStack_28._16_8_ = (longlong)(int)(uint)param_2.Index + -5;
      auStack_28._24_8_ = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0xf0))(param_1,param_3,param_4);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9b00

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FFloatIntermediateVector *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  
  switch(param_2.Index) {
  case '\0':
    *(ulonglong *)(&param_1->field_0x0 + param_3) = CONCAT44((float)param_4->Y,(float)param_4->X);
    return;
  case '\x01':
    dVar2 = param_4->Y;
    dVar3 = param_4->Z;
    *(float *)(&param_1->field_0x0 + param_3) = (float)param_4->X;
    *(float *)(&param_1->field_0x4 + param_3) = (float)dVar2;
    *(float *)(&param_1->field_0x8 + param_3) = (float)dVar3;
    return;
  case '\x02':
    dVar2 = param_4->Y;
    dVar3 = param_4->Z;
    dVar4 = param_4->W;
    pfVar1 = (float *)(&param_1->field_0x0 + param_3);
    *pfVar1 = (float)param_4->X;
    pfVar1[1] = (float)dVar2;
    pfVar1[2] = (float)dVar3;
    pfVar1[3] = (float)dVar4;
    return;
  }
  uVar8 = param_2.Index - 3;
  if ((-1 < (int)uVar8) && ((int)uVar8 < (this->DynamicTraits).ArrayNum)) {
    uVar7 = 0;
    if ((int)uVar8 < (this->DynamicTraits).ArrayNum) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x90))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9bf0

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FFloatIntermediateVector *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  TVector2<float> TVar6;
  undefined1 local_18 [8];
  float local_10;
  float fStack_c;
  
  switch(param_2.Index) {
  case '\0':
    TVar6.field0_0x0._s_0.Y = (float)param_4->Y;
    TVar6.field0_0x0._s_0.X = (float)param_4->X;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector2<float>_>(param_3,param_1,TVar6);
    return;
  case '\x01':
    local_18._4_4_ = (float)param_4->Y;
    local_18._0_4_ = (float)param_4->X;
    local_10 = (float)param_4->Z;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector<float>_>
              (param_3,param_1,(TVector<float> *)local_18);
    return;
  case '\x02':
    local_18._4_4_ = (float)param_4->Y;
    local_18._0_4_ = (float)param_4->X;
    fStack_c = (float)param_4->W;
    local_10 = (float)param_4->Z;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TVector4<float>_>
              (param_3,param_1,(TVector4<float> *)local_18);
    return;
  }
  uVar5 = param_2.Index - 3;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->DynamicTraits).ArrayNum)) {
    iVar1 = (this->DynamicTraits).ArrayNum;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_18 = (undefined1  [8])((longlong)(int)(uint)param_2.Index + -3);
      _local_10 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x80))(param_1,param_3,param_4);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9ce0

/* WARNING: Switch with 1 destination removed at 0x0001466f9dc0 */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FIntermediate3DTransform *param_4)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  uint uVar16;
  TQuat<double> *pTVar17;
  uint uVar18;
  TRotator<double> TStack_a8;
  TQuat<double> aTStack_88 [2];
  undefined8 uStack_40;
  longlong local_18;
  longlong local_10;
  
  if (param_2.Index == '\0') {
    TStack_a8.Pitch = param_4->R_Y;
    TStack_a8.Yaw = param_4->R_Z;
    dVar2 = param_4->T_Y;
    uVar8 = *(undefined4 *)&param_4->T_X;
    uVar9 = *(undefined4 *)((longlong)&param_4->T_X + 4);
    dVar3 = param_4->T_Z;
    dVar4 = param_4->S_Y;
    uVar10 = *(undefined4 *)&param_4->S_X;
    uVar11 = *(undefined4 *)((longlong)&param_4->S_X + 4);
    TStack_a8.Roll = param_4->R_X;
    dVar5 = param_4->S_Z;
    pTVar17 = UE::Math::TRotator<double>::Quaternion(&TStack_a8,aTStack_88);
    dVar12 = pTVar17->Y;
    dVar13 = pTVar17->Z;
    dVar14 = pTVar17->W;
    *(double *)(&param_1->field_0x0 + param_3) = pTVar17->X;
    *(double *)((longlong)(&param_1->field_0x0 + param_3) + 8) = dVar12;
    *(double *)(&param_1->field_0x10 + param_3) = dVar13;
    *(double *)((longlong)(&param_1->field_0x10 + param_3) + 8) = dVar14;
    puVar1 = (undefined4 *)(&param_1->field_0x20 + param_3);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = SUB84(dVar2,0);
    puVar1[3] = (int)((ulonglong)dVar2 >> 0x20);
    *(double *)(&param_1[1].field_0x8 + param_3) = dVar3;
    *(double *)((longlong)(&param_1[1].field_0x8 + param_3) + 8) = 0.0;
    puVar1 = (undefined4 *)(&param_1[1].field_0x18 + param_3);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = SUB84(dVar4,0);
    puVar1[3] = (int)((ulonglong)dVar4 >> 0x20);
    *(double *)(&param_1[2].field_0x0 + param_3) = dVar5;
    *(double *)((longlong)(&param_1[2].field_0x0 + param_3) + 8) = 0.0;
    return;
  }
  uVar18 = param_2.Index - 1;
  if ((-1 < (int)uVar18) && ((int)uVar18 < (this->DynamicTraits).ArrayNum)) {
    iVar6 = (this->DynamicTraits).ArrayNum;
    uVar16 = 0;
    if ((int)uVar18 < iVar6) {
      uVar16 = ~uVar18 >> 0x1f;
    }
    if (uVar16 == 0) {
      local_18 = (longlong)(int)(uint)param_2.Index + -1;
      uStack_40 = 0x1466f9d63;
      local_10 = (longlong)iVar6;
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uStack_40 = 0x1466f9d82;
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x20))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Switch with 1 destination removed at 0x0001466f9eb1 */

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
::SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FIntermediate3DTransform *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  TQuat<double> *pTVar15;
  uint uVar16;
  undefined1 auStack_138 [32];
  TRotator<double> TStack_118;
  TQuat<double> TStack_f8;
  TTransform<double> TStack_d8;
  ulonglong uStack_78;
  undefined8 uStack_40;
  longlong local_18;
  longlong local_10;
  
  if (param_2.Index == '\0') {
    uStack_78 = __security_cookie.value ^ (ulonglong)auStack_138;
    TStack_118.Pitch = param_4->R_Y;
    TStack_118.Yaw = param_4->R_Z;
    dVar1 = param_4->S_Y;
    uVar10 = *(undefined4 *)&param_4->S_X;
    uVar11 = *(undefined4 *)((longlong)&param_4->S_X + 4);
    uVar12 = *(undefined4 *)&param_4->S_Y;
    dVar2 = param_4->S_Z;
    dVar3 = param_4->T_Y;
    uVar7 = *(undefined4 *)&param_4->T_X;
    uVar8 = *(undefined4 *)((longlong)&param_4->T_X + 4);
    uVar9 = *(undefined4 *)&param_4->T_Y;
    dVar4 = param_4->T_Z;
    TStack_118.Roll = param_4->R_X;
    pTVar15 = UE::Math::TRotator<double>::Quaternion(&TStack_118,&TStack_f8);
    TStack_d8.Rotation.XY.m128d_f64[0] = pTVar15->X;
    TStack_d8.Rotation.XY.m128d_f64[1] = pTVar15->Y;
    TStack_d8.Rotation.ZW.m128d_f64[0] = pTVar15->Z;
    TStack_d8.Rotation.ZW.m128d_f64[1] = pTVar15->W;
    TStack_d8.Translation.ZW.m128d_f64[1] = 0.0;
    TStack_d8.Scale3D.ZW.m128d_f64[1] = 0.0;
    TStack_d8.Translation.XY.m128d_f64[0]._0_4_ = uVar7;
    TStack_d8.Translation.XY.m128d_f64[0]._4_4_ = uVar8;
    TStack_d8.Translation.XY.m128d_f64[1]._0_4_ = uVar9;
    TStack_d8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar3 >> 0x20);
    TStack_d8.Translation.ZW.m128d_f64[0] = dVar4;
    TStack_d8.Scale3D.XY.m128d_f64[0]._0_4_ = uVar10;
    TStack_d8.Scale3D.XY.m128d_f64[0]._4_4_ = uVar11;
    TStack_d8.Scale3D.XY.m128d_f64[1]._0_4_ = uVar12;
    TStack_d8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar1 >> 0x20);
    TStack_d8.Scale3D.ZW.m128d_f64[0] = dVar2;
    FTrackInstancePropertyBindings::CallFunction<UE::Math::TTransform<double>_>
              (param_3,param_1,&TStack_d8);
    return;
  }
  uVar16 = param_2.Index - 1;
  if ((-1 < (int)uVar16) && ((int)uVar16 < (this->DynamicTraits).ArrayNum)) {
    iVar5 = (this->DynamicTraits).ArrayNum;
    uVar14 = 0;
    if ((int)uVar16 < iVar5) {
      uVar14 = ~uVar16 >> 0x1f;
    }
    if (uVar14 == 0) {
      local_18 = (longlong)(int)(uint)param_2.Index + -1;
      uStack_40 = 0x1466f9e52;
      local_10 = (longlong)iVar5;
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar13) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uStack_40 = 0x1466f9e73;
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x10))(param_1,param_3,param_4);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9ec0

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,
          FIntermediateColor *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined4 unaff_EBX;
  uint uVar9;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  
  switch(param_2.Index) {
  case '\0':
    dVar2 = param_4->G;
    dVar3 = param_4->B;
    dVar4 = param_4->A;
    *(float *)(&param_1->field_0x0 + param_3) = (float)param_4->R;
    *(float *)(&param_1->field_0x4 + param_3) = (float)dVar2;
    *(float *)(&param_1->field_0x8 + param_3) = (float)dVar3;
    *(float *)(&param_1->field_0xc + param_3) = (float)dVar4;
    return;
  case '\x01':
    fStack_14 = (float)param_4->G;
    local_18 = (float)param_4->R;
    fStack_c = (float)param_4->A;
    local_10 = (float)param_4->B;
    FLinearColor::ToFColorSRGB((FLinearColor *)&local_18);
    *(undefined4 *)(&param_1->field_0x0 + param_3) = unaff_EBX;
    return;
  case '\x02':
    dVar2 = param_4->G;
    dVar3 = param_4->B;
    dVar4 = param_4->A;
    local_18 = (float)((uint)_local_18 & 0xffffff00);
    pfVar1 = (float *)(&param_1->field_0x0 + param_3);
    *pfVar1 = (float)param_4->R;
    pfVar1[1] = (float)dVar2;
    pfVar1[2] = (float)dVar3;
    pfVar1[3] = (float)dVar4;
    *(float *)(&param_1->field_0x10 + param_3) = local_18;
    return;
  }
  uVar9 = param_2.Index - 3;
  if ((-1 < (int)uVar9) && ((int)uVar9 < (this->DynamicTraits).ArrayNum)) {
    iVar5 = (this->DynamicTraits).ArrayNum;
    uVar8 = 0;
    if ((int)uVar9 < iVar5) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      _local_18 = (longlong)(int)(uint)param_2.Index + -3;
      _local_10 = (longlong)iVar5;
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
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x90))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466f9fb0

void __thiscall
UE::MovieScene::
TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>::
SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>
           *this,UObject *param_1,FVariantPropertyTypeIndex param_2,
          FTrackInstancePropertyBindings *param_3,FIntermediateColor *param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FColor unaff_EBP;
  uint uVar5;
  undefined4 uStack_28;
  undefined1 auStack_20 [8];
  undefined1 local_18 [8];
  float local_10;
  float fStack_c;
  
  switch(param_2.Index) {
  case '\0':
    local_18._4_4_ = (float)param_4->G;
    local_18._0_4_ = (float)param_4->R;
    fStack_c = (float)param_4->A;
    local_10 = (float)param_4->B;
    FTrackInstancePropertyBindings::CallFunction<FLinearColor>
              (param_3,param_1,(FLinearColor *)local_18);
    return;
  case '\x01':
    local_18._4_4_ = (float)param_4->G;
    local_18._0_4_ = (float)param_4->R;
    fStack_c = (float)param_4->A;
    local_10 = (float)param_4->B;
    FLinearColor::ToFColorSRGB((FLinearColor *)local_18);
    FTrackInstancePropertyBindings::CallFunction<FColor>(param_3,param_1,unaff_EBP);
    return;
  case '\x02':
    auStack_20._0_4_ = (undefined4)param_4->R;
    _local_10 = CONCAT44(fStack_c,uStack_28) & 0xffffffffffffff00;
    auStack_20._4_4_ = (undefined4)param_4->G;
    local_18._4_4_ = (float)param_4->A;
    local_18._0_4_ = (float)param_4->B;
    FTrackInstancePropertyBindings::CallFunction<FSlateColor>
              (param_3,param_1,(FSlateColor *)auStack_20);
    return;
  }
  uVar5 = param_2.Index - 3;
  if ((-1 < (int)uVar5) && ((int)uVar5 < (this->DynamicTraits).ArrayNum)) {
    iVar1 = (this->DynamicTraits).ArrayNum;
    uVar4 = 0;
    if ((int)uVar5 < iVar1) {
      uVar4 = ~uVar5 >> 0x1f;
    }
    if (uVar4 == 0) {
      local_18 = (undefined1  [8])((longlong)(int)(uint)param_2.Index + -3);
      _local_10 = (longlong)iVar1;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0x80))(param_1,param_3,param_4);
  }
  return;
}

// SetObjectPropertyValue @ 1466fa0a0

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          UObject *param_1,FVariantPropertyTypeIndex param_2,ushort param_3,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_2.Index) {
  case '\0':
    *(long64 *)(&param_1->field_0x0 + param_3) = param_4;
    return;
  case '\x01':
    *(int *)(&param_1->field_0x0 + param_3) = (int)param_4;
    return;
  case '\x02':
    *(short *)(&param_1->field_0x0 + param_3) = (short)param_4;
    return;
  case '\x03':
    (&param_1->field_0x0)[param_3] = (char)param_4;
    return;
  }
  uVar4 = param_2.Index - 4;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -200))(param_4,&param_1->field_0x0 + param_3);
  }
  return;
}

// SetObjectPropertyValue @ 1466fa190

void __thiscall
UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>::
SetObjectPropertyValue
          (TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char> *this,
          UObject *param_1,FVariantPropertyTypeIndex param_2,FTrackInstancePropertyBindings *param_3
          ,long64 param_4)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  switch(param_2.Index) {
  case '\0':
    FTrackInstancePropertyBindings::CallFunction<__int64>(param_3,param_1,param_4);
    return;
  case '\x01':
    FTrackInstancePropertyBindings::CallFunction<int>(param_3,param_1,(int)param_4);
    return;
  case '\x02':
    FTrackInstancePropertyBindings::CallFunction<short>(param_3,param_1,(short)param_4);
    return;
  case '\x03':
    FTrackInstancePropertyBindings::CallFunction<signed_char>(param_3,param_1,(schar)param_4);
    return;
  }
  uVar4 = param_2.Index - 4;
  if ((-1 < (int)uVar4) && ((int)uVar4 < (this->DynamicTraits).ArrayNum)) {
    uVar3 = 0;
    if ((int)uVar4 < (this->DynamicTraits).ArrayNum) {
      uVar3 = ~uVar4 >> 0x1f;
    }
    if ((uVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (**(code **)((this->DynamicTraits).AllocatorInstance.Data +
                (ulonglong)param_2.Index * 0x38 + -0xb8))(param_1,param_3,param_4);
  }
  return;
}

