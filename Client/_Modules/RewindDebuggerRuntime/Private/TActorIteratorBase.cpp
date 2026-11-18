// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RewindDebuggerRuntime
// Functions: 1

// operator++ @ 14cd8bb60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
TActorIteratorBase<TActorIterator<AController>_>::operator++
          (TActorIteratorBase<TActorIterator<AController>_> *this)

{
  int *piVar1;
  int iVar2;
  UWorld *pUVar3;
  FLevelCollection *pFVar4;
  ULevel *pUVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  ULevel *this_00;
  FLevelCollection *pFVar11;
  UWorld *pUVar12;
  UClass *pUVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  AActor *this_01;
  uint uVar17;
  
  if (((this->State).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar14 = (this->State).TypedValue.Index;
  if ((this->State).bIsSet == false) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar9) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->State).bIsSet == false) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (((this->State).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
  }
  iVar2 = (this->State).TypedValue.ActorArray.ArrayNum;
  uVar17 = iVar14 + 1;
  pUVar3 = (this->State).TypedValue.CurrentWorld;
  iVar14 = (this->State).TypedValue.SpawnedActorArray.ArrayNum;
  if ((int)uVar17 < iVar14 + iVar2) {
    lVar15 = (longlong)(int)uVar17;
    uVar16 = uVar17 - iVar2;
    do {
      if (lVar15 < iVar2) {
        uVar10 = 0;
        if ((int)uVar17 < (this->State).TypedValue.ActorArray.ArrayNum) {
          uVar10 = ~uVar17 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = *(AActor **)
                   ((this->State).TypedValue.ActorArray.AllocatorInstance.Data + lVar15 * 8);
      }
      else {
        uVar10 = 0;
        if ((int)uVar16 < iVar14) {
          uVar10 = ~uVar16 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_01 = *(AActor **)
                   ((this->State).TypedValue.SpawnedActorArray.AllocatorInstance.Data +
                   (longlong)iVar2 * -8 + lVar15 * 8);
      }
      if (((this->State).bIsSet == false) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      piVar1 = &(this->State).TypedValue.ConsideredCount;
      *piVar1 = *piVar1 + 1;
      if ((((this_01 != (AActor *)0x0) &&
           (this_00 = AActor::GetLevel(this_01), this_00 != (ULevel *)0x0)) &&
          (((this->Flags & SkipPendingKill) == AllActors ||
           (((uint)this_01->_padding_ >> 0x1e & 1) == 0)))) &&
         (((this->Flags >> 1 & 1) == 0 || (bVar9 = UObject::IsSelected((UObject *)this_01), bVar9)))
         ) {
        if ((this->Flags >> 2 & 1) != 0) {
          if ((((this_00->bIsVisible != '\0') && (this_00->bIsBeingRemoved == '\0')) ||
              (this_00->bIsAssociatingLevel != '\0')) || ((bool)this_00->bIsDisassociatingLevel)) {
            bVar9 = true;
          }
          else {
            bVar9 = false;
          }
          pUVar12 = (this_00->OwningWorld).field0_0x0.DebugPtr;
          pFVar4 = this_00->CachedLevelCollection;
          if (((pUVar12 == (UWorld *)0x0) ||
              (pFVar11 = UWorld::GetActiveLevelCollection(pUVar12),
              pFVar11 == (FLevelCollection *)0x0)) || (pFVar4 == pFVar11)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          if ((pFVar4 == (FLevelCollection *)0x0) || (pFVar4->CollectionType == StaticLevels)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((bVar7) || (bVar7 = false, bVar8)) {
            bVar7 = true;
          }
          if ((!bVar9) || (!bVar7)) goto LAB_14cd8be7f;
        }
        pUVar12 = ULevel::GetWorld(this_00);
        if (pUVar12 == pUVar3) {
          pUVar5 = (pUVar3->PersistentLevel).field0_0x0.DebugPtr;
          if ((pUVar5 != (ULevel *)0x0) && (pUVar5 == this_00)) {
LAB_14cd8beae:
            if (((this->State).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->State).TypedValue.CurrentActor = this_01;
            if (((this->State).bIsSet == false) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsSet()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                   ,0x1bd,
                                   L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                  ), bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (this->State).TypedValue.Index = uVar17;
            return;
          }
          pUVar13 = Z_Construct_UClass_AWorldSettings_NoRegister();
          iVar14 = (int)pUVar13->_padding_;
          if ((*(int *)(this_01->_padding_ + 0x38) < iVar14) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar14 * 8) !=
              &pUVar13->_padding_)) goto LAB_14cd8beae;
        }
      }
LAB_14cd8be7f:
      uVar17 = uVar17 + 1;
      iVar14 = (this->State).TypedValue.SpawnedActorArray.ArrayNum;
      uVar16 = uVar16 + 1;
      lVar15 = lVar15 + 1;
    } while ((int)uVar17 < iVar2 + iVar14);
  }
  if (((this->State).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->State).TypedValue.CurrentActor = (AActor *)0x0;
  if (((this->State).bIsSet == false) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (this->State).TypedValue.ReachedEnd = true;
  return;
}

