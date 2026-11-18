// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneCapture
// Functions: 26

// Construct<FCompositionGraphCapturePasses> @ 146bd0890

void __cdecl UE::CoreUObject::Private::Construct<FCompositionGraphCapturePasses>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCompositionGraphCapturePasses> @ 146bd08a0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FCompositionGraphCapturePasses>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCompositionGraphCapturePasses> @ 146bd08b0

void __cdecl UE::CoreUObject::Private::Destruct<FCompositionGraphCapturePasses>(void *param_1)

{
  DestructItems<FString,int>(*(FString **)param_1,*(int *)((longlong)param_1 + 8));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FCompositionGraphCapturePasses> @ 146bd08f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCompositionGraphCapturePasses>
          (void *param_1,void *param_2,int param_3)

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
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
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
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FMovieSceneCaptureSettings> @ 146bd1dd0

void __cdecl UE::CoreUObject::Private::Construct<FMovieSceneCaptureSettings>(void *param_1)

{
  FString *pFVar1;
  FString FStack_28;
  
  *(undefined4 *)((longlong)param_1 + 0x44) = 60000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 1;
  *(undefined4 *)((longlong)param_1 + 0x50) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x2d0;
  pFVar1 = FPaths::VideoCaptureDir(&FStack_28);
  if (param_1 != pFVar1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(FScriptContainerElement **)param_1 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(param_1);
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  ::FString::operator=((FString *)((longlong)param_1 + 0x18),L"{world}");
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x100000018;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x100000018;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 4;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x10100;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x10;
  ::FString::operator=((FString *)((longlong)param_1 + 0x30),L".avi");
  return;
}

// ConstructForTests<FMovieSceneCaptureSettings> @ 146bd1de0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FMovieSceneCaptureSettings>(void *param_1)

{
  FString *pFVar1;
  FString FStack_28;
  
  *(undefined4 *)((longlong)param_1 + 0x44) = 60000;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 1;
  *(undefined4 *)((longlong)param_1 + 0x50) = 60000;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0x500;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x2d0;
  pFVar1 = FPaths::VideoCaptureDir(&FStack_28);
  if (param_1 != pFVar1) {
    if (*(void **)param_1 != (void *)0x0) {
      FMemory::Free(*(void **)param_1);
    }
    *(FScriptContainerElement **)param_1 = (pFVar1->Data).AllocatorInstance.Data;
    (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)param_1 + 8) = (pFVar1->Data).ArrayNum;
    *(int *)((longlong)param_1 + 0xc) = (pFVar1->Data).ArrayMax;
    (pFVar1->Data).ArrayNum = 0;
    (pFVar1->Data).ArrayMax = 0;
  }
  if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
  }
  FPaths::MakePlatformFilename(param_1);
  *(undefined2 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  ::FString::operator=((FString *)((longlong)param_1 + 0x18),L"{world}");
  *(undefined8 *)((longlong)param_1 + 0x50) = 0x100000018;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0x100000018;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x40) = 4;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0x10100;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0x10;
  ::FString::operator=((FString *)((longlong)param_1 + 0x30),L".avi");
  return;
}

// Destruct<FMovieSceneCaptureSettings> @ 146bd1df0

void __cdecl UE::CoreUObject::Private::Destruct<FMovieSceneCaptureSettings>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x30));
  }
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FMovieSceneCaptureSettings> @ 146bd1e40

bool __cdecl
UE::CoreUObject::Private::Copy<FMovieSceneCaptureSettings>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  int iVar2;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    ::FString::operator=
              ((FString *)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum,
               (FString *)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum);
    *(char *)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum + 1);
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax =
         (((FString *)((longlong)param_2 + 0x20))->Data).ArrayMax;
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x30),(FString *)((longlong)param_2 + 0x30));
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data;
    *(undefined8 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x40))->Data).AllocatorInstance.Data + 4) =
         *(undefined8 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x40))->Data).AllocatorInstance.Data + 4);
    *(char *)&(((FString *)((longlong)param_1 + 0x40))->Data).ArrayMax =
         (char)(((FString *)((longlong)param_2 + 0x40))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x50))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x50))->Data).AllocatorInstance.Data;
    iVar2 = (((FString *)((longlong)param_2 + 0x50))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x50))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x50))->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x50))->Data).ArrayMax = iVar2;
    *(undefined1 *)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data =
         *(undefined1 *)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data;
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 1) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 1);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 2) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 2);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 3) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 3);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 4) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 4);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 5) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 5);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 6) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 6);
    *(undefined1 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x60))->Data).AllocatorInstance.Data + 7) =
         *(undefined1 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x60))->Data).AllocatorInstance.Data + 7);
    (((FString *)((longlong)param_1 + 0x60))->Data).ArrayNum =
         (((FString *)((longlong)param_2 + 0x60))->Data).ArrayNum;
    param_1 = (FString *)((longlong)param_1 + 0x70);
    param_2 = (FString *)((longlong)param_2 + 0x70);
  }
  return true;
}

// Construct<FCaptureResolution> @ 146bd2270

void __cdecl UE::CoreUObject::Private::Construct<FCaptureResolution>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FCaptureResolution> @ 146bd2290

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCaptureResolution>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FCaptureResolution> @ 146bd22a0

void __cdecl UE::CoreUObject::Private::Destruct<FCaptureResolution>(void *param_1)

{
  return;
}

// Copy<FCaptureResolution> @ 146bd22f0

bool __cdecl
UE::CoreUObject::Private::Copy<FCaptureResolution>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 8);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCapturedPixels> @ 146bd2de0

void __cdecl UE::CoreUObject::Private::Construct<FCapturedPixels>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FCapturedPixels> @ 146bd2df0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCapturedPixels>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FCapturedPixels> @ 146bd2e00

void __cdecl UE::CoreUObject::Private::Destruct<FCapturedPixels>(void *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)param_1 + 8));
  return;
}

// Copy<FCapturedPixels> @ 146bd2e50

bool __cdecl
UE::CoreUObject::Private::Copy<FCapturedPixels>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      lVar1 = *(longlong *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1) + 8);
      uVar2 = *(undefined8 *)((longlong)puVar4 + ((longlong)param_2 - (longlong)param_1));
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar4[1];
      *puVar4 = uVar2;
      puVar4[1] = lVar1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FCapturedPixelsID> @ 146bd36a0

void __cdecl UE::CoreUObject::Private::Construct<FCapturedPixelsID>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  return;
}

// ConstructForTests<FCapturedPixelsID> @ 146bd36f0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FCapturedPixelsID>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  return;
}

// Destruct<FCapturedPixelsID> @ 146bd3720

void __cdecl UE::CoreUObject::Private::Destruct<FCapturedPixelsID>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (param_1);
  return;
}

// Copy<FCapturedPixelsID> @ 146bd37a0

bool __cdecl
UE::CoreUObject::Private::Copy<FCapturedPixelsID>(void *param_1,void *param_2,int param_3)

{
  TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator> *this;
  
  if (param_3 != 0) {
    this = param_1;
    do {
      TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>::
      operator=(this,(TSet<TTuple<FName,FName>,TDefaultMapHashableKeyFuncs<FName,FName,0>,FDefaultSetAllocator>
                      *)(((longlong)param_2 - (longlong)param_1) + (longlong)this));
      param_3 = param_3 + -1;
      this = this + 1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FFrameMetrics> @ 146bd3a20

void __cdecl UE::CoreUObject::Private::Construct<FFrameMetrics>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FFrameMetrics> @ 146bd3a30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FFrameMetrics>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FFrameMetrics> @ 146bd3a40

void __cdecl UE::CoreUObject::Private::Destruct<FFrameMetrics>(void *param_1)

{
  return;
}

// Copy<FFrameMetrics> @ 146bd3a50

bool __cdecl UE::CoreUObject::Private::Copy<FFrameMetrics>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = param_1;
    do {
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar3);
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      param_3 = param_3 + -1;
      puVar3 = puVar3 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FFrameGrabber,FFrameGrabber_*_&> @ 146bd4bc0

FFrameGrabber * __cdecl
UE::Core::Private::DereferenceIfNecessary<FFrameGrabber,FFrameGrabber_*_&>(FFrameGrabber **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<FMovieSceneCaptureModule,FMovieSceneCaptureModule_*_&> @ 146bd4be0

FMovieSceneCaptureModule * __cdecl
UE::Core::Private::DereferenceIfNecessary<FMovieSceneCaptureModule,FMovieSceneCaptureModule_*_&>
          (FMovieSceneCaptureModule **param_1)

{
  return *param_1;
}

