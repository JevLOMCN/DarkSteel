// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InteractiveToolsFramework
// Functions: 3

// DestroyObject @ 149650950

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FCombinedTransformGizmoActorFactory,1>::
DestroyObject(TIntrusiveReferenceController<FCombinedTransformGizmoActorFactory,1> *this)

{
  return;
}

// DestroyObject @ 14969c980

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FIntervalGizmoActorFactory,1>::DestroyObject
          (TIntrusiveReferenceController<FIntervalGizmoActorFactory,1> *this)

{
  return;
}

// DestroyObject @ 14969c990

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1>::DestroyObject
          (TIntrusiveReferenceController<UE::GizmoRenderingUtil::FSubGizmoTransformAdjuster,1> *this
          )

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((this->ObjectStorage).Pad + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  *(undefined ***)(this->ObjectStorage).Pad =
       &___7IViewBasedTransformAdjuster_GizmoRenderingUtil_UE__6B_;
  return;
}

