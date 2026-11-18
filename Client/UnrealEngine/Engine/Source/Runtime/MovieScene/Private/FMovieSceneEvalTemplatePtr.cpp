// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// operator= @ 146099eb0

FMovieSceneEvalTemplatePtr * __thiscall
FMovieSceneEvalTemplatePtr::operator=
          (FMovieSceneEvalTemplatePtr *this,FMovieSceneEvalTemplatePtr *param_1)

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
  FMovieSceneEvalTemplatePtr *pFVar8;
  
  if ((param_1->field_0x80 & 1) == 0) {
    bVar5 = this->field_0x80;
    if ((bVar5 & 1) != 0) {
      pFVar8 = this;
      if ((bVar5 & 2) == 0) {
        pFVar8 = *(FMovieSceneEvalTemplatePtr **)this;
      }
      this->field_0x80 = bVar5 & 0xfe;
      (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
      if ((this->field_0x80 & 2) == 0) {
        FMemory::Free(*(void **)this);
      }
    }
    return this;
  }
  pFVar8 = param_1;
  if ((param_1->field_0x80 & 2) == 0) {
    pFVar8 = *(FMovieSceneEvalTemplatePtr **)param_1;
  }
  this_00 = (UScriptStruct *)(**(code **)(*(longlong *)pFVar8 + 0x20))();
  this_01 = UScriptStruct::GetCppStructOps(this_00);
  uVar1 = this_01->Alignment;
  uVar2 = this_01->Size;
  bVar5 = this->field_0x80;
  if ((bVar5 & 1) != 0) {
    pFVar8 = this;
    if ((bVar5 & 2) == 0) {
      pFVar8 = *(FMovieSceneEvalTemplatePtr **)this;
    }
    this->field_0x80 = bVar5 & 0xfe;
    (*(code *)**(undefined8 **)pFVar8)(pFVar8,0);
    bVar5 = this->field_0x80;
    if ((bVar5 & 2) == 0) {
      FMemory::Free(*(void **)this);
      bVar5 = this->field_0x80;
    }
  }
  if ((uVar2 < 0x81) && (uVar1 < 9)) {
    this->field_0x80 = bVar5 | 2;
  }
  else {
    this->field_0x80 = bVar5 & 0xfd;
    pvVar7 = FMemory::Malloc((ulonglong)uVar2,uVar1);
    *(void **)this = pvVar7;
  }
  this->field_0x80 = this->field_0x80 | 1;
  pFVar8 = this;
  if ((this->field_0x80 & 2) == 0) {
    pFVar8 = *(FMovieSceneEvalTemplatePtr **)this;
  }
  pFVar3 = this_01->FakeVPtr;
  if ((pFVar3->Flags & Construct) == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!!(this->Flags & FuncFlag)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x660,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
      return pFVar8;
    }
  }
  (**(code **)(pFVar3 + 1))(pFVar8);
  if ((param_1->field_0x80 & 1) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FMovieSceneEvalTemplatePtr *)(*pcVar4)();
      return pFVar8;
    }
  }
  if ((param_1->field_0x80 & 2) == 0) {
    param_1 = *(FMovieSceneEvalTemplatePtr **)param_1;
  }
  UScriptStruct::ICppStructOps::Copy(this_01,pFVar8,param_1,1);
  return this;
}

// StaticStruct @ 146164a60

UScriptStruct * __cdecl FMovieSceneEvalTemplatePtr::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEvalTemplatePtr,(UObject *)pUVar1,
                         L"MovieSceneEvalTemplatePtr");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneEvalTemplatePtr.OuterSingleton;
}

// FMovieSceneEvalTemplatePtr @ 14617edc0

FMovieSceneEvalTemplatePtr * __thiscall
FMovieSceneEvalTemplatePtr::FMovieSceneEvalTemplatePtr
          (FMovieSceneEvalTemplatePtr *this,FMovieSceneEvalTemplatePtr *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  bVar2 = this->field_0x80 & 0xfe;
  this->field_0x80 = bVar2 | 2;
  if ((param_1->field_0x80 & 1) != 0) {
    this->field_0x80 = bVar2 | 3;
    param_1->field_0x80 = param_1->field_0x80 & 0xfe;
    this->field_0x80 = (param_1->field_0x80 ^ this->field_0x80) & 2 ^ this->field_0x80;
    uVar1 = *(undefined8 *)&param_1->field_0x8;
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)&this->field_0x8 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x18;
    *(undefined8 *)&this->field_0x10 = *(undefined8 *)&param_1->field_0x10;
    *(undefined8 *)&this->field_0x18 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x28;
    *(undefined8 *)&this->field_0x20 = *(undefined8 *)&param_1->field_0x20;
    *(undefined8 *)&this->field_0x28 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x38;
    *(undefined8 *)&this->field_0x30 = *(undefined8 *)&param_1->field_0x30;
    *(undefined8 *)&this->field_0x38 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x48;
    *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
    *(undefined8 *)&this->field_0x48 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x58;
    *(undefined8 *)&this->field_0x50 = *(undefined8 *)&param_1->field_0x50;
    *(undefined8 *)&this->field_0x58 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x68;
    *(undefined8 *)&this->field_0x60 = *(undefined8 *)&param_1->field_0x60;
    *(undefined8 *)&this->field_0x68 = uVar1;
    uVar1 = *(undefined8 *)&param_1->field_0x78;
    *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
    *(undefined8 *)&this->field_0x78 = uVar1;
  }
  return this;
}

// Serialize @ 1461d1440

bool __thiscall
FMovieSceneEvalTemplatePtr::Serialize(FMovieSceneEvalTemplatePtr *this,FArchive *param_1)

{
  bool bVar1;
  
  bVar1 = SerializeInlineValue<FMovieSceneEvalTemplate,128>
                    ((TInlineValue<FMovieSceneEvalTemplate,128,8> *)this,param_1,true);
  return bVar1;
}

