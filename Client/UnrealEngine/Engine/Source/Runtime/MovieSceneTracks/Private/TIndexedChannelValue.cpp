// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 8

// RetrieveChannel @ 1466e3670

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneBoolChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneBoolChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneBoolChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3750

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneByteChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneByteChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneByteChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3830

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneDoubleChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneDoubleChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneDoubleChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3910

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneFloatChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneFloatChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneFloatChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e39f0

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneIntegerChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneIntegerChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneIntegerChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3ad0

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneObjectPathChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneObjectPathChannel> *this,FMovieSceneChannelProxy *param_1
          )

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  iVar1 = this->ChannelIndex;
  pUVar4 = FMovieSceneObjectPathChannel::StaticStruct();
  pFVar5 = FMovieSceneChannelProxy::FindEntry(param_1,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar8 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar5->Channels).ArrayNum;
    pFVar8 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar7)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar8 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3bb0

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneStringChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneStringChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  
  iVar1 = this->ChannelIndex;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar4,
                         L"MovieSceneStringChannel");
  }
  pFVar5 = FMovieSceneChannelProxy::FindEntry
                     (param_1,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.
                                     OuterSingleton)->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar8 = 0;
  }
  else {
    iVar8 = (pFVar5->Channels).ArrayNum;
    pFVar7 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar8 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar8)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar7 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

// RetrieveChannel @ 1466e3cb0

FMovieSceneChannel * __thiscall
UE::MovieScene::TIndexedChannelValue<FMovieSceneTextChannel>::RetrieveChannel
          (TIndexedChannelValue<FMovieSceneTextChannel> *this,FMovieSceneChannelProxy *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  FMovieSceneChannel *pFVar6;
  FScriptContainerElement *pFVar7;
  int iVar8;
  
  iVar1 = this->ChannelIndex;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTextChannel,(UObject *)pUVar4,
                         L"MovieSceneTextChannel");
  }
  pFVar5 = FMovieSceneChannelProxy::FindEntry
                     (param_1,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.
                                     OuterSingleton)->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar8 = 0;
  }
  else {
    iVar8 = (pFVar5->Channels).ArrayNum;
    pFVar7 = (pFVar5->Channels).AllocatorInstance.Data;
    if (iVar8 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
  }
  if ((-1 < iVar1) && (iVar1 < iVar8)) {
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FMovieSceneChannel *)(*pcVar2)();
        return pFVar6;
      }
    }
    return *(FMovieSceneChannel **)(pFVar7 + (longlong)iVar1 * 8);
  }
  return (FMovieSceneChannel *)0x0;
}

