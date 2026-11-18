// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 30

// DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_> @ 1465a8820

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_> @ 1465a88d0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_> @ 1465a8980

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_> @ 1465a8a30

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 1465a8ae0

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 1465a8b90

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_> @ 1465a8c40

TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
* __thiscall
UE::MovieScene::FPropertyRegistry::
DefineCompositeProperty<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          (FPropertyRegistry *this,
          TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TCompositePropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineProperty<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> @ 1465a8cf0

TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> *
__thiscall
UE::MovieScene::FPropertyRegistry::
DefineProperty<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          (FPropertyRegistry *this,
          TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          *param_1,wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
  *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
            (this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                *)(*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefineProperty<UE::MovieScene::TPropertyTraits<float,double,1>_> @ 1465a8da0

TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> * __thiscall
UE::MovieScene::FPropertyRegistry::DefineProperty<UE::MovieScene::TPropertyTraits<float,double,1>_>
          (FPropertyRegistry *this,
          TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_>
          *__return_storage_ptr__,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *param_1,
          wchar_t *param_2)

{
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_> TVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *pTVar5;
  FPropertyDefinition *pFVar6;
  
  DefinePropertyImpl<UE::MovieScene::TPropertyTraits<float,double,1>_>(this,param_1,param_2);
  TVar1 = param_1->CompositeID;
  uVar4 = 0;
  if ((int)TVar1 < (this->Properties).ArrayNum) {
    uVar4 = ~(uint)TVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TPropertyDefinitionBuilder<UE::MovieScene::TPropertyTraits<float,double,1>_> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  __return_storage_ptr__->Registry = this;
  pFVar6 = (FPropertyDefinition *)
           ((this->Properties).AllocatorInstance.Data + (longlong)(int)TVar1 * 0x70);
  __return_storage_ptr__->Definition = pFVar6;
  pFVar6->TraitsInstance = (IPropertyTraits *)&param_1->PropertyTraits;
  return __return_storage_ptr__;
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> @ 1465a8e50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_> TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<double> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a8fa7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<double> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<double,double>_>)
           0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a8fa7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_> @ 1465a9150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
  TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a92a7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<UE::MovieScene::FDoubleIntermediateVector> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FDoubleIntermediateVector,UE::Math::TVector2<double>,UE::Math::TVector<double>,UE::Math::TVector<double>,UE::Math::TVector4<double>,UE::Math::TVector4<double>_>_>
            )0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a92a7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_> @ 1465a9450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a95a7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
            )0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a95a7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_> @ 1465a9750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
  TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a98a7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::Math::TTransform<double>_>_>
            )0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a98a7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_> @ 1465a9a50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
  TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a9ba7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FIntermediateColor,FLinearColor,FColor,FSlateColor>_>
            )0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a9ba7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_> @ 1465a9d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
  TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<__int64> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
                   *)&param_1->_padding_) {
LAB_1465a9ea7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
               )(this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                    )*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
                 )Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<__int64> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::TDynamicVariantPropertyTraits<__int64,__int64,int,short,signed_char>_>
            )0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FVariantPropertyTypeIndex>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465a9ea7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> @ 1465aa050

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_> TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<unsigned_char> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
          )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<unsigned_char> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<unsigned_char,unsigned_char,1>_>)
      0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<float,double,1>_> @ 1465aa2f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<float,double,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<float,double,1>_> *param_1,
          wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_> TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<double> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_>)
          (this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_>)*piVar1)
  {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_>)
            Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<double> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<float,double,1>_>)0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_> @ 1465aa590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::Math::TRotator<double>_> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::Math::TRotator<double>_> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TRotator<double>,UE::Math::TRotator<double>,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_> @ 1465aa830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector2<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_> @ 1465aaad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::MovieScene::FFloatIntermediateVector> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::Math::TVector<float>,UE::MovieScene::FFloatIntermediateVector,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 1465aad70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 1465ab010

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::MovieScene::FIntermediate3DTransform> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_> @ 1465ab2b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
          *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
  TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FIntermediateColor> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
           )(this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
                )*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
             )Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<UE::MovieScene::FIntermediateColor> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FLinearColor,UE::MovieScene::FIntermediateColor,1>_>
       )0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>_> @ 1465ab550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FString,FString,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FString,FString,1>_> *param_1,
          wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_> TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<FString> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_>)
          (this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_>)
               *piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_>)
            Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<FString> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FString,FString,1>_>)0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>_> @ 1465ab7f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::
DefinePropertyImpl<UE::MovieScene::TPropertyTraits<FText,FText,1>_>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::TPropertyTraits<FText,FText,1>_> *param_1,
          wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_> TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<FText> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_>)
          (this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_>)*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_>)
            Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<FText> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::TPropertyTraits<FText,FText,1>_>)0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::FBoolPropertyTraits> @ 1465aba90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FBoolPropertyTraits>
          (FPropertyRegistry *this,TPropertyComponents<UE::MovieScene::FBoolPropertyTraits> *param_1
          ,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits> TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<bool> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
                   *)&param_1->_padding_) {
LAB_1465abbe7:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits>)
              (this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits>)*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits>)
                Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<bool> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::FBoolPropertyTraits>)0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465abbe7;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// DefinePropertyImpl<UE::MovieScene::FFloatPropertyTraits> @ 1465abd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FFloatPropertyTraits>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::FFloatPropertyTraits> *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits> TVar5;
  FName *pFVar6;
  longlong lVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  uint uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<double> local_7e;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if (0xffff < iVar2) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x11a,L"Maximum number of composite definitions reached");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  pFVar9 = (this->Properties).AllocatorInstance.Data;
  local_7e = param_1->InitialValue;
  local_e0 = 0;
  local_40 = local_40 & 0xfe | 2;
  uStack_d8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = local_e8;
  local_98 = (UObject *)0x0;
  local_88 = 0;
  local_84 = (undefined2)iVar2;
  local_82 = 0;
  local_68 = 0;
  lStack_70 = (ulonglong)uStack_d4 << 0x20;
  local_78 = 0;
  if ((pFVar9 <= (FScriptContainerElement *)&local_a8) &&
     (lVar7 = (longlong)(this->Properties).ArrayMax,
     (FScriptContainerElement *)&local_a8 < pFVar9 + lVar7 * 0x70)) {
    local_120 = (longlong)(this->Properties).ArrayNum;
    local_118 = 0x70;
    local_138 = &local_a8;
    local_130 = pFVar9;
    local_128 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits>)
          (this->Properties).ArrayNum;
  piVar1 = &(this->Properties).ArrayMax;
  if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits>)*piVar1) {
    TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits>)
            Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,(ForAnyElementType *)this,piVar1);
  }
  (this->Properties).ArrayNum = (int)TVar5 + 1;
  pFVar9 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
  *(undefined8 *)pFVar9 = local_a8;
  *(undefined8 *)(pFVar9 + 8) = uStack_a0;
  *(UObject **)(pFVar9 + 0x10) = local_98;
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
    GC::MarkAsReachable(local_98);
  }
  *(undefined8 *)(pFVar9 + 0x18) = local_90;
  *(undefined4 *)(pFVar9 + 0x20) = local_88;
  *(undefined2 *)(pFVar9 + 0x24) = local_84;
  *(undefined2 *)(pFVar9 + 0x26) = local_82;
  *(ushort *)(pFVar9 + 0x28) = local_80;
  *(TComponentTypeID<double> *)(pFVar9 + 0x2a) = local_7e;
  *(undefined8 *)(pFVar9 + 0x30) = local_78;
  *(longlong *)(pFVar9 + 0x38) = lStack_70;
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] & 0xfe);
  pFVar9[0x68] = (FScriptContainerElement)((byte)pFVar9[0x68] | 2);
  *(undefined8 *)(pFVar9 + 0x40) = local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
            ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar9 + 0x48),
             (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
  if (param_1->CompositeID !=
      (TCompositePropertyTypeID<UE::MovieScene::FFloatPropertyTraits>)0xffffffff) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InOutPropertyComponents.CompositeID",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                       ,0x13e,L"Property already defined");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  param_1->CompositeID = TVar5;
  if ((local_40 & 1) != 0) {
    pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
    if ((local_40 & 2) == 0) {
      pTVar8 = local_60[0];
    }
    local_40 = local_40 & 0xfe;
    (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                   (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
    if ((local_40 & 2) == 0) {
      FMemory::Free(local_60[0]);
    }
  }
  return;
}

// DefinePropertyImpl<UE::MovieScene::FObjectPropertyTraits> @ 1465ac030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FPropertyRegistry::DefinePropertyImpl<UE::MovieScene::FObjectPropertyTraits>
          (FPropertyRegistry *this,
          TPropertyComponents<UE::MovieScene::FObjectPropertyTraits> *param_1,wchar_t *param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits> TVar5;
  FName *pFVar6;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  *pTVar7;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *pTVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  FScriptContainerElement *local_130;
  longlong local_128;
  longlong local_120;
  undefined8 local_118;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined4 local_f8 [2];
  FName local_f0;
  undefined8 local_e8;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  FName *local_d0;
  undefined4 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  FName local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  UObject *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined2 local_84;
  undefined2 local_82;
  ushort local_80;
  TComponentTypeID<UE::MovieScene::FObjectComponent> local_7e;
  TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
  *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *local_60 [4];
  byte local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  iVar2 = (this->CompositeDefinitions).ArrayNum;
  if ((0xffff < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompositeOffsetInt32 <= ((uint16) 0xffff)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x11a,L"Maximum number of composite definitions reached"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_100[0] = 1;
  local_108[0] = 1;
  local_f8[0] = 2;
  pFVar6 = ::FName::FName(&local_b0,param_2);
  local_f0 = *pFVar6;
  local_d0 = &local_f0;
  local_c8 = local_f8;
  local_c0 = local_108;
  local_b8 = local_100;
  `FDynamicStats::CreateStatIdInternal<FStatGroup_STATGROUP_MovieSceneECS>'::__l2::<lambda_1>::
  operator()(&local_d0);
  local_80 = (param_1->PropertyTag).Value;
  local_7e = param_1->InitialValue;
  uStack_d8 = 1;
  local_40 = local_40 & 0xfe | 2;
  local_98 = (UObject *)0x0;
  local_90 = local_e8;
  local_e0 = &param_1->MetaDataComponents;
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  uStack_70 = CONCAT44(uStack_d4,1);
  local_82 = 0;
  local_68 = 0;
  local_84 = (undefined2)iVar2;
  pTVar7 = local_e0;
  do {
    local_78 = local_e0;
    if (pTVar7 == (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
                   *)&param_1->_padding_) {
LAB_1465ac187:
      pFVar10 = (this->Properties).AllocatorInstance.Data;
      if ((pFVar10 <= (FScriptContainerElement *)&local_a8) &&
         (lVar9 = (longlong)(this->Properties).ArrayMax,
         (FScriptContainerElement *)&local_a8 < pFVar10 + lVar9 * 0x70)) {
        local_120 = (longlong)(this->Properties).ArrayNum;
        local_118 = 0x70;
        local_138 = &local_a8;
        local_130 = pFVar10;
        local_128 = lVar9;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits>)
              (this->Properties).ArrayNum;
      piVar1 = &(this->Properties).ArrayMax;
      if (TVar5 == (TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits>)*piVar1) {
        TVar5 = (TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits>)
                Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x870,(ForAnyElementType *)this,piVar1);
      }
      (this->Properties).ArrayNum = (int)TVar5 + 1;
      pFVar10 = (this->Properties).AllocatorInstance.Data + (longlong)(int)TVar5 * 0x70;
      *(undefined8 *)pFVar10 = local_a8;
      *(undefined8 *)(pFVar10 + 8) = uStack_a0;
      *(UObject **)(pFVar10 + 0x10) = local_98;
      if ((GC::GIsIncrementalReachabilityPending != false) && (local_98 != (UObject *)0x0)) {
        GC::MarkAsReachable(local_98);
      }
      *(undefined8 *)(pFVar10 + 0x18) = local_90;
      *(undefined4 *)(pFVar10 + 0x20) = local_88;
      *(undefined2 *)(pFVar10 + 0x24) = local_84;
      *(undefined2 *)(pFVar10 + 0x26) = local_82;
      *(ushort *)(pFVar10 + 0x28) = local_80;
      *(TComponentTypeID<UE::MovieScene::FObjectComponent> *)(pFVar10 + 0x2a) = local_7e;
      *(TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
        **)(pFVar10 + 0x30) = local_78;
      *(undefined8 *)(pFVar10 + 0x38) = uStack_70;
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] & 0xfe);
      pFVar10[0x68] = (FScriptContainerElement)((byte)pFVar10[0x68] | 2);
      *(undefined8 *)(pFVar10 + 0x40) = local_68;
      TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8>::operator=
                ((TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)(pFVar10 + 0x48),
                 (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60);
      if ((param_1->CompositeID !=
           (TCompositePropertyTypeID<UE::MovieScene::FObjectPropertyTraits>)0xffffffff) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!InOutPropertyComponents.CompositeID",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                             ,0x13e,L"Property already defined"), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      param_1->CompositeID = TVar5;
      if ((local_40 & 1) != 0) {
        pTVar8 = (TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> *)local_60;
        if ((local_40 & 2) == 0) {
          pTVar8 = local_60[0];
        }
        local_40 = local_40 & 0xfe;
        (**(code **)((*(TInlineValue<UE::MovieScene::IPropertyComponentHandler,32,8> **)
                       (pTVar8->Data).Pad)->Data).Pad)(pTVar8,0);
        if ((local_40 & 2) == 0) {
          FMemory::Free(local_60[0]);
        }
      }
      return;
    }
    if (*pTVar7 ==
        (TPropertyMetaDataComponents<UE::MovieScene::TPropertyMetaData<UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>
         )0xffff) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!NewDefinition.MetaDataTypes.Contains(FComponentTypeID())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieScenePropertyRegistry.h"
                         ,0x13a,L"Property meta-data component is not defined");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      goto LAB_1465ac187;
    }
    pTVar7 = pTVar7 + 1;
  } while( true );
}

// GetProperties @ 146696fe0

TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> * __thiscall
UE::MovieScene::FPropertyRegistry::GetProperties
          (FPropertyRegistry *this,
          TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *pTVar4;
  
  iVar1 = (this->Properties).ArrayNum;
  __return_storage_ptr__->DataPtr = (FPropertyDefinition *)(this->Properties).AllocatorInstance.Data
  ;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::MovieScene::FPropertyDefinition_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetDefinition @ 146834620

FPropertyDefinition * __thiscall
UE::MovieScene::FPropertyRegistry::GetDefinition
          (FPropertyRegistry *this,FCompositePropertyTypeID param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FPropertyDefinition *pFVar4;
  
  uVar3 = 0;
  if (param_1.TypeIndex < (this->Properties).ArrayNum) {
    uVar3 = (uint)~param_1.TypeIndex >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FPropertyDefinition *)(*pcVar1)();
      return pFVar4;
    }
  }
  return (FPropertyDefinition *)
         ((this->Properties).AllocatorInstance.Data + (longlong)param_1.TypeIndex * 0x70);
}

