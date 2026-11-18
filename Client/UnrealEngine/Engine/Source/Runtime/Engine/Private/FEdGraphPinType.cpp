// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// StaticStruct @ 147b28de0

UScriptStruct * __cdecl FEdGraphPinType::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FEdGraphPinType,(UObject *)pUVar1,
                         L"EdGraphPinType");
  }
  return Z_Registration_Info_UScriptStruct_FEdGraphPinType.OuterSingleton;
}

// FEdGraphPinType @ 147b393f0

FEdGraphPinType * __thiscall FEdGraphPinType::FEdGraphPinType(FEdGraphPinType *this)

{
  TWeakObjectPtr<UObject,FWeakObjectPtr> *this_00;
  undefined1 *puVar1;
  undefined8 local_res8;
  
  (this->PinCategory).ComparisonIndex = 0;
  (this->PinCategory).Number = 0;
  (this->PinSubCategory).ComparisonIndex = 0;
  (this->PinSubCategory).Number = 0;
  local_res8 = 0;
  (this->PinSubCategoryObject).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->PinSubCategoryObject).WeakPtr,(FObjectPtr)&local_res8);
  this_00 = &(this->PinValueType).TerminalSubCategoryObject;
  (this->PinSubCategoryMemberReference).MemberParent.field0_0x0.DebugPtr = (UObject *)0x0;
  (this->PinSubCategoryMemberReference).MemberName.ComparisonIndex = 0;
  (this->PinSubCategoryMemberReference).MemberName.Number = 0;
  (this->PinSubCategoryMemberReference).MemberGuid.A = 0;
  (this->PinSubCategoryMemberReference).MemberGuid.B = 0;
  (this->PinSubCategoryMemberReference).MemberGuid.C = 0;
  (this->PinSubCategoryMemberReference).MemberGuid.D = 0;
  (this->PinValueType).TerminalCategory.ComparisonIndex = 0;
  (this->PinValueType).TerminalCategory.Number = 0;
  (this->PinValueType).TerminalSubCategory.ComparisonIndex = 0;
  (this->PinValueType).TerminalSubCategory.Number = 0;
  this_00->WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&this_00->WeakPtr,(FObjectPtr)&local_res8);
  (this->PinValueType).bTerminalIsConst = false;
  (this->PinValueType).bTerminalIsWeakPointer = false;
  (this->PinValueType).bTerminalIsUObjectWrapper = false;
  this->bIsArray_DEPRECATED = '\0';
  this->bSerializeAsSinglePrecisionFloat = '\0';
  this->bIsUObjectWrapper = '\0';
  this->bIsWeakPointer = '\0';
  this->bIsConst = '\0';
  this->bIsReference = '\0';
  this->ContainerType = None;
  return this;
}

// operator= @ 147b3de70

FEdGraphPinType * __thiscall
FEdGraphPinType::operator=(FEdGraphPinType *this,FEdGraphPinType *param_1)

{
  undefined1 uVar1;
  UObject *pUVar2;
  FName FVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  byte bVar10;
  
  this->PinCategory = param_1->PinCategory;
  this->PinSubCategory = param_1->PinSubCategory;
  (this->PinSubCategoryObject).WeakPtr = (param_1->PinSubCategoryObject).WeakPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar2 = (param_1->PinSubCategoryMemberReference).MemberParent.field0_0x0.DebugPtr,
     pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  (this->PinSubCategoryMemberReference).MemberParent.field0_0x0 =
       (param_1->PinSubCategoryMemberReference).MemberParent.field0_0x0;
  (this->PinSubCategoryMemberReference).MemberName =
       (param_1->PinSubCategoryMemberReference).MemberName;
  uVar4 = (param_1->PinSubCategoryMemberReference).MemberGuid.B;
  uVar5 = (param_1->PinSubCategoryMemberReference).MemberGuid.C;
  uVar6 = (param_1->PinSubCategoryMemberReference).MemberGuid.D;
  (this->PinSubCategoryMemberReference).MemberGuid.A =
       (param_1->PinSubCategoryMemberReference).MemberGuid.A;
  (this->PinSubCategoryMemberReference).MemberGuid.B = uVar4;
  (this->PinSubCategoryMemberReference).MemberGuid.C = uVar5;
  (this->PinSubCategoryMemberReference).MemberGuid.D = uVar6;
  FVar3 = (param_1->PinValueType).TerminalSubCategory;
  (this->PinValueType).TerminalCategory = (param_1->PinValueType).TerminalCategory;
  (this->PinValueType).TerminalSubCategory = FVar3;
  (this->PinValueType).TerminalSubCategoryObject.WeakPtr =
       (param_1->PinValueType).TerminalSubCategoryObject.WeakPtr;
  bVar7 = (param_1->PinValueType).bTerminalIsWeakPointer;
  bVar8 = (param_1->PinValueType).bTerminalIsUObjectWrapper;
  uVar9 = (param_1->PinValueType).field_0x1b;
  (this->PinValueType).bTerminalIsConst = (param_1->PinValueType).bTerminalIsConst;
  (this->PinValueType).bTerminalIsWeakPointer = bVar7;
  (this->PinValueType).bTerminalIsUObjectWrapper = bVar8;
  (this->PinValueType).field_0x1b = uVar9;
  this->ContainerType = param_1->ContainerType;
  bVar10 = (this->bIsArray_DEPRECATED ^ param_1->bIsArray_DEPRECATED) & 1 ^ this->field_0x55;
  this->field_0x55 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x55) & 2 ^ bVar10;
  this->field_0x55 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x55) & 4 ^ bVar10;
  this->field_0x55 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x55) & 8 ^ bVar10;
  this->field_0x55 = bVar10;
  bVar10 = (bVar10 ^ param_1->field_0x55) & 0x10 ^ bVar10;
  this->field_0x55 = bVar10;
  this->field_0x55 = (bVar10 ^ param_1->field_0x55) & 0x20 ^ bVar10;
  return this;
}

// GetPinTypeForTerminalType @ 147b6a8b0

FEdGraphPinType * __cdecl
FEdGraphPinType::GetPinTypeForTerminalType
          (FEdGraphPinType *__return_storage_ptr__,FEdGraphTerminalType *param_1)

{
  FEdGraphPinType(__return_storage_ptr__);
  __return_storage_ptr__->PinCategory = param_1->TerminalCategory;
  __return_storage_ptr__->PinSubCategory = param_1->TerminalSubCategory;
  (__return_storage_ptr__->PinSubCategoryObject).WeakPtr =
       (param_1->TerminalSubCategoryObject).WeakPtr;
  return __return_storage_ptr__;
}

// GetTerminalTypeForContainer @ 147b70ea0

FEdGraphPinType * __cdecl
FEdGraphPinType::GetTerminalTypeForContainer
          (FEdGraphPinType *__return_storage_ptr__,FEdGraphPinType *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  UObject *pUVar3;
  code *pcVar4;
  FName FVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  undefined1 uVar10;
  bool bVar11;
  FEdGraphPinType *pFVar12;
  byte bVar13;
  
  if (param_1->ContainerType == None) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<_1606850396188311184>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\EdGraph\\EdGraphPin.cpp"
                        ,0x170,"ContainerType.IsContainer()");
    if (bVar11) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FEdGraphPinType *)(*pcVar4)();
      return pFVar12;
    }
  }
  __return_storage_ptr__->PinCategory = param_1->PinCategory;
  __return_storage_ptr__->PinSubCategory = param_1->PinSubCategory;
  (__return_storage_ptr__->PinSubCategoryObject).WeakPtr = (param_1->PinSubCategoryObject).WeakPtr;
  pUVar3 = (param_1->PinSubCategoryMemberReference).MemberParent.field0_0x0.DebugPtr;
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberParent.field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberName =
       (param_1->PinSubCategoryMemberReference).MemberName;
  uVar6 = (param_1->PinSubCategoryMemberReference).MemberGuid.B;
  uVar7 = (param_1->PinSubCategoryMemberReference).MemberGuid.C;
  uVar8 = (param_1->PinSubCategoryMemberReference).MemberGuid.D;
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberGuid.A =
       (param_1->PinSubCategoryMemberReference).MemberGuid.A;
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberGuid.B = uVar6;
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberGuid.C = uVar7;
  (__return_storage_ptr__->PinSubCategoryMemberReference).MemberGuid.D = uVar8;
  FVar5 = (param_1->PinValueType).TerminalSubCategory;
  (__return_storage_ptr__->PinValueType).TerminalCategory = (param_1->PinValueType).TerminalCategory
  ;
  (__return_storage_ptr__->PinValueType).TerminalSubCategory = FVar5;
  (__return_storage_ptr__->PinValueType).TerminalSubCategoryObject.WeakPtr =
       (param_1->PinValueType).TerminalSubCategoryObject.WeakPtr;
  bVar11 = (param_1->PinValueType).bTerminalIsWeakPointer;
  bVar9 = (param_1->PinValueType).bTerminalIsUObjectWrapper;
  uVar10 = (param_1->PinValueType).field_0x1b;
  (__return_storage_ptr__->PinValueType).bTerminalIsConst = (param_1->PinValueType).bTerminalIsConst
  ;
  (__return_storage_ptr__->PinValueType).bTerminalIsWeakPointer = bVar11;
  (__return_storage_ptr__->PinValueType).bTerminalIsUObjectWrapper = bVar9;
  (__return_storage_ptr__->PinValueType).field_0x1b = uVar10;
  __return_storage_ptr__->ContainerType = param_1->ContainerType;
  bVar13 = (__return_storage_ptr__->bIsArray_DEPRECATED ^ param_1->bIsArray_DEPRECATED) & 1 ^
           __return_storage_ptr__->field_0x55;
  __return_storage_ptr__->field_0x55 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x55) & 2 ^ bVar13;
  __return_storage_ptr__->field_0x55 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x55) & 4 ^ bVar13;
  __return_storage_ptr__->field_0x55 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x55) & 8 ^ bVar13;
  __return_storage_ptr__->field_0x55 = bVar13;
  bVar13 = (bVar13 ^ param_1->field_0x55) & 0x10 ^ bVar13;
  __return_storage_ptr__->field_0x55 = bVar13;
  bVar2 = param_1->field_0x55;
  __return_storage_ptr__->ContainerType = None;
  __return_storage_ptr__->field_0x55 = (bVar13 ^ bVar2) & 0x20 ^ bVar13;
  return __return_storage_ptr__;
}

// PostSerialize @ 147b7dc10

void __thiscall FEdGraphPinType::PostSerialize(FEdGraphPinType *this,FArchive *param_1)

{
  if ((*(int *)&param_1->field_0x40 < 0x144) && (this->bIsArray_DEPRECATED != 0)) {
    this->ContainerType = Array;
  }
  return;
}

// Serialize @ 147b888b0

bool __thiscall FEdGraphPinType::Serialize(FEdGraphPinType *this,FArchive *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  EPinContainerType *pEVar6;
  ulonglong *puVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 uVar11;
  EPinContainerType EVar12;
  bool bVar13;
  int iVar14;
  UField *this_00;
  UClass *pUVar15;
  ForAnyElementType FVar16;
  byte bVar17;
  bool bVar18;
  bool local_res10 [8];
  bool local_res18 [8];
  uint local_res20 [2];
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  FWeakObjectPtr local_98;
  FString local_90;
  FString local_80;
  UObject *local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  UObject *local_48;
  undefined8 local_40;
  
  if (*(int *)&param_1->field_0x40 < 0x144) {
    return false;
  }
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFrameworkObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar14 < 0x1f) {
    local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_80.Data.ArrayNum = 0;
    local_80.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_80);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_80.Data.ArrayNum != 0) {
      FVar16.Data = local_80.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_68,(wchar_t *)FVar16.Data);
    this->PinCategory = local_68;
    local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90.Data.ArrayNum = 0;
    local_90.Data.ArrayMax = 0;
    ::operator<<(param_1,&local_90);
    FVar16.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar16.Data = local_90.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_60,(wchar_t *)FVar16.Data);
    this->PinSubCategory = local_60;
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_80.Data.AllocatorInstance.Data);
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->PinSubCategory);
  }
  if (*(int *)&param_1->field_0x40 < 0x202) {
    bVar10 = ::FName::Equals(this->PinCategory,L"asset");
    if (bVar10) {
      ::FName::FName(&local_58,L"softobject");
    }
    else {
      bVar10 = ::FName::Equals(this->PinCategory,L"assetclass");
      if (!bVar10) goto LAB_147b88a4e;
      ::FName::FName(&local_50,L"softclass");
      local_58 = local_50;
    }
    this->PinCategory = local_58;
  }
LAB_147b88a4e:
  if ((((param_1->field_0x2b & 1) == 0) || ((param_1->field_0x2b & 2) != 0)) ||
     ((param_1->field_0x29 & 1) != 0)) {
    local_70 = FWeakObjectPtr::Get(&(this->PinSubCategoryObject).WeakPtr,true);
    (**(code **)(*(longlong *)param_1 + 0x168))(param_1,&local_70);
    if (((param_1->field_0x28 & 1) != 0) || ((param_1->field_0x2b & 2) != 0)) {
      local_48 = local_70;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_70 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_70);
      }
      FWeakObjectPtr::operator=(&(this->PinSubCategoryObject).WeakPtr,(FObjectPtr)&local_48);
    }
  }
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FFrameworkObjectVersion::GUID);
  if (iVar14 < 0x1a) {
    bVar18 = false;
    bVar10 = false;
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FBlueprintsObjectVersion::GUID);
    iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FBlueprintsObjectVersion::GUID);
    if (5 < iVar14) {
      puVar7 = *(ulonglong **)&param_1->field_0x8;
      puVar1 = (uint *)*puVar7 + 1;
      if ((uint *)puVar7[1] < puVar1) {
        local_a4 = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a4,4);
        if (1 < local_a4) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar5 = local_a4;
        if ((param_1->field_0x28 & 1) != 0) goto LAB_147b88ba5;
      }
      else {
        uVar5 = *(uint *)*puVar7;
        *puVar7 = (ulonglong)puVar1;
LAB_147b88ba5:
        bVar18 = uVar5 != 0;
        if (bVar18) {
          ::operator<<(param_1,&this->PinValueType);
        }
      }
      puVar7 = *(ulonglong **)&param_1->field_0x8;
      puVar1 = (uint *)*puVar7 + 1;
      if ((uint *)puVar7[1] < puVar1) {
        local_a0 = 0;
        (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a0,4);
        if (1 < local_a0) {
          FArchiveState::SetError((FArchiveState *)param_1);
        }
        uVar5 = local_a0;
        if ((param_1->field_0x28 & 1) == 0) goto LAB_147b88c0b;
      }
      else {
        uVar5 = *(uint *)*puVar7;
        *puVar7 = (ulonglong)puVar1;
      }
      bVar10 = uVar5 != 0;
    }
LAB_147b88c0b:
    puVar7 = *(ulonglong **)&param_1->field_0x8;
    puVar1 = (uint *)*puVar7 + 1;
    if ((uint *)puVar7[1] < puVar1) {
      local_9c = 0;
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_9c,4);
      if (1 < local_9c) {
        FArchiveState::SetError((FArchiveState *)param_1);
      }
      bVar17 = param_1->field_0x28;
      uVar5 = local_9c;
    }
    else {
      uVar5 = *(uint *)*puVar7;
      *puVar7 = (ulonglong)puVar1;
      bVar17 = param_1->field_0x28;
    }
    if ((bVar17 & 1) != 0) {
      if (uVar5 == 0) {
        if (bVar10) {
          if ((bVar18) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!bInIsMap",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                                  ,0xd6,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            uVar11 = (*pcVar8)();
            return (bool)uVar11;
          }
          EVar12 = Set;
        }
        else {
          EVar12 = None;
          if (bVar18) {
            EVar12 = Map;
          }
        }
      }
      else {
        if (((bVar10) || (bVar18)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bInIsSet && !bInIsMap",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\EdGraph\\EdGraphPin.h"
                                ,0xd1,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          uVar11 = (*pcVar8)();
          return (bool)uVar11;
        }
        EVar12 = Array;
      }
      this->ContainerType = EVar12;
    }
  }
  else {
    pEVar6 = (EPinContainerType *)**(undefined8 **)&param_1->field_0x8;
    if ((EPinContainerType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar6 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ContainerType,1);
    }
    else {
      this->ContainerType = *pEVar6;
      **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
    }
    if (this->ContainerType == Map) {
      ::operator<<(param_1,&this->PinValueType);
    }
  }
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  bVar10 = this->bIsWeakPointer;
  bVar18 = this->bIsReference;
  puVar1 = (uint *)*puVar7 + 1;
  if ((uint *)puVar7[1] < puVar1) {
    local_res20[0] = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_res20[0] = (uint)bVar18;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
    if (1 < local_res20[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar5 = local_res20[0];
    if ((param_1->field_0x28 & 1) == 0) goto LAB_147b88d85;
  }
  else {
    uVar5 = *(uint *)*puVar7;
    *puVar7 = (ulonglong)puVar1;
  }
  bVar18 = uVar5 != 0;
LAB_147b88d85:
  puVar7 = *(ulonglong **)&param_1->field_0x8;
  piVar2 = (int *)*puVar7 + 1;
  if ((int *)puVar7[1] < piVar2) {
    local_a8 = 0;
    if ((param_1->field_0x28 & 1) == 0) {
      local_a8 = (uint)bVar10;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&local_a8,4);
    if (1 < local_a8) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    if ((param_1->field_0x28 & 1) != 0) {
      bVar10 = local_a8 != 0;
    }
  }
  else {
    bVar10 = *(int *)*puVar7 != 0;
    *puVar7 = (ulonglong)piVar2;
  }
  if (*(int *)&param_1->field_0x40 < 0x163) {
    if (((((param_1->field_0x28 & 1) != 0) && ((param_1->field_0x29 & 1) != 0)) &&
        ((bVar13 = ::FName::Equals(this->PinCategory,L"delegate"), bVar13 ||
         (bVar13 = ::FName::Equals(this->PinCategory,L"mcdelegate"), bVar13)))) &&
       (this_00 = (UField *)FWeakObjectPtr::Get(&(this->PinSubCategoryObject).WeakPtr),
       this_00 != (UField *)0x0)) {
      pUVar15 = Z_Construct_UClass_UFunction_NoRegister();
      iVar14 = (int)pUVar15->_padding_;
      if ((iVar14 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar14 * 8) ==
          &pUVar15->_padding_)) {
        uVar9 = *(undefined4 *)((longlong)&this_00->_padding_ + 4);
        (this->PinSubCategoryMemberReference).MemberName.ComparisonIndex =
             (FNameEntryId)*(undefined4 *)&this_00->_padding_;
        (this->PinSubCategoryMemberReference).MemberName.Number = uVar9;
        pUVar15 = UField::GetOwnerClass(this_00);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UClass *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar15);
        }
        (this->PinSubCategoryMemberReference).MemberParent.field0_0x0.DebugPtr = (UObject *)pUVar15;
        local_98.ObjectIndex = 0;
        local_98.ObjectSerialNumber = 0;
        local_40 = 0;
        FWeakObjectPtr::operator=(&local_98,(FObjectPtr)&local_40);
        (this->PinSubCategoryObject).WeakPtr = local_98;
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->PinSubCategoryMemberReference);
    (**(code **)(*(longlong *)param_1 + 0x178))
              (param_1,&(this->PinSubCategoryMemberReference).MemberName);
    ::operator<<(param_1,&(this->PinSubCategoryMemberReference).MemberGuid);
  }
  local_res10[0] = this->bIsConst;
  if (0x1c7 < *(int *)&param_1->field_0x40) {
    ::operator<<(param_1,local_res10);
  }
  bVar13 = local_res10[0];
  bVar17 = this->bIsUObjectWrapper;
  local_res18[0] = (bool)bVar17;
  iVar14 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (0x1f < iVar14) {
    ::operator<<(param_1,local_res18);
    bVar17 = local_res18[0];
  }
  if ((param_1->field_0x28 & 1) != 0) {
    puVar4 = &this->field_0x55;
    this->bIsReference = bVar18;
    this->bIsUObjectWrapper = bVar17;
    this->bIsWeakPointer = bVar10;
    this->bIsConst = bVar13;
  }
  return true;
}

