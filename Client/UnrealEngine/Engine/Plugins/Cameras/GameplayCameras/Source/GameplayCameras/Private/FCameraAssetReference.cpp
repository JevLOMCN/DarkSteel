// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 12

// StaticStruct @ 14d536ab0

UScriptStruct * __cdecl FCameraAssetReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCameraAssetReference.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_GameplayCameras();
    Z_Registration_Info_UScriptStruct_FCameraAssetReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCameraAssetReference,(UObject *)pUVar1,
                         L"CameraAssetReference");
  }
  return Z_Registration_Info_UScriptStruct_FCameraAssetReference.OuterSingleton;
}

// FCameraAssetReference @ 14d542d30

FCameraAssetReference * __thiscall
FCameraAssetReference::FCameraAssetReference(FCameraAssetReference *this,UCameraAsset *param_1)

{
  (this->CameraAsset).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UCameraAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->Parameters);
  (this->Parameters).OverridenPropertyIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).OverridenPropertyIDs.ArrayNum = 0;
  (this->Parameters).OverridenPropertyIDs.ArrayMax = 0;
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayMax = 0;
  return this;
}

// FCameraAssetReference @ 14d542d90

FCameraAssetReference * __thiscall
FCameraAssetReference::FCameraAssetReference(FCameraAssetReference *this)

{
  (this->CameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)0x0;
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&this->Parameters);
  (this->Parameters).OverridenPropertyIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Parameters).OverridenPropertyIDs.ArrayNum = 0;
  (this->Parameters).OverridenPropertyIDs.ArrayMax = 0;
  (this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
  (this->ParameterOverrideGuids_DEPRECATED).ArrayMax = 0;
  return this;
}

// ApplyParameterOverrides @ 14d548dc0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraAssetReference::ApplyParameterOverrides
          (FCameraAssetReference *this,FCameraNodeEvaluationResult *param_1,bool param_2)

{
  int iVar1;
  UCameraAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  FCameraObjectInterfaceParameterOverrideHelper local_18;
  
  if ((this->CameraAsset).field0_0x0.DebugPtr != (UCameraAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper
              (&local_18,&param_1->VariableTable,&param_1->ContextDataTable);
    pUVar2 = (this->CameraAsset).field0_0x0.DebugPtr;
    local_28.DataPtr =
         (FCameraObjectInterfaceParameterDefinition *)
         (pUVar2->ParameterDefinitions).AllocatorInstance.Data;
    iVar1 = (pUVar2->ParameterDefinitions).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
              (&local_18,(UObject *)(this->CameraAsset).field0_0x0.DebugPtr,&local_28,
               &this->Parameters,param_2);
  }
  return;
}

// ApplyParameterOverrides @ 14d548e80

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FCameraAssetReference::ApplyParameterOverrides
          (FCameraAssetReference *this,FInstancedPropertyBag *param_1,
          FCameraNodeEvaluationResult *param_2)

{
  int iVar1;
  UCameraAsset *pUVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_2c;
  TArrayView<FCameraObjectInterfaceParameterDefinition_const_,int> local_28;
  FCameraObjectInterfaceParameterOverrideHelper local_18;
  
  if ((this->CameraAsset).field0_0x0.DebugPtr != (UCameraAsset *)0x0) {
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::
    FCameraObjectInterfaceParameterOverrideHelper
              (&local_18,&param_2->VariableTable,&param_2->ContextDataTable);
    pUVar2 = (this->CameraAsset).field0_0x0.DebugPtr;
    local_28.DataPtr =
         (FCameraObjectInterfaceParameterDefinition *)
         (pUVar2->ParameterDefinitions).AllocatorInstance.Data;
    iVar1 = (pUVar2->ParameterDefinitions).ArrayNum;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    UE::Cameras::FCameraObjectInterfaceParameterOverrideHelper::ApplyParameterOverrides
              (&local_18,(UObject *)(this->CameraAsset).field0_0x0.DebugPtr,&local_28,
               &this->Parameters,param_1);
  }
  return;
}

// IsParameterOverridden @ 14d55a5a0

bool __thiscall
FCameraAssetReference::IsParameterOverridden(FCameraAssetReference *this,FGuid *param_1)

{
  bool bVar1;
  
  bVar1 = FInstancedOverridablePropertyBag::IsPropertyOverriden(&this->Parameters,param_1);
  return bVar1;
}

// NeedsRebuildParameters @ 14d55ab00

bool __thiscall FCameraAssetReference::NeedsRebuildParameters(FCameraAssetReference *this)

{
  UCameraAsset *pUVar1;
  UPropertyBag *pUVar2;
  UPropertyBag *pUVar3;
  
  pUVar1 = (this->CameraAsset).field0_0x0.DebugPtr;
  if (((pUVar1 != (UCameraAsset *)0x0) || ((this->Parameters)._padding_ == 0)) ||
     ((this->Parameters)._padding_ == 0)) {
    if (pUVar1 == (UCameraAsset *)0x0) {
      return false;
    }
    if (((this->Parameters)._padding_ != 0) && ((this->Parameters)._padding_ != 0)) {
      pUVar2 = FInstancedPropertyBag::GetPropertyBagStruct(&pUVar1->DefaultParameters);
      pUVar3 = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)&this->Parameters);
      return pUVar2 != pUVar3;
    }
  }
  return true;
}

// PostSerialize @ 14d55ddd0

void __thiscall FCameraAssetReference::PostSerialize(FCameraAssetReference *this,FArchive *param_1)

{
  int iVar1;
  FGuid *pFVar2;
  FGuid *pFVar3;
  undefined1 local_res10 [8];
  
  if ((param_1->field_0x28 & 1) != 0) {
    pFVar2 = (FGuid *)(this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance.Data;
    iVar1 = (this->ParameterOverrideGuids_DEPRECATED).ArrayNum;
    pFVar3 = pFVar2 + iVar1;
    while( true ) {
      if ((this->ParameterOverrideGuids_DEPRECATED).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FGuid,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar2 == pFVar3) break;
      FInstancedOverridablePropertyBag::SetPropertyOverriden(&this->Parameters,pFVar2,true);
      pFVar2 = pFVar2 + 1;
    }
    (this->ParameterOverrideGuids_DEPRECATED).ArrayNum = 0;
    if ((this->ParameterOverrideGuids_DEPRECATED).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->ParameterOverrideGuids_DEPRECATED).AllocatorInstance,0,
                 &(this->ParameterOverrideGuids_DEPRECATED).ArrayMax);
    }
  }
  return;
}

// RebuildParameters @ 14d55ed60

void __thiscall FCameraAssetReference::RebuildParameters(FCameraAssetReference *this)

{
  UCameraAsset *pUVar1;
  
  pUVar1 = (this->CameraAsset).field0_0x0.DebugPtr;
  if (pUVar1 != (UCameraAsset *)0x0) {
    FInstancedOverridablePropertyBag::MigrateToNewBagInstanceWithOverrides
              (&this->Parameters,&pUVar1->DefaultParameters);
    return;
  }
  FInstancedStruct::Reset((FInstancedStruct *)&this->Parameters);
  return;
}

// RebuildParametersIfNeeded @ 14d55ee10

bool __thiscall FCameraAssetReference::RebuildParametersIfNeeded(FCameraAssetReference *this)

{
  UCameraAsset *pUVar1;
  UPropertyBag *pUVar2;
  UPropertyBag *pUVar3;
  
  pUVar1 = (this->CameraAsset).field0_0x0.DebugPtr;
  if (((pUVar1 != (UCameraAsset *)0x0) || ((this->Parameters)._padding_ == 0)) ||
     ((this->Parameters)._padding_ == 0)) {
    if (pUVar1 == (UCameraAsset *)0x0) {
      return false;
    }
    if (((this->Parameters)._padding_ != 0) && ((this->Parameters)._padding_ != 0)) {
      pUVar2 = FInstancedPropertyBag::GetPropertyBagStruct(&pUVar1->DefaultParameters);
      pUVar3 = FInstancedPropertyBag::GetPropertyBagStruct
                         ((FInstancedPropertyBag *)&this->Parameters);
      if (pUVar2 == pUVar3) {
        return false;
      }
    }
  }
  pUVar1 = (this->CameraAsset).field0_0x0.DebugPtr;
  if (pUVar1 == (UCameraAsset *)0x0) {
    FInstancedStruct::Reset((FInstancedStruct *)&this->Parameters);
    return true;
  }
  FInstancedOverridablePropertyBag::MigrateToNewBagInstanceWithOverrides
            (&this->Parameters,&pUVar1->DefaultParameters);
  return true;
}

// SerializeFromMismatchedTag @ 14d562b60

bool __thiscall
FCameraAssetReference::SerializeFromMismatchedTag
          (FCameraAssetReference *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  int iVar1;
  FName FVar2;
  bool bVar3;
  FNameEntryId FVar4;
  undefined4 extraout_var;
  TObjectPtr<UCameraAsset>_u_0 TVar5;
  TObjectPtr<UCameraAsset>_u_0 TVar6;
  FUObjectItem *pFVar7;
  UClass *pUVar8;
  TObjectPtr<UCameraAsset>_u_0 local_res10;
  FWeakObjectPtr local_38;
  FSoftObjectPath local_30;
  
  FVar2 = param_1->Type;
  FVar4 = FNameEntryId::FromValidEName((EName)&local_res10);
  local_res10._4_4_ = 0;
  local_res10._0_4_ = *(uint *)CONCAT44(extraout_var,FVar4.Value);
  if (FVar2 != (FName)local_res10.DebugPtr) {
    return false;
  }
  local_30.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_30.AssetPath.AssetName.Number = 0;
  local_30.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_30.AssetPath.PackageName.Number = 0;
  local_30.SubPathString.Data.ArrayNum = 0;
  local_30.SubPathString.Data.ArrayMax = 0;
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_res10.DebugPtr = (UCameraAsset *)0x0;
  FUtf8String::Reset(&local_30.SubPathString,0);
  (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x148))
            (*(longlong **)(*(longlong *)param_2 + 8),&local_38);
  TVar5.DebugPtr = (UCameraAsset *)FWeakObjectPtr::Get(&local_38);
  if ((TVar5.DebugPtr == (UCameraAsset *)0x0) && (local_30.AssetPath.PackageName != (FName)0x0)) {
    TVar6.DebugPtr = (UCameraAsset *)FSoftObjectPath::ResolveObject(&local_30);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar6.DebugPtr != (UCameraAsset *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
    }
    bVar3 = (*IsInAsyncLoadingThread)();
    if (((bVar3) && (TVar6.DebugPtr != (UCameraAsset *)0x0)) &&
       (pFVar7 = FUObjectArray::IndexToObject
                           (&GUObjectArray,*(int *)((longlong)&(TVar6.DebugPtr)->_padding_ + 4)),
       ((pFVar7->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14d562c85:
      if (((uint)(TVar6.DebugPtr)->_padding_ >> 0x1e & 1) != 0) goto LAB_14d562c93;
      bVar3 = true;
    }
    else {
      local_res10.DebugPtr = TVar6.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar6.DebugPtr != (UCameraAsset *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar6.DebugPtr);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_res10);
      if (TVar6.DebugPtr != (UCameraAsset *)0x0) goto LAB_14d562c85;
LAB_14d562c93:
      bVar3 = false;
    }
    TVar5.DebugPtr = (UCameraAsset *)0x0;
    if (bVar3) {
      TVar5.DebugPtr = TVar6.DebugPtr;
    }
  }
  if (TVar5.DebugPtr != (UCameraAsset *)0x0) {
    pUVar8 = UCameraAsset::StaticClass();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)((TVar5.DebugPtr)->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar5.DebugPtr)->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar8->_padding_)) goto LAB_14d562cc9;
  }
  TVar5.DebugPtr = (UCameraAsset *)0x0;
LAB_14d562cc9:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (TVar5.DebugPtr != (UCameraAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)TVar5.DebugPtr);
  }
  (this->CameraAsset).field0_0x0.DebugPtr = (UCameraAsset *)TVar5;
  if (local_30.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.SubPathString.Data.AllocatorInstance.Data);
  }
  return true;
}

// SetParameterOverridden @ 14d564de0

void __thiscall
FCameraAssetReference::SetParameterOverridden
          (FCameraAssetReference *this,FGuid *param_1,bool param_2)

{
  FInstancedOverridablePropertyBag::SetPropertyOverriden(&this->Parameters,param_1,param_2);
  return;
}

