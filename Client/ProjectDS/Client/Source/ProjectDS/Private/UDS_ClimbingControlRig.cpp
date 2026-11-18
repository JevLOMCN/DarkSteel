// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b4582c0

UClass * __cdecl UDS_ClimbingControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingControlRig",
               &Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingControlRig,0xe30,0x10,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbingControlRig>,
               InternalVTableHelperCtorCaller<UDS_ClimbingControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton;
}

// UDS_ClimbingControlRig @ 14b45c0d0

UDS_ClimbingControlRig * __thiscall
UDS_ClimbingControlRig::UDS_ClimbingControlRig(UDS_ClimbingControlRig *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  this->bShouldCacheClimbAnchor = false;
  this->bReachingClimbApex = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.Y = (double)uVar1;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PlayerAnimBP).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->DesiredLocationMap = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x20 = 0;
  this->bIsMoving = false;
  this->bForceCacheClimbAnchor = false;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentLocationMap = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->DesiredRotationMap = 0;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x20 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentRotationMap = 0;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x48 = 0;
  *(undefined8 *)&this->ClimbApexTargetLocationMap = 0;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x48 = 0;
  this->ClimbAnchorKeepAliveRemainTime = 0.0;
  return this;
}

// UDS_ClimbingControlRig @ 14b45c2c0

UDS_ClimbingControlRig * __thiscall
UDS_ClimbingControlRig::UDS_ClimbingControlRig
          (UDS_ClimbingControlRig *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  this->bShouldCacheClimbAnchor = false;
  this->bReachingClimbApex = false;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.Y = (double)uVar1;
  (this->ImpactNormal_Hand_L).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PlayerAnimBP).WeakPtr = (FWeakObjectPtr)0x0;
  *(undefined8 *)&this->DesiredLocationMap = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x20 = 0;
  this->bIsMoving = false;
  this->bForceCacheClimbAnchor = false;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentLocationMap = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  *(undefined8 *)&this->DesiredRotationMap = 0;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x8 = 0;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x20 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x28 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x34 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->DesiredRotationMap).field_0x40 = 0;
  *(undefined4 *)&(this->DesiredRotationMap).field_0x48 = 0;
  *(undefined8 *)&this->CurrentRotationMap = 0;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x8 = 0;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x20 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x28 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x34 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->CurrentRotationMap).field_0x40 = 0;
  *(undefined4 *)&(this->CurrentRotationMap).field_0x48 = 0;
  *(undefined8 *)&this->ClimbApexTargetLocationMap = 0;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x8 = 0;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x20 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x28 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x34 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClimbApexTargetLocationMap).field_0x40 = 0;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x48 = 0;
  this->ClimbAnchorKeepAliveRemainTime = 0.0;
  return this;
}

// ~UDS_ClimbingControlRig @ 14b45ce30

void __thiscall UDS_ClimbingControlRig::~UDS_ClimbingControlRig(UDS_ClimbingControlRig *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined4 *)&(this->ClimbApexTargetLocationMap).field_0x48 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  pvVar1 = *(void **)&(this->ClimbApexTargetLocationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ClimbApexTargetLocationMap);
  *(undefined4 *)&(this->CurrentRotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentRotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentRotationMap);
  *(undefined4 *)&(this->DesiredRotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DesiredRotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TQuat<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DesiredRotationMap);
  *(undefined4 *)&(this->CurrentLocationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CurrentLocationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CurrentLocationMap);
  *(undefined4 *)&(this->DesiredLocationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->DesiredLocationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Math::TVector<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DesiredLocationMap);
  UDS_ControlRig::~UDS_ControlRig((UDS_ControlRig *)this);
  return;
}

// GetPrivateStaticClass @ 14b45e520

UClass * __cdecl UDS_ClimbingControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ClimbingControlRig",
               &Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ClimbingControlRig,0xe30,0x10,CLASS_Intrinsic|CLASS_Abstract
               ,CASTCLASS_None,L"Engine",InternalConstructor<UDS_ClimbingControlRig>,
               InternalVTableHelperCtorCaller<UDS_ClimbingControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ClimbingControlRig.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b45f110

bool __thiscall UDS_ClimbingControlRig::ShouldNotifyChangedCharState(UDS_ClimbingControlRig *this)

{
  return true;
}

// StaticRegisterNativesUDS_ClimbingControlRig @ 14b45f1b0

void __cdecl UDS_ClimbingControlRig::StaticRegisterNativesUDS_ClimbingControlRig(void)

{
  return;
}

// GetExternalVariablesImpl @ 14b8c5770

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ClimbingControlRig::GetExternalVariablesImpl
          (UDS_ClimbingControlRig *this,
          TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          bool param_1)

{
  UStruct *pUVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FName *pFVar6;
  FProperty *pFVar7;
  TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  longlong lVar10;
  FName local_res8;
  FName local_res10 [2];
  FName local_res20;
  longlong local_b8;
  FProperty *pFStack_b0;
  FName local_a8;
  FName FStack_a0;
  undefined1 local_98;
  byte bStack_97;
  byte bStack_96;
  undefined1 uStack_95;
  int iStack_94;
  undefined1 *puStack_90;
  longlong local_88;
  FProperty *pFStack_80;
  FName local_78;
  FName FStack_70;
  undefined1 local_68;
  byte bStack_67;
  byte bStack_66;
  undefined1 uStack_65;
  int iStack_64;
  undefined1 *puStack_60;
  longlong local_58;
  FProperty *pFStack_50;
  FName local_48;
  FName FStack_40;
  undefined1 local_38;
  byte bStack_37;
  byte bStack_36;
  undefined1 uStack_35;
  int iStack_34;
  undefined1 *puStack_30;
  
  URigVMHost::GetExternalVariablesImpl((URigVMHost *)this,__return_storage_ptr__,param_1);
  pUVar1 = *(UStruct **)&this->field_0x10;
  pFVar6 = ::FName::FName(&local_res8,0x17,L"bShouldCacheClimbAnchor",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  lVar10 = 0;
  if (pFVar7 != (FProperty *)0x0) {
    uStack_95 = 0;
    local_a8.ComparisonIndex.Value = 0;
    local_a8.Number = 0;
    FStack_a0.ComparisonIndex.Value = 0;
    FStack_a0.Number = 0;
    local_98 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    local_b8 = lVar10;
    if (bVar4) {
      local_b8 = pFVar7->_padding_;
    }
    bStack_97 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_96 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    pFStack_b0 = pFVar7;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    puStack_90 = &this->field_0x0 + pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_98 = 1;
    }
    iStack_94 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_a8,(UObject **)&FStack_a0);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_b8) &&
        ((FScriptContainerElement *)&local_b8 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar2 + lVar9 * 0x30) = local_b8;
    *(FProperty **)(pFVar2 + lVar9 * 0x30 + 8) = pFStack_b0;
    *(FName *)(pFVar2 + lVar9 * 0x30 + 0x10) = local_a8;
    ((FName *)(pFVar2 + lVar9 * 0x30 + 0x10))[1] = FStack_a0;
    *(ulonglong *)(pFVar2 + lVar9 * 0x30 + 0x20) =
         CONCAT44(iStack_94,CONCAT13(uStack_95,CONCAT12(bStack_96,CONCAT11(bStack_97,local_98))));
    *(undefined1 **)(pFVar2 + lVar9 * 0x30 + 0x20 + 8) = puStack_90;
  }
  pUVar1 = *(UStruct **)&this->field_0x10;
  pFVar6 = ::FName::FName(local_res10,0x12,L"bReachingClimbApex",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  if (pFVar7 != (FProperty *)0x0) {
    uStack_65 = 0;
    local_78.ComparisonIndex.Value = 0;
    local_78.Number = 0;
    FStack_70.ComparisonIndex.Value = 0;
    FStack_70.Number = 0;
    local_68 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    local_88 = lVar10;
    if (bVar4) {
      local_88 = pFVar7->_padding_;
    }
    bStack_67 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_66 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    pFStack_80 = pFVar7;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    puStack_60 = &this->field_0x0 + pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_68 = 1;
    }
    iStack_64 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_78,(UObject **)&FStack_70);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_88) &&
        ((FScriptContainerElement *)&local_88 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar9 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar2 + lVar9 * 0x30) = local_88;
    *(FProperty **)(pFVar2 + lVar9 * 0x30 + 8) = pFStack_80;
    *(FName *)(pFVar2 + lVar9 * 0x30 + 0x10) = local_78;
    ((FName *)(pFVar2 + lVar9 * 0x30 + 0x10))[1] = FStack_70;
    *(ulonglong *)(pFVar2 + lVar9 * 0x30 + 0x20) =
         CONCAT44(iStack_64,CONCAT13(uStack_65,CONCAT12(bStack_66,CONCAT11(bStack_67,local_68))));
    *(undefined1 **)(pFVar2 + lVar9 * 0x30 + 0x20 + 8) = puStack_60;
  }
  pUVar1 = *(UStruct **)&this->field_0x10;
  pFVar6 = ::FName::FName(&local_res20,0x13,L"ImpactNormal_Hand_L",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  if (pFVar7 != (FProperty *)0x0) {
    uStack_35 = 0;
    local_48.ComparisonIndex.Value = 0;
    local_48.Number = 0;
    FStack_40.ComparisonIndex.Value = 0;
    FStack_40.Number = 0;
    local_38 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    if (bVar4) {
      lVar10 = pFVar7->_padding_;
    }
    bStack_37 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_36 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    local_58 = lVar10;
    pFStack_50 = pFVar7;
    if ((pFVar7->ArrayDim < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    puStack_30 = &this->field_0x0 + pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_38 = 1;
    }
    iStack_34 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_48,(UObject **)&FStack_40);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
        ((FScriptContainerElement *)&local_58 <
         pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 0x30)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
      return pTVar8;
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    lVar10 = (longlong)iVar5;
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    *(longlong *)(pFVar2 + lVar10 * 0x30) = local_58;
    *(FProperty **)(pFVar2 + lVar10 * 0x30 + 8) = pFStack_50;
    *(FName *)(pFVar2 + lVar10 * 0x30 + 0x10) = local_48;
    ((FName *)(pFVar2 + lVar10 * 0x30 + 0x10))[1] = FStack_40;
    *(ulonglong *)(pFVar2 + lVar10 * 0x30 + 0x20) =
         CONCAT44(iStack_34,CONCAT13(uStack_35,CONCAT12(bStack_36,CONCAT11(bStack_37,local_38))));
    *(undefined1 **)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = puStack_30;
  }
  return __return_storage_ptr__;
}

// GetHitResult @ 14b8c6780

/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FHitResult * __thiscall
UDS_ClimbingControlRig::GetHitResult
          (UDS_ClimbingControlRig *this,FHitResult *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  EObjectTypeQuery EVar4;
  int iVar5;
  FHitResult *pFVar6;
  FScriptContainerElement local_68;
  FScriptContainerElement local_67 [7];
  AActor *local_60;
  TArray<TEnumAsByte<EObjectTypeQuery>,TSizedDefaultAllocator<32>_> local_58;
  TArray<AActor_*,TSizedDefaultAllocator<32>_> local_48 [2];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  
  local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.ArrayNum = 0;
  local_58.ArrayMax = 0;
  EVar4 = UEngineTypes::ConvertToObjectType(ECC_WorldStatic);
  local_68 = SUB41(EVar4,0);
  if (((local_58.AllocatorInstance.Data <= &local_68) &&
      (&local_68 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FHitResult *)(*pcVar1)();
    return pFVar6;
  }
  iVar5 = local_58.ArrayNum;
  if (local_58.ArrayNum == local_58.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
  }
  local_58.AllocatorInstance.Data[iVar5] = local_68;
  local_58.ArrayNum = iVar5 + 1;
  EVar4 = UEngineTypes::ConvertToObjectType(ECC_GameTraceChannel11);
  local_67[0] = SUB41(EVar4,0);
  if (((local_58.AllocatorInstance.Data <= local_67) &&
      (local_67 < local_58.AllocatorInstance.Data + local_58.ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FHitResult *)(*pcVar1)();
    return pFVar6;
  }
  iVar5 = local_58.ArrayNum;
  if (local_58.ArrayNum == local_58.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x101,&local_58.AllocatorInstance,&local_58.ArrayMax);
  }
  local_58.ArrayNum = iVar5 + 1;
  local_58.AllocatorInstance.Data[iVar5] = local_67[0];
  local_48[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48[0].ArrayNum = 0;
  local_48[0].ArrayMax = 0;
  local_60 = UControlRig::GetHostingActor((UControlRig *)this);
  if (((local_48[0].AllocatorInstance.Data <= (FScriptContainerElement *)&local_60) &&
      ((FScriptContainerElement *)&local_60 <
       local_48[0].AllocatorInstance.Data + (longlong)local_48[0].ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FHitResult *)(*pcVar1)();
    return pFVar6;
  }
  iVar5 = local_48[0].ArrayNum;
  if (local_48[0].ArrayNum == local_48[0].ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&local_48[0].AllocatorInstance,&local_48[0].ArrayMax);
  }
  local_48[0].ArrayNum = iVar5 + 1;
  *(AActor **)(local_48[0].AllocatorInstance.Data + (longlong)iVar5 * 8) = local_60;
  memset(__return_storage_ptr__,0,0x100);
  fVar2 = __real_41a00000;
  (__return_storage_ptr__->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr =
       (FWeakObjectPtr)0x0;
  uStack_1b = 0;
  uStack_19 = 0;
  local_28 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0;
  __return_storage_ptr__->Time = 1.0;
  __return_storage_ptr__->MyItem = -1;
  (__return_storage_ptr__->HitObjectHandle).ManagerInterface.InterfaceInstance =
       (IActorInstanceManagerInterface *)0x0;
  (__return_storage_ptr__->HitObjectHandle).InstanceIndex = -1;
  (__return_storage_ptr__->HitObjectHandle).ResolutionStatus = Invalid;
  *(undefined3 *)&(__return_storage_ptr__->HitObjectHandle).field_0x1d = 0;
  UDS_ControlRig::SphereTraceByObjectTypes
            ((UDS_ControlRig *)this,param_1,param_2,fVar2,&local_58,local_48,__return_storage_ptr__)
  ;
  if (local_48[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48[0].AllocatorInstance.Data);
  }
  if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// OnChangedCharState @ 14b8d4600

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_ClimbingControlRig::OnChangedCharState
          (UDS_ClimbingControlRig *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  TMap<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
  *this_00;
  double dVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  FName FVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FRigVMExecuteContext *pFVar15;
  longlong lVar16;
  undefined1 *puVar17;
  TMap<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
  *this_01;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  int local_res18 [2];
  int local_res20 [2];
  int local_b8;
  int local_b4;
  FName *local_b0;
  FName *local_a8;
  FName *local_a0;
  FName *local_98 [14];
  
  if (param_2->AddedCharState == Climbing) {
    this->bForceCacheClimbAnchor = true;
  }
  if (param_2->AddedCharDetailState != ReachingClimbApex) {
    if (param_2->RemovedCharDetailState == ReachingClimbApex) {
      this->bReachingClimbApex = false;
    }
    return;
  }
  this->bReachingClimbApex = true;
  if ((*(longlong *)&this->field_0x150 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("RigVMExtendedExecuteContext != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Public\\RigVMHost.h"
                          ,0x14c,L""), bVar12)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>
                      (*(FRigVMExtendedExecuteContext **)&this->field_0x150);
  FVar11 = ElementKey_Hand_L;
  this_00 = &this->CurrentLocationMap;
  uVar13 = ::GetTypeHash(ElementKey_Hand_L.ComparisonIndex.Value);
  uVar13 = uVar13 + FVar11.Number;
  if (*(int *)&(this->CurrentLocationMap).field_0x8 !=
      *(int *)&(this->CurrentLocationMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->CurrentLocationMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->CurrentLocationMap).field_0x38;
    }
    iVar14 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(this->CurrentLocationMap).field_0x48 - 1U & uVar13) * 4);
    if (iVar14 != -1) {
      do {
        lVar16 = *(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28) ==
            ElementKey_Hand_L) {
          if (lVar16 != 0) goto LAB_14b8d477b;
          break;
        }
        iVar14 = *(int *)(lVar16 + 0x20);
      } while (iVar14 != -1);
    }
  }
  local_b0 = &ElementKey_Hand_L;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res18,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar13,
             (bool *)&local_b0);
  lVar16 = *(longlong *)&this_00->field_0x0 + (longlong)local_res18[0] * 0x28;
LAB_14b8d477b:
  FVar11 = ElementKey_Hand_L;
  dVar8 = *(double *)(lVar16 + 8);
  dVar9 = *(double *)(lVar16 + 0x10);
  this_01 = &this->ClimbApexTargetLocationMap;
  dVar1 = *(double *)(lVar16 + 0x18);
  uVar13 = ::GetTypeHash(ElementKey_Hand_L.ComparisonIndex.Value);
  uVar13 = uVar13 + FVar11.Number;
  if (*(int *)&(this->ClimbApexTargetLocationMap).field_0x8 !=
      *(int *)&(this->ClimbApexTargetLocationMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->ClimbApexTargetLocationMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ClimbApexTargetLocationMap).field_0x38;
    }
    iVar14 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->ClimbApexTargetLocationMap).field_0x48 - 1U & uVar13) * 4);
    if (iVar14 != -1) {
      do {
        lVar16 = *(longlong *)&this_01->field_0x0 + (longlong)iVar14 * 0x28;
        if (*(FName *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar14 * 0x28) ==
            ElementKey_Hand_L) {
          if (lVar16 != 0) goto LAB_14b8d4837;
          break;
        }
        iVar14 = *(int *)(lVar16 + 0x20);
      } while (iVar14 != -1);
    }
  }
  local_a8 = &ElementKey_Hand_L;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_01,(uint)local_res20,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar13,
             (bool *)&local_a8);
  lVar16 = *(longlong *)&this_01->field_0x0 + (longlong)local_res20[0] * 0x28;
LAB_14b8d4837:
  auVar32 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64;
  dVar8 = dVar8 * (pFVar15->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0];
  dVar9 = dVar9 * (pFVar15->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1];
  uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar18 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
  dVar1 = dVar1 * (pFVar15->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (pFVar15->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar10 = (pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
  auVar23 = blendpd(auVar18,auVar32,2);
  auVar34._8_4_ = SUB84(dVar9,0);
  auVar34._0_8_ = dVar8;
  auVar34._12_4_ = uVar33;
  dVar5 = auVar32._0_8_;
  auVar35._0_8_ = auVar34._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar8;
  auVar35._8_8_ = dVar1 * auVar18._8_8_ - dVar5 * dVar9;
  auVar36._8_4_ = SUB84(dVar9,0);
  auVar36._0_8_ = dVar8;
  auVar36._12_4_ = uVar33;
  auVar18._8_4_ = SUB84(dVar7,0);
  auVar18._0_8_ = dVar1;
  auVar18._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar18 = blendpd(auVar36,auVar18,2);
  auVar19._0_8_ = auVar18._0_8_ * dVar5 - auVar23._0_8_ * dVar1;
  auVar19._8_8_ = auVar18._8_8_ * auVar32._8_8_ - auVar23._8_8_ * dVar7;
  auVar18 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
  auVar36 = blendpd(auVar35,auVar19,2);
  dVar7 = auVar35._8_8_ + auVar35._8_8_;
  dVar4 = auVar19._0_8_ + auVar19._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar37._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar37._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  auVar28._8_4_ = SUB84(dVar4,0);
  auVar28._0_8_ = dVar7;
  auVar28._12_4_ = uVar33;
  auVar24._8_4_ = SUB84(dVar4,0);
  auVar24._0_8_ = dVar7;
  auVar24._12_4_ = uVar33;
  auVar36 = blendpd(auVar24,auVar37,2);
  auVar29._0_8_ = auVar28._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar7;
  auVar29._8_8_ = auVar37._0_8_ * auVar18._8_8_ - dVar5 * dVar4;
  auVar23._8_4_ = SUB84(auVar29._8_8_,0);
  auVar23._0_8_ = auVar29._0_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar29._8_8_ >> 0x20);
  auVar18 = blendpd(auVar18,auVar32,2);
  auVar25._0_8_ = auVar36._0_8_ * dVar5 - auVar18._0_8_ * auVar37._0_8_;
  auVar25._8_8_ = auVar36._8_8_ * auVar32._8_8_ - auVar18._8_8_ * auVar37._8_8_;
  auVar18 = blendpd(auVar29,auVar25,2);
  dVar5 = dVar4 * dVar10 + dVar9 + auVar25._0_8_ +
          (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
  dVar9 = (pFVar15->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
  auVar32._8_4_ = SUB84(dVar5,0);
  auVar32._0_8_ =
       dVar7 * dVar10 + dVar8 + auVar23._8_8_ +
       (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
  auVar32._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 8) = auVar32;
  *(double *)(lVar16 + 0x18) = auVar37._0_8_ * dVar10 + dVar1 + auVar18._0_8_ + dVar9;
  FVar11 = ElementKey_Hand_R;
  uVar13 = ::GetTypeHash(ElementKey_Hand_R.ComparisonIndex.Value);
  uVar13 = uVar13 + FVar11.Number;
  if (*(int *)&(this->CurrentLocationMap).field_0x8 !=
      *(int *)&(this->CurrentLocationMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->CurrentLocationMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->CurrentLocationMap).field_0x38;
    }
    iVar14 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(this->CurrentLocationMap).field_0x48 - 1U & uVar13) * 4);
    if (iVar14 != -1) {
      do {
        lVar16 = *(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28;
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28) ==
            ElementKey_Hand_R) {
          if (lVar16 != 0) goto LAB_14b8d49e5;
          break;
        }
        iVar14 = *(int *)(lVar16 + 0x20);
      } while (iVar14 != -1);
    }
  }
  local_a0 = &ElementKey_Hand_R;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_00,(uint)&local_b8,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar13,
             (bool *)&local_a0);
  lVar16 = *(longlong *)&this_00->field_0x0 + (longlong)local_b8 * 0x28;
LAB_14b8d49e5:
  FVar11 = ElementKey_Hand_R;
  dVar8 = *(double *)(lVar16 + 8);
  dVar9 = *(double *)(lVar16 + 0x10);
  dVar1 = *(double *)(lVar16 + 0x18);
  uVar13 = ::GetTypeHash(ElementKey_Hand_R.ComparisonIndex.Value);
  uVar13 = uVar13 + FVar11.Number;
  if (*(int *)&(this->ClimbApexTargetLocationMap).field_0x8 !=
      *(int *)&(this->ClimbApexTargetLocationMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->ClimbApexTargetLocationMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ClimbApexTargetLocationMap).field_0x38;
    }
    iVar14 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->ClimbApexTargetLocationMap).field_0x48 - 1U & uVar13) * 4);
    if (iVar14 != -1) {
      do {
        lVar16 = *(longlong *)&this_01->field_0x0 + (longlong)iVar14 * 0x28;
        if (*(FName *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar14 * 0x28) ==
            ElementKey_Hand_R) {
          if (lVar16 != 0) goto LAB_14b8d4aa1;
          break;
        }
        iVar14 = *(int *)(lVar16 + 0x20);
      } while (iVar14 != -1);
    }
  }
  local_98[0] = &ElementKey_Hand_R;
  TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FName_const_&>_>
            ((TSet<TTuple<FName,UE::Math::TVector<double>_>,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>,FDefaultSetAllocator>
              *)this_01,(uint)&local_b4,(TKeyInitializer<FName_const_&> *)(ulonglong)uVar13,
             (bool *)local_98);
  lVar16 = *(longlong *)&this_01->field_0x0 + (longlong)local_b4 * 0x28;
LAB_14b8d4aa1:
  auVar32 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64;
  dVar8 = dVar8 * (pFVar15->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[0];
  dVar9 = dVar9 * (pFVar15->ToWorldSpaceTransform).Scale3D.XY.m128d_f64[1];
  uVar33 = (undefined4)((ulonglong)dVar9 >> 0x20);
  auVar18 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
  dVar1 = dVar1 * (pFVar15->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[0];
  dVar7 = (pFVar15->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64[1] * 0.0;
  dVar10 = (pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1];
  auVar36 = blendpd(auVar18,auVar32,2);
  auVar38._8_4_ = SUB84(dVar9,0);
  auVar38._0_8_ = dVar8;
  auVar38._12_4_ = uVar33;
  dVar5 = auVar32._0_8_;
  auVar39._0_8_ = auVar38._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar8;
  auVar39._8_8_ = dVar1 * auVar18._8_8_ - dVar5 * dVar9;
  auVar20._8_4_ = SUB84(dVar9,0);
  auVar20._0_8_ = dVar8;
  auVar20._12_4_ = uVar33;
  auVar6._8_4_ = SUB84(dVar7,0);
  auVar6._0_8_ = dVar1;
  auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  auVar18 = blendpd(auVar20,auVar6,2);
  auVar21._0_8_ = auVar18._0_8_ * dVar5 - auVar36._0_8_ * dVar1;
  auVar21._8_8_ = auVar18._8_8_ * auVar32._8_8_ - auVar36._8_8_ * dVar7;
  auVar18 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64;
  auVar36 = blendpd(auVar39,auVar21,2);
  auVar40._0_8_ = auVar36._0_8_ + auVar36._0_8_;
  auVar40._8_8_ = auVar36._8_8_ + auVar36._8_8_;
  dVar7 = auVar39._8_8_ + auVar39._8_8_;
  dVar4 = auVar21._0_8_ + auVar21._0_8_;
  uVar33 = (undefined4)((ulonglong)dVar4 >> 0x20);
  auVar30._8_4_ = SUB84(dVar4,0);
  auVar30._0_8_ = dVar7;
  auVar30._12_4_ = uVar33;
  auVar26._8_4_ = SUB84(dVar4,0);
  auVar26._0_8_ = dVar7;
  auVar26._12_4_ = uVar33;
  auVar36 = blendpd(auVar26,auVar40,2);
  auVar31._0_8_ = auVar30._8_8_ * auVar18._0_8_ - auVar18._8_8_ * dVar7;
  auVar31._8_8_ = auVar40._0_8_ * auVar18._8_8_ - dVar5 * dVar4;
  auVar22._8_4_ = SUB84(auVar31._8_8_,0);
  auVar22._0_8_ = auVar31._0_8_;
  auVar22._12_4_ = (int)((ulonglong)auVar31._8_8_ >> 0x20);
  auVar18 = blendpd(auVar18,auVar32,2);
  auVar27._0_8_ = auVar36._0_8_ * dVar5 - auVar18._0_8_ * auVar40._0_8_;
  auVar27._8_8_ = auVar36._8_8_ * auVar32._8_8_ - auVar18._8_8_ * auVar40._8_8_;
  auVar32 = blendpd(auVar31,auVar27,2);
  dVar5 = (pFVar15->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
  dVar9 = dVar4 * dVar10 + dVar9 + auVar27._0_8_ +
          (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
  auVar3._8_4_ = SUB84(dVar9,0);
  auVar3._0_8_ = dVar7 * dVar10 + dVar8 + auVar22._8_8_ +
                 (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
  auVar3._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 8) = auVar3;
  *(double *)(lVar16 + 0x18) = auVar40._0_8_ * dVar10 + dVar1 + auVar32._0_8_ + dVar5;
  return;
}

// OnDeInitialize @ 14b8d58c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ClimbingControlRig::OnDeInitialize(UDS_ClimbingControlRig *this)

{
  code *pcVar1;
  FDS_EntityBase *pFVar2;
  
  if (*(longlong *)&this->field_0xc50 != 0) {
    pcVar1 = *(code **)(*(longlong *)this + 0x4b8);
    pFVar2 = FDS_EntityBase::GetEntityBase((ulong64 *)&this->field_0xc50);
    (*pcVar1)(this,pFVar2);
  }
  return;
}

// OnExecuteForwardSolve @ 14b8d6170

void __thiscall
UDS_ClimbingControlRig::OnExecuteForwardSolve(UDS_ClimbingControlRig *this,float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  UDS_CharacterAnimBase *this_00;
  FDS_AnimSharedData *pFVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  TVector<double>_u_0 local_38 [2];
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->PlayerAnimBP).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_CharacterAnimBase *)FWeakObjectPtr::Get(&(this->PlayerAnimBP).WeakPtr);
    pFVar4 = UDS_CharacterAnimBase::GetAnimSharedData(this_00);
    uVar1 = *(undefined8 *)&(pFVar4->Velocity).field0_0x0;
    uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3fb99999a0000000 <= (double)CONCAT44(uVar8,uVar5) &&
          (double)CONCAT44(uVar8,uVar5) != __real_3fb99999a0000000) ||
        (uVar1 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 8),
        uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        __real_3fb99999a0000000 <= (double)CONCAT44(uVar8,uVar5) &&
        (double)CONCAT44(uVar8,uVar5) != __real_3fb99999a0000000)) ||
       (uVar1 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 0x10),
       uVar5 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar8 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       __real_3fb99999a0000000 <= (double)CONCAT44(uVar8,uVar5) &&
       (double)CONCAT44(uVar8,uVar5) != __real_3fb99999a0000000)) {
      cVar3 = '\x01';
      this->bIsMoving = true;
    }
    else {
      cVar3 = '\0';
      this->bIsMoving = false;
    }
  }
  else {
    cVar3 = this->bIsMoving;
  }
  fVar6 = __real_3f800000;
  if (this->bForceCacheClimbAnchor == false) {
    fVar6 = this->ClimbAnchorKeepAliveRemainTime;
  }
  if ((cVar3 != '\0') || (bVar2 = false, 0.0 < fVar6)) {
    bVar2 = true;
  }
  this->bShouldCacheClimbAnchor = bVar2;
  this->bForceCacheClimbAnchor = false;
  fVar7 = fVar6 - param_1;
  if (fVar6 - param_1 <= 0.0) {
    fVar7 = 0.0;
  }
  this->ClimbAnchorKeepAliveRemainTime = fVar7;
  local_38[0]._s_0.X = AimPrimaryAxis_Hand_L.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = AimPrimaryAxis_Hand_L.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = AimPrimaryAxis_Hand_L.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Hand_L,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._s_0.X = AimPrimaryAxis_Hand_R.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = AimPrimaryAxis_Hand_R.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = AimPrimaryAxis_Hand_R.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Hand_R,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Foot_L,(TVector<double> *)&local_38[0]._s_0);
  local_38[0]._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_38[0]._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_38[0]._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Foot_R,(TVector<double> *)&local_38[0]._s_0);
  return;
}

// OnInitialize @ 14b8d7000

void __thiscall UDS_ClimbingControlRig::OnInitialize(UDS_ClimbingControlRig *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UObject *local_res8;
  TVector<double>_u_0 local_28;
  
  UDS_ControlRig::OnInitialize((UDS_ControlRig *)this);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0xc58);
  if (!bVar2) goto LAB_14b8d7091;
  local_res8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xc58);
  if (local_res8 == (UObject *)0x0) {
LAB_14b8d705e:
    local_res8 = (UObject *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UDS_MainPlayerAnim_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&local_res8->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res8->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) goto LAB_14b8d705e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  FWeakObjectPtr::operator=(&(this->PlayerAnimBP).WeakPtr,(FObjectPtr)&local_res8);
LAB_14b8d7091:
  this->bForceCacheClimbAnchor = true;
  local_28._s_0.X = AimPrimaryAxis_Hand_L.field0_0x0._s_0.X;
  local_28._s_0.Y = AimPrimaryAxis_Hand_L.field0_0x0._s_0.Y;
  local_28._s_0.Z = AimPrimaryAxis_Hand_L.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Hand_L,(TVector<double> *)&local_28._s_0);
  local_28._s_0.X = AimPrimaryAxis_Hand_R.field0_0x0._s_0.X;
  local_28._s_0.Y = AimPrimaryAxis_Hand_R.field0_0x0._s_0.Y;
  local_28._s_0.Z = AimPrimaryAxis_Hand_R.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Hand_R,(TVector<double> *)&local_28._s_0);
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Foot_L,(TVector<double> *)&local_28._s_0);
  local_28._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_28._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_28._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  SetIKTargetTransform(this,ElementKey_Foot_R,(TVector<double> *)&local_28._s_0);
  return;
}

// SetIKTargetTransform @ 14b8e7d50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UDS_ClimbingControlRig::SetIKTargetTransform
          (UDS_ClimbingControlRig *this,FName param_1,TVector<double> *param_2)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  FName FVar13;
  uint uVar14;
  TVector<double> *pTVar15;
  TVector<double> *pTVar16;
  TQuat<double> *pTVar17;
  TQuat<double> *pTVar18;
  wchar_t *pwVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  FName local_res8;
  FName local_res10 [3];
  TVector<double>_u_0 local_128;
  TVector<double>_u_0 local_108;
  TTransform<double> local_e8;
  
  local_res10[0] = param_1;
  uVar14 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  pTVar15 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                        *)&this->DesiredLocationMap,uVar14 + param_1.Number,local_res10);
  FVar13 = local_res10[0];
  uVar14 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  pTVar16 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                        *)&this->CurrentLocationMap,uVar14 + FVar13.Number,local_res10);
  FVar13 = local_res10[0];
  uVar14 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  pTVar17 = TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
                        *)&this->DesiredRotationMap,uVar14 + FVar13.Number,local_res10);
  FVar13 = local_res10[0];
  uVar14 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
  pTVar18 = TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
            ::FindOrAddImpl<FName_const_&>
                      ((TMapBase<FName,UE::Math::TQuat<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TQuat<double>,0>_>
                        *)&this->CurrentRotationMap,uVar14 + FVar13.Number,local_res10);
  uVar12 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  local_108._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_108._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_108._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_128._s_0.Z = (param_2->field0_0x0)._s_0.Z;
  local_128._0_4_ = (undefined4)*(undefined8 *)&param_2->field0_0x0;
  local_128._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20);
  local_128._8_4_ = (undefined4)uVar12;
  local_128._12_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
  SolveIKTarget(this,local_res10[0],(TVector<double> *)&local_128._s_0,pTVar15,pTVar17,
                (TVector<double> *)&local_108._s_0);
  dVar3 = __real_3fc99999a0000000;
  local_108._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = __real_3fc99999a0000000;
  dVar4 = ((pTVar15->field0_0x0)._s_0.X - (pTVar16->field0_0x0)._s_0.X) * __real_3fc99999a0000000 +
          (pTVar16->field0_0x0)._s_0.X;
  dVar5 = (((pTVar15->field0_0x0)._s_0.Y - local_108._s_0.Y) - (pTVar16->field0_0x0)._s_0.Y) *
          __real_3fc99999a0000000;
  dVar6 = (local_108._s_0.Z - (pTVar16->field0_0x0)._s_0.Z) * __real_3fc99999a0000000 +
          (pTVar16->field0_0x0)._s_0.Z;
  (pTVar16->field0_0x0)._s_0.X = dVar4;
  dVar5 = dVar5 + (pTVar16->field0_0x0)._s_0.Y;
  (pTVar16->field0_0x0)._s_0.Z = dVar6;
  *(double *)((longlong)&pTVar16->field0_0x0 + 8) = dVar5;
  pTVar17 = UE::Math::TQuat<double>::Slerp_NotNormalized
                      ((TQuat<double> *)&local_108._s_0,pTVar18,pTVar17,dVar3);
  dVar8 = pTVar17->X;
  dVar9 = pTVar17->Y;
  dVar10 = pTVar17->Z;
  dVar11 = pTVar17->W;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  dVar22 = dVar8 * dVar8 + dVar10 * dVar10;
  dVar24 = dVar9 * dVar9 + dVar11 * dVar11;
  dVar3 = dVar24 + dVar22;
  dVar22 = dVar22 + dVar24;
  auVar26._8_4_ = SUB84(dVar22,0);
  auVar26._0_8_ = dVar3;
  auVar26._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar26 = sqrtpd(auVar25,auVar26);
  uVar20 = -(ulonglong)(__real_3e45798ee0000000 <= dVar3);
  uVar21 = -(ulonglong)(__real_3e45798ee0000000 <= dVar22);
  uVar14 = (uint)(uVar20 >> 0x20);
  uVar28 = (uint)(uVar21 >> 0x20);
  auVar29 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar26);
  fVar1 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[3];
  auVar30._0_8_ = uVar20 & (ulonglong)(auVar29._0_8_ * dVar8);
  uVar7 = uVar21 & (ulonglong)(auVar29._8_8_ * dVar9);
  auVar30._8_4_ = (undefined4)uVar7;
  auVar30._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar29._0_4_ = ~(uint)uVar20 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar29._4_4_ =
       ~uVar14 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar29._8_4_ = ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar29._12_4_ =
       ~uVar28 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_e8.Rotation.XY.m128d_f64 = (double  [2])(auVar30 | auVar29);
  auVar26 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar26);
  pTVar18->X = local_e8.Rotation.XY.m128d_f64[0];
  pTVar18->Y = local_e8.Rotation.XY.m128d_f64[1];
  auVar23._0_8_ = (ulonglong)(auVar26._0_8_ * dVar10) & uVar20;
  uVar7 = (ulonglong)(auVar26._8_8_ * dVar11) & uVar21;
  auVar23._8_4_ = (undefined4)uVar7;
  auVar23._12_4_ = (undefined4)(uVar7 >> 0x20);
  auVar27._0_4_ = ~(uint)uVar20 & SUB84((double)fVar1,0);
  auVar27._4_4_ = ~uVar14 & (uint)((ulonglong)(double)fVar1 >> 0x20);
  auVar27._8_4_ = ~(uint)uVar21 & SUB84((double)fVar2,0);
  auVar27._12_4_ = ~uVar28 & (uint)((ulonglong)(double)fVar2 >> 0x20);
  local_e8.Rotation.ZW.m128d_f64 = (double  [2])(auVar27 | auVar23);
  pTVar18->Z = local_e8.Rotation.ZW.m128d_f64[0];
  pTVar18->W = local_e8.Rotation.ZW.m128d_f64[1];
  local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
  local_e8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dVar5,0);
  local_e8.Translation.XY.m128d_f64[0] = dVar4;
  local_e8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
  local_108._s_0.Z = dVar6;
  local_e8.Translation.ZW.m128d_f64[0] = dVar6;
  ::FName::ToString(local_res10,(FString *)&local_108._s_0);
  ::FString::PrintfImpl((FString *)&local_128._s_0,L"control_%s");
  pwVar19 = L"";
  if (local_128._8_4_ != 0) {
    pwVar19 = (wchar_t *)CONCAT44(local_128._4_4_,local_128._0_4_);
  }
  ::FName::FName(&local_res8,pwVar19);
  if ((void *)CONCAT44(local_128._4_4_,local_128._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_128._4_4_,local_128._0_4_));
  }
  if ((void *)local_108._s_0.X != (void *)0x0) {
    FMemory::Free((void *)local_108._s_0.X);
  }
  local_128._4_4_ = local_res8.ComparisonIndex.Value;
  local_128._8_4_ = local_res8.Number;
  local_128._0_1_ = 4;
  UDS_ControlRig::SetRigTransform
            ((UDS_ControlRig *)this,(FRigElementKey *)&local_128._s_0,&local_e8,GlobalSpace);
  return;
}

// SolveIKTarget @ 14b8eb1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_ClimbingControlRig::SolveIKTarget
          (UDS_ClimbingControlRig *this,FName param_1,TVector<double> *param_2,
          TVector<double> *param_3,TQuat<double> *param_4,TVector<double> *param_5)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FName FVar14;
  FRigVMExtendedExecuteContext *this_00;
  FRigVMExecuteContext *pFVar15;
  TVector<double> *pTVar16;
  wchar_t *pwVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  double dVar23;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  uint uVar56;
  uint uVar57;
  __m128d unaff_XMM6;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar72;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  FName local_res10 [3];
  undefined1 auStack_3c8 [32];
  undefined1 local_398 [8];
  double dStack_390;
  undefined8 local_388;
  TVector<double>_u_0 local_378;
  FName local_360;
  TVector<double> local_358;
  TQuat<double> local_338;
  TQuat<double> local_318;
  undefined1 local_2f8 [48];
  double dStack_2c8;
  double local_2c0;
  double local_2a0;
  double local_298;
  double local_290;
  byte local_24b;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  TTransform<double> local_138;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStack_3c8;
  stack0xfffffffffffffc6c = param_1;
  local_398[0] = 1;
  local_res10[0] = param_1;
  UDS_ControlRig::GetRigTransform
            ((UDS_ControlRig *)this,&local_1f8,(FRigElementKey *)local_398,GlobalSpace,false);
  ::FName::ToString(local_res10,(FString *)local_398);
  ::FString::PrintfImpl((FString *)&local_378._s_0,L"temp_%s");
  pwVar17 = L"";
  if (local_378._8_4_ != 0) {
    pwVar17 = (wchar_t *)CONCAT44(local_378._4_4_,local_378._0_4_);
  }
  ::FName::FName(&local_360,pwVar17);
  if ((void *)CONCAT44(local_378._4_4_,local_378._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_378._4_4_,local_378._0_4_));
  }
  if (local_398 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_398);
  }
  auVar52 = _local_398;
  local_398[0] = 1;
  auVar36 = _local_398;
  dStack_390._4_4_ = auVar52._12_4_;
  local_398._0_4_ = auVar36._0_4_;
  stack0xfffffffffffffc6c = local_360;
  UDS_ControlRig::GetRigTransform
            ((UDS_ControlRig *)this,&local_198,(FRigElementKey *)local_398,GlobalSpace,false);
  dVar2 = __real_3f1a36e2e0000000;
  uVar13 = _UNK_15061cc8c;
  uVar12 = _UNK_15061cc88;
  uVar11 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar10 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  if (this->bShouldCacheClimbAnchor == true) {
    local_388 = local_1f8.Translation.ZW.m128d_f64[0];
    if (this->bReachingClimbApex == false) {
      auVar6._4_8_ = extraout_XMM0_Qb;
      auVar6._0_4_ = local_198.Translation.XY.m128d_f64[0]._4_4_;
      auVar52._0_8_ = auVar6._0_8_ << 0x20;
      auVar52._8_4_ = local_198.Translation.XY.m128d_f64[1]._0_4_;
      auVar52._12_4_ = local_198.Translation.XY.m128d_f64[1]._4_4_;
      local_358.field0_0x0._s_0.Z = local_198.Translation.ZW.m128d_f64[0];
      (param_5->field0_0x0)._s_0.X =
           local_1f8.Translation.XY.m128d_f64[0] - local_198.Translation.XY.m128d_f64[0];
      (param_5->field0_0x0)._s_0.Y = local_1f8.Translation.XY.m128d_f64[1] - auVar52._8_8_;
      (param_5->field0_0x0)._s_0.Z = (double)local_388 - local_198.Translation.ZW.m128d_f64[0];
    }
    dStack_390 = local_1f8.Translation.XY.m128d_f64[1];
    local_398 = (undefined1  [8])local_1f8.Translation.XY.m128d_f64[0];
    local_378._s_0.X =
         UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.X * __real_4062c00000000000 +
         local_1f8.Translation.XY.m128d_f64[0];
    local_378._s_0.Y =
         UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Y * __real_4062c00000000000 +
         local_1f8.Translation.XY.m128d_f64[1];
    local_378._s_0.Z =
         UE::Math::TVector<double>::YAxisVector.field0_0x0._s_0.Z * __real_4062c00000000000 +
         (double)local_388;
    GetHitResult(this,(FHitResult *)local_2f8,(TVector<double> *)local_398,
                 (TVector<double> *)&local_378._s_0);
    if ((local_24b & 1) != 0) {
      (param_5->field0_0x0)._s_0.X = local_2a0 * (param_5->field0_0x0)._s_0.X;
      (param_5->field0_0x0)._s_0.Y = local_298 * (param_5->field0_0x0)._s_0.Y;
      (param_5->field0_0x0)._s_0.Z = local_290 * (param_5->field0_0x0)._s_0.Z;
      (param_3->field0_0x0)._s_0.X = (double)local_2f8._40_8_;
      (param_3->field0_0x0)._s_0.Y = dStack_2c8;
      (param_3->field0_0x0)._s_0.Z = local_2c0;
      (param_3->field0_0x0)._s_0.Y = (param_3->field0_0x0)._s_0.Y - __real_4020000000000000;
      if ((this->bReachingClimbApex == false) &&
         (((dVar2 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20)
                                     & uVar11,(uint)*(undefined8 *)&param_2->field0_0x0 & uVar10) ||
           (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
           dVar2 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar11,(uint)uVar1 & uVar10))
           ) || (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
                dVar2 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar11,
                                         (uint)uVar1 & uVar10))))) {
        ::FName::FName((FName *)local_398,L"root");
        uVar1 = local_378._0_8_;
        local_378._4_4_ = local_398._0_4_;
        local_378._8_4_ = local_398._4_4_;
        local_378._1_3_ = SUB83(uVar1,1);
        local_378._0_1_ = 1;
        UDS_ControlRig::GetRigTransform
                  ((UDS_ControlRig *)this,&local_138,(FRigElementKey *)&local_378._s_0,GlobalSpace,
                   false);
        local_318.X = local_138.Rotation.XY.m128d_f64[0];
        local_318.Y = local_138.Rotation.XY.m128d_f64[1];
        dStack_390 = (double)_UNK_15061cbc8;
        local_398 = (undefined1  [8])___xmm_3ff00000000000000000000000000000;
        local_388 = 0.0;
        local_318.Z = local_138.Rotation.ZW.m128d_f64[0];
        local_318.W = local_138.Rotation.ZW.m128d_f64[1];
        UE::Math::TQuat<double>::RotateVector
                  (&local_318,(TVector<double> *)&local_378._s_0,(TVector<double> *)local_398);
        dVar4 = __real_3e45798ee0000000;
        auVar58._8_8_ = local_1f8.Rotation.ZW.m128d_f64[1];
        auVar58._0_8_ = local_1f8.Rotation.ZW.m128d_f64[0];
        auVar36._8_8_ = local_1f8.Rotation.XY.m128d_f64[1];
        auVar36._0_8_ = local_1f8.Rotation.XY.m128d_f64[0];
        dVar35 = (param_2->field0_0x0)._s_0.Z;
        auVar73._8_8_ = 0;
        auVar73._0_8_ = dVar35;
        auVar52 = *(undefined1 (*) [16])&param_2->field0_0x0;
        dVar71 = auVar52._8_8_;
        auVar58 = blendpd(auVar36,auVar58,2);
        auVar66._0_8_ =
             dVar71 * local_1f8.Rotation.XY.m128d_f64[0] -
             auVar52._0_8_ * local_1f8.Rotation.XY.m128d_f64[1];
        auVar66._8_8_ =
             dVar35 * local_1f8.Rotation.XY.m128d_f64[1] -
             dVar71 * local_1f8.Rotation.ZW.m128d_f64[0];
        auVar36 = blendpd(auVar52,auVar73,2);
        auVar37._0_8_ = auVar36._0_8_ * local_1f8.Rotation.ZW.m128d_f64[0] - dVar35 * auVar58._0_8_;
        auVar37._8_8_ = auVar36._8_8_ * local_1f8.Rotation.ZW.m128d_f64[1] - auVar58._8_8_ * 0.0;
        auVar36 = blendpd(auVar66,auVar37,2);
        dVar45 = auVar66._8_8_ + auVar66._8_8_;
        dVar50 = auVar37._0_8_ + auVar37._0_8_;
        uVar54 = SUB84(dVar50,0);
        uVar55 = (undefined4)((ulonglong)dVar50 >> 0x20);
        auVar67._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar67._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar46._8_4_ = uVar54;
        auVar46._0_8_ = dVar45;
        auVar46._12_4_ = uVar55;
        auVar24._8_4_ = uVar54;
        auVar24._0_8_ = dVar45;
        auVar24._12_4_ = uVar55;
        auVar38._8_4_ = uVar54;
        auVar38._0_8_ = dVar45;
        auVar38._12_4_ = uVar55;
        auVar36 = blendpd(auVar38,auVar67,2);
        auVar47._0_8_ =
             auVar46._8_8_ * local_1f8.Rotation.XY.m128d_f64[0] -
             dVar45 * local_1f8.Rotation.XY.m128d_f64[1];
        auVar47._8_8_ =
             auVar67._0_8_ * local_1f8.Rotation.XY.m128d_f64[1] -
             auVar24._8_8_ * local_1f8.Rotation.ZW.m128d_f64[0];
        auVar25._8_4_ = SUB84(auVar67._8_8_,0);
        auVar25._0_8_ = auVar67._0_8_;
        auVar25._12_4_ = (int)((ulonglong)auVar67._8_8_ >> 0x20);
        auVar39._0_8_ =
             auVar36._0_8_ * local_1f8.Rotation.ZW.m128d_f64[0] - auVar67._0_8_ * auVar58._0_8_;
        auVar39._8_8_ =
             auVar36._8_8_ * local_1f8.Rotation.ZW.m128d_f64[1] - auVar25._8_8_ * auVar58._8_8_;
        auVar26._8_4_ = SUB84(auVar47._8_8_,0);
        auVar26._0_8_ = auVar47._0_8_;
        auVar26._12_4_ = (int)((ulonglong)auVar47._8_8_ >> 0x20);
        auVar36 = blendpd(auVar47,auVar39,2);
        local_388 = auVar67._0_8_ * local_1f8.Rotation.ZW.m128d_f64[1] + dVar35 + auVar36._0_8_;
        dVar35 = dVar50 * local_1f8.Rotation.ZW.m128d_f64[1] + dVar71 + auVar39._0_8_;
        unique0x10000169 = SUB84(dVar35,0);
        local_398 = (undefined1  [8])
                    (dVar45 * local_1f8.Rotation.ZW.m128d_f64[1] + auVar52._0_8_ + auVar26._8_8_);
        dStack_390._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)local_398,&local_358,__real_3e45798ee0000000,
                   &UE::Math::TVector<double>::ZeroVector);
        FRigVMMathLibrary::FindQuatBetweenVectors
                  (&local_338,&local_358,(TVector<double> *)(local_2f8 + 0x58));
        dVar45 = local_338.W;
        dVar35 = local_338.Z;
        auVar51._0_8_ =
             local_1f8.Rotation.ZW.m128d_f64[0] * local_338.Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0];
        auVar51._8_8_ =
             local_1f8.Rotation.ZW.m128d_f64[1] * local_338.Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1];
        auVar27._8_4_ = local_338.Z._0_4_;
        auVar27._0_8_ = dVar35;
        auVar27._12_4_ = local_338.Z._4_4_;
        dVar50 = local_338.X * local_1f8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 local_1f8.Rotation.ZW.m128d_f64[0] * dVar45 +
                 local_1f8.Rotation.XY.m128d_f64[0] * local_338.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                 dVar35 * local_1f8.Rotation.ZW.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        dVar71 = local_338.X * local_1f8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 local_1f8.Rotation.ZW.m128d_f64[1] * dVar45 +
                 local_1f8.Rotation.XY.m128d_f64[1] * local_338.Y *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 auVar27._8_8_ * local_1f8.Rotation.ZW.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        auVar28._8_4_ = SUB84(dVar71,0);
        auVar28._0_8_ = dVar50;
        auVar28._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
        dVar65 = local_1f8.Rotation.ZW.m128d_f64[1] * local_338.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                 local_1f8.Rotation.XY.m128d_f64[0] * dVar45 + auVar51._0_8_ +
                 dVar35 * local_1f8.Rotation.XY.m128d_f64[1] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        dVar72 = local_1f8.Rotation.ZW.m128d_f64[0] * local_338.X *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                 local_1f8.Rotation.XY.m128d_f64[1] * dVar45 + auVar51._8_8_ +
                 dVar35 * local_1f8.Rotation.XY.m128d_f64[0] *
                 GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        auVar40._8_4_ = SUB84(dVar72,0);
        auVar40._0_8_ = dVar65;
        auVar40._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
        dVar35 = dVar65 * dVar65 + dVar50 * dVar50;
        dVar45 = auVar40._8_8_ * dVar72 + auVar28._8_8_ * dVar71;
        auVar29._8_4_ = SUB84(dVar45,0);
        auVar29._0_8_ = dVar35;
        auVar29._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
        auVar30._0_8_ = auVar29._8_8_ + dVar35;
        auVar30._8_8_ = dVar35 + dVar45;
        auVar52 = sqrtpd(auVar51,auVar30);
        uVar18 = -(ulonglong)(dVar4 <= auVar30._0_8_);
        uVar21 = -(ulonglong)(dVar4 <= auVar30._8_8_);
        auVar36 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
        uVar56 = (uint)(uVar18 >> 0x20);
        uVar57 = (uint)(uVar21 >> 0x20);
        auVar41._0_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar41._4_4_ =
             ~uVar56 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar41._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar41._12_4_ =
             ~uVar57 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        auVar59._0_8_ = uVar18 & (ulonglong)(auVar36._0_8_ * dVar65);
        uVar9 = uVar21 & (ulonglong)(auVar36._8_8_ * dVar72);
        auVar59._8_4_ = (undefined4)uVar9;
        auVar59._12_4_ = (undefined4)(uVar9 >> 0x20);
        unaff_XMM6.m128d_f64 = (double  [2])(auVar59 | auVar41);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar52);
        auVar62._0_4_ =
             ~(uint)uVar18 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        auVar62._4_4_ =
             ~uVar56 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        auVar62._8_4_ =
             ~(uint)uVar21 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        auVar62._12_4_ =
             ~uVar57 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar42._0_8_ = (ulonglong)(auVar52._0_8_ * dVar50) & uVar18;
        uVar21 = (ulonglong)(auVar52._8_8_ * dVar71) & uVar21;
        auVar42._8_4_ = (undefined4)uVar21;
        auVar42._12_4_ = (undefined4)(uVar21 >> 0x20);
        dVar45 = unaff_XMM6.m128d_f64[0];
        auVar62 = auVar62 | auVar42;
        dVar50 = dVar45 + dVar45;
        auVar7._4_8_ = dVar72;
        auVar7._0_4_ = auVar62._4_4_;
        auVar68._0_8_ = auVar7._0_8_ << 0x20;
        auVar68._8_4_ = auVar62._8_4_;
        auVar68._12_4_ = auVar62._12_4_;
        uVar56 = auVar62._0_4_ ^ (uint)__xmm_80000000000000008000000000000000;
        uVar57 = auVar62._4_4_ ^ __xmm_80000000000000008000000000000000._4_4_;
        dVar35 = (double)CONCAT44(uVar57,uVar56) + (double)CONCAT44(uVar57,uVar56);
        dVar71 = auVar68._8_8_;
        if ((float)((((auVar62._0_8_ * dVar35 - dVar45 * dVar50) + __real_3ff0000000000000) *
                     local_378._s_0.Y +
                     (unaff_XMM6.m128d_f64[1] * dVar50 + dVar71 * dVar35) * local_378._s_0.X +
                    (dVar71 * dVar50 - unaff_XMM6.m128d_f64[1] * dVar35) * local_378._s_0.Z) *
                   (param_2->field0_0x0)._s_0.Y) <= 0.0) {
          param_4->X = unaff_XMM6.m128d_f64[0];
          param_4->Y = unaff_XMM6.m128d_f64[1];
          param_4->Z = auVar62._0_8_;
          param_4->W = dVar71;
        }
        goto LAB_14b8eb82a;
      }
    }
    param_4->X = local_1f8.Rotation.XY.m128d_f64[0];
    param_4->Y = local_1f8.Rotation.XY.m128d_f64[1];
    param_4->Z = local_1f8.Rotation.ZW.m128d_f64[0];
    param_4->W = local_1f8.Rotation.ZW.m128d_f64[1];
    unaff_XMM6.m128d_f64 = local_1f8.Translation.ZW.m128d_f64;
  }
LAB_14b8eb82a:
  if ((this->bReachingClimbApex == true) &&
     (((dVar2 < (double)CONCAT44((uint)((ulonglong)*(undefined8 *)&param_2->field0_0x0 >> 0x20) &
                                 uVar11,(uint)*(undefined8 *)&param_2->field0_0x0 & uVar10) ||
       (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8),
       dVar2 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar11,(uint)uVar1 & uVar10))) ||
      (uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 0x10),
      dVar2 < (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & uVar11,(uint)uVar1 & uVar10))))) {
    this_00 = URigVMHost::GetRigVMExtendedExecuteContext((URigVMHost *)this);
    pFVar15 = FRigVMExtendedExecuteContext::GetPublicData<FRigVMExecuteContext>(this_00);
    FVar14 = local_res10[0];
    uVar56 = ::GetTypeHash(local_res10[0].ComparisonIndex.Value);
    pTVar16 = TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
              ::FindOrAddImpl<FName_const_&>
                        ((TMapBase<FName,UE::Math::TVector<double>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Math::TVector<double>,0>_>
                          *)&this->ClimbApexTargetLocationMap,FVar14.Number + uVar56,local_res10);
    dVar2 = (pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64[0] *
            GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
    dVar35 = (pFVar15->ToWorldSpaceTransform).Rotation.XY.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
    uVar54 = (undefined4)((ulonglong)dVar35 >> 0x20);
    dVar45 = (pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[0] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
    dVar50 = (pFVar15->ToWorldSpaceTransform).Rotation.ZW.m128d_f64[1] *
             GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
    auVar48._8_4_ = SUB84(dVar35,0);
    auVar48._0_8_ = dVar2;
    auVar48._12_4_ = uVar54;
    dVar23 = (pTVar16->field0_0x0)._s_0.Z -
             (pFVar15->ToWorldSpaceTransform).Translation.ZW.m128d_f64[0];
    dVar65 = (pTVar16->field0_0x0)._s_0.X -
             (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[0];
    dVar72 = (pTVar16->field0_0x0)._s_0.Y -
             (pFVar15->ToWorldSpaceTransform).Translation.XY.m128d_f64[1];
    uVar55 = (undefined4)((ulonglong)dVar72 >> 0x20);
    auVar8._4_8_ = unaff_XMM6.m128d_f64[1];
    auVar8._0_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[0]._4_4_;
    auVar60._0_8_ = auVar8._0_8_ << 0x20;
    auVar60._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
    auVar60._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
    dVar49 = auVar48._8_8_;
    auVar53._8_4_ = SUB84(dVar35,0);
    auVar53._0_8_ = dVar2;
    auVar53._12_4_ = uVar54;
    auVar3._8_4_ = SUB84(dVar50,0);
    auVar3._0_8_ = dVar45;
    auVar3._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar36 = blendpd(auVar53,auVar3,2);
    auVar31._8_4_ = SUB84(dVar45,0);
    auVar31._0_8_ = dVar49;
    auVar31._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    auVar74._8_4_ = SUB84(dVar72,0);
    auVar74._0_8_ = dVar65;
    auVar74._12_4_ = uVar55;
    auVar43._8_4_ = SUB84(dVar72,0);
    auVar43._0_8_ = dVar65;
    auVar43._12_4_ = uVar55;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar23;
    auVar52 = blendpd(auVar43,auVar5,2);
    auVar75._0_8_ = auVar74._8_8_ * dVar2 - dVar49 * dVar65;
    auVar75._8_8_ = dVar23 * dVar35 - auVar31._8_8_ * dVar72;
    auVar44._0_8_ = auVar52._0_8_ * dVar45 - dVar23 * auVar36._0_8_;
    auVar44._8_8_ = auVar52._8_8_ * dVar50 - auVar36._8_8_ * 0.0;
    dVar71 = auVar75._8_8_ + auVar75._8_8_;
    dVar4 = auVar44._0_8_ + auVar44._0_8_;
    uVar54 = SUB84(dVar4,0);
    uVar55 = (undefined4)((ulonglong)dVar4 >> 0x20);
    auVar52 = blendpd(auVar75,auVar44,2);
    auVar76._0_8_ = auVar52._0_8_ + auVar52._0_8_;
    auVar76._8_8_ = auVar52._8_8_ + auVar52._8_8_;
    auVar69._8_4_ = uVar54;
    auVar69._0_8_ = dVar71;
    auVar69._12_4_ = uVar55;
    auVar32._8_4_ = uVar54;
    auVar32._0_8_ = dVar71;
    auVar32._12_4_ = uVar55;
    auVar63._8_4_ = uVar54;
    auVar63._0_8_ = dVar71;
    auVar63._12_4_ = uVar55;
    auVar58 = blendpd(auVar63,auVar76,2);
    auVar70._0_8_ = auVar69._8_8_ * dVar2 - dVar71 * dVar49;
    auVar70._8_8_ = auVar76._0_8_ * dVar35 - auVar32._8_8_ * dVar45;
    auVar33._8_4_ = SUB84(auVar76._8_8_,0);
    auVar33._0_8_ = auVar76._0_8_;
    auVar33._12_4_ = (int)((ulonglong)auVar76._8_8_ >> 0x20);
    auVar52 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Scale3D.XY.m128d_f64;
    auVar64._0_8_ = auVar58._0_8_ * dVar45 - auVar76._0_8_ * auVar36._0_8_;
    auVar64._8_8_ = auVar58._8_8_ * dVar50 - auVar33._8_8_ * auVar36._8_8_;
    auVar36 = *(undefined1 (*) [16])(pFVar15->ToWorldSpaceTransform).Scale3D.ZW.m128d_f64;
    auVar77._0_8_ = (double)CONCAT44(uVar11 & auVar52._4_4_,uVar10 & auVar52._0_4_);
    auVar77._8_4_ = uVar12 & auVar52._8_4_;
    auVar77._12_4_ = uVar13 & auVar52._12_4_;
    auVar61._8_8_ = auVar60._8_8_;
    auVar61._0_8_ = auVar36._0_8_;
    lVar19 = -(ulonglong)
              ((double)CONCAT44(uVar11 & auVar36._4_4_,uVar10 & auVar36._0_4_) <=
              (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
    auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar52);
    lVar20 = -(ulonglong)(auVar77._0_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
    lVar22 = -(ulonglong)(auVar77._8_8_ <= (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
    auVar34._8_4_ = SUB84(auVar70._8_8_,0);
    auVar34._0_8_ = auVar70._0_8_;
    auVar34._12_4_ = (int)((ulonglong)auVar70._8_8_ >> 0x20);
    auVar78._0_8_ =
         (double)CONCAT44(~(uint)((ulonglong)lVar20 >> 0x20) & auVar52._4_4_,
                          ~(uint)lVar20 & auVar52._0_4_);
    auVar78._8_4_ = ~(uint)lVar22 & auVar52._8_4_;
    auVar78._12_4_ = ~(uint)((ulonglong)lVar22 >> 0x20) & auVar52._12_4_;
    auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar61);
    auVar36 = blendpd(auVar70,auVar64,2);
    (param_3->field0_0x0)._s_0.X = auVar78._0_8_ * (dVar71 * dVar50 + dVar65 + auVar34._8_8_);
    (param_3->field0_0x0)._s_0.Y = auVar78._8_8_ * (dVar4 * dVar50 + dVar72 + auVar64._0_8_);
    (param_3->field0_0x0)._s_0.Z =
         (double)CONCAT44(~(uint)((ulonglong)lVar19 >> 0x20) & auVar52._4_4_,
                          ~(uint)lVar19 & auVar52._0_4_) *
         (auVar76._0_8_ * dVar50 + dVar23 + auVar36._0_8_);
  }
  return;
}

// UpdateVariables @ 14b8f5530

void __thiscall UDS_ClimbingControlRig::UpdateVariables(UDS_ClimbingControlRig *this,float param_1)

{
  undefined8 uVar1;
  bool bVar2;
  char cVar3;
  UDS_CharacterAnimBase *this_00;
  FDS_AnimSharedData *pFVar4;
  float fVar5;
  float fVar6;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->PlayerAnimBP).WeakPtr);
  if (bVar2) {
    this_00 = (UDS_CharacterAnimBase *)FWeakObjectPtr::Get(&(this->PlayerAnimBP).WeakPtr);
    pFVar4 = UDS_CharacterAnimBase::GetAnimSharedData(this_00);
    uVar1 = *(undefined8 *)&(pFVar4->Velocity).field0_0x0;
    if (((__real_3fb99999a0000000 <
          (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) ||
        (uVar1 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 8),
        __real_3fb99999a0000000 <
        (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (uVar1 = *(undefined8 *)((longlong)&(pFVar4->Velocity).field0_0x0 + 0x10),
       __real_3fb99999a0000000 <
       (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      cVar3 = '\x01';
      this->bIsMoving = true;
    }
    else {
      cVar3 = '\0';
      this->bIsMoving = false;
    }
  }
  else {
    cVar3 = this->bIsMoving;
  }
  fVar5 = __real_3f800000;
  if (this->bForceCacheClimbAnchor == false) {
    fVar5 = this->ClimbAnchorKeepAliveRemainTime;
  }
  if ((cVar3 != '\0') || (bVar2 = false, 0.0 < fVar5)) {
    bVar2 = true;
  }
  this->bShouldCacheClimbAnchor = bVar2;
  this->bForceCacheClimbAnchor = false;
  fVar6 = fVar5 - param_1;
  if (fVar5 - param_1 <= 0.0) {
    fVar6 = 0.0;
  }
  this->ClimbAnchorKeepAliveRemainTime = fVar6;
  return;
}

