// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// ClearValue_InContainer @ 148ba2cb0

void __thiscall FProperty::ClearValue_InContainer(FProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  
  if ((this->PropertyFlags & (CPF_NoDestructor|CPF_ZeroConstructor)) !=
      (CPF_NoDestructor|CPF_ZeroConstructor)) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x130);
    if (((param_2 < 0) || (this->ArrayDim <= param_2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2)
       ) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    if ((param_1 == (void *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar2)) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000148ba2e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (this,(longlong)param_1 +
                    (longlong)this->Offset_Internal +
                    (longlong)param_2 * (longlong)this->ElementSize);
    return;
  }
  iVar1 = this->ElementSize;
  if (((param_2 < 0) || (this->ArrayDim <= param_2)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar2))
  {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((param_1 == (void *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar2)) {
    UNRECOVERED_JUMPTABLE = (code *)swi(3);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  memset((void *)((longlong)param_1 +
                 (longlong)this->Offset_Internal + (longlong)param_2 * (longlong)this->ElementSize),
         0,(longlong)iVar1);
  return;
}

