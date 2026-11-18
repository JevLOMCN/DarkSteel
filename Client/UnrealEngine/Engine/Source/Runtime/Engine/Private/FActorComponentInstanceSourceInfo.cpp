// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 14773c0f0

UScriptStruct * __cdecl FActorComponentInstanceSourceInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FActorComponentInstanceSourceInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FActorComponentInstanceSourceInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FActorComponentInstanceSourceInfo,
                         (UObject *)pUVar1,L"ActorComponentInstanceSourceInfo");
  }
  return Z_Registration_Info_UScriptStruct_FActorComponentInstanceSourceInfo.OuterSingleton;
}

// FActorComponentInstanceSourceInfo @ 1477eadd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FActorComponentInstanceSourceInfo * __thiscall
FActorComponentInstanceSourceInfo::FActorComponentInstanceSourceInfo
          (FActorComponentInstanceSourceInfo *this,UActorComponent *param_1)

{
  EComponentCreationMethod EVar1;
  int iVar2;
  UObject *pUVar3;
  
  iVar2 = param_1->UCSSerializationIndex;
  EVar1 = param_1->CreationMethod;
  pUVar3 = UObject::GetArchetype((UObject *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->SourceComponentTemplate).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  this->SourceComponentCreationMethod = EVar1;
  this->SourceComponentTypeSerializedIndex = iVar2;
  return this;
}

// FActorComponentInstanceSourceInfo @ 1477eae60

FActorComponentInstanceSourceInfo * __thiscall
FActorComponentInstanceSourceInfo::FActorComponentInstanceSourceInfo
          (FActorComponentInstanceSourceInfo *this,TObjectPtr<UObject_const_> param_1,
          EComponentCreationMethod param_2,int param_3)

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)param_1.field0_0x0;
  (this->SourceComponentTemplate).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->SourceComponentCreationMethod = param_2;
  this->SourceComponentTypeSerializedIndex = param_3;
  return this;
}

// AddReferencedObjects @ 147804f60

void __thiscall
FActorComponentInstanceSourceInfo::AddReferencedObjects
          (FActorComponentInstanceSourceInfo *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000147804f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,this,0,0);
  return;
}

// MatchesComponent @ 147842d80

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FActorComponentInstanceSourceInfo::MatchesComponent
          (FActorComponentInstanceSourceInfo *this,UActorComponent *param_1)

{
  UObject *pUVar1;
  UObject *pUVar2;
  
  pUVar2 = UObject::GetArchetype((UObject *)param_1);
  pUVar1 = (this->SourceComponentTemplate).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UObject *)0x0) &&
       (*(longlong *)&pUVar1->field_0x10 == *(longlong *)&pUVar2->field_0x10)) &&
      ((pUVar1 == pUVar2 ||
       ((GIsReinstancing != (atomic<bool>)0x0 &&
        (*(longlong *)&((this->SourceComponentTemplate).field0_0x0.DebugPtr)->field_0x18 ==
         *(longlong *)&pUVar2->field_0x18)))))) &&
     (this->SourceComponentCreationMethod == param_1->CreationMethod)) {
    if (this->SourceComponentCreationMethod != UserConstructionScript) {
      return true;
    }
    if (-1 < this->SourceComponentTypeSerializedIndex) {
      return this->SourceComponentTypeSerializedIndex == param_1->UCSSerializationIndex;
    }
  }
  return false;
}

// MatchesComponent @ 147842e20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FActorComponentInstanceSourceInfo::MatchesComponent
          (FActorComponentInstanceSourceInfo *this,UActorComponent *param_1,UObject *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = (this->SourceComponentTemplate).field0_0x0.DebugPtr;
  if ((((pUVar1 != (UObject *)0x0) &&
       (*(longlong *)&pUVar1->field_0x10 == *(longlong *)&param_2->field_0x10)) &&
      ((pUVar1 == param_2 ||
       ((GIsReinstancing != (atomic<bool>)0x0 &&
        (*(longlong *)&((this->SourceComponentTemplate).field0_0x0.DebugPtr)->field_0x18 ==
         *(longlong *)&param_2->field_0x18)))))) &&
     (this->SourceComponentCreationMethod == param_1->CreationMethod)) {
    if (this->SourceComponentCreationMethod != UserConstructionScript) {
      return true;
    }
    if (-1 < this->SourceComponentTypeSerializedIndex) {
      return this->SourceComponentTypeSerializedIndex == param_1->UCSSerializationIndex;
    }
  }
  return false;
}

