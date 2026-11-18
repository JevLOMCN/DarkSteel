// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 63

// ~FMovieSceneLiveLinkPropertyHandler<unsigned_char> @ 14d09eab0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::
~FMovieSceneLiveLinkPropertyHandler<unsigned_char>
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<int> @ 14d09eb00

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::~FMovieSceneLiveLinkPropertyHandler<int>
          (FMovieSceneLiveLinkPropertyHandler<int> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<float> @ 14d09eb50

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::~FMovieSceneLiveLinkPropertyHandler<float>
          (FMovieSceneLiveLinkPropertyHandler<float> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> @ 14d09eba0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::
~FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *
             )(this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<FColor> @ 14d09ebf0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::~FMovieSceneLiveLinkPropertyHandler<FColor>
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<FString> @ 14d09ec40

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::~FMovieSceneLiveLinkPropertyHandler<FString>
          (FMovieSceneLiveLinkPropertyHandler<FString> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ~FMovieSceneLiveLinkPropertyHandler<bool> @ 14d09ec90

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::~FMovieSceneLiveLinkPropertyHandler<bool>
          (FMovieSceneLiveLinkPropertyHandler<bool> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_> *)
             (this->Keys).AllocatorInstance.Data,(this->Keys).ArrayNum);
  pFVar1 = (this->Keys).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PropertyBinding).PropertyPath.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateChannels @ 14d0a4110

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,UScriptStruct *param_1,
          int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *pFVar5;
  TArray<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar6;
  
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x141,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(byte *)(pFVar5->_padding_ + 0x18) & 0x40) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FByteProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x149,L""), bVar3)) goto code_r0x00014d0a41d1;
  }
  else if (((*(byte *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) & 0x40) == 0) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner->IsA<FByteProperty>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                              ,0x145,L""), bVar3)) {
code_r0x00014d0a41d1:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->ByteChannel,param_2,Default);
  this->ElementCount = param_2;
  this_00 = &this->Keys;
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar1,&this_00->AllocatorInstance,&(this->Keys).ArrayNum,
                       &(this->Keys).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar1) {
    uVar6 = iVar1 - param_2;
    if (((int)(uVar6 | param_2) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      TArray<TArray<FLiveLinkPropertyKey<unsigned_char>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_2,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
    }
  }
  return;
}

// CreateChannels @ 14d0a42f0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<int> *this,UScriptStruct *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FProperty *pFVar7;
  uint uVar8;
  TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_> *this_00;
  
  pFVar7 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0xaa,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(byte *)(pFVar7->_padding_ + 0x18) & 0x80) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FIntProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0xb2,L""), bVar5)) goto code_r0x00014d0a43b6;
  }
  else if (((*(byte *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) & 0x80) == 0) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner->IsA<FIntProperty>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                              ,0xae,L""), bVar5)) {
code_r0x00014d0a43b6:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = this->PropertyStorage;
  this_00 = &pFVar3->IntegerChannel;
  iVar2 = (pFVar3->IntegerChannel).ArrayNum;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,param_2 - iVar2,&this_00->AllocatorInstance,
                       &(pFVar3->IntegerChannel).ArrayNum,&(pFVar3->IntegerChannel).ArrayMax);
    DefaultConstructItems<FMovieSceneIntegerChannel,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x120,param_2 - iVar2);
  }
  else {
    if (param_2 < 0) goto LAB_14d0a4582;
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FMovieSceneIntegerChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,&this_00->AllocatorInstance,(pFVar3->IntegerChannel).ArrayNum,
                   &(pFVar3->IntegerChannel).ArrayMax);
      }
    }
  }
  piVar1 = &(this->Keys).ArrayNum;
  this->ElementCount = param_2;
  iVar2 = *piVar1;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar2,&(this->Keys).AllocatorInstance,piVar1,
                       &(this->Keys).ArrayMax);
    memset((this->Keys).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(param_2 - iVar2) << 4);
  }
  else {
    if (param_2 < 0) {
LAB_14d0a4582:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TArray<FLiveLinkPropertyKey<int>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->Keys,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,
                   &(this->Keys).ArrayMax);
      }
    }
  }
  return;
}

// CreateChannels @ 14d0a45a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<float> *this,UScriptStruct *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FProperty *pFVar5;
  TArray<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar6;
  
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x4a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((pFVar5 == (FProperty *)0x0) || ((*(uint *)(pFVar5->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(uint *)(pFVar5->_padding_ + 0x18) >> 8 & 1) == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FFloatProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x52,L""), bVar3)) goto code_r0x00014d0a4669;
  }
  else if (((*(uint *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) >> 8 & 1) == 0) &&
          (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner->IsA<FFloatProperty>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                              ,0x4e,L""), bVar3)) {
code_r0x00014d0a4669:
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->FloatChannel,param_2,Default);
  this->ElementCount = param_2;
  this_00 = &this->Keys;
  iVar1 = (this->Keys).ArrayNum;
  if (iVar1 < param_2) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar1,&this_00->AllocatorInstance,&(this->Keys).ArrayNum,
                       &(this->Keys).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar4 * 0x10,0,
           (longlong)(param_2 - iVar1) << 4);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar1) {
    uVar6 = iVar1 - param_2;
    if (((int)(uVar6 | param_2) < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar6 != 0) {
      TArray<TArray<FLiveLinkPropertyKey<float>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(this_00,param_2,uVar6);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&this_00->AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax);
    }
  }
  return;
}

// CreateChannels @ 14d0a4780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,
          UScriptStruct *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FNameEntryId FVar6;
  int iVar7;
  FProperty *pFVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  pFVar8 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x1da,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar8 == (FProperty *)0x0) {
LAB_14d0a4880:
    pFVar8 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar9 = *(uint *)(pFVar8->_padding_ + 0x18);
    if ((uVar9 >> 0x15 & 1) != 0) {
      lVar10 = pFVar8[1]._padding_;
      if ((lVar10 == 0) || ((*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar10 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(ulonglong *)(*(longlong *)(lVar10 + 0x70) + 0x18);
      FVar6 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar3 != *(uint *)CONCAT44(extraout_var,FVar6.Value)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayInnerProperty->Struct->GetFName() == NAME_Vector",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                             ,0x1df,L""), bVar5)) goto code_r0x00014d0a48f0;
      goto LAB_14d0a48f1;
    }
    if ((uVar9 >> 0x14 & 1) == 0) goto LAB_14d0a4880;
  }
  uVar3 = *(ulonglong *)(pFVar8[1]._padding_ + 0x18);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  if ((uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar6.Value)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct->GetFName() == NAME_Vector",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x1e4,L""), bVar5)) {
code_r0x00014d0a48f0:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d0a48f1:
  TArray<FMovieSceneFloatChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->FloatChannel,param_2 * 3,Default);
  piVar1 = &(this->Keys).ArrayNum;
  this->ElementCount = param_2;
  iVar2 = *piVar1;
  if (iVar2 < param_2) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar2,&(this->Keys).AllocatorInstance,piVar1,
                       &(this->Keys).ArrayMax);
    memset((this->Keys).AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,
           (longlong)(param_2 - iVar2) << 4);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar2) {
    uVar9 = iVar2 - param_2;
    if (((int)(uVar9 | param_2) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TArray<FLiveLinkPropertyKey<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Keys,param_2,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax
                );
    }
  }
  return;
}

// CreateChannels @ 14d0a4a00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,UScriptStruct *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  code *pcVar4;
  bool bVar5;
  FNameEntryId FVar6;
  int iVar7;
  FProperty *pFVar8;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  uint uVar9;
  longlong lVar10;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  pFVar8 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x24c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (pFVar8 == (FProperty *)0x0) {
LAB_14d0a4b00:
    pFVar8 = (FProperty *)0x0;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CastResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x472,L"CastFieldChecked failed with 0x%016llx");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    uVar9 = *(uint *)(pFVar8->_padding_ + 0x18);
    if ((uVar9 >> 0x15 & 1) != 0) {
      lVar10 = pFVar8[1]._padding_;
      if ((lVar10 == 0) || ((*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar10 = 0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar3 = *(ulonglong *)(*(longlong *)(lVar10 + 0x70) + 0x18);
      FVar6 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar3 != *(uint *)CONCAT44(extraout_var,FVar6.Value)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayInnerProperty->Struct->GetFName() == NAME_Color",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                             ,0x251,L""), bVar5)) goto code_r0x00014d0a4b70;
      goto LAB_14d0a4b71;
    }
    if ((uVar9 >> 0x14 & 1) == 0) goto LAB_14d0a4b00;
  }
  uVar3 = *(ulonglong *)(pFVar8[1]._padding_ + 0x18);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res8);
  if ((uVar3 != *(uint *)CONCAT44(extraout_var_00,FVar6.Value)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StructProperty->Struct->GetFName() == NAME_Color",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x256,L""), bVar5)) {
code_r0x00014d0a4b70:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_14d0a4b71:
  TArray<FMovieSceneByteChannel,TSizedDefaultAllocator<32>_>::SetNum
            (&this->PropertyStorage->ByteChannel,param_2 * 4,Default);
  piVar1 = &(this->Keys).ArrayNum;
  this->ElementCount = param_2;
  iVar2 = *piVar1;
  if (iVar2 < param_2) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar2,&(this->Keys).AllocatorInstance,piVar1,
                       &(this->Keys).ArrayMax);
    memset((this->Keys).AllocatorInstance.Data + (longlong)iVar7 * 0x10,0,
           (longlong)(param_2 - iVar2) << 4);
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  if (param_2 < iVar2) {
    uVar9 = iVar2 - param_2;
    if (((int)(uVar9 | param_2) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (uVar9 != 0) {
      TArray<TArray<FLiveLinkPropertyKey<FColor>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
      ::RemoveAtImpl(&this->Keys,param_2,uVar9);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,&(this->Keys).ArrayMax
                );
    }
  }
  return;
}

// CreateChannels @ 14d0a4c90

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,UScriptStruct *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FProperty *pFVar7;
  uint uVar8;
  TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_> *this_00;
  
  pFVar7 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0xf6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0xe & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FStrProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0xfe,L""), bVar5)) goto code_r0x00014d0a4d5e;
  }
  else if (((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0xe & 1) == 0) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner->IsA<FStrProperty>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                              ,0xfa,L""), bVar5)) {
code_r0x00014d0a4d5e:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = this->PropertyStorage;
  this_00 = &pFVar3->StringChannel;
  iVar2 = (pFVar3->StringChannel).ArrayNum;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x128,8,param_2 - iVar2,&this_00->AllocatorInstance,
                       &(pFVar3->StringChannel).ArrayNum,&(pFVar3->StringChannel).ArrayMax);
    DefaultConstructItems<FMovieSceneStringChannel,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x128,param_2 - iVar2);
  }
  else {
    if (param_2 < 0) goto LAB_14d0a4f29;
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FMovieSceneStringChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x128,8,&this_00->AllocatorInstance,(pFVar3->StringChannel).ArrayNum,
                   &(pFVar3->StringChannel).ArrayMax);
      }
    }
  }
  piVar1 = &(this->Keys).ArrayNum;
  this->ElementCount = param_2;
  iVar2 = *piVar1;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar2,&(this->Keys).AllocatorInstance,piVar1,
                       &(this->Keys).ArrayMax);
    memset((this->Keys).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(param_2 - iVar2) << 4);
  }
  else {
    if (param_2 < 0) {
LAB_14d0a4f29:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TArray<FLiveLinkPropertyKey<FString>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->Keys,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,
                   &(this->Keys).ArrayMax);
      }
    }
  }
  return;
}

// CreateChannels @ 14d0a4f40

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::CreateChannels
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,UScriptStruct *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FProperty *pFVar7;
  uint uVar8;
  TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_> *this_00;
  
  pFVar7 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if ((param_2 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x18e,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((pFVar7 == (FProperty *)0x0) || ((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x15 & 1) == 0)) {
    if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x11 & 1) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FBoolProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x196,L""), bVar5)) goto code_r0x00014d0a500e;
  }
  else if (((*(uint *)(*(longlong *)(pFVar7[1]._padding_ + 8) + 0x18) >> 0x11 & 1) == 0) &&
          (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayProperty->Inner->IsA<FBoolProperty>()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                              ,0x192,L""), bVar5)) {
code_r0x00014d0a500e:
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = this->PropertyStorage;
  this_00 = &pFVar3->BoolChannel;
  iVar2 = (pFVar3->BoolChannel).ArrayNum;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x120,8,param_2 - iVar2,&this_00->AllocatorInstance,
                       &(pFVar3->BoolChannel).ArrayNum,&(pFVar3->BoolChannel).ArrayMax);
    DefaultConstructItems<FMovieSceneBoolChannel,int>
              ((this_00->AllocatorInstance).Data + (longlong)iVar6 * 0x120,param_2 - iVar2);
  }
  else {
    if (param_2 < 0) goto LAB_14d0a51da;
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<FMovieSceneBoolChannel,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                  (this_00,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x120,8,&this_00->AllocatorInstance,(pFVar3->BoolChannel).ArrayNum,
                   &(pFVar3->BoolChannel).ArrayMax);
      }
    }
  }
  piVar1 = &(this->Keys).ArrayNum;
  this->ElementCount = param_2;
  iVar2 = *piVar1;
  if (iVar2 < param_2) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_2 - iVar2,&(this->Keys).AllocatorInstance,piVar1,
                       &(this->Keys).ArrayMax);
    memset((this->Keys).AllocatorInstance.Data + (longlong)iVar6 * 0x10,0,
           (longlong)(param_2 - iVar2) << 4);
  }
  else {
    if (param_2 < 0) {
LAB_14d0a51da:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
    }
    if (param_2 < iVar2) {
      uVar8 = iVar2 - param_2;
      if (((int)(uVar8 | param_2) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (uVar8 != 0) {
        TArray<TArray<FLiveLinkPropertyKey<bool>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&this->Keys,param_2,uVar8);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&(this->Keys).AllocatorInstance,(this->Keys).ArrayNum,
                   &(this->Keys).ArrayMax);
      }
    }
  }
  return;
}

// FillFrame @ 14d0a7e80

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,int param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  uchar uVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  FLiveLinkPropertyData *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uchar *puVar8;
  UObject *pUVar9;
  FFieldClass *pFVar10;
  FField *pFVar11;
  FScriptArrayHelper_u_8 FVar12;
  FMovieSceneChannel *pFVar13;
  uint uVar14;
  TArrayView<unsigned_char,int> local_a8;
  FScriptArrayHelper local_98;
  FMovieSceneChannelData local_78;
  undefined8 *local_60;
  undefined1 local_58 [8];
  FFieldPath local_50;
  
  uVar14 = 0;
  if (0 < this->ElementCount) {
    do {
      pFVar4 = this->PropertyStorage;
      uVar7 = 0;
      if ((int)uVar14 < (pFVar4->ByteChannel).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar13 = (FMovieSceneChannel *)
                ((pFVar4->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x128);
      FMovieSceneChannelData::FMovieSceneChannelData
                (&local_78,pFVar13,
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar13[1].KeyAddedEvent,
                 (FKeyHandleLookupTable *)&pFVar13[1].KeyDeletedEvent.field_0x10);
      local_60 = (undefined8 *)&pFVar13[1].KeyAddedEvent.field_0x18;
      if (((local_78.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (local_60 == (undefined8 *)0x0)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_a8.DataPtr = (uchar *)*local_60;
      iVar3 = *(int *)(local_60 + 1);
      if ((iVar3 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_a8.ArrayNum = iVar3;
      puVar8 = TArrayView<unsigned_char,int>::operator[](&local_a8,param_1);
      uVar1 = *puVar8;
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_58,param_4);
      pUVar9 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_58);
      if (pUVar9 == (UObject *)0x0) {
        local_50.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar10 = FProperty::StaticClass();
        pFVar11 = FFieldPath::GetTyped(&local_50,pFVar10,(UStruct *)0x0);
        if ((pFVar11 != (FField *)0x0) &&
           ((pFVar11->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar11->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            puVar8 = FLiveLinkStructPropertyBindings::FPropertyWrapper::
                     GetPropertyAddress<unsigned_char>((FPropertyWrapper *)local_58,param_5,uVar14);
            if (puVar8 != (uchar *)0x0) {
              *puVar8 = uVar1;
            }
          }
          else {
            FVar12.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::
                 GetPropertyAddress<unsigned_char>((FPropertyWrapper *)local_58,param_5,0);
            EVar2 = *(EArrayPropertyFlags *)&pFVar11[2].Owner.Container;
            local_98.ElementAlignment = (**(code **)((pFVar11[2].Next)->_padding_ + 0x168))();
            local_98.InnerProperty = (FProperty *)pFVar11[2].Next;
            local_98.ElementSize = (local_98.InnerProperty)->ElementSize;
            local_98.field1_0x8.HeapArray = FVar12.HeapArray;
            local_98.ArrayFlags = EVar2;
            if ((local_98.ElementSize < 1) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_98.InnerProperty == (FProperty *)0x0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (((int)uVar14 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar6)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if ((local_98.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar14) {
              FScriptArrayHelper::AddValues
                        (&local_98,(uVar14 - (local_98.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_98.field1_0x8.FreezableArray)->ArrayNum != 0) {
              puVar8 = (uchar *)(local_98.field1_0x8.FreezableArray)->_padding_;
              if (((local_98.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                 (((ulonglong)puVar8 & 1) != 0)) {
                puVar8 = &(local_98.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar8 >> 0x18);
              }
              if (puVar8 + (longlong)local_98.ElementSize * (longlong)(int)uVar14 != (uchar *)0x0) {
                puVar8[(longlong)local_98.ElementSize * (longlong)(int)uVar14] = uVar1;
              }
            }
          }
        }
      }
      if (local_50.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Path.AllocatorInstance.Data);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a81c0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<int> *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  longlong lVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  FLiveLinkPropertyData *pFVar4;
  longlong lVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  uint uVar9;
  UObject *pUVar10;
  FFieldClass *pFVar11;
  FField *pFVar12;
  FScriptArrayHelper_u_8 FVar13;
  int *piVar14;
  FMovieSceneChannel *pFVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptArrayHelper local_b0;
  FMovieSceneChannelData local_90;
  longlong *local_78;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  uVar16 = 0;
  uVar17 = (ulonglong)param_1;
  if (0 < this->ElementCount) {
    lVar1 = uVar17 * 4;
    do {
      pFVar4 = this->PropertyStorage;
      uVar9 = 0;
      if ((int)uVar16 < (pFVar4->IntegerChannel).ArrayNum) {
        uVar9 = ~uVar16 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar15 = (FMovieSceneChannel *)
                ((pFVar4->IntegerChannel).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x120);
      FMovieSceneChannelData::FMovieSceneChannelData
                (&local_90,pFVar15,
                 (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar15[1].KeyAddedEvent,
                 (FKeyHandleLookupTable *)&pFVar15[1].KeyDeletedEvent.field_0x8);
      local_78 = (longlong *)&pFVar15[1].KeyAddedEvent.field_0x18;
      if (((local_90.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (local_78 == (longlong *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *local_78;
      lVar7 = local_78[1];
      if (((int)lVar7 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar9 = 0;
      if ((int)uVar17 < (int)lVar7) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar3 = *(int *)(lVar1 + lVar5);
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_4);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar10 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar11 = FProperty::StaticClass();
        pFVar12 = FFieldPath::GetTyped(&local_68,pFVar11,(UStruct *)0x0);
        if ((pFVar12 != (FField *)0x0) &&
           ((pFVar12->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar12->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            piVar14 = FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                                ((FPropertyWrapper *)local_70,param_5,uVar16);
            if (piVar14 != (int *)0x0) {
              *piVar14 = iVar3;
            }
          }
          else {
            FVar13.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                           ((FPropertyWrapper *)local_70,param_5,0);
            EVar2 = *(EArrayPropertyFlags *)&pFVar12[2].Owner.Container;
            local_b0.ElementAlignment = (**(code **)((pFVar12[2].Next)->_padding_ + 0x168))();
            local_b0.InnerProperty = (FProperty *)pFVar12[2].Next;
            local_b0.ElementSize = (local_b0.InnerProperty)->ElementSize;
            local_b0.field1_0x8.HeapArray = FVar13.HeapArray;
            local_b0.ArrayFlags = EVar2;
            if ((local_b0.ElementSize < 1) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((local_b0.InnerProperty == (FProperty *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((int)uVar16 < 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((local_b0.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar16) {
              FScriptArrayHelper::AddValues
                        (&local_b0,(uVar16 - (local_b0.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_b0.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar17 = (local_b0.field1_0x8.FreezableArray)->_padding_;
              if (((local_b0.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar17 & 1) != 0))
              {
                uVar17 = (longlong)&(local_b0.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar17 >> 0x18);
              }
              piVar14 = (int *)((longlong)local_b0.ElementSize * (longlong)(int)uVar16 + uVar17);
              if (piVar14 != (int *)0x0) {
                *piVar14 = iVar3;
              }
            }
          }
        }
      }
      if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Path.AllocatorInstance.Data);
      }
      uVar17 = (ulonglong)(uint)param_1;
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a8540

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<float> *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  float fVar1;
  EArrayPropertyFlags EVar2;
  int iVar3;
  FLiveLinkPropertyData *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  FMovieSceneFloatValue *pFVar9;
  UObject *pUVar10;
  FFieldClass *pFVar11;
  FField *pFVar12;
  FScriptArrayHelper_u_8 FVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  TArrayView<FMovieSceneFloatValue_const_,int> local_98;
  FScriptArrayHelper local_88;
  undefined1 local_68 [8];
  FFieldPath local_60;
  
  uVar17 = 0;
  if (0 < this->ElementCount) {
    lVar16 = 0;
    lVar18 = 0;
    do {
      pFVar4 = this->PropertyStorage;
      uVar8 = 0;
      if ((int)uVar17 < (pFVar4->FloatChannel).ArrayNum) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pFVar4->FloatChannel).AllocatorInstance.Data;
      local_98.DataPtr = *(FMovieSceneFloatValue **)(pFVar5 + lVar18 + 0x80);
      iVar3 = *(int *)(pFVar5 + lVar18 + 0x88);
      if ((iVar3 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_98.ArrayNum = iVar3;
      pFVar9 = TArrayView<FMovieSceneFloatValue_const_,int>::operator[](&local_98,param_1);
      fVar1 = pFVar9->Value;
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_68,param_4);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_68);
      if (pUVar10 == (UObject *)0x0) {
        local_60.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar11 = FProperty::StaticClass();
        pFVar12 = FFieldPath::GetTyped(&local_60,pFVar11,(UStruct *)0x0);
        if ((pFVar12 != (FField *)0x0) &&
           ((pFVar12->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar12->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pfVar15 = FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
                                ((FPropertyWrapper *)local_68,param_5,uVar17);
            if (pfVar15 != (float *)0x0) {
              *pfVar15 = fVar1;
            }
          }
          else {
            FVar13.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
                           ((FPropertyWrapper *)local_68,param_5,0);
            EVar2 = *(EArrayPropertyFlags *)&pFVar12[2].Owner.Container;
            local_88.ElementAlignment = (**(code **)((pFVar12[2].Next)->_padding_ + 0x168))();
            local_88.InnerProperty = (FProperty *)pFVar12[2].Next;
            local_88.ElementSize = (local_88.InnerProperty)->ElementSize;
            local_88.field1_0x8.HeapArray = FVar13.HeapArray;
            local_88.ArrayFlags = EVar2;
            if ((local_88.ElementSize < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((local_88.InnerProperty == (FProperty *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (((int)uVar17 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar17) {
              FScriptArrayHelper::AddValues
                        (&local_88,(uVar17 - (local_88.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar14 = (local_88.field1_0x8.FreezableArray)->_padding_;
              if (((local_88.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar14 & 1) != 0))
              {
                uVar14 = (longlong)&(local_88.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar14 >> 0x18);
              }
              pfVar15 = (float *)(local_88.ElementSize * lVar16 + uVar14);
              if (pfVar15 != (float *)0x0) {
                *pfVar15 = fVar1;
              }
            }
          }
        }
      }
      if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Path.AllocatorInstance.Data);
      }
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 1;
      lVar18 = lVar18 + 0x128;
    } while ((int)uVar17 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a8840

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,int param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FScriptArrayHelper_u_8 FVar7;
  ulonglong uVar8;
  TVector<double> *pTVar9;
  double *pdVar10;
  int iVar11;
  int iVar12;
  int local_res8 [2];
  int local_res10;
  TVector<double>_u_0 local_a8;
  FScriptArrayHelper local_90;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  iVar11 = 0;
  if (0 < this->ElementCount) {
    iVar12 = 0;
    local_res10 = param_1;
    do {
      local_res8[0] = iVar12;
      LiveLinkPropertyHandlerUtils::FillVector
                (local_res10,local_res8,&this->PropertyStorage->FloatChannel,
                 (TVector<double> *)&local_a8._s_0);
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_4);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar4 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar5 = FProperty::StaticClass();
        pFVar6 = FFieldPath::GetTyped(&local_68,pFVar5,(UStruct *)0x0);
        if ((pFVar6 != (FField *)0x0) &&
           ((pFVar6->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pTVar9 = FLiveLinkStructPropertyBindings::FPropertyWrapper::
                     GetPropertyAddress<UE::Math::TVector<double>_>
                               ((FPropertyWrapper *)local_70,param_5,iVar11);
            if (pTVar9 != (TVector<double> *)0x0) {
              (pTVar9->field0_0x0)._s_0.X = local_a8._s_0.X;
              (pTVar9->field0_0x0)._s_0.Y = local_a8._s_0.Y;
              (pTVar9->field0_0x0)._s_0.Z = local_a8._s_0.Z;
            }
          }
          else {
            FVar7.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::
                 GetPropertyAddress<UE::Math::TVector<double>_>
                           ((FPropertyWrapper *)local_70,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar6[2].Owner.Container;
            local_90.ElementAlignment = (**(code **)((pFVar6[2].Next)->_padding_ + 0x168))();
            local_90.InnerProperty = (FProperty *)pFVar6[2].Next;
            local_90.ElementSize = (local_90.InnerProperty)->ElementSize;
            local_90.field1_0x8.HeapArray = FVar7.HeapArray;
            local_90.ArrayFlags = EVar1;
            if ((local_90.ElementSize < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.InnerProperty == (FProperty *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((iVar11 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum <= iVar11) {
              FScriptArrayHelper::AddValues
                        (&local_90,(iVar11 - (local_90.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar8 = *(ulonglong *)&(local_90.field1_0x8.FreezableArray)->_padding_;
              if (((local_90.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0))
              {
                uVar8 = (longlong)&(local_90.field1_0x8.HeapArray)->field_0x0 +
                        ((longlong)uVar8 >> 0x18);
              }
              pdVar10 = (double *)((longlong)iVar11 * (longlong)local_90.ElementSize + uVar8);
              if (pdVar10 != (double *)0x0) {
                *pdVar10 = local_a8._s_0.X;
                pdVar10[1] = local_a8._s_0.Y;
                pdVar10[2] = local_a8._s_0.Z;
              }
            }
          }
        }
      }
      if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Path.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 3;
    } while (iVar11 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a8ac0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  FColor_u_0 FVar3;
  bool bVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FField *pFVar7;
  FScriptArrayHelper_u_8 FVar8;
  ulonglong uVar9;
  FColor_u_0 *pFVar10;
  int iVar11;
  int local_res8 [2];
  int local_res10;
  FColor_u_0 local_98 [2];
  FScriptArrayHelper local_90;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  iVar11 = 0;
  local_res10 = param_1;
  if (0 < this->ElementCount) {
    do {
      local_res8[0] = iVar11 * 4;
      LiveLinkPropertyHandlerUtils::FillColor
                (local_res10,local_res8,&this->PropertyStorage->ByteChannel,
                 (FColor *)&local_98[0]._s_0);
      FVar3 = local_98[0];
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_4);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar5 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar6 = FProperty::StaticClass();
        pFVar7 = FFieldPath::GetTyped(&local_68,pFVar6,(UStruct *)0x0);
        if ((pFVar7 != (FField *)0x0) &&
           ((pFVar7->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pFVar10 = &FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                                 ((FPropertyWrapper *)local_70,param_5,iVar11)->field0_0x0;
            if (pFVar10 != (FColor_u_0 *)0x0) {
              *pFVar10 = FVar3;
            }
          }
          else {
            FVar8.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                           ((FPropertyWrapper *)local_70,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar7[2].Owner.Container;
            local_90.ElementAlignment = (**(code **)((pFVar7[2].Next)->_padding_ + 0x168))();
            local_90.InnerProperty = (FProperty *)pFVar7[2].Next;
            local_90.ElementSize = (local_90.InnerProperty)->ElementSize;
            local_90.field1_0x8.HeapArray = FVar8.HeapArray;
            local_90.ArrayFlags = EVar1;
            if ((local_90.ElementSize < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.InnerProperty == (FProperty *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((iVar11 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum <= iVar11) {
              FScriptArrayHelper::AddValues
                        (&local_90,(iVar11 - (local_90.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar9 = *(ulonglong *)&(local_90.field1_0x8.FreezableArray)->_padding_;
              if (((local_90.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0))
              {
                uVar9 = (longlong)&(local_90.field1_0x8.HeapArray)->field_0x0 +
                        ((longlong)uVar9 >> 0x18);
              }
              pFVar10 = (FColor_u_0 *)((longlong)iVar11 * (longlong)local_90.ElementSize + uVar9);
              if (pFVar10 != (FColor_u_0 *)0x0) {
                *pFVar10 = FVar3;
              }
            }
          }
        }
      }
      if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Path.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a8d30

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,int param_1,FLiveLinkWorldTime *param_2
          ,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  FLiveLinkPropertyData *pFVar2;
  longlong lVar3;
  void *_Src;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  UObject *pUVar8;
  FFieldClass *pFVar9;
  FField *pFVar10;
  FScriptArrayHelper_u_8 FVar11;
  FScriptContainerElement *pFVar12;
  FMovieSceneChannel *pFVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  FString local_b8;
  FScriptArrayHelper local_a8;
  FMovieSceneChannelData local_88;
  longlong *local_70;
  undefined1 local_68 [8];
  FFieldPath local_60;
  
  uVar16 = 0;
  uVar15 = (ulonglong)param_1;
  if (0 < this->ElementCount) {
    lVar7 = uVar15 * 0x10;
    do {
      pFVar2 = this->PropertyStorage;
      uVar6 = 0;
      if ((int)uVar16 < (pFVar2->StringChannel).ArrayNum) {
        uVar6 = ~uVar16 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar13 = (FMovieSceneChannel *)
                ((pFVar2->StringChannel).AllocatorInstance.Data + (longlong)(int)uVar16 * 0x128);
      FMovieSceneChannelData::FMovieSceneChannelData
                (&local_88,pFVar13,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1)
                 ,(FKeyHandleLookupTable *)&pFVar13[1].KeyDeletedEvent.field_0x10);
      local_70 = (longlong *)&pFVar13[1].KeyAddedEvent.field_0x8;
      if (((local_88.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
          (local_70 == (longlong *)0x0)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Times && Values",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                             ,0x122,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *local_70;
      lVar14 = local_70[1];
      if (((int)lVar14 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar6 = 0;
      if ((int)uVar15 < (int)lVar14) {
        uVar6 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b8.Data.ArrayNum = *(int *)(lVar7 + 8 + lVar3);
      lVar14 = (longlong)local_b8.Data.ArrayNum;
      _Src = *(void **)(lVar7 + lVar3);
      if (local_b8.Data.ArrayNum == 0) {
        local_b8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_b8.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                   local_b8.Data.ArrayNum,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,_Src,lVar14 * 2);
      }
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_68,param_4);
      pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_68);
      if (pUVar8 == (UObject *)0x0) {
        local_60.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar9 = FProperty::StaticClass();
        pFVar10 = FFieldPath::GetTyped(&local_60,pFVar9,(UStruct *)0x0);
        if ((pFVar10 != (FField *)0x0) &&
           ((pFVar10->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar10->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pFVar12 = (FScriptContainerElement *)
                      FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
                                ((FPropertyWrapper *)local_68,param_5,uVar16);
          }
          else {
            FVar11.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
                           ((FPropertyWrapper *)local_68,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar10[2].Owner.Container;
            local_a8.ElementAlignment = (**(code **)((pFVar10[2].Next)->_padding_ + 0x168))();
            local_a8.InnerProperty = (FProperty *)pFVar10[2].Next;
            local_a8.ElementSize = (local_a8.InnerProperty)->ElementSize;
            local_a8.field1_0x8.HeapArray = FVar11.HeapArray;
            local_a8.ArrayFlags = EVar1;
            if ((local_a8.ElementSize < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((local_a8.InnerProperty == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (((int)uVar16 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if ((local_a8.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar16) {
              FScriptArrayHelper::AddValues
                        (&local_a8,(uVar16 - (local_a8.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_a8.field1_0x8.FreezableArray)->ArrayNum == 0) goto LAB_14d0a907c;
            pFVar12 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                       &(local_a8.field1_0x8.FreezableArray)->_padding_)->AllocatorInstance).Data;
            if (((local_a8.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)pFVar12 & 1) != 0)) {
              pFVar12 = (FScriptContainerElement *)
                        ((longlong)
                         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                           &(local_a8.field1_0x8.HeapArray)->field_0x0)->AllocatorInstance).Data +
                        ((longlong)pFVar12 >> 0x18));
            }
            pFVar12 = pFVar12 + (longlong)local_a8.ElementSize * (longlong)(int)uVar16;
          }
          if (pFVar12 != (FScriptContainerElement *)0x0) {
            ::FString::operator=((FString *)pFVar12,&local_b8);
          }
        }
LAB_14d0a907c:
        uVar15 = (ulonglong)(uint)param_1;
      }
      if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Path.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < this->ElementCount);
  }
  return;
}

// FillFrame @ 14d0a9100

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::FillFrame
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,int param_1,FLiveLinkWorldTime *param_2,
          TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4,
          FLiveLinkBaseFrameData *param_5)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  bool *pbVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  longlong lVar10;
  TArrayView<bool,int> local_58;
  undefined1 local_48 [32];
  
  uVar9 = 0;
  if (0 < this->ElementCount) {
    lVar10 = 0;
    do {
      pFVar2 = this->PropertyStorage;
      uVar5 = 0;
      if ((int)uVar9 < (pFVar2->BoolChannel).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar8 = (pFVar2->BoolChannel).AllocatorInstance.Data + lVar10;
      lVar6 = (**(code **)(*(longlong *)pFVar8 + 0x98))(pFVar8,local_48);
      local_58.DataPtr = (bool *)**(undefined8 **)(lVar6 + 0x18);
      iVar1 = *(int *)(*(undefined8 **)(lVar6 + 0x18) + 1);
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_58.ArrayNum = iVar1;
      pbVar7 = TArrayView<bool,int>::operator[](&local_58,param_1);
      FLiveLinkStructPropertyBindings::SetCurrentValueAt<bool>
                (&this->PropertyBinding,uVar9,param_4,param_5,*pbVar7);
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x120;
    } while ((int)uVar9 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0a9650

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  uchar uVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  FFieldClass *pFVar8;
  FField *pFVar9;
  FScriptArrayHelper_u_8 FVar10;
  uchar *puVar11;
  uint uVar12;
  uchar local_res8 [8];
  FFrameTime *local_res10;
  FScriptArrayHelper local_88;
  undefined1 local_68 [8];
  FFieldPath local_60;
  
  uVar12 = 0;
  local_res10 = param_1;
  if (0 < this->ElementCount) {
    do {
      pFVar2 = this->PropertyStorage;
      uVar6 = 0;
      if ((int)uVar12 < (pFVar2->ByteChannel).ArrayNum) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMovieSceneByteChannel::Evaluate
                ((FMovieSceneByteChannel *)
                 ((pFVar2->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x128),
                 *param_1,local_res8);
      uVar4 = local_res8[0];
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_68,param_4);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_68);
      if (pUVar7 == (UObject *)0x0) {
        local_60.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar8 = FProperty::StaticClass();
        pFVar9 = FFieldPath::GetTyped(&local_60,pFVar8,(UStruct *)0x0);
        param_1 = local_res10;
        if ((pFVar9 != (FField *)0x0) &&
           ((pFVar9->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar9->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            puVar11 = FLiveLinkStructPropertyBindings::FPropertyWrapper::
                      GetPropertyAddress<unsigned_char>((FPropertyWrapper *)local_68,param_5,uVar12)
            ;
            param_1 = local_res10;
            if (puVar11 != (uchar *)0x0) {
              *puVar11 = uVar4;
            }
          }
          else {
            FVar10.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::
                 GetPropertyAddress<unsigned_char>((FPropertyWrapper *)local_68,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar9[2].Owner.Container;
            local_88.ElementAlignment = (**(code **)((pFVar9[2].Next)->_padding_ + 0x168))();
            local_88.InnerProperty = (FProperty *)pFVar9[2].Next;
            local_88.ElementSize = (local_88.InnerProperty)->ElementSize;
            local_88.field1_0x8.HeapArray = FVar10.HeapArray;
            local_88.ArrayFlags = EVar1;
            if ((local_88.ElementSize < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.InnerProperty == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((int)uVar12 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar12) {
              FScriptArrayHelper::AddValues
                        (&local_88,(uVar12 - (local_88.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            param_1 = local_res10;
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum != 0) {
              puVar11 = (uchar *)(local_88.field1_0x8.FreezableArray)->_padding_;
              if (((local_88.ArrayFlags & UsesMemoryImageAllocator) != None) &&
                 (((ulonglong)puVar11 & 1) != 0)) {
                puVar11 = &(local_88.field1_0x8.HeapArray)->field_0x0 + ((longlong)puVar11 >> 0x18);
              }
              if (puVar11 + (longlong)local_88.ElementSize * (longlong)(int)uVar12 != (uchar *)0x0)
              {
                puVar11[(longlong)local_88.ElementSize * (longlong)(int)uVar12] = uVar4;
              }
            }
          }
        }
      }
      if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Path.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0a98f0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<int> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  ulonglong uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  long64 local_res8;
  FFrameTime *local_res10;
  FScriptArrayHelper local_88;
  undefined1 local_68 [8];
  FFieldPath local_60;
  
  uVar12 = 0;
  if (0 < this->ElementCount) {
    iVar13 = (int)local_res8;
    local_res10 = param_1;
    do {
      pFVar2 = this->PropertyStorage;
      uVar5 = 0;
      if ((int)uVar12 < (pFVar2->IntegerChannel).ArrayNum) {
        uVar5 = ~uVar12 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_res8 = 0;
      bVar4 = FMovieSceneIntegerChannel::Evaluate
                        ((FMovieSceneIntegerChannel *)
                         ((pFVar2->IntegerChannel).AllocatorInstance.Data +
                         (longlong)(int)uVar12 * 0x120),*param_1,&local_res8);
      if (bVar4) {
        iVar13 = (int)local_res8;
      }
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_68,param_4);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_68);
      if (pUVar6 == (UObject *)0x0) {
        local_60.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar7 = FProperty::StaticClass();
        pFVar8 = FFieldPath::GetTyped(&local_60,pFVar7,(UStruct *)0x0);
        param_1 = local_res10;
        if ((pFVar8 != (FField *)0x0) &&
           ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            piVar11 = FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                                ((FPropertyWrapper *)local_68,param_5,uVar12);
            param_1 = local_res10;
            if (piVar11 != (int *)0x0) {
              *piVar11 = iVar13;
            }
          }
          else {
            FVar9.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                           ((FPropertyWrapper *)local_68,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
            local_88.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
            local_88.InnerProperty = (FProperty *)pFVar8[2].Next;
            local_88.ElementSize = (local_88.InnerProperty)->ElementSize;
            local_88.field1_0x8.HeapArray = FVar9.HeapArray;
            local_88.ArrayFlags = EVar1;
            if ((local_88.ElementSize < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.InnerProperty == (FProperty *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((int)uVar12 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar12) {
              FScriptArrayHelper::AddValues
                        (&local_88,(uVar12 - (local_88.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            param_1 = local_res10;
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar10 = (local_88.field1_0x8.FreezableArray)->_padding_;
              if (((local_88.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar10 & 1) != 0))
              {
                uVar10 = (longlong)&(local_88.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar10 >> 0x18);
              }
              piVar11 = (int *)((longlong)local_88.ElementSize * (longlong)(int)uVar12 + uVar10);
              if (piVar11 != (int *)0x0) {
                *piVar11 = iVar13;
              }
            }
          }
        }
      }
      if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Path.AllocatorInstance.Data);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0a9bb0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<float> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  UObject *pUVar7;
  FFieldClass *pFVar8;
  FField *pFVar9;
  FScriptArrayHelper_u_8 FVar10;
  ulonglong uVar11;
  float *pfVar12;
  uint uVar13;
  float local_res8 [2];
  FFrameTime *local_res10;
  FScriptArrayHelper local_98;
  undefined1 local_78 [8];
  FFieldPath local_70;
  
  uVar13 = 0;
  local_res10 = param_1;
  if (0 < this->ElementCount) {
    do {
      pFVar2 = this->PropertyStorage;
      uVar6 = 0;
      if ((int)uVar13 < (pFVar2->FloatChannel).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FMovieSceneFloatChannel::Evaluate
                ((FMovieSceneFloatChannel *)
                 ((pFVar2->FloatChannel).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x128),
                 *param_1,local_res8);
      fVar4 = local_res8[0];
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_78,param_4);
      pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_78);
      if (pUVar7 == (UObject *)0x0) {
        local_70.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar8 = FProperty::StaticClass();
        pFVar9 = FFieldPath::GetTyped(&local_70,pFVar8,(UStruct *)0x0);
        if ((pFVar9 != (FField *)0x0) &&
           ((pFVar9->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar9->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pfVar12 = FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
                                ((FPropertyWrapper *)local_78,param_5,uVar13);
            if (pfVar12 != (float *)0x0) {
              *pfVar12 = fVar4;
            }
          }
          else {
            FVar10.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<float>
                           ((FPropertyWrapper *)local_78,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar9[2].Owner.Container;
            local_98.ElementAlignment = (**(code **)((pFVar9[2].Next)->_padding_ + 0x168))();
            local_98.InnerProperty = (FProperty *)pFVar9[2].Next;
            local_98.ElementSize = (local_98.InnerProperty)->ElementSize;
            local_98.field1_0x8.HeapArray = FVar10.HeapArray;
            local_98.ArrayFlags = EVar1;
            if ((local_98.ElementSize < 1) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_98.InnerProperty == (FProperty *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((int)uVar13 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_98.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar13) {
              FScriptArrayHelper::AddValues
                        (&local_98,(uVar13 - (local_98.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            param_1 = local_res10;
            if ((local_98.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar11 = (local_98.field1_0x8.FreezableArray)->_padding_;
              if (((local_98.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar11 & 1) != 0))
              {
                uVar11 = (longlong)&(local_98.field1_0x8.HeapArray)->field_0x0 +
                         ((longlong)uVar11 >> 0x18);
              }
              pfVar12 = (float *)((longlong)local_98.ElementSize * (longlong)(int)uVar13 + uVar11);
              if (pfVar12 != (float *)0x0) {
                *pfVar12 = fVar4;
              }
            }
          }
        }
      }
      if (local_70.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Path.AllocatorInstance.Data);
      }
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0a9e70

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  FFieldClass *pFVar5;
  FField *pFVar6;
  FScriptArrayHelper_u_8 FVar7;
  ulonglong uVar8;
  TVector<double> *pTVar9;
  double *pdVar10;
  int iVar11;
  TVector<double>_u_0 local_98;
  FScriptArrayHelper local_80;
  undefined1 local_60 [8];
  FFieldPath local_58;
  
  iVar11 = 0;
  if (0 < this->ElementCount) {
    do {
      GetChannelValueInterpolated(this,(TVector<double> *)&local_98._s_0,param_1,iVar11);
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_60,param_4);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_60);
      if (pUVar4 == (UObject *)0x0) {
        local_58.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar5 = FProperty::StaticClass();
        pFVar6 = FFieldPath::GetTyped(&local_58,pFVar5,(UStruct *)0x0);
        if ((pFVar6 != (FField *)0x0) &&
           ((pFVar6->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pTVar9 = FLiveLinkStructPropertyBindings::FPropertyWrapper::
                     GetPropertyAddress<UE::Math::TVector<double>_>
                               ((FPropertyWrapper *)local_60,param_5,iVar11);
            if (pTVar9 != (TVector<double> *)0x0) {
              (pTVar9->field0_0x0)._s_0.X = local_98._s_0.X;
              (pTVar9->field0_0x0)._s_0.Y = local_98._s_0.Y;
              (pTVar9->field0_0x0)._s_0.Z = local_98._s_0.Z;
            }
          }
          else {
            FVar7.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::
                 GetPropertyAddress<UE::Math::TVector<double>_>
                           ((FPropertyWrapper *)local_60,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar6[2].Owner.Container;
            local_80.ElementAlignment = (**(code **)((pFVar6[2].Next)->_padding_ + 0x168))();
            local_80.InnerProperty = (FProperty *)pFVar6[2].Next;
            local_80.ElementSize = (local_80.InnerProperty)->ElementSize;
            local_80.field1_0x8.HeapArray = FVar7.HeapArray;
            local_80.ArrayFlags = EVar1;
            if ((local_80.ElementSize < 1) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_80.InnerProperty == (FProperty *)0x0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((iVar11 < 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_80.field1_0x8.FreezableArray)->ArrayNum <= iVar11) {
              FScriptArrayHelper::AddValues
                        (&local_80,(iVar11 - (local_80.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_80.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar8 = *(ulonglong *)&(local_80.field1_0x8.FreezableArray)->_padding_;
              if (((local_80.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar8 & 1) != 0))
              {
                uVar8 = (longlong)&(local_80.field1_0x8.HeapArray)->field_0x0 +
                        ((longlong)uVar8 >> 0x18);
              }
              pdVar10 = (double *)((longlong)iVar11 * (longlong)local_80.ElementSize + uVar8);
              if (pdVar10 != (double *)0x0) {
                *pdVar10 = local_98._s_0.X;
                pdVar10[1] = local_98._s_0.Y;
                pdVar10[2] = local_98._s_0.Z;
              }
            }
          }
        }
      }
      if (local_58.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Path.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0aa0d0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  FColor_u_0 FVar3;
  bool bVar4;
  UObject *pUVar5;
  FFieldClass *pFVar6;
  FField *pFVar7;
  FScriptArrayHelper_u_8 FVar8;
  ulonglong uVar9;
  FColor_u_0 *pFVar10;
  int iVar11;
  int local_res8 [2];
  FFrameTime *local_res10;
  FColor_u_0 local_98 [2];
  FScriptArrayHelper local_90;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  iVar11 = 0;
  local_res10 = param_1;
  if (0 < this->ElementCount) {
    do {
      local_res8[0] = iVar11 * 4;
      LiveLinkPropertyHandlerUtils::FillColorInterpolated
                (local_res10,local_res8,&this->PropertyStorage->ByteChannel,
                 (FColor *)&local_98[0]._s_0);
      FVar3 = local_98[0];
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_4);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar5 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar6 = FProperty::StaticClass();
        pFVar7 = FFieldPath::GetTyped(&local_68,pFVar6,(UStruct *)0x0);
        if ((pFVar7 != (FField *)0x0) &&
           ((pFVar7->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar7->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pFVar10 = &FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                                 ((FPropertyWrapper *)local_70,param_5,iVar11)->field0_0x0;
            if (pFVar10 != (FColor_u_0 *)0x0) {
              *pFVar10 = FVar3;
            }
          }
          else {
            FVar8.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                           ((FPropertyWrapper *)local_70,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar7[2].Owner.Container;
            local_90.ElementAlignment = (**(code **)((pFVar7[2].Next)->_padding_ + 0x168))();
            local_90.InnerProperty = (FProperty *)pFVar7[2].Next;
            local_90.ElementSize = (local_90.InnerProperty)->ElementSize;
            local_90.field1_0x8.HeapArray = FVar8.HeapArray;
            local_90.ArrayFlags = EVar1;
            if ((local_90.ElementSize < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.InnerProperty == (FProperty *)0x0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((iVar11 < 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum <= iVar11) {
              FScriptArrayHelper::AddValues
                        (&local_90,(iVar11 - (local_90.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_90.field1_0x8.FreezableArray)->ArrayNum != 0) {
              uVar9 = *(ulonglong *)&(local_90.field1_0x8.FreezableArray)->_padding_;
              if (((local_90.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar9 & 1) != 0))
              {
                uVar9 = (longlong)&(local_90.field1_0x8.HeapArray)->field_0x0 +
                        ((longlong)uVar9 >> 0x18);
              }
              pFVar10 = (FColor_u_0 *)((longlong)iVar11 * (longlong)local_90.ElementSize + uVar9);
              if (pFVar10 != (FColor_u_0 *)0x0) {
                *pFVar10 = FVar3;
              }
            }
          }
        }
      }
      if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Path.AllocatorInstance.Data);
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0aa340

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  EArrayPropertyFlags EVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  ForAnyElementType _Src;
  int iVar6;
  bool bVar7;
  uint uVar8;
  FString *pFVar9;
  UObject *pUVar10;
  FFieldClass *pFVar11;
  FField *pFVar12;
  FScriptArrayHelper_u_8 FVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FString local_b8;
  ForAnyElementType local_a8;
  int local_a0;
  int local_9c;
  void *local_98;
  undefined8 local_90;
  FScriptArrayHelper local_88;
  undefined1 local_68 [8];
  FFieldPath local_60;
  
  bVar5 = false;
  bVar4 = false;
  uVar16 = 0;
  if (0 < this->ElementCount) {
    do {
      pFVar2 = this->PropertyStorage;
      uVar8 = 0;
      if ((int)uVar16 < (pFVar2->StringChannel).ArrayNum) {
        uVar8 = ~uVar16 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar9 = FMovieSceneStringChannel::Evaluate
                         ((FMovieSceneStringChannel *)
                          ((pFVar2->StringChannel).AllocatorInstance.Data +
                          (longlong)(int)uVar16 * 0x128),*param_1);
      if (pFVar9 == (FString *)0x0) {
        bVar4 = true;
        local_98 = (void *)0x0;
        local_90 = 0;
        local_b8.Data.ArrayNum = 0;
LAB_14d0aa4ba:
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayMax = 0;
      }
      else {
        local_a0 = (pFVar9->Data).ArrayNum;
        lVar15 = (longlong)local_a0;
        pFVar14 = (pFVar9->Data).AllocatorInstance.Data;
        bVar5 = true;
        local_a8.Data = (FScriptContainerElement *)0x0;
        if (local_a0 == 0) {
          local_9c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_a0,0,&local_a8,local_a0,&local_9c);
          memcpy(local_a8.Data,pFVar14,lVar15 * 2);
        }
        iVar6 = local_a0;
        _Src.Data = local_a8.Data;
        local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_b8.Data.ArrayNum = local_a0;
        if (local_a0 == 0) goto LAB_14d0aa4ba;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_a0,0,(ForAnyElementType *)&local_b8,local_a0,&local_b8.Data.ArrayMax);
        memcpy(local_b8.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar6 * 2);
      }
      if ((bVar4) && (bVar4 = false, local_98 != (void *)0x0)) {
        FMemory::Free(local_98);
      }
      if ((bVar5) && (bVar5 = false, local_a8.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_a8.Data);
      }
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_68,param_4);
      pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_68);
      if (pUVar10 == (UObject *)0x0) {
        local_60.ResolvedField = (FField *)0x0;
      }
      else {
        pFVar11 = FProperty::StaticClass();
        pFVar12 = FFieldPath::GetTyped(&local_60,pFVar11,(UStruct *)0x0);
        if ((pFVar12 != (FField *)0x0) &&
           ((pFVar12->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) == RF_NoFlags)) {
          if (((uint)(int)pFVar12->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
            pFVar14 = (FScriptContainerElement *)
                      FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
                                ((FPropertyWrapper *)local_68,param_5,uVar16);
          }
          else {
            FVar13.HeapArray =
                 (FScriptArray *)
                 FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FString>
                           ((FPropertyWrapper *)local_68,param_5,0);
            EVar1 = *(EArrayPropertyFlags *)&pFVar12[2].Owner.Container;
            local_88.ElementAlignment = (**(code **)((pFVar12[2].Next)->_padding_ + 0x168))();
            local_88.InnerProperty = (FProperty *)pFVar12[2].Next;
            local_88.ElementSize = (local_88.InnerProperty)->ElementSize;
            local_88.field1_0x8.HeapArray = FVar13.HeapArray;
            local_88.ArrayFlags = EVar1;
            if ((local_88.ElementSize < 1) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("ElementSize > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1177,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.InnerProperty == (FProperty *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InnerProperty",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x1178,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if (((int)uVar16 < 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Index>=0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x10be,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar16) {
              FScriptArrayHelper::AddValues
                        (&local_88,(uVar16 - (local_88.field1_0x8.FreezableArray)->ArrayNum) + 1);
            }
            if ((local_88.field1_0x8.FreezableArray)->ArrayNum == 0) goto LAB_14d0aa66c;
            pFVar14 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                       &(local_88.field1_0x8.FreezableArray)->_padding_)->AllocatorInstance).Data;
            if (((local_88.ArrayFlags & UsesMemoryImageAllocator) != None) &&
               (((ulonglong)pFVar14 & 1) != 0)) {
              pFVar14 = (FScriptContainerElement *)
                        ((longlong)
                         &(((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)
                           &(local_88.field1_0x8.HeapArray)->field_0x0)->AllocatorInstance).Data +
                        ((longlong)pFVar14 >> 0x18));
            }
            pFVar14 = pFVar14 + (longlong)local_88.ElementSize * (longlong)(int)uVar16;
          }
          if (pFVar14 != (FScriptContainerElement *)0x0) {
            ::FString::operator=((FString *)pFVar14,&local_b8);
          }
        }
      }
LAB_14d0aa66c:
      if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Path.AllocatorInstance.Data);
      }
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < this->ElementCount);
  }
  return;
}

// FillFrameInterpolated @ 14d0aa6f0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::FillFrameInterpolated
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,FFrameTime *param_1,
          FLiveLinkWorldTime *param_2,TOptional<FQualifiedFrameTime> *param_3,UScriptStruct *param_4
          ,FLiveLinkBaseFrameData *param_5)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  bool local_res8 [8];
  
  uVar6 = 0;
  if (0 < this->ElementCount) {
    lVar7 = 0;
    do {
      pFVar1 = this->PropertyStorage;
      uVar4 = 0;
      if ((int)uVar6 < (pFVar1->BoolChannel).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar5 = (pFVar1->BoolChannel).AllocatorInstance.Data + lVar7;
      (**(code **)(*(longlong *)pFVar5 + 0xa0))(pFVar5,*param_1,local_res8);
      FLiveLinkStructPropertyBindings::SetCurrentValueAt<bool>
                (&this->PropertyBinding,uVar6,param_4,param_5,local_res8[0]);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x120;
    } while ((int)uVar6 < this->ElementCount);
  }
  return;
}

// Finalize @ 14d0abab0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int *piVar1;
  FFrameNumber FVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FMovieSceneChannel *pFVar14;
  longlong lVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  FScriptContainerElement local_a8 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  int local_90;
  int iStack_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  FScriptContainerElement *local_68;
  FMovieSceneChannelData local_60;
  ForAnyElementType *local_48;
  
  uVar18 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_80 = 0;
    local_88 = 0;
    local_78 = 0;
    do {
      lVar15 = local_78;
      lVar5 = local_80;
      lVar16 = local_88;
      uVar9 = 0;
      if ((int)uVar18 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_70 = (this->Keys).AllocatorInstance.Data + lVar5;
      uVar9 = *(uint *)(local_70 + 8);
      uVar13 = (ulonglong)(int)uVar9;
      pFVar17 = *(FScriptContainerElement **)local_70;
      local_68 = pFVar17 + uVar13 * 8;
      while( true ) {
        pFVar6 = local_68;
        if (*(int *)(local_70 + 8) != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<unsigned_char>_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(local_res8);
        }
        if (pFVar17 == pFVar6) break;
        pFVar3 = this->PropertyStorage;
        uVar10 = 0;
        if ((int)uVar18 < (pFVar3->ByteChannel).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (FMovieSceneChannel *)((pFVar3->ByteChannel).AllocatorInstance.Data + lVar15);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_60,pFVar14,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar14[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar14[1].KeyDeletedEvent.field_0x10);
        local_48 = (ForAnyElementType *)&pFVar14[1].KeyAddedEvent.field_0x18;
        if (((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_48 == (ForAnyElementType *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_a8[0] = *pFVar17;
        FVar2.Value = *(int *)(pFVar17 + 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_60,FVar2);
        pFVar7 = local_48;
        if (((local_48->Data <= local_a8) &&
            (local_a8 < local_48->Data + *(int *)((longlong)&local_48[1].Data + 4))) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar12 + 1;
        memmove(pFVar7->Data + iVar11 + 1,pFVar7->Data + iVar11,(longlong)(iVar12 - iVar11));
        pFVar7->Data[iVar11] = local_a8[0];
        if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_60.OwningChannel)->KeyAddedEvent), bVar8)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_90 = iVar11;
          iStack_8c = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_8c,local_90);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_60.OwningChannel)->KeyAddedEvent,local_60.OwningChannel,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        pFVar17 = pFVar17 + 8;
        uVar13 = (ulonglong)uVar9;
        lVar15 = local_78;
        lVar16 = local_88;
      }
      local_88 = lVar16 + 1;
      local_80 = local_80 + 0x10;
      local_78 = lVar15 + 0x128;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (this->Keys).ArrayNum);
  }
  return;
}

// Finalize @ 14d0abe40

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<int> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int *piVar1;
  FFrameNumber FVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 *puVar6;
  ForAnyElementType *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  FMovieSceneChannel *pFVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  undefined4 local_a8 [2];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  int local_90;
  int iStack_8c;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  undefined4 *local_68;
  FMovieSceneChannelData local_60;
  ForAnyElementType *local_48;
  
  uVar18 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_80 = 0;
    local_88 = 0;
    local_78 = 0;
    do {
      lVar15 = local_78;
      lVar5 = local_80;
      lVar16 = local_88;
      uVar9 = 0;
      if ((int)uVar18 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_70 = (this->Keys).AllocatorInstance.Data + lVar5;
      uVar9 = *(uint *)(local_70 + 8);
      uVar13 = (ulonglong)(int)uVar9;
      puVar17 = *(undefined4 **)local_70;
      local_68 = puVar17 + uVar13 * 2;
      while( true ) {
        puVar6 = local_68;
        if (*(int *)(local_70 + 8) != (int)uVar13) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<int>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (puVar17 == puVar6) break;
        pFVar3 = this->PropertyStorage;
        uVar10 = 0;
        if ((int)uVar18 < (pFVar3->IntegerChannel).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (FMovieSceneChannel *)((pFVar3->IntegerChannel).AllocatorInstance.Data + lVar15);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_60,pFVar14,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar14[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar14[1].KeyDeletedEvent.field_0x8);
        local_48 = (ForAnyElementType *)&pFVar14[1].KeyAddedEvent.field_0x18;
        if (((local_60.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_48 == (ForAnyElementType *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2.Value = puVar17[1];
        local_a8[0] = *puVar17;
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_60,FVar2);
        pFVar7 = local_48;
        if (((local_48->Data <= (FScriptContainerElement *)local_a8) &&
            ((FScriptContainerElement *)local_a8 <
             local_48->Data + (longlong)*(int *)((longlong)&local_48[1].Data + 4) * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar12 + 1;
        memmove(pFVar7->Data + (longlong)iVar11 * 4 + 4,pFVar7->Data + (longlong)iVar11 * 4,
                (longlong)(iVar12 - iVar11) << 2);
        *(undefined4 *)(pFVar7->Data + (longlong)iVar11 * 4) = local_a8[0];
        if ((local_60.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_60.OwningChannel)->KeyAddedEvent), bVar8)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_90 = iVar11;
          iStack_8c = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_8c,local_90);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_60.OwningChannel)->KeyAddedEvent,local_60.OwningChannel,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        puVar17 = puVar17 + 2;
        uVar13 = (ulonglong)uVar9;
        lVar15 = local_78;
        lVar16 = local_88;
      }
      local_88 = lVar16 + 1;
      local_80 = local_80 + 0x10;
      local_78 = lVar15 + 0x120;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (this->Keys).ArrayNum);
  }
  return;
}

// Finalize @ 14d0ac1e0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<float> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  FScriptContainerElement *pFVar3;
  FLiveLinkPropertyData *pFVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  undefined4 *puVar7;
  FKeyDataOptimizationParams *pFVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  FMovieSceneFloatChannel *pFVar14;
  FMovieSceneFloatChannel *pFVar15;
  longlong lVar16;
  longlong lVar17;
  undefined4 *puVar18;
  longlong lVar19;
  undefined1 local_108;
  char local_107;
  undefined1 local_106;
  undefined1 local_105 [5];
  ForAnyElementType local_100;
  int local_f8 [2];
  ForAnyElementType local_f0;
  int local_e8 [4];
  uint local_d8;
  longlong local_d0;
  longlong local_c8;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> local_c0;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_b0;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 uStack_88;
  undefined2 local_87;
  undefined1 local_85;
  longlong local_80;
  undefined4 *local_78;
  FMovieSceneLiveLinkPropertyHandler<float> *local_70;
  FKeyDataOptimizationParams *local_68;
  
  local_e8[2] = 0;
  local_107 = param_1;
  local_70 = this;
  local_68 = param_2;
  if (0 < (this->Keys).ArrayNum) {
    local_d0 = 0;
    local_c8 = 0;
    local_80 = 0;
    do {
      lVar16 = local_c8;
      local_d8 = (uint)~local_e8[2] >> 0x1f;
      uVar13 = 0;
      if (local_e8[2] < (this->Keys).ArrayNum) {
        uVar13 = local_d8;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (this->Keys).AllocatorInstance.Data;
      local_f0.Data = (FScriptContainerElement *)0x0;
      local_e8[0] = 0;
      local_e8[1] = 0;
      uVar13 = *(uint *)(pFVar3 + lVar16 + 8);
      if ((int)uVar13 < 1) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
      }
      else {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,uVar13,&local_f0,local_e8,local_e8 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_f0.Data + (longlong)iVar10 * 4,uVar13);
      }
      local_100.Data = (FScriptContainerElement *)0x0;
      local_f8[0] = 0;
      local_f8[1] = 0;
      uVar13 = *(uint *)(pFVar3 + lVar16 + 8);
      if ((int)uVar13 < 1) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
      }
      else {
        iVar10 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1c,4,uVar13,&local_100,local_f8,local_f8 + 1);
        DefaultConstructItems<FMovieSceneFloatValue,int>
                  (local_100.Data + (longlong)iVar10 * 0x1c,uVar13);
      }
      local_e8[3] = *(int *)(pFVar3 + lVar16 + 8);
      uVar12 = (ulonglong)local_e8[3];
      uVar13 = 0;
      puVar18 = *(undefined4 **)(pFVar3 + lVar16);
      lVar19 = 0;
      lVar17 = 0;
      local_78 = puVar18 + uVar12 * 2;
      while( true ) {
        puVar7 = local_78;
        if (*(int *)(pFVar3 + lVar16 + 8) != (int)uVar12) {
          local_108 = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<float>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_108);
        }
        this = local_70;
        lVar16 = local_d0;
        iVar10 = local_e8[2];
        if (puVar18 == puVar7) break;
        uVar2 = puVar18[1];
        uVar11 = 0;
        if ((int)uVar13 < local_e8[0]) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uStack_94 = 0;
        uStack_90 = 0;
        uStack_88 = 2;
        *(undefined4 *)(local_f0.Data + lVar17) = uVar2;
        uVar2 = *puVar18;
        local_85 = 0;
        uVar11 = 0;
        if ((int)uVar13 < local_f8[0]) {
          uVar11 = ~uVar13 >> 0x1f;
        }
        uStack_8c = 0;
        local_87 = 0;
        uStack_9c = 0;
        local_a0 = uVar2;
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 4;
        uVar12 = (ulonglong)(uint)local_e8[3];
        pFVar1 = local_100.Data + lVar19;
        *(undefined4 *)pFVar1 = uVar2;
        *(undefined4 *)(pFVar1 + 4) = 0;
        *(undefined4 *)(pFVar1 + 8) = 0;
        *(undefined4 *)(pFVar1 + 0xc) = 0;
        *(undefined8 *)(local_100.Data + lVar19 + 0x10) = 0;
        *(undefined4 *)(local_100.Data + lVar19 + 0x18) = 2;
        lVar19 = lVar19 + 0x1c;
        puVar18 = puVar18 + 2;
        lVar16 = local_c8;
      }
      pFVar4 = local_70->PropertyStorage;
      uVar13 = 0;
      if (local_e8[2] < (pFVar4->FloatChannel).ArrayNum) {
        uVar13 = local_d8;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar17 = local_80;
      FVar6.Data = local_100.Data;
      lVar19 = (longlong)local_f8[0];
      pFVar14 = (FMovieSceneFloatChannel *)
                ((pFVar4->FloatChannel).AllocatorInstance.Data + local_80);
      local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c0.ArrayNum = local_f8[0];
      if (local_f8[0] == 0) {
        local_c0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,local_f8[0],0,&local_c0.AllocatorInstance,local_f8[0],&local_c0.ArrayMax);
        memcpy(local_c0.AllocatorInstance.Data,FVar6.Data,lVar19 * 0x1c);
      }
      FVar6.Data = local_f0.Data;
      lVar19 = (longlong)local_e8[0];
      local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b0.ArrayNum = local_e8[0];
      if (local_e8[0] == 0) {
        local_b0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_e8[0],0,&local_b0.AllocatorInstance,local_e8[0],&local_b0.ArrayMax);
        memcpy(local_b0.AllocatorInstance.Data,FVar6.Data,lVar19 << 2);
      }
      FMovieSceneFloatChannel::Set(pFVar14,&local_b0,&local_c0);
      if (local_100.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data);
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      local_e8[2] = iVar10 + 1;
      local_c8 = local_c8 + 0x10;
      local_d0 = lVar16 + 1;
      local_80 = lVar17 + 0x128;
    } while (local_e8[2] < (this->Keys).ArrayNum);
  }
  pFVar8 = local_68;
  pFVar4 = this->PropertyStorage;
  iVar10 = (pFVar4->FloatChannel).ArrayNum;
  pFVar14 = (FMovieSceneFloatChannel *)(pFVar4->FloatChannel).AllocatorInstance.Data;
  pFVar15 = pFVar14 + iVar10;
  if (local_107 == '\0') {
    while( true ) {
      if ((pFVar4->FloatChannel).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_105);
      }
      if (pFVar14 == pFVar15) break;
      FMovieSceneFloatChannel::AutoSetTangents(pFVar14,0.0);
      pFVar14 = pFVar14 + 1;
    }
  }
  else {
    while( true ) {
      if ((pFVar4->FloatChannel).ArrayNum != iVar10) {
        `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_106);
      }
      if (pFVar14 == pFVar15) break;
      UE::MovieScene::Optimize<FMovieSceneFloatChannel>(pFVar14,pFVar8);
      pFVar14 = pFVar14 + 1;
    }
  }
  return;
}

// Finalize @ 14d0ac6d0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  undefined4 uVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  FKeyDataOptimizationParams *pFVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  FMovieSceneFloatChannel *this_00;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  FMovieSceneFloatChannel *pFVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  double *pdVar18;
  ulonglong uVar19;
  double *pdVar20;
  longlong lVar21;
  float fVar22;
  undefined1 local_198;
  char local_197;
  ForAnyElementType local_190;
  undefined8 local_188;
  ForAnyElementType local_180;
  uint local_178 [2];
  ForAnyElementType local_170;
  int local_168 [2];
  undefined1 local_160;
  undefined1 local_15f [7];
  ForAnyElementType local_158;
  int local_150 [6];
  longlong local_138;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> local_130;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_120;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> local_110;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_100;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> local_f0;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_e0;
  float local_d0;
  undefined8 uStack_cc;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 uStack_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  float local_b0;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 uStack_98;
  undefined2 local_97;
  undefined1 local_95;
  float local_90;
  undefined8 uStack_8c;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_78;
  undefined2 local_77;
  undefined1 local_75;
  FScriptContainerElement *local_70;
  FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *local_68;
  FKeyDataOptimizationParams *local_60;
  
  local_150[2] = 0;
  local_197 = param_1;
  local_68 = this;
  local_60 = param_2;
  if (0 < (this->Keys).ArrayNum) {
    local_138 = 0;
    local_150[3] = 2;
    do {
      lVar21 = local_138;
      uVar15 = 0;
      uVar7 = 0;
      if (local_150[2] < (this->Keys).ArrayNum) {
        uVar7 = (uint)~local_150[2] >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar12 = (this->Keys).AllocatorInstance.Data;
      local_170.Data = (FScriptContainerElement *)0x0;
      local_168[0] = 0;
      local_168[1] = 0;
      uVar7 = *(uint *)(pFVar12 + lVar21 + 8);
      local_70 = pFVar12;
      if ((int)uVar7 < 1) {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
      }
      else {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,uVar7,&local_170,local_168,local_168 + 1);
        DefaultConstructItems<FFrameNumber,int>(local_170.Data + (longlong)iVar8 * 4,uVar7);
      }
      local_158.Data = (FScriptContainerElement *)0x0;
      local_178[0] = 0;
      local_150[0] = 0;
      local_150[1] = 0;
      local_180.Data = (FScriptContainerElement *)0x0;
      local_178[1] = 0;
      local_190.Data = (FScriptContainerElement *)0x0;
      local_188 = 0;
      uVar7 = *(uint *)(pFVar12 + lVar21 + 8);
      if ((int)uVar7 < 1) {
        uVar17 = uVar15;
        uVar19 = uVar15;
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
      }
      else {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,uVar7,&local_158,local_150,local_150 + 1);
        DefaultConstructItems<FMovieSceneFloatValue,int>
                  (local_158.Data + (longlong)iVar8 * 0x1c,uVar7);
        uVar17 = (ulonglong)local_178[0];
        uVar19 = local_188 & 0xffffffff;
      }
      iVar8 = (int)uVar19;
      uVar7 = *(uint *)(pFVar12 + lVar21 + 8);
      uVar11 = (uint)uVar17;
      if ((int)uVar11 < (int)uVar7) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,uVar7 - uVar11,&local_180,(int *)local_178,(int *)(local_178 + 1))
        ;
        DefaultConstructItems<FMovieSceneFloatValue,int>
                  (local_180.Data + (longlong)iVar8 * 0x1c,uVar7 - uVar11);
LAB_14d0ac96e:
        iVar8 = (int)local_188;
      }
      else {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        if ((int)uVar7 < (int)uVar11) {
          uVar14 = uVar11 - uVar7;
          if ((int)(uVar7 | uVar14) < 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (int)local_188;
            uVar11 = local_178[0];
          }
          if (uVar14 != 0) {
            iVar8 = (uVar11 - uVar7) - uVar14;
            if (iVar8 != 0) {
              memmove(local_180.Data + (longlong)(int)uVar7 * 0x1c,
                      local_180.Data + (longlong)(int)uVar7 * 0x1c + (longlong)(int)uVar14 * 0x1c,
                      (longlong)iVar8 * 0x1c);
              uVar11 = local_178[0];
            }
            local_178[0] = uVar11 - uVar14;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,&local_180,local_178[0],(int *)(local_178 + 1));
            goto LAB_14d0ac96e;
          }
        }
      }
      uVar7 = *(uint *)(pFVar12 + lVar21 + 8);
      if (iVar8 < (int)uVar7) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1c,4,uVar7 - iVar8,&local_190,(int *)&local_188,
                           (int *)((longlong)&local_188 + 4));
        DefaultConstructItems<FMovieSceneFloatValue,int>
                  (local_190.Data + (longlong)iVar9 * 0x1c,uVar7 - iVar8);
      }
      else {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
        }
        if ((int)uVar7 < iVar8) {
          uVar11 = iVar8 - uVar7;
          if ((int)(uVar7 | uVar11) < 0) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar6) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            iVar8 = (int)local_188;
          }
          if (uVar11 != 0) {
            iVar9 = (iVar8 - uVar7) - uVar11;
            if (iVar9 != 0) {
              memmove(local_190.Data + (longlong)(int)uVar7 * 0x1c,
                      local_190.Data + (longlong)(int)uVar7 * 0x1c + (longlong)(int)uVar11 * 0x1c,
                      (longlong)iVar9 * 0x1c);
              iVar8 = (int)local_188;
            }
            local_188 = CONCAT44(local_188._4_4_,iVar8 - uVar11);
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1c,4,&local_190,iVar8 - uVar11,(int *)((longlong)&local_188 + 4));
          }
        }
      }
      local_150[4] = *(int *)(pFVar12 + lVar21 + 8);
      uVar10 = (ulonglong)local_150[4];
      pdVar20 = *(double **)(pFVar12 + lVar21);
      pdVar18 = pdVar20 + uVar10 * 4;
      uVar17 = uVar15;
      uVar19 = uVar15;
      while( true ) {
        if (*(int *)(pFVar12 + local_138 + 8) != (int)uVar10) {
          local_198 = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<UE::Math::TVector<double>_>_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(&local_198);
        }
        this = local_68;
        iVar8 = local_150[3];
        if (pdVar20 == pdVar18) break;
        uVar1 = *(undefined4 *)(pdVar20 + 3);
        uVar14 = (uint)uVar15;
        uVar11 = ~uVar14 >> 0x1f;
        uVar7 = 0;
        if ((int)uVar14 < local_168[0]) {
          uVar7 = uVar11;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_c4 = 0;
        uStack_c0 = 0;
        uStack_b8 = 2;
        *(undefined4 *)(local_170.Data + uVar17) = uVar1;
        local_b5 = 0;
        fVar22 = (float)*pdVar20;
        uVar7 = 0;
        if ((int)uVar14 < local_150[0]) {
          uVar7 = uVar11;
        }
        uStack_bc = 0;
        local_b7 = 0;
        uStack_cc = 0;
        local_d0 = fVar22;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_a4 = 0;
        uStack_a0 = 0;
        uStack_98 = 2;
        uStack_9c = 0;
        pFVar12 = local_158.Data + uVar19;
        *(float *)pFVar12 = fVar22;
        *(float *)(pFVar12 + 4) = 0.0;
        *(float *)(pFVar12 + 8) = 0.0;
        *(float *)(pFVar12 + 0xc) = 0.0;
        local_97 = 0;
        *(undefined8 *)(local_158.Data + uVar19 + 0x10) = 0;
        *(undefined4 *)(local_158.Data + uVar19 + 0x18) = 2;
        local_95 = 0;
        fVar22 = (float)pdVar20[1];
        uVar7 = 0;
        if ((int)uVar14 < (int)local_178[0]) {
          uVar7 = uVar11;
        }
        uStack_ac = 0;
        local_b0 = fVar22;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_78 = 2;
        uStack_7c = 0;
        pFVar12 = local_180.Data + uVar19;
        *(float *)pFVar12 = fVar22;
        *(float *)(pFVar12 + 4) = 0.0;
        *(float *)(pFVar12 + 8) = 0.0;
        *(float *)(pFVar12 + 0xc) = 0.0;
        local_77 = 0;
        *(undefined8 *)(local_180.Data + uVar19 + 0x10) = 0;
        *(undefined4 *)(local_180.Data + uVar19 + 0x18) = 2;
        local_75 = 0;
        fVar22 = (float)pdVar20[2];
        uVar7 = 0;
        if ((int)uVar14 < (int)local_188) {
          uVar7 = uVar11;
        }
        uStack_8c = 0;
        local_90 = fVar22;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar17 = uVar17 + 4;
        pFVar12 = local_190.Data + uVar19;
        *(float *)pFVar12 = fVar22;
        *(float *)(pFVar12 + 4) = 0.0;
        *(float *)(pFVar12 + 8) = 0.0;
        *(float *)(pFVar12 + 0xc) = 0.0;
        *(undefined8 *)(local_190.Data + uVar19 + 0x10) = 0;
        *(undefined4 *)(local_190.Data + uVar19 + 0x18) = 2;
        uVar19 = uVar19 + 0x1c;
        uVar10 = (ulonglong)(uint)local_150[4];
        pdVar20 = pdVar20 + 4;
        pFVar12 = local_70;
      }
      lVar21 = (longlong)local_150[3];
      pFVar2 = local_68->PropertyStorage;
      iVar9 = local_150[3] - 2;
      uVar7 = 0;
      if (iVar9 < (pFVar2->FloatChannel).ArrayNum) {
        uVar7 = ~(local_150[3] - 2U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_158.Data;
      lVar16 = (longlong)local_150[0];
      pFVar12 = (pFVar2->FloatChannel).AllocatorInstance.Data;
      local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ArrayNum = local_150[0];
      if (local_150[0] == 0) {
        local_130.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,local_150[0],0,&local_130.AllocatorInstance,local_150[0],
                   &local_130.ArrayMax);
        memcpy(local_130.AllocatorInstance.Data,FVar4.Data,lVar16 * 0x1c);
      }
      FVar4.Data = local_170.Data;
      lVar16 = (longlong)local_168[0];
      local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_120.ArrayNum = local_168[0];
      if (local_168[0] == 0) {
        local_120.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_168[0],0,&local_120.AllocatorInstance,local_168[0],&local_120.ArrayMax)
        ;
        memcpy(local_120.AllocatorInstance.Data,FVar4.Data,lVar16 << 2);
      }
      FMovieSceneFloatChannel::Set
                ((FMovieSceneFloatChannel *)(pFVar12 + (longlong)iVar9 * 0x128),&local_120,
                 &local_130);
      pFVar2 = this->PropertyStorage;
      uVar7 = 0;
      if ((int)(iVar8 - 1U) < (pFVar2->FloatChannel).ArrayNum) {
        uVar7 = ~(iVar8 - 1U) >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_180.Data;
      lVar16 = (longlong)(int)local_178[0];
      pFVar12 = (pFVar2->FloatChannel).AllocatorInstance.Data;
      local_110.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_110.ArrayNum = local_178[0];
      if (local_178[0] == 0) {
        local_110.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,local_178[0],0,&local_110.AllocatorInstance,local_178[0],
                   &local_110.ArrayMax);
        memcpy(local_110.AllocatorInstance.Data,FVar4.Data,lVar16 * 0x1c);
      }
      FVar4.Data = local_170.Data;
      lVar16 = (longlong)local_168[0];
      local_100.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_100.ArrayNum = local_168[0];
      if (local_168[0] == 0) {
        local_100.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_168[0],0,&local_100.AllocatorInstance,local_168[0],&local_100.ArrayMax)
        ;
        memcpy(local_100.AllocatorInstance.Data,FVar4.Data,lVar16 << 2);
      }
      FMovieSceneFloatChannel::Set
                ((FMovieSceneFloatChannel *)(pFVar12 + (longlong)(int)(iVar8 - 1U) * 0x128),
                 &local_100,&local_110);
      pFVar2 = this->PropertyStorage;
      uVar7 = 0;
      if (iVar8 < (pFVar2->FloatChannel).ArrayNum) {
        uVar7 = (uint)~iVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar4.Data = local_190.Data;
      pFVar12 = (pFVar2->FloatChannel).AllocatorInstance.Data;
      lVar16 = (longlong)(int)local_188;
      local_f0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f0.ArrayNum = (int)local_188;
      if ((int)local_188 == 0) {
        local_f0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1c,4,(int)local_188,0,&local_f0.AllocatorInstance,(int)local_188,
                   &local_f0.ArrayMax);
        memcpy(local_f0.AllocatorInstance.Data,FVar4.Data,lVar16 * 0x1c);
      }
      FVar4.Data = local_170.Data;
      lVar16 = (longlong)local_168[0];
      local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e0.ArrayNum = local_168[0];
      if (local_168[0] == 0) {
        local_e0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_168[0],0,&local_e0.AllocatorInstance,local_168[0],&local_e0.ArrayMax);
        memcpy(local_e0.AllocatorInstance.Data,FVar4.Data,lVar16 << 2);
      }
      FMovieSceneFloatChannel::Set
                ((FMovieSceneFloatChannel *)(pFVar12 + lVar21 * 0x128),&local_e0,&local_f0);
      if (local_190.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.Data);
      }
      if (local_180.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data);
      }
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      if (local_170.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_170.Data);
      }
      local_150[3] = iVar8 + 3;
      local_150[2] = local_150[2] + 1;
      local_138 = local_138 + 0x10;
    } while (local_150[2] < (this->Keys).ArrayNum);
  }
  pFVar5 = local_60;
  pFVar2 = this->PropertyStorage;
  iVar8 = (pFVar2->FloatChannel).ArrayNum;
  this_00 = (FMovieSceneFloatChannel *)(pFVar2->FloatChannel).AllocatorInstance.Data;
  pFVar13 = this_00 + iVar8;
  if (local_197 == '\0') {
    while( true ) {
      if ((pFVar2->FloatChannel).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_15f);
      }
      if (this_00 == pFVar13) break;
      FMovieSceneFloatChannel::AutoSetTangents(this_00,0.0);
      this_00 = this_00 + 1;
    }
  }
  else {
    while( true ) {
      if ((pFVar2->FloatChannel).ArrayNum != iVar8) {
        `TCheckedPointerIterator<FMovieSceneFloatChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_160);
      }
      if (this_00 == pFVar13) break;
      UE::MovieScene::Optimize<FMovieSceneFloatChannel>(this_00,pFVar5);
      this_00 = this_00 + 1;
    }
  }
  return;
}

// Finalize @ 14d0ad190

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int *piVar1;
  FFrameNumber FVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FLiveLinkPropertyData **ppFVar6;
  FScriptContainerElement *pFVar7;
  ForAnyElementType *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  FMovieSceneChannel *pFVar15;
  FMovieSceneByteChannel *pFVar16;
  FMovieSceneByteChannel *pFVar17;
  FLiveLinkPropertyData **ppFVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res20 [8];
  FScriptContainerElement local_178 [8];
  FScriptContainerElement local_170 [8];
  FScriptContainerElement local_168 [8];
  FScriptContainerElement local_160 [8];
  undefined1 local_158 [4];
  uint local_154;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_150;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_140;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_130;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_120;
  uint local_110;
  int local_10c;
  int iStack_108;
  int local_104;
  int iStack_100;
  int local_fc;
  int iStack_f8;
  int local_f4;
  int iStack_f0;
  longlong local_e8;
  FScriptContainerElement *local_e0;
  FLiveLinkPropertyData **local_d8;
  FScriptContainerElement *local_d0;
  FMovieSceneChannelData local_c8;
  ForAnyElementType *local_b0;
  FMovieSceneChannelData local_a8;
  ForAnyElementType *local_90;
  FMovieSceneChannelData local_88;
  ForAnyElementType *local_70;
  FMovieSceneChannelData local_68;
  ForAnyElementType *local_50;
  
  local_154 = 0;
  if ((this->Keys).ArrayNum < 1) {
    ppFVar18 = &this->PropertyStorage;
  }
  else {
    local_e8 = 0;
    uVar19 = 2;
    do {
      lVar5 = local_e8;
      uVar10 = 0;
      if ((int)local_154 < (this->Keys).ArrayNum) {
        uVar10 = ~local_154 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_d8 = &this->PropertyStorage;
      local_e0 = (this->Keys).AllocatorInstance.Data + lVar5;
      local_110 = *(uint *)(local_e0 + 8);
      uVar14 = (ulonglong)(int)local_110;
      pFVar20 = *(FScriptContainerElement **)local_e0;
      local_d0 = pFVar20 + uVar14 * 8;
      while( true ) {
        pFVar7 = local_d0;
        ppFVar6 = local_d8;
        ppFVar18 = &this->PropertyStorage;
        if (*(int *)(local_e0 + 8) != (int)uVar14) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<FColor>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
          ppFVar18 = ppFVar6;
        }
        if (pFVar20 == pFVar7) break;
        pFVar3 = this->PropertyStorage;
        ppFVar18 = &this->PropertyStorage;
        uVar10 = 0;
        if ((int)(uVar19 - 2) < (pFVar3->ByteChannel).ArrayNum) {
          uVar10 = ~(uVar19 - 2) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (FMovieSceneChannel *)
                  ((pFVar3->ByteChannel).AllocatorInstance.Data +
                  (longlong)(int)(uVar19 - 2) * 0x128);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_c8,pFVar15,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar15[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar15[1].KeyDeletedEvent.field_0x10);
        local_b0 = (ForAnyElementType *)&pFVar15[1].KeyAddedEvent.field_0x18;
        if (((local_c8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_b0 == (ForAnyElementType *)0x0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_178[0] = pFVar20[2];
        FVar2.Value = *(int *)(pFVar20 + 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_c8,FVar2);
        pFVar8 = local_b0;
        if (((local_b0->Data <= local_178) &&
            (local_178 < local_b0->Data + *(int *)((longlong)&local_b0[1].Data + 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar8,piVar1);
        }
        *(int *)&pFVar8[1].Data = iVar12 + 1;
        memmove(pFVar8->Data + iVar11 + 1,pFVar8->Data + iVar11,(longlong)(iVar12 - iVar11));
        pFVar8->Data[iVar11] = local_178[0];
        if ((local_c8.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_c8.OwningChannel)->KeyAddedEvent), bVar9)) {
          local_150.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_150.ArrayNum = 0;
          local_150.ArrayMax = 0;
          local_10c = iVar11;
          iStack_108 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_150.AllocatorInstance,&local_150.ArrayMax);
          local_150.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_150.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_108,local_10c);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_c8.OwningChannel)->KeyAddedEvent,local_c8.OwningChannel,&local_150);
          if (local_150.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_150.AllocatorInstance.Data);
          }
        }
        pFVar3 = *ppFVar18;
        uVar10 = 0;
        if ((int)(uVar19 - 1) < (pFVar3->ByteChannel).ArrayNum) {
          uVar10 = ~(uVar19 - 1) >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (FMovieSceneChannel *)
                  ((pFVar3->ByteChannel).AllocatorInstance.Data +
                  (longlong)(int)(uVar19 - 1) * 0x128);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_a8,pFVar15,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar15[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar15[1].KeyDeletedEvent.field_0x10);
        local_90 = (ForAnyElementType *)&pFVar15[1].KeyAddedEvent.field_0x18;
        if (((local_a8.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_90 == (ForAnyElementType *)0x0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_170[0] = pFVar20[1];
        FVar2.Value = *(int *)(pFVar20 + 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_a8,FVar2);
        pFVar8 = local_90;
        if (((local_90->Data <= local_170) &&
            (local_170 < local_90->Data + *(int *)((longlong)&local_90[1].Data + 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar8,piVar1);
        }
        *(int *)&pFVar8[1].Data = iVar12 + 1;
        memmove(pFVar8->Data + iVar11 + 1,pFVar8->Data + iVar11,(longlong)(iVar12 - iVar11));
        pFVar8->Data[iVar11] = local_170[0];
        if ((local_a8.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_a8.OwningChannel)->KeyAddedEvent), bVar9)) {
          local_140.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_140.ArrayNum = 0;
          local_140.ArrayMax = 0;
          local_104 = iVar11;
          iStack_100 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_140.AllocatorInstance,&local_140.ArrayMax);
          local_140.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_140.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_100,local_104);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_a8.OwningChannel)->KeyAddedEvent,local_a8.OwningChannel,&local_140);
          if (local_140.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_140.AllocatorInstance.Data);
          }
        }
        pFVar3 = *ppFVar18;
        uVar10 = 0;
        if ((int)uVar19 < (pFVar3->ByteChannel).ArrayNum) {
          uVar10 = ~uVar19 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (FMovieSceneChannel *)
                  ((pFVar3->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x128);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_88,pFVar15,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar15[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar15[1].KeyDeletedEvent.field_0x10);
        local_70 = (ForAnyElementType *)&pFVar15[1].KeyAddedEvent.field_0x18;
        if (((local_88.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_70 == (ForAnyElementType *)0x0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_168[0] = *pFVar20;
        FVar2.Value = *(int *)(pFVar20 + 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_88,FVar2);
        pFVar8 = local_70;
        if (((local_70->Data <= local_168) &&
            (local_168 < local_70->Data + *(int *)((longlong)&local_70[1].Data + 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar8,piVar1);
        }
        *(int *)&pFVar8[1].Data = iVar12 + 1;
        memmove(pFVar8->Data + iVar11 + 1,pFVar8->Data + iVar11,(longlong)(iVar12 - iVar11));
        pFVar8->Data[iVar11] = local_168[0];
        if ((local_88.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_88.OwningChannel)->KeyAddedEvent), bVar9)) {
          local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_130.ArrayNum = 0;
          local_130.ArrayMax = 0;
          local_fc = iVar11;
          iStack_f8 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_130.AllocatorInstance,&local_130.ArrayMax);
          local_130.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_130.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_f8,local_fc);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_88.OwningChannel)->KeyAddedEvent,local_88.OwningChannel,&local_130);
          if (local_130.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.AllocatorInstance.Data);
          }
        }
        pFVar3 = *ppFVar18;
        uVar10 = uVar19 + 1;
        uVar13 = 0;
        if ((int)uVar10 < (pFVar3->ByteChannel).ArrayNum) {
          uVar13 = ~uVar10 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = (FMovieSceneChannel *)
                  ((pFVar3->ByteChannel).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x128);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_68,pFVar15,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar15[1].KeyAddedEvent,
                   (FKeyHandleLookupTable *)&pFVar15[1].KeyDeletedEvent.field_0x10);
        local_50 = (ForAnyElementType *)&pFVar15[1].KeyAddedEvent.field_0x18;
        if (((local_68.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_50 == (ForAnyElementType *)0x0)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_160[0] = pFVar20[3];
        FVar2.Value = *(int *)(pFVar20 + 4);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_68,FVar2);
        pFVar8 = local_50;
        if (((local_50->Data <= local_160) &&
            (local_160 < local_50->Data + *(int *)((longlong)&local_50[1].Data + 4))) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar8[1].Data;
        piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x101,pFVar8,piVar1);
        }
        *(int *)&pFVar8[1].Data = iVar12 + 1;
        memmove(pFVar8->Data + iVar11 + 1,pFVar8->Data + iVar11,(longlong)(iVar12 - iVar11));
        pFVar8->Data[iVar11] = local_160[0];
        if ((local_68.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar9 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_68.OwningChannel)->KeyAddedEvent), bVar9)) {
          local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_120.ArrayNum = 0;
          local_120.ArrayMax = 0;
          local_f4 = iVar11;
          iStack_f0 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_120.AllocatorInstance,&local_120.ArrayMax);
          local_120.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_120.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_f0,local_f4);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_68.OwningChannel)->KeyAddedEvent,local_68.OwningChannel,&local_120);
          if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.AllocatorInstance.Data);
          }
        }
        pFVar20 = pFVar20 + 8;
        uVar14 = (ulonglong)local_110;
      }
      uVar19 = uVar19 + 4;
      local_154 = local_154 + 1;
      local_e8 = local_e8 + 0x10;
    } while ((int)local_154 < (this->Keys).ArrayNum);
  }
  if (param_1) {
    pFVar3 = *ppFVar18;
    iVar11 = (pFVar3->ByteChannel).ArrayNum;
    pFVar16 = (FMovieSceneByteChannel *)(pFVar3->ByteChannel).AllocatorInstance.Data;
    pFVar17 = pFVar16 + iVar11;
    while( true ) {
      if ((pFVar3->ByteChannel).ArrayNum != iVar11) {
        `TCheckedPointerIterator<FMovieSceneByteChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_158);
      }
      if (pFVar16 == pFVar17) break;
      UE::MovieScene::Optimize<FMovieSceneByteChannel>(pFVar16,param_2);
      pFVar16 = pFVar16 + 1;
    }
  }
  return;
}

// Finalize @ 14d0adaf0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  int *piVar1;
  FFrameNumber FVar2;
  FLiveLinkPropertyData *pFVar3;
  code *pcVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType *pFVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  FMovieSceneChannel *pFVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  undefined1 local_res8 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_98;
  int local_88;
  int iStack_84;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  FMovieSceneChannelData local_58;
  ForAnyElementType *local_40;
  
  uVar18 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    do {
      lVar17 = local_70;
      lVar5 = local_78;
      lVar14 = local_80;
      uVar9 = 0;
      if ((int)uVar18 < (this->Keys).ArrayNum) {
        uVar9 = ~uVar18 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68 = (this->Keys).AllocatorInstance.Data + lVar5;
      uVar9 = *(uint *)(local_68 + 8);
      uVar16 = (ulonglong)(int)uVar9;
      pFVar15 = *(FScriptContainerElement **)local_68;
      local_60 = pFVar15 + uVar16 * 0x18;
      while( true ) {
        pFVar6 = local_60;
        if (*(int *)(local_68 + 8) != (int)uVar16) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<FString>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (pFVar15 == pFVar6) break;
        pFVar3 = this->PropertyStorage;
        uVar10 = 0;
        if ((int)uVar18 < (pFVar3->StringChannel).ArrayNum) {
          uVar10 = ~uVar18 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar13 = (FMovieSceneChannel *)((pFVar3->StringChannel).AllocatorInstance.Data + lVar17);
        FMovieSceneChannelData::FMovieSceneChannelData
                  (&local_58,pFVar13,
                   (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar13 + 1),
                   (FKeyHandleLookupTable *)&pFVar13[1].KeyDeletedEvent.field_0x10);
        local_40 = (ForAnyElementType *)&pFVar13[1].KeyAddedEvent.field_0x8;
        if (((local_58.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
            (local_40 == (ForAnyElementType *)0x0)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times && Values",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x122,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar2.Value = *(int *)(pFVar15 + 0x10);
        iVar11 = FMovieSceneChannelData::AddKeyInternal(&local_58,FVar2);
        pFVar7 = local_40;
        if (((local_40->Data <= pFVar15) &&
            (pFVar15 < local_40->Data + (longlong)*(int *)((longlong)&local_40[1].Data + 4) * 0x10))
           && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar12 = *(int *)&pFVar7[1].Data;
        piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
        if (iVar12 == *piVar1) {
          iVar12 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,pFVar7,piVar1);
        }
        *(int *)&pFVar7[1].Data = iVar12 + 1;
        memmove(pFVar7->Data + (longlong)iVar11 * 0x10 + 0x10,pFVar7->Data + (longlong)iVar11 * 0x10
                ,(longlong)(iVar12 - iVar11) << 4);
        ::FString::FString((FString *)(pFVar7->Data + (longlong)iVar11 * 0x10),(FString *)pFVar15);
        if ((local_58.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_58.OwningChannel)->KeyAddedEvent), bVar8)) {
          local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.ArrayNum = 0;
          local_98.ArrayMax = 0;
          local_88 = iVar11;
          iStack_84 = FVar2.Value;
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_98.AllocatorInstance,&local_98.ArrayMax);
          local_98.ArrayNum = iVar11 + 1;
          *(ulonglong *)(local_98.AllocatorInstance.Data + (longlong)iVar11 * 8) =
               CONCAT44(iStack_84,local_88);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_58.OwningChannel)->KeyAddedEvent,local_58.OwningChannel,&local_98);
          if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.AllocatorInstance.Data);
          }
        }
        pFVar15 = pFVar15 + 0x18;
        uVar16 = (ulonglong)uVar9;
        lVar14 = local_80;
        lVar17 = local_70;
      }
      local_80 = lVar14 + 1;
      local_78 = local_78 + 0x10;
      local_70 = lVar17 + 0x128;
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < (this->Keys).ArrayNum);
  }
  return;
}

// Finalize @ 14d0ade80

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::Finalize
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,bool param_1,
          FKeyDataOptimizationParams *param_2)

{
  FFrameNumber FVar1;
  FLiveLinkPropertyData *pFVar2;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  FMovieSceneChannelData *this_00;
  FScriptContainerElement *pFVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  undefined1 local_res20 [8];
  FScriptContainerElement local_a8 [8];
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  uint local_90;
  int local_8c;
  int iStack_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  undefined1 local_58 [32];
  
  uVar13 = 0;
  if (0 < (this->Keys).ArrayNum) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    do {
      lVar15 = local_70;
      lVar5 = local_78;
      lVar12 = local_80;
      uVar7 = 0;
      if ((int)uVar13 < (this->Keys).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_68 = (this->Keys).AllocatorInstance.Data + lVar5;
      local_90 = *(uint *)(local_68 + 8);
      uVar11 = (ulonglong)(int)local_90;
      pFVar14 = *(FScriptContainerElement **)local_68;
      local_60 = pFVar14 + uVar11 * 8;
      while( true ) {
        pFVar10 = local_60;
        if (*(int *)(local_68 + 8) != (int)uVar11) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FLiveLinkPropertyKey<bool>_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar14 == pFVar10) break;
        pFVar2 = this->PropertyStorage;
        uVar7 = 0;
        if ((int)uVar13 < (pFVar2->BoolChannel).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar10 = (pFVar2->BoolChannel).AllocatorInstance.Data + lVar15;
        this_00 = (FMovieSceneChannelData *)
                  (**(code **)(*(longlong *)pFVar10 + 0x98))(pFVar10,local_58);
        local_a8[0] = *pFVar14;
        FVar1.Value = *(int *)(pFVar14 + 4);
        iVar8 = FMovieSceneChannelData::AddKeyInternal(this_00,FVar1);
        pTVar3 = this_00[1].Times;
        pFVar10 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar10 <= local_a8) && (local_a8 < pFVar10 + pTVar3->ArrayMax)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = pTVar3->ArrayNum;
        if (iVar9 == pTVar3->ArrayMax) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x101,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
        }
        pFVar10 = (pTVar3->AllocatorInstance).Data + iVar8;
        pTVar3->ArrayNum = iVar9 + 1;
        memmove(pFVar10 + 1,pFVar10,(longlong)(iVar9 - iVar8));
        (pTVar3->AllocatorInstance).Data[iVar8] = local_a8[0];
        if ((this_00->OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar6 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &this_00->OwningChannel->KeyAddedEvent), bVar6)) {
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_8c = iVar8;
          iStack_88 = FVar1.Value;
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar8 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar8 * 8) =
               CONCAT44(iStack_88,local_8c);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&this_00->OwningChannel->KeyAddedEvent,this_00->OwningChannel,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        pFVar14 = pFVar14 + 8;
        uVar11 = (ulonglong)local_90;
        lVar12 = local_80;
        lVar15 = local_70;
      }
      local_80 = lVar12 + 1;
      local_78 = local_78 + 0x10;
      local_70 = lVar15 + 0x120;
      uVar13 = uVar13 + 1;
    } while ((int)uVar13 < (this->Keys).ArrayNum);
  }
  return;
}

// GetChannelValue @ 14d0b0110

uchar __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,int param_1,int param_2)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar uVar5;
  uint uVar6;
  uchar *puVar7;
  FMovieSceneChannel *pFVar8;
  TArrayView<unsigned_char,int> local_38;
  FMovieSceneChannelData local_28;
  undefined8 *local_10;
  
  pFVar2 = this->PropertyStorage;
  uVar6 = 0;
  if (param_2 < (pFVar2->ByteChannel).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  pFVar8 = (FMovieSceneChannel *)
           ((pFVar2->ByteChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,pFVar8,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar8[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
  local_10 = (undefined8 *)&pFVar8[1].KeyAddedEvent.field_0x18;
  if (((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_10 == (undefined8 *)0x0)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  local_38.DataPtr = (uchar *)*local_10;
  iVar1 = *(int *)(local_10 + 1);
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return uVar5;
  }
  local_38.ArrayNum = iVar1;
  puVar7 = TArrayView<unsigned_char,int>::operator[](&local_38,param_1);
  return *puVar7;
}

// GetChannelValue @ 14d0b0240

int __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<int> *this,int param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  FMovieSceneChannel *pFVar8;
  FMovieSceneChannelData local_28;
  longlong *local_10;
  
  pFVar1 = this->PropertyStorage;
  uVar6 = 0;
  if (param_2 < (pFVar1->IntegerChannel).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  pFVar8 = (FMovieSceneChannel *)
           ((pFVar1->IntegerChannel).AllocatorInstance.Data + (longlong)param_2 * 0x120);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,pFVar8,
             (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)&pFVar8[1].KeyAddedEvent,
             (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x8);
  local_10 = (longlong *)&pFVar8[1].KeyAddedEvent.field_0x18;
  if (((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_10 == (longlong *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  lVar2 = *local_10;
  lVar4 = local_10[1];
  if (((int)lVar4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  uVar6 = 0;
  if (param_1 < (int)lVar4) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    iVar7 = (*pcVar3)();
    return iVar7;
  }
  return *(int *)(lVar2 + (longlong)param_1 * 4);
}

// GetChannelValue @ 14d0b03a0

float __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<float> *this,int param_1,int param_2)

{
  int iVar1;
  FLiveLinkPropertyData *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FMovieSceneFloatValue *pFVar7;
  float fVar8;
  TArrayView<FMovieSceneFloatValue_const_,int> local_18;
  
  pFVar2 = this->PropertyStorage;
  uVar6 = 0;
  if (param_2 < (pFVar2->FloatChannel).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  pFVar3 = (pFVar2->FloatChannel).AllocatorInstance.Data;
  local_18.DataPtr = *(FMovieSceneFloatValue **)(pFVar3 + (longlong)param_2 * 0x128 + 0x80);
  iVar1 = *(int *)(pFVar3 + (longlong)param_2 * 0x128 + 0x88);
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      fVar8 = (float)(*pcVar4)();
      return fVar8;
    }
  }
  local_18.ArrayNum = iVar1;
  pFVar7 = TArrayView<FMovieSceneFloatValue_const_,int>::operator[](&local_18,param_1);
  return pFVar7->Value;
}

// GetChannelValue @ 14d0b0480

TVector<double> * __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,int param_1,int param_2)

{
  int local_res20 [2];
  
  local_res20[0] = param_2 * 3;
  LiveLinkPropertyHandlerUtils::FillVector
            (param_1,local_res20,&this->PropertyStorage->FloatChannel,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetChannelValue @ 14d0b04c0

FColor __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,int param_1,int param_2)

{
  undefined4 in_register_00000014;
  int in_R9D;
  int local_res20 [2];
  
  local_res20[0] = in_R9D * 4;
  LiveLinkPropertyHandlerUtils::FillColor
            (param_2,local_res20,&this->PropertyStorage->ByteChannel,
             (FColor *)CONCAT44(in_register_00000014,param_1));
  return (FColor)(FColor_u_0)param_1;
}

// GetChannelValue @ 14d0b0500

FString * __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,FString *__return_storage_ptr__,
          int param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  FMovieSceneChannel *pFVar8;
  FMovieSceneChannelData local_28;
  longlong *local_10;
  
  pFVar1 = this->PropertyStorage;
  uVar6 = 0;
  if (param_2 < (pFVar1->StringChannel).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  pFVar8 = (FMovieSceneChannel *)
           ((pFVar1->StringChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128);
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_28,pFVar8,(TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)(pFVar8 + 1),
             (FKeyHandleLookupTable *)&pFVar8[1].KeyDeletedEvent.field_0x10);
  local_10 = (longlong *)&pFVar8[1].KeyAddedEvent.field_0x8;
  if (((local_28.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_10 == (longlong *)0x0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  lVar2 = *local_10;
  lVar4 = local_10[1];
  if (((int)lVar4 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  uVar6 = 0;
  if (param_1 < (int)lVar4) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  ::FString::FString(__return_storage_ptr__,(FString *)((longlong)param_1 * 0x10 + lVar2));
  return __return_storage_ptr__;
}

// GetChannelValue @ 14d0b0680

bool __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::GetChannelValue
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,int param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  bool *pbVar7;
  FScriptContainerElement *pFVar8;
  TArrayView<bool,int> local_38;
  undefined1 local_28 [32];
  
  pFVar1 = this->PropertyStorage;
  uVar5 = 0;
  if (param_2 < (pFVar1->BoolChannel).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar8 = (pFVar1->BoolChannel).AllocatorInstance.Data + (longlong)param_2 * 0x120;
  lVar6 = (**(code **)(*(longlong *)pFVar8 + 0x98))(pFVar8,local_28);
  local_38.DataPtr = (bool *)**(undefined8 **)(lVar6 + 0x18);
  local_38.ArrayNum = *(int *)(*(undefined8 **)(lVar6 + 0x18) + 1);
  if (local_38.ArrayNum < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pbVar7 = TArrayView<bool,int>::operator[](&local_38,param_1);
  return *pbVar7;
}

// GetChannelValueInterpolated @ 14d0b0890

uchar __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar uVar4;
  uint uVar5;
  uchar local_res18 [16];
  
  pFVar1 = this->PropertyStorage;
  uVar5 = 0;
  if (param_2 < (pFVar1->ByteChannel).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  FMovieSceneByteChannel::Evaluate
            ((FMovieSceneByteChannel *)
             ((pFVar1->ByteChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128),*param_1,
             local_res18);
  return local_res18[0];
}

// GetChannelValueInterpolated @ 14d0b0930

int __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<int> *this,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long64 local_res8;
  int local_res18;
  
  pFVar1 = this->PropertyStorage;
  uVar4 = 0;
  if (param_2 < (pFVar1->IntegerChannel).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  local_res8 = 0;
  bVar3 = FMovieSceneIntegerChannel::Evaluate
                    ((FMovieSceneIntegerChannel *)
                     ((pFVar1->IntegerChannel).AllocatorInstance.Data + (longlong)param_2 * 0x120),
                     *param_1,&local_res8);
  if (bVar3) {
    local_res18 = (int)local_res8;
  }
  return local_res18;
}

// GetChannelValueInterpolated @ 14d0b09e0

float __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<float> *this,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  float local_res18 [4];
  
  pFVar1 = this->PropertyStorage;
  uVar4 = 0;
  if (param_2 < (pFVar1->FloatChannel).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            ((FMovieSceneFloatChannel *)
             ((pFVar1->FloatChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128),*param_1,
             local_res18);
  return local_res18[0];
}

// GetChannelValueInterpolated @ 14d0b0a80

TVector<double> * __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,
          TVector<double> *__return_storage_ptr__,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  float local_28;
  float local_24;
  float local_20 [2];
  
  pFVar1 = this->PropertyStorage;
  uVar7 = param_2 * 3;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar1->FloatChannel).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            ((FMovieSceneFloatChannel *)
             ((pFVar1->FloatChannel).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x128),*param_1
             ,&local_28);
  uVar6 = uVar7 + 1;
  uVar4 = 0;
  if ((int)uVar6 < (pFVar1->FloatChannel).ArrayNum) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            ((FMovieSceneFloatChannel *)
             ((pFVar1->FloatChannel).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x128),*param_1
             ,&local_24);
  uVar7 = uVar7 + 2;
  uVar6 = 0;
  if ((int)uVar7 < (pFVar1->FloatChannel).ArrayNum) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar2)();
      return pTVar5;
    }
  }
  FMovieSceneFloatChannel::Evaluate
            ((FMovieSceneFloatChannel *)
             ((pFVar1->FloatChannel).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x128),*param_1
             ,local_20);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)local_28;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)local_24;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (double)local_20[0];
  return __return_storage_ptr__;
}

// GetChannelValueInterpolated @ 14d0b0c30

FColor __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,FFrameTime *param_1,int param_2)

{
  undefined4 in_register_00000084;
  int in_R9D;
  int local_res20 [2];
  
  local_res20[0] = in_R9D * 4;
  LiveLinkPropertyHandlerUtils::FillColorInterpolated
            ((FFrameTime *)CONCAT44(in_register_00000084,param_2),local_res20,
             &this->PropertyStorage->ByteChannel,(FColor *)param_1);
  return (FColor)SUB84(param_1,0);
}

// GetChannelValueInterpolated @ 14d0b0c70

FString * __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,FString *__return_storage_ptr__,
          FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FString local_38;
  FString local_28;
  
  pFVar1 = this->PropertyStorage;
  uVar4 = 0;
  if (param_2 < (pFVar1->StringChannel).ArrayNum) {
    uVar4 = (uint)~param_2 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = FMovieSceneStringChannel::Evaluate
                     ((FMovieSceneStringChannel *)
                      ((pFVar1->StringChannel).AllocatorInstance.Data + (longlong)param_2 * 0x128),
                      *param_1);
  if (pFVar5 == (FString *)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    ::FString::FString(__return_storage_ptr__,&local_28);
    FVar6.Data = local_28.Data.AllocatorInstance.Data;
  }
  else {
    local_38.Data.ArrayNum = (pFVar5->Data).ArrayNum;
    lVar7 = (longlong)local_38.Data.ArrayNum;
    _Src = (pFVar5->Data).AllocatorInstance.Data;
    local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_38.Data.ArrayNum == 0) {
      local_38.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_38.Data.ArrayNum,
                 &local_38.Data.ArrayMax);
      memcpy(local_38.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
    }
    ::FString::FString(__return_storage_ptr__,&local_38);
    FVar6.Data = local_38.Data.AllocatorInstance.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  return __return_storage_ptr__;
}

// GetChannelValueInterpolated @ 14d0b0da0

bool __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::GetChannelValueInterpolated
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,FFrameTime *param_1,int param_2)

{
  FLiveLinkPropertyData *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [16];
  
  pFVar1 = this->PropertyStorage;
  uVar5 = 0;
  if (param_2 < (pFVar1->BoolChannel).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  pFVar6 = (pFVar1->BoolChannel).AllocatorInstance.Data + (longlong)param_2 * 0x120;
  (**(code **)(*(longlong *)pFVar6 + 0xa0))(pFVar6,*param_1,local_res18);
  return (bool)local_res18[0];
}

// InitializeFromExistingChannels @ 14d0b34a0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->ByteChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                       ,0x156,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 & 0x40) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FByteProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x161,L"");
        if (bVar4) goto code_r0x00014d0b356f;
      }
    }
    else if ((*(byte *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) & 0x40) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FByteProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x15d,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b356f:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3590

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<int> *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->IntegerChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                       ,0xbe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if (-1 < (char)uVar2) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FIntProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0xc9,L"");
        if (bVar4) goto code_r0x00014d0b365e;
      }
    }
    else if ((*(byte *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) & 0x80) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FIntProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0xc5,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b365e:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3670

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<float> *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->FloatChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                       ,0x5e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 8 & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FFloatProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x69,L"");
        if (bVar4) goto code_r0x00014d0b3744;
      }
    }
    else if ((*(uint *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) >> 8 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FFloatProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x65,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b3744:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3760

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,
          UScriptStruct *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  FProperty *pFVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  iVar6 = (this->PropertyStorage->FloatChannel).ArrayNum;
  if ((iVar6 != (iVar6 / 3 + (iVar6 >> 0x1f) +
                (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f)) * 3)
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("(PropertyStorage->FloatChannel.Num() % 3) == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                            ,0x1f0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->PropertyStorage->FloatChannel).ArrayNum;
  iVar6 = iVar6 / 3 + (iVar6 >> 0x1f) +
          (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  this->ElementCount = iVar6;
  if ((iVar6 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,499,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar1 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar1 >> 0x15 & 1) == 0) {
      if ((uVar1 >> 0x14 & 1) == 0) {
        pFVar5 = (FProperty *)0x0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(ulonglong *)(pFVar5[1]._padding_ + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar4.Value)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructProperty->Struct->GetFName() == NAME_Vector",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                             ,0x201,L""), bVar3)) goto code_r0x00014d0b3937;
    }
    else {
      lVar7 = pFVar5[1]._padding_;
      if ((lVar7 == 0) || ((*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar7 = 0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x70) + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
      if (uVar1 != *(uint *)CONCAT44(extraout_var,FVar4.Value)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayStructProperty->Struct->GetFName() == NAME_Vector",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x1fb,L"");
        if (!bVar3) {
          return;
        }
code_r0x00014d0b3937:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3950

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,UScriptStruct *param_1)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  FNameEntryId FVar4;
  FProperty *pFVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  
  uVar8 = (this->PropertyStorage->ByteChannel).ArrayNum & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar8 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PropertyStorage->ByteChannel.Num() % 4) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x261,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = (this->PropertyStorage->ByteChannel).ArrayNum;
  iVar6 = iVar6 / 3 + (iVar6 >> 0x1f) +
          (int)(((longlong)iVar6 / 3 + ((longlong)iVar6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  this->ElementCount = iVar6;
  if ((iVar6 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ElementCount > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x264,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar1 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar1 >> 0x15 & 1) == 0) {
      if ((uVar1 >> 0x14 & 1) == 0) {
        pFVar5 = (FProperty *)0x0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(ulonglong *)(pFVar5[1]._padding_ + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_res18);
      if ((uVar1 != *(uint *)CONCAT44(extraout_var_00,FVar4.Value)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructProperty->Struct->GetFName() == NAME_Color",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                             ,0x272,L""), bVar3)) goto code_r0x00014d0b3b2a;
    }
    else {
      lVar7 = pFVar5[1]._padding_;
      if ((lVar7 == 0) || ((*(uint *)(*(longlong *)(lVar7 + 8) + 0x18) >> 0x14 & 1) == 0)) {
        lVar7 = 0;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      uVar1 = *(ulonglong *)(*(longlong *)(lVar7 + 0x70) + 0x18);
      FVar4 = FNameEntryId::FromValidEName((EName)local_res8);
      if (uVar1 != *(uint *)CONCAT44(extraout_var,FVar4.Value)) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayStructProperty->Struct->GetFName() == NAME_Color",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x26c,L"");
        if (!bVar3) {
          return;
        }
code_r0x00014d0b3b2a:
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3b40

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->StringChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                       ,0x10a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0xe & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FStrProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x115,L"");
        if (bVar4) goto code_r0x00014d0b3c14;
      }
    }
    else if ((*(uint *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) >> 0xe & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FStrProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x111,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b3c14:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// InitializeFromExistingChannels @ 14d0b3c30

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::InitializeFromExistingChannels
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,UScriptStruct *param_1)

{
  int iVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  FProperty *pFVar5;
  
  iVar1 = (this->PropertyStorage->BoolChannel).ArrayNum;
  this->ElementCount = iVar1;
  if (iVar1 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ElementCount > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                       ,0x1a2,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar5 = FLiveLinkStructPropertyBindings::GetProperty(&this->PropertyBinding,param_1);
  if (pFVar5 != (FProperty *)0x0) {
    uVar2 = *(ulonglong *)(pFVar5->_padding_ + 0x18);
    if ((uVar2 >> 0x15 & 1) == 0) {
      if ((uVar2 >> 0x11 & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FoundProperty->IsA<FBoolProperty>()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                           ,0x1ad,L"");
        if (bVar4) goto code_r0x00014d0b3d04;
      }
    }
    else if ((*(uint *)(*(longlong *)(pFVar5[1]._padding_ + 8) + 0x18) >> 0x11 & 1) == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayProperty->Inner->IsA<FBoolProperty>()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\LiveLink\\Source\\LiveLinkMovieScene\\Private\\MovieScene\\MovieSceneLiveLinkPropertyHandler.cpp"
                         ,0x1a9,L"");
      if (!bVar4) {
        return;
      }
code_r0x00014d0b3d04:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RecordFrame @ 14d0b48b0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<unsigned_char>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<unsigned_char> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  code *pcVar1;
  uchar uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  longlong lVar8;
  undefined4 local_38;
  int iStack_34;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar7 = 0, 0 < this->ElementCount)) {
    lVar8 = 0;
    do {
      uVar2 = FLiveLinkStructPropertyBindings::GetCurrentValueAt<unsigned_char>
                        (&this->PropertyBinding,uVar7,param_2,param_3);
      iStack_34 = param_1->Value;
      local_38 = CONCAT31(local_38._1_3_,uVar2);
      uVar4 = 0;
      if ((int)uVar7 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar6 = (this->Keys).AllocatorInstance.Data + lVar8;
      if (((*(undefined4 **)&pFVar6->field_0x0 <= &local_38) &&
          (&local_38 < *(undefined4 **)&pFVar6->field_0x0 + (longlong)*(int *)(pFVar6 + 0xc) * 2))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)&pFVar6[8].field_0x0;
      if (iVar5 == *(int *)(pFVar6 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar6,(int *)(pFVar6 + 0xc));
      }
      *(int *)&pFVar6[8].field_0x0 = iVar5 + 1;
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
      *(ulonglong *)(*(longlong *)&pFVar6->field_0x0 + (longlong)iVar5 * 8) =
           CONCAT44(iStack_34,local_38);
    } while ((int)uVar7 < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b4a40

void __thiscall
FMovieSceneLiveLinkPropertyHandler<int>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<int> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  ulonglong uVar10;
  int *piVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  int local_98;
  int iStack_94;
  FScriptArrayHelper local_90;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar14 = 0, 0 < this->ElementCount)) {
    lVar13 = 0;
    do {
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_2);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar6 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
LAB_14d0b4c3f:
        if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Path.AllocatorInstance.Data);
        }
        iVar5 = 0;
      }
      else {
        pFVar7 = FProperty::StaticClass();
        pFVar8 = FFieldPath::GetTyped(&local_68,pFVar7,(UStruct *)0x0);
        if ((pFVar8 == (FField *)0x0) ||
           ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) != RF_NoFlags))
        goto LAB_14d0b4c3f;
        if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x15 & 1) == 0) {
          piVar11 = FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                              ((FPropertyWrapper *)local_70,param_3,uVar14);
          if (piVar11 == (int *)0x0) goto LAB_14d0b4c14;
          iVar5 = *piVar11;
        }
        else {
          FVar9.HeapArray =
               (FScriptArray *)
               FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<int>
                         ((FPropertyWrapper *)local_70,param_3,0);
          EVar1 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
          local_90.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
          local_90.InnerProperty = (FProperty *)pFVar8[2].Next;
          local_90.ElementSize = (local_90.InnerProperty)->ElementSize;
          local_90.field1_0x8.HeapArray = FVar9.HeapArray;
          local_90.ArrayFlags = EVar1;
          if ((local_90.ElementSize < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_90.InnerProperty == (FProperty *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((int)uVar14 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_90.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar14) {
            FScriptArrayHelper::AddValues
                      (&local_90,(uVar14 - (local_90.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_90.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar10 = (local_90.field1_0x8.FreezableArray)->_padding_;
            if (((local_90.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar10 & 1) != 0)) {
              uVar10 = (longlong)&(local_90.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar10 >> 0x18);
            }
            piVar11 = (int *)((longlong)local_90.ElementSize * (longlong)(int)uVar14 + uVar10);
            if (piVar11 != (int *)0x0) {
              iVar5 = *piVar11;
              goto LAB_14d0b4c16;
            }
          }
LAB_14d0b4c14:
          iVar5 = 0;
        }
LAB_14d0b4c16:
        if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Path.AllocatorInstance.Data);
        }
      }
      iStack_94 = param_1->Value;
      uVar4 = 0;
      if ((int)uVar14 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar14 >> 0x1f;
      }
      local_98 = iVar5;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar12 = (this->Keys).AllocatorInstance.Data + lVar13;
      if (((*(int **)&pFVar12->field_0x0 <= &local_98) &&
          (&local_98 < *(int **)&pFVar12->field_0x0 + (longlong)*(int *)(pFVar12 + 0xc) * 2)) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)&pFVar12[8].field_0x0;
      if (iVar5 == *(int *)(pFVar12 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar12,(int *)(pFVar12 + 0xc));
      }
      *(int *)&pFVar12[8].field_0x0 = iVar5 + 1;
      uVar14 = uVar14 + 1;
      lVar13 = lVar13 + 0x10;
      *(ulonglong *)(*(longlong *)&pFVar12->field_0x0 + (longlong)iVar5 * 8) =
           CONCAT44(iStack_94,local_98);
    } while ((int)uVar14 < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b4da0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<float>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<float> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  float local_38;
  int iStack_34;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar6 = 0, 0 < this->ElementCount)) {
    lVar7 = 0;
    do {
      local_38 = FLiveLinkStructPropertyBindings::GetCurrentValueAt<float>
                           (&this->PropertyBinding,uVar6,param_2,param_3);
      iStack_34 = param_1->Value;
      uVar3 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (this->Keys).AllocatorInstance.Data + lVar7;
      if (((*(float **)&pFVar5->field_0x0 <= &local_38) &&
          (&local_38 < *(float **)&pFVar5->field_0x0 + (longlong)*(int *)(pFVar5 + 0xc) * 2)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)&pFVar5[8].field_0x0;
      if (iVar4 == *(int *)(pFVar5 + 0xc)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 0xc));
      }
      *(int *)&pFVar5[8].field_0x0 = iVar4 + 1;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
      *(ulonglong *)(*(longlong *)&pFVar5->field_0x0 + (longlong)iVar4 * 8) =
           CONCAT44(iStack_34,local_38);
    } while ((int)uVar6 < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b4f30

void __thiscall
FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<UE::Math::TVector<double>_> *this,
          FFrameNumber *param_1,UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  double *pdVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint uVar8;
  longlong lVar9;
  TVector<double>_u_0 local_68;
  double local_50;
  double dStack_48;
  double local_40;
  int iStack_38;
  undefined4 uStack_34;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar8 = 0, 0 < this->ElementCount)) {
    lVar9 = 0;
    do {
      FLiveLinkStructPropertyBindings::GetCurrentValueAt<UE::Math::TVector<double>_>
                (&this->PropertyBinding,(TVector<double> *)&local_68._s_0,uVar8,param_2,param_3);
      iStack_38 = param_1->Value;
      local_40 = local_68._s_0.Z;
      local_50 = local_68._s_0.X;
      dStack_48 = local_68._s_0.Y;
      uVar5 = 0;
      if ((int)uVar8 < (this->Keys).ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (this->Keys).AllocatorInstance.Data + lVar9;
      if (((*(double **)&pFVar7->field_0x0 <= &local_50) &&
          (&local_50 < *(double **)&pFVar7->field_0x0 + (longlong)*(int *)(pFVar7 + 0xc) * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = *(int *)&pFVar7[8].field_0x0;
      if (iVar6 == *(int *)(pFVar7 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,(ForAnyElementType *)pFVar7,(int *)(pFVar7 + 0xc));
      }
      uVar8 = uVar8 + 1;
      *(int *)&pFVar7[8].field_0x0 = iVar6 + 1;
      lVar9 = lVar9 + 0x10;
      lVar2 = *(longlong *)&pFVar7->field_0x0;
      pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x20);
      *pdVar1 = local_50;
      pdVar1[1] = dStack_48;
      pdVar1 = (double *)(lVar2 + (longlong)iVar6 * 0x20 + 0x10);
      *pdVar1 = local_40;
      pdVar1[1] = (double)CONCAT44(uStack_34,iStack_38);
    } while ((int)uVar8 < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b5100

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FColor>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<FColor> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  EArrayPropertyFlags EVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  UObject *pUVar6;
  FFieldClass *pFVar7;
  FField *pFVar8;
  FScriptArrayHelper_u_8 FVar9;
  FColor_u_0_s_0 *pFVar10;
  ulonglong uVar11;
  FColor_u_0 FVar12;
  FColor_u_0 *pFVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  FColor_u_0 local_98;
  int iStack_94;
  FScriptArrayHelper local_90;
  undefined1 local_70 [8];
  FFieldPath local_68;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar16 = 0, 0 < this->ElementCount)) {
    lVar15 = 0;
    do {
      FLiveLinkStructPropertyBindings::FindOrAdd
                (&this->PropertyBinding,(FPropertyWrapper *)local_70,param_2);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_70);
      if (pUVar6 == (UObject *)0x0) {
        local_68.ResolvedField = (FField *)0x0;
LAB_14d0b52ed:
        FVar12.Bits = 0;
      }
      else {
        pFVar7 = FProperty::StaticClass();
        pFVar8 = FFieldPath::GetTyped(&local_68,pFVar7,(UStruct *)0x0);
        if ((pFVar8 == (FField *)0x0) ||
           ((pFVar8->FlagsPrivate & (RF_FinishDestroyed|RF_BeginDestroyed)) != RF_NoFlags))
        goto LAB_14d0b52ed;
        if (((uint)(int)pFVar8->ClassPrivate->CastFlags >> 0x15 & 1) != 0) {
          FVar9.HeapArray =
               (FScriptArray *)
               FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                         ((FPropertyWrapper *)local_70,param_3,0);
          EVar1 = *(EArrayPropertyFlags *)&pFVar8[2].Owner.Container;
          local_90.ElementAlignment = (**(code **)((pFVar8[2].Next)->_padding_ + 0x168))();
          local_90.InnerProperty = (FProperty *)pFVar8[2].Next;
          local_90.ElementSize = (local_90.InnerProperty)->ElementSize;
          local_90.field1_0x8.HeapArray = FVar9.HeapArray;
          local_90.ArrayFlags = EVar1;
          if ((local_90.ElementSize < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("ElementSize > 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1177,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_90.InnerProperty == (FProperty *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("InnerProperty",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x1178,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if (((int)uVar16 < 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x10be,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          if ((local_90.field1_0x8.FreezableArray)->ArrayNum <= (int)uVar16) {
            FScriptArrayHelper::AddValues
                      (&local_90,(uVar16 - (local_90.field1_0x8.FreezableArray)->ArrayNum) + 1);
          }
          if ((local_90.field1_0x8.FreezableArray)->ArrayNum != 0) {
            uVar11 = *(ulonglong *)&(local_90.field1_0x8.FreezableArray)->_padding_;
            if (((local_90.ArrayFlags & UsesMemoryImageAllocator) != None) && ((uVar11 & 1) != 0)) {
              uVar11 = (longlong)&(local_90.field1_0x8.HeapArray)->field_0x0 +
                       ((longlong)uVar11 >> 0x18);
            }
            pFVar13 = (FColor_u_0 *)
                      ((longlong)local_90.ElementSize * (longlong)(int)uVar16 + uVar11);
            if (pFVar13 != (FColor_u_0 *)0x0) {
              FVar12 = (FColor_u_0)pFVar13->Bits;
              goto LAB_14d0b52ef;
            }
          }
          goto LAB_14d0b52ed;
        }
        pFVar10 = (FColor_u_0_s_0 *)
                  FLiveLinkStructPropertyBindings::FPropertyWrapper::GetPropertyAddress<FColor>
                            ((FPropertyWrapper *)local_70,param_3,uVar16);
        if (pFVar10 == (FColor_u_0_s_0 *)0x0) goto LAB_14d0b52ed;
        FVar12._s_0 = *pFVar10;
      }
LAB_14d0b52ef:
      if (local_68.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Path.AllocatorInstance.Data);
      }
      iStack_94 = param_1->Value;
      uVar4 = 0;
      if ((int)uVar16 < (this->Keys).ArrayNum) {
        uVar4 = ~uVar16 >> 0x1f;
      }
      local_98 = FVar12;
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar14 = (this->Keys).AllocatorInstance.Data + lVar15;
      if (((*(FColor_u_0 **)&pFVar14->field_0x0 <= &local_98) &&
          (&local_98 < *(FColor_u_0 **)&pFVar14->field_0x0 + (longlong)*(int *)(pFVar14 + 0xc) * 2))
         && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar5 = *(int *)&pFVar14[8].field_0x0;
      if (iVar5 == *(int *)(pFVar14 + 0xc)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar14,(int *)(pFVar14 + 0xc));
      }
      *(int *)&pFVar14[8].field_0x0 = iVar5 + 1;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 0x10;
      *(ulonglong *)(*(longlong *)&pFVar14->field_0x0 + (longlong)iVar5 * 8) =
           CONCAT44(iStack_94,local_98.Bits);
    } while ((int)uVar16 < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b5450

void __thiscall
FMovieSceneLiveLinkPropertyHandler<FString>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<FString> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  longlong lVar3;
  code *pcVar4;
  ForAnyElementType _Src;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  FString local_58;
  FString local_48;
  int local_38;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) &&
     (uVar10 = 0, uVar13 = uVar10, 0 < this->ElementCount)) {
    do {
      uVar9 = (uint)uVar10;
      FLiveLinkStructPropertyBindings::GetCurrentValueAt<FString>
                (&this->PropertyBinding,&local_58,uVar9,param_2,param_3);
      local_38 = param_1->Value;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      uVar12 = local_58.Data.ArrayNum - 1;
      if (local_58.Data.ArrayNum == 0) {
        uVar12 = 0;
      }
      ::FString::AssignRange(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,uVar12);
      uVar12 = 0;
      if ((int)uVar9 < (this->Keys).ArrayNum) {
        uVar12 = ~uVar9 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar8 = (this->Keys).AllocatorInstance.Data + uVar13;
      if (((*(FString **)&pFVar8->field_0x0 <= &local_48) &&
          (&local_48 <
           (FString *)
           ((longlong)*(FString **)&pFVar8->field_0x0 + (longlong)*(int *)(pFVar8 + 0xc) * 0x18)))
         && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = *(int *)&pFVar8[8].field_0x0;
      if (iVar6 == *(int *)(pFVar8 + 0xc)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,(ForAnyElementType *)pFVar8,(int *)(pFVar8 + 0xc));
      }
      _Src.Data = local_48.Data.AllocatorInstance.Data;
      lVar7 = (longlong)iVar6;
      *(int *)&pFVar8[8].field_0x0 = iVar6 + 1;
      lVar3 = *(longlong *)&pFVar8->field_0x0;
      *(undefined8 *)(lVar3 + lVar7 * 0x18) = 0;
      lVar11 = (longlong)local_48.Data.ArrayNum;
      *(int *)(lVar3 + lVar7 * 0x18 + 8) = local_48.Data.ArrayNum;
      pFVar2 = (ForAnyElementType *)(lVar3 + lVar7 * 0x18);
      piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
      if (local_48.Data.ArrayNum == 0) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_48.Data.ArrayNum,0,pFVar2,local_48.Data.ArrayNum,piVar1);
        memcpy(pFVar2->Data,_Src.Data,lVar11 * 2);
      }
      *(int *)&pFVar2[2].Data = local_38;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      uVar10 = (ulonglong)(uVar9 + 1);
      uVar13 = uVar13 + 0x10;
    } while ((int)(uVar9 + 1) < this->ElementCount);
  }
  return;
}

// RecordFrame @ 14d0b56a0

void __thiscall
FMovieSceneLiveLinkPropertyHandler<bool>::RecordFrame
          (FMovieSceneLiveLinkPropertyHandler<bool> *this,FFrameNumber *param_1,
          UScriptStruct *param_2,FLiveLinkBaseFrameData *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 local_38;
  int iStack_34;
  
  if ((param_3 != (FLiveLinkBaseFrameData *)0x0) && (uVar6 = 0, 0 < this->ElementCount)) {
    lVar7 = 0;
    do {
      bVar2 = FLiveLinkStructPropertyBindings::GetCurrentValueAt<bool>
                        (&this->PropertyBinding,uVar6,param_2,param_3);
      iStack_34 = param_1->Value;
      local_38 = CONCAT31(local_38._1_3_,bVar2);
      uVar3 = 0;
      if ((int)uVar6 < (this->Keys).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar5 = (this->Keys).AllocatorInstance.Data + lVar7;
      if (((*(undefined4 **)&pFVar5->field_0x0 <= &local_38) &&
          (&local_38 < *(undefined4 **)&pFVar5->field_0x0 + (longlong)*(int *)(pFVar5 + 0xc) * 2))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar4 = *(int *)&pFVar5[8].field_0x0;
      if (iVar4 == *(int *)(pFVar5 + 0xc)) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x408,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 0xc));
      }
      *(int *)&pFVar5[8].field_0x0 = iVar4 + 1;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x10;
      *(ulonglong *)(*(longlong *)&pFVar5->field_0x0 + (longlong)iVar4 * 8) =
           CONCAT44(iStack_34,local_38);
    } while ((int)uVar6 < this->ElementCount);
  }
  return;
}

