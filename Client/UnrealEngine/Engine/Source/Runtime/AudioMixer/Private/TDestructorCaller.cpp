// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 2

// Destruct @ 1464fb410

void __cdecl
UE::Core::Private::TDestructorCaller<TSharedPtr<Audio::FPatchOutput,1>_>::Destruct(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Destruct @ 1464fb420

void __cdecl UE::Core::Private::TDestructorCaller<Audio::FPatchInput>::Destruct(void *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uStack_18;
  FSharedReferencer<1> FStack_10;
  
  if (*(longlong *)param_1 == 0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
    return;
  }
  LOCK();
  piVar1 = (int *)(*(longlong *)param_1 + 0x44);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 == 1) {
    if (*(longlong *)param_1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(longlong **)(*(longlong *)param_1 + 0x48) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x48) + 0x10))();
    }
  }
  uStack_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1 != &uStack_18) {
    *(undefined8 *)param_1 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)((longlong)param_1 + 8),&FStack_10);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (((FSharedReferencer<1> *)((longlong)param_1 + 8))->ReferenceController);
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

