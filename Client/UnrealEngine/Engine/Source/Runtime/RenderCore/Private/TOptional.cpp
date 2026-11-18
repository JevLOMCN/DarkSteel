// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// operator-> @ 145d91be0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIBreadcrumbEventManual * __thiscall
TOptional<FRHIBreadcrumbEventManual>::operator->(TOptional<FRHIBreadcrumbEventManual> *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIBreadcrumbEventManual *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIBreadcrumbEventManual *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 145df3490

FTaskEvent * __thiscall
TOptional<UE::Tasks::FTaskEvent>::operator*(TOptional<UE::Tasks::FTaskEvent> *this)

{
  code *pcVar1;
  bool bVar2;
  FTaskEvent *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTaskEvent *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// Reset @ 145e22ce0

void __thiscall TOptional<UE::Tasks::FTaskEvent>::Reset(TOptional<UE::Tasks::FTaskEvent> *this)

{
  int *piVar1;
  int iVar2;
  FTaskEvent FVar3;
  
  if (this->bIsSet != false) {
    FVar3 = this->TypedValue;
    if (FVar3 != (FTaskEvent)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      }
    }
    this->bIsSet = false;
  }
  return;
}

// GetValue @ 145eca2a0

uint * __thiscall TOptional<unsigned_int>::GetValue(TOptional<unsigned_int> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
  }
  return &this->TypedValue;
}

