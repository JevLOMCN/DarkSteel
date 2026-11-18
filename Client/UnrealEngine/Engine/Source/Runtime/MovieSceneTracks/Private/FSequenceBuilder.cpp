// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// AddPropertyTrack<UMovieSceneFloatTrack> @ 146885450

FSequenceTrackBuilder<UMovieSceneFloatTrack> * __thiscall
UE::MovieScene::Test::FSequenceBuilder::AddPropertyTrack<UMovieSceneFloatTrack>
          (FSequenceBuilder *this,
          FSequenceTrackBuilder<UMovieSceneFloatTrack> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FSequenceTrackBuilder<UMovieSceneFloatTrack> *pFVar4;
  UMovieScene *this_00;
  UMovieScenePropertyTrack *this_01;
  UClass *pUVar5;
  FString *pFVar6;
  UClass *local_res8;
  FName local_res18 [2];
  FString local_28;
  
  local_res18[0] = param_1;
  if ((((this->CurrentBinding).D == 0 && (this->CurrentBinding).C == 0) &&
      (this->CurrentBinding).B == 0) && (this->CurrentBinding).A == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBinding.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Public\\Tests\\MovieSceneTestDataBuilders.h"
                       ,0x79,L"Specify an object binding first with AddObjectBinding");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FSequenceTrackBuilder<UMovieSceneFloatTrack> *)(*pcVar2)();
      return pFVar4;
    }
  }
  this_00 = (UMovieScene *)
            (**(code **)(((this->Sequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  local_res8 = UMovieSceneFloatTrack::StaticClass();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  this_01 = (UMovieScenePropertyTrack *)
            UMovieScene::AddTrack
                      (this_00,(TSubclassOf<UMovieSceneTrack>)&local_res8,&this->CurrentBinding);
  if (this_01 != (UMovieScenePropertyTrack *)0x0) {
    pUVar5 = UMovieSceneFloatTrack::StaticClass();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_01->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) goto LAB_146885508;
  }
  this_01 = (UMovieScenePropertyTrack *)0x0;
LAB_146885508:
  pFVar6 = ::FName::ToString(local_res18,&local_28);
  UMovieScenePropertyTrack::SetPropertyNameAndPath(this_01,local_res18[0],pFVar6);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  __return_storage_ptr__->Parent = this;
  (__return_storage_ptr__->Track).field0_0x0.DebugPtr = (UMovieSceneFloatTrack *)this_01;
  if ((GC::GIsIncrementalReachabilityPending != false) &&
     (this_01 != (UMovieScenePropertyTrack *)0x0)) {
    GC::MarkAsReachable((UObject *)this_01);
  }
  return __return_storage_ptr__;
}

// AddRootTrack<UMovieSceneSubTrack> @ 146885570

FSequenceTrackBuilder<UMovieSceneSubTrack> * __thiscall
UE::MovieScene::Test::FSequenceBuilder::AddRootTrack<UMovieSceneSubTrack>
          (FSequenceBuilder *this,FSequenceTrackBuilder<UMovieSceneSubTrack> *__return_storage_ptr__
          )

{
  int iVar1;
  UMovieScene *this_00;
  UMovieSceneSubTrack *pUVar2;
  UClass *pUVar3;
  UClass *local_res8;
  
  this_00 = (UMovieScene *)
            (**(code **)(((this->Sequence).field0_0x0.DebugPtr)->_padding_ + 0x2f8))();
  local_res8 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
  if ((GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UClass *)0x0)) {
    GC::MarkAsReachable((UObject *)local_res8);
  }
  pUVar2 = (UMovieSceneSubTrack *)
           UMovieScene::AddTrack(this_00,(TSubclassOf<UMovieSceneTrack>)&local_res8);
  if (pUVar2 != (UMovieSceneSubTrack *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneSubTrack_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_1468855ee;
  }
  pUVar2 = (UMovieSceneSubTrack *)0x0;
LAB_1468855ee:
  __return_storage_ptr__->Parent = this;
  (__return_storage_ptr__->Track).field0_0x0.DebugPtr = pUVar2;
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UMovieSceneSubTrack *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar2);
  }
  return __return_storage_ptr__;
}

// FSequenceBuilder @ 14689c570

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

FSequenceBuilder * __thiscall
UE::MovieScene::Test::FSequenceBuilder::FSequenceBuilder(FSequenceBuilder *this)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMovieSceneTestSequence *pUVar3;
  UMovieScene *pUVar4;
  longlong *plVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  (this->Sequence).field0_0x0.DebugPtr = (UMovieSceneTestSequence *)0x0;
  (this->CurrentBinding).A = 0;
  (this->CurrentBinding).B = 0;
  (this->CurrentBinding).C = 0;
  (this->CurrentBinding).D = 0;
  pUVar1 = GetTransientPackageAsObject();
  FObjectInitializer::AssertIfInConstructor
            (pUVar1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = UMovieSceneTestSequence::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar1;
  pUVar3 = (UMovieSceneTestSequence *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UMovieSceneTestSequence *)0x0)
     ) {
    GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->Sequence).field0_0x0.DebugPtr = pUVar3;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)pUVar3,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UMovieScene_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar2);
  local_98._8_8_ = pUVar3;
  pUVar4 = (UMovieScene *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar5 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UMovieScene *)0x0)) {
    GC::MarkAsReachable((UObject *)pUVar4);
  }
  (pUVar3->MovieScene).field0_0x0.DebugPtr = pUVar4;
  return this;
}

