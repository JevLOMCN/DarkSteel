// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// operator= @ 14609ad10

FMovieSceneTrackImplementationPtr * __thiscall
FMovieSceneTrackImplementationPtr::operator=
          (FMovieSceneTrackImplementationPtr *this,FMovieSceneTrackImplementationPtr *param_1)

{
  uint uVar1;
  uint uVar2;
  FStructOpsFakeVTable *pFVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  UScriptStruct *this_00;
  ICppStructOps *this_01;
  void *pvVar7;
  FMovieSceneTrackImplementationPtr *pFVar8;
  
  if ((param_1->field_0x30 & 1) == 0) {
    bVar5 = this->field_0x30;
    if ((bVar5 & 1) != 0) {
      pFVar8 = this;
      if ((bVar5 & 2) == 0) {
        pFVar8 = *(FMovieSceneTrackImplementationPtr **)this;
      }
      this->field_0x30 = bVar5 & 0xfe;
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
      if ((this->field_0x30 & 2) == 0) {
        FMemory::Free(*(void **)this);
      }
    }
    return this;
  }
  pFVar8 = param_1;
  if ((param_1->field_0x30 & 2) == 0) {
    pFVar8 = *(FMovieSceneTrackImplementationPtr **)param_1;
  }
  this_00 = (UScriptStruct *)(**(code **)(*(longlong *)pFVar8 + 0x20))();
  this_01 = UScriptStruct::GetCppStructOps(this_00);
  uVar1 = this_01->Alignment;
  uVar2 = this_01->Size;
  bVar5 = this->field_0x30;
  if ((bVar5 & 1) != 0) {
    pFVar8 = this;
    if ((bVar5 & 2) == 0) {
      pFVar8 = *(FMovieSceneTrackImplementationPtr **)this;
    }
    this->field_0x30 = bVar5 & 0xfe;
    (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
    bVar5 = this->field_0x30;
    if ((bVar5 & 2) == 0) {
      FMemory::Free(*(void **)this);
      bVar5 = this->field_0x30;
    }
  }
  if ((uVar2 < 0x31) && (uVar1 < 9)) {
    this->field_0x30 = bVar5 | 2;
  }
  else {
    this->field_0x30 = bVar5 & 0xfd;
    pvVar7 = FMemory::Malloc((ulonglong)uVar2,uVar1);
    *(void **)this = pvVar7;
  }
  this->field_0x30 = this->field_0x30 | 1;
  pFVar8 = this;
  if ((this->field_0x30 & 2) == 0) {
    pFVar8 = *(FMovieSceneTrackImplementationPtr **)this;
  }
  pFVar3 = this_01->FakeVPtr;
  if ((pFVar3->Flags & Construct) == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!!(this->Flags & FuncFlag)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x660,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneTrackImplementationPtr *)(*pcVar4)();
      return pFVar8;
    }
  }
  (**(code **)(pFVar3 + 1))(pFVar8);
  if ((param_1->field_0x30 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneTrackImplementationPtr *)(*pcVar4)();
      return pFVar8;
    }
  }
  if ((param_1->field_0x30 & 2) == 0) {
    param_1 = *(FMovieSceneTrackImplementationPtr **)param_1;
  }
  UScriptStruct::ICppStructOps::Copy(this_01,pFVar8,param_1,1);
  return this;
}

// StaticStruct @ 1461650c0

UScriptStruct * __cdecl FMovieSceneTrackImplementationPtr::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr,
                         (UObject *)pUVar1,L"MovieSceneTrackImplementationPtr");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneTrackImplementationPtr.OuterSingleton;
}

// Serialize @ 1461d1450

bool __thiscall
FMovieSceneTrackImplementationPtr::Serialize
          (FMovieSceneTrackImplementationPtr *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeInlineValue<FMovieSceneTrackImplementation,48>
                    ((TInlineValue<FMovieSceneTrackImplementation,48,8> *)this,param_1,true);
  return bVar1;
}

