// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 19

// RemoveAtImpl @ 14d0b60c0

void __thiscall
TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FLiveLinkPropertyData *_Dst;
  
  _Dst = (FLiveLinkPropertyData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x58);
  DestructItems<FLiveLinkPropertyData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x58);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6130

void __thiscall
TArray<FLiveLinkTransformKeys,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLiveLinkTransformKeys,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FLiveLinkTransformKeys *_Dst;
  
  _Dst = (FLiveLinkTransformKeys *)((this->AllocatorInstance).Data + (longlong)param_1 * 0xa0);
  DestructItems<FLiveLinkTransformKeys,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0xa0);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b61b0

void __thiscall
TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FMovieSceneBoolChannel *_Dst;
  
  _Dst = (FMovieSceneBoolChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x120);
  DestructItems<FMovieSceneBoolChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x120);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6230

void __thiscall
TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FMovieSceneByteChannel *_Dst;
  
  _Dst = (FMovieSceneByteChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x128);
  DestructItems<FMovieSceneByteChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b62b0

void __thiscall
TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  int iVar1;
  FMovieSceneFloatChannel *_Dst;
  
  _Dst = (FMovieSceneFloatChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x128);
  DestructItems<FMovieSceneFloatChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6330

void __thiscall
TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneIntegerChannel *_Dst;
  
  _Dst = (FMovieSceneIntegerChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x120);
  DestructItems<FMovieSceneIntegerChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x120);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b63b0

void __thiscall
TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FMovieSceneStringChannel *_Dst;
  
  _Dst = (FMovieSceneStringChannel *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x128);
  DestructItems<FMovieSceneStringChannel,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6430

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b64b0

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6530

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b65b0

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int>
            (_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6630

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b66b0

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2)
  ;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b6730

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
               *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<__int64>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2)
  ;
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14d0b67b0

void __thiscall
TArray<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
RemoveAtImpl(TArray<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *this,int param_1,int param_2)

{
  int iVar1;
  TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> *_Dst;
  
  _Dst = (TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> *)
         ((this->AllocatorInstance).Data + (longlong)param_1 * 0x10);
  DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 14d0b6830

void __thiscall
TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2
          )

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FMovieSceneFloatChannel *_Dst;
  
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = (FMovieSceneFloatChannel *)(pFVar1 + (longlong)param_1 * 0x128);
  DestructItems<FMovieSceneFloatChannel,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(_Dst,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x128,(longlong)iVar2 * 0x128);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14d0b72e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FLiveLinkPropertyData,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x58,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FLiveLinkPropertyData,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x58,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14d0b7410

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMovieSceneByteChannel,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x128,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

// SetNum @ 14d0b7540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar2 = *piVar1;
  if (iVar2 < param_1) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,param_1 - iVar2,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<FMovieSceneFloatChannel,int>
              ((this->AllocatorInstance).Data + (longlong)iVar5 * 0x128,param_1 - iVar2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar2) {
      uVar6 = iVar2 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uVar6 != 0) && (RemoveAtImpl(this,param_1,uVar6), param_2 == Default)) {
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
      }
    }
  }
  return;
}

