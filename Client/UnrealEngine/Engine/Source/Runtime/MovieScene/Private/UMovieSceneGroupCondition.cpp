// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 9

// StaticClass @ 146064c90

UClass * __cdecl UMovieSceneGroupCondition::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGroupCondition",
               &Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroupCondition,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneGroupCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneGroupCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton;
}

// UMovieSceneGroupCondition @ 146095730

UMovieSceneGroupCondition * __thiscall
UMovieSceneGroupCondition::UMovieSceneGroupCondition
          (UMovieSceneGroupCondition *this,FVTableHelper *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
  (this->SubConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubConditions).ArrayNum = 0;
  (this->SubConditions).ArrayMax = 0;
  this->Operator = And;
  return this;
}

// UMovieSceneGroupCondition @ 146095770

UMovieSceneGroupCondition * __thiscall
UMovieSceneGroupCondition::UMovieSceneGroupCondition
          (UMovieSceneGroupCondition *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
  (this->SubConditions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubConditions).ArrayNum = 0;
  (this->SubConditions).ArrayMax = 0;
  this->Operator = And;
  return this;
}

// ~UMovieSceneGroupCondition @ 146098540

void __thiscall
UMovieSceneGroupCondition::~UMovieSceneGroupCondition(UMovieSceneGroupCondition *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UMovieSceneGroupCondition__6B_;
  pFVar1 = (this->SubConditions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UMovieSceneCondition__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  return;
}

// CanCacheResult @ 1460b1360

bool __thiscall
UMovieSceneGroupCondition::CanCacheResult
          (UMovieSceneGroupCondition *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSharedPlaybackState *pFVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FSharedPlaybackState *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar9 = (this->SubConditions).AllocatorInstance.Data;
  iVar2 = (this->SubConditions).ArrayNum;
  pFVar1 = pFVar9 + (longlong)iVar2 * 8;
  do {
    if ((this->SubConditions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneConditionContainer_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar1) {
      bVar8 = true;
      goto LAB_1460b13e7;
    }
    plVar5 = *(longlong **)pFVar9;
    if (plVar5 != (longlong *)0x0) {
      lVar6 = *plVar5;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = pFVar4;
      local_30 = pTVar3;
      cVar7 = (**(code **)(lVar6 + 0x2c8))(plVar5,&local_38);
      if (cVar7 == '\0') {
        bVar8 = false;
LAB_1460b13e7:
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_1->SharedReferenceCount).ReferenceController);
        return bVar8;
      }
    }
    pFVar9 = pFVar9 + 8;
  } while( true );
}

// ComputeCacheKey @ 1460b54b0

uint __thiscall
UMovieSceneGroupCondition::ComputeCacheKey
          (UMovieSceneGroupCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3,UObject *param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  uint uVar7;
  undefined1 local_res8 [8];
  FSharedPlaybackState *local_48;
  TReferenceControllerBase<1> *local_40;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  pFVar6 = (this->SubConditions).AllocatorInstance.Data;
  iVar2 = (this->SubConditions).ArrayNum;
  uVar7 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) * -0x7a143595;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar7 = uVar7 >> 0x10 ^ uVar7;
  while( true ) {
    if ((this->SubConditions).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FMovieSceneConditionContainer_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    plVar3 = *(longlong **)pFVar6;
    if (plVar3 != (longlong *)0x0) {
      pcVar4 = *(code **)(*plVar3 + 0x2c0);
      local_48 = param_3->Object;
      local_40 = (param_3->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38 = param_1->A;
      uStack_34 = param_1->B;
      uStack_30 = param_1->C;
      uStack_2c = param_1->D;
      iVar5 = (*pcVar4)(plVar3,&local_38,param_2.Value,&local_48,param_4);
      uVar7 = uVar7 ^ (uVar7 >> 2) + 0x9e3779b9 + uVar7 * 0x40 + iVar5;
    }
    pFVar6 = pFVar6 + 8;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return uVar7;
}

// EvaluateConditionInternal @ 1460c3630

bool __thiscall
UMovieSceneGroupCondition::EvaluateConditionInternal
          (UMovieSceneGroupCondition *this,FGuid *param_1,FMovieSceneSequenceID param_2,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_3)

{
  FScriptContainerElement *pFVar1;
  EMovieSceneGroupConditionOperator EVar2;
  int iVar3;
  bool bVar4;
  UClass *pUVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  undefined1 local_res8 [8];
  FMovieSceneSequenceID local_res18 [4];
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_48;
  
  bVar8 = this->Operator == And;
  local_res18[0].Value = param_2.Value;
  pUVar5 = Z_Construct_UClass_UMovieSceneSignedObject_NoRegister();
  pUVar6 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar5);
  pFVar7 = (this->SubConditions).AllocatorInstance.Data;
  iVar3 = (this->SubConditions).ArrayNum;
  pFVar1 = pFVar7 + (longlong)iVar3 * 8;
  do {
    while( true ) {
      if ((this->SubConditions).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FMovieSceneConditionContainer_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar1) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return bVar8;
      }
      if (*(longlong *)pFVar7 != 0) break;
LAB_1460c371b:
      pFVar7 = pFVar7 + 8;
    }
    local_48.Object = param_3->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_3->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = MovieSceneHelpers::EvaluateSequenceCondition
                      (param_1,local_res18,*(UMovieSceneCondition **)pFVar7,pUVar6,&local_48);
    EVar2 = this->Operator;
    if (EVar2 == And) {
      if (bVar4) goto LAB_1460c371b;
LAB_1460c3724:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_3->SharedReferenceCount).ReferenceController);
      return false;
    }
    if (EVar2 == Or) {
      if (bVar4) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((param_3->SharedReferenceCount).ReferenceController);
        return true;
      }
      goto LAB_1460c371b;
    }
    if ((EVar2 != Xor) || (!bVar4)) goto LAB_1460c371b;
    if (bVar8 != false) goto LAB_1460c3724;
    bVar8 = true;
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// GetPrivateStaticClass @ 1460cf8f0

UClass * __cdecl UMovieSceneGroupCondition::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneGroupCondition",
               &Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton,
               StaticRegisterNativesUMovieSceneGroupCondition,0x80,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UMovieSceneGroupCondition>,
               InternalVTableHelperCtorCaller<UMovieSceneGroupCondition>,local_res8,
               UMovieSceneCondition::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneGroupCondition.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneGroupCondition @ 1460fa280

void __cdecl UMovieSceneGroupCondition::StaticRegisterNativesUMovieSceneGroupCondition(void)

{
  return;
}

