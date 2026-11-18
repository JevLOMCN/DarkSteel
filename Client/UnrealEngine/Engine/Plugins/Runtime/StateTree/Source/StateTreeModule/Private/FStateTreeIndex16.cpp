// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 3

// FStateTreeIndex16 @ 14d4eb0e0

FStateTreeIndex16 * __thiscall
FStateTreeIndex16::FStateTreeIndex16(FStateTreeIndex16 *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FStateTreeIndex16 *pFVar3;
  
  this->Value = 0xffff;
  if ((param_1 != -1) && (0xfffe < (uint)param_1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InIndex == INDEX_NONE || IsValidIndex(InIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeIndexTypes.h"
                       ,0x2e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FStateTreeIndex16 *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_1 == -1) {
    param_1 = 0xffff;
  }
  this->Value = (ushort)param_1;
  return this;
}

// StaticStruct @ 14d526390

UScriptStruct * __cdecl FStateTreeIndex16::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16,(UObject *)pUVar1,
                         L"StateTreeIndex16");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton;
}

// SerializeFromMismatchedTag @ 14d5337a0

bool __thiscall
FStateTreeIndex16::SerializeFromMismatchedTag
          (FStateTreeIndex16 *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  ushort uVar1;
  FName FVar2;
  FArchive *this_00;
  ushort *puVar3;
  bool bVar4;
  FNameEntryId FVar5;
  undefined4 extraout_var;
  UPackage *pUVar6;
  uint uVar7;
  FName FVar8;
  FPropertyTypeName local_res10 [2];
  
  FVar2 = param_1->Type;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar5.Value);
  if (FVar2 == FVar8) {
    local_res10[0].Index = (uint)local_res10[0].Index._2_2_ << 0x10;
    this_00 = *(FArchive **)(*(longlong *)param_2 + 8);
    puVar3 = (ushort *)**(undefined8 **)&this_00->field_0x8;
    if ((ushort *)(*(undefined8 **)&this_00->field_0x8)[1] < puVar3 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res10,2);
        this->Value = (ushort)local_res10[0].Index;
        bVar4 = true;
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,(ushort *)local_res10);
        this->Value = (ushort)local_res10[0].Index;
        bVar4 = true;
      }
    }
    else {
      uVar1 = *puVar3;
      **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 2;
      this->Value = uVar1;
      bVar4 = true;
    }
  }
  else {
    local_res10[0].Index = (param_1->TypeName).Index;
    if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8,(UObject *)pUVar6,
                           L"StateTreeIndex8");
    }
    bVar4 = UE::FPropertyTypeName::IsStruct
                      (local_res10,
                       (FName)(Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton)->
                              _padding_);
    if (bVar4) {
      local_res10[0].Index._0_1_ = 0xff;
      if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton == (UScriptStruct *)0x0)
      {
        pUVar6 = Z_Construct_UPackage__Script_StateTreeModule();
        Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton =
             GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8,(UObject *)pUVar6,
                             L"StateTreeIndex8");
      }
      UScriptStruct::SerializeItem
                (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton,param_2,
                 local_res10,(void *)0x0);
      uVar7 = local_res10[0].Index & 0xff;
      if ((char)local_res10[0].Index == -1) {
        uVar7 = 0xffffffff;
      }
      if (uVar7 == 0xffffffff) {
        uVar7 = 0xffff;
      }
      bVar4 = true;
      this->Value = (ushort)uVar7;
    }
    else {
      bVar4 = false;
    }
  }
  return bVar4;
}

