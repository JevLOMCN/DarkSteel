// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 1

// FTrackedFrameData @ 14cfe9c90

FTrackedFrameData * __thiscall
FTrackedFrameData::FTrackedFrameData
          (FTrackedFrameData *this,FName param_1,
          FLiveLinkBaseDataStruct<FLiveLinkBaseFrameData> *param_2,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_3)

{
  this->SubjectName = param_1;
  FStructOnScope::FStructOnScope(&(this->FrameData).WrappedStruct,&param_2->WrappedStruct);
  *(undefined8 *)&(this->Annotations).field_0x0 = 0;
  *(undefined8 *)&(this->Annotations).field_0x8 = 0;
  *(undefined8 *)&(this->Annotations).field_0x20 = 0;
  *(undefined4 *)&(this->Annotations).field_0x28 = 0;
  *(undefined4 *)&(this->Annotations).field_0x2c = 0x80;
  *(undefined4 *)&(this->Annotations).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Annotations).field_0x34 = 0;
  *(undefined8 *)&(this->Annotations).field_0x40 = 0;
  *(undefined4 *)&(this->Annotations).field_0x48 = 0;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Move<TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)&this->Annotations,
             (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
              *)param_3);
  FStructOnScope::~FStructOnScope(&param_2->WrappedStruct);
  return this;
}

