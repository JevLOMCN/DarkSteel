// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// CacheExistingState @ 148f901d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

TInlineValue<IMovieScenePreAnimatedToken,32,8> * __thiscall
FPreAnimatedNiagaraComponentTokenProducer::CacheExistingState
          (FPreAnimatedNiagaraComponentTokenProducer *this,
          TInlineValue<IMovieScenePreAnimatedToken,32,8> *__return_storage_ptr__,UObject *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  TReferenceControllerBase<1> *pTVar5;
  FNiagaraSystemInstanceController *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  ENiagaraAgeUpdateMode EVar10;
  bool bVar11;
  UNiagaraComponent *this_00;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar12;
  TInlineValue<IMovieScenePreAnimatedToken,32,8> *pTVar13;
  uchar uVar14;
  float fVar15;
  float fVar16;
  ENiagaraExecutionState local_res10;
  ENiagaraExecutionState local_74;
  
  this_00 = CastChecked<UNiagaraComponent,UObject>(param_1);
  pTVar5 = (this_00->SystemInstanceController).SharedReferenceCount.ReferenceController;
  pFVar6 = (this_00->SystemInstanceController).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  bVar8 = UNiagaraComponent::GetLockDesiredAgeDeltaTimeToSeekDelta(this_00);
  fVar15 = UNiagaraComponent::GetDesiredAge(this_00);
  fVar16 = UNiagaraComponent::GetSeekDelta(this_00);
  bVar9 = UNiagaraComponent::GetAllowScalability(this_00);
  EVar10 = UNiagaraComponent::GetAgeUpdateMode(this_00);
  local_res10 = CONCAT31(local_res10._1_3_,EVar10);
  if (pFVar6 == (FNiagaraSystemInstanceController *)0x0) {
    uVar14 = '\0';
  }
  else {
    if ((pFVar6->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
      bVar11 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_4531953176097587079>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                          ,0x79,"IsValid()");
      if (bVar11) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar7)();
        return pTVar12;
      }
      if ((pFVar6->SystemInstance).Object == (FNiagaraSystemInstance *)0x0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L"");
        if (bVar11) {
          pcVar7 = (code *)swi(3);
          pTVar12 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar7)();
          return pTVar12;
        }
      }
    }
    uVar14 = '\x01';
    local_res10 = ((pFVar6->SystemInstance).Object)->RequestedExecutionState;
  }
  bVar11 = UNiagaraComponent::GetRenderingEnabled(this_00);
  bVar2 = *(byte *)((longlong)&this_00->_padding_ + 2);
  if (uVar14 != '\0') {
    local_74 = local_res10;
  }
  __return_storage_ptr__->bIsValid = false;
  __return_storage_ptr__->bInline = false;
  pTVar12 = FMemory::Malloc(0x28,8);
  __return_storage_ptr__->bIsValid = true;
  *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad = pTVar12;
  if (__return_storage_ptr__->bInline) {
    pTVar12 = __return_storage_ptr__;
  }
  *(undefined ***)(pTVar12->Data).Pad = &___7FPreAnimatedNiagaraComponentToken__6B_;
  (pTVar12->Data).Pad[8] = bVar2 >> 4 & 1;
  (pTVar12->Data).Pad[9] = this_00->bForceSolo;
  (pTVar12->Data).Pad[10] = bVar11;
  (pTVar12->Data).Pad[0x10] = uVar14;
  if (uVar14 != '\0') {
    *(ENiagaraExecutionState *)((pTVar12->Data).Pad + 0xc) = local_74;
  }
  (pTVar12->Data).Pad[0x14] = EVar10;
  (pTVar12->Data).Pad[0x15] = bVar9;
  pTVar12->field_0x20 = bVar8;
  *(float *)((pTVar12->Data).Pad + 0x18) = fVar16;
  *(float *)((pTVar12->Data).Pad + 0x1c) = fVar15;
  if (!__return_storage_ptr__->bIsValid) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pTVar12 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar12 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad
    ;
  }
  if (!__return_storage_ptr__->bIsValid) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0x97,
                       L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pTVar13 = __return_storage_ptr__;
  if (!__return_storage_ptr__->bInline) {
    pTVar13 = *(TInlineValue<IMovieScenePreAnimatedToken,32,8> **)(__return_storage_ptr__->Data).Pad
    ;
  }
  if (pTVar12 != pTVar13) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)&GetValue() == (BaseType*)((T*)&GetValue())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                       ,0xce,L"TInlineValue cannot operate with multiple inheritance objects.");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TInlineValue<IMovieScenePreAnimatedToken,32,8> *)(*pcVar7)();
      return pTVar12;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

