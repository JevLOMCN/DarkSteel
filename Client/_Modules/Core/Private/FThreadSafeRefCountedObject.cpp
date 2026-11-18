// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// ~FThreadSafeRefCountedObject @ 141481c10

void __thiscall
FThreadSafeRefCountedObject::~FThreadSafeRefCountedObject(FThreadSafeRefCountedObject *this)

{
  code *pcVar1;
  bool bVar2;
  
  *(undefined ***)this = &___7FThreadSafeRefCountedObject__6B_;
  if (*(int *)&this->field_0x8 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// DeleteThis @ 141490fa0

void __cdecl
FThreadSafeRefCountedObject::DeleteThis(TTransactionalAtomicRefCount<unsigned_int> *param_1)

{
  TTransactionalAtomicRefCount<unsigned_int> *pTVar1;
  
  pTVar1 = param_1 + -2;
  if (param_1 == (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
    pTVar1 = (TTransactionalAtomicRefCount<unsigned_int> *)0x0;
  }
  if (pTVar1 != (TTransactionalAtomicRefCount<unsigned_int> *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141490fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pTVar1)(pTVar1,1);
    return;
  }
  return;
}

