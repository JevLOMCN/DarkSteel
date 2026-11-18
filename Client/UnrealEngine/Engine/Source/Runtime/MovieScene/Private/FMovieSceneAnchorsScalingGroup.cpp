// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// StaticStruct @ 14605f550

UScriptStruct * __cdecl FMovieSceneAnchorsScalingGroup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneAnchorsScalingGroup,(UObject *)pUVar1,
                         L"MovieSceneAnchorsScalingGroup");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneAnchorsScalingGroup.OuterSingleton;
}

// FMovieSceneAnchorsScalingGroup @ 146092ef0

FMovieSceneAnchorsScalingGroup * __thiscall
FMovieSceneAnchorsScalingGroup::FMovieSceneAnchorsScalingGroup
          (FMovieSceneAnchorsScalingGroup *this,FMovieSceneAnchorsScalingGroup *param_1)

{
  undefined1 *_Dst;
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  undefined1 *_Src;
  
  *(undefined8 *)&(this->Sections).Elements = 0;
  *(undefined8 *)&(this->Sections).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Sections).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Sections).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Sections).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Sections).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Sections).Elements.field_0x34 = 0;
  (this->Sections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Sections).HashSize = 0;
  if (this != param_1) {
    *(undefined8 *)&(this->Sections).Elements = *(undefined8 *)&(param_1->Sections).Elements;
    *(undefined8 *)&(param_1->Sections).Elements = 0;
    *(undefined4 *)&(this->Sections).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Sections).Elements.field_0x8;
    *(undefined4 *)&(this->Sections).Elements.field_0xc =
         *(undefined4 *)&(param_1->Sections).Elements.field_0xc;
    *(undefined8 *)&(param_1->Sections).Elements.field_0x8 = 0;
    _Src = &(param_1->Sections).Elements.field_0x10;
    _Dst = &(this->Sections).Elements.field_0x10;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Sections).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Sections).Elements.field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Sections).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Sections).Elements.field_0x20;
      *(undefined8 *)&(param_1->Sections).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Sections).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Sections).Elements.field_0x28;
      *(undefined4 *)&(this->Sections).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Sections).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Sections).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->Sections).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Sections).Elements.field_0x30;
    *(undefined4 *)&(this->Sections).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Sections).Elements.field_0x34;
    *(undefined4 *)&(param_1->Sections).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Sections).Elements.field_0x34 = 0;
  }
  if ((param_1->Sections).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Sections).Hash.InlineData =
         *(undefined4 *)(param_1->Sections).Hash.InlineData;
  }
  FVar2 = (this->Sections).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  (this->Sections).Hash.SecondaryData = (param_1->Sections).Hash.SecondaryData;
  (param_1->Sections).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Sections).HashSize = (param_1->Sections).HashSize;
  (param_1->Sections).HashSize = 0;
  return this;
}

