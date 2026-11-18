// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Constraints
// Functions: 6

// StaticStruct @ 14648dd80

UScriptStruct * __cdecl FMovieSceneConstraintChannel::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Constraints();
    Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneConstraintChannel,(UObject *)pUVar1,
                         L"MovieSceneConstraintChannel");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneConstraintChannel.OuterSingleton;
}

// GetData @ 14648ddc0

TMovieSceneChannelData<bool> * __thiscall
FMovieSceneConstraintChannel::GetData
          (FMovieSceneConstraintChannel *this,TMovieSceneChannelData<bool> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool> *pTVar3;
  
  FMovieSceneChannelData::FMovieSceneChannelData
            ((FMovieSceneChannelData *)__return_storage_ptr__,(FMovieSceneChannel *)this,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->field_0x70,
             (FKeyHandleLookupTable *)&this->field_0x98);
  __return_storage_ptr__->Values = (TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x88;
  if ((__return_storage_ptr__->_padding_ == 0) || (&this->field_0x88 == (undefined1 *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x122,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMovieSceneChannelData<bool> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// GetData @ 14648de40

TMovieSceneChannelData<bool_const_> * __thiscall
FMovieSceneConstraintChannel::GetData
          (FMovieSceneConstraintChannel *this,
          TMovieSceneChannelData<bool_const_> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TMovieSceneChannelData<bool_const_> *pTVar3;
  
  __return_storage_ptr__->Times =
       (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&this->field_0x70;
  __return_storage_ptr__->Values = (TArray<bool,TSizedDefaultAllocator<32>_> *)&this->field_0x88;
  if ((&this->field_0x70 == (undefined1 *)0x0) || (&this->field_0x88 == (undefined1 *)0x0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Times && Values",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                       ,0x2f3,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TMovieSceneChannelData<bool_const_> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}

// Evaluate @ 14648dea0

bool __thiscall
FMovieSceneConstraintChannel::Evaluate
          (FMovieSceneConstraintChannel *this,FFrameTime param_1,bool *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (*(int *)&this->field_0x78 == 0) {
    if (this->field_0x81 != '\0') {
      *param_2 = (bool)this->field_0x80;
      return true;
    }
  }
  else {
    if (*(int *)&this->field_0x78 < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (**(int **)&this->field_0x70 <= param_1.FrameNumber.Value.Value) {
      bVar2 = FMovieSceneBoolChannel::Evaluate((FMovieSceneBoolChannel *)this,param_1,param_2);
      return bVar2;
    }
    if (this->field_0x81 != '\0') {
      if (*(int *)&this->field_0x90 != 0) {
        if (*(int *)&this->field_0x90 < 1) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
        }
        if (**(char **)&this->field_0x88 == '\0') {
          *param_2 = (bool)this->field_0x80;
          return true;
        }
      }
    }
  }
  return false;
}

// FMovieSceneConstraintChannel @ 14649e410

FMovieSceneConstraintChannel * __thiscall
FMovieSceneConstraintChannel::FMovieSceneConstraintChannel(FMovieSceneConstraintChannel *this)

{
  *(undefined8 *)&this->field_0x20 = 2;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined8 *)&this->field_0x78 = 0;
  *(undefined8 *)&this->field_0x88 = 0;
  *(undefined8 *)&this->field_0x90 = 0;
  *(undefined8 *)&this->field_0x98 = 0;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined2 *)&this->field_0x80 = 0;
  *(undefined8 *)&this->field_0x40 = 2;
  *(undefined8 *)&this->field_0x60 = 2;
  *(undefined2 *)&this->field_0x68 = 0x404;
  *(undefined4 *)&this->field_0xc0 = 0;
  *(undefined4 *)&this->field_0xc4 = 0x80;
  *(undefined4 *)&this->field_0xcc = 0;
  *(undefined4 *)&this->field_0xc8 = 0xffffffff;
  *(undefined8 *)&this->field_0xd0 = 0;
  *(undefined8 *)&this->field_0xd8 = 0;
  *(undefined8 *)&this->field_0xf0 = 0;
  *(undefined4 *)&this->field_0xf8 = 0;
  *(undefined4 *)&this->field_0xfc = 0x80;
  *(undefined4 *)&this->field_0x104 = 0;
  *(undefined4 *)&this->field_0x100 = 0xffffffff;
  *(undefined8 *)&this->field_0x110 = 0;
  *(undefined4 *)&this->field_0x118 = 0;
  *(undefined ***)this = &___7FMovieSceneConstraintChannel__6B_;
  return this;
}

// IsInfinite @ 1464b9410

bool __thiscall FMovieSceneConstraintChannel::IsInfinite(FMovieSceneConstraintChannel *this)

{
  if (((*(int *)&this->field_0x78 == 0) && (this->field_0x81 != '\0')) && (this->field_0x80 != '\0')
     ) {
    return true;
  }
  return false;
}

