// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// FComponentMaterialAccessor @ 14675fc00

FComponentMaterialAccessor * __thiscall
UE::MovieScene::FComponentMaterialAccessor::FComponentMaterialAccessor
          (FComponentMaterialAccessor *this,FComponentMaterialKey *param_1)

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = (param_1->Object).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->Object).ObjectSerialNumber;
  pUVar4 = FWeakObjectPtr::Get(&local_res8);
  this->Object = pUVar4;
  iVar1 = (param_1->MaterialInfo).MaterialSlotIndex;
  EVar2 = (param_1->MaterialInfo).MaterialType;
  uVar3 = *(undefined3 *)&(param_1->MaterialInfo).field_0xd;
  (this->MaterialInfo).MaterialSlotName = (param_1->MaterialInfo).MaterialSlotName;
  (this->MaterialInfo).MaterialSlotIndex = iVar1;
  (this->MaterialInfo).MaterialType = EVar2;
  *(undefined3 *)&(this->MaterialInfo).field_0xd = uVar3;
  return this;
}

// FComponentMaterialAccessor @ 14675fc50

FComponentMaterialAccessor * __thiscall
UE::MovieScene::FComponentMaterialAccessor::FComponentMaterialAccessor
          (FComponentMaterialAccessor *this,UObject *param_1,FComponentMaterialInfo *param_2)

{
  int iVar1;
  EComponentMaterialType EVar2;
  undefined3 uVar3;
  
  this->Object = param_1;
  iVar1 = param_2->MaterialSlotIndex;
  EVar2 = param_2->MaterialType;
  uVar3 = *(undefined3 *)&param_2->field_0xd;
  (this->MaterialInfo).MaterialSlotName = param_2->MaterialSlotName;
  (this->MaterialInfo).MaterialSlotIndex = iVar1;
  (this->MaterialInfo).MaterialType = EVar2;
  *(undefined3 *)&(this->MaterialInfo).field_0xd = uVar3;
  return this;
}

// operator_bool @ 14676c170

bool __thiscall
UE::MovieScene::FComponentMaterialAccessor::operator_bool(FComponentMaterialAccessor *this)

{
  return this->Object != (UObject *)0x0;
}

// operator() @ 14676d1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UMaterialInstanceDynamic * __thiscall
`UE::MovieScene::FComponentMaterialAccessor::CreateDynamicMaterial'::__l2::<lambda_1>::operator()
          (void *this)

{
  FName FVar1;
  void *pvVar2;
  FName *pFVar3;
  FName FVar4;
  UMaterialInstanceDynamic *pUVar5;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  FName local_148;
  FName local_140;
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.Base = local_118;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  local_148 = *(FName *)(*(longlong *)((longlong)this + 8) + 0x18);
  ::FName::ToString(&local_148,&local_138);
  if (local_138.End < local_138.CurPos + 9) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,9);
  }
  pvVar2 = FGenericPlatformString::Memcpy(local_138.CurPos,L"_Animated",0x12);
  local_138.CurPos = (wchar_t *)((longlong)pvVar2 + 0x12);
  if (local_138.End < (wchar_t *)((longlong)pvVar2 + 0x14U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  pFVar3 = ::FName::FName(&local_148,local_138.Base);
  FVar1 = *pFVar3;
  FVar4 = (FName)Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  local_158 = 0;
  MakeUniqueObjectName
            ((UObject *)&local_140,(UClass *)**(undefined8 **)this,FVar4,
             FVar1.ComparisonIndex.Value.Value);
  pUVar5 = UMaterialInstanceDynamic::Create
                     (*(UMaterialInterface **)((longlong)this + 8),(UObject *)**(undefined8 **)this,
                      local_140);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return pUVar5;
}

// CreateDynamicMaterial @ 146786760

UMaterialInstanceDynamic * __thiscall
UE::MovieScene::FComponentMaterialAccessor::CreateDynamicMaterial
          (FComponentMaterialAccessor *this,UMaterialInterface *param_1)

{
  EComponentMaterialType EVar1;
  int iVar2;
  UVolumetricCloudComponent *this_00;
  UObject *pUVar3;
  UMeshComponent *this_01;
  FName FVar4;
  UClass *pUVar5;
  UMaterialInstanceDynamic *pUVar6;
  FName *pFVar7;
  FComponentMaterialAccessor *local_28;
  UMaterialInterface *local_20;
  FName *local_18;
  int local_10;
  
  EVar1 = (this->MaterialInfo).MaterialType;
  local_28 = this;
  local_20 = param_1;
  if (EVar1 == IndexedMaterial) {
    pUVar3 = this->Object;
    if (pUVar3 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*(longlong *)pUVar3 + 0x6a0))(pUVar3,&local_18);
        pUVar6 = `UE::MovieScene::FComponentMaterialAccessor::CreateDynamicMaterial'::__l2::
                 <lambda_1>::operator()(&local_28);
        FVar4 = (this->MaterialInfo).MaterialSlotName;
        if (FVar4 != (FName)0x0) {
          for (pFVar7 = local_18; pFVar7 != local_18 + local_10; pFVar7 = pFVar7 + 1) {
            if (*pFVar7 == FVar4) {
              (**(code **)(*(longlong *)pUVar3 + 0x6c0))(pUVar3,FVar4,pUVar6);
              goto LAB_14678693d;
            }
          }
        }
        (**(code **)(*(longlong *)pUVar3 + 0x6b8))
                  (pUVar3,(this->MaterialInfo).MaterialSlotIndex,pUVar6);
LAB_14678693d:
        if (local_18 != (FName *)0x0) {
          FMemory::Free(local_18);
        }
        return pUVar6;
      }
    }
  }
  else if (EVar1 == OverlayMaterial) {
    this_01 = (UMeshComponent *)this->Object;
    if (this_01 != (UMeshComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        pUVar6 = `UE::MovieScene::FComponentMaterialAccessor::CreateDynamicMaterial'::__l2::
                 <lambda_1>::operator()(&local_28);
        UMeshComponent::SetOverlayMaterial(this_01,(UMaterialInterface *)pUVar6);
        return pUVar6;
      }
    }
  }
  else if (EVar1 == DecalMaterial) {
    pUVar3 = this->Object;
    if (pUVar3 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UDecalComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
                    /* WARNING: Could not recover jumptable at 0x00014678683f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pUVar6 = (UMaterialInstanceDynamic *)(**(code **)(*(longlong *)pUVar3 + 0x640))(pUVar3);
        return pUVar6;
      }
    }
  }
  else if ((EVar1 == VolumetricCloudMaterial) &&
          (this_00 = (UVolumetricCloudComponent *)this->Object,
          this_00 != (UVolumetricCloudComponent *)0x0)) {
    pUVar5 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      pUVar6 = `UE::MovieScene::FComponentMaterialAccessor::CreateDynamicMaterial'::__l2::<lambda_1>
               ::operator()(&local_28);
      UVolumetricCloudComponent::SetMaterial(this_00,(UMaterialInterface *)pUVar6);
      return pUVar6;
    }
  }
  return (UMaterialInstanceDynamic *)0x0;
}

// GetMaterial @ 1467960e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMaterialInterface * __thiscall
UE::MovieScene::FComponentMaterialAccessor::GetMaterial(FComponentMaterialAccessor *this)

{
  EComponentMaterialType EVar1;
  int iVar2;
  UObject *pUVar3;
  UDecalComponent *this_00;
  UMeshComponent *this_01;
  UClass *pUVar4;
  UMaterialInterface *pUVar5;
  
  EVar1 = (this->MaterialInfo).MaterialType;
  if (EVar1 == IndexedMaterial) {
    pUVar3 = this->Object;
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        if (((this->MaterialInfo).MaterialSlotName != (FName)0x0) &&
           (pUVar5 = (UMaterialInterface *)
                     (**(code **)(*(longlong *)pUVar3 + 0x6b0))
                               (pUVar3,(this->MaterialInfo).MaterialSlotName),
           pUVar5 != (UMaterialInterface *)0x0)) {
          return pUVar5;
        }
                    /* WARNING: Could not recover jumptable at 0x00014679623f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pUVar5 = (UMaterialInterface *)
                 (**(code **)(*(longlong *)pUVar3 + 0x690))
                           (pUVar3,(this->MaterialInfo).MaterialSlotIndex);
        return pUVar5;
      }
    }
  }
  else if (EVar1 == OverlayMaterial) {
    this_01 = (UMeshComponent *)this->Object;
    if (this_01 != (UMeshComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = UMeshComponent::GetOverlayMaterial(this_01);
        return pUVar5;
      }
    }
  }
  else if (EVar1 == DecalMaterial) {
    this_00 = (UDecalComponent *)this->Object;
    if (this_00 != (UDecalComponent *)0x0) {
      pUVar4 = Z_Construct_UClass_UDecalComponent_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        pUVar5 = UDecalComponent::GetDecalMaterial(this_00);
        return pUVar5;
      }
    }
  }
  else if ((EVar1 == VolumetricCloudMaterial) && (pUVar3 = this->Object, pUVar3 != (UObject *)0x0))
  {
    pUVar4 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
        &pUVar4->_padding_)) {
      return *(UMaterialInterface **)&pUVar3[0x12].field_0x18;
    }
  }
  return (UMaterialInterface *)0x0;
}

// SetMaterial @ 1467c20f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::MovieScene::FComponentMaterialAccessor::SetMaterial
          (FComponentMaterialAccessor *this,UMaterialInterface *param_1)

{
  EComponentMaterialType EVar1;
  int iVar2;
  UVolumetricCloudComponent *this_00;
  UDecalComponent *this_01;
  UMeshComponent *this_02;
  UObject *pUVar3;
  FName FVar4;
  UClass *pUVar5;
  FName *pFVar6;
  FName *local_18;
  int local_10;
  
  EVar1 = (this->MaterialInfo).MaterialType;
  if (EVar1 == IndexedMaterial) {
    pUVar3 = this->Object;
    if (pUVar3 != (UObject *)0x0) {
      pUVar5 = Z_Construct_UClass_UPrimitiveComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        (**(code **)(*(longlong *)pUVar3 + 0x6a0))(pUVar3,&local_18);
        FVar4 = (this->MaterialInfo).MaterialSlotName;
        if (FVar4 != (FName)0x0) {
          for (pFVar6 = local_18; pFVar6 != local_18 + local_10; pFVar6 = pFVar6 + 1) {
            if (*pFVar6 == FVar4) {
              (**(code **)(*(longlong *)pUVar3 + 0x6c0))
                        (pUVar3,(this->MaterialInfo).MaterialSlotName,param_1);
              goto LAB_1467c2291;
            }
          }
        }
        (**(code **)(*(longlong *)pUVar3 + 0x6b8))
                  (pUVar3,(this->MaterialInfo).MaterialSlotIndex,param_1);
LAB_1467c2291:
        if (local_18 != (FName *)0x0) {
          FMemory::Free(local_18);
        }
      }
    }
  }
  else if (EVar1 == OverlayMaterial) {
    this_02 = (UMeshComponent *)this->Object;
    if (this_02 != (UMeshComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UMeshComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(this_02->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        UMeshComponent::SetOverlayMaterial(this_02,param_1);
        return;
      }
    }
  }
  else if (EVar1 == DecalMaterial) {
    this_01 = (UDecalComponent *)this->Object;
    if (this_01 != (UDecalComponent *)0x0) {
      pUVar5 = Z_Construct_UClass_UDecalComponent_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_01->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_01->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        UDecalComponent::SetDecalMaterial(this_01,param_1);
        return;
      }
    }
  }
  else if ((EVar1 == VolumetricCloudMaterial) &&
          (this_00 = (UVolumetricCloudComponent *)this->Object,
          this_00 != (UVolumetricCloudComponent *)0x0)) {
    pUVar5 = Z_Construct_UClass_UVolumetricCloudComponent_NoRegister();
    iVar2 = (int)pUVar5->_padding_;
    if ((iVar2 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar5->_padding_)) {
      UVolumetricCloudComponent::SetMaterial(this_00,param_1);
      return;
    }
  }
  return;
}

// ToString @ 1467c3c80

FString * __thiscall
UE::MovieScene::FComponentMaterialAccessor::ToString
          (FComponentMaterialAccessor *this,FString *__return_storage_ptr__)

{
  EComponentMaterialType EVar1;
  FString local_38;
  FString local_28;
  FString local_18;
  
  EVar1 = (this->MaterialInfo).MaterialType;
  if (EVar1 == IndexedMaterial) {
    if ((this->MaterialInfo).MaterialSlotName == (FName)0x0) {
      ::FString::PrintfImpl(&local_38,L"Material Element %i");
    }
    else {
      ::FName::ToString(&(this->MaterialInfo).MaterialSlotName,&local_28);
      ::FString::PrintfImpl(&local_38,L"Material Slot: %s");
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else if (EVar1 == OverlayMaterial) {
    ::FString::FString(&local_38,L"Overlay Material");
  }
  else if (EVar1 == DecalMaterial) {
    ::FString::FString(&local_38,L"Decal Material");
  }
  else {
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_38.Data.ArrayNum = 0;
    local_38.Data.ArrayMax = 0;
  }
  UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->Object,&local_18,(UObject *)0x0);
  ::FString::PrintfImpl(__return_storage_ptr__,L"object %s (material info: %s)");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

