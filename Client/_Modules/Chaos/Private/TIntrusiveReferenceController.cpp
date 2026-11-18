// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 11

// DestroyObject @ 1436fe280

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDFrame,1>::
DestroyObject(TIntrusiveReferenceController<ChaosDD::Private::FChaosDDFrame,1> *this)

{
  ChaosDD::Private::FChaosDDFrame::~FChaosDDFrame((FChaosDDFrame *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1436fe290

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDGlobalFrame,1>::
DestroyObject(TIntrusiveReferenceController<ChaosDD::Private::FChaosDDGlobalFrame,1> *this)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)((this->ObjectStorage).Pad + 0xc0));
  ChaosDD::Private::FChaosDDFrame::~FChaosDDFrame((FChaosDDFrame *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 1436fe2c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<ChaosDD::Private::FChaosDDTimeline,1>::
DestroyObject(TIntrusiveReferenceController<ChaosDD::Private::FChaosDDTimeline,1> *this)

{
  ChaosDD::Private::FChaosDDTimeline::~FChaosDDTimeline((FChaosDDTimeline *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14375e140

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::VisualDebugger::FChaosVDOptionalDataChannel,1> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x28));
  TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((this->ObjectStorage).Pad + 0x18));
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014375e180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// DestroyObject @ 14375e190

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1>::DestroyObject
          (TIntrusiveReferenceController<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1>
           *this)

{
  Chaos::VisualDebugger::FChaosVDSerializableNameTable::~FChaosVDSerializableNameTable
            ((FChaosVDSerializableNameTable *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14375e1a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FName,1>::DestroyObject
          (TIntrusiveReferenceController<FName,1> *this)

{
  return;
}

// DestroyObject @ 143b1b3b0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Chaos::FWeakParticleHandle::FData,1>::
DestroyObject(TIntrusiveReferenceController<Chaos::FWeakParticleHandle::FData,1> *this)

{
  return;
}

// DestroyObject @ 1440db240

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FClusterUnionProxyTimestamp,1>::DestroyObject
          (TIntrusiveReferenceController<FClusterUnionProxyTimestamp,1> *this)

{
  return;
}

// DestroyObject @ 1440db250

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FProxyTimestampBase,1>::DestroyObject
          (TIntrusiveReferenceController<FProxyTimestampBase,1> *this)

{
  return;
}

// DestroyObject @ 1440db260

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FSingleParticleProxyTimestamp,1>::
DestroyObject(TIntrusiveReferenceController<FSingleParticleProxyTimestamp,1> *this)

{
  return;
}

// DestroyObject @ 144113fb0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FGeometryCollectionProxyTimestamp,1>::
DestroyObject(TIntrusiveReferenceController<FGeometryCollectionProxyTimestamp,1> *this)

{
  return;
}

