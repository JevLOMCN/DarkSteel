// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 4

// Construct<FDLSSUpscalerModularFeatureSettings> @ 14de1dd40

void __cdecl UE::CoreUObject::Private::Construct<FDLSSUpscalerModularFeatureSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// ConstructForTests<FDLSSUpscalerModularFeatureSettings> @ 14de1dd50

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FDLSSUpscalerModularFeatureSettings>(void *param_1)

{
  *(undefined1 *)param_1 = 0;
  return;
}

// Destruct<FDLSSUpscalerModularFeatureSettings> @ 14de1dd60

void __cdecl UE::CoreUObject::Private::Destruct<FDLSSUpscalerModularFeatureSettings>(void *param_1)

{
  return;
}

// Copy<FDLSSUpscalerModularFeatureSettings> @ 14de1dd70

bool __cdecl
UE::CoreUObject::Private::Copy<FDLSSUpscalerModularFeatureSettings>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined1 *)param_1 = *(undefined1 *)((longlong)param_1 + lVar1);
      param_1 = (void *)((longlong)param_1 + 1);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

