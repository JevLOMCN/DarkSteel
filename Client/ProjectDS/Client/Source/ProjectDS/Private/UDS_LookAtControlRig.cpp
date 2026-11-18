// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4e4d30

UClass * __cdecl UDS_LookAtControlRig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LookAtControlRig",
               &Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton,
               StaticRegisterNativesUDS_LookAtControlRig,0xc70,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LookAtControlRig>,
               InternalVTableHelperCtorCaller<UDS_LookAtControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton;
}

// UDS_LookAtControlRig @ 14b4e8800

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UDS_LookAtControlRig * __thiscall
UDS_LookAtControlRig::UDS_LookAtControlRig(UDS_LookAtControlRig *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->LookAtWeight = 0.0;
  return this;
}

// UDS_LookAtControlRig @ 14b4e8890

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UDS_LookAtControlRig * __thiscall
UDS_LookAtControlRig::UDS_LookAtControlRig(UDS_LookAtControlRig *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UControlRig::UControlRig((UControlRig *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LookAtLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->LookAtWeight = 0.0;
  return this;
}

// ~UDS_LookAtControlRig @ 14b4e9970

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UDS_LookAtControlRig::~UDS_LookAtControlRig(UDS_LookAtControlRig *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__INodeMappingProviderInterface__;
  this->_padding_ = (longlong)&_vftable__for__IRigHierarchyProvider__;
  this->_padding_ = (longlong)&_vftable__for__IMeshDeformerProducer__;
  UControlRig::~UControlRig((UControlRig *)this);
  return;
}

// GetPrivateStaticClass @ 14b4eb450

UClass * __cdecl UDS_LookAtControlRig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_LookAtControlRig",
               &Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton,
               StaticRegisterNativesUDS_LookAtControlRig,0xc70,0x10,CLASS_Intrinsic|CLASS_Abstract,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_LookAtControlRig>,
               InternalVTableHelperCtorCaller<UDS_LookAtControlRig>,local_res8,
               UControlRig::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_LookAtControlRig.InnerSingleton;
}

// StaticRegisterNativesUDS_LookAtControlRig @ 14b4ec130

void __cdecl UDS_LookAtControlRig::StaticRegisterNativesUDS_LookAtControlRig(void)

{
  return;
}

// GetExternalVariablesImpl @ 14b8c5cb0

TArray<FRigVMExternalVariable,TSizedDefaultAllocator<32>_> * __thiscall
UDS_LookAtControlRig::GetExternalVariablesImpl
          (UDS_LookAtControlRig *this,
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
  FName local_res10;
  longlong local_78;
  FProperty *pFStack_70;
  FName local_68;
  FName FStack_60;
  undefined1 local_58;
  byte bStack_57;
  byte bStack_56;
  undefined1 uStack_55;
  int iStack_54;
  longlong lStack_50;
  longlong local_48;
  FProperty *pFStack_40;
  FName local_38;
  FName FStack_30;
  undefined1 local_28;
  byte bStack_27;
  byte bStack_26;
  undefined1 uStack_25;
  int iStack_24;
  longlong lStack_20;
  
  URigVMHost::GetExternalVariablesImpl((URigVMHost *)this,__return_storage_ptr__,param_1);
  pUVar1 = (UStruct *)this->_padding_;
  pFVar6 = ::FName::FName(&local_res8,0xe,L"LookAtLocation",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  lVar10 = 0;
  if (pFVar7 != (FProperty *)0x0) {
    uStack_55 = 0;
    local_68.ComparisonIndex.Value = 0;
    local_68.Number = 0;
    FStack_60.ComparisonIndex.Value = 0;
    FStack_60.Number = 0;
    local_58 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    local_78 = lVar10;
    if (bVar4) {
      local_78 = pFVar7->_padding_;
    }
    bStack_57 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_56 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    pFStack_70 = pFVar7;
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
    lStack_50 = (longlong)&this->_padding_ + (longlong)pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_58 = 1;
    }
    iStack_54 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_68,(UObject **)&FStack_60);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_78) &&
        ((FScriptContainerElement *)&local_78 <
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
    *(longlong *)(pFVar2 + lVar9 * 0x30) = local_78;
    *(FProperty **)(pFVar2 + lVar9 * 0x30 + 8) = pFStack_70;
    *(FName *)(pFVar2 + lVar9 * 0x30 + 0x10) = local_68;
    ((FName *)(pFVar2 + lVar9 * 0x30 + 0x10))[1] = FStack_60;
    *(ulonglong *)(pFVar2 + lVar9 * 0x30 + 0x20) =
         CONCAT44(iStack_54,CONCAT13(uStack_55,CONCAT12(bStack_56,CONCAT11(bStack_57,local_58))));
    *(longlong *)(pFVar2 + lVar9 * 0x30 + 0x20 + 8) = lStack_50;
  }
  pUVar1 = (UStruct *)this->_padding_;
  pFVar6 = ::FName::FName(&local_res10,0xc,L"LookAtWeight",FNAME_Add);
  pFVar7 = UStruct::FindPropertyByName(pUVar1,*pFVar6);
  if (pFVar7 != (FProperty *)0x0) {
    uStack_25 = 0;
    local_38.ComparisonIndex.Value = 0;
    local_38.Number = 0;
    FStack_30.ComparisonIndex.Value = 0;
    FStack_30.Number = 0;
    local_28 = 0;
    bVar4 = IsThisNotNull(pFVar7,"FField::GetFName");
    if (bVar4) {
      lVar10 = pFVar7->_padding_;
    }
    bStack_27 = ~(byte)(pFVar7->PropertyFlags >> 0x10) & 1;
    bStack_26 = (byte)(pFVar7->PropertyFlags >> 4) & 1;
    local_48 = lVar10;
    pFStack_40 = pFVar7;
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
    lStack_20 = (longlong)&this->_padding_ + (longlong)pFVar7->Offset_Internal;
    if ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) != 0) {
      pFVar7 = (FProperty *)pFVar7[1]._padding_;
      local_28 = 1;
    }
    iStack_24 = pFVar7->ElementSize * pFVar7->ArrayDim;
    RigVMPropertyUtils::GetTypeFromProperty(pFVar7,&local_38,(UObject **)&FStack_30);
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (((pFVar2 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
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
    *(longlong *)(pFVar2 + lVar10 * 0x30) = local_48;
    *(FProperty **)(pFVar2 + lVar10 * 0x30 + 8) = pFStack_40;
    *(FName *)(pFVar2 + lVar10 * 0x30 + 0x10) = local_38;
    ((FName *)(pFVar2 + lVar10 * 0x30 + 0x10))[1] = FStack_30;
    *(ulonglong *)(pFVar2 + lVar10 * 0x30 + 0x20) =
         CONCAT44(iStack_24,CONCAT13(uStack_25,CONCAT12(bStack_26,CONCAT11(bStack_27,local_28))));
    *(longlong *)(pFVar2 + lVar10 * 0x30 + 0x20 + 8) = lStack_20;
  }
  return __return_storage_ptr__;
}

// SetLookAtLocation @ 14b8e8560

void __thiscall
UDS_LookAtControlRig::SetLookAtLocation(UDS_LookAtControlRig *this,TVector<double> *param_1)

{
  double dVar1;
  
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->LookAtLocation).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->LookAtLocation).field0_0x0._s_0.Y = dVar1;
  (this->LookAtLocation).field0_0x0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
  return;
}

// SetLookAtWeight @ 14b8e8580

void __thiscall UDS_LookAtControlRig::SetLookAtWeight(UDS_LookAtControlRig *this,float param_1)

{
  this->LookAtWeight = param_1;
  return;
}

