// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 8

// HandleObjectReference @ 141efaad0

void __thiscall
`FArchiveHasReferences::FArchiveHasReferences'::__l2::FArchiveProxyCollector::HandleObjectReference
          (void *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141efaad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x168))();
  return;
}

// HandleObjectReferences @ 141efaba0

void __thiscall
`FArchiveHasReferences::FArchiveHasReferences'::__l2::FArchiveProxyCollector::HandleObjectReferences
          (void *this,UObject **param_1,int param_2,UObject *param_3,FProperty *param_4)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x168))
                (*(longlong **)((longlong)this + 0x10),param_1);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// IsIgnoringArchetypeRef @ 141efbf30

bool __thiscall
`FArchiveHasReferences::FArchiveHasReferences'::__l2::FArchiveProxyCollector::IsIgnoringArchetypeRef
          (void *this)

{
  return false;
}

// IsIgnoringTransient @ 141efbf60

bool __thiscall
`FArchiveHasReferences::FArchiveHasReferences'::__l2::FArchiveProxyCollector::IsIgnoringTransient
          (void *this)

{
  return false;
}

// HandleObjectReference @ 141f37040

void __thiscall
`FFindReferencersArchive::ResetPotentialReferencer'::__l8::FArchiveProxyCollector::
HandleObjectReference(void *this,UObject **param_1,UObject *param_2,FProperty *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000141f37047. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x168))();
  return;
}

// HandleObjectReferences @ 141f37060

void __thiscall
`FFindReferencersArchive::ResetPotentialReferencer'::__l8::FArchiveProxyCollector::
HandleObjectReferences(void *this,UObject **param_1,int param_2,UObject *param_3,FProperty *param_4)

{
  ulonglong uVar1;
  
  if (0 < param_2) {
    uVar1 = (ulonglong)(uint)param_2;
    do {
      (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x168))
                (*(longlong **)((longlong)this + 0x10),param_1);
      param_1 = param_1 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}

// IsIgnoringArchetypeRef @ 141f3a3c0

bool __thiscall
`FFindReferencersArchive::ResetPotentialReferencer'::__l8::FArchiveProxyCollector::
IsIgnoringArchetypeRef(void *this)

{
  return false;
}

// IsIgnoringTransient @ 141f3a3d0

bool __thiscall
`FFindReferencersArchive::ResetPotentialReferencer'::__l8::FArchiveProxyCollector::
IsIgnoringTransient(void *this)

{
  return false;
}

