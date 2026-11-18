// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// AddActiveComponent @ 1478b1d30

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
FForceFeedbackManager::AddActiveComponent
          (FForceFeedbackManager *this,UForceFeedbackComponent *param_1)

{
  TObjectPtr<UForceFeedbackComponent> local_res10 [3];
  
  local_res10[0].field0_0x0 = (TObjectPtr<UForceFeedbackComponent>_u_0)param_1;
  TArray<TObjectPtr<UForceFeedbackComponent>,TSizedDefaultAllocator<32>_>::
  AddUniqueImpl<TObjectPtr<UForceFeedbackComponent>_const_&>
            (&this->ActiveForceFeedbackComponents,local_res10);
  return;
}

// AddReferencedObjects @ 1478b3230

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
FForceFeedbackManager::AddReferencedObjects
          (FForceFeedbackManager *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->_padding_,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->World).field0_0x0.DebugPtr,
             *(undefined4 *)&(this->ActiveForceFeedbackComponents).AllocatorInstance.Data,0,0);
  return;
}

// DrawDebug @ 1478c8db0

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
FForceFeedbackManager::DrawDebug
          (FForceFeedbackManager *this,TVector<double> *param_1,FDisplayDebugManager *param_2,
          FPlatformUserId param_3)

{
  int iVar1;
  UForceFeedbackComponent *this_00;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  float local_res8 [2];
  TVector<double> *local_res10;
  FDisplayDebugManager *local_res18;
  FForceFeedbackValues local_e8;
  FName local_d8;
  FName local_d0;
  FScriptContainerElement *local_c8;
  FString local_c0;
  TVector<double>_u_0 local_a8;
  FString local_88;
  FString local_78 [4];
  
  pFVar3 = (this->ActiveForceFeedbackComponents).AllocatorInstance.Data;
  iVar1 = (this->ActiveForceFeedbackComponents).ArrayNum;
  local_c8 = pFVar3 + (longlong)iVar1 * 8;
  local_res10 = param_1;
  local_res18 = param_2;
  while( true ) {
    pFVar2 = local_c8;
    if ((this->ActiveForceFeedbackComponents).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UForceFeedbackComponent>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    this_00 = *(UForceFeedbackComponent **)pFVar3;
    if ((this_00 != (UForceFeedbackComponent *)0x0) &&
       ((this_00->ForceFeedbackEffect).field0_0x0.DebugPtr != (UForceFeedbackEffect *)0x0)) {
      local_a8._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      local_e8.LeftLarge = 0.0;
      local_e8.LeftSmall = 0.0;
      local_e8.RightLarge = 0.0;
      local_e8.RightSmall = 0.0;
      local_a8._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_a8._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      UForceFeedbackComponent::Update(this_00,(TVector<double> *)&local_a8._s_0,&local_e8,param_3);
      UForceFeedbackEffect::GetDuration((this_00->ForceFeedbackEffect).field0_0x0.DebugPtr);
      local_a8._s_0.Z = (double)*(undefined8 *)&this_00->field_0x220;
      local_d8.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
      local_d8.Number = *(uint *)&this_00->field_0x1c;
      ::FName::ToString(&local_d8,local_78);
      local_d0 = (FName)((this_00->ForceFeedbackEffect).field0_0x0.DebugPtr)->_padding_;
      ::FName::ToString(&local_d0,&local_88);
      ::FString::PrintfImpl
                (&local_c0,L"%s %s %.2f %.2f %s %.2f - LL: %.2f LS: %.2f RL: %.2f RS: %.2f");
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_78[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78[0].Data.AllocatorInstance.Data);
      }
      local_res8[0] = 0.0;
      FDisplayDebugManager::DrawString(local_res18,&local_c0,local_res8);
      param_1 = local_res10;
      if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c0.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// Get @ 1478cf3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FForceFeedbackManager * __cdecl FForceFeedbackManager::Get(UWorld *param_1,bool param_2)

{
  FScriptContainerElement *pFVar1;
  UWorld *pUVar2;
  code *pcVar3;
  int iVar4;
  FDelegateHandle FVar5;
  FForceFeedbackManager *pFVar6;
  FForceFeedbackManager *pFVar7;
  longlong lVar8;
  ForAnyElementType FVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FForceFeedbackManager *local_38 [2];
  
  iVar4 = PerWorldForceFeedbackManagers.ArrayNum;
  uVar10 = (ulonglong)PerWorldForceFeedbackManagers.ArrayNum;
  pFVar7 = (FForceFeedbackManager *)0x0;
  local_38[0] = (FForceFeedbackManager *)0x0;
  pFVar1 = PerWorldForceFeedbackManagers.AllocatorInstance.Data + uVar10 * 8;
  FVar9.Data = PerWorldForceFeedbackManagers.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar4) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FForceFeedbackManager_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
      uVar10 = (ulonglong)(uint)PerWorldForceFeedbackManagers.ArrayNum;
    }
    pFVar6 = local_38[0];
    if (FVar9.Data == pFVar1) break;
    pUVar2 = ((*(FForceFeedbackManager **)FVar9.Data)->World).field0_0x0.DebugPtr;
    if (pUVar2 == (UWorld *)0x0) {
      bVar11 = param_1 == (UWorld *)0x0;
    }
    else {
      bVar11 = pUVar2 == param_1;
    }
    pFVar6 = *(FForceFeedbackManager **)FVar9.Data;
    if (bVar11) break;
    FVar9.Data = FVar9.Data + 8;
  }
  local_38[0] = pFVar6;
  if ((local_38[0] == (FForceFeedbackManager *)0x0) && (param_2)) {
    if (OnWorldCleanupHandle.ID == 0) {
      FVar5 = TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
              ::AddStatic<>((TMulticastDelegateRegistration<void___cdecl(UWorld_*,bool,bool),FDefaultDelegateUserPolicy>
                             *)&FWorldDelegates::OnWorldCleanup,
                            (_func___cdecl_void_UWorld_ptr_bool_bool *)local_res20);
                    /* WARNING: Load size is inaccurate */
      OnWorldCleanupHandle.ID = *FVar5.ID;
    }
    pFVar6 = ::operator_new(0x30);
    if (pFVar6 != (FForceFeedbackManager *)0x0) {
      FTickableGameObject::FTickableGameObject((FTickableGameObject *)pFVar6,NewObject);
      *(undefined2 *)&pFVar6->_padding_ = 0;
      pFVar6->_padding_ = (longlong)&___7FGCObject__6B_;
      FGCObject::RegisterGCObject((FGCObject *)&pFVar6->_padding_);
      pFVar6->_padding_ = (longlong)&_vftable__for__FTickableGameObject__;
      pFVar6->_padding_ = (longlong)&_vftable__for__FGCObject__;
      (pFVar6->World).field0_0x0.DebugPtr = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (pFVar6->ActiveForceFeedbackComponents).AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (pFVar6->ActiveForceFeedbackComponents).ArrayNum = 0;
      (pFVar6->ActiveForceFeedbackComponents).ArrayMax = 0;
      pFVar7 = pFVar6;
    }
    local_38[0] = pFVar7;
    if (((PerWorldForceFeedbackManagers.AllocatorInstance.Data <=
          (FScriptContainerElement *)local_38) &&
        ((FScriptContainerElement *)local_38 <
         PerWorldForceFeedbackManagers.AllocatorInstance.Data +
         (longlong)PerWorldForceFeedbackManagers.ArrayMax * 8)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar11)) {
      pcVar3 = (code *)swi(3);
      pFVar7 = (FForceFeedbackManager *)(*pcVar3)();
      return pFVar7;
    }
    if (PerWorldForceFeedbackManagers.ArrayNum == PerWorldForceFeedbackManagers.ArrayMax) {
      PerWorldForceFeedbackManagers.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&PerWorldForceFeedbackManagers.AllocatorInstance,
                      &PerWorldForceFeedbackManagers.ArrayMax);
    }
    lVar8 = (longlong)PerWorldForceFeedbackManagers.ArrayNum;
    PerWorldForceFeedbackManagers.ArrayNum = PerWorldForceFeedbackManagers.ArrayNum + 1;
    *(FForceFeedbackManager **)(PerWorldForceFeedbackManagers.AllocatorInstance.Data + lVar8 * 8) =
         local_38[0];
  }
  return local_38[0];
}

// GetReferencerName @ 1478da410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FForceFeedbackManager::GetReferencerName
          (FForceFeedbackManager *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FForceFeedbackManager");
  return __return_storage_ptr__;
}

// GetStatId @ 1478dbf90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TStatId __thiscall FForceFeedbackManager::GetStatId(FForceFeedbackManager *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FForceFeedbackManager::GetStatId(void)const_::_2_::FStat_FForceFeedbackManager>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FForceFeedbackManager ==
          (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FForceFeedbackManager::GetStatId(void)const_::_2_::FStat_FForceFeedbackManager>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FForceFeedbackManager");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FForceFeedbackManager,*pFVar1,
                   L"FForceFeedbackManager","STATGROUP_Tickables","STATCAT_Advanced",L"Tickables",
                   true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FForceFeedbackManager;
  if (StatPtr_FForceFeedbackManager ==
      (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FForceFeedbackManager::GetStatId(void)const_::_2_::FStat_FForceFeedbackManager>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FForceFeedbackManager");
    FVar2 = (FThreadSafeStaticStat<_private:_virtual_struct_TStatId___cdecl_FForceFeedbackManager::GetStatId(void)const_::_2_::FStat_FForceFeedbackManager>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FForceFeedbackManager,*pFVar1,
                         L"FForceFeedbackManager","STATGROUP_Tickables","STATCAT_Advanced",
                         L"Tickables",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetTickableGameObjectWorld @ 1478dd920

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall FForceFeedbackManager::GetTickableGameObjectWorld(FForceFeedbackManager *this)

{
  return (this->World).field0_0x0.DebugPtr;
}

// IsTickable @ 1478e1a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FForceFeedbackManager::IsTickable(FForceFeedbackManager *this)

{
  return 0 < (this->ActiveForceFeedbackComponents).ArrayNum;
}

// OnWorldCleanup @ 1478e67c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FForceFeedbackManager::OnWorldCleanup(UWorld *param_1,bool param_2,bool param_3)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  if (0 < PerWorldForceFeedbackManagers.ArrayNum) {
    lVar7 = 0;
    iVar5 = PerWorldForceFeedbackManagers.ArrayNum;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         iVar5 = PerWorldForceFeedbackManagers.ArrayNum, bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      plVar1 = *(longlong **)(PerWorldForceFeedbackManagers.AllocatorInstance.Data + lVar7);
      if ((UWorld *)plVar1[3] == (UWorld *)0x0) {
        bVar3 = param_1 == (UWorld *)0x0;
      }
      else {
        bVar3 = (UWorld *)plVar1[3] == param_1;
      }
      if (bVar3) {
        (**(code **)(*plVar1 + 0x28))(plVar1,1);
        uVar4 = 0;
        if ((int)uVar6 < PerWorldForceFeedbackManagers.ArrayNum) {
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
        iVar5 = (PerWorldForceFeedbackManagers.ArrayNum - uVar6) + -1;
        if (1 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          memmove(PerWorldForceFeedbackManagers.AllocatorInstance.Data + (longlong)(int)uVar6 * 8,
                  PerWorldForceFeedbackManagers.AllocatorInstance.Data +
                  (longlong)(PerWorldForceFeedbackManagers.ArrayNum - iVar5) * 8,
                  (longlong)iVar5 << 3);
        }
        PerWorldForceFeedbackManagers.ArrayNum = PerWorldForceFeedbackManagers.ArrayNum + -1;
        return;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < iVar5);
  }
  return;
}

// RemoveActiveComponent @ 1478ea3d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FForceFeedbackManager::RemoveActiveComponent
          (FForceFeedbackManager *this,UForceFeedbackComponent *param_1)

{
  TObjectPtr<UForceFeedbackComponent> local_res10 [3];
  
  local_res10[0].field0_0x0 = (TObjectPtr<UForceFeedbackComponent>_u_0)param_1;
  TArray<TObjectPtr<UForceFeedbackComponent>,TSizedDefaultAllocator<32>_>::RemoveSwap
            (&this->ActiveForceFeedbackComponents,local_res10,Default);
  return;
}

// Tick @ 1478f8d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FForceFeedbackManager::Tick(FForceFeedbackManager *this,float param_1)

{
  int *piVar1;
  int iVar2;
  UActorComponent *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  atomic<double> aVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  UActorComponent *local_res8;
  FForceFeedbackManager *local_res18 [2];
  FReadAccessScope local_78 [2];
  
  uVar10 = (this->ActiveForceFeedbackComponents).ArrayNum - 1;
  if (-1 < (int)uVar10) {
    lVar12 = (longlong)(int)uVar10;
    lVar11 = lVar12 * 8;
    do {
      uVar8 = 0;
      if ((int)uVar10 < (this->ActiveForceFeedbackComponents).ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(UActorComponent **)
                 ((this->ActiveForceFeedbackComponents).AllocatorInstance.Data + lVar11);
      if (this_00 == (UActorComponent *)0x0) {
        uVar8 = 0;
        if ((int)uVar10 < (this->ActiveForceFeedbackComponents).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->ActiveForceFeedbackComponents).ArrayNum;
        pFVar3 = (this->ActiveForceFeedbackComponents).AllocatorInstance.Data;
        iVar9 = ~uVar10 + iVar2;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar3 + lVar12 * 8,pFVar3 + (longlong)(iVar2 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->ActiveForceFeedbackComponents).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else {
        if ((UForceFeedbackEffect *)this_00[3]._padding_ != (UForceFeedbackEffect *)0x0) {
          fVar13 = UForceFeedbackEffect::GetDuration((UForceFeedbackEffect *)this_00[3]._padding_);
          aVar5 = FApp::DeltaTime;
          if ((this_00[3]._padding_ & 8) == 0) {
            aVar5 = (atomic<double>)(double)param_1;
          }
          fVar14 = (float)((double)*(float *)&this_00[4].PrimaryComponentTick._padding_ +
                          (double)aVar5);
          *(float *)&this_00[4].PrimaryComponentTick._padding_ = fVar14;
          if ((fVar14 <= fVar13) || (((this_00[3]._padding_ & 4) != 0 && (fVar13 != 0.0))))
          goto LAB_1478f8f8a;
        }
        uVar8 = 0;
        if ((int)uVar10 < (this->ActiveForceFeedbackComponents).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar2 = (this->ActiveForceFeedbackComponents).ArrayNum;
        pFVar3 = (this->ActiveForceFeedbackComponents).AllocatorInstance.Data;
        iVar9 = ~uVar10 + iVar2;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar3 + lVar12 * 8,pFVar3 + (longlong)(iVar2 - iVar9) * 8,(longlong)iVar9 << 3);
        }
        piVar1 = &(this->ActiveForceFeedbackComponents).ArrayNum;
        *piVar1 = *piVar1 + -1;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this_00[4]._padding_,
                   local_78);
        lVar6 = this_00[4].PrimaryComponentTick._padding_;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                  (local_78);
        if (0 < (int)lVar6) {
          local_res8 = this_00;
          TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                    ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this_00[4]._padding_,
                     &local_res8);
        }
        UActorComponent::SetActiveFlag(this_00,false);
        lVar6 = this_00[3]._padding_;
        *(undefined4 *)&this_00[4].PrimaryComponentTick._padding_ = 0;
        if ((lVar6 & 1) != 0) {
          (**(code **)(this_00->_padding_ + 0x4a0))(this_00,0);
        }
      }
LAB_1478f8f8a:
      lVar12 = lVar12 + -1;
      lVar11 = lVar11 + -8;
      uVar10 = uVar10 - 1;
    } while (-1 < (int)uVar10);
  }
  if ((this->ActiveForceFeedbackComponents).ArrayNum == 0) {
    local_res18[0] = this;
    TArray<FForceFeedbackManager_*,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&PerWorldForceFeedbackManagers,local_res18,Default);
    (**(code **)(this->_padding_ + 0x28))(this,1);
  }
  return;
}

// Update @ 1478faf10

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
FForceFeedbackManager::Update
          (FForceFeedbackManager *this,TVector<double> *param_1,FForceFeedbackValues *param_2,
          FPlatformUserId param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_48;
  
  pFVar3 = (this->ActiveForceFeedbackComponents).AllocatorInstance.Data;
  iVar2 = (this->ActiveForceFeedbackComponents).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ActiveForceFeedbackComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UForceFeedbackComponent>_const_,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(UForceFeedbackComponent **)pFVar3 != (UForceFeedbackComponent *)0x0) {
      local_48._s_0.X = (param_1->field0_0x0)._s_0.X;
      local_48._s_0.Y = (param_1->field0_0x0)._s_0.Y;
      local_48._s_0.Z = (param_1->field0_0x0)._s_0.Z;
      UForceFeedbackComponent::Update
                (*(UForceFeedbackComponent **)pFVar3,(TVector<double> *)&local_48._s_0,param_2,
                 param_3);
    }
    pFVar3 = pFVar3 + 8;
  }
  return;
}

