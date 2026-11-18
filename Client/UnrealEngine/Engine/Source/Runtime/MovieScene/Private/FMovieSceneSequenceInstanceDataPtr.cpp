// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// StaticStruct @ 1461e3130

UScriptStruct * __cdecl FMovieSceneSequenceInstanceDataPtr::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceInstanceDataPtr,
                         (UObject *)pUVar1,L"MovieSceneSequenceInstanceDataPtr");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceInstanceDataPtr.OuterSingleton;
}

// FMovieSceneSequenceInstanceDataPtr @ 1461fc990

FMovieSceneSequenceInstanceDataPtr * __thiscall
FMovieSceneSequenceInstanceDataPtr::FMovieSceneSequenceInstanceDataPtr
          (FMovieSceneSequenceInstanceDataPtr *this,FMovieSceneSequenceInstanceDataPtr *param_1)

{
  this->field_0x10 = this->field_0x10 & 0xfe;
  this->field_0x10 = this->field_0x10 | 2;
  operator=(this,param_1);
  return this;
}

// operator= @ 1462004b0

FMovieSceneSequenceInstanceDataPtr * __thiscall
FMovieSceneSequenceInstanceDataPtr::operator=
          (FMovieSceneSequenceInstanceDataPtr *this,FMovieSceneSequenceInstanceDataPtr *param_1)

{
  FStructOpsFakeVTable *pFVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *this_00;
  ICppStructOps *this_01;
  void *pvVar4;
  FMovieSceneSequenceInstanceDataPtr *pFVar5;
  
  if ((param_1->field_0x10 & 1) != 0) {
    pFVar5 = param_1;
    if ((param_1->field_0x10 & 2) == 0) {
      pFVar5 = *(FMovieSceneSequenceInstanceDataPtr **)param_1;
    }
    this_00 = (UScriptStruct *)(**(code **)(*(longlong *)pFVar5 + 8))();
    this_01 = UScriptStruct::GetCppStructOps(this_00);
    pvVar4 = TInlineValue<FMovieSceneSequenceInstanceData,16,8>::Reserve
                       ((TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)this,this_01->Size,
                        this_01->Alignment);
    pFVar1 = this_01->FakeVPtr;
    if ((pFVar1->Flags & Construct) == None) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!!(this->Flags & FuncFlag)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                         ,0x660,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMovieSceneSequenceInstanceDataPtr *)(*pcVar2)();
        return pFVar5;
      }
    }
    (**(code **)(pFVar1 + 1))(pvVar4);
    if ((param_1->field_0x10 & 1) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("bIsValid",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                         ,0x97,
                         L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMovieSceneSequenceInstanceDataPtr *)(*pcVar2)();
        return pFVar5;
      }
    }
    if ((param_1->field_0x10 & 2) == 0) {
      param_1 = *(FMovieSceneSequenceInstanceDataPtr **)param_1;
    }
    UScriptStruct::ICppStructOps::Copy(this_01,pvVar4,param_1,1);
  }
  return this;
}

// Serialize @ 146233bb0

bool __thiscall
FMovieSceneSequenceInstanceDataPtr::Serialize
          (FMovieSceneSequenceInstanceDataPtr *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeInlineValue<FMovieSceneSequenceInstanceData,16>
                    ((TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)this,param_1,true);
  return bVar1;
}

