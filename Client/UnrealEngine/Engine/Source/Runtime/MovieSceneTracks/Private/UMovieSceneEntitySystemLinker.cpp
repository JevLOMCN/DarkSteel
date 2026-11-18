// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 10

// FindExtension<UE::MovieScene::IInterrogationExtension> @ 1465be4f0

/* WARNING: Enum "Type": Some values do not have unique names */

IInterrogationExtension * __thiscall
UMovieSceneEntitySystemLinker::FindExtension<UE::MovieScene::IInterrogationExtension>
          (UMovieSceneEntitySystemLinker *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  TEntitySystemLinkerExtensionID<UE::MovieScene::IInterrogationExtension> TVar4;
  undefined4 extraout_var;
  IInterrogationExtension *pIVar5;
  undefined1 *puVar6;
  
  TVar4 = UE::MovieScene::IInterrogationExtension::GetExtensionID();
  uVar1 = *(uint *)CONCAT44(extraout_var,TVar4);
  if ((-1 < (int)uVar1) && ((int)uVar1 < *(int *)&(this->ExtensionsByID).field_0x28)) {
    if (*(int *)&(this->ExtensionsByID).field_0x28 <= (int)uVar1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5c6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pIVar5 = (IInterrogationExtension *)(*pcVar2)();
        return pIVar5;
      }
    }
    puVar6 = *(undefined1 **)&(this->ExtensionsByID).field_0x20;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->ExtensionsByID).field_0x10;
    }
    if ((*(uint *)(puVar6 + (longlong)((int)(uVar1 + ((int)uVar1 >> 0x1f & 0x1fU)) >> 5) * 4) >>
         (uVar1 & 0x1f) & 1) != 0) {
      return *(IInterrogationExtension **)
              (*(longlong *)&this->ExtensionsByID + (longlong)(int)uVar1 * 8);
    }
  }
  return (IInterrogationExtension *)0x0;
}

// FindSystem<UMovieSceneEntityGroupingSystem> @ 1467424e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntityGroupingSystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEntityGroupingSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieSceneEntityGroupingSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieSceneEntityGroupingSystem *)
           FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 == (UMovieSceneEntityGroupingSystem *)0x0) {
    pUVar2 = (UMovieSceneEntityGroupingSystem *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// LinkSystem<UMovieSceneEntityGroupingSystem> @ 1467533e0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEntityGroupingSystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem<UMovieSceneEntityGroupingSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieSceneEntityGroupingSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieSceneEntityGroupingSystem *)
           LinkSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 != (UMovieSceneEntityGroupingSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieSceneEntityGroupingSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieSceneEntityGroupingSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// LinkSystem<UMovieScenePostEvalEventSystem> @ 1467534d0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostEvalEventSystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostEvalEventSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieScenePostEvalEventSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieScenePostEvalEventSystem *)
           LinkSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 != (UMovieScenePostEvalEventSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieScenePostEvalEventSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UMovieScenePostEvalEventSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieScenePostEvalEventSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// LinkSystem<UMovieScenePostSpawnEventSystem> @ 1467535c0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePostSpawnEventSystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePostSpawnEventSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieScenePostSpawnEventSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieScenePostSpawnEventSystem *)
           LinkSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 != (UMovieScenePostSpawnEventSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieScenePostSpawnEventSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UMovieScenePostSpawnEventSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieScenePostSpawnEventSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// LinkSystem<UMovieScenePreSpawnEventSystem> @ 1467536b0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePreSpawnEventSystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePreSpawnEventSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieScenePreSpawnEventSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieScenePreSpawnEventSystem *)
           LinkSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 != (UMovieScenePreSpawnEventSystem *)0x0) {
    pUVar3 = Z_Construct_UClass_UMovieScenePreSpawnEventSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UMovieScenePreSpawnEventSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieScenePreSpawnEventSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// FindSystem<UMovieSceneComponentTransformSystem> @ 1467e2ff0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneComponentTransformSystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneComponentTransformSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieSceneComponentTransformSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieSceneComponentTransformSystem *)
           FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 == (UMovieSceneComponentTransformSystem *)0x0) {
    pUVar2 = (UMovieSceneComponentTransformSystem *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneComponentTransformSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneComponentTransformSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// FindSystem<UMovieSceneEvalTimeSystem> @ 1467e30c0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneEvalTimeSystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneEvalTimeSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieSceneEvalTimeSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieSceneEvalTimeSystem *)
           FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 == (UMovieSceneEvalTimeSystem *)0x0) {
    pUVar2 = (UMovieSceneEvalTimeSystem *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneEvalTimeSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneEvalTimeSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

// LinkSystem<UMovieScenePiecewiseDoubleBlenderSystem> @ 1467fa1a0

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieScenePiecewiseDoubleBlenderSystem * __thiscall
UMovieSceneEntitySystemLinker::LinkSystem<UMovieScenePiecewiseDoubleBlenderSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieScenePiecewiseDoubleBlenderSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieScenePiecewiseDoubleBlenderSystem *)
           LinkSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 != (UMovieScenePiecewiseDoubleBlenderSystem *)0x0) {
    pUVar3 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
    pFVar4 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_28);
    pwVar5 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                       (&local_18,(UMovieSceneEntitySystem *)pUVar2);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar5,pwVar6);
  }
  pFVar4 = GetTypeName<UMovieScenePiecewiseDoubleBlenderSystem>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar5);
}

// FindSystem<UMovieSceneMotionVectorSimulationSystem> @ 146889f50

/* WARNING: Enum "Type": Some values do not have unique names */

UMovieSceneMotionVectorSimulationSystem * __thiscall
UMovieSceneEntitySystemLinker::FindSystem<UMovieSceneMotionVectorSimulationSystem>
          (UMovieSceneEntitySystemLinker *this)

{
  int iVar1;
  UMovieSceneMotionVectorSimulationSystem *pUVar2;
  UClass *pUVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  UClass *local_res10;
  FString local_28;
  FString local_18;
  
  local_res10 = Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res10);
  }
  pUVar2 = (UMovieSceneMotionVectorSimulationSystem *)
           FindSystem(this,(TSubclassOf<UMovieSceneEntitySystem>)&local_res10);
  if (pUVar2 == (UMovieSceneMotionVectorSimulationSystem *)0x0) {
    pUVar2 = (UMovieSceneMotionVectorSimulationSystem *)0x0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UMovieSceneMotionVectorSimulationSystem_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) {
      pFVar4 = GetTypeName<UMovieSceneMotionVectorSimulationSystem>(&local_28);
      pwVar6 = L"";
      if ((pFVar4->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
      pFVar4 = GetFullNameForCastLogError<UMovieSceneEntitySystem>
                         (&local_18,(UMovieSceneEntitySystem *)pUVar2);
      if ((pFVar4->Data).ArrayNum != 0) {
        pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar6,pwVar5);
    }
  }
  return pUVar2;
}

