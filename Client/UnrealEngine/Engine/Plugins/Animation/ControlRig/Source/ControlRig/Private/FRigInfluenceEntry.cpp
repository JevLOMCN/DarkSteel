// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a37b910

UScriptStruct * __cdecl FRigInfluenceEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigInfluenceEntry.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigInfluenceEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigInfluenceEntry,(UObject *)pUVar1,
                         L"RigInfluenceEntry");
  }
  return Z_Registration_Info_UScriptStruct_FRigInfluenceEntry.OuterSingleton;
}

// OnKeyRemoved @ 14a430470

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigInfluenceEntry::OnKeyRemoved(FRigInfluenceEntry *this,FRigElementKey *param_1)

{
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::Remove(&this->AffectedList,param_1);
  return;
}

// OnKeyRenamed @ 14a430660

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigInfluenceEntry::OnKeyRenamed
          (FRigInfluenceEntry *this,FRigElementKey *param_1,FRigElementKey *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar2 = (this->AffectedList).ArrayNum;
  pFVar3 = (this->AffectedList).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)iVar2 * 0xc;
  while( true ) {
    if ((this->AffectedList).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if ((*(FName *)(pFVar3 + 4) == param_1->Name) &&
       (*pFVar3 == (FScriptContainerElement)param_1->Type)) {
      *(undefined8 *)pFVar3 = *(undefined8 *)param_2;
      *(uint *)(pFVar3 + 8) = (param_2->Name).Number;
    }
    pFVar3 = pFVar3 + 0xc;
  }
  return;
}

