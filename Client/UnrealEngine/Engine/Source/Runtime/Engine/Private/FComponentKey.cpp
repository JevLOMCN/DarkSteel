// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 147ca9d20

UScriptStruct * __cdecl FComponentKey::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FComponentKey.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FComponentKey.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FComponentKey,(UObject *)pUVar1,L"ComponentKey");
  }
  return Z_Registration_Info_UScriptStruct_FComponentKey.OuterSingleton;
}

// FComponentKey @ 147cc30f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FComponentKey * __thiscall FComponentKey::FComponentKey(FComponentKey *this,USCS_Node *param_1)

{
  int iVar1;
  USimpleConstructionScript *this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_28;
  FString local_18;
  
  (this->OwnerClass).field0_0x0.DebugPtr = (UClass *)0x0;
  (this->SCSVariableName).ComparisonIndex = 0;
  (this->SCSVariableName).Number = 0;
  (this->AssociatedGuid).A = 0;
  (this->AssociatedGuid).B = 0;
  (this->AssociatedGuid).C = 0;
  (this->AssociatedGuid).D = 0;
  if (param_1 != (USCS_Node *)0x0) {
    this_00 = (USimpleConstructionScript *)param_1->_padding_;
    if (this_00 == (USimpleConstructionScript *)0x0) {
      pFVar6 = GetTypeName<USimpleConstructionScript>(&local_28);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar5 = Z_Construct_UClass_USimpleConstructionScript_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(this_00->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<USimpleConstructionScript>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)this_00);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    pUVar5 = USimpleConstructionScript::GetOwnerClass(this_00);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UClass *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    (this->OwnerClass).field0_0x0.DebugPtr = pUVar5;
    uVar2 = (param_1->VariableGuid).B;
    uVar3 = (param_1->VariableGuid).C;
    uVar4 = (param_1->VariableGuid).D;
    (this->AssociatedGuid).A = (param_1->VariableGuid).A;
    (this->AssociatedGuid).B = uVar2;
    (this->AssociatedGuid).C = uVar3;
    (this->AssociatedGuid).D = uVar4;
    this->SCSVariableName = param_1->InternalVariableName;
  }
  return this;
}

// FindSCSNode @ 147cf7090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USCS_Node * __thiscall FComponentKey::FindSCSNode(FComponentKey *this)

{
  USimpleConstructionScript *this_00;
  bool bVar1;
  UClass *pUVar2;
  USCS_Node *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  ForAnyElementType local_28;
  undefined8 uStack_20;
  FString local_18;
  
  if ((((this->OwnerClass).field0_0x0.DebugPtr != (UClass *)0x0) &&
      (this->SCSVariableName != (FName)0x0)) &&
     ((((this->AssociatedGuid).D != 0 || (this->AssociatedGuid).C != 0) ||
      (this->AssociatedGuid).B != 0) || (this->AssociatedGuid).A != 0)) {
    pUVar2 = Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if ((!bVar1) || (pUVar2 = (this->OwnerClass).field0_0x0.DebugPtr, pUVar2 == (UClass *)0x0)) {
      pFVar4 = GetTypeName<UBlueprintGeneratedClass>((FString *)&local_28);
      pwVar5 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UClass>(&local_18,(this->OwnerClass).field0_0x0.DebugPtr);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
    this_00 = (USimpleConstructionScript *)pUVar2[1]._padding_;
    if (this_00 != (USimpleConstructionScript *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this_00);
      }
      local_28.Data = *(FScriptContainerElement **)&this->AssociatedGuid;
      uStack_20._0_4_ = (this->AssociatedGuid).C;
      uStack_20._4_4_ = (this->AssociatedGuid).D;
      pUVar3 = USimpleConstructionScript::FindSCSNodeByGuid(this_00,(FGuid *)&local_28);
      return pUVar3;
    }
  }
  return (USCS_Node *)0x0;
}

// GetOriginalTemplate @ 147d0a130

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UActorComponent * __thiscall FComponentKey::GetOriginalTemplate(FComponentKey *this,FName *param_1)

{
  USCS_Node *pUVar1;
  
  if ((this->SCSVariableName != (FName)0x0) &&
     ((((this->AssociatedGuid).D != 0 || (this->AssociatedGuid).C != 0) ||
      (this->AssociatedGuid).B != 0) || (this->AssociatedGuid).A != 0)) {
    pUVar1 = FindSCSNode(this);
    if (pUVar1 != (USCS_Node *)0x0) {
      return (pUVar1->ComponentTemplate).field0_0x0.DebugPtr;
    }
  }
  return (UActorComponent *)0x0;
}

// Match @ 147d1ac70

bool __thiscall FComponentKey::Match(FComponentKey *this,FComponentKey *param_1)

{
  if (((this->OwnerClass).field0_0x0.DebugPtr == (param_1->OwnerClass).field0_0x0.DebugPtr) &&
     ((((this->AssociatedGuid).D == (param_1->AssociatedGuid).D &&
       (this->AssociatedGuid).C == (param_1->AssociatedGuid).C) &&
      (this->AssociatedGuid).B == (param_1->AssociatedGuid).B) &&
      (param_1->AssociatedGuid).A == (this->AssociatedGuid).A)) {
    return true;
  }
  return false;
}

// RefreshVariableName @ 147d20000

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FComponentKey::RefreshVariableName(FComponentKey *this)

{
  USCS_Node *pUVar1;
  FName FVar2;
  
  if ((((this->OwnerClass).field0_0x0.DebugPtr != (UClass *)0x0) &&
      ((((this->AssociatedGuid).D != 0 || (this->AssociatedGuid).C != 0) ||
       (this->AssociatedGuid).B != 0) || (this->AssociatedGuid).A != 0)) &&
     (this->SCSVariableName != (FName)0x0)) {
    pUVar1 = FindSCSNode(this);
    FVar2.ComparisonIndex.Value = 0;
    FVar2.Number = 0;
    if (pUVar1 != (USCS_Node *)0x0) {
      FVar2 = pUVar1->InternalVariableName;
    }
    if (FVar2 != this->SCSVariableName) {
      this->SCSVariableName = FVar2;
      return true;
    }
  }
  return false;
}

