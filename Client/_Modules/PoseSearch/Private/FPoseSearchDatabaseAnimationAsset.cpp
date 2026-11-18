// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 7

// StaticStruct @ 14a896b40

UScriptStruct * __cdecl FPoseSearchDatabaseAnimationAsset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimationAsset,
                         (UObject *)pUVar1,L"PoseSearchDatabaseAnimationAsset");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimationAsset.OuterSingleton;
}

// GetAnimationAsset @ 14a8b9790

UObject * __thiscall
FPoseSearchDatabaseAnimationAsset::GetAnimationAsset(FPoseSearchDatabaseAnimationAsset *this)

{
  return (this->AnimAsset).field0_0x0.DebugPtr;
}

// GetAnimationAssetForRole @ 14a8b9880

UAnimationAsset * __thiscall
FPoseSearchDatabaseAnimationAsset::GetAnimationAssetForRole
          (FPoseSearchDatabaseAnimationAsset *this,FName *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  UAnimationAsset *pUVar6;
  
  if ((this->AnimAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = UMultiAnimAsset::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar5);
    if ((bVar3) && (pUVar1 = (this->AnimAsset).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a8b98cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      pUVar6 = (UAnimationAsset *)(**(code **)(*(longlong *)pUVar1 + 0x2d8))(pUVar1,param_1);
      return pUVar6;
    }
  }
  iVar4 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((iVar4 != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumRoles() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                         ,0x1d6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pUVar6 = (UAnimationAsset *)(*pcVar2)();
    return pUVar6;
  }
  pUVar6 = (UAnimationAsset *)(**(code **)(this->_padding_ + 8))(this);
  if (pUVar6 != (UAnimationAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UAnimationAsset_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(pUVar6->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar6->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      return pUVar6;
    }
  }
  return (UAnimationAsset *)0x0;
}

// GetNumRoles @ 14a8bb320

int __thiscall
FPoseSearchDatabaseAnimationAsset::GetNumRoles(FPoseSearchDatabaseAnimationAsset *this)

{
  UObject *pUVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  
  if ((this->AnimAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar4 = UMultiAnimAsset::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar4);
    if ((bVar2) && (pUVar1 = (this->AnimAsset).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014a8bb355. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      iVar3 = (**(code **)(*(longlong *)pUVar1 + 0x2c8))();
      return iVar3;
    }
  }
  return 1;
}

// GetPlayLength @ 14a8bbfc0

float __thiscall
FPoseSearchDatabaseAnimationAsset::GetPlayLength
          (FPoseSearchDatabaseAnimationAsset *this,TVector<double> *param_1)

{
  int iVar1;
  UBlendSpace *this_00;
  UObject *pUVar2;
  bool bVar3;
  UClass *pUVar4;
  longlong *plVar5;
  float fVar6;
  int local_res8 [2];
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> local_28 [2];
  
  if ((this->AnimAsset).field0_0x0.DebugPtr == (UObject *)0x0) {
    return 0.0;
  }
  pUVar4 = Z_Construct_UClass_UBlendSpace_NoRegister();
  bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar4);
  if ((bVar3) &&
     (this_00 = (UBlendSpace *)(this->AnimAsset).field0_0x0.DebugPtr, this_00 != (UBlendSpace *)0x0)
     ) {
    local_res8[0] = 0;
    local_28[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28[0].ArrayNum = 0;
    local_28[0].ArrayMax = 0;
    UBlendSpace::GetSamplesFromBlendInput(this_00,param_1,local_28,local_res8,true);
    fVar6 = UBlendSpace::GetAnimationLengthFromSampleData(this_00,local_28);
    DestructItems<FBlendSampleData,int>
              ((FBlendSampleData *)local_28[0].AllocatorInstance.Data,local_28[0].ArrayNum);
    if ((FBlendSampleData *)local_28[0].AllocatorInstance.Data != (FBlendSampleData *)0x0) {
      FMemory::Free(local_28[0].AllocatorInstance.Data);
    }
  }
  else {
    if ((this->AnimAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar4 = UMultiAnimAsset::StaticClass();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar4);
      if ((bVar3) && (pUVar2 = (this->AnimAsset).field0_0x0.DebugPtr, pUVar2 != (UObject *)0x0)) {
        fVar6 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2,param_1);
        return fVar6;
      }
    }
    plVar5 = (longlong *)(**(code **)(this->_padding_ + 8))(this);
    if (plVar5 != (longlong *)0x0) {
      pUVar4 = Z_Construct_UClass_UAnimationAsset_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(plVar5[2] + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        fVar6 = (float)(**(code **)(*plVar5 + 0x2c0))(plVar5);
        return fVar6;
      }
    }
    fVar6 = 0.0;
  }
  return fVar6;
}

// GetRole @ 14a8bd580

FName __thiscall
FPoseSearchDatabaseAnimationAsset::GetRole(FPoseSearchDatabaseAnimationAsset *this,int param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  FName FVar6;
  uint in_register_00000014;
  undefined4 in_R8D;
  
  FVar6.Number = in_register_00000014;
  FVar6.ComparisonIndex.Value = param_1;
  if ((this->AnimAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = UMultiAnimAsset::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar5);
    if ((bVar3) && (pUVar1 = (this->AnimAsset).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar1 + 0x2d0))(pUVar1,FVar6,in_R8D);
      return FVar6;
    }
  }
  iVar4 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((iVar4 != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumRoles() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\PoseSearchDatabase.h"
                         ,0x43,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    FVar6 = (FName)(*pcVar2)();
    return FVar6;
  }
  *(FName *)FVar6 = UE::PoseSearch::DefaultRole;
  return FVar6;
}

// GetRootTransformOriginForRole @ 14a8bd740

TTransform<double> * __thiscall
FPoseSearchDatabaseAnimationAsset::GetRootTransformOriginForRole
          (FPoseSearchDatabaseAnimationAsset *this,TTransform<double> *__return_storage_ptr__,
          FName *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UClass *pUVar5;
  TTransform<double> *pTVar6;
  
  if ((this->AnimAsset).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar5 = UMultiAnimAsset::StaticClass();
    bVar3 = FObjectPtr::IsA((FObjectPtr *)&this->AnimAsset,pUVar5);
    if ((bVar3) && (pUVar1 = (this->AnimAsset).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
      (**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
  }
  iVar4 = (**(code **)(this->_padding_ + 0x20))(this);
  if ((iVar4 != 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetNumRoles() == 1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchDatabase.cpp"
                         ,0x1dc,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TTransform<double> *)(*pcVar2)();
    return pTVar6;
  }
  *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
  *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
  *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
       UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  return __return_storage_ptr__;
}

