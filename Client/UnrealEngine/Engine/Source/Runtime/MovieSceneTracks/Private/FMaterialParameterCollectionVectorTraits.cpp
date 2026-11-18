// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// CachePreAnimatedValue @ 14681ff30

FLinearColor * __cdecl
UE::MovieScene::FMaterialParameterCollectionVectorTraits::CachePreAnimatedValue
          (FLinearColor *__return_storage_ptr__,FObjectComponent *param_1,
          FMaterialParameterInfo *param_2)

{
  int iVar1;
  UMaterialParameterCollectionInstance *this;
  UClass *pUVar2;
  FMemoryImageMaterialParameterInfo local_28;
  
  this = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_1);
  (__return_storage_ptr__->field0_0x0)._s_0 = (FLinearColor_u_0_s_0)FLinearColor::White;
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UMaterialParameterCollectionInstance::GetVectorParameterValue
                (this,param_2->Name,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14681ffc2;
  }
  this = (UMaterialParameterCollectionInstance *)0x0;
LAB_14681ffc2:
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    local_28.Name.ComparisonIndex = (param_2->Name).ComparisonIndex;
    local_28.Name.Number = (param_2->Name).Number;
    local_28.Index = param_2->Index;
    local_28.Association.Value = (param_2->Association).Value;
    local_28.Name.DisplayIndex.Value = 0;
    UMaterialInterface::GetVectorParameterValue
              ((UMaterialInterface *)this,&local_28,__return_storage_ptr__,false);
  }
  return __return_storage_ptr__;
}

// CachePreAnimatedValue @ 146820030

FLinearColor * __cdecl
UE::MovieScene::FMaterialParameterCollectionVectorTraits::CachePreAnimatedValue
          (FLinearColor *__return_storage_ptr__,FObjectComponent *param_1,FName *param_2)

{
  FMaterialParameterInfo local_18;
  
  local_18.Name = *param_2;
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  CachePreAnimatedValue(__return_storage_ptr__,param_1,&local_18);
  return __return_storage_ptr__;
}

// ReplaceObject @ 14685f9c0

void __cdecl
UE::MovieScene::FMaterialParameterCollectionVectorTraits::ReplaceObject
          (FMaterialParameterKey *param_1,FObjectKey *param_2)

{
  FWeakObjectPtr FVar1;
  FWeakObjectPtr local_res8;
  FObjectKey local_res10;
  
  local_res10 = *param_2;
  FVar1 = (FWeakObjectPtr)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_res10);
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (FVar1 != (FWeakObjectPtr)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)FVar1);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = (FObjectKey)FVar1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable((UObject *)FVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  }
  (param_1->BoundMaterial).ObjectIndex = local_res8.ObjectIndex;
  (param_1->BoundMaterial).ObjectSerialNumber = local_res8.ObjectSerialNumber;
  return;
}

// RestorePreAnimatedValue @ 146863c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FMaterialParameterCollectionVectorTraits::RestorePreAnimatedValue
          (FMaterialParameterKey *param_1,FLinearColor *param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  UMaterialInstanceDynamic *this;
  UClass *pUVar2;
  FWeakObjectPtr local_res8;
  FLinearColor_u_0 local_18;
  
  local_res8.ObjectIndex = (param_1->BoundMaterial).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->BoundMaterial).ObjectSerialNumber;
  this = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_res8);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UMaterialParameterCollectionInstance::SetVectorParameterValue
                ((UMaterialParameterCollectionInstance *)this,(param_1->ParameterInfo).Name,param_2)
      ;
      return;
    }
  }
  if (this != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      local_18._0_8_ = *(undefined8 *)&param_2->field0_0x0;
      local_18._8_8_ = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
      UMaterialInstanceDynamic::SetVectorParameterValueByInfo
                (this,&param_1->ParameterInfo,(FLinearColor *)&local_18._s_0);
    }
  }
  return;
}

