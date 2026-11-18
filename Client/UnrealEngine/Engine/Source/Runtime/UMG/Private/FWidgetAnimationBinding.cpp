// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 3

// StaticStruct @ 1468da7c0

UScriptStruct * __cdecl FWidgetAnimationBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_UMG();
    Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationBinding,(UObject *)pUVar1,
                         L"WidgetAnimationBinding");
  }
  return Z_Registration_Info_UScriptStruct_FWidgetAnimationBinding.OuterSingleton;
}

// FindRuntimeObject @ 14691a580

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
FWidgetAnimationBinding::FindRuntimeObject
          (FWidgetAnimationBinding *this,UWidgetTree *param_1,UUserWidget *param_2)

{
  UObject *pUVar1;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  local_18.Object = (FSharedPlaybackState *)0x0;
  local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pUVar1 = FindRuntimeObject(this,param_1,param_2,(UMovieSceneSequence *)0x0,&local_18);
  return pUVar1;
}

// FindRuntimeObject @ 14691a5b0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UObject * __thiscall
FWidgetAnimationBinding::FindRuntimeObject
          (FWidgetAnimationBinding *this,UWidgetTree *param_1,UUserWidget *param_2,
          UMovieSceneSequence *param_3,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *param_4)

{
  FScriptContainerElement *pFVar1;
  FSharedPlaybackState *pFVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  FString *pFVar6;
  UWidget *pUVar7;
  UWidget *pUVar8;
  int iVar9;
  undefined8 uVar10;
  ForAnyElementType FVar11;
  wchar_t *pwVar12;
  undefined1 local_res20 [8];
  FName local_88;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_80;
  FString local_70;
  FMovieSceneDynamicBindingResolveResult local_60;
  
  pwVar12 = L"";
  if (((param_3 != (UMovieSceneSequence *)0x0) &&
      (pFVar2 = param_4->Object, pFVar2 != (FSharedPlaybackState *)0x0)) &&
     ((this->DynamicBinding).Function.field0_0x0.DebugPtr != (UFunction *)0x0)) {
    local_80.SharedReferenceCount.ReferenceController =
         (param_4->SharedReferenceCount).ReferenceController;
    if (local_80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80.Object = pFVar2;
    if ((pFVar2 == (FSharedPlaybackState *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar3)();
      return pUVar5;
    }
    FMovieSceneDynamicBindingInvoker::ResolveDynamicBinding
              (&local_60,&local_80,param_3,&MovieSceneSequenceID::Root,&this->AnimationGuid,
               &this->DynamicBinding);
    iVar9 = local_60.Objects.ArrayNum;
    pFVar1 = local_60.Objects.AllocatorInstance.Data + (longlong)iVar9 * 8;
    uVar10 = local_60.Objects._8_8_;
    FVar11.Data = local_60.Objects.AllocatorInstance.Data;
    do {
      if ((int)uVar10 != iVar9) {
        `TCheckedPointerIterator<TObjectPtr<UObject>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
        uVar10 = local_60.Objects._8_8_;
      }
      if (FVar11.Data == pFVar1) {
        if (local_60.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Objects.AllocatorInstance.Data);
        }
        break;
      }
      pUVar7 = *(UWidget **)FVar11.Data;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar7 != (UWidget *)0x0) goto LAB_14691a6bb;
      }
      else if (pUVar7 != (UWidget *)0x0) goto code_r0x00014691a6b3;
      FVar11.Data = FVar11.Data + 8;
    } while( true );
  }
  if (this->bIsRootWidget != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_4->SharedReferenceCount).ReferenceController);
    return (UObject *)param_2;
  }
  pFVar6 = ::FName::ToString(&this->WidgetName,&local_70);
  if ((pFVar6->Data).ArrayNum != 0) {
    pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  ::FName::FName(&local_88,pwVar12);
  pUVar7 = UWidgetTree::FindWidget(param_1,&local_88);
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((pUVar7 != (UWidget *)0x0) && (this->SlotWidgetName != (FName)0x0)) {
    pUVar8 = CastChecked<UWidget,UObject>((UObject *)pUVar7);
    pUVar8 = (UWidget *)(pUVar8->Slot).field0_0x0.DebugPtr;
    if (pUVar8 != (UWidget *)0x0) {
      pUVar7 = pUVar8;
    }
  }
LAB_14691a76a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_4->SharedReferenceCount).ReferenceController);
  return (UObject *)pUVar7;
code_r0x00014691a6b3:
  UE::GC::MarkAsReachable((UObject *)pUVar7);
LAB_14691a6bb:
  if (local_60.Objects.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Objects.AllocatorInstance.Data);
  }
  goto LAB_14691a76a;
}

