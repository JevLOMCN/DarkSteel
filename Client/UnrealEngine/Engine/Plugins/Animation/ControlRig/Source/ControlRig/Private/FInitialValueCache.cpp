// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// GetStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_> @ 14a39c5e0

TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
* __thiscall
UE::MovieScene::FInitialValueCache::
GetStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
          (FInitialValueCache *this,FComponentTypeID param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *pTVar5;
  TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *pTVar6;
  undefined1 *puVar7;
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>
  local_res8;
  TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  *local_res18 [2];
  TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
  **local_28;
  TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
  **local_20;
  
  pTVar5 = (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
            *)0x0;
  local_res8.Value._0_2_ = param_1.Value;
  if (*(int *)&(this->StorageByComponent).field_0x8 !=
      *(int *)&(this->StorageByComponent).field_0x34) {
    puVar7 = *(undefined1 **)&(this->StorageByComponent).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->StorageByComponent).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->StorageByComponent).field_0x48 - 1) &
                              (ulonglong)param_1.Value) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->StorageByComponent + (longlong)iVar4 * 0x18;
        if (*(ushort *)(*(longlong *)&this->StorageByComponent + (longlong)iVar4 * 0x18) ==
            param_1.Value) {
          pTVar6 = (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                    *)(lVar1 + 8);
          if (lVar1 == 0) {
            pTVar6 = pTVar5;
          }
          if (pTVar6 != (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                         *)0x0) {
            if ((pTVar6->_padding_ == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Existing->IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                   ,0x86,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar5 = (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                        *)(*pcVar2)();
              return pTVar5;
            }
            if ((TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 *)pTVar6->_padding_ !=
                (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 *)0x0) {
              return (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                      *)pTVar6->_padding_;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pTVar6 = ::operator_new(0x98);
  if (pTVar6 != (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
                 *)0x0) {
    pTVar6->_padding_ = 0;
    *(undefined8 *)&pTVar6->PropertyValues = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x8 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x10 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x18 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x20 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x28 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x30 = 0;
    *(undefined8 *)&pTVar6->KeyToPropertyIndex = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x8 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x10 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x18 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x20 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x28 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x30 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x38 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x40 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x48 = 0;
    *(undefined8 *)&pTVar6->bLUTContainsInvalidEntries = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TPropertyValueStorage_U__TDynamicVariantPropertyTraits_UFFloatIntermediateVector_MovieScene_UE__U__TVector2_M_Math_3_U__TVector_M_53_U__TVector4_M_53__MovieScene_UE___MovieScene_UE__6B_
    ;
    *(undefined4 *)&(pTVar6->PropertyValues).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar6->PropertyValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar6->KeyToPropertyIndex).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar6->KeyToPropertyIndex).field_0x30 = 0xffffffff;
    pTVar5 = pTVar6;
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  local_res18[0] = pTVar5;
  TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>_>
            ((TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_28);
  if (local_res18[0] !=
      (TPropertyValueStorage<UE::MovieScene::TDynamicVariantPropertyTraits<UE::MovieScene::FFloatIntermediateVector,UE::Math::TVector2<float>,UE::Math::TVector<float>,UE::Math::TVector4<float>_>_>
       *)0x0) {
    (**(code **)local_res18[0]->_padding_)(local_res18[0],1);
  }
  return pTVar5;
}

// GetStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_> @ 14a39c760

TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
* __thiscall
UE::MovieScene::FInitialValueCache::
GetStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
          (FInitialValueCache *this,FComponentTypeID param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar5;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *pTVar6;
  undefined1 *puVar7;
  TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>
  local_res8;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  *local_res18 [2];
  TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>
  **local_28;
  TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
  **local_20;
  
  pTVar5 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
            *)0x0;
  local_res8.Value._0_2_ = param_1.Value;
  if (*(int *)&(this->StorageByComponent).field_0x8 !=
      *(int *)&(this->StorageByComponent).field_0x34) {
    puVar7 = *(undefined1 **)&(this->StorageByComponent).field_0x40;
    if (puVar7 == (undefined1 *)0x0) {
      puVar7 = &(this->StorageByComponent).field_0x38;
    }
    iVar4 = *(int *)(puVar7 + ((ulonglong)(*(int *)&(this->StorageByComponent).field_0x48 - 1) &
                              (ulonglong)param_1.Value) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *(longlong *)&this->StorageByComponent + (longlong)iVar4 * 0x18;
        if (*(ushort *)(*(longlong *)&this->StorageByComponent + (longlong)iVar4 * 0x18) ==
            param_1.Value) {
          pTVar6 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                    *)(lVar1 + 8);
          if (lVar1 == 0) {
            pTVar6 = pTVar5;
          }
          if (pTVar6 != (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                         *)0x0) {
            if ((pTVar6->_padding_ == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Existing->IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneInitialValueCache.h"
                                   ,0x86,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              pTVar5 = (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                        *)(*pcVar2)();
              return pTVar5;
            }
            if ((TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                 *)pTVar6->_padding_ !=
                (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                 *)0x0) {
              return (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                      *)pTVar6->_padding_;
            }
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  pTVar6 = ::operator_new(0x98);
  if (pTVar6 != (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
                 *)0x0) {
    pTVar6->_padding_ = 0;
    *(undefined8 *)&pTVar6->PropertyValues = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x8 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x10 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x18 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x20 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x28 = 0;
    *(undefined8 *)&(pTVar6->PropertyValues).field_0x30 = 0;
    *(undefined8 *)&pTVar6->KeyToPropertyIndex = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x8 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x10 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x18 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x20 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x28 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x30 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x38 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x40 = 0;
    *(undefined8 *)&(pTVar6->KeyToPropertyIndex).field_0x48 = 0;
    *(undefined8 *)&pTVar6->bLUTContainsInvalidEntries = 0;
    pTVar6->_padding_ =
         (longlong)
         &
         ___7__TPropertyValueStorage_U__TPropertyTraits_UFEulerTransform__UFIntermediate3DTransform_MovieScene_UE___00_MovieScene_UE___MovieScene_UE__6B_
    ;
    *(undefined4 *)&(pTVar6->PropertyValues).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar6->PropertyValues).field_0x30 = 0xffffffff;
    *(undefined4 *)&(pTVar6->KeyToPropertyIndex).field_0x2c = 0x80;
    *(undefined4 *)&(pTVar6->KeyToPropertyIndex).field_0x30 = 0xffffffff;
    pTVar5 = pTVar6;
  }
  local_28 = &local_res8.Value;
  local_20 = local_res18;
  local_res18[0] = pTVar5;
  TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::MovieScene::FComponentTypeID_const_&,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_&&>_>
            ((TSet<TTuple<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>_>,TDefaultMapHashableKeyFuncs<UE::MovieScene::FComponentTypeID,TUniquePtr<UE::MovieScene::IPropertyValueStorage,TDefaultDelete<UE::MovieScene::IPropertyValueStorage>_>,0>,FDefaultSetAllocator>
              *)this,&local_res8,(bool *)&local_28);
  if (local_res18[0] !=
      (TPropertyValueStorage<UE::MovieScene::TPropertyTraits<FEulerTransform,UE::MovieScene::FIntermediate3DTransform,1>_>
       *)0x0) {
    (**(code **)local_res18[0]->_padding_)(local_res18[0],1);
  }
  return pTVar5;
}

