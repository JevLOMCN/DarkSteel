// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 61

// AddUniqueImpl<FProperty_*> @ 14659fd10

int __thiscall
TArray<FProperty_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FProperty_*>
          (TArray<FProperty_*,TSizedDefaultAllocator<32>_> *this,FProperty **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FProperty **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FProperty **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>_> @ 14659fe10

int __thiscall
TArray<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>_>
          (TArray<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID>,TSizedDefaultAllocator<32>_>
           *this,TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *param_1)

{
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *pTVar6;
  
  pTVar1 = (TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if ((*(int *)pTVar6 == *(int *)param_1) &&
         (*(int *)&pTVar6->field_0x4 == *(int *)&param_1->field_0x4)) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 3);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  pFVar2 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  *(TTuple<FMovieSceneSequenceID,FMovieSceneSequenceID> *)(pFVar2 + (longlong)iVar5 * 8) = *param_1;
  return iVar5;
}

// Insert @ 1466a3b20

int __thiscall
TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneActorReferenceKey *param_1,int param_2)

{
  longlong lVar1;
  FMovieSceneActorReferenceKey *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  FName FVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (FMovieSceneActorReferenceKey *)(this->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      iVar7 = (*pcVar3)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x428,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  lVar1 = (longlong)param_2 * 0x28;
  pFVar8 = (this->AllocatorInstance).Data + lVar1;
  memmove(pFVar8 + 0x28,pFVar8,(longlong)(iVar7 - param_2) * 0x28);
  uVar4 = *(undefined8 *)&(param_1->Object).Guid.C;
  pFVar8 = (this->AllocatorInstance).Data;
  *(undefined8 *)(pFVar8 + lVar1) = *(undefined8 *)&(param_1->Object).Guid;
  *(undefined8 *)(pFVar8 + lVar1 + 8) = uVar4;
  FVar5 = param_1->ComponentName;
  *(undefined8 *)(pFVar8 + lVar1 + 0x10) = *(undefined8 *)&(param_1->Object).SequenceID;
  *(FName *)(pFVar8 + lVar1 + 0x10 + 8) = FVar5;
  *(FName *)(pFVar8 + lVar1 + 0x20) = param_1->SocketName;
  return param_2;
}

// Insert @ 1466a3c20

int __thiscall
TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *this,
          FMovieSceneCameraShakeSourceTrigger *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  FMovieSceneCameraShakeSourceTrigger *pFVar2;
  UClass *pUVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_2;
  pFVar2 = (FMovieSceneCameraShakeSourceTrigger *)(this->AllocatorInstance).Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + this->ArrayMax)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      iVar7 = (*pcVar4)();
      return iVar7;
    }
  }
  iVar7 = this->ArrayNum;
  if (iVar7 == this->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar7 + 1;
  pFVar1 = (this->AllocatorInstance).Data + lVar8 * 0x28;
  memmove(pFVar1 + 0x28,pFVar1,(longlong)(iVar7 - param_2) * 0x28);
  pFVar1 = (this->AllocatorInstance).Data;
  pUVar3 = (param_1->ShakeClass).Class.field0_0x0.DebugPtr;
  *(UClass **)(pFVar1 + lVar8 * 0x28) = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  *(float *)(pFVar1 + lVar8 * 0x28 + 8) = param_1->PlayScale;
  pFVar1[lVar8 * 0x28 + 0xc] = (FScriptContainerElement)param_1->PlaySpace;
  dVar5 = (param_1->UserDefinedPlaySpace).Yaw;
  *(double *)(pFVar1 + lVar8 * 0x28 + 0x10) = (param_1->UserDefinedPlaySpace).Pitch;
  *(double *)(pFVar1 + lVar8 * 0x28 + 0x10 + 8) = dVar5;
  *(double *)(pFVar1 + lVar8 * 0x28 + 0x20) = (param_1->UserDefinedPlaySpace).Roll;
  return param_2;
}

// Insert @ 1466a3d40

int __thiscall
TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *this,FMovieSceneEvent *param_1,
          int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 0x28)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x828,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar3 + 1;
  pFVar4 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x28;
  memmove(pFVar4 + 0x28,pFVar4,(longlong)(iVar3 - param_2) * 0x28);
  FMovieSceneEvent::FMovieSceneEvent
            ((FMovieSceneEvent *)((this->AllocatorInstance).Data + (longlong)param_2 * 0x28),param_1
            );
  return param_2;
}

// Insert @ 1466a3e30

int __thiscall
TArray<FString,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FString,TSizedDefaultAllocator<32>_> *this,FString *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  pFVar4 = (this->AllocatorInstance).Data;
  if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (longlong)this->ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = this->ArrayNum;
  if (iVar3 == this->ArrayMax) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar4 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar3 + 1;
  pFVar4 = pFVar4 + (longlong)param_2 * 0x10;
  memmove(pFVar4 + 0x10,pFVar4,(longlong)(iVar3 - param_2) << 4);
  ::FString::FString((FString *)((this->AllocatorInstance).Data + (longlong)param_2 * 0x10),param_1)
  ;
  return param_2;
}

// Insert @ 1466a3f20

int __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FText,TSizedDefaultAllocator<32>_> *this,FText *param_1,int param_2)

{
  FText *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res18 [8];
  
  pFVar1 = (FText *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar6 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar5 + 1;
  pFVar6 = pFVar6 + (longlong)param_2 * 0x10;
  memmove(pFVar6 + 0x10,pFVar6,(longlong)(iVar5 - param_2) << 4);
  pFVar6 = (this->AllocatorInstance).Data + (longlong)param_2 * 0x10;
  *(longlong *)pFVar6 = 0;
  pIVar2 = (param_1->TextData).Reference;
  *(ITextData **)pFVar6 = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
  }
  *(uint *)(pFVar6 + 8) = param_1->Flags;
  return param_2;
}

// InsertUninitializedImpl @ 1466a4470

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,double>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,double>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 1466a44f0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::Math::TRotator<double>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 1466a4570

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FDoubleIntermediateVector>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 1466a45f0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FFloatIntermediateVector>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 1466a4670

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediate3DTransform>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x50,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x50;
  memmove(_Src + (longlong)param_2 * 0x50,_Src,(longlong)(iVar1 - param_1) * 0x50);
  return;
}

// InsertUninitializedImpl @ 1466a46f0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FIntermediateColor>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 1466a4770

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FInterrogationChannelInfo>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x24;
  memmove(_Src + (longlong)param_2 * 0x24,_Src,(longlong)(iVar1 - param_1) * 0x24);
  return;
}

// InsertUninitializedImpl @ 1466a47f0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FObjectComponent>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,UE::MovieScene::FObjectComponent>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1466a4870

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,FString>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,FString>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1466a48f0

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,FText>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,FText>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1466a4970

void __thiscall
TArray<TTuple<UE::MovieScene::FInterrogationChannel,__int64>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FInterrogationChannel,__int64>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 1466a49f0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<unsigned_char>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 1466a4a70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 1466a4af0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<double,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 1466a4b70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FDoubleIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x48;
  memmove(_Src + (longlong)param_2 * 0x48,_Src,(longlong)(iVar1 - param_1) * 0x48);
  return;
}

// InsertUninitializedImpl @ 1466a4bf0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 1466a4c70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FFloatIntermediateVector,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x48;
  memmove(_Src + (longlong)param_2 * 0x48,_Src,(longlong)(iVar1 - param_1) * 0x48);
  return;
}

// InsertUninitializedImpl @ 1466a4cf0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 1466a4d70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FIntermediateColor,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x48;
  memmove(_Src + (longlong)param_2 * 0x48,_Src,(longlong)(iVar1 - param_1) * 0x48);
  return;
}

// InsertUninitializedImpl @ 1466a4df0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<UE::MovieScene::FObjectComponent,UE::MovieScene::FObjectPropertyTraits::FObjectMetadata>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x40;
  memmove(_Src + (longlong)param_2 * 0x40,_Src,(longlong)(iVar1 - param_1) << 6);
  return;
}

// InsertUninitializedImpl @ 1466a4e70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FString>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 1466a4ef0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<FText>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 1466a4f70

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<__int64,UE::MovieScene::FVariantPropertyTypeIndex>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// InsertUninitializedImpl @ 1466a4ff0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::TPreAnimatedPropertyValue<bool,UE::MovieScene::FBoolPropertyTraits::FBoolMetaData>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x30;
  memmove(_Src + (longlong)param_2 * 0x30,_Src,(longlong)(iVar1 - param_1) * 0x30);
  return;
}

// RemoveAt @ 1466d4d40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneActorReferenceKey,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar4 * 0x28);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1466d4e20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneCameraShakeSourceTrigger,TSizedDefaultAllocator<32>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar4 * 0x28);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1466d4f00

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FMovieSceneEvent,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x28;
  pvVar2 = *(void **)(pFVar1 + (longlong)param_1 * 0x28 + 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x28,(longlong)iVar6 * 0x28);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// RemoveAt @ 1466d4ff0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FText,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FText,TSizedDefaultAllocator<32>_> *this,int param_1,EAllowShrinking param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FScriptContainerElement *_Dst;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  if (*(longlong **)_Dst != (longlong *)0x0) {
    (**(code **)(**(longlong **)_Dst + 0x10))();
  }
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// Insert @ 1467a57e0

int __thiscall
TArray<FEventPayload,TSizedDefaultAllocator<32>_>::Insert
          (TArray<FEventPayload,TSizedDefaultAllocator<32>_> *this,FEventPayload *param_1,
          int param_2)

{
  FEventPayload *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *_Src;
  
  pFVar1 = (FEventPayload *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x848,&this->AllocatorInstance,&this->ArrayMax);
  }
  this->ArrayNum = iVar4 + 1;
  _Src = (this->AllocatorInstance).Data + (longlong)param_2 * 0x48;
  memmove(_Src + 0x48,_Src,(longlong)(iVar4 - param_2) * 0x48);
  FEventPayload::FEventPayload
            ((FEventPayload *)((this->AllocatorInstance).Data + (longlong)param_2 * 0x48),param_1);
  return param_2;
}

// InsertUninitializedImpl @ 1467a58d0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimAttachment>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1467a5950

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedConstraint>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// RemoveAt @ 1467b8780

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FEventPayload,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<FEventPayload,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_1 < this->ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = (this->AllocatorInstance).Data;
  _Dst = pFVar1 + (longlong)param_1 * 0x48;
  pvVar2 = *(void **)(pFVar1 + (longlong)param_1 * 0x48 + 0x38);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  if (*(void **)(_Dst + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)(_Dst + 0x18));
  }
  iVar6 = this->ArrayNum + ~param_1;
  if (iVar6 != 0) {
    memmove(_Dst,_Dst + 0x48,(longlong)iVar6 * 0x48);
  }
  iVar6 = this->ArrayNum + -1;
  this->ArrayNum = iVar6;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,&this->AllocatorInstance,iVar6,&this->ArrayMax);
  }
  return;
}

// AddUniqueImpl<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>_const_&> @ 1467d3bb0

int __thiscall
TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>_const_&>
          (TArray<TSharedRef<UE::MovieScene::FSharedPlaybackState,1>,TSizedDefaultAllocator<32>_>
           *this,TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1)

{
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  FScriptContainerElement *pFVar7;
  
  pTVar1 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(this->AllocatorInstance).Data;
  if (pTVar1 != pTVar1 + this->ArrayNum) {
    pTVar6 = pTVar1;
    do {
      if (pTVar6->Object == param_1->Object) {
        iVar5 = (int)((longlong)pTVar6 - (longlong)pTVar1 >> 4);
        if (iVar5 != -1) {
          return iVar5;
        }
        break;
      }
      pTVar6 = pTVar6 + 1;
    } while (pTVar6 != pTVar1 + this->ArrayNum);
  }
  if (((pTVar1 <= param_1) && (param_1 < pTVar1 + this->ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  iVar5 = this->ArrayNum;
  if (iVar5 == this->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar5;
  }
  this->ArrayNum = iVar5 + 1;
  pFVar7 = (this->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FSharedPlaybackState **)pFVar7 = param_1->Object;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar7 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return iVar5;
}

// AddUniqueImpl<FInstanceToParentPair> @ 1467d3ce0

int __thiscall
TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FInstanceToParentPair>
          (TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *this,
          FInstanceToParentPair *param_1)

{
  FInstanceToParentPair *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = Find(this,param_1);
  if (iVar5 == -1) {
    pFVar1 = (FInstanceToParentPair *)(this->AllocatorInstance).Data;
    if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar5 = (*pcVar3)();
        return iVar5;
      }
    }
    iVar5 = this->ArrayNum;
    if (iVar5 == this->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x40c,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar5 + 1;
    pFVar2 = (this->AllocatorInstance).Data;
    *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = *(undefined8 *)param_1;
    *(int *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = param_1->Depth;
  }
  return iVar5;
}

// Find @ 14682d300

int __thiscall
TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_>::Find
          (TArray<FInstanceToParentPair,TSizedDefaultAllocator<32>_> *this,
          FInstanceToParentPair *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 0xc) {
    pFVar2 = pFVar1;
    do {
      if (((ushort)*(undefined4 *)pFVar2 == (param_1->Child).InstanceID) &&
         ((ushort)((uint)*(undefined4 *)pFVar2 >> 0x10) == (param_1->Child).InstanceSerial)) {
        if (((ushort)*(undefined4 *)(pFVar2 + 4) == (param_1->Parent).InstanceID) &&
           ((ushort)((uint)*(undefined4 *)(pFVar2 + 4) >> 0x10) == (param_1->Parent).InstanceSerial)
           ) {
          return (int)(((longlong)pFVar2 - (longlong)pFVar1) / 0xc);
        }
      }
      pFVar2 = pFVar2 + 0xc;
    } while (pFVar2 != pFVar1 + (longlong)this->ArrayNum * 0xc);
  }
  return -1;
}

// InsertUninitializedImpl @ 14683eb60

void __thiscall
TArray<TTuple<int,UE::MovieScene::FAdditveAndOverrideData>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<int,UE::MovieScene::FAdditveAndOverrideData>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14683ebe0

void __thiscall
TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14683ec60

void __thiscall
TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x20;
  memmove(_Src + (longlong)param_2 * 0x20,_Src,(longlong)(iVar1 - param_1) << 5);
  return;
}

// InsertUninitializedImpl @ 14683ece0

void __thiscall
TArray<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FComponentTypeID,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>_>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 14683ed60

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FLinearColor>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x14,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x14;
  memmove(_Src + (longlong)param_2 * 0x14,_Src,(longlong)(iVar1 - param_1) * 0x14);
  return;
}

// InsertUninitializedImpl @ 14683ede0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationMontageState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  memmove(_Src + (longlong)param_2 * 0x10,_Src,(longlong)(iVar1 - param_1) << 4);
  return;
}

// InsertUninitializedImpl @ 14683ee60

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSkeletalAnimationState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
  memmove(_Src + (longlong)param_2 * 0x28,_Src,(longlong)(iVar1 - param_1) * 0x28);
  return;
}

// InsertUninitializedImpl @ 14683eee0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedSlomoState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// RemoveAtImpl @ 14685f290

void __thiscall
TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  int iVar1;
  FScriptContainerElement *_Dst;
  
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
  DestructItems<UE::MovieScene::FAdditiveAndOverrides,int>((FAdditiveAndOverrides *)_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + (longlong)param_2 * 0x10,(longlong)iVar1 << 4);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 14685f310

void __thiscall
TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FMovieSceneEventTriggerData,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  FMovieSceneEventTriggerData *_Dst;
  int iVar1;
  
  _Dst = (FMovieSceneEventTriggerData *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x48);
  DestructItems<FMovieSceneEventTriggerData,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x48);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 14686be20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::MovieScene::TSimpleBlendResult<unsigned_char>,TSizedDefaultAllocator<32>_>
           *this,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
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
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14686bf50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::MovieScene::TSimpleBlendResult<bool>,TSizedDefaultAllocator<32>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &this->ArrayNum;
  iVar4 = *piVar1;
  if (iVar4 < param_1) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,param_1 - iVar4,&this->AllocatorInstance,piVar1,&this->ArrayMax);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar4) {
      uVar5 = iVar4 - param_1;
      if (((int)(uVar5 | param_1) < 0) &&
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
      if (uVar5 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
        iVar4 = (*piVar1 - uVar5) - param_1;
        if (iVar4 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar5 * 8,(longlong)iVar4 << 3);
        }
        iVar4 = *piVar1;
        *piVar1 = iVar4 - uVar5;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,&this->AllocatorInstance,iVar4 - uVar5,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNum @ 14686c080

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *this,int param_1
          ,EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<UE::MovieScene::FIntegerBlendResult,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x10,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x10;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x10,(longlong)iVar5 << 4);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 14686c1d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<UE::MovieScene::FQuatTransform,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x60,0x10,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x60,0,
           (longlong)(param_1 - iVar5) * 0x60);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
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
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x60;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x60,(longlong)iVar5 * 0x60);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,0x10,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> @ 14689b710

TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>::
TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_>
          (TArray<UMovieSceneSection_*,TSizedDefaultAllocator<32>_> *this,
          initializer_list<UMovieSceneSection_*> *param_1)

{
  UMovieSceneSection **_Src;
  UMovieSceneSection **ppUVar1;
  int iVar2;
  
  _Src = param_1->_First;
  ppUVar1 = param_1->_Last;
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar2 = (int)((longlong)ppUVar1 - (longlong)_Src >> 3);
  this->ArrayNum = iVar2;
  if (iVar2 == 0) {
    this->ArrayMax = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar2,0,&this->AllocatorInstance,iVar2,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data,_Src,(longlong)iVar2 << 3);
  return this;
}

// InsertUninitializedImpl @ 1468bc4f0

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,UE::MovieScene::FPreAnimatedCameraCutState>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x24,4,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x24;
  memmove(_Src + (longlong)param_2 * 0x24,_Src,(longlong)(iVar1 - param_1) * 0x24);
  return;
}

// InsertUninitializedImpl @ 1468bc570

void __thiscall
TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>::
InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FPreAnimatedStorageIndex,FString>,TSizedDefaultAllocator<32>_>
           *this,int param_1,int param_2)

{
  FScriptContainerElement *_Src;
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  _Src = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
  memmove(_Src + (longlong)param_2 * 0x18,_Src,(longlong)(iVar1 - param_1) * 0x18);
  return;
}

// InsertUninitializedImpl @ 1468bc5f0

void __thiscall
TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
::InsertUninitializedImpl
          (TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
           *this,int param_1,int param_2)

{
  ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
  FVar1;
  int iVar2;
  void *_Src;
  
  iVar2 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>_>
                    (0x1b0,8,param_2,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  FVar1 = (this->AllocatorInstance).SecondaryData;
  if (FVar1 != (ForElementType<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>_>
                )0x0) {
    this = (TArray<TTuple<UE::MovieScene::FRootInstanceHandle,UE::MovieScene::FRootSequenceData>,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>_>
            *)FVar1;
  }
  _Src = (void *)((longlong)param_1 * 0x1b0 + (longlong)this);
  memmove((void *)((longlong)param_2 * 0x1b0 + (longlong)_Src),_Src,
          (longlong)(iVar2 - param_1) * 0x1b0);
  return;
}

// RemoveAtSwapImpl @ 1468c95f0

void __thiscall
TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<UE::MovieScene::FHierarchicalEasingChannelData,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  pFVar1 = (this->AllocatorInstance).Data;
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (param_2 < iVar2) {
    iVar2 = param_2;
  }
  if (iVar2 != 0) {
    memmove(pFVar1 + (longlong)param_1 * 0x18,pFVar1 + (longlong)(this->ArrayNum - iVar2) * 0x18,
            (longlong)iVar2 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

