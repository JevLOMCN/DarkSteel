// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 4

// InvokeDynamicBinding @ 1462219f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneDynamicBindingResolveResult * __cdecl
FMovieSceneDynamicBindingInvoker::InvokeDynamicBinding
          (FMovieSceneDynamicBindingResolveResult *__return_storage_ptr__,UObject *param_1,
          FMovieSceneDynamicBinding *param_2,FMovieSceneDynamicBindingResolveParams *param_3)

{
  short sVar1;
  ushort uVar2;
  TObjectPtr<UFunction>_u_0 TVar3;
  code *pcVar4;
  FMovieSceneDynamicBinding *pFVar5;
  longlong lVar6;
  UObject *pUVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  FMovieSceneDynamicBindingResolveResult *pFVar11;
  ulonglong uVar12;
  FFieldClass *pFVar13;
  FField *pFVar14;
  UPackage *pUVar15;
  ulonglong uVar16;
  longlong *plVar17;
  FMovieSceneDynamicBindingResolveParams *_Dst;
  longlong *plVar18;
  undefined1 *puVar19;
  void *_Dst_00;
  undefined1 auStackY_b8 [32];
  undefined1 local_88;
  undefined1 local_87 [7];
  TObjectPtr<UFunction>_u_0 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  TObjectPtr<UFunction>_u_0 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  FMovieSceneDynamicBindingResolveParams *local_48;
  FMovieSceneDynamicBinding *local_40;
  UObject *local_38;
  ulonglong local_30;
  
  puVar19 = auStackY_b8;
  local_30 = __security_cookie.value ^ (ulonglong)&local_88;
  plVar18 = (longlong *)0x0;
  __return_storage_ptr__->bIsPossessedObject = true;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  TVar3 = (TObjectPtr<UFunction>_u_0)(param_2->Function).field0_0x0.DebugPtr;
  local_48 = param_3;
  local_40 = param_2;
  local_38 = param_1;
  if (TVar3.DebugPtr == (UFunction *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4794298677709504609>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneDynamicBindingInvoker.cpp"
                       ,0x61,"DynamicBindingFunc");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
      return pFVar11;
    }
    goto LAB_146221f84;
  }
  sVar1 = *(short *)((longlong)&(TVar3.DebugPtr)->_padding_ + 4);
  uVar2 = (TVar3.DebugPtr)->ParmsSize;
  iVar10 = (int)sVar1 + (uint)uVar2;
  plVar17 = plVar18;
  puVar19 = auStackY_b8;
  if (iVar10 != 0) {
    uVar16 = (ulonglong)(iVar10 + 0xf);
    uVar12 = uVar16 + 0xf;
    if (uVar12 <= uVar16) {
      uVar12 = 0xffffffffffffff0;
    }
    plVar17 = (longlong *)((longlong)&local_80 + -(uVar12 & 0xfffffffffffffff0));
    puVar19 = auStackY_b8 + -(uVar12 & 0xfffffffffffffff0);
  }
  _Dst_00 = (void *)((longlong)sVar1 + -1 + (longlong)plVar17 & ~((longlong)sVar1 - 1U));
  *(undefined8 *)(puVar19 + -8) = 0x146221af0;
  memset(_Dst_00,0,(ulonglong)uVar2);
  local_78 = (longlong *)(TVar3.DebugPtr)->_padding_;
  local_70 = 0xffffffff;
  local_6c = 0x101;
  local_6a = 0;
  local_80 = TVar3;
  *(undefined8 *)(puVar19 + -8) = 0x146221b18;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_80.ObjectPtr);
  plVar17 = local_78;
  pFVar5 = local_40;
  while (local_78 = plVar17, local_40 = pFVar5, plVar17 != (longlong *)0x0) {
    if ((((ulonglong)plVar17[7] >> 9 & 1) == 0) && (((ulonglong)plVar17[7] >> 7 & 1) != 0)) {
      pcVar4 = *(code **)(*plVar17 + 0x150);
      if ((int)plVar17[6] < 1) {
        *(int *)(puVar19 + 0x28) = (int)plVar17[6];
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x146221b8a;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar19 + -8) = 0x146221bb9;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      iVar10 = *(int *)((longlong)plVar17 + 0x44);
      *(undefined8 *)(puVar19 + -8) = 0x146221bd0;
      (*pcVar4)(plVar17,(longlong)iVar10 + (longlong)_Dst_00);
    }
    if (((uint)plVar17[7] >> 10 & 1) != 0) {
      if (plVar18 != (longlong *)0x0) {
        local_88 = 0;
        *(undefined8 *)(puVar19 + -8) = 0x146221bec;
        `FMovieSceneDynamicBindingInvoker::InvokeDynamicBinding'::__l14::<lambda_1>::operator()
                  (&local_88);
      }
      plVar18 = plVar17;
      if ((*(uint *)(plVar17[1] + 0x18) >> 0x14 & 1) == 0) {
        *(longlong **)(puVar19 + 0x20) = plVar17;
        *(undefined8 *)(puVar19 + -8) = 0x146221c28;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("CastResult",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x472,L"CastFieldChecked failed with 0x%016llx");
        plVar18 = (longlong *)0x0;
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
    }
    local_78 = (longlong *)plVar17[3];
    *(undefined8 *)(puVar19 + -8) = 0x146221c43;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_80.ObjectPtr);
    param_3 = local_48;
    plVar17 = local_78;
    pFVar5 = local_40;
  }
  *(undefined8 *)(puVar19 + -8) = 0x146221c5d;
  pFVar13 = FProperty::StaticClass();
  *(undefined8 *)(puVar19 + -8) = 0x146221c6c;
  pFVar14 = FFieldPath::GetTyped
                      ((FFieldPath *)&pFVar5->ResolveParamsProperty,pFVar13,(UStruct *)0x0);
  if (pFVar14 != (FField *)0x0) {
    pcVar4 = *(code **)(pFVar14->_padding_ + 0x70);
    *(undefined8 *)(puVar19 + -8) = 0x146221c84;
    cVar9 = (*pcVar4)(pFVar14);
    if (cVar9 == '\0') {
      iVar10 = (int)pFVar14[1]._padding_;
      if (iVar10 < 1) {
        *(int *)(puVar19 + 0x28) = iVar10;
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x146221cbf;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar19 + -8) = 0x146221cea;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      _Dst = (FMovieSceneDynamicBindingResolveParams *)
             ((longlong)*(int *)((longlong)&pFVar14[1].Owner.Container + 4) + (longlong)_Dst_00);
      if (_Dst != param_3) {
        if ((*(uint *)&pFVar14[1].ClassPrivate >> 0x1e & 1) == 0) {
          lVar6 = pFVar14[1]._padding_;
          pcVar4 = *(code **)(pFVar14->_padding_ + 0xf0);
          *(undefined8 *)(puVar19 + -8) = 0x146221d32;
          (*pcVar4)(pFVar14,_Dst,param_3,(int)lVar6);
        }
        else {
          iVar10 = *(int *)((longlong)&pFVar14[1]._padding_ + 4);
          lVar6 = pFVar14[1]._padding_;
          *(undefined8 *)(puVar19 + -8) = 0x146221d1a;
          memcpy(_Dst,param_3,(longlong)iVar10 * (longlong)(int)lVar6);
        }
      }
    }
    else {
      pcVar4 = *(code **)(pFVar14->_padding_ + 0x88);
      *(undefined8 *)(puVar19 + -8) = 0x146221d46;
      (*pcVar4)(pFVar14,_Dst_00,param_3);
    }
  }
  if (plVar18 == (longlong *)0x0) {
LAB_146221d91:
    local_87[0] = 0;
    *(undefined8 *)(puVar19 + -8) = 0x146221d9e;
    bVar8 = `FMovieSceneDynamicBindingInvoker::InvokeDynamicBinding'::__l18::<lambda_2>::operator()
                      (local_87);
    if (bVar8) goto LAB_146221da6;
  }
  else {
    if (Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.OuterSingleton ==
        (UScriptStruct *)0x0) {
      *(undefined8 *)(puVar19 + -8) = 0x146221d5c;
      pUVar15 = Z_Construct_UPackage__Script_MovieScene();
      *(undefined8 *)(puVar19 + -8) = 0x146221d72;
      Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FMovieSceneDynamicBindingResolveResult,
                           (UObject *)pUVar15,L"MovieSceneDynamicBindingResolveResult");
    }
    if ((UScriptStruct *)plVar18[0xe] == (UScriptStruct *)0x0) {
      bVar8 = Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.
              OuterSingleton == (UScriptStruct *)0x0;
    }
    else {
      bVar8 = (UScriptStruct *)plVar18[0xe] ==
              Z_Registration_Info_UScriptStruct_FMovieSceneDynamicBindingResolveResult.
              OuterSingleton;
    }
    if (!bVar8) goto LAB_146221d91;
LAB_146221da6:
    pUVar7 = local_38;
    pcVar4 = *(code **)(*(longlong *)local_38 + 0x260);
    *(undefined8 *)(puVar19 + -8) = 0x146221db9;
    (*pcVar4)(pUVar7,TVar3.DebugPtr,_Dst_00);
    pcVar4 = *(code **)(*plVar18 + 0x78);
    *(undefined8 *)(puVar19 + -8) = 0x146221dc2;
    cVar9 = (*pcVar4)(plVar18);
    if (cVar9 == '\0') {
      if ((int)plVar18[6] < 1) {
        *(int *)(puVar19 + 0x28) = (int)plVar18[6];
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x146221dfd;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar19 + -8) = 0x146221e28;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      pFVar11 = (FMovieSceneDynamicBindingResolveResult *)
                ((longlong)*(int *)((longlong)plVar18 + 0x44) + (longlong)_Dst_00);
      if (__return_storage_ptr__ != pFVar11) {
        if (((uint)plVar18[7] >> 0x1e & 1) == 0) {
          lVar6 = plVar18[6];
          pcVar4 = *(code **)(*plVar18 + 0xf0);
          *(undefined8 *)(puVar19 + -8) = 0x146221e73;
          (*pcVar4)(plVar18,__return_storage_ptr__,pFVar11,(int)lVar6);
        }
        else {
          iVar10 = *(int *)((longlong)plVar18 + 0x34);
          lVar6 = plVar18[6];
          *(undefined8 *)(puVar19 + -8) = 0x146221e5b;
          memcpy(__return_storage_ptr__,pFVar11,(longlong)iVar10 * (longlong)(int)lVar6);
        }
      }
    }
    else {
      pcVar4 = *(code **)(*plVar18 + 0x90);
      *(undefined8 *)(puVar19 + -8) = 0x146221e87;
      (*pcVar4)(plVar18,_Dst_00,__return_storage_ptr__);
    }
  }
  local_60 = (longlong *)(TVar3.DebugPtr)->_padding_;
  local_58 = 0xffffffff;
  local_54 = 0x101;
  local_52 = 0;
  local_68 = TVar3;
  *(undefined8 *)(puVar19 + -8) = 0x146221ead;
  TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_68.ObjectPtr);
  plVar18 = local_60;
  while (plVar18 != (longlong *)0x0) {
    if (((char)plVar18[7] < '\0') && ((~(byte)((ulonglong)plVar18[7] >> 0x24) & 1) != 0)) {
      pcVar4 = *(code **)(*plVar18 + 0x138);
      local_60 = plVar18;
      if ((int)plVar18[6] < 1) {
        *(int *)(puVar19 + 0x28) = (int)plVar18[6];
        *(undefined4 *)(puVar19 + 0x20) = 0;
        *(undefined8 *)(puVar19 + -8) = 0x146221f21;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      if (_Dst_00 == (void *)0x0) {
        *(undefined8 *)(puVar19 + -8) = 0x146221f50;
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          pFVar11 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar4)();
          return pFVar11;
        }
      }
      iVar10 = *(int *)((longlong)plVar18 + 0x44);
      *(undefined8 *)(puVar19 + -8) = 0x146221f66;
      (*pcVar4)(plVar18,(longlong)iVar10 + (longlong)_Dst_00);
    }
    local_60 = (longlong *)plVar18[3];
    *(undefined8 *)(puVar19 + -8) = 0x146221f77;
    TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_68.ObjectPtr);
    plVar18 = local_60;
  }
LAB_146221f84:
  *(undefined8 *)(puVar19 + -8) = 0x146221f93;
  return __return_storage_ptr__;
}

// ResolveDynamicBinding @ 146231e30

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FMovieSceneDynamicBindingResolveResult * __cdecl
FMovieSceneDynamicBindingInvoker::ResolveDynamicBinding
          (FMovieSceneDynamicBindingResolveResult *__return_storage_ptr__,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *param_1,
          UMovieSceneSequence *param_2,FMovieSceneSequenceID *param_3,FGuid *param_4,
          FMovieSceneDynamicBinding *param_5)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *this;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  FMovieSceneDynamicBindingResolveResult *pFVar5;
  FSequenceDirectorPlaybackCapability *this_00;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  UObject *pUVar7;
  UFunction *this_01;
  FSharedPlaybackState *local_res18;
  FMovieSceneSequenceID *local_res20;
  byte local_148;
  FName local_140;
  FString local_138;
  FPlaybackCapabilityPtr local_128;
  FSharedPlaybackState *local_118;
  TReferenceControllerBase<1> *local_110;
  UFunction *local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_78;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_68;
  TObjectPtr<UMovieSceneSequence>_u_0 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  UObject *local_40;
  
  local_res20 = param_3;
  if (param_2 == (UMovieSceneSequence *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4794298677709504533>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\MovieSceneDynamicBindingInvoker.cpp"
                       ,0x15,"Sequence");
    if (!bVar4) {
      *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
      *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
      __return_storage_ptr__->field_0x1f = 0;
      (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Objects).ArrayNum = 0;
      (__return_storage_ptr__->Objects).ArrayMax = 0;
      (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
      __return_storage_ptr__->bIsPossessedObject = true;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_1->SharedReferenceCount).ReferenceController);
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pFVar5 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar3)();
    return pFVar5;
  }
  this_01 = (param_5->Function).field0_0x0.DebugPtr;
  local_108 = this_01;
  if (this_01 == (UFunction *)0x0) {
    *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
    *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
    __return_storage_ptr__->field_0x1f = 0;
    (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Objects).ArrayNum = 0;
    (__return_storage_ptr__->Objects).ArrayMax = 0;
    (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
    __return_storage_ptr__->bIsPossessedObject = true;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_1->SharedReferenceCount).ReferenceController);
    return __return_storage_ptr__;
  }
  this_00 = UE::MovieScene::FSharedPlaybackState::
            FindCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>(param_1->Object);
  if (this_00 == (FSequenceDirectorPlaybackCapability *)0x0) {
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    this = param_1->Object;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    bVar4 = IsInGameThread();
    if (!bVar4) {
      local_res18 = (FSharedPlaybackState *)CONCAT71(local_res18._1_7_,bVar4);
      `UE::MovieScene::FSharedPlaybackState::
      AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability>'::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    UE::MovieScene::FSequenceDirectorPlaybackCapability::GetPlaybackCapabilityID();
    UE::MovieScene::FPlaybackCapabilitiesImpl::
    AddCapability<UE::MovieScene::FSequenceDirectorPlaybackCapability,UE::MovieScene::FSequenceDirectorPlaybackCapability>
              ((FPlaybackCapabilitiesImpl *)&this->Capabilities,&local_128,1 << (local_148 & 0x1f));
    if ((local_128.Ptr == (FSequenceDirectorPlaybackCapability *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x3a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar3)();
      return pFVar5;
    }
    this_00 = local_128.Ptr;
    if (local_128.StorageMode != Inline) {
      if ((local_128.StorageMode == RawPointer) || (local_128.StorageMode == SharedPointer)) {
        this_00 = *(FSequenceDirectorPlaybackCapability **)local_128.Ptr;
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\MovieScenePlaybackCapabilities.h"
                           ,0x44,L"Unexpected playback capability storage mode");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FMovieSceneDynamicBindingResolveResult *)(*pcVar3)();
          return pFVar5;
        }
      }
    }
    local_140 = *(FName *)(this_00->_padding_ + 8);
    pTVar6 = TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
                       ((TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *)this,&local_78);
    pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
    local_res18 = pTVar6->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_118 = local_res18;
    local_110 = pTVar2;
    (*(code *)local_140)(this_00,&local_118);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    this_01 = local_108;
    param_3 = local_res20;
  }
  local_68.Object = param_1->Object;
  local_68.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pUVar7 = UE::MovieScene::FSequenceDirectorPlaybackCapability::GetOrCreateDirectorInstance
                     (this_00,&local_68,param_3);
  if (pUVar7 == (UObject *)0x0) {
    if (2 < (byte)LogMovieScene._0_1_) {
      local_140 = (FName)this_01->_padding_;
      ::FName::ToString(&local_140,&local_c8);
      local_100 = (FName)param_2->_padding_;
      ::FName::ToString(&local_100,&local_d8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar4 = UObjectBaseUtility::IsIn((UObjectBaseUtility *)this_01,*(UObject **)&pUVar7->field_0x10)
    ;
    if (bVar4) {
      if (6 < (byte)LogMovieScene._0_1_) {
        local_e8 = (FName)this_01->_padding_;
        ::FName::ToString(&local_e8,&local_88);
        local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_138.Data.ArrayNum = 0;
        local_138.Data.ArrayMax = 0;
        FGuid::AppendString(param_4,&local_138,Digits);
        local_e0 = (FName)param_2->_padding_;
        ::FName::ToString(&local_e0,&local_98);
        UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      local_50._0_4_ = param_4->A;
      local_50._4_4_ = param_4->B;
      uStack_48._0_4_ = param_4->C;
      uStack_48._4_4_ = param_4->D;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_2);
      }
      local_58.DebugPtr = param_2;
      local_40 = FWeakObjectPtr::Get(&(param_1->Object->WeakRootSequence).WeakPtr);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_40 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(local_40);
      }
      InvokeDynamicBinding
                (__return_storage_ptr__,pUVar7,param_5,
                 (FMovieSceneDynamicBindingResolveParams *)&local_58.ObjectPtr);
      goto LAB_146232325;
    }
    if (2 < (byte)LogMovieScene._0_1_) {
      local_f8 = (FName)this_01->_padding_;
      ::FName::ToString(&local_f8,&local_a8);
      local_f0 = (FName)param_2->_padding_;
      ::FName::ToString(&local_f0,&local_b8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMovieScene);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
        *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
        __return_storage_ptr__->field_0x1f = 0;
        (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Objects).ArrayNum = 0;
        (__return_storage_ptr__->Objects).ArrayMax = 0;
        (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
        __return_storage_ptr__->bIsPossessedObject = true;
        goto LAB_146232325;
      }
    }
  }
  *(undefined4 *)&__return_storage_ptr__->field_0x19 = 0;
  *(undefined2 *)&__return_storage_ptr__->field_0x1d = 0;
  __return_storage_ptr__->field_0x1f = 0;
  (__return_storage_ptr__->Objects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Objects).ArrayNum = 0;
  (__return_storage_ptr__->Objects).ArrayMax = 0;
  (__return_storage_ptr__->Object).field0_0x0.DebugPtr = (UObject *)0x0;
  __return_storage_ptr__->bIsPossessedObject = true;
LAB_146232325:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// operator() @ 1504e74e0

bool __thiscall
`FMovieSceneDynamicBindingInvoker::InvokeDynamicBinding'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4794298677709504634>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4794298677709504634>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e7620

bool __thiscall
`FMovieSceneDynamicBindingInvoker::InvokeDynamicBinding'::__l18::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4794298677709504651>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4794298677709504651>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

