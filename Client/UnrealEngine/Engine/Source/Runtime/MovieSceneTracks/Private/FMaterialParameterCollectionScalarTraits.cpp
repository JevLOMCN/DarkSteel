// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// CachePreAnimatedValue @ 14681fe10

float __cdecl
UE::MovieScene::FMaterialParameterCollectionScalarTraits::CachePreAnimatedValue
          (FObjectComponent *param_1,FMaterialParameterInfo *param_2)

{
  int iVar1;
  UMaterialParameterCollectionInstance *this;
  UClass *pUVar2;
  float local_res18 [4];
  FMemoryImageMaterialParameterInfo local_28;
  
  this = (UMaterialParameterCollectionInstance *)FObjectComponent::GetObject(param_1);
  local_res18[0] = 0.0;
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UMaterialParameterCollectionInstance::GetScalarParameterValue(this,param_2->Name,local_res18);
      return local_res18[0];
    }
  }
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) goto LAB_14681fe96;
  }
  this = (UMaterialParameterCollectionInstance *)0x0;
LAB_14681fe96:
  if (this != (UMaterialParameterCollectionInstance *)0x0) {
    local_28.Name.ComparisonIndex = (param_2->Name).ComparisonIndex;
    local_28.Name.Number = (param_2->Name).Number;
    local_28.Index = param_2->Index;
    local_28.Association.Value = (param_2->Association).Value;
    local_28.Name.DisplayIndex.Value = 0;
    UMaterialInterface::GetScalarParameterValue
              ((UMaterialInterface *)this,&local_28,local_res18,false);
  }
  return local_res18[0];
}

// CachePreAnimatedValue @ 14681ff00

float __cdecl
UE::MovieScene::FMaterialParameterCollectionScalarTraits::CachePreAnimatedValue
          (FObjectComponent *param_1,FName *param_2)

{
  float fVar1;
  FMaterialParameterInfo local_18;
  
  local_18.Name = *param_2;
  local_18.Association.Value = '\x02';
  local_18.Index = -1;
  fVar1 = CachePreAnimatedValue(param_1,&local_18);
  return fVar1;
}

// ReplaceObject @ 14685f920

void __cdecl
UE::MovieScene::FMaterialParameterCollectionScalarTraits::ReplaceObject
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

// RestorePreAnimatedValue @ 146863b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::MovieScene::FMaterialParameterCollectionScalarTraits::RestorePreAnimatedValue
          (FMaterialParameterKey *param_1,float param_2,FRestoreStateParams *param_3)

{
  int iVar1;
  UMaterialInstanceDynamic *this;
  UClass *pUVar2;
  FWeakObjectPtr local_res8;
  
  local_res8.ObjectIndex = (param_1->BoundMaterial).ObjectIndex;
  local_res8.ObjectSerialNumber = (param_1->BoundMaterial).ObjectSerialNumber;
  this = (UMaterialInstanceDynamic *)FWeakObjectPtr::Get(&local_res8);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialParameterCollectionInstance_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      UMaterialParameterCollectionInstance::SetScalarParameterValue
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
      UMaterialInstanceDynamic::SetScalarParameterValueByInfo(this,&param_1->ParameterInfo,param_2);
    }
  }
  return;
}

