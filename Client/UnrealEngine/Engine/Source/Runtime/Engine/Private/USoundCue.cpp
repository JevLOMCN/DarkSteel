// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 52

// RecursiveFindNode<USoundNodeWavePlayer> @ 1475a0390

void __thiscall
USoundCue::RecursiveFindNode<USoundNodeWavePlayer>
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeWavePlayer *local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = Z_Construct_UClass_USoundNodeWavePlayer_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      local_res10 = (USoundNodeWavePlayer *)0x0;
    }
    else {
      local_res10 = (USoundNodeWavePlayer *)param_1;
      TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_*_const_&>(param_2,&local_res10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// StaticClass @ 148679180

UClass * __cdecl USoundCue::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundCue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundCue",&Z_Registration_Info_UClass_USoundCue.InnerSingleton,
               StaticRegisterNativesUSoundCue,0x578,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundCue>,InternalVTableHelperCtorCaller<USoundCue>,local_res8,
               USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundCue.InnerSingleton;
}

// RecursiveFindNode<USoundNodeAttenuation> @ 14868d6b0

void __thiscall
USoundCue::RecursiveFindNode<USoundNodeAttenuation>
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeAttenuation *local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = USoundNodeAttenuation::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      local_res10 = (USoundNodeAttenuation *)0x0;
    }
    else {
      local_res10 = (USoundNodeAttenuation *)param_1;
      TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeAttenuation_*_const_&>(param_2,&local_res10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeAttenuation>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// RecursiveFindNode<USoundNodeAttenuation> @ 14868d7c0

void __thiscall
USoundCue::RecursiveFindNode<USoundNodeAttenuation>
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeAttenuation_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeAttenuation *local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = USoundNodeAttenuation::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      local_res10 = (USoundNodeAttenuation *)0x0;
    }
    else {
      local_res10 = (USoundNodeAttenuation *)param_1;
      TArray<USoundNodeAttenuation_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeAttenuation_const_*_const_&>(param_2,&local_res10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeAttenuation>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// RecursiveFindNode<USoundNodeWavePlayer> @ 14868d8d0

void __thiscall
USoundCue::RecursiveFindNode<USoundNodeWavePlayer>
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeWavePlayer *local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = USoundNodeWavePlayer::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      local_res10 = (USoundNodeWavePlayer *)0x0;
    }
    else {
      local_res10 = (USoundNodeWavePlayer *)param_1;
      TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_const_*_const_&>(param_2,&local_res10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// USoundCue @ 148696ca0

USoundCue * __thiscall USoundCue::USoundCue(USoundCue *this,FVTableHelper *param_1)

{
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->FirstNode).field0_0x0.DebugPtr = (USoundNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  this->CookedQualityIndex = -1;
  (this->OnPostEngineInitHandle).ID = 0;
  return this;
}

// USoundCue @ 148696d10

USoundCue * __thiscall USoundCue::USoundCue(USoundCue *this,FObjectInitializer *param_1)

{
  USoundBase::USoundBase((USoundBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->FirstNode).field0_0x0.DebugPtr = (USoundNode *)0x0;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundAttenuationSettings::FSoundAttenuationSettings(&this->AttenuationOverrides);
  this->bIsRetainingAudio = '\0';
  (this->OnPostEngineInitHandle).ID = 0;
  this->VolumeMultiplier = 0.75;
  this->PitchMultiplier = 1.0;
  this->SubtitlePriority = 10000.0;
  this->CookedQualityIndex = -1;
  return this;
}

// ~USoundCue @ 14869b5e0

void __thiscall USoundCue::~USoundCue(USoundCue *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IAudioPropertiesSheetAssetUserInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  FSoundAttenuationSettings::~FSoundAttenuationSettings(&this->AttenuationOverrides);
  USoundBase::~USoundBase((USoundBase *)this);
  return;
}

// operator() @ 14869dc00

void __thiscall
`USoundCue::EvaluateNodes'::__l2::<lambda_1>::operator()(void *this,USoundNode *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USoundNode_*)>
  *this_00;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  undefined8 local_res18;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar7 = USoundNodeAssetReferencer::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar7->_padding_)) {
      UObject::ConditionalPostLoad((UObject *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014869dc55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1->_padding_ + 0x360))(param_1,**(undefined1 **)this);
      return;
    }
    pUVar7 = USoundNodeQualityLevel::StaticClass();
    iVar2 = (int)pUVar7->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar7->_padding_)) {
      iVar2 = (param_1->ChildNodes).ArrayNum;
      pFVar11 = (param_1->ChildNodes).AllocatorInstance.Data;
      pFVar1 = pFVar11 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ChildNodes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar11 == pFVar1) break;
        puVar3 = *(undefined8 **)((longlong)this + 8);
        local_res18 = *(undefined8 *)pFVar11;
        UE::Core::Private::Function::CheckCallable((void *)*puVar3);
        pcVar4 = (code *)*puVar3;
        plVar9 = (longlong *)puVar3[5];
        if ((longlong *)puVar3[5] == (longlong *)0x0) {
          plVar9 = puVar3 + 2;
        }
        uVar8 = (**(code **)(*plVar9 + 8))();
        (*pcVar4)(uVar8,&local_res18);
        pFVar11 = pFVar11 + 8;
      }
    }
    else {
      lVar10 = (longlong)USoundCue::CachedQualityLevel;
      if ((-1 < USoundCue::CachedQualityLevel) &&
         (USoundCue::CachedQualityLevel < (param_1->ChildNodes).ArrayNum)) {
        this_00 = *(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USoundNode_*)>
                    **)((longlong)this + 8);
        uVar6 = 0;
        if (USoundCue::CachedQualityLevel < (param_1->ChildNodes).ArrayNum) {
          uVar6 = (uint)~USoundCue::CachedQualityLevel >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        UE::Core::Private::Function::
        TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(USoundNode_*)>
        ::operator()(this_00,*(USoundNode **)
                              ((param_1->ChildNodes).AllocatorInstance.Data + lVar10 * 8));
        return;
      }
    }
  }
  return;
}

// operator() @ 14869fb10

void __thiscall
`USoundCue::EvaluateNodes'::__l2::<lambda_2>::operator()(void *this,USoundNode *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  char cVar5;
  UClass *pUVar6;
  undefined8 uVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  undefined8 local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar6 = USoundNodeAssetReferencer::StaticClass();
    iVar2 = (int)pUVar6->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar6->_padding_)) {
      pUVar6 = USoundNodeQualityLevel::StaticClass();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar6->_padding_)) {
        USoundNodeQualityLevel::LoadChildWavePlayers
                  ((USoundNodeQualityLevel *)param_1,*(bool *)*(undefined8 *)this,true);
        return;
      }
      iVar2 = (param_1->ChildNodes).ArrayNum;
      pFVar9 = (param_1->ChildNodes).AllocatorInstance.Data;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ChildNodes).ArrayNum != iVar2) {
          `TCheckedPointerIterator<TObjectPtr<USoundNode>,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res10);
        }
        if (pFVar9 == pFVar1) break;
        puVar3 = *(undefined8 **)((longlong)this + 8);
        local_res10 = *(undefined8 *)pFVar9;
        UE::Core::Private::Function::CheckCallable((void *)*puVar3);
        pcVar4 = (code *)*puVar3;
        plVar8 = (longlong *)puVar3[5];
        if ((longlong *)puVar3[5] == (longlong *)0x0) {
          plVar8 = puVar3 + 2;
        }
        uVar7 = (**(code **)(*plVar8 + 8))();
        (*pcVar4)(uVar7,&local_res10);
        pFVar9 = pFVar9 + 8;
      }
    }
    else {
      cVar5 = (**(code **)(param_1->_padding_ + 0x370))(param_1);
      if (cVar5 != '\0') {
        UObject::ConditionalPostLoad((UObject *)param_1);
                    /* WARNING: Could not recover jumptable at 0x00014869fb79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_1->_padding_ + 0x360))(param_1,**(undefined1 **)this);
        return;
      }
    }
  }
  return;
}

// AudioQualityChanged @ 1486a6700

void __thiscall USoundCue::AudioQualityChanged(USoundCue *this)

{
  TObjectPtr<USoundNode>_u_0 TVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  UClass *pUVar8;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  TVar1 = (this->FirstNode).field0_0x0;
  local_18.Data = (FScriptContainerElement *)0x0;
  local_10 = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_18,(int *)((longlong)&local_10 + 4));
  local_10 = CONCAT44(local_10._4_4_,iVar5 + 1);
  *(TObjectPtr<USoundNode>_u_0 *)(local_18.Data + (longlong)iVar5 * 8) = TVar1;
  iVar5 = iVar5 + 1;
  do {
    do {
      if (iVar5 < 1) {
        EvaluateNodes(this,false);
        if (local_18.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data);
        }
        return;
      }
      iVar7 = iVar5 + -1;
      plVar2 = *(longlong **)(local_18.Data + (longlong)iVar7 * 8);
      iVar6 = (iVar5 - iVar7) + -1;
      if (iVar6 != 0) {
        memmove(local_18.Data + (longlong)iVar7 * 8,local_18.Data + (longlong)iVar7 * 8 + 8,
                (longlong)iVar6 << 3);
        iVar5 = (int)local_10;
      }
      local_10 = CONCAT44(local_10._4_4_,iVar5 + -1);
      iVar5 = iVar5 + -1;
    } while (plVar2 == (longlong *)0x0);
    pUVar8 = USoundNodeAssetReferencer::StaticClass();
    iVar5 = (int)pUVar8->_padding_;
    if ((*(int *)(plVar2[2] + 0x38) < iVar5) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar2[2] + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar8->_padding_)) {
      if ((&local_18 == (ForAnyElementType *)(plVar2 + 5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar5 = (int)plVar2[6];
      if (iVar5 != 0) {
        iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar5,&local_18,(int *)&local_10,(int *)((longlong)&local_10 + 4));
        ConstructItems<USoundNode_*,TObjectPtr<USoundNode>,int>
                  (local_18.Data + (longlong)iVar7 * 8,
                   (TObjectPtr<USoundNode> *)((ForAnyElementType *)(plVar2 + 5))->Data,iVar5);
      }
    }
    else {
      (**(code **)(*plVar2 + 0x368))(plVar2);
    }
    iVar5 = (int)local_10;
  } while( true );
}

// BeginDestroy @ 1486a6900

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall USoundCue::BeginDestroy(USoundCue *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(USoundCue **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CacheAggregateValues @ 1486a7270

void __thiscall USoundCue::CacheAggregateValues(USoundCue *this)

{
  USoundNode *pUVar1;
  char cVar2;
  undefined4 uVar3;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar1);
    uVar3 = (**(code **)(this->_padding_ + 0x3a8))(this);
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    *(undefined4 *)&this->_padding_ = uVar3;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2d0))();
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    *(byte *)&this->_padding_ = (byte)this->_padding_ ^ (cVar2 << 5 ^ (byte)this->_padding_) & 0x20;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2d8))();
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    *(byte *)&this->_padding_ = (byte)this->_padding_ ^ (cVar2 << 6 ^ (byte)this->_padding_) & 0x40;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2e8))();
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    this->field_0x568 = (cVar2 << 3 ^ this->field_0x568) & 8U ^ this->field_0x568;
    cVar2 = (**(code **)(pUVar1->_padding_ + 0x2e0))();
    this->field_0x568 = (cVar2 << 4 ^ this->field_0x568) & 0x10U ^ this->field_0x568;
  }
  return;
}

// CacheLoadingBehavior @ 1486a7560

void __thiscall USoundCue::CacheLoadingBehavior(USoundCue *this,ESoundWaveLoadingBehavior param_1)

{
  USoundNode *pUVar1;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486a7575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x340))(pUVar1,1,param_1);
    return;
  }
  return;
}

// CacheQualityLevel @ 1486a7590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl USoundCue::CacheQualityLevel(void)

{
  UGameUserSettings *pUVar1;
  
  if (CachedQualityLevel == -1) {
    CachedQualityLevel = FPlatformCompressionUtilities::GetQualityIndexOverrideForCurrentPlatform();
    if (CachedQualityLevel < 0) {
      pUVar1 = UEngine::GetGameUserSettings(GEngine);
      CachedQualityLevel = pUVar1->AudioQualityLevel;
    }
  }
  return;
}

// CanBeClusterRoot @ 1486a7fd0

bool __thiscall USoundCue::CanBeClusterRoot(USoundCue *this)

{
  return true;
}

// CanBeInCluster @ 1486a8000

bool __thiscall USoundCue::CanBeInCluster(USoundCue *this)

{
  return true;
}

// ComputeMaxDistance @ 1486a9b50

float __thiscall USoundCue::ComputeMaxDistance(USoundCue *this)

{
  USoundNode *pUVar1;
  longlong lVar2;
  FBaseAttenuationSettings *this_00;
  float fVar3;
  float fVar4;
  
  fVar4 = 0.0;
  this_00 = (FBaseAttenuationSettings *)(**(code **)(this->_padding_ + 0x2c8))();
  if (this_00 != (FBaseAttenuationSettings *)0x0) {
    if ((this_00[1]._padding_ & 1) == 0) goto LAB_1486a9be2;
    fVar4 = FBaseAttenuationSettings::GetMaxDimension(this_00);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
  }
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  fVar3 = fVar4;
  if ((pUVar1 != (USoundNode *)0x0) &&
     (fVar3 = (float)(**(code **)(pUVar1->_padding_ + 0x2b8))(), fVar3 <= fVar4)) {
    fVar3 = fVar4;
  }
  if (__real_38d1b717 < fVar3) {
    return fVar3;
  }
  lVar2 = this->_padding_;
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xe8) & 1) != 0)) {
    fVar4 = FBaseAttenuationSettings::GetMaxDimension((FBaseAttenuationSettings *)(lVar2 + 0x28));
    return fVar4;
  }
LAB_1486a9be2:
  fVar4 = FAudioDevice::GetMaxWorldDistance();
  return fVar4;
}

// CreateParameterTransmitter @ 1486aea80

TSharedPtr<Audio::IParameterTransmitter,1> * __thiscall
USoundCue::CreateParameterTransmitter
          (USoundCue *this,TSharedPtr<Audio::IParameterTransmitter,1> *__return_storage_ptr__,
          FParameterTransmitterInitParams *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TSharedPtr<Audio::IParameterTransmitter,1> *pTVar4;
  TReferenceControllerBase<1> *pTVar5;
  TArray<FAudioParameter,TSizedDefaultAllocator<32>_> local_18;
  
  pTVar3 = ::operator_new(0x90);
  pTVar5 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (IParameterTransmitter *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFSoundCueParameterTransmitter___00_SharedPointerInternals__6B_
    ;
    local_18.AllocatorInstance.Data = (param_1->DefaultParams).AllocatorInstance.Data;
    (param_1->DefaultParams).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.ArrayNum = (param_1->DefaultParams).ArrayNum;
    local_18.ArrayMax = (param_1->DefaultParams).ArrayMax;
    (param_1->DefaultParams).ArrayNum = 0;
    (param_1->DefaultParams).ArrayMax = 0;
    Audio::FParameterTransmitterBase::FParameterTransmitterBase
              ((FParameterTransmitterBase *)(pTVar3 + 1),&local_18);
    pTVar3[1]._padding_ = (longlong)&___7FSoundCueParameterTransmitter__6B_;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x80;
    *(undefined4 *)((longlong)&pTVar3[7]._padding_ + 4) = 0;
    *(undefined4 *)&pTVar3[7]._padding_ = 0xffffffff;
    pTVar3[8]._padding_ = 0;
    pTVar3[8].SharedReferenceCount = (atomic<int>)0x0;
    if (pTVar3 + 1 == (TReferenceControllerBase<1> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TSharedPtr<Audio::IParameterTransmitter,1> *)(*pcVar1)();
        return pTVar4;
      }
    }
    __return_storage_ptr__->Object = (IParameterTransmitter *)(pTVar3 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    pTVar5 = pTVar3;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  return __return_storage_ptr__;
}

// EvaluateMaxAttenuation @ 1486b34e0

float __thiscall
USoundCue::EvaluateMaxAttenuation
          (USoundCue *this,TTransform<double> *param_1,TVector<double> *param_2,float param_3)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  int iVar3;
  FBaseAttenuationSettings *pFVar4;
  ForAnyElementType FVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_res8 [8];
  TArray<USoundNodeAttenuation_const_*,TSizedDefaultAllocator<32>_> local_78;
  TVector<double>_u_0 local_68 [3];
  
  if (this->bHasAttenuationNode == '\0') {
    pFVar4 = (FBaseAttenuationSettings *)(**(code **)(this->_padding_ + 0x2c8))();
    if (pFVar4 == (FBaseAttenuationSettings *)0x0) {
      return __real_3f800000;
    }
    local_68[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_68[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_68[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    fVar6 = FBaseAttenuationSettings::Evaluate
                      (pFVar4,param_1,(TVector<double> *)&local_68[0]._s_0,param_3);
    return fVar6;
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  RecursiveFindNode<USoundNodeAttenuation>(this,(this->FirstNode).field0_0x0.DebugPtr,&local_78);
  fVar6 = __real_3f800000;
  iVar3 = local_78.ArrayNum;
  pFVar1 = local_78.AllocatorInstance.Data + (longlong)local_78.ArrayNum * 8;
  FVar5.Data = local_78.AllocatorInstance.Data;
  fVar8 = 0.0;
  do {
    while( true ) {
      if (local_78.ArrayNum != iVar3) {
        `TCheckedPointerIterator<USoundNodeAttenuation_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
      }
      if (FVar5.Data == pFVar1) {
        if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.AllocatorInstance.Data);
        }
        return fVar8;
      }
      lVar2 = *(longlong *)FVar5.Data;
      fVar7 = fVar8;
      if (lVar2 != 0) break;
LAB_1486b3625:
      FVar5.Data = FVar5.Data + 8;
      fVar8 = fVar7;
    }
    if ((*(byte *)(lVar2 + 0x420) & 1) == 0) {
      fVar7 = fVar6;
      if (*(longlong *)(lVar2 + 0x48) == 0) goto LAB_1486b3625;
      pFVar4 = (FBaseAttenuationSettings *)(*(longlong *)(lVar2 + 0x48) + 0x28);
    }
    else {
      pFVar4 = (FBaseAttenuationSettings *)(lVar2 + 0x50);
    }
    local_68[0]._0_8_ = (param_2->field0_0x0)._s_0.X;
    local_68[0]._8_8_ = (param_2->field0_0x0)._s_0.Y;
    local_68[0]._16_8_ = (param_2->field0_0x0)._s_0.Z;
    fVar7 = FBaseAttenuationSettings::Evaluate
                      (pFVar4,param_1,(TVector<double> *)&local_68[0]._s_0,param_3);
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    FVar5.Data = FVar5.Data + 8;
    fVar8 = fVar7;
  } while( true );
}

// EvaluateNodes @ 1486b3680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundCue::EvaluateNodes(USoundCue *this,bool param_1)

{
  UGameUserSettings *pUVar1;
  void *this_00;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined1 local_res10 [8];
  undefined1 auStack_c8 [32];
  TObjectPtr<USoundNode>_u_0 local_a8;
  FString local_a0;
  code *local_88 [2];
  undefined **local_78;
  undefined1 *local_70;
  code **local_68;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  undefined1 *local_40;
  code **local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_res10[0] = param_1;
  if ((CachedQualityLevel == -1) &&
     (CachedQualityLevel =
           FPlatformCompressionUtilities::GetQualityIndexOverrideForCurrentPlatform(),
     CachedQualityLevel < 0)) {
    pUVar1 = UEngine::GetGameUserSettings(GEngine);
    CachedQualityLevel = pUVar1->AudioQualityLevel;
  }
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_1>,0,0>::_vftable_;
  local_40 = local_res10;
  local_30 = (undefined ***)0x0;
  local_38 = local_58;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundCue::EvaluateNodes'::__l2::<lambda_1>,void,USoundNode_*>::
                Call;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`USoundCue::EvaluateNodes'::`2'::<lambda_2>,0,0>::_vftable_;
  local_70 = local_res10;
  local_68 = local_88;
  local_60 = (undefined ***)0x0;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`USoundCue::EvaluateNodes'::__l2::<lambda_2>,void,USoundNode_*>::
                Call;
  if (5 < (byte)LogAudio._0_1_) {
    if (this->CookedQualityIndex == -1) {
      local_a8 = (TObjectPtr<USoundNode>_u_0)this->_padding_;
      ::FName::ToString((FName *)&local_a8.ObjectPtr,&local_a0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
    if ((5 < (byte)LogAudio._0_1_) && (this->CookedQualityIndex != -1)) {
      local_a8 = (TObjectPtr<USoundNode>_u_0)this->_padding_;
      ::FName::ToString((FName *)&local_a8.ObjectPtr,&local_a0);
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
    }
  }
  local_a8 = (TObjectPtr<USoundNode>_u_0)(this->FirstNode).field0_0x0.DebugPtr;
  if (this->CookedQualityIndex == -1) {
    UE::Core::Private::Function::CheckCallable(local_58[0]);
    pcVar3 = local_58[0];
    pppuVar2 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar2 = local_30;
    }
    this_00 = (void *)(*(code *)(*pppuVar2)[1])();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundCue::EvaluateNodes'::__l2::<lambda_1>,void,USoundNode_*>
                  ::Call) {
      `USoundCue::EvaluateNodes'::__l2::<lambda_1>::operator()(this_00,local_a8.DebugPtr);
      goto LAB_1486b386c;
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(local_88[0]);
    pcVar3 = local_88[0];
    pppuVar2 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar2 = local_60;
    }
    this_00 = (void *)(*(code *)(*pppuVar2)[1])();
    if (pcVar3 == UE::Core::Private::Function::
                  TFunctionRefCaller<`USoundCue::EvaluateNodes'::__l2::<lambda_2>,void,USoundNode_*>
                  ::Call) {
      `USoundCue::EvaluateNodes'::__l2::<lambda_2>::operator()(this_00,local_a8.DebugPtr);
      goto LAB_1486b386c;
    }
  }
  (*pcVar3)(this_00,&local_a8);
LAB_1486b386c:
  if (local_88[0] != (code *)0x0) {
    pppuVar2 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar2 = local_60;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar2 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar2 = local_30;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  return;
}

// FindPathToNode @ 1486b7510

bool __thiscall
USoundCue::FindPathToNode
          (USoundCue *this,ulong64 param_1,TArray<USoundNode_*,TSizedDefaultAllocator<32>_> *param_2
          )

{
  USoundNode *pUVar1;
  bool bVar2;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  bVar2 = RecursiveFindPathToNode(this,pUVar1,(ulong64)pUVar1,param_1,param_2);
  return bVar2;
}

// GetAttenuationSettingsToApply @ 1486bb210

FSoundAttenuationSettings * __thiscall USoundCue::GetAttenuationSettingsToApply(USoundCue *this)

{
  FSoundAttenuationSettings *pFVar1;
  
  if (this->bOverrideAttenuation != '\0') {
    return &this->AttenuationOverrides;
  }
  pFVar1 = (FSoundAttenuationSettings *)(this->_padding_ + 0x28);
  if (this->_padding_ == 0) {
    pFVar1 = (FSoundAttenuationSettings *)0x0;
  }
  return pFVar1;
}

// GetDesc @ 1486bd600

FString * __thiscall USoundCue::GetDesc(USoundCue *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  size_t sVar3;
  ForAnyElementType _Str;
  float fVar4;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  ::FString::FString(__return_storage_ptr__,L"");
  fVar4 = (float)(**(code **)(this->_padding_ + 0x2d8))(this);
  if (__real_461c4000 <= fVar4) {
    ::FString::operator=(__return_storage_ptr__,L"Forever");
  }
  else {
    ::FString::PrintfImpl(&local_28,L"%3.2fs");
    if (__return_storage_ptr__ != &local_28) {
      pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
      local_28.Data.ArrayNum = 0;
      local_28.Data.ArrayMax = 0;
      local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,L" [",2);
  lVar2 = (**(code **)(this->_padding_ + 0x330))(this);
  local_res8 = *(FName *)(lVar2 + 0x18);
  ::FName::ToString(&local_res8,&local_18);
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_18.Data.ArrayNum != 0) {
    _Str.Data = local_18.Data.AllocatorInstance.Data;
  }
  sVar3 = wcslen((wchar_t *)_Str.Data);
  ::FString::AppendChars(__return_storage_ptr__,(wchar_t *)_Str.Data,(int)sVar3);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::AppendChars(__return_storage_ptr__,L"]",1);
  return __return_storage_ptr__;
}

// GetDuration @ 1486bdc10

float __thiscall USoundCue::GetDuration(USoundCue *this)

{
  float *pfVar1;
  
  pfVar1 = (float *)((longlong)&this->_padding_ + 4);
  if ((__real_322bcc77 < *pfVar1 || __real_322bcc77 == *pfVar1) && ((this->_padding_ & 0x20) == 0))
  {
    return *(float *)((longlong)&this->_padding_ + 4);
  }
  CacheAggregateValues(this);
  return *(float *)((longlong)&this->_padding_ + 4);
}

// GetMaxDistance @ 1486c1350

float __thiscall USoundCue::GetMaxDistance(USoundCue *this)

{
  return *(float *)&this->_padding_;
}

// GetPitchMultiplier @ 1486c3740

float __thiscall USoundCue::GetPitchMultiplier(USoundCue *this)

{
  return this->PitchMultiplier;
}

// GetPrivateStaticClass @ 1486c42b0

UClass * __cdecl USoundCue::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USoundCue.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SoundCue",&Z_Registration_Info_UClass_USoundCue.InnerSingleton,
               StaticRegisterNativesUSoundCue,0x578,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<USoundCue>,InternalVTableHelperCtorCaller<USoundCue>,local_res8,
               USoundBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USoundCue.InnerSingleton;
}

// GetResourceSizeForFormat @ 1486c6b80

int __thiscall USoundCue::GetResourceSizeForFormat(USoundCue *this,FName param_1)

{
  TObjectPtr<USoundNode>_u_0 TVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  UClass *pUVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  TObjectPtr<USoundNode>_u_0 local_res8;
  TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_> local_28;
  
  TVar1 = (TObjectPtr<USoundNode>_u_0)(this->FirstNode).field0_0x0.DebugPtr;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  iVar5 = 0;
  if (TVar1.DebugPtr != (USoundNode *)0x0) {
    pUVar7 = USoundNodeWavePlayer::StaticClass();
    iVar5 = (int)pUVar7->_padding_;
    if ((*(int *)((TVar1.DebugPtr)->_padding_ + 0x38) < iVar5) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar1.DebugPtr)->_padding_ + 0x30) + (longlong)iVar5 * 8) !=
        &pUVar7->_padding_)) {
      local_res8.DebugPtr = (USoundNode *)0x0;
    }
    else {
      local_res8 = TVar1;
      TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_*_const_&>
                (&local_28,(USoundNodeWavePlayer **)&local_res8.DebugPtr);
    }
    iVar5 = (**(code **)((TVar1.DebugPtr)->_padding_ + 0x300))(TVar1.DebugPtr);
    uVar10 = 0;
    if (0 < ((TVar1.DebugPtr)->ChildNodes).ArrayNum) {
      lVar9 = 0;
      do {
        if (iVar5 <= lVar9) break;
        uVar6 = 0;
        if ((int)uVar10 < ((TVar1.DebugPtr)->ChildNodes).ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)
                         (((TVar1.DebugPtr)->ChildNodes).AllocatorInstance.Data + lVar9 * 8),
                   &local_28);
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while ((int)uVar10 < ((TVar1.DebugPtr)->ChildNodes).ArrayNum);
    }
    iVar5 = local_28.ArrayNum;
  }
  iVar8 = 0;
  uVar10 = 0;
  if (0 < iVar5) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar10 < iVar5) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          iVar5 = (*pcVar3)();
          return iVar5;
        }
        iVar5 = local_28.ArrayNum;
      }
      plVar2 = *(longlong **)(*(longlong *)(local_28.AllocatorInstance.Data + lVar9) + 0x70);
      if (plVar2 != (longlong *)0x0) {
        iVar5 = (**(code **)(*plVar2 + 0x3d0))(plVar2,param_1);
        iVar8 = iVar8 + iVar5;
        iVar5 = local_28.ArrayNum;
      }
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar10 < iVar5);
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return iVar8;
}

// GetSoundWavesWithCookedAnalysisData @ 1486c80d0

bool __thiscall
USoundCue::GetSoundWavesWithCookedAnalysisData
          (USoundCue *this,TArray<USoundWave_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<USoundNode>_u_0 TVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  UClass *pUVar10;
  ForAnyElementType FVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  TObjectPtr<USoundNode>_u_0 local_res18;
  TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_> local_38;
  
  TVar2 = (TObjectPtr<USoundNode>_u_0)(this->FirstNode).field0_0x0.DebugPtr;
  uVar12 = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (TVar2.DebugPtr != (USoundNode *)0x0) {
    pUVar10 = USoundNodeWavePlayer::StaticClass();
    iVar8 = (int)pUVar10->_padding_;
    if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar10->_padding_)) {
      local_res18.DebugPtr = (USoundNode *)0x0;
    }
    else {
      local_res18 = TVar2;
      TArray<USoundNodeWavePlayer_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_*_const_&>
                (&local_38,(USoundNodeWavePlayer **)&local_res18.DebugPtr);
    }
    iVar8 = (**(code **)((TVar2.DebugPtr)->_padding_ + 0x300))(TVar2.DebugPtr);
    if (0 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
      uVar14 = uVar12;
      do {
        if ((longlong)iVar8 <= (longlong)uVar12) break;
        uVar13 = (uint)uVar14;
        uVar9 = 0;
        if ((int)uVar13 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
          uVar9 = ~uVar13 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)
                         (((TVar2.DebugPtr)->ChildNodes).AllocatorInstance.Data + uVar12 * 8),
                   &local_38);
        uVar14 = (ulonglong)(uVar13 + 1);
        uVar12 = uVar12 + 1;
      } while ((int)(uVar13 + 1) < ((TVar2.DebugPtr)->ChildNodes).ArrayNum);
    }
  }
  iVar8 = local_38.ArrayNum;
  bVar15 = false;
  bVar5 = false;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar11.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar8) {
      `TCheckedPointerIterator<USoundNodeWavePlayer_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar11.Data == pFVar1) break;
    plVar3 = *(longlong **)(*(longlong *)FVar11.Data + 0x70);
    if ((plVar3 != (longlong *)0x0) &&
       (cVar7 = (**(code **)(*plVar3 + 0x340))(plVar3,param_1), bVar5 = bVar15, cVar7 != '\0')) {
      bVar15 = true;
      bVar5 = true;
    }
    FVar11.Data = FVar11.Data + 8;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar5;
}

// GetSubtitlePriority @ 1486c8b60

float __thiscall USoundCue::GetSubtitlePriority(USoundCue *this)

{
  return this->SubtitlePriority;
}

// GetVolumeMultiplier @ 1486c9aa0

float __thiscall USoundCue::GetVolumeMultiplier(USoundCue *this)

{
  return this->VolumeMultiplier;
}

// HasCookedAmplitudeEnvelopeData @ 1486cae00

bool __thiscall USoundCue::HasCookedAmplitudeEnvelopeData(USoundCue *this)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<USoundNode>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  TObjectPtr<USoundNode>_u_0 local_res10;
  TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar11 = 0;
  TVar2 = (TObjectPtr<USoundNode>_u_0)(this->FirstNode).field0_0x0.DebugPtr;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (TVar2.DebugPtr != (USoundNode *)0x0) {
    pUVar9 = USoundNodeWavePlayer::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_res10.DebugPtr = (USoundNode *)0x0;
    }
    else {
      local_res10 = TVar2;
      TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_const_*_const_&>
                (&local_38,(USoundNodeWavePlayer **)&local_res10.DebugPtr);
    }
    iVar7 = (**(code **)((TVar2.DebugPtr)->_padding_ + 0x300))(TVar2.DebugPtr);
    if (0 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
      uVar13 = uVar11;
      do {
        if ((longlong)iVar7 <= (longlong)uVar11) break;
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)
                         (((TVar2.DebugPtr)->ChildNodes).AllocatorInstance.Data + uVar11 * 8),
                   &local_38);
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar11 = uVar11 + 1;
      } while ((int)(uVar12 + 1) < ((TVar2.DebugPtr)->ChildNodes).ArrayNum);
    }
  }
  iVar7 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar7) {
      `TCheckedPointerIterator<USoundNodeWavePlayer_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    if ((*(longlong **)(*(longlong *)FVar10.Data + 0x70) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(*(longlong *)FVar10.Data + 0x70) + 0x350))(),
       cVar6 != '\0')) {
      bVar4 = true;
LAB_1486caf6a:
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return bVar4;
    }
    FVar10.Data = FVar10.Data + 8;
  }
  bVar4 = false;
  goto LAB_1486caf6a;
}

// HasCookedFFTData @ 1486cafc0

bool __thiscall USoundCue::HasCookedFFTData(USoundCue *this)

{
  FScriptContainerElement *pFVar1;
  TObjectPtr<USoundNode>_u_0 TVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  UClass *pUVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 local_res8 [8];
  TObjectPtr<USoundNode>_u_0 local_res10;
  TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_> local_38;
  
  uVar11 = 0;
  TVar2 = (TObjectPtr<USoundNode>_u_0)(this->FirstNode).field0_0x0.DebugPtr;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  if (TVar2.DebugPtr != (USoundNode *)0x0) {
    pUVar9 = USoundNodeWavePlayer::StaticClass();
    iVar7 = (int)pUVar9->_padding_;
    if ((*(int *)((TVar2.DebugPtr)->_padding_ + 0x38) < iVar7) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)((TVar2.DebugPtr)->_padding_ + 0x30) + (longlong)iVar7 * 8) !=
        &pUVar9->_padding_)) {
      local_res10.DebugPtr = (USoundNode *)0x0;
    }
    else {
      local_res10 = TVar2;
      TArray<USoundNodeWavePlayer_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeWavePlayer_const_*_const_&>
                (&local_38,(USoundNodeWavePlayer **)&local_res10.DebugPtr);
    }
    iVar7 = (**(code **)((TVar2.DebugPtr)->_padding_ + 0x300))(TVar2.DebugPtr);
    if (0 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
      uVar13 = uVar11;
      do {
        if ((longlong)iVar7 <= (longlong)uVar11) break;
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < ((TVar2.DebugPtr)->ChildNodes).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        RecursiveFindNode<USoundNodeWavePlayer>
                  (this,*(USoundNode **)
                         (((TVar2.DebugPtr)->ChildNodes).AllocatorInstance.Data + uVar11 * 8),
                   &local_38);
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar11 = uVar11 + 1;
      } while ((int)(uVar12 + 1) < ((TVar2.DebugPtr)->ChildNodes).ArrayNum);
    }
  }
  iVar7 = local_38.ArrayNum;
  pFVar1 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 8;
  FVar10.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar7) {
      `TCheckedPointerIterator<USoundNodeWavePlayer_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar10.Data == pFVar1) break;
    if ((*(longlong **)(*(longlong *)FVar10.Data + 0x70) != (longlong *)0x0) &&
       (cVar6 = (**(code **)(**(longlong **)(*(longlong *)FVar10.Data + 0x70) + 0x348))(),
       cVar6 != '\0')) {
      bVar4 = true;
LAB_1486cb12a:
      if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
      return bVar4;
    }
    FVar10.Data = FVar10.Data + 8;
  }
  bVar4 = false;
  goto LAB_1486cb12a;
}

// IsAttenuationSettingsEditable @ 1486d0eb0

bool __thiscall USoundCue::IsAttenuationSettingsEditable(USoundCue *this)

{
  return (bool)(~this->bOverrideAttenuation & 1);
}

// IsPlayWhenSilent @ 1486d1520

bool __thiscall USoundCue::IsPlayWhenSilent(USoundCue *this)

{
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    return true;
  }
  return this->bHasPlayWhenSilent;
}

// IsPlayable @ 1486d15f0

bool __thiscall USoundCue::IsPlayable(USoundCue *this)

{
  return (this->FirstNode).field0_0x0.DebugPtr != (USoundNode *)0x0;
}

// OnPostEngineInit @ 1486d6ae0

void __thiscall USoundCue::OnPostEngineInit(USoundCue *this)

{
  ulong64 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong64 *puVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType *this_00;
  FDestructionSentinel local_38;
  
  uVar1 = (this->OnPostEngineInitHandle).ID;
  if (uVar1 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
               &FCoreDelegates::OnPostEngineInit,(FWriteAccessScope *)&local_38);
    uVar6 = 0;
    if (0 < (int)FCoreDelegates::OnPostEngineInit._16_4_) {
      lVar7 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar6 < (int)FCoreDelegates::OnPostEngineInit._16_4_) {
          uVar4 = ~uVar6 >> 0x1f;
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
        this_00 = (ForAnyElementType *)(FCoreDelegates::OnPostEngineInit._8_8_ + lVar7);
        if (((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
           && (puVar5 = (ulong64 *)(**(code **)(*(longlong *)this_00->Data + 0x40))(),
              *puVar5 == uVar1)) {
          if ((*(int *)&this_00[1].Data != 0) && (this_00->Data != (FScriptContainerElement *)0x0))
          {
            (*(code *)**(undefined8 **)this_00->Data)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(this_00,0,0,0x10);
            *(undefined4 *)&this_00[1].Data = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                     &FCoreDelegates::OnPostEngineInit,false);
          break;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((int)uVar6 < (int)FCoreDelegates::OnPostEngineInit._16_4_);
    }
    if (local_38.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
    }
  }
  (this->OnPostEngineInitHandle).ID = 0;
  EvaluateNodes(this,true);
  return;
}

// Parse @ 1486d8530

void __thiscall
USoundCue::Parse(USoundCue *this,FAudioDevice *param_1,ulong64 param_2,FActiveSound *param_3,
                FSoundParseParameters *param_4,
                TArray<FWaveInstance_*,TSizedDefaultAllocator<32>_> *param_5)

{
  FScriptContainerElement *pFVar1;
  USoundNode *pUVar2;
  IParameterTransmitter *pIVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ForAnyElementType FVar13;
  ulonglong *puVar14;
  int iVar15;
  IParameterTransmitter IVar16;
  IParameterTransmitter IVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8 [8];
  undefined4 local_res20;
  ForAnyElementType local_60;
  int local_58;
  int local_54;
  IParameterTransmitter local_50;
  int local_48;
  undefined4 local_44;
  
  pUVar2 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar2 != (USoundNode *)0x0) {
    (**(code **)(pUVar2->_padding_ + 0x2f0))(pUVar2,param_1,pUVar2,param_3,param_4,param_5);
  }
  pIVar3 = (param_3->InstanceTransmitter).Object;
  if (pIVar3 != (IParameterTransmitter *)0x0) {
    IVar17 = pIVar3[4];
    pIVar3[4] = (IParameterTransmitter)0x0;
    local_res20 = *(undefined4 *)&pIVar3[5].field_0x4;
    iVar15 = *(int *)(pIVar3 + 5);
    pIVar3[5] = (IParameterTransmitter)0x0;
    DestructItems<FAudioParameter,int>((FAudioParameter *)pIVar3[4],0);
    *(undefined4 *)(pIVar3 + 5) = 0;
    DestructItems<FAudioParameter,int>((FAudioParameter *)0x0,0);
    if ((iVar15 == 0) || (iVar10 = param_5->ArrayNum, iVar10 == 0)) {
      DestructItems<FAudioParameter,int>((FAudioParameter *)IVar17,iVar15);
    }
    else {
      uVar9 = 0;
      if ((int)(iVar10 - 1U) < iVar10) {
        uVar9 = ~(iVar10 - 1U) >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar9 = param_5->ArrayNum;
      uVar12 = (ulonglong)(int)uVar9;
      pFVar18 = (param_5->AllocatorInstance).Data;
      plVar4 = *(longlong **)(pFVar18 + (uVar12 - 1) * 8);
      pFVar1 = pFVar18 + uVar12 * 8;
      while( true ) {
        if (param_5->ArrayNum != (int)uVar12) {
          `TCheckedPointerIterator<FWaveInstance_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        if (pFVar18 == pFVar1) break;
        plVar5 = *(longlong **)pFVar18;
        if (plVar5 == (longlong *)0x0) {
LAB_1486d8862:
          uVar12 = (ulonglong)uVar9;
          pFVar18 = pFVar18 + 8;
        }
        else {
          uVar12 = plVar5[0x30];
          if (*(int *)(pIVar3 + 7) == *(int *)&pIVar3[0xc].field_0x4) goto LAB_1486d8862;
          IVar16 = (IParameterTransmitter)(pIVar3 + 0xd);
          if (pIVar3[0xe] != (IParameterTransmitter)0x0) {
            IVar16 = pIVar3[0xe];
          }
          iVar10 = *(int *)((longlong)IVar16 +
                           ((uVar12 >> 0x20) * 0x17 + uVar12 &
                           (ulonglong)(*(int *)(pIVar3 + 0xf) - 1)) * 4);
          if (iVar10 == -1) goto LAB_1486d8862;
          do {
            puVar11 = (ulonglong *)((longlong)iVar10 * 0x20 + (longlong)pIVar3[6]);
            if (*puVar11 == uVar12) {
              puVar14 = puVar11 + 1;
              if (puVar11 == (ulonglong *)0x0) {
                puVar14 = (ulonglong *)0x0;
              }
              if ((puVar14 != (ulonglong *)0x0) &&
                 (plVar6 = (longlong *)*puVar14, plVar6 != (longlong *)0x0)) {
                if (plVar5 == plVar4) {
                  plVar5 = (longlong *)*plVar5;
                  local_44 = local_res20;
                  local_res20 = 0;
                  local_50 = IVar17;
                  local_48 = iVar15;
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x358))(plVar5,&local_50,0);
                  }
                  if (local_48 != 0) {
                    (**(code **)(*plVar6 + 0x40))(plVar6,&local_50);
                  }
                  DestructItems<FAudioParameter,int>((FAudioParameter *)local_50,local_48);
                  FVar13.Data = (FScriptContainerElement *)local_50;
                  IVar17 = (IParameterTransmitter)0x0;
                  iVar15 = 0;
                }
                else {
                  local_60.Data = (FScriptContainerElement *)0x0;
                  local_58 = iVar15;
                  if (iVar15 == 0) {
                    local_54 = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0xa0,8,iVar15,0,&local_60,iVar15,&local_54);
                    ConstructItems<FAudioParameter,FAudioParameter,int>
                              (local_60.Data,(FAudioParameter *)IVar17,iVar15);
                  }
                  plVar5 = (longlong *)*plVar5;
                  plVar6 = (longlong *)*puVar14;
                  if (plVar5 != (longlong *)0x0) {
                    (**(code **)(*plVar5 + 0x358))(plVar5,&local_60,0);
                  }
                  if (local_58 != 0) {
                    (**(code **)(*plVar6 + 0x40))(plVar6,&local_60);
                  }
                  DestructItems<FAudioParameter,int>((FAudioParameter *)local_60.Data,local_58);
                  FVar13.Data = local_60.Data;
                }
                if ((IParameterTransmitter)FVar13.Data != (IParameterTransmitter)0x0) {
                  FMemory::Free(FVar13.Data);
                }
              }
              goto LAB_1486d8862;
            }
            iVar10 = (int)puVar11[3];
          } while (iVar10 != -1);
          uVar12 = (ulonglong)uVar9;
          pFVar18 = pFVar18 + 8;
        }
      }
      DestructItems<FAudioParameter,int>((FAudioParameter *)IVar17,iVar15);
    }
    if (IVar17 != (IParameterTransmitter)0x0) {
      FMemory::Free((void *)IVar17);
    }
  }
  return;
}

// PostLoad @ 1486e0590

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall USoundCue::PostLoad(USoundCue *this)

{
  int iVar1;
  UClass *pUVar2;
  USoundNode *pUVar3;
  bool bVar4;
  UEngine *pUVar5;
  UAudioSettings *pUVar6;
  UClass *pUVar7;
  FDelegateHandle FVar8;
  longlong lVar9;
  char cVar10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  UObject::PostLoad((UObject *)this);
  if (((5 < (byte)LogAudio._0_1_) && (CachedQualityLevel != this->CookedQualityIndex)) &&
     (this->CookedQualityIndex != -1)) {
    pUVar6 = GetDefault<UAudioSettings>();
    UAudioSettings::FindQualityNameByIndex(pUVar6,&local_28,this->CookedQualityIndex);
    pUVar6 = GetDefault<UAudioSettings>();
    UAudioSettings::FindQualityNameByIndex(pUVar6,&local_38,CachedQualityLevel);
    if (this->_padding_ == 0) {
      ::FString::FString(&local_48,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0,None);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogAudio);
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  pUVar5 = GEngine;
  if (((GEngine != (UEngine *)0x0) &&
      (pUVar2 = (GEngine->GameUserSettingsClass).Class.field0_0x0.DebugPtr, pUVar2 != (UClass *)0x0)
      ) && (pUVar7 = Z_Construct_UClass_UGameUserSettings_NoRegister(), pUVar7 != (UClass *)0x0)) {
    iVar1 = (int)pUVar7->_padding_;
    if (((int)pUVar2->_padding_ < iVar1) ||
       ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar1 * 8) != &pUVar7->_padding_)
       ) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) && ((pUVar5->GameUserSettingsClass).Class.field0_0x0.DebugPtr != (UClass *)0x0)) {
      EvaluateNodes(this,false);
      goto LAB_1486e0782;
    }
  }
  local_48.Data.ArrayNum = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnPostEngineInit;
  local_28.Data._8_8_ = (ulonglong)(uint)local_48.Data.ArrayMax << 0x20;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)OnPostEngineInit;
  FVar8 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
          AddUObject<USoundCue>
                    ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                      *)&FCoreDelegates::OnPostEngineInit,(USoundCue *)&stack0x00000008,
                     (pmf_75f0a505 *)this);
                    /* WARNING: Load size is inaccurate */
  (this->OnPostEngineInitHandle).ID = *FVar8.ID;
LAB_1486e0782:
  CacheAggregateValues(this);
  cVar10 = '\0';
  lVar9 = (**(code **)(this->_padding_ + 0x330))(this);
  do {
    if (lVar9 == 0) goto LAB_1486e07e2;
    cVar10 = *(char *)(lVar9 + 0x1b9);
    lVar9 = *(longlong *)(lVar9 + 0x1e8);
  } while (cVar10 == '\0');
  if (cVar10 == '\x01') {
    pUVar3 = (this->FirstNode).field0_0x0.DebugPtr;
    if (pUVar3 != (USoundNode *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x338))(pUVar3,1);
    }
    this->bIsRetainingAudio = '\x01';
    return;
  }
LAB_1486e07e2:
  if ((this->bPrimeOnLoad == 0) && (cVar10 != '\x02')) {
    if ((cVar10 == '\x03') &&
       (pUVar3 = (this->FirstNode).field0_0x0.DebugPtr, pUVar3 != (USoundNode *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001486e0810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar3->_padding_ + 0x340))(pUVar3,1,3);
      return;
    }
  }
  else {
    pUVar3 = (this->FirstNode).field0_0x0.DebugPtr;
    if (pUVar3 != (USoundNode *)0x0) {
      (**(code **)(pUVar3->_padding_ + 0x330))(pUVar3,1);
    }
  }
  return;
}

// PrimeSoundCue @ 1486e20b0

void __thiscall USoundCue::PrimeSoundCue(USoundCue *this)

{
  USoundNode *pUVar1;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001486e20c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pUVar1->_padding_ + 0x330))(pUVar1,1);
    return;
  }
  return;
}

// RecursiveFindAllNodes @ 1486e3c80

void __thiscall
USoundCue::RecursiveFindAllNodes
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNode_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  USoundNode *pUVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  USoundNode *local_res10;
  
  if (param_1 != (USoundNode *)0x0) {
    local_res10 = param_1;
    TArray<USoundNode_*,TSizedDefaultAllocator<32>_>::AddUniqueImpl<USoundNode_*_const_&>
              (param_2,&local_res10);
    iVar4 = (**(code **)(local_res10->_padding_ + 0x300))();
    uVar6 = 0;
    if (0 < (local_res10->ChildNodes).ArrayNum) {
      lVar7 = 0;
      do {
        pUVar2 = local_res10;
        if (iVar4 <= lVar7) {
          return;
        }
        uVar5 = 0;
        if ((int)uVar6 < (local_res10->ChildNodes).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindAllNodes
                  (this,*(USoundNode **)((pUVar2->ChildNodes).AllocatorInstance.Data + lVar7 * 8),
                   param_2);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 1;
      } while ((int)uVar6 < (local_res10->ChildNodes).ArrayNum);
    }
  }
  return;
}

// RecursiveFindAttenuation @ 1486e3d80

void __thiscall
USoundCue::RecursiveFindAttenuation
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeAttenuation *pUStackX_10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = USoundNodeAttenuation::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      pUStackX_10 = (USoundNodeAttenuation *)0x0;
    }
    else {
      pUStackX_10 = (USoundNodeAttenuation *)param_1;
      TArray<USoundNodeAttenuation_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeAttenuation_*_const_&>(param_2,&pUStackX_10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeAttenuation>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// RecursiveFindAttenuation @ 1486e3d90

void __thiscall
USoundCue::RecursiveFindAttenuation
          (USoundCue *this,USoundNode *param_1,
          TArray<USoundNodeAttenuation_const_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  uint uVar7;
  USoundNodeAttenuation *pUStackX_10;
  
  if (param_1 != (USoundNode *)0x0) {
    pUVar5 = USoundNodeAttenuation::StaticClass();
    iVar3 = (int)pUVar5->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar5->_padding_)) {
      pUStackX_10 = (USoundNodeAttenuation *)0x0;
    }
    else {
      pUStackX_10 = (USoundNodeAttenuation *)param_1;
      TArray<USoundNodeAttenuation_const_*,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<USoundNodeAttenuation_const_*_const_&>(param_2,&pUStackX_10);
    }
    iVar3 = (**(code **)(param_1->_padding_ + 0x300))(param_1);
    uVar7 = 0;
    if (0 < (param_1->ChildNodes).ArrayNum) {
      lVar6 = 0;
      do {
        if (iVar3 <= lVar6) {
          return;
        }
        uVar4 = 0;
        if ((int)uVar7 < (param_1->ChildNodes).ArrayNum) {
          uVar4 = ~uVar7 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        RecursiveFindNode<USoundNodeAttenuation>
                  (this,*(USoundNode **)((param_1->ChildNodes).AllocatorInstance.Data + lVar6 * 8),
                   param_2);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 1;
      } while ((int)uVar7 < (param_1->ChildNodes).ArrayNum);
    }
  }
  return;
}

// RecursiveFindPathToNode @ 1486e3da0

bool __thiscall
USoundCue::RecursiveFindPathToNode
          (USoundCue *this,USoundNode *param_1,ulong64 param_2,ulong64 param_3,
          TArray<USoundNode_*,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  USoundNode *pUVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint uVar8;
  ulong64 uVar9;
  uint uVar10;
  longlong lVar11;
  USoundNode *local_res10;
  
  pFVar2 = (param_4->AllocatorInstance).Data;
  local_res10 = param_1;
  if ((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
     ((FScriptContainerElement *)&local_res10 < pFVar2 + (longlong)param_4->ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  iVar7 = param_4->ArrayNum;
  piVar1 = &param_4->ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_4->AllocatorInstance,piVar1);
  }
  param_4->ArrayNum = iVar7 + 1;
  *(USoundNode **)((param_4->AllocatorInstance).Data + (longlong)iVar7 * 8) = local_res10;
  if (param_2 == param_3) {
LAB_1486e3fba:
    bVar5 = true;
  }
  else {
    uVar10 = 0;
    if (0 < (local_res10->ChildNodes).ArrayNum) {
      lVar11 = 0;
      do {
        pUVar3 = local_res10;
        uVar8 = 0;
        if ((int)uVar10 < (local_res10->ChildNodes).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        pUVar3 = *(USoundNode **)((pUVar3->ChildNodes).AllocatorInstance.Data + lVar11);
        if (pUVar3 != (USoundNode *)0x0) {
          uVar9 = USoundNode::GetNodeWaveInstanceHash(param_2,pUVar3,uVar10);
          bVar5 = RecursiveFindPathToNode(this,pUVar3,uVar9,param_3,param_4);
          if (bVar5) goto LAB_1486e3fba;
        }
        uVar10 = uVar10 + 1;
        lVar11 = lVar11 + 8;
      } while ((int)uVar10 < (local_res10->ChildNodes).ArrayNum);
    }
    if (param_4->ArrayNum < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    uVar10 = param_4->ArrayNum - 1;
    pFVar2 = (param_4->AllocatorInstance).Data + (longlong)(int)uVar10 * 8;
    iVar7 = ~uVar10 + param_4->ArrayNum;
    if (iVar7 != 0) {
      memmove(pFVar2,pFVar2 + 8,(longlong)iVar7 << 3);
    }
    param_4->ArrayNum = param_4->ArrayNum + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
    bVar5 = false;
  }
  return bVar5;
}

// ReleaseRetainedAudio @ 1486e6be0

void __thiscall USoundCue::ReleaseRetainedAudio(USoundCue *this)

{
  USoundNode *pUVar1;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x348))(pUVar1,1);
  }
  this->bIsRetainingAudio = '\0';
  return;
}

// RetainSoundCue @ 1486ebe00

void __thiscall USoundCue::RetainSoundCue(USoundCue *this)

{
  USoundNode *pUVar1;
  
  pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
  if (pUVar1 != (USoundNode *)0x0) {
    (**(code **)(pUVar1->_padding_ + 0x338))(pUVar1,1);
  }
  this->bIsRetainingAudio = '\x01';
  return;
}

// Serialize @ 1486ecc60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall USoundCue::Serialize(USoundCue *this,FArchive *param_1)

{
  USoundNode *pUVar1;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar2;
  FArchive *pFVar3;
  FArchive *pFVar4;
  undefined4 uVar5;
  undefined1 auStack_1e8 [32];
  FStripDataFlags local_1c8 [4];
  FSlotBase local_1c0;
  FSlotBase local_1b8 [2];
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar2 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1c0.StructuredArchive = *(FStructuredArchive **)FVar2;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_1c0);
  if (((pFVar3->field_0x28 & 4) != 0) ||
     ((*(longlong *)&pFVar3->field_0x68 != 0 &&
      (*(longlong *)(*(longlong *)&pFVar3->field_0x68 + 0x10) != 0)))) {
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    if (pUVar1 == (USoundNode *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(pUVar1->_padding_ + 0x2c8))();
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar5;
    CacheAggregateValues(this);
  }
  local_1b8[0].StructuredArchive = local_1c0.StructuredArchive;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  UObject::Serialize((UObject *)this,pFVar4);
  if (0x1e4 < *(int *)&pFVar3->field_0x40) {
    FStripDataFlags::FStripDataFlags
              (local_1c8,(FStructuredArchiveSlot)local_1c0.StructuredArchive,'\0',
               &GOldestLoadablePackageFileUEVersion);
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 1486ecd60

void __thiscall USoundCue::Serialize(USoundCue *this,FStructuredArchiveRecord param_1)

{
  USoundNode *pUVar1;
  FArchive *pFVar2;
  FArchive *pFVar3;
  undefined4 uVar4;
  FSlotBase local_res10;
  FSlotBase local_res18 [2];
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if (((pFVar2->field_0x28 & 4) != 0) ||
     ((*(longlong *)&pFVar2->field_0x68 != 0 &&
      (*(longlong *)(*(longlong *)&pFVar2->field_0x68 + 0x10) != 0)))) {
    pUVar1 = (this->FirstNode).field0_0x0.DebugPtr;
    if (pUVar1 == (USoundNode *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(pUVar1->_padding_ + 0x2c8))();
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar4;
    CacheAggregateValues(this);
  }
  local_res18[0].StructuredArchive = local_res10.StructuredArchive;
  pFVar3 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
  UObject::Serialize((UObject *)this,pFVar3);
  if (0x1e4 < *(int *)&pFVar2->field_0x40) {
    FStripDataFlags::FStripDataFlags
              ((FStripDataFlags *)local_res18,(FStructuredArchiveSlot)local_res10.StructuredArchive,
               '\0',&GOldestLoadablePackageFileUEVersion);
  }
  return;
}

// ShouldApplyInteriorVolumes @ 1486f0c80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall USoundCue::ShouldApplyInteriorVolumes(USoundCue *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_28;
  
  if (!(bool)this->bShouldApplyInteriorVolumesCached) {
    this->field_0x568 = this->field_0x568 | 0x80;
    lVar4 = (**(code **)(this->_padding_ + 0x330))();
    if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x50) & 0x20) != 0)) {
      this->bShouldApplyInteriorVolumes = '\x01';
      return this->bShouldApplyInteriorVolumes;
    }
    this->bShouldApplyInteriorVolumes = '\0';
    local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.ArrayNum = 0;
    local_28.ArrayMax = 0;
    GetObjectsWithOuter((UObjectBase *)this,&local_28,true,RF_NoFlags,Borrowed);
    iVar3 = local_28.ArrayNum;
    pFVar1 = local_28.AllocatorInstance.Data + (longlong)local_28.ArrayNum * 8;
    FVar6.Data = local_28.AllocatorInstance.Data;
    do {
      if (local_28.ArrayNum != iVar3) {
        `TCheckedPointerIterator<UObject_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (FVar6.Data == pFVar1) goto LAB_1486f0d7c;
      lVar4 = *(longlong *)FVar6.Data;
      if (lVar4 != 0) {
        pUVar5 = USoundNodeSoundClass::StaticClass();
        iVar2 = (int)pUVar5->_padding_;
        if ((((iVar2 <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8) ==
              &pUVar5->_padding_)) && (*(longlong *)(lVar4 + 0x48) != 0)) &&
           ((*(byte *)(*(longlong *)(lVar4 + 0x48) + 0x50) & 0x20) != 0)) goto LAB_1486f0d75;
      }
      FVar6.Data = FVar6.Data + 8;
    } while( true );
  }
LAB_1486f0d9f:
  return this->bShouldApplyInteriorVolumes;
LAB_1486f0d75:
  this->bShouldApplyInteriorVolumes = '\x01';
LAB_1486f0d7c:
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  goto LAB_1486f0d9f;
}

// StaticAudioQualityChanged @ 1486f1610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl USoundCue::StaticAudioQualityChanged(int param_1)

{
  code *pcVar1;
  bool bVar2;
  EInternalObjectFlags EVar3;
  uint uVar4;
  UClass *pUVar5;
  longlong lVar6;
  FAudioCommandFence local_res10 [3];
  TObjectIterator<USoundCue> local_28;
  
  if (CachedQualityLevel != param_1) {
    local_res10[0].Fence.Pimpl.Reference =
         (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)0x0;
    FAudioCommandFence::BeginFence(local_res10);
    FAudioCommandFence::Wait(local_res10,false);
    CachedQualityLevel = param_1;
    if (GEngine != (UEngine *)0x0) {
      local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_28.ObjectArray.ArrayNum = 0;
      local_28.ObjectArray.ArrayMax = 0;
      local_28.Index = 0xffffffff;
      EVar3 = UE::GetAsyncLoadingInternalFlagsExclusion();
      pUVar5 = StaticClass();
      GetObjectsOfClass(pUVar5,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                        EVar3 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
      while( true ) {
        TObjectIterator<USoundCue>::Advance(&local_28);
        lVar6 = (longlong)local_28.Index;
        if (local_28.Index < 0) break;
        if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
        uVar4 = 0;
        if (local_28.Index < local_28.ObjectArray.ArrayNum) {
          uVar4 = (uint)~local_28.Index >> 0x1f;
        }
        if (uVar4 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        AudioQualityChanged(*(USoundCue **)(local_28.ObjectArray.AllocatorInstance.Data + lVar6 * 8)
                           );
      }
      if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
      }
    }
    FAudioCommandFence::~FAudioCommandFence(local_res10);
  }
  return;
}

// StaticRegisterNativesUSoundCue @ 1486f1860

void __cdecl USoundCue::StaticRegisterNativesUSoundCue(void)

{
  return;
}

