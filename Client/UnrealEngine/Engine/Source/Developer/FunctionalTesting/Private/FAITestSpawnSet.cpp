// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FunctionalTesting
// Functions: 6

// StaticStruct @ 148c75560

UScriptStruct * __cdecl FAITestSpawnSet::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAITestSpawnSet.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_FunctionalTesting();
    Z_Registration_Info_UScriptStruct_FAITestSpawnSet.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAITestSpawnSet,(UObject *)pUVar1,
                         L"AITestSpawnSet");
  }
  return Z_Registration_Info_UScriptStruct_FAITestSpawnSet.OuterSingleton;
}

// ForEachSpawnInfo @ 148c755a0

void __thiscall
FAITestSpawnSet::ForEachSpawnInfo
          (FAITestSpawnSet *this,TFunctionRef<void___cdecl(FAITestSpawnInfoBase_const_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SpawnInfoContainer).ArrayNum;
  pFVar3 = (this->SpawnInfoContainer).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->SpawnInfoContainer).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAITestSpawnInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    pFVar3 = pFVar3 + 0x48;
  }
  return;
}

// ForEachSpawnInfo @ 148c75610

void __thiscall
FAITestSpawnSet::ForEachSpawnInfo
          (FAITestSpawnSet *this,TFunctionRef<void___cdecl(FAITestSpawnInfoBase_&)> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->SpawnInfoContainer).ArrayNum;
  pFVar3 = (this->SpawnInfoContainer).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->SpawnInfoContainer).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FAITestSpawnInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,pFVar3);
    pFVar3 = pFVar3 + 0x48;
  }
  return;
}

// GetSpawnInfo @ 148c75680

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall FAITestSpawnSet::GetSpawnInfo(FAITestSpawnSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAITestSpawnInfoBase *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SpawnInfoContainer).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SpawnInfoContainer).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAITestSpawnInfoBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FAITestSpawnInfoBase *)
           ((this->SpawnInfoContainer).AllocatorInstance.Data + (longlong)param_1 * 0x48);
  }
  return (FAITestSpawnInfoBase *)0x0;
}

// GetSpawnInfo @ 148c75710

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAITestSpawnInfoBase * __thiscall FAITestSpawnSet::GetSpawnInfo(FAITestSpawnSet *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FAITestSpawnInfoBase *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->SpawnInfoContainer).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->SpawnInfoContainer).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FAITestSpawnInfoBase *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FAITestSpawnInfoBase *)
           ((this->SpawnInfoContainer).AllocatorInstance.Data + (longlong)param_1 * 0x48);
  }
  return (FAITestSpawnInfoBase *)0x0;
}

// IsValidSpawnInfoIndex @ 148c757a0

bool __thiscall FAITestSpawnSet::IsValidSpawnInfoIndex(FAITestSpawnSet *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < (this->SpawnInfoContainer).ArrayNum)) {
    return true;
  }
  return false;
}

