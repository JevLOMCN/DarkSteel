// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMovieScene
// Functions: 14

// Construct<FLiveLinkSubSectionData> @ 14d097bd0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubSectionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubSectionData> @ 14d097be0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubSectionData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkSubSectionData> @ 14d097bf0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubSectionData>(void *param_1)

{
  DestructItems<FLiveLinkPropertyData,int>
            (*(FLiveLinkPropertyData **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLiveLinkSubSectionData> @ 14d097c30

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubSectionData>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FLiveLinkPropertyData *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FLiveLinkPropertyData,int>
                  ((FLiveLinkPropertyData *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = (FLiveLinkPropertyData *)pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x58,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FLiveLinkPropertyData,FLiveLinkPropertyData,int>(pFVar6->Data,pFVar5,iVar3)
          ;
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkPropertyData> @ 14d097d20

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkPropertyData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// ConstructForTests<FLiveLinkPropertyData> @ 14d097d60

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkPropertyData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  return;
}

// Destruct<FLiveLinkPropertyData> @ 14d097da0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkPropertyData>(void *param_1)

{
  DestructItems<FMovieSceneByteChannel,int>
            (*(FMovieSceneByteChannel **)((longlong)param_1 + 0x48),
             *(int *)((longlong)param_1 + 0x50));
  if (*(void **)((longlong)param_1 + 0x48) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x48));
  }
  DestructItems<FMovieSceneBoolChannel,int>
            (*(FMovieSceneBoolChannel **)((longlong)param_1 + 0x38),
             *(int *)((longlong)param_1 + 0x40));
  if (*(void **)((longlong)param_1 + 0x38) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x38));
  }
  DestructItems<FMovieSceneIntegerChannel,int>
            (*(FMovieSceneIntegerChannel **)((longlong)param_1 + 0x28),
             *(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FMovieSceneStringChannel,int>
            (*(FMovieSceneStringChannel **)((longlong)param_1 + 0x18),
             *(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  DestructItems<FMovieSceneFloatChannel,int>
            (*(FMovieSceneFloatChannel **)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0x10)
            );
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
    return;
  }
  return;
}

// Copy<FLiveLinkPropertyData> @ 14d097db0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkPropertyData>(void *param_1,void *param_2,int param_3)

{
  ForAnyElementType *pFVar1;
  ForAnyElementType *pFVar2;
  int *piVar3;
  int iVar4;
  FMovieSceneFloatChannel *pFVar5;
  FMovieSceneStringChannel *pFVar6;
  FMovieSceneIntegerChannel *pFVar7;
  FMovieSceneBoolChannel *pFVar8;
  FMovieSceneByteChannel *pFVar9;
  longlong lVar10;
  
  if (param_3 != 0) {
    lVar10 = (longlong)param_2 - (longlong)param_1;
    do {
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar10 + 8);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 8);
      *(undefined8 *)param_1 = *(undefined8 *)((longlong)param_1 + lVar10);
      if (pFVar2 != pFVar1) {
        DestructItems<FMovieSceneFloatChannel,int>
                  ((FMovieSceneFloatChannel *)pFVar2->Data,*(int *)((longlong)param_1 + 0x10));
        iVar4 = *(int *)((longlong)param_1 + lVar10 + 0x10);
        piVar3 = (int *)((longlong)param_1 + 0x14);
        pFVar5 = (FMovieSceneFloatChannel *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x10) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMovieSceneFloatChannel,FMovieSceneFloatChannel,int>
                    (pFVar2->Data,pFVar5,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar10 + 0x18);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x18);
      if (pFVar2 != pFVar1) {
        DestructItems<FMovieSceneStringChannel,int>
                  ((FMovieSceneStringChannel *)pFVar2->Data,*(int *)((longlong)param_1 + 0x20));
        iVar4 = *(int *)((longlong)param_1 + lVar10 + 0x20);
        piVar3 = (int *)((longlong)param_1 + 0x24);
        pFVar6 = (FMovieSceneStringChannel *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x20) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMovieSceneStringChannel,FMovieSceneStringChannel,int>
                    (pFVar2->Data,pFVar6,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar10 + 0x28);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x28);
      if (pFVar2 != pFVar1) {
        DestructItems<FMovieSceneIntegerChannel,int>
                  ((FMovieSceneIntegerChannel *)pFVar2->Data,*(int *)((longlong)param_1 + 0x30));
        iVar4 = *(int *)((longlong)param_1 + lVar10 + 0x30);
        piVar3 = (int *)((longlong)param_1 + 0x34);
        pFVar7 = (FMovieSceneIntegerChannel *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x30) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x120,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMovieSceneIntegerChannel,FMovieSceneIntegerChannel,int>
                    (pFVar2->Data,pFVar7,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar10 + 0x38);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x38);
      if (pFVar2 != pFVar1) {
        DestructItems<FMovieSceneBoolChannel,int>
                  ((FMovieSceneBoolChannel *)pFVar2->Data,*(int *)((longlong)param_1 + 0x40));
        iVar4 = *(int *)((longlong)param_1 + lVar10 + 0x40);
        piVar3 = (int *)((longlong)param_1 + 0x44);
        pFVar8 = (FMovieSceneBoolChannel *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x40) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x120,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMovieSceneBoolChannel,FMovieSceneBoolChannel,int>
                    (pFVar2->Data,pFVar8,iVar4);
        }
      }
      pFVar1 = (ForAnyElementType *)((longlong)param_1 + lVar10 + 0x48);
      pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x48);
      if (pFVar2 != pFVar1) {
        DestructItems<FMovieSceneByteChannel,int>
                  ((FMovieSceneByteChannel *)pFVar2->Data,*(int *)((longlong)param_1 + 0x50));
        iVar4 = *(int *)((longlong)param_1 + lVar10 + 0x50);
        piVar3 = (int *)((longlong)param_1 + 0x54);
        pFVar9 = (FMovieSceneByteChannel *)pFVar1->Data;
        *(int *)((longlong)param_1 + 0x50) = iVar4;
        if ((iVar4 == 0) && (*piVar3 == 0)) {
          *piVar3 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x128,8,iVar4,*piVar3,pFVar2,iVar4,piVar3);
          ConstructItems<FMovieSceneByteChannel,FMovieSceneByteChannel,int>
                    (pFVar2->Data,pFVar9,iVar4);
        }
      }
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x58);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneLiveLinkSectionTemplate> @ 14d098080

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneLiveLinkSectionTemplate>(void *param_1)

{
  bool bVar1;
  
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneLiveLinkSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  bVar1 = FMovieSceneLiveLinkSectionTemplate::AreChannelKeyCountEqual(param_1);
  *(bool *)((longlong)param_1 + 0x90) = !bVar1;
  bVar1 = FMovieSceneLiveLinkSectionTemplate::CacheIsSectionUsable(param_1);
  *(bool *)((longlong)param_1 + 0x91) = bVar1;
  return;
}

// ConstructForTests<FMovieSceneLiveLinkSectionTemplate> @ 14d098090

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FMovieSceneLiveLinkSectionTemplate>(void *param_1)

{
  bool bVar1;
  
  FMovieScenePropertySectionTemplate::FMovieScenePropertySectionTemplate(param_1);
  *(undefined ***)param_1 = &___7FMovieSceneLiveLinkSectionTemplate__6B_;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined1 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x80) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0x98) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa8) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
  bVar1 = FMovieSceneLiveLinkSectionTemplate::AreChannelKeyCountEqual(param_1);
  *(bool *)((longlong)param_1 + 0x90) = !bVar1;
  bVar1 = FMovieSceneLiveLinkSectionTemplate::CacheIsSectionUsable(param_1);
  *(bool *)((longlong)param_1 + 0x91) = bVar1;
  return;
}

// Destruct<FMovieSceneLiveLinkSectionTemplate> @ 14d0980a0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneLiveLinkSectionTemplate>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0));
  DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
            (*(TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> **)((longlong)param_1 + 0x98),
             *(int *)((longlong)param_1 + 0xa0));
  if (*(void **)((longlong)param_1 + 0x98) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x98));
  }
  DestructItems<FLiveLinkSubSectionData,int>
            (*(FLiveLinkSubSectionData **)((longlong)param_1 + 0x80),
             *(int *)((longlong)param_1 + 0x88));
  if (*(void **)((longlong)param_1 + 0x80) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x80));
  }
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  FMovieScenePropertySectionTemplate::~FMovieScenePropertySectionTemplate(param_1);
  return;
}

// SerializeArchive<FMovieSceneLiveLinkSectionTemplate> @ 14d0980b0

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FMovieSceneLiveLinkSectionTemplate>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  bool bVar1;
  
  bVar1 = FMovieSceneLiveLinkSectionTemplate::Serialize(param_2,param_1);
  return bVar1;
}

// Copy<FMovieSceneLiveLinkSectionTemplate> @ 14d0980d0

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneLiveLinkSectionTemplate>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *pTVar5;
  longlong lVar6;
  undefined8 uVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_2 + 8);
    *(undefined1 *)((longlong)param_1 + 0x10) = *(undefined1 *)((longlong)param_2 + 0x10);
    *(undefined8 *)((longlong)param_1 + 0x14) = *(undefined8 *)((longlong)param_2 + 0x14);
    *(undefined8 *)((longlong)param_1 + 0x20) = *(undefined8 *)((longlong)param_2 + 0x20);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x28),(FString *)((longlong)param_2 + 0x28));
    FLiveLinkSubjectPreset::operator=
              ((FLiveLinkSubjectPreset *)((longlong)param_1 + 0x38),
               (FLiveLinkSubjectPreset *)((longlong)param_2 + 0x38));
    TArray<bool,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70),
               (TArray<bool,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70));
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x80);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x80)) {
      DestructItems<FLiveLinkSubSectionData,int>
                ((FLiveLinkSubSectionData *)pFVar2->Data,*(int *)((longlong)param_1 + 0x88));
      iVar3 = *(int *)((longlong)param_2 + 0x88);
      piVar1 = (int *)((longlong)param_1 + 0x8c);
      pFVar4 = ((ForAnyElementType *)((longlong)param_2 + 0x80))->Data;
      *(int *)((longlong)param_1 + 0x88) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<FLiveLinkSubSectionData,FLiveLinkSubSectionData,int>
                  (pFVar2->Data,(FLiveLinkSubSectionData *)pFVar4,iVar3);
      }
    }
    pFVar2 = (ForAnyElementType *)((longlong)param_1 + 0x98);
    *(undefined1 *)((longlong)param_1 + 0x90) = *(undefined1 *)((longlong)param_2 + 0x90);
    *(undefined1 *)((longlong)param_1 + 0x91) = *(undefined1 *)((longlong)param_2 + 0x91);
    if (pFVar2 != (ForAnyElementType *)((longlong)param_2 + 0x98)) {
      DestructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
                ((TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)pFVar2->Data,
                 *(int *)((longlong)param_1 + 0xa0));
      iVar3 = *(int *)((longlong)param_2 + 0xa0);
      piVar1 = (int *)((longlong)param_1 + 0xa4);
      pTVar5 = (TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1> *)
               ((ForAnyElementType *)((longlong)param_2 + 0x98))->Data;
      *(int *)((longlong)param_1 + 0xa0) = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar3,*piVar1,pFVar2,iVar3,piVar1);
        ConstructItems<TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,TSharedPtr<IMovieSceneLiveLinkPropertyHandler,1>,int>
                  (pFVar2->Data,pTVar5,iVar3);
      }
    }
    lVar6 = *(longlong *)((longlong)param_2 + 0xb0);
    uVar7 = *(undefined8 *)((longlong)param_2 + 0xa8);
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    pTVar8 = *(TReferenceControllerBase<1> **)((longlong)param_1 + 0xb0);
    *(undefined8 *)((longlong)param_1 + 0xa8) = uVar7;
    *(longlong *)((longlong)param_1 + 0xb0) = lVar6;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    param_2 = (void *)((longlong)param_2 + 0xb8);
    param_1 = (void *)((longlong)param_1 + 0xb8);
  }
  return true;
}

// Optimize<FMovieSceneFloatChannel> @ 14d09d430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::MovieScene::Optimize<FMovieSceneFloatChannel>
          (FMovieSceneFloatChannel *param_1,FKeyDataOptimizationParams *param_2)

{
  FFrameNumber FVar1;
  TRangeBound<FFrameNumber> TVar2;
  FMovieSceneFloatValue *pFVar3;
  code *pcVar4;
  uint uVar5;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auStack_118 [32];
  FMovieSceneFloatValue *local_f8;
  FMovieSceneFloatValue *local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_c8;
  FMovieSceneChannelData local_c0;
  TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *local_a8;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_a0;
  TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_> local_90;
  uint local_80;
  undefined4 uStack_7c;
  int local_78;
  int iStack_74;
  FMovieSceneFloatChannel *local_70;
  longlong local_68;
  FMovieSceneFloatValue local_60;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_118;
  local_70 = param_1;
  FMovieSceneChannelData::FMovieSceneChannelData
            (&local_c0,(FMovieSceneChannel *)param_1,&param_1->Times,
             (FKeyHandleLookupTable *)&param_1->KeyHandles);
  local_a8 = &param_1->Values;
  if (((local_c0.Times == (TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *)0x0) ||
      (local_a8 == (TArray<FMovieSceneFloatValue,TSizedDefaultAllocator<32>_> *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Times && Values",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                         ,0x122,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((local_c0.Times)->ArrayNum < 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if (1 < (local_c0.Times)->ArrayNum) {
    uVar9 = (local_c0.Times)->ArrayNum;
    pFVar12 = ((local_c0.Times)->AllocatorInstance).Data;
    if (((int)uVar9 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TVar2 = (param_2->Range).LowerBound;
    uVar17 = 0;
    uVar15 = uVar17;
    if ((TVar2.Type.Value.Value != '\x02') && (uVar13 = uVar9, uVar15 = 0, 0 < (int)uVar9)) {
      do {
        iVar10 = (uVar13 >> 1) + uVar17;
        if (*(int *)(pFVar12 + (longlong)iVar10 * 4) < TVar2.Value.Value.Value) {
          uVar17 = (uVar13 & 1) + iVar10;
        }
        uVar5 = uVar13 >> 1;
        uVar13 = uVar13 >> 1;
        uVar15 = uVar17;
      } while (uVar5 != 0);
    }
    TVar2 = (param_2->Range).UpperBound;
    uVar17 = uVar9;
    if ((TVar2.Type.Value.Value != '\x02') && (uVar17 = 0, 0 < (int)uVar9)) {
      do {
        uVar13 = uVar9 >> 1;
        if (*(int *)(pFVar12 + (longlong)(int)(uVar13 + uVar17) * 4) <= TVar2.Value.Value.Value) {
          uVar17 = uVar13 + uVar17 + (uVar9 & 1);
        }
        uVar9 = uVar13;
      } while (uVar13 != 0);
    }
    local_68 = (longlong)(int)uVar17;
    lVar16 = (longlong)(int)uVar15;
    if (lVar16 < local_68) {
      local_c8 = lVar16 * 0x1c;
      do {
        iVar10 = (local_c0.Times)->ArrayNum;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (iVar10 <= (int)uVar15) {
          return;
        }
        iVar10 = (local_c0.Times)->ArrayNum;
        pFVar12 = ((local_c0.Times)->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar17 = ~uVar15 >> 0x1f;
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar17;
        }
        if (uVar9 == 0) {
          local_f8 = (FMovieSceneFloatValue *)(longlong)(int)uVar15;
          local_f0 = (FMovieSceneFloatValue *)(longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        FVar1.Value = *(int *)(pFVar12 + lVar16 * 4);
        iVar10 = local_a8->ArrayNum;
        pFVar12 = (local_a8->AllocatorInstance).Data;
        if ((iVar10 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar15 < iVar10) {
          uVar9 = uVar17;
        }
        if (uVar9 == 0) {
          local_f8 = (FMovieSceneFloatValue *)(longlong)(int)uVar15;
          local_f0 = (FMovieSceneFloatValue *)(longlong)iVar10;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        local_60._0_8_ = *(undefined8 *)(pFVar12 + local_c8);
        local_60.Tangent._4_8_ = *(undefined8 *)(pFVar12 + local_c8 + 8);
        local_60.Tangent._12_8_ = *(undefined8 *)(pFVar12 + local_c8 + 0x10);
        local_60._24_4_ = *(undefined4 *)(pFVar12 + local_c8 + 0x18);
        if ((((int)uVar15 < 0) || ((local_c0.Times)->ArrayNum <= (int)uVar15)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Times->IsValidIndex(KeyIndex)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Channels\\MovieSceneChannelData.h"
                               ,0x1fc,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((local_c0.OwningChannel != (FMovieSceneChannel *)0x0) &&
           (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                               &(local_c0.OwningChannel)->KeyDeletedEvent), pTVar6 = local_c0.Times,
           bVar8)) {
          uVar9 = 0;
          if ((int)uVar15 < (local_c0.Times)->ArrayNum) {
            uVar9 = uVar17;
          }
          if (uVar9 == 0) {
            local_f8 = (FMovieSceneFloatValue *)(longlong)(int)uVar15;
            local_f0 = (FMovieSceneFloatValue *)(longlong)(local_c0.Times)->ArrayNum;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          uStack_7c = *(undefined4 *)((pTVar6->AllocatorInstance).Data + lVar16 * 4);
          local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_a0.ArrayNum = 0;
          local_a0.ArrayMax = 0;
          local_80 = uVar15;
          iVar10 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_a0.AllocatorInstance,&local_a0.ArrayMax);
          local_a0.ArrayNum = iVar10 + 1;
          *(ulonglong *)(local_a0.AllocatorInstance.Data + (longlong)iVar10 * 8) =
               CONCAT44(uStack_7c,local_80);
          TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
          ::Broadcast(&(local_c0.OwningChannel)->KeyDeletedEvent,local_c0.OwningChannel,&local_a0);
          if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_a0.AllocatorInstance.Data);
          }
        }
        TArray<FFrameNumber,TSizedDefaultAllocator<32>_>::RemoveAt(local_c0.Times,uVar15,No);
        pTVar7 = local_a8;
        uVar9 = 0;
        if ((int)uVar15 < local_a8->ArrayNum) {
          uVar9 = uVar17;
        }
        if (uVar9 == 0) {
          local_f8 = (FMovieSceneFloatValue *)(longlong)(int)uVar15;
          local_f0 = (FMovieSceneFloatValue *)(longlong)local_a8->ArrayNum;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        pFVar12 = (pTVar7->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x1c;
        iVar10 = pTVar7->ArrayNum + ~uVar15;
        if (iVar10 != 0) {
          memmove(pFVar12,pFVar12 + 0x1c,(longlong)iVar10 * 0x1c);
        }
        pTVar7->ArrayNum = pTVar7->ArrayNum + -1;
        if (local_c0.KeyHandles != (FKeyHandleLookupTable *)0x0) {
          FKeyHandleLookupTable::DeallocateHandle(local_c0.KeyHandles,uVar15);
        }
        bVar8 = ValueExistsAtTime(local_70,FVar1,&local_60);
        if (bVar8) {
          uVar15 = uVar15 - 1;
          lVar16 = lVar16 + -1;
          local_c8 = local_c8 + -0x1c;
        }
        else {
          iVar10 = FMovieSceneChannelData::AddKeyInternal(&local_c0,FVar1);
          pTVar7 = local_a8;
          pFVar3 = (FMovieSceneFloatValue *)(local_a8->AllocatorInstance).Data;
          if ((pFVar3 <= &local_60) && (&local_60 < pFVar3 + local_a8->ArrayMax)) {
            local_e0 = (longlong)local_a8->ArrayNum;
            local_d8 = 0x1c;
            local_f8 = &local_60;
            local_f0 = pFVar3;
            local_e8 = (longlong)local_a8->ArrayMax;
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          iVar11 = pTVar7->ArrayNum;
          if (iVar11 == pTVar7->ArrayMax) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x41c,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
          }
          pFVar12 = (pTVar7->AllocatorInstance).Data;
          pTVar7->ArrayNum = iVar11 + 1;
          lVar14 = (longlong)iVar10 * 0x1c;
          pFVar12 = pFVar12 + lVar14;
          memmove(pFVar12 + 0x1c,pFVar12,(longlong)(iVar11 - iVar10) * 0x1c);
          pFVar12 = (pTVar7->AllocatorInstance).Data;
          *(undefined8 *)(pFVar12 + lVar14) = local_60._0_8_;
          *(undefined8 *)(pFVar12 + lVar14 + 8) = local_60.Tangent._4_8_;
          *(undefined8 *)(pFVar12 + lVar14 + 0x10) = local_60.Tangent._12_8_;
          *(undefined4 *)(pFVar12 + lVar14 + 0x18) = local_60._24_4_;
          if ((local_c0.OwningChannel != (FMovieSceneChannel *)0x0) &&
             (bVar8 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                                 &(local_c0.OwningChannel)->KeyAddedEvent), bVar8)) {
            local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_90.ArrayNum = 0;
            local_90.ArrayMax = 0;
            local_78 = iVar10;
            iStack_74 = FVar1.Value;
            iVar10 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_90.AllocatorInstance,&local_90.ArrayMax);
            local_90.ArrayNum = iVar10 + 1;
            *(ulonglong *)(local_90.AllocatorInstance.Data + (longlong)iVar10 * 8) =
                 CONCAT44(iStack_74,local_78);
            TMulticastDelegate<void___cdecl(FMovieSceneChannel_*,TArray<FKeyAddOrDeleteEventItem,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
            ::Broadcast(&(local_c0.OwningChannel)->KeyAddedEvent,local_c0.OwningChannel,&local_90);
            if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_90.AllocatorInstance.Data);
            }
          }
        }
        local_c8 = local_c8 + 0x1c;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 1;
      } while (lVar16 < local_68);
    }
  }
  return;
}

