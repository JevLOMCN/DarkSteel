// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 24

// FMovieSceneSpawnRegister @ 1461fcaa0

FMovieSceneSpawnRegister * __thiscall
FMovieSceneSpawnRegister::FMovieSceneSpawnRegister
          (FMovieSceneSpawnRegister *this,FMovieSceneSpawnRegister *param_1)

{
  this->_padding_ = (longlong)&___7FMovieSceneSpawnRegister__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&(this->Register).field_0x0 = 0;
  *(undefined8 *)&(this->Register).field_0x8 = 0;
  *(undefined8 *)&(this->Register).field_0x20 = 0;
  *(undefined4 *)&(this->Register).field_0x28 = 0;
  *(undefined4 *)&(this->Register).field_0x2c = 0x80;
  *(undefined4 *)&(this->Register).field_0x34 = 0;
  *(undefined4 *)&(this->Register).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Register).field_0x40 = 0;
  *(undefined4 *)&(this->Register).field_0x48 = 0;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  ::operator=((TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
               *)&this->Register,
              (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
               *)&param_1->Register);
  this->bCleaningUp = param_1->bCleaningUp;
  return this;
}

// FMovieSceneSpawnRegister @ 1461fcb20

FMovieSceneSpawnRegister * __thiscall
FMovieSceneSpawnRegister::FMovieSceneSpawnRegister(FMovieSceneSpawnRegister *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FMovieSceneSpawnRegister__6B_;
  *(undefined8 *)&this->Register = 0;
  *(undefined8 *)&(this->Register).field_0x8 = 0;
  *(undefined8 *)&(this->Register).field_0x20 = 0;
  *(undefined4 *)&(this->Register).field_0x28 = 0;
  *(undefined4 *)&(this->Register).field_0x2c = 0x80;
  *(undefined4 *)&(this->Register).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Register).field_0x34 = 0;
  *(undefined8 *)&(this->Register).field_0x40 = 0;
  *(undefined4 *)&(this->Register).field_0x48 = 0;
  this->bCleaningUp = false;
  return this;
}

// ~FMovieSceneSpawnRegister @ 1461ff660

void __thiscall FMovieSceneSpawnRegister::~FMovieSceneSpawnRegister(FMovieSceneSpawnRegister *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  *(undefined4 *)&(this->Register).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FMovieSceneSpawnRegister__6B_;
  pvVar3 = *(void **)&(this->Register).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Register);
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// CleanUp @ 14620aef0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::CleanUp(FMovieSceneSpawnRegister *this,IMovieScenePlayer *param_1)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  undefined1 local_res8 [8];
  code **local_res10;
  code *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined8 **local_40;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_1->_padding_ + 0x18))(param_1);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_50 = local_res8;
  if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
    bVar4 = this->bCleaningUp;
    this->bCleaningUp = true;
  }
  else {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    bVar4 = this->bCleaningUp;
    this->bCleaningUp = true;
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = &local_58;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUp'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_res8[0] = 0;
  local_40 = &local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  DestroyObjectsByPredicate
            (this,&local_38,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->bCleaningUp = bVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// CleanUp @ 14620b050

void __thiscall
FMovieSceneSpawnRegister::CleanUp
          (FMovieSceneSpawnRegister *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  bool bVar1;
  TReferenceControllerBase<1> *pTVar2;
  undefined1 local_res8 [8];
  code **local_res10;
  code *local_48;
  code ***local_40;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  code *local_28;
  undefined1 *local_20;
  
  bVar1 = this->bCleaningUp;
  local_20 = local_res8;
  this->bCleaningUp = true;
  pTVar2 = (param_1->SharedReferenceCount).ReferenceController;
  local_38.Object = param_1->Object;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUp'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_res10 = &local_28;
  local_res8[0] = 0;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_40 = &local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  DestroyObjectsByPredicate
            (this,&local_38,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  this->bCleaningUp = bVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// CleanUpSequence @ 14620b110

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::CleanUpSequence
          (FMovieSceneSpawnRegister *this,FMovieSceneSequenceID *param_1,IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FMovieSceneSequenceID *local_res10;
  code **local_res18 [2];
  code *local_68;
  FMovieSceneSequenceID **local_60;
  code *local_58;
  code ***local_50;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_38);
  if ((pTVar5->Object == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if ((pFVar1 == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_60 = &local_res10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0] = &local_68;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUpSequence'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_res10 = param_1;
  local_48.Object = pFVar1;
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  DestroyObjectsByPredicate
            (this,&local_48,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// CleanUpSequence @ 14620b260

void __thiscall
FMovieSceneSpawnRegister::CleanUpSequence
          (FMovieSceneSpawnRegister *this,FMovieSceneSequenceID *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code **local_res10;
  FMovieSceneSequenceID *local_res18 [2];
  code *local_38;
  code ***local_30;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  code *local_18;
  FMovieSceneSequenceID **local_10;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_10 = local_res18;
  local_28.Object = param_2->Object;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::CleanUpSequence'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_res10 = &local_18;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_res18[0] = param_1;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  DestroyObjectsByPredicate
            (this,&local_28,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// DestroyObjectsByPredicate @ 14620e900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::DestroyObjectsByPredicate
          (FMovieSceneSpawnRegister *this,IMovieScenePlayer *param_1,
          TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)>
          *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)>
  *local_res10;
  code *local_48;
  TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)> **local_40
  ;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_1->_padding_ + 0x18))(param_1);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if ((pTVar5->Object == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if ((pFVar1 == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  local_40 = &local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10 = param_2;
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  DestroyObjectsByPredicate
            (this,&local_38,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// DestroyObjectsByPredicate @ 14620ea20

void __thiscall
FMovieSceneSpawnRegister::DestroyObjectsByPredicate
          (FMovieSceneSpawnRegister *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)>
          *param_2)

{
  TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)>
  *local_res10 [3];
  code *local_28;
  TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&)> **local_20
  ;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  local_20 = local_res10;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res10[0] = param_2;
  DestroyObjectsByPredicate
            (this,&local_18,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DestroyObjectsByPredicate @ 14620ea90

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::DestroyObjectsByPredicate
          (FMovieSceneSpawnRegister *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
          *param_2)

{
  TMap<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>_>
  *pTVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  bool bVar7;
  UObject *pUVar8;
  UMovieSceneSequence *pUVar9;
  FMovieSceneBindingReferences *this_00;
  UMovieSceneCustomBinding *pUVar10;
  longlong *plVar11;
  ulonglong uVar12;
  FMovieSceneEvaluationState *this_01;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 local_res20 [8];
  undefined1 local_f8 [8];
  undefined4 local_f0 [6];
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *local_a8;
  char local_a0;
  char cStack_9f;
  FSharedPlaybackState *local_98;
  TReferenceControllerBase<1> *local_90;
  FPlaybackCapabilityPtr local_88;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *pTStack_50;
  
  pTVar1 = &this->Register;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
              *)pTVar1);
  local_a0 = '\0';
  cStack_9f = '\0';
  stack0xffffffffffffff38 = local_78._16_16_;
  local_d8 = (longlong *)local_78._0_8_;
  auStack_d0._0_8_ = local_78._8_8_;
  local_b8 = local_58;
  pTStack_b0 = pTStack_50;
  uVar12 = local_78._24_8_ >> 0x20;
  local_a8 = (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
              *)pTVar1;
  if ((int)local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    iVar17 = 1;
    uVar14 = local_78._28_4_;
    do {
      plVar5 = local_d8;
      lVar15 = *local_d8;
      local_f0[0] = *(undefined4 *)((longlong)(int)uVar12 * 0x3c + 0x14 + lVar15);
      lVar13 = (longlong)(int)uVar14 * 0x3c;
      lVar16 = (longlong)(int)uVar14 * 0x3c;
      local_res20[0] = *(undefined1 *)(lVar16 + 0x30 + lVar15);
      cVar6 = (**(code **)param_2)
                        (*(undefined8 *)&param_2->field_0x8,lVar15 + 0x18 + lVar13,local_res20,
                         lVar15 + 0x10 + lVar13,local_f0);
      if (cVar6 != '\0') {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)(*plVar5 + 0x28 + lVar13));
        if (pUVar8 != (UObject *)0x0) {
          pFVar2 = param_1->Object;
          bVar7 = IsInGameThread();
          if (!bVar7) {
            local_f8[0] = bVar7;
            `UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>'::__l2
            ::<lambda_1>::operator()(local_f8);
          }
          FMovieSceneEvaluationState::GetPlaybackCapabilityID();
          UE::MovieScene::FPlaybackCapabilitiesImpl::FindCapability
                    ((FPlaybackCapabilitiesImpl *)&pFVar2->Capabilities,&local_88,
                     1 << ((byte)local_f0[2] & 0x1f));
          if (local_88.Ptr == (FMovieSceneEvaluationState *)0x0) {
LAB_14620ec47:
            lVar15 = (longlong)(int)uVar14 * 0x3c + *plVar5;
            (**(code **)(this->_padding_ + 0x30))(this,pUVar8,lVar15,0,lVar15 + 0x10);
            plVar11 = (longlong *)0x0;
          }
          else {
            this_01 = local_88.Ptr;
            if (local_88.StorageMode != Inline) {
              if ((local_88.StorageMode != RawPointer) && (local_88.StorageMode != SharedPointer)) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("false",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                                   ,0x30,L"Unexpected playback capability storage mode");
                if (bVar7) {
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                goto LAB_14620ec47;
              }
              this_01 = *(FMovieSceneEvaluationState **)local_88.Ptr;
            }
            if ((((this_01 == (FMovieSceneEvaluationState *)0x0) ||
                 (pUVar9 = FMovieSceneEvaluationState::FindSequence
                                     (this_01,(FMovieSceneSequenceID *)(*plVar5 + 0x10 + lVar16)),
                 pUVar9 == (UMovieSceneSequence *)0x0)) ||
                (this_00 = (FMovieSceneBindingReferences *)
                           (**(code **)(pUVar9->_padding_ + 0x2b8))(pUVar9),
                this_00 == (FMovieSceneBindingReferences *)0x0)) ||
               (pUVar10 = FMovieSceneBindingReferences::GetCustomBinding
                                    (this_00,(FGuid *)(*plVar5 + lVar16),
                                     ((FGuid *)(*plVar5 + lVar16))[1].B),
               pUVar10 == (UMovieSceneCustomBinding *)0x0)) goto LAB_14620ec47;
            pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
            local_98 = param_1->Object;
            if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
              lVar15 = *(longlong *)pUVar10;
            }
            else {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
              lVar15 = *(longlong *)pUVar10;
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_90 = pTVar3;
            plVar11 = (longlong *)(**(code **)(lVar15 + 0x2e0))(pUVar10,&local_98);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar3);
            if (plVar11 == (longlong *)0x0) goto LAB_14620ec47;
            lVar15 = *plVar5 + lVar16;
            (**(code **)(*plVar11 + 0x2f8))
                      (plVar11,pUVar8,lVar15,*(undefined4 *)(lVar15 + 0x14),lVar15 + 0x10);
            (**(code **)(this->_padding_ + 0x30))
                      (this,pUVar8,*plVar5 + lVar16,0,*plVar5 + lVar16 + 0x10);
          }
          (**(code **)(this->_padding_ + 0x20))(this,pUVar8,plVar11);
        }
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_b0,uVar14);
        local_a0 = '\x01';
      }
      uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
      uVar12 = (ulonglong)uStack_bc;
      uVar14 = uStack_bc;
    } while ((int)uStack_bc < *(int *)(auStack_d0._8_8_ + 0x18));
    if ((local_a0 != '\0') && (cStack_9f != '\0')) {
      uVar14 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
      if (3 < uVar14) {
        uVar12 = (ulonglong)((uVar14 >> 1) + 7) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar17 = 1 << ((byte)lVar15 & 0x1f);
      }
      if (((0 < (int)uVar14) && (local_a8->HashSize < iVar17)) || (iVar17 < local_a8->HashSize)) {
        local_a8->HashSize = iVar17;
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::Rehash(local_a8);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// DestroySpawnedObject @ 14620ee50

void __thiscall
FMovieSceneSpawnRegister::DestroySpawnedObject(FMovieSceneSpawnRegister *this,UObject *param_1)

{
  return;
}

// DestroySpawnedObject @ 14620ee60

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FMovieSceneSpawnRegister::DestroySpawnedObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          IMovieScenePlayer *param_3)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_3->_padding_ + 0x18))(param_3);
  pTVar6 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_28);
  if (pTVar6->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  pFVar1 = pTVar6->Object;
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  (pTVar6->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar6->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_38.Object = pFVar1;
  local_38.SharedReferenceCount.ReferenceController = pTVar2;
  bVar4 = DestroySpawnedObject(this,param_1,param_2,&local_38,0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return bVar4;
}

// DestroySpawnedObject @ 14620ef80

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

bool __thiscall
FMovieSceneSpawnRegister::DestroySpawnedObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,FMovieSceneSequenceID *param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  FMovieSceneEvaluationState *pFVar7;
  UMovieSceneSequence *pUVar8;
  FMovieSceneBindingReferences *this_00;
  UMovieSceneCustomBinding *this_01;
  UMovieSceneSpawnableBindingBase *pUVar9;
  undefined1 *puVar10;
  uint *puVar11;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  FMovieSceneSpawnRegisterKey local_58;
  
  bVar1 = this->bCleaningUp;
  this->bCleaningUp = true;
  local_58.BindingId.A = param_1->A;
  local_58.BindingId.B = param_1->B;
  local_58.BindingId.C = param_1->C;
  local_58.BindingId.D = param_1->D;
  local_58.TemplateID = (FMovieSceneSequenceID)param_2->Value;
  local_58.BindingIndex = param_4;
  uVar2 = ::GetTypeHash(&local_58);
  iVar3 = TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey>
                    ((TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
                      *)&this->Register,uVar2,&local_58);
  pUVar6 = (UObject *)0x0;
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x3c + *(longlong *)&this->Register;
    pUVar5 = (UObject *)(lVar4 + 0x18);
    if (lVar4 == 0) {
      pUVar5 = pUVar6;
    }
    if ((pUVar5 != (UObject *)0x0) &&
       (pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar5->field_0x10),
       pUVar6 != (UObject *)0x0)) {
      (**(code **)(this->_padding_ + 0x30))(this,pUVar6,param_1,param_4,param_2);
      pFVar7 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                         (param_3->Object);
      if ((pFVar7 != (FMovieSceneEvaluationState *)0x0) &&
         (((pUVar8 = FMovieSceneEvaluationState::FindSequence(pFVar7,param_2),
           pUVar8 != (UMovieSceneSequence *)0x0 &&
           (this_00 = (FMovieSceneBindingReferences *)
                      (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8),
           this_00 != (FMovieSceneBindingReferences *)0x0)) &&
          (this_01 = FMovieSceneBindingReferences::GetCustomBinding(this_00,param_1,param_4),
          this_01 != (UMovieSceneCustomBinding *)0x0)))) {
        local_68.Object = param_3->Object;
        local_68.SharedReferenceCount.ReferenceController =
             (param_3->SharedReferenceCount).ReferenceController;
        if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar9 = UMovieSceneCustomBinding::AsSpawnable(this_01,&local_68);
        if (pUVar9 != (UMovieSceneSpawnableBindingBase *)0x0) {
          (**(code **)(pUVar9->_padding_ + 0x2f8))(pUVar9,pUVar6,param_1,param_4,param_2);
          (**(code **)(this->_padding_ + 0x20))(this,pUVar6,pUVar9);
          goto LAB_14620f105;
        }
      }
      (**(code **)(this->_padding_ + 0x20))(this,pUVar6,0);
    }
  }
LAB_14620f105:
  if (*(int *)&(this->Register).field_0x8 != *(int *)&(this->Register).field_0x34) {
    uVar2 = ::GetTypeHash(&local_58);
    puVar10 = *(undefined1 **)&(this->Register).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->Register).field_0x38;
    }
    uVar2 = *(uint *)(puVar10 +
                     ((longlong)*(int *)&(this->Register).field_0x48 - 1U & (longlong)(int)uVar2) *
                     4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar11 = (uint *)((longlong)(int)uVar2 * 0x3c + *(longlong *)&this->Register);
        if (((((local_58.BindingId.D == puVar11[3] && local_58.BindingId.C == puVar11[2]) &&
              local_58.BindingId.B == puVar11[1]) && local_58.BindingId.A == *puVar11) &&
            (puVar11[4] == local_58.TemplateID.Value)) && (puVar11[5] == local_58.BindingIndex)) {
          TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
                           *)&this->Register,uVar2);
          break;
        }
        uVar2 = puVar11[0xd];
      } while (uVar2 != 0xffffffff);
    }
  }
  pFVar7 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                     (param_3->Object);
  if (pFVar7 != (FMovieSceneEvaluationState *)0x0) {
    FMovieSceneEvaluationState::Invalidate(pFVar7,param_1,param_2);
  }
  this->bCleaningUp = bVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return pUVar6 != (UObject *)0x0;
}

// FindSpawnedObject @ 146212e70

TWeakObjectPtr<UObject,FWeakObjectPtr> __thiscall
FMovieSceneSpawnRegister::FindSpawnedObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,FMovieSceneSequenceID *param_2,int param_3)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 in_register_0000008c;
  FMovieSceneSpawnRegisterKey local_28;
  
  local_28.TemplateID.Value = *(uint *)CONCAT44(in_register_0000008c,param_3);
  local_28.BindingId._0_8_ = *(undefined8 *)param_2;
  local_28.BindingId._8_8_ = *(undefined8 *)(param_2 + 2);
  uVar2 = ::GetTypeHash(&local_28);
  iVar3 = TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey>
                    ((TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
                      *)&this->Register,uVar2,&local_28);
  if (iVar3 != -1) {
    lVar4 = (longlong)iVar3 * 0x3c + *(longlong *)&(this->Register).field_0x0;
    lVar5 = lVar4 + 0x18;
    if (lVar4 == 0) {
      lVar5 = 0;
    }
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(lVar5 + 0x10);
      param_1->A = (int)uVar1;
      param_1->B = (int)((ulonglong)uVar1 >> 0x20);
      return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
    }
  }
  param_1->A = 0;
  param_1->B = 0;
  return (TWeakObjectPtr<UObject,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// ForgetExternallyOwnedSpawnedObjects @ 146214de0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::ForgetExternallyOwnedSpawnedObjects
          (FMovieSceneSpawnRegister *this,FMovieSceneEvaluationState *param_1,
          IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_18;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_18);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar1 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.Object = pFVar1;
  local_28.SharedReferenceCount.ReferenceController = pTVar2;
  ForgetExternallyOwnedSpawnedObjects(this,&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// ForgetExternallyOwnedSpawnedObjects @ 146214ed0

void __thiscall
FMovieSceneSpawnRegister::ForgetExternallyOwnedSpawnedObjects
          (FMovieSceneSpawnRegister *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  FMovieSceneEvaluationState *this_00;
  ulonglong uVar3;
  FGuid *pFVar4;
  TMap<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>_>
  *pTVar5;
  uint uVar6;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *local_18;
  char local_10;
  char cStack_f;
  
  this_00 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                      (param_1->Object);
  pTVar5 = &this->Register;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
              *)pTVar5);
  local_10 = '\0';
  cStack_f = '\0';
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  uVar6 = local_78._28_4_;
  local_18 = (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
              *)pTVar5;
  if ((int)uVar6 < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pFVar4 = (FGuid *)((longlong)(int)uVar3 * 0x3c + *local_48);
      if ((char)pFVar4[3].A == '\x02') {
        if (this_00 != (FMovieSceneEvaluationState *)0x0) {
          FMovieSceneEvaluationState::Invalidate
                    (this_00,pFVar4,(FMovieSceneSequenceID *)(pFVar4 + 1));
        }
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_20,uVar6);
        local_10 = '\x01';
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
      uVar6 = uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if ((local_10 != '\0') && (cStack_f != '\0')) {
      uVar6 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar6 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar6 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar6) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// GetPlaybackCapabilityID @ 14621a7f0

TPlaybackCapabilityID<FMovieSceneSpawnRegister> __cdecl
FMovieSceneSpawnRegister::GetPlaybackCapabilityID(void)

{
  TPlaybackCapabilityID<FMovieSceneSpawnRegister> *in_RCX;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticID = (TPlaybackCapabilityID<FMovieSceneSpawnRegister>)
                   UE::MovieScene::FPlaybackCapabilityID::Register(L"FMovieSceneSpawnRegister");
      _Init_thread_footer(&::_TSS0);
    }
  }
  *in_RCX = ::StaticID;
  return SUB84(in_RCX,0);
}

// OnSequenceExpired @ 146226b40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneSpawnRegister::OnSequenceExpired
          (FMovieSceneSpawnRegister *this,FMovieSceneSequenceID *param_1,IMovieScenePlayer *param_2)

{
  FSharedPlaybackState *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FMovieSceneSequenceID *local_res10;
  code **local_res18 [2];
  code *local_68;
  FMovieSceneSequenceID **local_60;
  code *local_58;
  code ***local_50;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)
            (**(code **)(param_2->_padding_ + 0x18))(param_2);
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_38);
  if ((pTVar5->Object == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar1 = pTVar5->Object;
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if ((pFVar1 == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  local_60 = &local_res10;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_res18[0] = &local_68;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::OnSequenceExpired'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_50 = local_res18;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_res10 = param_1;
  local_48.Object = pFVar1;
  local_48.SharedReferenceCount.ReferenceController = pTVar2;
  DestroyObjectsByPredicate
            (this,&local_48,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// OnSequenceExpired @ 146226c90

void __thiscall
FMovieSceneSpawnRegister::OnSequenceExpired
          (FMovieSceneSpawnRegister *this,FMovieSceneSequenceID *param_1,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  code **local_res10;
  FMovieSceneSequenceID *local_res18 [2];
  code *local_38;
  code ***local_30;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_28;
  code *local_18;
  FMovieSceneSequenceID **local_10;
  
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  local_10 = local_res18;
  local_28.Object = param_2->Object;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::OnSequenceExpired'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&>
             ::Call;
  local_res10 = &local_18;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_30 = &local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FMovieSceneSpawnRegister::DestroyObjectsByPredicate'::__l2::<lambda_1>,bool,FGuid_const_&,enum_ESpawnOwnership,FMovieSceneSequenceID_const_&,int>
             ::Call;
  local_res18[0] = param_1;
  local_28.SharedReferenceCount.ReferenceController = pTVar1;
  DestroyObjectsByPredicate
            (this,&local_28,
             (TFunctionRef<bool___cdecl(FGuid_const_&,ESpawnOwnership,FMovieSceneSequenceID_const_&,int)>
              *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// PreDestroyObject @ 146229a60

void __thiscall
FMovieSceneSpawnRegister::PreDestroyObject
          (FMovieSceneSpawnRegister *this,UObject *param_1,FGuid *param_2,
          FMovieSceneSequenceID *param_3)

{
  (**(code **)(this->_padding_ + 0x30))();
  return;
}

// PreDestroyObject @ 146229a80

void __thiscall
FMovieSceneSpawnRegister::PreDestroyObject
          (FMovieSceneSpawnRegister *this,UObject *param_1,FGuid *param_2,int param_3,
          FMovieSceneSequenceID *param_4)

{
  return;
}

// SpawnObject @ 146236b40

/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __thiscall
FMovieSceneSpawnRegister::SpawnObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,IMovieScenePlayer *param_4)

{
  code *pcVar1;
  FSharedPlaybackState *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  FMovieSceneRootEvaluationTemplateInstance *this_00;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  UObject *pUVar6;
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  
  pcVar1 = *(code **)(this->_padding_ + 0x10);
  this_00 = (FMovieSceneRootEvaluationTemplateInstance *)(**(code **)(param_4->_padding_ + 0x18))();
  pTVar5 = FMovieSceneRootEvaluationTemplateInstance::GetSharedPlaybackState(this_00,&local_38);
  if (pTVar5->Object == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar1)();
      return pUVar6;
    }
  }
  pFVar2 = pTVar5->Object;
  pTVar3 = (pTVar5->SharedReferenceCount).ReferenceController;
  (pTVar5->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar5->Object = (FSharedPlaybackState *)0x0;
  if (pFVar2 == (FSharedPlaybackState *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar6 = (UObject *)(*pcVar1)();
      return pUVar6;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_48 = pFVar2;
  local_40 = pTVar3;
  pUVar6 = (UObject *)(*pcVar1)(this,param_1,param_2,param_3,&local_48);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return pUVar6;
}

// SpawnObject @ 146236c60

UObject * __thiscall
FMovieSceneSpawnRegister::SpawnObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  atomic<int> *paVar1;
  code *pcVar2;
  TReferenceControllerBase<1> *pTVar3;
  UObject *pUVar4;
  
  pcVar2 = *(code **)(this->_padding_ + 0x18);
  pTVar3 = (param_4->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->SharedReferenceCount;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pUVar4 = (UObject *)(*pcVar2)();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return pUVar4;
}

// SpawnObject @ 146236cd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
FMovieSceneSpawnRegister::SpawnObject
          (FMovieSceneSpawnRegister *this,FGuid *param_1,UMovieScene *param_2,
          FMovieSceneSequenceID *param_3,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4,int param_5)

{
  TMap<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>_>
  *this_00;
  ESpawnOwnership EVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FMovieSceneSpawnableAnnotation *pFVar5;
  UObjectBase *pUVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  FWeakObjectPtr FVar11;
  UObject *pUVar12;
  UMovieSceneSequence *pUVar13;
  FMovieSceneSpawnable *pFVar14;
  UClass *pUVar15;
  FMovieSceneBindingReferences *this_01;
  UMovieSceneCustomBinding *this_02;
  UMovieSceneSpawnableBindingBase *pUVar16;
  FMovieSceneEvaluationState *this_03;
  UObjectBase *pUVar17;
  TPairInitializer<UObjectBase_const_*_const_&,FMovieSceneSpawnableAnnotation_const_&> local_res10;
  FWeakObjectPtr local_res20;
  UObjectBase *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  FWeakObjectPtr local_130;
  uint local_128;
  UMovieSceneSequence *local_120;
  UObjectBase *local_118;
  TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
  *local_110;
  FGuid local_108;
  FWeakObjectPtr local_f8;
  uint local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FWeakObjectPtr local_d8;
  ESpawnOwnership local_d0;
  FMovieSceneSpawnRegisterKey local_c8;
  FSharedPlaybackState *local_b0;
  TReferenceControllerBase<1> *local_a8;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_a0;
  FSharedPlaybackState *local_90;
  TReferenceControllerBase<1> *local_88;
  UObjectBase **local_80;
  FGuid *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int local_4c;
  
  local_c8.TemplateID = (FMovieSceneSequenceID)param_3->Value;
  this_00 = &this->Register;
  local_c8.BindingId.A = param_1->A;
  local_c8.BindingId.B = param_1->B;
  local_c8.BindingId.C = param_1->C;
  local_c8.BindingId.D = param_1->D;
  local_c8.BindingIndex = param_5;
  local_res10.Value = (FMovieSceneSpawnableAnnotation *)param_2;
  local_110 = (TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
               *)this_00;
  uVar8 = ::GetTypeHash(&local_c8);
  iVar9 = TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey>
                    ((TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
                      *)this_00,uVar8,&local_c8);
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  if (iVar9 != -1) {
    lVar10 = (longlong)iVar9 * 0x3c + *(longlong *)&this_00->field_0x0;
    FVar11 = (FWeakObjectPtr)(lVar10 + 0x18);
    if (lVar10 == 0) {
      FVar11 = local_res20;
    }
    if (FVar11 != (FWeakObjectPtr)0x0) {
      local_res20 = *(FWeakObjectPtr *)((longlong)FVar11 + 0x10);
    }
  }
  pUVar12 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar12 != (UObject *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return pUVar12;
  }
  pUVar17 = (UObjectBase *)0x0;
  pUVar13 = UE::MovieScene::FSharedPlaybackState::GetSequence(param_4->Object,param_3);
  if (pUVar13 == (UMovieSceneSequence *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2641674606691221545>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSpawnRegister.cpp"
                       ,0x29,"Sequence");
    if (bVar7) {
      pcVar2 = (code *)swi(3);
      pUVar12 = (UObject *)(*pcVar2)();
      return pUVar12;
    }
LAB_146236ded:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    pUVar17 = (UObjectBase *)0x0;
  }
  else {
    pFVar14 = UMovieScene::FindSpawnable((UMovieScene *)local_res10.Value,param_1);
    if (pFVar14 == (FMovieSceneSpawnable *)0x0) {
      pUVar15 = UMovieSceneSequence::StaticClass();
      pFVar5 = local_res10.Value;
      pUVar12 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)local_res10.Value,pUVar15);
      if (((pUVar12 != (UObject *)0x0) &&
          (this_01 = (FMovieSceneBindingReferences *)
                     (**(code **)(*(longlong *)pUVar12 + 0x2b8))(pUVar12),
          this_01 != (FMovieSceneBindingReferences *)0x0)) &&
         (this_02 = FMovieSceneBindingReferences::GetCustomBinding(this_01,param_1,param_5),
         this_02 != (UMovieSceneCustomBinding *)0x0)) {
        local_a0.Object = param_4->Object;
        local_a0.SharedReferenceCount.ReferenceController =
             (param_4->SharedReferenceCount).ReferenceController;
        if (local_a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        pUVar16 = UMovieSceneCustomBinding::AsSpawnable(this_02,&local_a0);
        if (pUVar16 != (UMovieSceneSpawnableBindingBase *)0x0) {
          bVar7 = FWeakObjectPtr::IsStale(&local_res20,true,false);
          if ((!bVar7) || (pUVar16->bContinuouslyRespawn != false)) {
            EVar1 = pUVar16->SpawnOwnership;
            pcVar2 = *(code **)(pUVar16->_padding_ + 0x2f0);
            local_90 = param_4->Object;
            local_88 = (param_4->SharedReferenceCount).ReferenceController;
            if (local_88 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              local_88->SharedReferenceCount =
                   (atomic<int>)((int)local_88->SharedReferenceCount + 1);
              UNLOCK();
            }
            pUVar17 = (UObjectBase *)(*pcVar2)(pUVar16,param_1,param_5,pFVar5,param_3,&local_90);
            goto LAB_146236f5f;
          }
          goto LAB_146236ded;
        }
      }
    }
    else {
      bVar7 = FWeakObjectPtr::IsStale(&local_res20,true,false);
      if ((bVar7) && (pFVar14->bContinuouslyRespawn == false)) goto LAB_146236ded;
      EVar1 = pFVar14->Ownership;
      pcVar2 = *(code **)(this->_padding_ + 8);
      local_b0 = param_4->Object;
      local_a8 = (param_4->SharedReferenceCount).ReferenceController;
      if (local_a8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_a8->SharedReferenceCount = (atomic<int>)((int)local_a8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pUVar17 = (UObjectBase *)(*pcVar2)(this,pFVar14,param_3,&local_b0);
LAB_146236f5f:
      if (pUVar17 != (UObjectBase *)0x0) {
        local_140._0_4_ = param_1->A;
        local_140._4_4_ = param_1->B;
        uStack_138._0_4_ = param_1->C;
        uStack_138._4_4_ = param_1->D;
        local_128 = param_3->Value;
        local_130.ObjectIndex = 0;
        local_130.ObjectSerialNumber = 0;
        local_120 = pUVar13;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar13);
        }
        FWeakObjectPtr::operator=(&local_130,(FObjectPtr)&local_120);
        local_108.C = (undefined4)uStack_138;
        local_108.D = uStack_138._4_4_;
        local_108.A = (undefined4)local_140;
        local_108.B = local_140._4_4_;
        local_f0 = local_128;
        local_f8 = local_130;
        local_148 = pUVar17;
        if ((((int)((ulonglong)local_140 >> 0x20) == 0 && (int)((ulonglong)uStack_138 >> 0x20) == 0)
            && (int)uStack_138 == 0) && (int)local_140 == 0) {
          FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::RemoveAnnotation
                    (&SpawnedObjectAnnotation,pUVar17);
        }
        else {
          AcquireSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
          uVar4 = SpawnedObjectAnnotation.AnnotationMap._52_4_;
          uVar3 = SpawnedObjectAnnotation.AnnotationMap._8_4_;
          local_80 = &local_148;
          local_78 = &local_108;
          TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<UObjectBase_const_*_const_&,FMovieSceneSpawnableAnnotation_const_&>_>
                    ((TSet<TTuple<UObjectBase_const_*,FMovieSceneSpawnableAnnotation>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FMovieSceneSpawnableAnnotation,0>,FDefaultSetAllocator>
                      *)&SpawnedObjectAnnotation.AnnotationMap,&local_res10,(bool *)&local_80);
          pUVar6 = local_148;
          AcquireSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
          SpawnedObjectAnnotation.AnnotationCacheValue.ObjectBindingID = local_108;
          SpawnedObjectAnnotation.AnnotationCacheKey = pUVar6;
          SpawnedObjectAnnotation.AnnotationCacheValue.OriginatingSequence.WeakPtr = local_f8;
          SpawnedObjectAnnotation.AnnotationCacheValue.SequenceID.Value = local_f0;
          ReleaseSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationCacheCritical);
          ReleaseSRWLockExclusive((PSRWLOCK)&SpawnedObjectAnnotation.AnnotationMapCritical);
          if (uVar3 == uVar4) {
            FUObjectAnnotationSparse<FMovieSceneSpawnableAnnotation,1>::ProcessRegistration
                      (&SpawnedObjectAnnotation);
          }
        }
        local_50 = param_3->Value;
        local_e8._0_4_ = param_1->A;
        local_e8._4_4_ = param_1->B;
        uStack_e0._0_4_ = param_1->C;
        uStack_e0._4_4_ = param_1->D;
        local_4c = param_5;
        local_60 = local_e8;
        uStack_58 = uStack_e0;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        local_d8.ObjectIndex = 0;
        local_d8.ObjectSerialNumber = 0;
        local_118 = pUVar17;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        FWeakObjectPtr::operator=(&local_d8,(FObjectPtr)&local_118);
        local_70 = &local_60;
        local_68 = &local_e8;
        local_d0 = EVar1;
        TSet<TTuple<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject>,TDefaultMapHashableKeyFuncs<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey,FMovieSceneSpawnRegister::FSpawnedObject,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey_const_&,FMovieSceneSpawnRegister::FSpawnedObject_&&>_>
                  (local_110,
                   (TPairInitializer<FMovieSceneSpawnRegister::FMovieSceneSpawnRegisterKey_const_&,FMovieSceneSpawnRegister::FSpawnedObject_&&>
                    *)&param_5,(bool *)&local_70);
        this_03 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneEvaluationState>
                            (param_4->Object);
        if (this_03 != (FMovieSceneEvaluationState *)0x0) {
          FMovieSceneEvaluationState::Invalidate(this_03,param_1,param_3);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
  }
  return (UObject *)pUVar17;
}

