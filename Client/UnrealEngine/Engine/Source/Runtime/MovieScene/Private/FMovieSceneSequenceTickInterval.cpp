// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 5

// StaticStruct @ 1461e7840

UScriptStruct * __cdecl FMovieSceneSequenceTickInterval::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MovieScene();
    Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneSequenceTickInterval,(UObject *)pUVar1
                         ,L"MovieSceneSequenceTickInterval");
  }
  return Z_Registration_Info_UScriptStruct_FMovieSceneSequenceTickInterval.OuterSingleton;
}

// FMovieSceneSequenceTickInterval @ 1461fc9c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieSceneSequenceTickInterval * __thiscall
FMovieSceneSequenceTickInterval::FMovieSceneSequenceTickInterval
          (FMovieSceneSequenceTickInterval *this,AActor *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneSequenceTickInterval *pFVar4;
  
  this->bTickWhenPaused = false;
  this->bAllowRounding = true;
  this->TickIntervalSeconds = 0.0;
  this->EvaluationBudgetMicroseconds = 0.0;
  if (param_1 == (AActor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActor",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickInterval.cpp"
                       ,0x1a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMovieSceneSequenceTickInterval *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->TickIntervalSeconds = *(float *)((longlong)&(param_1->PrimaryActorTick)._padding_ + 4);
  bVar1 = *(byte *)((longlong)&(param_1->PrimaryActorTick)._padding_ + 2);
  this->bAllowRounding = true;
  this->bTickWhenPaused = (bool)(bVar1 & 1);
  return this;
}

// FMovieSceneSequenceTickInterval @ 1461fca30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMovieSceneSequenceTickInterval * __thiscall
FMovieSceneSequenceTickInterval::FMovieSceneSequenceTickInterval
          (FMovieSceneSequenceTickInterval *this,UActorComponent *param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneSequenceTickInterval *pFVar4;
  
  this->bTickWhenPaused = false;
  this->bAllowRounding = true;
  this->TickIntervalSeconds = 0.0;
  this->EvaluationBudgetMicroseconds = 0.0;
  if (param_1 == (UActorComponent *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InActorComponent",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneSequenceTickInterval.cpp"
                       ,0x23,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FMovieSceneSequenceTickInterval *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->TickIntervalSeconds = *(float *)((longlong)&(param_1->PrimaryComponentTick)._padding_ + 4);
  bVar1 = *(byte *)((longlong)&(param_1->PrimaryComponentTick)._padding_ + 2);
  this->bAllowRounding = true;
  this->bTickWhenPaused = (bool)(bVar1 & 1);
  return this;
}

// GetInheritedInterval @ 146218bb0

FMovieSceneSequenceTickInterval * __cdecl
FMovieSceneSequenceTickInterval::GetInheritedInterval
          (FMovieSceneSequenceTickInterval *__return_storage_ptr__,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  for (; param_1 != (UObject *)0x0; param_1 = *(UObject **)&param_1->field_0x20) {
    pUVar2 = Z_Construct_UClass_ULevel_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) break;
    pUVar2 = Z_Construct_UClass_USceneComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_ && (param_1 != (UObject *)0x0)))) {
      __return_storage_ptr__->bAllowRounding = true;
      __return_storage_ptr__->EvaluationBudgetMicroseconds = 0.0;
      __return_storage_ptr__->TickIntervalSeconds = *(float *)&param_1[1].field_0x1c;
      __return_storage_ptr__->bTickWhenPaused = (bool)(param_1[1].field_0x1a & 1);
      return __return_storage_ptr__;
    }
    pUVar2 = Z_Construct_UClass_AActor_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) && (param_1 != (UObject *)0x0)) {
      __return_storage_ptr__->bAllowRounding = true;
      __return_storage_ptr__->EvaluationBudgetMicroseconds = 0.0;
      __return_storage_ptr__->TickIntervalSeconds = *(float *)&param_1[1].field_0xc;
      __return_storage_ptr__->bTickWhenPaused = (bool)(param_1[1].field_0xa & 1);
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->bTickWhenPaused = false;
  __return_storage_ptr__->bAllowRounding = true;
  *(undefined2 *)&__return_storage_ptr__->field_0xa = 0;
  __return_storage_ptr__->TickIntervalSeconds = 0.0;
  __return_storage_ptr__->EvaluationBudgetMicroseconds = 0.0;
  return __return_storage_ptr__;
}

// RoundTickIntervalMs @ 1462330b0

int __thiscall
FMovieSceneSequenceTickInterval::RoundTickIntervalMs(FMovieSceneSequenceTickInterval *this)

{
  if (this->bAllowRounding != false) {
    return -(((int)ROUND(__real_bf000000 -
                         (this->TickIntervalSeconds + this->TickIntervalSeconds) *
                         (__real_447a0000 /
                         (float)UE::MovieScene::GMovieSceneTickIntervalResolutionMs)) >> 1) *
            UE::MovieScene::GMovieSceneTickIntervalResolutionMs);
  }
  return -((int)ROUND(__real_bf000000 - this->TickIntervalSeconds * __real_44fa0000) >> 1);
}

