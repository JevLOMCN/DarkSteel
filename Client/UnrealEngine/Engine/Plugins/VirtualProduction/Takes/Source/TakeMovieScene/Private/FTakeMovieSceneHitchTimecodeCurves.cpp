// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TakeMovieScene
// Functions: 4

// StaticStruct @ 14d0b8b30

UScriptStruct * __cdecl FTakeMovieSceneHitchTimecodeCurves::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TakeMovieScene();
    Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves,
                         (UObject *)pUVar1,L"TakeMovieSceneHitchTimecodeCurves");
  }
  return Z_Registration_Info_UScriptStruct_FTakeMovieSceneHitchTimecodeCurves.OuterSingleton;
}

// Evaluate @ 14d0ba480

TOptional<FTimecode> * __thiscall
FTakeMovieSceneHitchTimecodeCurves::Evaluate
          (FTakeMovieSceneHitchTimecodeCurves *this,TOptional<FTimecode> *__return_storage_ptr__,
          FFrameTime *param_1)

{
  longlong lVar1;
  bool bVar2;
  long64 local_res8;
  long64 local_res18;
  long64 local_res20;
  long64 local_38 [3];
  uint uStack_1c;
  
  local_res8 = 0;
  bVar2 = FMovieSceneIntegerChannel::Evaluate(&this->HoursCurve,*param_1,&local_res8);
  if (bVar2) {
    local_res18 = 0;
    bVar2 = FMovieSceneIntegerChannel::Evaluate(&this->MinutesCurve,*param_1,&local_res18);
    if (bVar2) {
      local_res20 = 0;
      bVar2 = FMovieSceneIntegerChannel::Evaluate(&this->SecondsCurve,*param_1,&local_res20);
      if (bVar2) {
        local_38[0] = 0;
        bVar2 = FMovieSceneIntegerChannel::Evaluate(&this->FramesCurve,*param_1,local_38);
        if (bVar2) {
          uStack_1c = uStack_1c & 0xffffff00;
          lVar1 = (ulonglong)uStack_1c << 0x20;
          (__return_storage_ptr__->TypedValue).Hours = (undefined4)local_res8;
          (__return_storage_ptr__->TypedValue).Minutes = (undefined4)local_res18;
          (__return_storage_ptr__->TypedValue).Seconds = (undefined4)local_res20;
          (__return_storage_ptr__->TypedValue).Frames = (undefined4)local_38[0];
          __return_storage_ptr__->bIsSet = true;
          (__return_storage_ptr__->TypedValue).Subframe = (float)(int)lVar1;
          (__return_storage_ptr__->TypedValue).bDropFrameFormat =
               (bool)(char)((ulonglong)lVar1 >> 0x20);
          *(int3 *)&(__return_storage_ptr__->TypedValue).field_0x15 =
               (int3)((ulonglong)lVar1 >> 0x28);
          return __return_storage_ptr__;
        }
      }
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetFrameTimes @ 14d0ba8e0

TArrayView<FFrameNumber_const_,int> * __thiscall
FTakeMovieSceneHitchTimecodeCurves::GetFrameTimes
          (FTakeMovieSceneHitchTimecodeCurves *this,
          TArrayView<FFrameNumber_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FFrameNumber_const_,int> *pTVar4;
  
  iVar1 = (this->HoursCurve).Times.ArrayNum;
  __return_storage_ptr__->DataPtr = (FFrameNumber *)(this->HoursCurve).Times.AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FFrameNumber_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// Set @ 14d0bb480

void __thiscall
FTakeMovieSceneHitchTimecodeCurves::Set
          (FTakeMovieSceneHitchTimecodeCurves *this,
          TArray<FFrameNumber,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<int,TSizedDefaultAllocator<32>_> *param_5)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_a8;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_98;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_88;
  TArray<int,TSizedDefaultAllocator<32>_> local_78;
  TArray<int,TSizedDefaultAllocator<32>_> local_68;
  TArray<int,TSizedDefaultAllocator<32>_> local_58;
  TArray<int,TSizedDefaultAllocator<32>_> local_48;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_38;
  
  iVar1 = param_1->ArrayNum;
  iVar2 = param_2->ArrayNum;
  if ((((iVar2 == iVar1) && (param_3->ArrayNum == iVar1)) && (param_4->ArrayNum == iVar1)) &&
     (param_5->ArrayNum == iVar1)) {
    local_78.AllocatorInstance.Data = (param_2->AllocatorInstance).Data;
    (param_2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_78.ArrayMax = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 0;
    local_a8.ArrayNum = param_1->ArrayNum;
    lVar6 = (longlong)local_a8.ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = iVar2;
    if (local_a8.ArrayNum == 0) {
      local_a8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_a8.ArrayNum,0,&local_a8.AllocatorInstance,local_a8.ArrayNum,
                 &local_a8.ArrayMax);
      memcpy(local_a8.AllocatorInstance.Data,pFVar3,lVar6 << 2);
    }
    FMovieSceneIntegerChannel::Set(&this->HoursCurve,&local_a8,&local_78);
    local_68.AllocatorInstance.Data = (param_3->AllocatorInstance).Data;
    (param_3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_68.ArrayNum = param_3->ArrayNum;
    local_68.ArrayMax = param_3->ArrayMax;
    param_3->ArrayNum = 0;
    param_3->ArrayMax = 0;
    local_98.ArrayNum = param_1->ArrayNum;
    lVar6 = (longlong)local_98.ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_98.ArrayNum == 0) {
      local_98.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_98.ArrayNum,0,&local_98.AllocatorInstance,local_98.ArrayNum,
                 &local_98.ArrayMax);
      memcpy(local_98.AllocatorInstance.Data,pFVar3,lVar6 << 2);
    }
    FMovieSceneIntegerChannel::Set(&this->MinutesCurve,&local_98,&local_68);
    local_58.AllocatorInstance.Data = (param_4->AllocatorInstance).Data;
    (param_4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = param_4->ArrayNum;
    local_58.ArrayMax = param_4->ArrayMax;
    param_4->ArrayNum = 0;
    param_4->ArrayMax = 0;
    local_88.ArrayNum = param_1->ArrayNum;
    lVar6 = (longlong)local_88.ArrayNum;
    pFVar3 = (param_1->AllocatorInstance).Data;
    local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_88.ArrayNum == 0) {
      local_88.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_88.ArrayNum,0,&local_88.AllocatorInstance,local_88.ArrayNum,
                 &local_88.ArrayMax);
      memcpy(local_88.AllocatorInstance.Data,pFVar3,lVar6 << 2);
    }
    FMovieSceneIntegerChannel::Set(&this->SecondsCurve,&local_88,&local_58);
    local_48.AllocatorInstance.Data = (param_5->AllocatorInstance).Data;
    (param_5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_48.ArrayNum = param_5->ArrayNum;
    local_48.ArrayMax = param_5->ArrayMax;
    param_5->ArrayNum = 0;
    param_5->ArrayMax = 0;
    local_38.AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
    (param_1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    local_38.ArrayNum = param_1->ArrayNum;
    local_38.ArrayMax = param_1->ArrayMax;
    param_1->ArrayNum = 0;
    param_1->ArrayMax = 0;
    FMovieSceneIntegerChannel::Set(&this->FramesCurve,&local_38,&local_48);
  }
  else {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8555731791736995828>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\VirtualProduction\\Takes\\Source\\TakeMovieScene\\Private\\Hitching\\TimecodeHitchChannels.cpp"
                       ,0xc,
                       "Hours.Num() == Num && Minutes.Num() == Num && Seconds.Num() == Num && Frames.Num() == Num"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_4->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_5->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

