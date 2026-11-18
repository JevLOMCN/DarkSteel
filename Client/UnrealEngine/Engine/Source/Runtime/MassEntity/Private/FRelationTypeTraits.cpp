// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 5

// FRelationTypeTraits @ 1471dbc70

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationTypeTraits * __thiscall
UE::Mass::Relations::FRelationTypeTraits::FRelationTypeTraits
          (FRelationTypeTraits *this,FRelationTypeTraits *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ERemovalPolicy EVar5;
  bool bVar6;
  EExternalMappingRequired EVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  
  this->RelationName = param_1->RelationName;
  (this->RelationTagType).Val = (param_1->RelationTagType).Val;
  (this->RelationFragmentType).Val = (param_1->RelationFragmentType).Val;
  this->bCreateRelationEntitiesInHierarchy = param_1->bCreateRelationEntitiesInHierarchy;
  uVar3 = *(undefined4 *)((longlong)&(param_1->RoleTraits).Elements[0].Element + 4);
  EVar5 = (param_1->RoleTraits).Elements[0].DestructionPolicy;
  bVar6 = (param_1->RoleTraits).Elements[0].bExclusive;
  EVar7 = (param_1->RoleTraits).Elements[0].RequiresExternalMapping;
  uVar8 = (param_1->RoleTraits).Elements[0].field_0xb;
  uVar4 = *(undefined4 *)&(param_1->RoleTraits).Elements[0].field_0xc;
  *(undefined4 *)&(this->RoleTraits).Elements[0].Element =
       *(undefined4 *)&(param_1->RoleTraits).Elements[0].Element;
  *(undefined4 *)((longlong)&(this->RoleTraits).Elements[0].Element + 4) = uVar3;
  (this->RoleTraits).Elements[0].DestructionPolicy = EVar5;
  (this->RoleTraits).Elements[0].bExclusive = bVar6;
  (this->RoleTraits).Elements[0].RequiresExternalMapping = EVar7;
  (this->RoleTraits).Elements[0].field_0xb = uVar8;
  *(undefined4 *)&(this->RoleTraits).Elements[0].field_0xc = uVar4;
  uVar3 = *(undefined4 *)((longlong)&(param_1->RoleTraits).Elements[1].Element + 4);
  EVar5 = (param_1->RoleTraits).Elements[1].DestructionPolicy;
  bVar6 = (param_1->RoleTraits).Elements[1].bExclusive;
  EVar7 = (param_1->RoleTraits).Elements[1].RequiresExternalMapping;
  uVar8 = (param_1->RoleTraits).Elements[1].field_0xb;
  uVar4 = *(undefined4 *)&(param_1->RoleTraits).Elements[1].field_0xc;
  *(undefined4 *)&(this->RoleTraits).Elements[1].Element =
       *(undefined4 *)&(param_1->RoleTraits).Elements[1].Element;
  *(undefined4 *)((longlong)&(this->RoleTraits).Elements[1].Element + 4) = uVar3;
  (this->RoleTraits).Elements[1].DestructionPolicy = EVar5;
  (this->RoleTraits).Elements[1].bExclusive = bVar6;
  (this->RoleTraits).Elements[1].RequiresExternalMapping = EVar7;
  (this->RoleTraits).Elements[1].field_0xb = uVar8;
  *(undefined4 *)&(this->RoleTraits).Elements[1].field_0xc = uVar4;
  this->bHierarchical = param_1->bHierarchical;
  (this->RegisteredGroupType).Identifier = (param_1->RegisteredGroupType).Identifier;
  lVar1 = *(longlong *)&param_1->RegisterObserversDelegate;
  *(undefined8 *)&(this->RegisterObserversDelegate).field_0x28 = 0;
  *(longlong *)&this->RegisterObserversDelegate = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->RegisterObserversDelegate).field_0x28;
    puVar9 = (undefined8 *)&(param_1->RegisterObserversDelegate).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar9 = puVar2;
    }
    (**(code **)*puVar9)();
  }
  (this->RelationEntityCreationObserverClass).WeakPtr =
       (param_1->RelationEntityCreationObserverClass).WeakPtr;
  (this->RelationEntityDestructionObserverClass).WeakPtr =
       (param_1->RelationEntityDestructionObserverClass).WeakPtr;
  (this->SubjectEntityDestructionObserverClass).WeakPtr =
       (param_1->SubjectEntityDestructionObserverClass).WeakPtr;
  (this->ObjectEntityDestructionObserverClass).WeakPtr =
       (param_1->ObjectEntityDestructionObserverClass).WeakPtr;
  ::FString::FString(&this->DebugInFix,&param_1->DebugInFix);
  return this;
}

// FRelationTypeTraits @ 1471dbd50

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationTypeTraits * __thiscall
UE::Mass::Relations::FRelationTypeTraits::FRelationTypeTraits
          (FRelationTypeTraits *this,FRelationTypeTraits *param_1,
          TNotNull<UScriptStruct_const_*> param_2)

{
  FRelationTypeTraits(this,param_1);
  (this->RelationTagType).Val = param_2.Val;
  return this;
}

// FRelationTypeTraits @ 1471dbd80

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FRelationTypeTraits * __thiscall
UE::Mass::Relations::FRelationTypeTraits::FRelationTypeTraits
          (FRelationTypeTraits *this,TNotNull<UScriptStruct_const_*> param_1)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  UClass *local_res8;
  
  (this->RelationName).ComparisonIndex = 0;
  (this->RelationName).Number = 0;
  (this->RelationTagType).Val = param_1.Val;
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar2 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar2,
                         L"MassRelationFragment");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton;
  (this->RelationFragmentType).Val =
       Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton;
  if (pUVar1 != (UScriptStruct *)0x0) {
    this->bCreateRelationEntitiesInHierarchy = false;
    (this->RoleTraits).Elements[0].Element = (UScriptStruct *)0x0;
    (this->RoleTraits).Elements[0].DestructionPolicy = CleanUp;
    (this->RoleTraits).Elements[0].bExclusive = true;
    (this->RoleTraits).Elements[0].RequiresExternalMapping = Default;
    (this->RoleTraits).Elements[1].Element = (UScriptStruct *)0x0;
    (this->RoleTraits).Elements[1].DestructionPolicy = CleanUp;
    (this->RoleTraits).Elements[1].bExclusive = true;
    (this->RoleTraits).Elements[1].RequiresExternalMapping = Default;
    this->bHierarchical = false;
    (this->RegisteredGroupType).Identifier = 0xffffffff;
    *(undefined8 *)&this->RegisterObserversDelegate = 0;
    *(undefined8 *)&(this->RegisterObserversDelegate).field_0x28 = 0;
    (this->RelationEntityCreationObserverClass).WeakPtr = (FWeakObjectPtr)0x0;
    (this->RelationEntityDestructionObserverClass).WeakPtr = (FWeakObjectPtr)0x0;
    (this->SubjectEntityDestructionObserverClass).WeakPtr = (FWeakObjectPtr)0x0;
    (this->ObjectEntityDestructionObserverClass).WeakPtr = (FWeakObjectPtr)0x0;
    (this->DebugInFix).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DebugInFix).Data.ArrayNum = 0;
    (this->DebugInFix).Data.ArrayMax = 0;
    local_res8 = UMassRelationEntityDestruction::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=
              (&(this->RelationEntityDestructionObserverClass).WeakPtr,(FObjectPtr)&local_res8);
    local_res8 = UMassRelationRoleDestruction::StaticClass();
    if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
      GC::MarkAsReachable((UObject *)local_res8);
    }
    FWeakObjectPtr::operator=
              (&(this->ObjectEntityDestructionObserverClass).WeakPtr,(FObjectPtr)&local_res8);
    (this->SubjectEntityDestructionObserverClass).WeakPtr =
         (this->ObjectEntityDestructionObserverClass).WeakPtr;
    return this;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// DebugDescribeRelation @ 14720def0

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

FString * __thiscall
UE::Mass::Relations::FRelationTypeTraits::DebugDescribeRelation
          (FRelationTypeTraits *this,FString *__return_storage_ptr__,FMassEntityHandle param_1,
          FMassEntityHandle param_2)

{
  FString local_38;
  FString local_28;
  
  ::FString::PrintfImpl(&local_28,L"i: %d sn: %d");
  ::FString::PrintfImpl(&local_38,L"i: %d sn: %d");
  ::FString::PrintfImpl(__return_storage_ptr__,L"[%s] %s [%s]");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// SetDebugInFix @ 14724b920

/* WARNING: Enum "ERemovalPolicy": Some values do not have unique names */
/* WARNING: Enum "EExternalMappingRequired": Some values do not have unique names */

void __thiscall
UE::Mass::Relations::FRelationTypeTraits::SetDebugInFix(FRelationTypeTraits *this,FString *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = &this->DebugInFix;
  if (pFVar1 != param_1) {
    pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar1->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->DebugInFix).Data.ArrayNum = (param_1->Data).ArrayNum;
    (this->DebugInFix).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
  }
  return;
}

