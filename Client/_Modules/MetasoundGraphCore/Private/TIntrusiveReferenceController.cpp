// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundGraphCore
// Functions: 4

// DestroyObject @ 14ad4ed30

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
::DestroyObject(TIntrusiveReferenceController<TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>,1>
                *this)

{
  TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
  ::
  ~TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
            ((TSpscQueue<TUniquePtr<Metasound::DynamicGraph::IDynamicOperatorTransform,TDefaultDelete<Metasound::DynamicGraph::IDynamicOperatorTransform>_>,FMemory>
              *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14ad4ed40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FAudioBuffer,0>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FAudioBuffer,0> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  pvVar1 = *(void **)(this->ObjectStorage).Pad;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14ad4ed60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FGraph::FFactory,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FGraph::FFactory,1> *this)

{
  return;
}

// DestroyObject @ 14ad4ed70

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<Metasound::FGraphRenderCost,1>::DestroyObject
          (TIntrusiveReferenceController<Metasound::FGraphRenderCost,1> *this)

{
  Metasound::FGraphRenderCost::~FGraphRenderCost((FGraphRenderCost *)&this->ObjectStorage);
  return;
}

