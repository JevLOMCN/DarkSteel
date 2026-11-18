// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 5

// GetValueProperty @ 141ea30e0

FProperty * __thiscall FOptionalPropertyLayout::GetValueProperty(FOptionalPropertyLayout *this)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  
  if (this->ValueProperty != (FProperty *)0x0) {
    return this->ValueProperty;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("ValueProperty",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                     ,0x18,L"Expected ValueProperty to be initialized");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FProperty *)(*pcVar1)();
    return pFVar3;
  }
  return this->ValueProperty;
}

// IsSet @ 141ea9e90

bool __thiscall FOptionalPropertyLayout::IsSet(FOptionalPropertyLayout *this,void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  bool bVar5;
  
  cVar3 = (**(code **)(this->ValueProperty->_padding_ + 0x1a8))();
  lVar1 = this->ValueProperty->_padding_;
  if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000141ea9ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(lVar1 + 0x1b8))(this->ValueProperty,param_1);
    return (bool)uVar4;
  }
  cVar3 = (**(code **)(lVar1 + 0x1a8))();
  if (cVar3 != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                       ,0xa0,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (bool)*(undefined1 *)
                ((longlong)(this->ValueProperty->ElementSize * this->ValueProperty->ArrayDim) +
                (longlong)param_1);
}

// CalcIsSetOffset @ 1420f26e0

int __thiscall FOptionalPropertyLayout::CalcIsSetOffset(FOptionalPropertyLayout *this)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  
  cVar2 = (**(code **)(this->ValueProperty->_padding_ + 0x1a8))();
  if (cVar2 != '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                       ,0xa0,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  return this->ValueProperty->ElementSize * this->ValueProperty->ArrayDim;
}

// MarkSetAndGetInitializedValuePointerToReplace @ 142186850

void * __thiscall
FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
          (FOptionalPropertyLayout *this,void *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  longlong lVar6;
  
  cVar3 = (**(code **)(this->ValueProperty->_padding_ + 0x1a8))();
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(this->ValueProperty->_padding_ + 0x1a8))();
    if (cVar3 != '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                         ,0xa0,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pvVar5 = (void *)(*pcVar2)();
        return pvVar5;
      }
    }
    pFVar1 = this->ValueProperty;
    lVar6 = (longlong)(pFVar1->ElementSize * pFVar1->ArrayDim);
    if (*(char *)(lVar6 + (longlong)param_1) == '\0') {
      if (((uint)(int)pFVar1->PropertyFlags >> 9 & 1) != 0) {
        memset(param_1,0,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
        *(undefined1 *)(lVar6 + (longlong)param_1) = 1;
        return param_1;
      }
      (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,param_1);
      *(undefined1 *)(lVar6 + (longlong)param_1) = 1;
    }
  }
  else {
    bVar4 = IsSet(this,param_1);
    if (!bVar4) {
      if ((this->ValueProperty->PropertyFlags & CPF_NoDestructor) == CPF_None) {
        (**(code **)(this->ValueProperty->_padding_ + 0x138))();
      }
      pFVar1 = this->ValueProperty;
      if (((uint)(int)pFVar1->PropertyFlags >> 9 & 1) != 0) {
        memset(param_1,0,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
        return param_1;
      }
      (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,param_1);
      return param_1;
    }
  }
  return param_1;
}

// MarkUnset @ 142186990

void __thiscall FOptionalPropertyLayout::MarkUnset(FOptionalPropertyLayout *this,void *param_1)

{
  FProperty *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  longlong lVar5;
  
  cVar3 = (**(code **)(this->ValueProperty->_padding_ + 0x1a8))();
  lVar5 = this->ValueProperty->_padding_;
  if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001421869c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x1c0))(this->ValueProperty,param_1);
    return;
  }
  cVar3 = (**(code **)(lVar5 + 0x1a8))();
  if (cVar3 != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = this->ValueProperty;
  lVar5 = (longlong)(pFVar1->ElementSize * pFVar1->ArrayDim);
  if (*(char *)(lVar5 + (longlong)param_1) != '\0') {
    if ((pFVar1->PropertyFlags & CPF_NoDestructor) == CPF_None) {
      (**(code **)(pFVar1->_padding_ + 0x138))(pFVar1,param_1);
    }
    *(undefined1 *)(lVar5 + (longlong)param_1) = 0;
  }
  return;
}

