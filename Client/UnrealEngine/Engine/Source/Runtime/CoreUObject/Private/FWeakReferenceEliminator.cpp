// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// HandleObjectReference @ 142059fd0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UE::GC::FWeakReferenceEliminator::HandleObjectReference
          (FWeakReferenceEliminator *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
  code *pcVar1;
  bool bVar2;
  FUObjectItem *pFVar3;
  
  if (*param_1 != (UObject *)0x0) {
    pFVar3 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_1)->field_0xc);
    if (pFVar3 == (FUObjectItem *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ItemPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x381,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar3->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      *param_1 = (UObject *)0x0;
    }
  }
  return;
}

// MarkWeakObjectReferenceForClearing @ 1420654c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall
UE::GC::FWeakReferenceEliminator::MarkWeakObjectReferenceForClearing
          (FWeakReferenceEliminator *this,UObject **param_1,UObject *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  FUObjectItem *pFVar4;
  
  if ((param_1 != (UObject **)0x0) && (*param_1 != (UObject *)0x0)) {
    pFVar4 = FChunkedFixedUObjectArray::GetObjectPtr
                       (&GUObjectArray.ObjObjects,*(int *)&(*param_1)->field_0xc);
    if ((pFVar4 == (FUObjectItem *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
    if ((GC::Private::FGCFlags::MaybeUnreachableObjectFlag &
        (EInternalObjectFlags)((ulonglong)(pFVar4->field0_0x0).FlagsAndRefCount >> 0x20)) !=
        Borrowed) {
      *param_1 = (UObject *)0x0;
      return true;
    }
  }
  return true;
}

