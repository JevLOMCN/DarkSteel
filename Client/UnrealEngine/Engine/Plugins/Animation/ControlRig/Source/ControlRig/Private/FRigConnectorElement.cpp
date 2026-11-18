// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// StaticStruct @ 14a2c4940

UScriptStruct * __cdecl FRigConnectorElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorElement,(UObject *)pUVar1,
                         L"RigConnectorElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton;
}

// ~FRigConnectorElement @ 14a2de930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigConnectorElement::~FRigConnectorElement(FRigConnectorElement *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigConnectorElement__6B_;
  DestructItems<FRigConnectionRuleStash,int>
            ((FRigConnectionRuleStash *)(this->Settings).Rules.AllocatorInstance.Data,
             (this->Settings).Rules.ArrayNum);
  pFVar1 = (this->Settings).Rules.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Settings).Description.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigBaseElement__6B_;
  if ((URigHierarchy *)this->_padding_ != (URigHierarchy *)0x0) {
    URigHierarchy::RemoveAllMetadataForElement
              ((URigHierarchy *)this->_padding_,(FRigBaseElement *)this);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// CopyFrom @ 14a2f8930

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigConnectorElement::CopyFrom(FRigConnectorElement *this,FRigBaseElement *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 != (FRigBaseElement *)0x0) {
    bVar2 = FRigBaseElement::IsA<FRigConnectorElement>(param_1);
    if (bVar2) goto LAB_14a2f8979;
  }
  param_1 = (FRigBaseElement *)0x0;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Element",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\ControlRig\\Source\\ControlRig\\Public\\Rigs\\RigHierarchyElements.h"
                     ,0x3f1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_14a2f8979:
  ::FString::operator=(&(this->Settings).Description,(FString *)(param_1 + 1));
  (this->Settings).Type = param_1[1].Key.Type;
  (this->Settings).bOptional = (bool)param_1[1].Key.field_0x1;
  (this->Settings).bIsArray = (bool)param_1[1].Key.field_0x2;
  (this->Settings).bPostConstruction = (bool)param_1[1].Key.field_0x3;
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_>::operator=
            (&(this->Settings).Rules,
             (TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_> *)
             &param_1[1].Key.Name.Number);
  return;
}

// GetConnectorState @ 14a30b420

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigConnectorState * __thiscall
FRigConnectorElement::GetConnectorState
          (FRigConnectorElement *this,FRigConnectorState *__return_storage_ptr__,
          URigHierarchy *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FCachedRigElement> FVar4;
  FRigConnectorState *pFVar5;
  
  (__return_storage_ptr__->Name).ComparisonIndex = 0;
  (__return_storage_ptr__->Name).Number = 0;
  (__return_storage_ptr__->ResolvedTarget).Type = None;
  (__return_storage_ptr__->ResolvedTarget).Name.ComparisonIndex = 0;
  (__return_storage_ptr__->ResolvedTarget).Name.Number = 0;
  (__return_storage_ptr__->Settings).Description.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Settings).Description.Data.ArrayNum = 0;
  (__return_storage_ptr__->Settings).Description.Data.ArrayMax = 0;
  (__return_storage_ptr__->Settings).Type = Primary;
  (__return_storage_ptr__->Settings).bOptional = false;
  (__return_storage_ptr__->Settings).bIsArray = false;
  (__return_storage_ptr__->Settings).bPostConstruction = false;
  (__return_storage_ptr__->Settings).Rules.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Settings).Rules.ArrayNum = 0;
  (__return_storage_ptr__->Settings).Rules.ArrayMax = 0;
  __return_storage_ptr__->Name = *(FName *)((longlong)&this->_padding_ + 4);
  if (((((char)this->_padding_ == '@') &&
       (param_1->ElementKeyRedirector != (FRigElementKeyRedirector *)0x0)) &&
      (FVar4 = (ForElementType<FCachedRigElement>)
               TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
               ::Find((TMapBase<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FCachedRigElement,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                       *)param_1->ElementKeyRedirector,(FRigElementKey *)&this->_padding_),
      FVar4 != (ForElementType<FCachedRigElement>)0x0)) && (*(int *)((longlong)FVar4 + 0x28) != 0))
  {
    if ((*(int *)((longlong)FVar4 + 0x28) < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRigConnectorState *)(*pcVar2)();
      return pFVar5;
    }
    if (*(ForElementType<FCachedRigElement> *)((longlong)FVar4 + 0x20) !=
        (ForElementType<FCachedRigElement>)0x0) {
      FVar4 = *(ForElementType<FCachedRigElement> *)((longlong)FVar4 + 0x20);
    }
  }
  else {
    FVar4 = (ForElementType<FCachedRigElement>)&this->_padding_;
  }
  uVar1 = *(undefined8 *)FVar4;
  (__return_storage_ptr__->ResolvedTarget).Type = (char)uVar1;
  *(int3 *)&(__return_storage_ptr__->ResolvedTarget).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
  (__return_storage_ptr__->ResolvedTarget).Name.ComparisonIndex =
       (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
  (__return_storage_ptr__->ResolvedTarget).Name.Number = *(uint *)((longlong)FVar4 + 8);
  ::FString::operator=
            (&(__return_storage_ptr__->Settings).Description,&(this->Settings).Description);
  (__return_storage_ptr__->Settings).Type = (this->Settings).Type;
  (__return_storage_ptr__->Settings).bOptional = (this->Settings).bOptional;
  (__return_storage_ptr__->Settings).bIsArray = (this->Settings).bIsArray;
  (__return_storage_ptr__->Settings).bPostConstruction = (this->Settings).bPostConstruction;
  TArray<FRigConnectionRuleStash,TSizedDefaultAllocator<32>_>::operator=
            (&(__return_storage_ptr__->Settings).Rules,&(this->Settings).Rules);
  return __return_storage_ptr__;
}

// GetElementTypeIndex @ 14a30ed40

int __thiscall FRigConnectorElement::GetElementTypeIndex(FRigConnectorElement *this)

{
  return 9;
}

// GetScriptStruct @ 14a317e40

UScriptStruct * __thiscall FRigConnectorElement::GetScriptStruct(FRigConnectorElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectorElement,(UObject *)pUVar1,
                         L"RigConnectorElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectorElement.OuterSingleton;
}

// Load @ 14a32ad30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigConnectorElement::Load
          (FRigConnectorElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  FRigBaseElement::Load((FRigBaseElement *)this,param_1,param_2);
  if (param_2->SerializationPhase == StaticData) {
    FRigConnectorSettings::Load(&this->Settings,param_1);
  }
  return;
}

// Save @ 14a344ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigConnectorElement::Save
          (FRigConnectorElement *this,FArchive *param_1,FRigHierarchySerializationSettings *param_2)

{
  if (param_2->SerializationPhase == StaticData) {
    ::operator<<(param_1,(FRigElementKey *)&this->_padding_);
  }
  if (param_2->SerializationPhase == StaticData) {
    FRigConnectorSettings::Save(&this->Settings,param_1);
  }
  return;
}

