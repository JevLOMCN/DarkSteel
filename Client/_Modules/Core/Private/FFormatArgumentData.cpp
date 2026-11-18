// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ResetValue @ 1417775a0

void __thiscall FFormatArgumentData::ResetValue(FFormatArgumentData *this)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  FText *pFVar3;
  undefined1 local_res8 [8];
  
  (this->ArgumentValueType).Value = '\x04';
  pFVar3 = FText::GetEmpty();
  pIVar1 = (this->ArgumentValue).TextData.Reference;
  pIVar2 = (pFVar3->TextData).Reference;
  if (pIVar1 != pIVar2) {
    (this->ArgumentValue).TextData.Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    }
  }
  (this->ArgumentValue).Flags = pFVar3->Flags;
  this->ArgumentValueInt = 0;
  this->ArgumentValueFloat = 0.0;
  this->ArgumentValueDouble = 0.0;
  this->ArgumentValueGender = Masculine;
  return;
}

// ToArgumentValue @ 14177efe0

FFormatArgumentValue * __thiscall
FFormatArgumentData::ToArgumentValue
          (FFormatArgumentData *this,FFormatArgumentValue *__return_storage_ptr__)

{
  float fVar1;
  uchar uVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FText *pFVar7;
  FFormatArgumentValue *pFVar8;
  FFormatArgumentValue_u_8 FVar9;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar2 = (this->ArgumentValueType).Value;
  if (uVar2 == '\0') {
    FVar9 = (FFormatArgumentValue_u_8)this->ArgumentValueInt;
    __return_storage_ptr__->Type = Int;
LAB_14177f121:
    (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference = (ITextData *)0x0;
    (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = 0;
    __return_storage_ptr__->field1_0x8 = FVar9;
  }
  else {
    if (uVar2 == '\x02') {
      fVar1 = this->ArgumentValueFloat;
      __return_storage_ptr__->Type = Float;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference =
           (ITextData *)0x0;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = 0;
      (__return_storage_ptr__->field1_0x8).FloatValue = fVar1;
      return __return_storage_ptr__;
    }
    if (uVar2 == '\x03') {
      FVar9 = (FFormatArgumentValue_u_8)this->ArgumentValueDouble;
      __return_storage_ptr__->Type = Double;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference =
           (ITextData *)0x0;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = 0;
      __return_storage_ptr__->field1_0x8 = FVar9;
      return __return_storage_ptr__;
    }
    if (uVar2 == '\x04') {
      __return_storage_ptr__->Type = Text;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference =
           (ITextData *)0x0;
      pIVar3 = (this->ArgumentValue).TextData.Reference;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      }
      uVar6 = (this->ArgumentValue).Flags;
    }
    else {
      if (uVar2 == '\x05') {
        FVar9.IntValue._1_7_ = 0;
        FVar9.IntValue._0_1_ = this->ArgumentValueGender;
        __return_storage_ptr__->Type = Gender;
        goto LAB_14177f121;
      }
      __return_storage_ptr__->Type = Text;
      pFVar7 = FText::GetEmpty();
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference =
           (ITextData *)0x0;
      pIVar3 = (pFVar7->TextData).Reference;
      (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference = pIVar3;
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
      }
      uVar6 = pFVar7->Flags;
    }
    (__return_storage_ptr__->TextValue).field0_0x0.TypedValue.Flags = uVar6;
    if ((__return_storage_ptr__->TextValue).field0_0x0.TypedValue.TextData.Reference ==
        (ITextData *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FFormatArgumentValue *)(*pcVar4)();
        return pFVar8;
      }
    }
  }
  return __return_storage_ptr__;
}

