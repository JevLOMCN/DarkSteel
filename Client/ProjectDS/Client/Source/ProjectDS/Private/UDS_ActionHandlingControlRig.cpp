// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4012f0

UClass * __cdecl UDS_ActionHandlingControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActionHandlingControlRig",
               &Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ActionHandlingControlRig,0xc80,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ActionHandlingControlRig>,
               InternalVTableHelperCtorCaller<UDS_ActionHandlingControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton;
}

// UDS_ActionHandlingControlRig @ 14b406d10

UDS_ActionHandlingControlRig * __thiscall
UDS_ActionHandlingControlRig::UDS_ActionHandlingControlRig
          (UDS_ActionHandlingControlRig *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  this->ActionHandlingType = None;
  this->Weight = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  local_res8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->HoldAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HoldAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->HandHeightOnHold = 0.0;
  return this;
}

// UDS_ActionHandlingControlRig @ 14b406db0

UDS_ActionHandlingControlRig * __thiscall
UDS_ActionHandlingControlRig::UDS_ActionHandlingControlRig
          (UDS_ActionHandlingControlRig *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UDS_ControlRig::UDS_ControlRig((UDS_ControlRig *)this,param_1);
  this->ActionHandlingType = None;
  this->Weight = 0.0;
  *(undefined ***)this = &_vftable__for__UObject__;
  local_res8 = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  (this->HoldAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->HoldAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  this->HandHeightOnHold = 0.0;
  return this;
}

// ~UDS_ActionHandlingControlRig @ 14b407e80

void __thiscall
UDS_ActionHandlingControlRig::~UDS_ActionHandlingControlRig(UDS_ActionHandlingControlRig *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x290 = &_vftable__for__INodeMappingProviderInterface__;
  *(undefined ***)&this->field_0x298 = &_vftable__for__IRigHierarchyProvider__;
  *(undefined ***)&this->field_0x2a0 = &_vftable__for__IMeshDeformerProducer__;
  UDS_ControlRig::~UDS_ControlRig((UDS_ControlRig *)this);
  return;
}

// GetPrivateStaticClass @ 14b409e40

UClass * __cdecl UDS_ActionHandlingControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActionHandlingControlRig",
               &Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton,
               StaticRegisterNativesUDS_ActionHandlingControlRig,0xc80,0x10,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ActionHandlingControlRig>,
               InternalVTableHelperCtorCaller<UDS_ActionHandlingControlRig>,local_res8,
               UDS_ControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActionHandlingControlRig.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b40ac90

bool __thiscall
UDS_ActionHandlingControlRig::ShouldNotifyChangedCharState(UDS_ActionHandlingControlRig *this)

{
  return true;
}

// StaticRegisterNativesUDS_ActionHandlingControlRig @ 14b40ae30

void __cdecl UDS_ActionHandlingControlRig::StaticRegisterNativesUDS_ActionHandlingControlRig(void)

{
  return;
}

// GetExternalVariablesImpl @ 14b8c5230

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
UDS_ActionHandlingControlRig::GetExternalVariablesImpl
          (UDS_ActionHandlingControlRig *this,
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
  pFVar6 = ::FName::FName(&local_res8,0x12,L"ActionHandlingType",FNAME_Add);
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
  pFVar6 = ::FName::FName(local_res10,0x10,L"HandHeightOnHold",FNAME_Add);
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
  pFVar6 = ::FName::FName(&local_res20,6,L"Weight",FNAME_Add);
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

// OnChangedCharState @ 14b8d4530

void __thiscall
UDS_ActionHandlingControlRig::OnChangedCharState
          (UDS_ActionHandlingControlRig *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  if ((param_2->RemovedCharDetailState == Interaction_Hold) ||
     (param_2->RemovedCharDetailState == Interaction_LiftUp)) {
    this->ActionHandlingType = None;
    this->Weight = 0.0;
  }
  if (param_2->AddedCharDetailState == Interaction_Hold) {
    this->ActionHandlingType = Hold;
    this->Weight = 1.0;
    return;
  }
  if (param_2->AddedCharDetailState == Interaction_LiftUp) {
    this->ActionHandlingType = LiftUp;
    this->Weight = 1.0;
  }
  return;
}

// OnDeInitialize @ 14b8d5870

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

void __thiscall UDS_ActionHandlingControlRig::OnDeInitialize(UDS_ActionHandlingControlRig *this)

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

// OnExecuteForwardSolve @ 14b8d60e0

void __thiscall
UDS_ActionHandlingControlRig::OnExecuteForwardSolve
          (UDS_ActionHandlingControlRig *this,float param_1)

{
  bool bVar1;
  TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr> TVar2;
  UObject *pUVar3;
  ulong64 local_res18 [2];
  
  if (this->ActionHandlingType == Hold) {
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (&this->HoldAbilityData,(void *)0x0);
    if (bVar1) {
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_Hold>
                        (local_res18,&this->field_0xc50);
                    /* WARNING: Load size is inaccurate */
      (this->HoldAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_Hold,FWeakObjectPtr>::UEOpEquals
                      (&this->HoldAbilityData,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&(this->HoldAbilityData).WeakPtr);
      this->HandHeightOnHold = *(float *)&pUVar3[3].field_0x10;
    }
  }
  return;
}

// OnInitialize @ 14b8d6ff0

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
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_ActionHandlingControlRig::OnInitialize(UDS_ActionHandlingControlRig *this)

{
  ulong64 uVar1;
  FDS_EntityBase *pFVar2;
  FWeakObjectPtr FStackX_10;
  AActor *apAStackX_18 [2];
  
  apAStackX_18[0] = UControlRig::GetHostingActor((UControlRig *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (apAStackX_18[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apAStackX_18[0]);
  }
  FStackX_10.ObjectIndex = 0;
  FStackX_10.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (apAStackX_18[0] != (AActor *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)apAStackX_18[0]);
  }
  FWeakObjectPtr::operator=(&FStackX_10,(FObjectPtr)apAStackX_18);
  pFVar2 = FDS_EntityBase::GetEntityBaseFromActor((TWeakObjectPtr<AActor,FWeakObjectPtr>)FStackX_10)
  ;
  if ((pFVar2 != (FDS_EntityBase *)0x0) &&
     (uVar1 = pFVar2->EntityID, *(ulong64 *)&this->field_0xc50 = uVar1, uVar1 != 0)) {
    (**(code **)(*(longlong *)this + 0x4b0))(this,pFVar2);
  }
  return;
}

