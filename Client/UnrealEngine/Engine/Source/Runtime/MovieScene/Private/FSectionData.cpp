// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FSectionData @ 146182500

FSectionData * __thiscall PropertyTemplate::FSectionData::FSectionData(FSectionData *this)

{
  this->_padding_ = (longlong)&___7FSectionData_PropertyTemplate__6B_;
  (this->PropertyBindings).Object = (FTrackInstancePropertyBindings *)0x0;
  (this->PropertyBindings).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  if (TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID != 0) {
    (this->PropertyID).ID = TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID;
    return this;
  }
  TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID =
       FMovieSceneAnimTypeID::GenerateHash
                 (&TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID,0);
  (this->PropertyID).ID = TMovieSceneAnimTypeID<PropertyTemplate::FSectionData,0>::CachedID;
  return this;
}

// Initialize @ 1461b6360

void __thiscall
PropertyTemplate::FSectionData::Initialize(FSectionData *this,FName param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneAnimTypeID FVar2;
  FTrackInstancePropertyBindings *this_00;
  ForAnyElementType local_res8;
  
  FVar2 = TMovieSceneAnimTypeIDContainer<FString>::GetAnimTypeID
                    (&PropertyTypeIDs,(FString *)&local_res8);
                    /* WARNING: Load size is inaccurate */
  (this->PropertyID).ID = *FVar2.ID;
  this_00 = ::operator_new(0x70);
  local_res8.Data = (FScriptContainerElement *)0x0;
  if (this_00 != (FTrackInstancePropertyBindings *)0x0) {
    local_res8.Data =
         (FScriptContainerElement *)
         FTrackInstancePropertyBindings::FTrackInstancePropertyBindings(this_00,param_1,param_2);
  }
  TSharedPtr<FTrackInstancePropertyBindings,1>::operator=<FTrackInstancePropertyBindings>
            (&this->PropertyBindings,(TRawPtrProxy<FTrackInstancePropertyBindings> *)&local_res8);
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return;
}

