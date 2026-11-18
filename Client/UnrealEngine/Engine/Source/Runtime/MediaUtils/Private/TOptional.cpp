// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaUtils
// Functions: 1

// operator= @ 146bf3b40

TOptional<FMediaPlayerOptions> * __thiscall
TOptional<FMediaPlayerOptions>::operator=
          (TOptional<FMediaPlayerOptions> *this,FMediaPlayerOptions *param_1)

{
  TMap<FName,FVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariant,0>_> *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((TOptional<FMediaPlayerOptions> *)param_1 != this) {
    if (this->bIsSet != false) {
      FMediaPlayerOptions::~FMediaPlayerOptions(&this->TypedValue);
    }
    iVar1 = (param_1->Tracks).Caption;
    iVar2 = (param_1->Tracks).Metadata;
    iVar3 = (param_1->Tracks).Script;
    (this->TypedValue).Tracks.Audio = (param_1->Tracks).Audio;
    (this->TypedValue).Tracks.Caption = iVar1;
    (this->TypedValue).Tracks.Metadata = iVar2;
    (this->TypedValue).Tracks.Script = iVar3;
    iVar1 = (param_1->Tracks).Text;
    (this->TypedValue).Tracks.Subtitle = (param_1->Tracks).Subtitle;
    (this->TypedValue).Tracks.Text = iVar1;
    (this->TypedValue).Tracks.Video = (param_1->Tracks).Video;
    ::FString::FString(&(this->TypedValue).TracksByLanguage.Video,&(param_1->TracksByLanguage).Video
                      );
    ::FString::FString(&(this->TypedValue).TracksByLanguage.Audio,&(param_1->TracksByLanguage).Audio
                      );
    ::FString::FString(&(this->TypedValue).TracksByLanguage.Subtitle,
                       &(param_1->TracksByLanguage).Subtitle);
    ::FString::FString(&(this->TypedValue).TracksByLanguage.Caption,
                       &(param_1->TracksByLanguage).Caption);
    this_00 = &(this->TypedValue).InternalCustomOptions;
    (this->TypedValue).TrackSelection = param_1->TrackSelection;
    (this->TypedValue).SeekTime.Ticks = (param_1->SeekTime).Ticks;
    (this->TypedValue).SeekTimeType = param_1->SeekTimeType;
    (this->TypedValue).PlayOnOpen = param_1->PlayOnOpen;
    (this->TypedValue).Loop = param_1->Loop;
    *(undefined8 *)&this_00->field_0x0 = 0;
    *(undefined8 *)&(this->TypedValue).InternalCustomOptions.field_0x8 = 0;
    *(undefined8 *)&(this->TypedValue).InternalCustomOptions.field_0x20 = 0;
    *(undefined4 *)&(this->TypedValue).InternalCustomOptions.field_0x28 = 0;
    *(undefined4 *)&(this->TypedValue).InternalCustomOptions.field_0x2c = 0x80;
    *(undefined4 *)&(this->TypedValue).InternalCustomOptions.field_0x30 = 0xffffffff;
    *(undefined4 *)&(this->TypedValue).InternalCustomOptions.field_0x34 = 0;
    *(undefined8 *)&(this->TypedValue).InternalCustomOptions.field_0x40 = 0;
    *(undefined4 *)&(this->TypedValue).InternalCustomOptions.field_0x48 = 0;
    TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
    ::operator=((TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)this_00,
                (TSet<TTuple<FName,FVariant>,TDefaultMapHashableKeyFuncs<FName,FVariant,0>,FDefaultSetAllocator>
                 *)&param_1->InternalCustomOptions);
    this->bIsSet = true;
  }
  return this;
}

