// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UnrealEdMessages
// Functions: 8

// Construct<FFileServerReady> @ 148c37d80

void __cdecl UE::CoreUObject::Private::Construct<FFileServerReady>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FFileServerReady> @ 148c37da0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFileServerReady>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FFileServerReady> @ 148c37dc0

void __cdecl UE::CoreUObject::Private::Destruct<FFileServerReady>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FFileServerReady> @ 148c37e00

bool __cdecl
UE::CoreUObject::Private::Copy<FFileServerReady>(void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        DestructItems<FString,int>((FString *)pFVar6->Data,*(int *)&pFVar6[1].Data);
        pFVar5 = pFVar2->Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        iVar3 = *(int *)&pFVar2[1].Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<FString,FString,int>(pFVar6->Data,(FString *)pFVar5,iVar3);
        }
      }
      pFVar5 = pFVar2[3].Data;
      pFVar6[2].Data = pFVar2[2].Data;
      pFVar6[3].Data = pFVar5;
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 4;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FAssetEditorRequestOpenAsset> @ 148c37f00

void __cdecl UE::CoreUObject::Private::Construct<FAssetEditorRequestOpenAsset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FAssetEditorRequestOpenAsset> @ 148c37f10

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FAssetEditorRequestOpenAsset>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FAssetEditorRequestOpenAsset> @ 148c37f20

void __cdecl UE::CoreUObject::Private::Destruct<FAssetEditorRequestOpenAsset>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FAssetEditorRequestOpenAsset> @ 148c37f40

bool __cdecl
UE::CoreUObject::Private::Copy<FAssetEditorRequestOpenAsset>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  ForAnyElementType *pFVar5;
  
  if (param_3 != 0) {
    pFVar5 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar5);
      if (pFVar5 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
        _Src = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar5[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3 * 2);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

