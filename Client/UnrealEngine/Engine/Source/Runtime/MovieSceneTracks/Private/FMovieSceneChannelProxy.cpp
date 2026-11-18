// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 28

// FMovieSceneChannelProxy<FMovieSceneActorReferenceData> @ 146595c10

/* WARNING: Removing unreachable block (ram,0x000146595d85) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneActorReferenceData>
          (FMovieSceneChannelProxy *this,FMovieSceneActorReferenceData *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneActorReferenceData *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneActorReferenceData,(UObject *)pUVar6,
                         L"MovieSceneActorReferenceData");
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_20 = (Z_Registration_Info_UScriptStruct_FMovieSceneActorReferenceData.OuterSingleton)->
             _padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_18 = 0;
  local_10 = 0;
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneActorReferenceData ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneActorReferenceData ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))
      ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneActorReferenceData **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneFloatChannel> @ 146596200

/* WARNING: Removing unreachable block (ram,0x00014659634c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneFloatChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneFloatChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneFloatChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneFloatChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneFloatChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneFloatChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// GetChannel<FMovieSceneBoolChannel> @ 1465d24b0

FMovieSceneBoolChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneBoolChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneBoolChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneBoolChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneBoolChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneBoolChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneBoolChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneBoolChannel *)0x0;
}

// GetChannel<FMovieSceneByteChannel> @ 1465d2590

FMovieSceneByteChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneByteChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneByteChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneByteChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneByteChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneByteChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneByteChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneByteChannel *)0x0;
}

// GetChannel<FMovieSceneDoubleChannel> @ 1465d2670

FMovieSceneDoubleChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneDoubleChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneDoubleChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneDoubleChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneDoubleChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneDoubleChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneDoubleChannel *)0x0;
}

// GetChannel<FMovieSceneFloatChannel> @ 1465d2750

FMovieSceneFloatChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneFloatChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneFloatChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneFloatChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneFloatChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneFloatChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneFloatChannel *)0x0;
}

// GetChannel<FMovieSceneIntegerChannel> @ 1465d2830

FMovieSceneIntegerChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneIntegerChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneIntegerChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneIntegerChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneIntegerChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneIntegerChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneIntegerChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneIntegerChannel *)0x0;
}

// GetChannel<FMovieSceneObjectPathChannel> @ 1465d2910

FMovieSceneObjectPathChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneObjectPathChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UScriptStruct *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneObjectPathChannel *pFVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  
  pUVar3 = FMovieSceneObjectPathChannel::StaticStruct();
  pFVar4 = FindEntry(this,(FName)pUVar3->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar7 = (FScriptContainerElement *)0x0;
    iVar6 = 0;
  }
  else {
    iVar6 = (pFVar4->Channels).ArrayNum;
    pFVar7 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar6 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneObjectPathChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar6)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneObjectPathChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneObjectPathChannel **)(pFVar7 + (longlong)param_1 * 8);
  }
  return (FMovieSceneObjectPathChannel *)0x0;
}

// GetChannel<FMovieSceneStringChannel> @ 1465d29f0

FMovieSceneStringChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneStringChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneStringChannel *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar3,
                         L"MovieSceneStringChannel");
  }
  pFVar4 = FindEntry(this,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.
                                 OuterSingleton)->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar6 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar4->Channels).ArrayNum;
    pFVar6 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneStringChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar7)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneStringChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneStringChannel **)(pFVar6 + (longlong)param_1 * 8);
  }
  return (FMovieSceneStringChannel *)0x0;
}

// GetChannel<FMovieSceneTextChannel> @ 1465d2af0

FMovieSceneTextChannel * __thiscall
FMovieSceneChannelProxy::GetChannel<FMovieSceneTextChannel>
          (FMovieSceneChannelProxy *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  UPackage *pUVar3;
  FMovieSceneChannelEntry *pFVar4;
  FMovieSceneTextChannel *pFVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTextChannel,(UObject *)pUVar3,
                         L"MovieSceneTextChannel");
  }
  pFVar4 = FindEntry(this,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.
                                 OuterSingleton)->_padding_);
  if (pFVar4 == (FMovieSceneChannelEntry *)0x0) {
    pFVar6 = (FScriptContainerElement *)0x0;
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar4->Channels).ArrayNum;
    pFVar6 = (pFVar4->Channels).AllocatorInstance.Data;
    if (iVar7 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneTextChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
  }
  if ((-1 < param_1) && (param_1 < iVar7)) {
    if (param_1 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FMovieSceneTextChannel *)(*pcVar1)();
        return pFVar5;
      }
    }
    return *(FMovieSceneTextChannel **)(pFVar6 + (longlong)param_1 * 8);
  }
  return (FMovieSceneTextChannel *)0x0;
}

// GetChannels<FMovieSceneBoolChannel> @ 1465d2d70

TArrayView<FMovieSceneBoolChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneBoolChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneBoolChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneBoolChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneBoolChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneBoolChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneBoolChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneBoolChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneByteChannel> @ 1465d2e00

TArrayView<FMovieSceneByteChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneByteChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneByteChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneByteChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneByteChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneByteChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneByteChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneByteChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneFloatChannel> @ 1465d2e90

TArrayView<FMovieSceneFloatChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneFloatChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneFloatChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneFloatChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneFloatChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneFloatChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneFloatChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneIntegerChannel> @ 1465d2f20

TArrayView<FMovieSceneIntegerChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneIntegerChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneIntegerChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneIntegerChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneIntegerChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneIntegerChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneIntegerChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneIntegerChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneObjectPathChannel> @ 1465d2fb0

TArrayView<FMovieSceneObjectPathChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneObjectPathChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneObjectPathChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneObjectPathChannel_*,int> *pTVar6;
  
  pUVar4 = FMovieSceneObjectPathChannel::StaticStruct();
  pFVar5 = FindEntry(this,(FName)pUVar4->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneObjectPathChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneObjectPathChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneObjectPathChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneStringChannel> @ 1465d3040

TArrayView<FMovieSceneStringChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneStringChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneStringChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneStringChannel_*,int> *pTVar6;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneStringChannel,(UObject *)pUVar4,
                         L"MovieSceneStringChannel");
  }
  pFVar5 = FindEntry(this,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneStringChannel.
                                 OuterSingleton)->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneStringChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneStringChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneStringChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetChannels<FMovieSceneTextChannel> @ 1465d30f0

TArrayView<FMovieSceneTextChannel_*,int> * __thiscall
FMovieSceneChannelProxy::GetChannels<FMovieSceneTextChannel>
          (FMovieSceneChannelProxy *this,
          TArrayView<FMovieSceneTextChannel_*,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UPackage *pUVar4;
  FMovieSceneChannelEntry *pFVar5;
  TArrayView<FMovieSceneTextChannel_*,int> *pTVar6;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneTextChannel,(UObject *)pUVar4,
                         L"MovieSceneTextChannel");
  }
  pFVar5 = FindEntry(this,(FName)(Z_Registration_Info_UScriptStruct_FMovieSceneTextChannel.
                                 OuterSingleton)->_padding_);
  if (pFVar5 == (FMovieSceneChannelEntry *)0x0) {
    __return_storage_ptr__->DataPtr = (FMovieSceneTextChannel **)0x0;
    __return_storage_ptr__->ArrayNum = 0;
  }
  else {
    iVar1 = (pFVar5->Channels).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FMovieSceneTextChannel **)(pFVar5->Channels).AllocatorInstance.Data;
    __return_storage_ptr__->ArrayNum = iVar1;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar6 = (TArrayView<FMovieSceneTextChannel_*,int> *)(*pcVar2)();
        return pTVar6;
      }
    }
  }
  return __return_storage_ptr__;
}

// MakeHandle<FMovieSceneDoubleChannel> @ 1465ece20

TMovieSceneChannelHandle<FMovieSceneDoubleChannel> * __thiscall
FMovieSceneChannelProxy::MakeHandle<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxy *this,
          TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *__return_storage_ptr__,int param_1)

{
  atomic<int> aVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  FMovieSceneChannelHandle *this_00;
  TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *pTVar8;
  atomic<int> *paVar9;
  TWeakPtr<FMovieSceneChannelProxy,1> local_38;
  FMovieSceneChannelHandle local_28;
  
  pUVar7 = FMovieSceneDoubleChannel::StaticStruct();
  this_00 = MakeHandle(this,&local_28,(FName)pUVar7->_padding_,param_1);
  pUVar7 = FMovieSceneDoubleChannel::StaticStruct();
  bVar6 = FMovieSceneChannelHandle::IsCastValidInternal(this_00,(UStruct *)pUVar7);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TMovieSceneChannelHandle<FMovieSceneDoubleChannel> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = this_00->ChannelIndex;
  FVar3 = this_00->ChannelTypeName;
  local_38.Object = (this_00->WeakChannelProxy).Object;
  pTVar4 = (this_00->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar9 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_38.WeakReferenceCount.ReferenceController = pTVar4;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)__return_storage_ptr__,&local_38,FVar3,iVar2);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar9 = &pTVar4->WeakReferenceCount;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar9 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

// FMovieSceneChannelProxy<FMovieSceneByteChannel> @ 146729c00

/* WARNING: Removing unreachable block (ram,0x000146729d4c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneByteChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneByteChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneByteChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneByteChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneByteChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneByteChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneByteChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneCameraShakeSourceTriggerChannel> @ 146729e60

/* WARNING: Removing unreachable block (ram,0x000146729fac) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneCameraShakeSourceTriggerChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneCameraShakeSourceTriggerChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneCameraShakeSourceTriggerChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneCameraShakeSourceTriggerChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneCameraShakeSourceTriggerChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneCameraShakeSourceTriggerChannel ***)((longlong)FVar9 + 8) +
       *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneCameraShakeSourceTriggerChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneDoubleChannel> @ 14672a0c0

/* WARNING: Removing unreachable block (ram,0x00014672a20c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneDoubleChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneDoubleChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneDoubleChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneDoubleChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneDoubleChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneDoubleChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneDoubleChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneEventSectionData> @ 14672a5d0

/* WARNING: Removing unreachable block (ram,0x00014672a745) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneEventSectionData>
          (FMovieSceneChannelProxy *this,FMovieSceneEventSectionData *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneEventSectionData *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneEventSectionData,(UObject *)pUVar6,
                         L"MovieSceneEventSectionData");
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_20 = (Z_Registration_Info_UScriptStruct_FMovieSceneEventSectionData.OuterSingleton)->
             _padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_18 = 0;
  local_10 = 0;
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneEventSectionData ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneEventSectionData ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneEventSectionData **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneIntegerChannel> @ 14672ab10

/* WARNING: Removing unreachable block (ram,0x00014672ac5c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneIntegerChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneIntegerChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneIntegerChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneIntegerChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneIntegerChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneIntegerChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneIntegerChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneObjectPathChannel> @ 14672ad70

/* WARNING: Removing unreachable block (ram,0x00014672aebc) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneObjectPathChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneObjectPathChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneObjectPathChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneObjectPathChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneObjectPathChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneObjectPathChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneObjectPathChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneParticleChannel> @ 14672afd0

/* WARNING: Removing unreachable block (ram,0x00014672b145) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneParticleChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneParticleChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneParticleChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  if (Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_MovieSceneTracks();
    Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneParticleChannel,(UObject *)pUVar6,
                         L"MovieSceneParticleChannel");
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_20 = (Z_Registration_Info_UScriptStruct_FMovieSceneParticleChannel.OuterSingleton)->
             _padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_18 = 0;
  local_10 = 0;
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneParticleChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneParticleChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneParticleChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneStringChannel> @ 14672b260

/* WARNING: Removing unreachable block (ram,0x00014672b3ac) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneStringChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneStringChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneStringChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneStringChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneStringChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneStringChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneStringChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// FMovieSceneChannelProxy<FMovieSceneTextChannel> @ 14672b4c0

/* WARNING: Removing unreachable block (ram,0x00014672b60c) */

FMovieSceneChannelProxy * __thiscall
FMovieSceneChannelProxy::FMovieSceneChannelProxy<FMovieSceneTextChannel>
          (FMovieSceneChannelProxy *this,FMovieSceneTextChannel *param_1)

{
  TArray<FMovieSceneChannelEntry,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UScriptStruct *pUVar6;
  FMovieSceneChannelProxy *pFVar7;
  longlong lVar8;
  ForElementType<FMovieSceneChannelEntry> FVar9;
  FMovieSceneTextChannel *local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *(undefined8 *)&(this->OnDestroy).field_0x18 = 2;
  pTVar1 = &this->Entries;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnDestroy = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x8 = 0;
  *(undefined8 *)&(this->OnDestroy).field_0x10 = 0;
  (this->Entries).AllocatorInstance.SecondaryData = (ForElementType<FMovieSceneChannelEntry>)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 1;
  pUVar6 = FMovieSceneTextChannel::StaticStruct();
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  local_18 = 0;
  local_10 = 0;
  local_20 = pUVar6->_padding_;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  if ((((ulonglong)FVar9 <= &local_20) &&
      (&local_20 < (longlong *)((longlong)FVar9 + (longlong)(this->Entries).ArrayMax * 0x18))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = (this->Entries).ArrayNum;
  if (iVar5 == (this->Entries).ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneChannelEntry>_>
                      (0x818,&pTVar1->AllocatorInstance,&(this->Entries).ArrayMax);
  }
  lVar8 = (longlong)iVar5;
  (this->Entries).ArrayNum = iVar5 + 1;
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  *(longlong *)((longlong)FVar9 + lVar8 * 0x18) = local_20;
  puVar2 = (uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18;
  puVar2[0] = '\0';
  puVar2[1] = '\0';
  puVar2[2] = '\0';
  puVar2[3] = '\0';
  puVar2[4] = '\0';
  puVar2[5] = '\0';
  puVar2[6] = '\0';
  puVar2[7] = '\0';
  *(undefined8 *)((uchar *)((longlong)FVar9 + 8) + lVar8 * 0x18) = local_18;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x10) + lVar8 * 0x18) = (undefined4)local_10;
  *(undefined4 *)((uchar *)((longlong)FVar9 + 0x14) + lVar8 * 0x18) = local_10._4_4_;
  local_10 = 0;
  local_18 = 0;
  if (((this->Entries).ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  FVar9 = (this->Entries).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<FMovieSceneChannelEntry>)0x0) {
    FVar9 = (ForElementType<FMovieSceneChannelEntry>)pTVar1;
  }
  local_28 = param_1;
  if (((*(FMovieSceneTextChannel ***)((longlong)FVar9 + 8) <= &local_28) &&
      (&local_28 <
       *(FMovieSceneTextChannel ***)((longlong)FVar9 + 8) + *(int *)((longlong)FVar9 + 0x14))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FMovieSceneChannelProxy *)(*pcVar3)();
    return pFVar7;
  }
  iVar5 = *(int *)((longlong)FVar9 + 0x10);
  if (iVar5 == *(int *)((longlong)FVar9 + 0x14)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)((longlong)FVar9 + 8),
                       (int *)((longlong)FVar9 + 0x14));
  }
  *(int *)((longlong)FVar9 + 0x10) = iVar5 + 1;
  *(FMovieSceneTextChannel **)
   (*(FScriptContainerElement **)((longlong)FVar9 + 8) + (longlong)iVar5 * 8) = local_28;
  return this;
}

// MakeHandle<FMovieSceneFloatChannel> @ 1467542c0

TMovieSceneChannelHandle<FMovieSceneFloatChannel> * __thiscall
FMovieSceneChannelProxy::MakeHandle<FMovieSceneFloatChannel>
          (FMovieSceneChannelProxy *this,
          TMovieSceneChannelHandle<FMovieSceneFloatChannel> *__return_storage_ptr__,int param_1)

{
  atomic<int> aVar1;
  int iVar2;
  FName FVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  UScriptStruct *pUVar7;
  FMovieSceneChannelHandle *this_00;
  TMovieSceneChannelHandle<FMovieSceneFloatChannel> *pTVar8;
  atomic<int> *paVar9;
  TWeakPtr<FMovieSceneChannelProxy,1> local_38;
  FMovieSceneChannelHandle local_28;
  
  pUVar7 = FMovieSceneFloatChannel::StaticStruct();
  this_00 = MakeHandle(this,&local_28,(FName)pUVar7->_padding_,param_1);
  pUVar7 = FMovieSceneFloatChannel::StaticStruct();
  bVar6 = FMovieSceneChannelHandle::IsCastValidInternal(this_00,(UStruct *)pUVar7);
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsCastValid<OtherChannelType>()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelHandle.h"
                       ,0xd8,L"Invalid cast between unrelated channel types");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TMovieSceneChannelHandle<FMovieSceneFloatChannel> *)(*pcVar5)();
      return pTVar8;
    }
  }
  iVar2 = this_00->ChannelIndex;
  FVar3 = this_00->ChannelTypeName;
  local_38.Object = (this_00->WeakChannelProxy).Object;
  pTVar4 = (this_00->WeakChannelProxy).WeakReferenceCount.ReferenceController;
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    paVar9 = (atomic<int> *)&DAT_0000000c;
  }
  else {
    paVar9 = &pTVar4->WeakReferenceCount;
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
    LOCK();
    *paVar9 = (atomic<int>)((int)*paVar9 + 1);
    UNLOCK();
  }
  local_38.WeakReferenceCount.ReferenceController = pTVar4;
  FMovieSceneChannelHandle::FMovieSceneChannelHandle
            ((FMovieSceneChannelHandle *)__return_storage_ptr__,&local_38,FVar3,iVar2);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
    LOCK();
    paVar9 = &pTVar4->WeakReferenceCount;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  if (local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController !=
      (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar9 = &(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->WeakReferenceCount
    ;
    aVar1 = *paVar9;
    *paVar9 = (atomic<int>)((int)*paVar9 + -1);
    UNLOCK();
    if (aVar1 == (atomic<int>)0x1) {
      (**(code **)((local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController)->_padding_ + 8
                  ))(local_28.WeakChannelProxy.WeakReferenceCount.ReferenceController,1);
    }
  }
  return __return_storage_ptr__;
}

