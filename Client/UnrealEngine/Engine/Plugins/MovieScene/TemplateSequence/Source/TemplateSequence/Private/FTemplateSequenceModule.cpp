// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TemplateSequence
// Functions: 2

// StartupModule @ 14ac64440

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FTemplateSequenceModule::StartupModule(FTemplateSequenceModule *this)

{
  int *piVar1;
  undefined8 *puVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FMovieSceneTracksComponentTypes *pFVar7;
  FName *pFVar8;
  longlong lVar9;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar10;
  TArray<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  undefined1 auStackY_98 [32];
  FName local_48;
  UClass *local_40;
  FName FStack_38;
  undefined2 local_30;
  undefined6 uStack_2e;
  code *pcStack_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (UCameraAnimationSequenceCameraStandIn::bRegistered) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5017693477396283601>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xd1,"!bRegistered");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pFVar7 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pFVar8 = ::FName::FName(&local_48,L"Transform");
    pTVar11 = &(pFVar7->Accessors).ComponentTransform.CustomAccessors;
    FVar3 = *pFVar8;
    local_40 = UCameraAnimationSequenceCameraStandIn::StaticClass();
    FVar10 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                   )0x0) {
      FVar10 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )pTVar11;
    }
    local_30 = 0xffff;
    pcStack_28 = UE::MovieScene::GetCameraStandInTransform;
    local_20 = UE::MovieScene::SetCameraStandInTransform;
    FStack_38 = FVar3;
    if (((ulonglong)FVar10 <= &local_40) &&
       (&local_40 <
        (UClass **)
        ((longlong)FVar10 +
        (longlong)(pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayMax * 0x28))) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayNum;
    piVar1 = &(pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>_>
                        (0x828,&pTVar11->AllocatorInstance,piVar1);
    }
    lVar9 = (longlong)iVar6;
    (pFVar7->Accessors).ComponentTransform.CustomAccessors.ArrayNum = iVar6 + 1;
    FVar10 = (pFVar7->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.SecondaryData;
    if (FVar10 == (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                   )0x0) {
      FVar10 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                )pTVar11;
    }
    puVar2 = (undefined8 *)((longlong)FVar10 + lVar9 * 0x28);
    *puVar2 = local_40;
    *(FName *)(puVar2 + 1) = FStack_38;
    *(ulonglong *)((uchar *)((longlong)FVar10 + 0x10) + lVar9 * 0x28) = CONCAT62(uStack_2e,local_30)
    ;
    *(code **)((uchar *)((longlong)FVar10 + 0x10) + lVar9 * 0x28 + 8) = pcStack_28;
    *(code **)((uchar *)((longlong)FVar10 + 0x20) + lVar9 * 0x28) = local_20;
    UCameraAnimationSequenceCameraStandIn::bRegistered = true;
  }
  return;
}

// ShutdownModule @ 14ac64610

void __thiscall FTemplateSequenceModule::ShutdownModule(FTemplateSequenceModule *this)

{
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMovieSceneTracksComponentTypes *pFVar5;
  UClass *pUVar6;
  ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
  FVar7;
  uint uVar8;
  longlong lVar9;
  
  if (UCameraAnimationSequenceCameraStandIn::bRegistered) {
    pFVar5 = UE::MovieScene::FMovieSceneTracksComponentTypes::Get();
    pUVar6 = UCameraAnimationSequenceCameraStandIn::StaticClass();
    uVar8 = (pFVar5->Accessors).ComponentTransform.CustomAccessors.ArrayNum - 1;
    if (-1 < (int)uVar8) {
      lVar9 = (longlong)(int)uVar8 * 0x28;
      do {
        uVar4 = 0;
        if ((int)uVar8 < (pFVar5->Accessors).ComponentTransform.CustomAccessors.ArrayNum) {
          uVar4 = ~uVar8 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVar1 = (pFVar5->Accessors).ComponentTransform.CustomAccessors.AllocatorInstance.
                SecondaryData;
        FVar7 = (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                 )&(pFVar5->Accessors).ComponentTransform.CustomAccessors;
        if (FVar1 != (ForElementType<UE::MovieScene::TCustomPropertyAccessor<UE::MovieScene::TPropertyTraits<UE::MovieScene::FIntermediate3DTransform,UE::MovieScene::FIntermediate3DTransform,1>_>_>
                      )0x0) {
          FVar7 = FVar1;
        }
        if (*(UClass **)(lVar9 + (longlong)FVar7) == pUVar6) {
          *(undefined8 *)(lVar9 + (longlong)FVar7) = 0;
          *(undefined8 *)(lVar9 + 8 + (longlong)FVar7) = 0;
        }
        lVar9 = lVar9 + -0x28;
        uVar8 = uVar8 - 1;
      } while (-1 < (int)uVar8);
    }
    UCameraAnimationSequenceCameraStandIn::bRegistered = false;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5017693477396283614>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\TemplateSequence\\Source\\TemplateSequence\\Private\\CameraAnimationSequencePlayer.cpp"
                       ,0xde,"bRegistered");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

