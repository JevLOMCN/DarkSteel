// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// GetObjectPropertyValue @ 14668e2f0

void __cdecl
UE::MovieScene::FFloatPropertyTraits::GetObjectPropertyValue
          (UObject *param_1,FTrackInstancePropertyBindings *param_2,double *param_3)

{
  uchar uVar1;
  FResolvedPropertyAndFunction *this;
  float *pfVar2;
  
  this = FTrackInstancePropertyBindings::FindOrAdd(param_2,param_1);
  uVar1 = (this->ResolvedProperty).TypeIndex;
  if (uVar1 == '\0') {
    pfVar2 = FCachedProperty::GetPropertyAddress<float>((FCachedProperty *)this);
  }
  else {
    if (uVar1 != '\x01') goto LAB_14668e34b;
    pfVar2 = FVolatileProperty::ResolvePropertySteps((FVolatileProperty *)this,false);
  }
  if (pfVar2 != (float *)0x0) {
    *param_3 = (double)*pfVar2;
    return;
  }
LAB_14668e34b:
  *param_3 = 0.0;
  return;
}

