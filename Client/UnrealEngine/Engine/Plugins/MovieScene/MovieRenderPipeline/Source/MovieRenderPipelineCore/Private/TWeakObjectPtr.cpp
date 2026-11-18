// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// UEOpEquals<UMoviePipelineExecutorShot,bool> @ 14dcad420

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
UEOpEquals<UMoviePipelineExecutorShot,bool>
          (TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *this,
          UMoviePipelineExecutorShot *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UMoviePipelineExecutorShot *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMoviePipelineExecutorShot *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMoviePipelineExecutorShot *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UMovieSceneSection,bool> @ 14dcad4d0

bool __thiscall
TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr>::UEOpEquals<UMovieSceneSection,bool>
          (TWeakObjectPtr<UMovieSceneCameraCutSection,FWeakObjectPtr> *this,
          UMovieSceneSection *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UMovieSceneSection *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneSection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UMovieSceneSection,bool> @ 14dcad580

bool __thiscall
TWeakObjectPtr<UMovieSceneSubSection,FWeakObjectPtr>::UEOpEquals<UMovieSceneSection,bool>
          (TWeakObjectPtr<UMovieSceneSubSection,FWeakObjectPtr> *this,UMovieSceneSection *param_1)

{
  bool bVar1;
  FWeakObjectPtr local_res8;
  UMovieSceneSection *local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMovieSceneSection *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UMovieSceneSection *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  if (((this->WeakPtr).ObjectIndex == local_res8.ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == local_res8.ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&local_res8), !bVar1)) {
    return true;
  }
  return false;
}

// UEOpEquals<UMoviePipelineExecutorShot,bool> @ 14dd08a40

bool __thiscall
TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr>::
UEOpEquals<UMoviePipelineExecutorShot,bool>
          (TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *this,
          TWeakObjectPtr<UMoviePipelineExecutorShot,FWeakObjectPtr> *param_1)

{
  bool bVar1;
  
  if (((this->WeakPtr).ObjectIndex == (param_1->WeakPtr).ObjectIndex) &&
     ((this->WeakPtr).ObjectSerialNumber == (param_1->WeakPtr).ObjectSerialNumber)) {
    return true;
  }
  bVar1 = FWeakObjectPtr::IsValid(&this->WeakPtr);
  if ((!bVar1) && (bVar1 = FWeakObjectPtr::IsValid(&param_1->WeakPtr), !bVar1)) {
    return true;
  }
  return false;
}

