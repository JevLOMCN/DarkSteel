// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LiveLinkMessageBusFramework
// Functions: 38

// Construct<FLiveLinkSerializedFrameData> @ 14cfe6ea0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSerializedFrameData>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FLiveLinkSerializedFrameData> @ 14cfe6ec0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkSerializedFrameData>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined2 *)((longlong)param_1 + 8) = 0;
  *(undefined1 *)((longlong)param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FLiveLinkSerializedFrameData> @ 14cfe6ee0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSerializedFrameData>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)((longlong)param_1 + 0x10);
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

// Copy<FLiveLinkSerializedFrameData> @ 14cfe6f40

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSerializedFrameData>
          (void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined8 *)param_1 = *(undefined8 *)(lVar1 + (longlong)param_1);
      *(undefined1 *)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + lVar1 + 8);
      *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_1 + lVar1 + 9);
      *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_1 + lVar1 + 10);
      *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + lVar1 + 0xc);
      FLiveLinkByteArray::operator=
                ((FLiveLinkByteArray *)((longlong)param_1 + 0x10),
                 (FLiveLinkByteArray *)((longlong)param_1 + lVar1 + 0x10));
      param_3 = param_3 + -1;
      param_1 = (undefined8 *)((longlong)param_1 + 0x20);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkByteArray> @ 14cfe7110

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkByteArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FLiveLinkByteArray> @ 14cfe7120

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkByteArray>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FLiveLinkByteArray> @ 14cfe7130

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkByteArray>(void *param_1)

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

// SerializeArchive<FLiveLinkByteArray> @ 14cfe7150

bool __cdecl
UE::CoreUObject::Private::SerializeArchive<FLiveLinkByteArray>
          (FArchive *param_1,void *param_2,UStruct *param_3,void *param_4)

{
  longlong *plVar1;
  uint local_res8 [2];
  
  local_res8[0] = *(uint *)((longlong)param_2 + 8);
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_res8[0],param_2,(int *)((longlong)param_2 + 8),
               (int *)((longlong)param_2 + 0xc));
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,*(undefined8 *)param_2,(longlong)(int)local_res8[0]);
  return true;
}

// Copy<FLiveLinkByteArray> @ 14cfe7210

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkByteArray>(void *param_1,void *param_2,int param_3)

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
                    (1,1,iVar3,iVar4,pFVar5,iVar3,piVar1);
          if (iVar3 != 0) {
            memcpy(pFVar5->Data,_Src,(longlong)iVar3);
          }
        }
      }
      param_3 = param_3 + -1;
      pFVar5 = pFVar5 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSubjectFrameMessage> @ 14cfe7360

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectFrameMessage>(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x84) = 1;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectFrameMessage> @ 14cfe73d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectFrameMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x80) = 0x18;
  *(undefined4 *)((longlong)param_1 + 0x84) = 1;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  return;
}

// Destruct<FLiveLinkSubjectFrameMessage> @ 14cfe7440

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectFrameMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x70) = 0;
  if (*(void **)((longlong)param_1 + 0x68) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x68));
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x28));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)((longlong)param_1 + 8) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 8));
  }
  return;
}

// Copy<FLiveLinkSubjectFrameMessage> @ 14cfe74a0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectFrameMessage>
          (void *param_1,void *param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  void *pvVar3;
  
  if (param_3 != 0) {
    puVar2 = param_1;
    pvVar3 = param_2;
    do {
      *puVar2 = *(undefined8 *)((longlong)puVar2 + ((longlong)param_2 - (longlong)param_1));
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)(puVar2 + 1),
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar3 + 8));
      TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_>::operator=
                ((TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *)(puVar2 + 3),
                 (TArray<FLiveLinkCurveElement,TSizedDefaultAllocator<32>_> *)
                 ((longlong)pvVar3 + 0x18));
      TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)(puVar2 + 5),
                  (TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                   *)((longlong)pvVar3 + 0x28));
      uVar1 = *(undefined8 *)((longlong)pvVar3 + 0x80);
      puVar2[0xf] = *(undefined8 *)((longlong)pvVar3 + 0x78);
      puVar2[0x10] = uVar1;
      puVar2[0x11] = *(undefined8 *)((longlong)pvVar3 + 0x88);
      param_3 = param_3 + -1;
      puVar2 = puVar2 + 0x12;
      pvVar3 = (void *)((longlong)pvVar3 + 0x90);
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkSubjectDataMessage> @ 14cfe7570

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkSubjectDataMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// ConstructForTests<FLiveLinkSubjectDataMessage> @ 14cfe7590

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkSubjectDataMessage>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  return;
}

// Destruct<FLiveLinkSubjectDataMessage> @ 14cfe75b0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkSubjectDataMessage>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLiveLinkSubjectDataMessage> @ 14cfe75f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkSubjectDataMessage>(void *param_1,void *param_2,int param_3)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_1,param_2);
    TArray<int,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x10),
               (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x10));
    pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20);
    param_2 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x20))->ArrayNum;
    (((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->AllocatorInstance).
    Data = (pTVar1->AllocatorInstance).Data;
    param_1 = &((TArray<FName,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x20))->ArrayNum;
  }
  return true;
}

// Construct<FLiveLinkClearSubject> @ 14cfe7680

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkClearSubject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// ConstructForTests<FLiveLinkClearSubject> @ 14cfe7690

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkClearSubject>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  return;
}

// Destruct<FLiveLinkClearSubject> @ 14cfe76a0

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkClearSubject>(void *param_1)

{
  return;
}

// Copy<FLiveLinkClearSubject> @ 14cfe77f0

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkClearSubject>(void *param_1,void *param_2,int param_3)

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

// Construct<FLiveLinkHeartbeatMessage> @ 14cfe79a0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkHeartbeatMessage>(void *param_1)

{
  return;
}

// ConstructForTests<FLiveLinkHeartbeatMessage> @ 14cfe79b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkHeartbeatMessage>(void *param_1)

{
  return;
}

// Construct<FLiveLinkConnectMessage> @ 14cfe7a10

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkConnectMessage>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  return;
}

// ConstructForTests<FLiveLinkConnectMessage> @ 14cfe7a20

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkConnectMessage>(void *param_1)

{
  *(undefined4 *)param_1 = 1;
  return;
}

// Destruct<FLiveLinkConnectMessage> @ 14cfe7a30

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkConnectMessage>(void *param_1)

{
  return;
}

// Copy<FLiveLinkConnectMessage> @ 14cfe7a40

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkConnectMessage>(void *param_1,void *param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = (longlong)param_2 - (longlong)param_1;
    do {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar1 + (longlong)param_1);
      param_1 = (void *)((longlong)param_1 + 4);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FLiveLinkPongMessage> @ 14cfe7ab0

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkPongMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// ConstructForTests<FLiveLinkPongMessage> @ 14cfe7af0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkPongMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x30) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0xbff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  return;
}

// Destruct<FLiveLinkPongMessage> @ 14cfe7b30

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkPongMessage>(void *param_1)

{
  if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x10));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FLiveLinkPongMessage> @ 14cfe7b70

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkPongMessage>(void *param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  FString *pFVar3;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    ::FString::operator=
              ((FString *)((longlong)param_1 + 0x10),(FString *)((longlong)param_2 + 0x10));
    iVar1 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayNum;
    iVar2 = (((FString *)((longlong)param_2 + 0x20))->Data).ArrayMax;
    (((FString *)((longlong)param_1 + 0x20))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x20))->Data).AllocatorInstance.Data;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayNum = iVar1;
    (((FString *)((longlong)param_1 + 0x20))->Data).ArrayMax = iVar2;
    *(undefined4 *)&(((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data =
         *(undefined4 *)&(((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data;
    *(undefined4 *)
     ((longlong)&(((FString *)((longlong)param_1 + 0x30))->Data).AllocatorInstance.Data + 4) =
         *(undefined4 *)
          ((longlong)&(((FString *)((longlong)param_2 + 0x30))->Data).AllocatorInstance.Data + 4);
    pFVar3 = (FString *)((longlong)param_2 + 0x30);
    iVar1 = (((FString *)((longlong)param_2 + 0x30))->Data).ArrayMax;
    param_2 = (void *)((longlong)param_2 + 0x40);
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (((FString *)((longlong)param_1 + 0x30))->Data).ArrayMax = iVar1;
    param_1 = (FString *)((longlong)param_1 + 0x40);
  }
  return true;
}

// Construct<FLiveLinkPingMessage> @ 14cfe7c10

void __cdecl UE::CoreUObject::Private::Construct<FLiveLinkPingMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// ConstructForTests<FLiveLinkPingMessage> @ 14cfe7c30

void __cdecl UE::CoreUObject::Private::ConstructForTests<FLiveLinkPingMessage>(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x10) = 1;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 1;
  return;
}

// Destruct<FLiveLinkPingMessage> @ 14cfe7c50

void __cdecl UE::CoreUObject::Private::Destruct<FLiveLinkPingMessage>(void *param_1)

{
  return;
}

// Copy<FLiveLinkPingMessage> @ 14cfe7c60

bool __cdecl
UE::CoreUObject::Private::Copy<FLiveLinkPingMessage>(void *param_1,void *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = param_1;
    do {
      uVar2 = *(undefined8 *)(((longlong)param_2 - (longlong)param_1) + 0x10 + (longlong)puVar4);
      puVar1 = (undefined8 *)(((longlong)param_2 - (longlong)param_1) + (longlong)puVar4);
      uVar3 = puVar1[1];
      *puVar4 = *puVar1;
      puVar4[1] = uVar3;
      puVar4[2] = uVar2;
      param_3 = param_3 + -1;
      puVar4 = puVar4 + 3;
    } while (param_3 != 0);
  }
  return true;
}

// DereferenceIfNecessary<FLiveLinkProvider,FLiveLinkProvider_*_&> @ 14cfe8620

/* WARNING: Enum "Type": Some values do not have unique names */

FLiveLinkProvider * __cdecl
UE::Core::Private::DereferenceIfNecessary<FLiveLinkProvider,FLiveLinkProvider_*_&>
          (FLiveLinkProvider **param_1)

{
  return *param_1;
}

// GetConsoleVariableCompressionFlags @ 14cfec2d0

int __cdecl UE::LiveLink::Compression::GetConsoleVariableCompressionFlags(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarCompressionFlags.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

// GetConsoleVariableCompressionType @ 14cfec310

int __cdecl UE::LiveLink::Compression::GetConsoleVariableCompressionType(void)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  
  pTVar1 = CVarCompressionType.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    if (!bVar2) {
      return pTVar1->ShadowedValue[1];
    }
  }
  return pTVar1->ShadowedValue[0];
}

