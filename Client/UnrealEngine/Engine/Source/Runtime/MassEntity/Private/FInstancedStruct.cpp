// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// GetMutable<FMassRelationFragment> @ 1471c8960

FMassRelationFragment * __thiscall
FInstancedStruct::GetMutable<FMassRelationFragment>(FInstancedStruct *this)

{
  int iVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FMassRelationFragment *pFVar5;
  UPackage *pUVar6;
  
  pFVar5 = (FMassRelationFragment *)this->StructMemory;
  pUVar2 = (this->ScriptStruct).field0_0x0.DebugPtr;
  if ((pFVar5 == (FMassRelationFragment *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Memory != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd1,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMassRelationFragment *)(*pcVar3)();
    return pFVar5;
  }
  if ((pUVar2 == (UScriptStruct *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Struct != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                         ,0xd2,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMassRelationFragment *)(*pcVar3)();
    return pFVar5;
  }
  if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar6 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassRelationFragment,(UObject *)pUVar6,
                         L"MassRelationFragment");
    if (Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton ==
        (UScriptStruct *)0x0) goto LAB_1471c8a1e;
  }
  iVar1 = (int)(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_;
  if (((int)pUVar2->_padding_ < iVar1) ||
     ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) !=
      &(Z_Registration_Info_UScriptStruct_FMassRelationFragment.OuterSingleton)->_padding_)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4) {
    return pFVar5;
  }
LAB_1471c8a1e:
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Struct->IsChildOf(TBaseStructure<T>::Get())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\StructUtils\\InstancedStruct.h"
                     ,0xd3,L"");
  if (!bVar4) {
    return pFVar5;
  }
  pcVar3 = (code *)swi(3);
  pFVar5 = (FMassRelationFragment *)(*pcVar3)();
  return pFVar5;
}

