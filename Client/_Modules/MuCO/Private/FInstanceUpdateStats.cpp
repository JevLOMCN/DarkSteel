// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// FInstanceUpdateStats @ 14ac0a9e0

FInstanceUpdateStats * __thiscall
FInstanceUpdateStats::FInstanceUpdateStats(FInstanceUpdateStats *this,FInstanceUpdateStats *param_1)

{
  ::FString::FString(&this->CustomizableObjectPathName,&param_1->CustomizableObjectPathName);
  ::FString::FString(&this->CustomizableObjectInstancePathName,
                     &param_1->CustomizableObjectInstancePathName);
  ::FString::FString(&this->UpdateType,&param_1->UpdateType);
  ::FString::FString(&this->Descriptor,&param_1->Descriptor);
  this->UpdateResult = param_1->UpdateResult;
  this->bLevelBegunPlay = param_1->bLevelBegunPlay;
  this->TriangleCount = param_1->TriangleCount;
  this->QueueTime = param_1->QueueTime;
  this->UpdateTime = param_1->UpdateTime;
  this->TaskGetMeshTime = param_1->TaskGetMeshTime;
  this->TaskLockCacheTime = param_1->TaskLockCacheTime;
  this->TaskGetImagesTime = param_1->TaskGetImagesTime;
  this->TaskConvertResourcesTime = param_1->TaskConvertResourcesTime;
  this->TaskCallbacksTime = param_1->TaskCallbacksTime;
  this->UpdatePeakMemory = param_1->UpdatePeakMemory;
  this->UpdateRealPeakMemory = param_1->UpdateRealPeakMemory;
  this->TaskUpdateImageTime = param_1->TaskUpdateImageTime;
  this->TaskUpdateImagePeakMemory = param_1->TaskUpdateImagePeakMemory;
  this->TaskUpdateImageRealPeakMemory = param_1->TaskUpdateImageRealPeakMemory;
  return this;
}

// FInstanceUpdateStats @ 14ac0aad0

FInstanceUpdateStats * __thiscall
FInstanceUpdateStats::FInstanceUpdateStats(FInstanceUpdateStats *this)

{
  ::FString::FString(&this->CustomizableObjectPathName,"");
  ::FString::FString(&this->CustomizableObjectInstancePathName,"");
  ::FString::FString(&this->UpdateType,"");
  ::FString::FString(&this->Descriptor,"");
  this->UpdateResult = Error;
  this->bLevelBegunPlay = false;
  this->TriangleCount = 0;
  this->QueueTime = 0.0;
  this->UpdateTime = 0.0;
  this->TaskGetMeshTime = 0.0;
  this->TaskLockCacheTime = 0.0;
  this->TaskGetImagesTime = 0.0;
  this->TaskConvertResourcesTime = 0.0;
  this->TaskCallbacksTime = 0.0;
  this->UpdatePeakMemory = 0.0;
  this->UpdateRealPeakMemory = 0.0;
  this->TaskUpdateImageTime = 0.0;
  this->TaskUpdateImagePeakMemory = 0.0;
  this->TaskUpdateImageRealPeakMemory = 0.0;
  return this;
}

