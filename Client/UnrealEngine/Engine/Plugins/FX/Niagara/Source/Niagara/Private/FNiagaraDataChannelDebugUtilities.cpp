// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 10

// BeginFrame @ 1490cd660

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

void __cdecl
FNiagaraDataChannelDebugUtilities::BeginFrame(FNiagaraWorldManager *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FNiagaraWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldMan",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelManager::BeginFrame((param_1->DataChannelManager).Ptr,param_2);
  return;
}

// DumpAllWritesToLog @ 1490eef80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FNiagaraDataChannelDebugUtilities::DumpAllWritesToLog(void)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataChannelDebugUtilities *pFVar2;
  UObject *this;
  FText *this_00;
  FString *pFVar3;
  ulonglong uVar4;
  FWeakObjectPtr *this_01;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  FWeakObjectPtr *pFVar8;
  undefined1 local_res8 [8];
  uint local_res10;
  uint local_res18;
  FScriptContainerElement *local_res20;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FText local_58;
  
  pFVar2 = Get();
  if ((pFVar2->FrameData).ArrayNum == 0) {
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return;
    }
  }
  else {
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    local_res18 = (pFVar2->FrameData).ArrayNum;
    uVar4 = (ulonglong)(int)local_res18;
    pFVar6 = (pFVar2->FrameData).AllocatorInstance.Data;
    pFVar1 = pFVar6 + uVar4 * 0x18;
    pFVar7 = pFVar6 + 0x10;
    while( true ) {
      local_res20 = pFVar6;
      if ((pFVar2->FrameData).ArrayNum != (int)uVar4) {
        `TCheckedPointerIterator<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar6 == pFVar1) break;
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      local_res10 = *(uint *)pFVar7;
      uVar4 = (ulonglong)(int)local_res10;
      this_01 = *(FWeakObjectPtr **)(pFVar7 + -8);
      pFVar8 = this_01 + uVar4 * 6;
      while( true ) {
        if (*(int *)pFVar7 != (int)uVar4) {
          `TCheckedPointerIterator<FNiagaraDataChannelDebugUtilities::FChannelWriteRequest_const_,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (this_01 == pFVar8) break;
        ToJson(&local_68,(FNiagaraDataChannelGameData *)this_01[1]);
        if (4 < (byte)LogNiagara._0_1_) {
          this = FWeakObjectPtr::Get(this_01);
          if (this == (UObject *)0x0) {
            ::FString::FString(&local_78,L"None");
          }
          else {
            UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_78,(UObject *)0x0);
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            TGEnum = StaticEnum<enum_ETickingGroup>();
            _Init_thread_footer(&::_TSS0);
          }
          this_00 = UEnum::GetDisplayNameTextByValue
                              (TGEnum,&local_58,(longlong)this_01[3].ObjectSerialNumber);
          pFVar3 = FText::ToString(this_00);
          local_88.Data = (FScriptContainerElement *)0x0;
          local_80 = (pFVar3->Data).ArrayNum;
          lVar5 = (longlong)local_80;
          pFVar6 = (pFVar3->Data).AllocatorInstance.Data;
          if (local_80 == 0) {
            local_7c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_80,0,&local_88,local_80,&local_7c);
            memcpy(local_88.Data,pFVar6,lVar5 * 2);
          }
          if (local_58.TextData.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        uVar4 = (ulonglong)local_res10;
        this_01 = this_01 + 6;
      }
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar6 = local_res20 + 0x18;
      uVar4 = (ulonglong)local_res18;
      pFVar7 = pFVar7 + 0x18;
    }
  }
  return;
}

// EndFrame @ 1490f0260

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

void __cdecl
FNiagaraDataChannelDebugUtilities::EndFrame(FNiagaraWorldManager *param_1,float param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FNiagaraWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldMan",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelManager::EndFrame((param_1->DataChannelManager).Ptr,param_2);
  return;
}

// FindDataChannelHandler @ 1490f9410

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraDataChannelHandler * __cdecl
FNiagaraDataChannelDebugUtilities::FindDataChannelHandler
          (FNiagaraWorldManager *param_1,UNiagaraDataChannel *param_2)

{
  code *pcVar1;
  bool bVar2;
  UNiagaraDataChannelHandler *pUVar3;
  
  if (param_1 == (FNiagaraWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldMan",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                       ,0x3b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UNiagaraDataChannelHandler *)(*pcVar1)();
      return pUVar3;
    }
  }
  pUVar3 = FNiagaraDataChannelManager::FindDataChannelHandler
                     ((param_1->DataChannelManager).Ptr,param_2);
  return pUVar3;
}

// Get @ 1491023e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FNiagaraDataChannelDebugUtilities * __cdecl FNiagaraDataChannelDebugUtilities::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FNiagaraDataChannelDebugUtilities *pFVar3;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _Singleton = 0;
    _DAT_155272b00 = 0;
    DAT_155272b08 =
         &`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
          ::__l2::Singleton;
    atexit(`TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy'::__l2::
           _dynamic_atexit_destructor_for__Singleton__);
    _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((DAT_155272b08 == (TLazySingleton<class_FNiagaraDataChannelDebugUtilities> *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\LazySingleton.h"
                         ,0x6d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FNiagaraDataChannelDebugUtilities *)(*pcVar1)();
    return pFVar3;
  }
  return (FNiagaraDataChannelDebugUtilities *)DAT_155272b08;
}

// LogWrite @ 149118710

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FNiagaraDataChannelDebugUtilities::LogWrite
          (FNiagaraDataChannelPublishRequest *param_1,UNiagaraDataChannel *param_2,
          ETickingGroup *param_3)

{
  int *piVar1;
  FScriptContainerElement *_Src;
  FWeakObjectPtr FVar2;
  FWeakObjectPtr FVar3;
  FNiagaraDataChannelGameData *pFVar4;
  code *pcVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  int iVar8;
  TArray<FNiagaraDataChannelDebugUtilities::FFrameDebugData,TSizedDefaultAllocator<32>_> *this;
  TSharedRef<FNiagaraDataChannelGameData,1> *pTVar9;
  FString *pFVar10;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar11;
  FWeakObjectPtr *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  UNiagaraDataChannel *local_res20;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr FStack_158;
  undefined2 local_150;
  undefined1 local_14e;
  ETickingGroup local_14c;
  FString local_148;
  TVector<float>_u_0 local_138;
  TVector<float>_u_0 local_128;
  FString local_118;
  undefined8 local_108;
  FSharedReferencer<1> local_100;
  FNiagaraDataChannelGameData local_f8;
  TSharedRef<FNiagaraDataChannelGameData,1> local_b8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_a8;
  FString local_98;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FWeakObjectPtr local_48;
  FWeakObjectPtr FStack_40;
  
  this = &Get()->FrameData;
  iVar8 = NDCCVars::FrameDataToCapture;
  iVar14 = this->ArrayNum;
  piVar1 = &this->ArrayNum;
  if (NDCCVars::FrameDataToCapture < 1) {
    if (iVar14 != 0) {
      DestructItems<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int>
                ((FFrameDebugData *)(this->AllocatorInstance).Data,iVar14);
      *piVar1 = 0;
      if (this->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,0,&this->AllocatorInstance,0,&this->ArrayMax);
      }
    }
    goto LAB_149118d0a;
  }
  if (NDCCVars::FrameDataToCapture < iVar14) {
    if (iVar14 < NDCCVars::FrameDataToCapture) {
      iVar14 = NDCCVars::FrameDataToCapture - iVar14;
      iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,8,iVar14,&this->AllocatorInstance,piVar1,&this->ArrayMax);
      DefaultConstructItems<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int>
                ((this->AllocatorInstance).Data + (longlong)iVar8 * 0x18,iVar14);
    }
    else {
      if (NDCCVars::FrameDataToCapture < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)NDCCVars::FrameDataToCapture);
      }
      if (NDCCVars::FrameDataToCapture < iVar14) {
        uVar15 = iVar14 - NDCCVars::FrameDataToCapture;
        if (((int)(uVar15 | NDCCVars::FrameDataToCapture) < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (uVar15 != 0) {
          TArray<FNiagaraDataChannelDebugUtilities::FFrameDebugData,TSizedDefaultAllocator<32>_>::
          RemoveAtImpl(this,iVar8,uVar15);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,*piVar1,&this->ArrayMax);
        }
      }
    }
  }
  iVar14 = *piVar1;
  iVar8 = 0;
  if (iVar14 == 0) {
LAB_149118908:
    if (iVar8 == NDCCVars::FrameDataToCapture) {
      if ((iVar8 < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar13 = (this->AllocatorInstance).Data;
      DestructItems<FNiagaraDataChannelDebugUtilities::FChannelWriteRequest,int>
                (*(FChannelWriteRequest **)(pFVar13 + 8),*(int *)(pFVar13 + 0x10));
      if (*(void **)(pFVar13 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar13 + 8));
      }
      iVar14 = this->ArrayNum + -1;
      if (iVar14 != 0) {
        memmove(pFVar13,pFVar13 + 0x18,(longlong)iVar14 * 0x18);
      }
      iVar14 = this->ArrayNum + -1;
      this->ArrayNum = iVar14;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,&this->AllocatorInstance,iVar14,&this->ArrayMax);
    }
    iVar14 = this->ArrayNum;
    if (iVar14 == this->ArrayMax) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&this->AllocatorInstance,&this->ArrayMax);
    }
    this->ArrayNum = iVar14 + 1;
    pFVar13 = (this->AllocatorInstance).Data + (longlong)iVar14 * 0x18;
    DefaultConstructItems<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int>(pFVar13,1);
    *(ulong64 *)pFVar13 = GFrameCounter;
  }
  else {
    uVar15 = 0;
    if ((int)(iVar14 - 1U) < iVar14) {
      uVar15 = ~(iVar14 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = *piVar1;
    if (*(ulong64 *)((this->AllocatorInstance).Data + ((longlong)iVar8 + -1) * 0x18) !=
        GFrameCounter) goto LAB_149118908;
    uVar15 = 0;
    if ((int)(iVar8 - 1U) < iVar8) {
      uVar15 = ~(iVar8 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar13 = (this->AllocatorInstance).Data + (longlong)(*piVar1 + -1) * 0x18;
  }
  local_168.ObjectIndex = 0;
  local_168.ObjectSerialNumber = 0;
  local_160.ObjectIndex = 0;
  local_160.ObjectSerialNumber = 0;
  FStack_158.ObjectIndex = 0;
  FStack_158.ObjectSerialNumber = 0;
  local_150 = 0;
  local_14e = 0;
  local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Data.ArrayNum = 0;
  local_148.Data.ArrayMax = 0;
  local_res20 = param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_2 != (UNiagaraDataChannel *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_2);
  }
  FWeakObjectPtr::operator=(&local_168,(FObjectPtr)&local_res20);
  if (&local_148 != &param_1->DebugSource) {
    iVar14 = (param_1->DebugSource).Data.ArrayNum;
    _Src = (param_1->DebugSource).Data.AllocatorInstance.Data;
    local_148.Data.ArrayNum = iVar14;
    if ((iVar14 == 0) && (local_148.Data.ArrayMax == 0)) {
      local_148.Data.ArrayNum = 0;
      local_148.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar14,local_148.Data.ArrayMax,(ForAnyElementType *)&local_148,iVar14,
                 &local_148.Data.ArrayMax);
      if (iVar14 != 0) {
        memcpy(local_148.Data.AllocatorInstance.Data,_Src,(longlong)iVar14 * 2);
      }
    }
  }
  FVar6 = FStack_158;
  FVar2 = (FWeakObjectPtr)(param_1->GameData).Object;
  local_150._0_1_ = param_1->bVisibleToGame;
  local_150._1_1_ = param_1->bVisibleToCPUSims;
  local_14e = param_1->bVisibleToGPUSims;
  local_14c = *param_3;
  if (FVar2 == (FWeakObjectPtr)0x0) {
    if ((param_1->Data).Reference == (FNiagaraDataBuffer *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4015424745334898785>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                         ,0x61,"WriteRequest.Data");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      pTVar11 = UNiagaraDataChannel::GetLayoutInfo(param_2,&local_a8);
      pTVar9 = MakeShared<FNiagaraDataChannelGameData,1,TSharedPtr<FNiagaraDataChannelLayoutInfo,1>_const_>
                         (&local_b8,pTVar11);
      local_100.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
      local_160 = (FWeakObjectPtr)pTVar9->Object;
      if (local_100.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_100.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_100.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_108 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)&FStack_158,&local_100);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_100.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_a8.SharedReferenceCount.ReferenceController);
      if ((local_160 == (FWeakObjectPtr)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_128._0_8_ = *(undefined8 *)&(param_1->LwcTile).field0_0x0;
      local_128._s_0.Z = (param_1->LwcTile).field0_0x0._s_0.Z;
      FNiagaraDataChannelGameData::AppendFromDataSet
                ((FNiagaraDataChannelGameData *)local_160,(param_1->Data).Reference,
                 (TVector<float> *)&local_128._s_0);
    }
  }
  else {
    FVar3 = (FWeakObjectPtr)(param_1->GameData).SharedReferenceCount.ReferenceController;
    if (FVar3 != (FWeakObjectPtr)0x0) {
      LOCK();
      *(atomic<int> *)((longlong)FVar3 + 8) =
           (atomic<int>)((int)*(atomic<int> *)((longlong)FVar3 + 8) + 1);
      UNLOCK();
    }
    local_48 = local_160;
    FStack_40 = FStack_158;
    local_160 = FVar2;
    FStack_158 = FVar3;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)FVar6);
  }
  if (((*(FWeakObjectPtr **)(pFVar13 + 8) <= &local_168) &&
      (&local_168 < *(FWeakObjectPtr **)(pFVar13 + 8) + (longlong)*(int *)(pFVar13 + 0x14) * 6)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar14 = *(int *)(pFVar13 + 0x10);
  if (iVar14 == *(int *)(pFVar13 + 0x14)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x830,(ForAnyElementType *)(pFVar13 + 8),(int *)(pFVar13 + 0x14));
  }
  *(int *)(pFVar13 + 0x10) = iVar14 + 1;
  pFVar12 = (FWeakObjectPtr *)((longlong)iVar14 * 0x30 + *(ulong64 *)(pFVar13 + 8));
  *pFVar12 = local_168;
  pFVar12[1] = local_160;
  pFVar12[2] = FStack_158;
  if (FStack_158 != (FWeakObjectPtr)0x0) {
    LOCK();
    *(atomic<int> *)((longlong)FStack_158 + 8) =
         (atomic<int>)((int)*(atomic<int> *)((longlong)FStack_158 + 8) + 1);
    UNLOCK();
  }
  *(undefined1 *)&pFVar12[3].ObjectIndex = (undefined1)local_150;
  *(undefined1 *)((longlong)&pFVar12[3].ObjectIndex + 1) = local_150._1_1_;
  *(undefined1 *)((longlong)&pFVar12[3].ObjectIndex + 2) = local_14e;
  pFVar12[3].ObjectSerialNumber = local_14c;
  ::FString::FString((FString *)(pFVar12 + 4),&local_148);
  if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)FStack_158);
LAB_149118d0a:
  pFVar13 = (FScriptContainerElement *)0x0;
  if (0 < NDCCVars::LogWritesToOutputLog) {
    pFVar4 = (param_1->GameData).Object;
    if (pFVar4 == (FNiagaraDataChannelGameData *)0x0) {
      if ((param_1->Data).Reference == (FNiagaraDataBuffer *)0x0) {
        bVar7 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<4015424745334898812>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                           ,0x7c,"WriteRequest.Data");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else if (1 < NDCCVars::LogWritesToOutputLog) {
        pTVar11 = UNiagaraDataChannel::GetLayoutInfo(param_2,&local_88);
        local_f8.VariableData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8._padding_ = 0;
        local_f8._padding_ = 0;
        local_f8.LayoutInfo.Object = (FNiagaraDataChannelLayoutInfo *)0x0;
        local_f8.LayoutInfo.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)0x0;
        local_f8.VariableData.ArrayNum = 0;
        local_f8.VariableData.ArrayMax = 0;
        local_f8.NumElements = 0;
        local_f8.MaxElements = 0;
        local_f8.PrevNumElements = 0;
        FNiagaraDataChannelGameData::Init(&local_f8,pTVar11);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88.SharedReferenceCount.ReferenceController);
        local_138._0_8_ = *(undefined8 *)&(param_1->LwcTile).field0_0x0;
        local_138._s_0.Z = (param_1->LwcTile).field0_0x0._s_0.Z;
        FNiagaraDataChannelGameData::AppendFromDataSet
                  (&local_f8,(param_1->Data).Reference,(TVector<float> *)&local_138._s_0);
        pFVar10 = ToJson(&local_68,&local_f8);
        if (&local_78 != pFVar10) {
          pFVar13 = (pFVar10->Data).AllocatorInstance.Data;
          (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          (pFVar10->Data).ArrayNum = 0;
          (pFVar10->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_f8.LayoutInfo.SharedReferenceCount.ReferenceController);
        DestructItems<FNiagaraDataChannelVariableBuffer,int>
                  ((FNiagaraDataChannelVariableBuffer *)local_f8.VariableData.AllocatorInstance.Data
                   ,local_f8.VariableData.ArrayNum);
        if ((FNiagaraDataChannelVariableBuffer *)local_f8.VariableData.AllocatorInstance.Data !=
            (FNiagaraDataChannelVariableBuffer *)0x0) {
          FMemory::Free(local_f8.VariableData.AllocatorInstance.Data);
        }
        if ((longlong *)local_f8._padding_ != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)(local_f8._padding_ + 0xc);
          iVar14 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar14 == 1) {
            (**(code **)(*(longlong *)local_f8._padding_ + 8))(local_f8._padding_,1);
          }
        }
      }
    }
    else if (1 < NDCCVars::LogWritesToOutputLog) {
      pFVar10 = ToJson(&local_98,pFVar4);
      if (&local_78 != pFVar10) {
        pFVar13 = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
    if (4 < (byte)LogNiagara._0_1_) {
      if (param_2 == (UNiagaraDataChannel *)0x0) {
        ::FString::FString(&local_118,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_2,&local_118,(UObject *)0x0);
      }
      local_res20 = (UNiagaraDataChannel *)L"";
      if (local_118.Data.ArrayNum != 0) {
        local_res20 = (UNiagaraDataChannel *)local_118.Data.AllocatorInstance.Data;
      }
      local_138._0_8_ = L" ";
      if (param_1->bVisibleToGPUSims != false) {
        local_138._0_8_ = L"X";
      }
      local_128._0_8_ = L" ";
      if (param_1->bVisibleToCPUSims != false) {
        local_128._0_8_ = L"X";
      }
      TickGroupToString(&local_58,param_3);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if ((UNiagaraDataChannel *)local_118.Data.AllocatorInstance.Data != (UNiagaraDataChannel *)0x0
         ) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
    }
    if (pFVar13 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar13);
    }
  }
  return;
}

// TearDown @ 14913a780

void __cdecl FNiagaraDataChannelDebugUtilities::TearDown(void)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      DAT_155272b08 = (undefined8 *)0x0;
      atexit(`TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy'::__l2::
             _dynamic_atexit_destructor_for__Singleton__);
      _Init_thread_footer(&`private:_static_class_TLazySingleton<class_FNiagaraDataChannelDebugUtilities>&___ptr64___cdecl_TLazySingleton<FNiagaraDataChannelDebugUtilities>::GetLazy(void_(__cdecl*)(void*___ptr64))'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  puVar1 = DAT_155272b08;
  if (DAT_155272b08 != (undefined8 *)0x0) {
    DestructItems<FNiagaraDataChannelDebugUtilities::FFrameDebugData,int>
              ((FFrameDebugData *)*DAT_155272b08,*(int *)(DAT_155272b08 + 1));
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    DAT_155272b08 = (undefined8 *)0x0;
  }
  return;
}

// Tick @ 14913a8e0

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

void __cdecl
FNiagaraDataChannelDebugUtilities::Tick
          (FNiagaraWorldManager *param_1,float param_2,ETickingGroup param_3)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FNiagaraWorldManager *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("WorldMan",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataChannelDebugUtilities.cpp"
                       ,0x35,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraDataChannelManager::Tick((param_1->DataChannelManager).Ptr,param_2,param_3);
  return;
}

// TickGroupToString @ 14913b8a0

FString * __cdecl
FNiagaraDataChannelDebugUtilities::TickGroupToString
          (FString *__return_storage_ptr__,ETickingGroup *param_1)

{
  FText *this;
  FString *pFVar1;
  FText local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      TGEnum = StaticEnum<enum_ETickingGroup>();
      _Init_thread_footer(&::_TSS0);
    }
  }
  this = UEnum::GetDisplayNameTextByValue(TGEnum,&local_18,(longlong)(int)*param_1);
  pFVar1 = FText::ToString(this);
  ::FString::FString(__return_storage_ptr__,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// ToJson @ 14913bb30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FString * __cdecl
FNiagaraDataChannelDebugUtilities::ToJson
          (FString *__return_storage_ptr__,FNiagaraDataChannelGameData *param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  FElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  int iVar8;
  TReferenceControllerBase<1> *pTVar9;
  FNiagaraDataChannelGameDataLayout *pFVar10;
  bool bVar11;
  FArchiveState *pFVar12;
  FArchiveState *this;
  FString *pFVar13;
  TReferenceControllerBase<1> *pTVar14;
  FNiagaraTypeDefinition *pFVar15;
  UClass *pUVar16;
  FName this_00;
  FUtf8String *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  TReferenceControllerBase<1> *pTVar19;
  byte bVar20;
  longlong lVar21;
  UEnum *this_01;
  ForAnyElementType FVar22;
  int iVar23;
  FArchiveState *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined8 uVar26;
  uint uVar27;
  FName *pFVar28;
  wchar_t *pwVar29;
  uint uVar30;
  ForElementType<unsigned_int> FVar31;
  ForElementType<unsigned_int> FVar32;
  wchar_t *pwVar33;
  FArchiveState *pFVar34;
  TReferenceControllerBase<1> *this_02;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *this_03;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 local_res18 [8];
  int local_res20;
  FString local_368;
  undefined8 local_358;
  ForElementType<unsigned_int> FStack_350;
  undefined8 local_348;
  uint uStack_340;
  uint uStack_33c;
  uint local_338;
  undefined4 uStack_334;
  int iStack_330;
  undefined4 uStack_32c;
  int local_328;
  FNiagaraDataChannelLayoutInfo *local_320;
  TReferenceControllerBase<1> *local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  TReferenceControllerBase<1> *local_2f8;
  ForElementType<unsigned_int> local_2f0;
  FString local_2e8;
  FString local_2d8;
  TSharedRef<FJsonSerializerPolicy_JsonObject::FElement,1> local_2c8;
  int local_2b8;
  int local_2b4;
  TRawPtrProxy<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_> local_2b0;
  FNiagaraDataChannelGameDataLayout *local_2a8;
  FScriptContainerElement *local_2a0;
  TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *local_298;
  TReferenceControllerBase<1> *local_290;
  FNiagaraDataChannelGameDataLayout *local_288;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_280;
  undefined8 uStack_260;
  FNiagaraDataChannelGameDataLayout *local_258;
  undefined8 uStack_250;
  ForElementType<unsigned_int> FStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  int local_230;
  undefined4 uStack_22c;
  FString local_228;
  FString local_218;
  FString local_208;
  FLinearColor_u_0 local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  TSharedPtr<FJsonObject,1> local_1b8;
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1> local_1a8;
  FString local_198;
  FUtf8String local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  FNiagaraDataChannelGameDataLayout *local_160;
  undefined8 uStack_158;
  ForElementType<unsigned_int> local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130 [8];
  FString local_128;
  FString local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_9c;
  
  pFVar34 = (FArchiveState *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar12 = ::operator_new(0x40);
  local_2b0.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar34;
  if (pFVar12 != (FArchiveState *)0x0) {
    this = ::operator_new(0xa8);
    pFVar24 = pFVar34;
    if (this != (FArchiveState *)0x0) {
      local_310 = 0;
      this->_padding_ = 0;
      this->ActiveFPLB = (FFastPathLoadBuffer *)0x0;
      (this->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
      (this->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
      *(undefined8 *)&this->field_0x28 = 0;
      this->ArSerializingDefaults = 0;
      this->ArPortFlags = 0;
      this->ArMaxSerializeSize = 0;
      (this->ArUEVer).FileVersionUE4 = 0;
      (this->ArUEVer).FileVersionUE5 = 0;
      this->ArLicenseeUEVer = 0;
      (this->ArEngineVer).Major = 0;
      (this->ArEngineVer).Minor = 0;
      (this->ArEngineVer).Patch = 0;
      *(undefined2 *)&(this->ArEngineVer).field_0x6 = 0;
      (this->ArEngineVer).Changelist = 0;
      this->CustomVersionContainer = (FCustomVersionContainer *)0x0;
      this->ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
      this->SavePackageData = (FArchiveSavePackageData *)0x0;
      this->SerializedProperty = (FProperty *)0x0;
      this->SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
      *(undefined8 *)&this->bCustomVersionsAreReset = 0;
      this->NextProxy = (FArchiveState *)0x0;
      FArchiveState::FArchiveState(this);
      this[1]._padding_ = 0;
      this->_padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
      this[1].ActiveFPLB = (FFastPathLoadBuffer *)&pFVar12->field_0x28;
      this[1].InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
      FArchiveState::SetIsSaving(this,true);
      (**(code **)(this->_padding_ + 0x108))(this,0);
      this->_padding_ = (longlong)&___7FMemoryWriter__6B_;
      pFVar24 = this;
    }
    pFVar12->ActiveFPLB = (FFastPathLoadBuffer *)pFVar24;
    pFVar12->_padding_ = (longlong)&___7__TJsonStringWriter_U__TPrettyJsonPrintPolicy__W____6B_;
    (pFVar12->InlineFPLB).StartFastPathLoadBuffer = (uchar *)0x0;
    (pFVar12->InlineFPLB).EndFastPathLoadBuffer = (uchar *)0x0;
    (pFVar12->InlineFPLB).OriginalFastPathLoadBuffer = (uchar *)0x0;
    *(undefined8 *)&pFVar12->field_0x28 = 0;
    pFVar12->ArSerializingDefaults = 0;
    pFVar12->ArPortFlags = 0;
    pFVar12->ArMaxSerializeSize = (long64)__return_storage_ptr__;
    local_2b0.Object = (TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_> *)pFVar12;
  }
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>,1><TJsonStringWriter<TPrettyJsonPrintPolicy<wchar_t>_>_>
            (&local_1a8,&local_2b0);
  local_298 = local_1a8.Object;
  local_290 = local_1a8.SharedReferenceCount.ReferenceController;
  if (local_1a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1a8.SharedReferenceCount.ReferenceController);
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayStart
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_1a8.Object);
  local_2a0 = (param_1->VariableData).AllocatorInstance.Data;
  pwVar33 = L"";
  local_328 = (param_1->VariableData).ArrayNum;
  if ((local_328 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    pFVar13 = (FString *)(*pcVar5)();
    return pFVar13;
  }
  local_320 = TSharedPtr<FNiagaraDataChannelLayoutInfo,1>::operator->(&param_1->LayoutInfo);
  pTVar7 = _UNK_150651568;
  pFVar6 = ___xmm_00000000000000000000000000000010;
  local_res20 = 0;
  local_2a8 = &local_320->GameDataLayout;
  this_03 = local_1a8.Object;
  if (0 < param_1->NumElements) {
    local_2f0 = (ForElementType<unsigned_int>)
                &(local_320->GameDataLayout).VariableIndices.field_0x10;
    do {
      FVar31 = local_2f0;
      pTVar14 = ::operator_new(0x60);
      uVar30 = 0;
      if (pTVar14 == (TReferenceControllerBase<1> *)0x0) {
        this_02 = (TReferenceControllerBase<1> *)&DAT_00000010;
        local_2f8 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pTVar14->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
        this_02 = pTVar14 + 1;
        pTVar14->SharedReferenceCount = (atomic<int>)0x1;
        pTVar14->WeakReferenceCount = (atomic<int>)0x1;
        pTVar14[2]._padding_ = 0;
        pTVar14[2].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[2].WeakReferenceCount = (atomic<int>)0x0;
        pTVar14[4].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[4].WeakReferenceCount = (atomic<int>)0x0;
        pTVar14[5].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[5].WeakReferenceCount = (atomic<int>)0x0;
        pTVar14[1]._padding_ = 0;
        pTVar14[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar14[3]._padding_ = 0;
        pTVar14[3].SharedReferenceCount = (atomic<int>)0x0;
        pTVar14[3].WeakReferenceCount = (atomic<int>)0x80;
        *(undefined4 *)&pTVar14[4]._padding_ = 0xffffffff;
        *(undefined4 *)((longlong)&pTVar14[4]._padding_ + 4) = 0;
        pTVar14[5]._padding_ = 0;
        if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FString *)(*pcVar5)();
          return pFVar13;
        }
        LOCK();
        pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
        UNLOCK();
        local_2f8 = pTVar14;
      }
      local_318 = local_2f8;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_2f8)
      ;
      uVar3 = *(uint *)((longlong)FVar31 + 0x18);
      FStack_350._4_4_ = 1;
      local_338 = 0;
      uStack_33c = local_338;
      if (uVar3 != 0) {
        FVar32 = FVar31;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar32 = *(ForElementType<unsigned_int> *)((longlong)FVar31 + 0x10);
        }
        uVar4 = *(uint *)FVar32;
        uVar30 = 0;
        local_338 = 0;
        while (uVar4 == 0) {
          lVar21 = (longlong)(int)uVar30;
          local_338 = local_338 + 0x20;
          uVar30 = uVar30 + 1;
          uStack_33c = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar30)
          goto LAB_14913be6d;
          uVar4 = ((uint *)((longlong)FVar32 + 4))[lVar21];
        }
        FStack_350._4_4_ = -uVar4 & uVar4;
        uVar2 = (ulonglong)(uint)FStack_350._4_4_ * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2b8 = (int)lVar21;
        uStack_33c = local_2b8 + -1 + local_338;
        if ((int)uVar3 < (int)uStack_33c) {
          uStack_33c = uVar3;
        }
      }
LAB_14913be6d:
      uVar4 = *(uint *)&(local_320->GameDataLayout).VariableIndices.field_0x28;
      uStack_334 = local_9c;
      bVar20 = (byte)uVar4 & 0x1f;
      iStack_330 = *(int *)&(local_320->GameDataLayout).VariableIndices.field_0x8 -
                   *(int *)&(local_320->GameDataLayout).VariableIndices.field_0x34;
      FStack_350._0_4_ = uVar30;
      uVar27 = uVar4 & 0xffffffe0;
      TStack_280.CurrentBitIndex = uStack_33c;
      TStack_280.UnvisitedBitMask = 0xffffffff;
      iVar23 = (int)uVar4 >> 5;
      uVar30 = -1 << bVar20;
      local_358 = CONCAT44(1 << bVar20,iVar23);
      local_348 = CONCAT44(uVar4,uVar30);
      local_288 = local_2a8;
      TStack_280._padding_ = (longlong)FStack_350;
      TStack_280._28_4_ = local_9c;
      TStack_280.BaseBitIndex = local_338;
      uStack_260 = CONCAT44(uStack_32c,iStack_330);
      FStack_350 = FVar31;
      uStack_340 = uVar27;
      TStack_280.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar31;
      if ((((int)uVar4 < 0) || ((int)uVar3 < (int)uVar4)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar5)();
        return pFVar13;
      }
      iVar8 = local_res20;
      uVar3 = *(int *)((longlong)local_2f0 + 0x18);
      if (uVar4 != uVar3) {
        FVar31 = local_2f0;
        if (*(ForElementType<unsigned_int> *)((longlong)local_2f0 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar31 = *(ForElementType<unsigned_int> *)((longlong)local_2f0 + 0x10);
        }
        uVar30 = uVar30 & *(uint *)((longlong)FVar31 + (longlong)iVar23 * 4);
        while (uVar30 == 0) {
          uStack_340 = uVar27 + 0x20;
          lVar21 = (longlong)iVar23;
          iVar23 = iVar23 + 1;
          uVar2 = (ulonglong)local_358 >> 0x20;
          local_358 = CONCAT44((int)uVar2,iVar23);
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23) {
            local_348 = CONCAT44(uVar3,(undefined4)local_348);
            goto LAB_14913bfd3;
          }
          uVar30 = ((uint *)((longlong)FVar31 + 4))[lVar21];
          local_348 = 0xffffffff;
          uVar27 = uStack_340;
        }
        local_358 = CONCAT44(-uVar30 & uVar30,(undefined4)local_358);
        uVar2 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
        lVar21 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_2b4 = (int)lVar21;
        uVar30 = (uVar27 - 1) + local_2b4;
        if ((int)uVar3 < (int)uVar30) {
          uVar30 = uVar3;
        }
        local_348 = CONCAT44(uVar30,(undefined4)local_348);
      }
LAB_14913bfd3:
      local_258 = &local_320->GameDataLayout;
      uStack_238 = CONCAT44(uStack_33c,uStack_340);
      local_230 = *(int *)&(local_320->GameDataLayout).VariableIndices.field_0x8 -
                  *(int *)&(local_320->GameDataLayout).VariableIndices.field_0x34;
      uStack_250 = local_358;
      FStack_248 = FStack_350;
      uStack_240 = local_348;
      uStack_158 = local_358;
      uStack_138 = CONCAT44(uStack_22c,local_230);
      local_150 = FStack_350;
      uStack_148 = local_348;
      local_160 = local_258;
      local_140 = uStack_238;
      while( true ) {
        pFVar10 = local_288;
        if (*(int *)&(local_288->VariableIndices).field_0x8 -
            *(int *)&(local_288->VariableIndices).field_0x34 != (int)uStack_260) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_280.CurrentBitIndex == uStack_148._4_4_) &&
            ((ForElementType<unsigned_int>)TStack_280.Array == local_150)) && (pFVar10 == local_160)
           ) break;
        lVar21 = *(longlong *)&pFVar10->VariableIndices;
        iVar23 = *(int *)(lVar21 + 0xc + (longlong)TStack_280.CurrentBitIndex * 0x18);
        pFVar28 = (FName *)(lVar21 + (longlong)TStack_280.CurrentBitIndex * 0x18);
        ::FName::ToString(pFVar28,&local_368);
        pFVar25 = (FScriptContainerElement *)0x0;
        if ((-1 < iVar23) && (iVar23 < local_328)) {
          if ((iVar23 < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          pFVar25 = local_2a0 + (longlong)iVar23 * 0x28;
        }
        pFVar28 = pFVar28 + 1;
        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar28);
        if (((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
               FNiagaraTypeHelper::DoubleDef.ClassStructOrEnum.field0_0x0) &&
             (pFVar15->UnderlyingType == FNiagaraTypeHelper::DoubleDef.UnderlyingType)) &&
            (pFVar15->Flags == FNiagaraTypeHelper::DoubleDef.Flags)) &&
           (pFVar25 != (FScriptContainerElement *)0x0)) {
          if ((*(int *)(pFVar25 + 0x20) != 8) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("sizeof(T) == Size",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                  ,0x42,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          if (((longlong)pFVar34 < 0) || (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)
             ) {
            uVar35 = 0;
            uVar36 = 0;
          }
          else {
            uVar26 = *(undefined8 *)(*(longlong *)pFVar25 + (longlong)pFVar34 * 8);
            uVar35 = (undefined4)uVar26;
            uVar36 = (undefined4)((ulonglong)uVar26 >> 0x20);
          }
          if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          FJsonObject::SetNumberField
                    ((FJsonObject *)this_02,&local_368,(double)CONCAT44(uVar36,uVar35));
        }
        else {
          pFVar15 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar28);
          if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) &&
              (pFVar15->UnderlyingType == FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
             ((pFVar15->Flags == FNiagaraTypeDefinition::BoolDef.Flags &&
              (pFVar25 != (FScriptContainerElement *)0x0)))) {
            if ((*(int *)(pFVar25 + 0x20) != 4) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("sizeof(T) == Size",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                    ,0x42,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              pFVar13 = (FString *)(*pcVar5)();
              return pFVar13;
            }
            if (((longlong)pFVar34 < 0) ||
               (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
              iVar23 = 0;
            }
            else {
              iVar23 = *(int *)(*(longlong *)pFVar25 + (longlong)pFVar34 * 4);
            }
            if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar5 = (code *)swi(3);
              pFVar13 = (FString *)(*pcVar5)();
              return pFVar13;
            }
            FJsonObject::SetBoolField((FJsonObject *)this_02,&local_368,iVar23 != 0);
          }
          else {
            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)pFVar28)
            ;
            if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                  FNiagaraTypeDefinition::IntDef.ClassStructOrEnum.field0_0x0) &&
                (pFVar15->UnderlyingType == FNiagaraTypeDefinition::IntDef.UnderlyingType)) &&
               ((pFVar15->Flags == FNiagaraTypeDefinition::IntDef.Flags &&
                (pFVar25 != (FScriptContainerElement *)0x0)))) {
              if ((*(int *)(pFVar25 + 0x20) != 4) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("sizeof(T) == Size",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                      ,0x42,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                pFVar13 = (FString *)(*pcVar5)();
                return pFVar13;
              }
              if (((longlong)pFVar34 < 0) ||
                 (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
                iVar23 = 0;
              }
              else {
                iVar23 = *(int *)(*(longlong *)pFVar25 + (longlong)pFVar34 * 4);
              }
              if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar11)) {
                pcVar5 = (code *)swi(3);
                pFVar13 = (FString *)(*pcVar5)();
                return pFVar13;
              }
              FJsonObject::SetNumberField((FJsonObject *)this_02,&local_368,(double)iVar23);
            }
            else {
              pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                  ((FNiagaraTypeDefinitionHandle *)pFVar28);
              if ((((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeHelper::VectorDef.ClassStructOrEnum.field0_0x0) &&
                    (pFVar15->UnderlyingType == FNiagaraTypeHelper::VectorDef.UnderlyingType)) &&
                   (pFVar15->Flags == FNiagaraTypeHelper::VectorDef.Flags)) ||
                  (((pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                         ((FNiagaraTypeDefinitionHandle *)pFVar28),
                    (TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                    FNiagaraTypeDefinition::PositionDef.ClassStructOrEnum.field0_0x0 &&
                    (pFVar15->UnderlyingType == FNiagaraTypeDefinition::PositionDef.UnderlyingType))
                   && (pFVar15->Flags == FNiagaraTypeDefinition::PositionDef.Flags)))) &&
                 (pFVar25 != (FScriptContainerElement *)0x0)) {
                if ((*(int *)(pFVar25 + 0x20) != 0x18) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("sizeof(T) == Size",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                        ,0x42,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  pFVar13 = (FString *)(*pcVar5)();
                  return pFVar13;
                }
                if (((longlong)pFVar34 < 0) ||
                   (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
                  local_168 = 0;
                  uVar35 = 0;
                  uVar36 = 0;
                  local_178 = 0;
                  uStack_170 = 0;
                }
                else {
                  uVar26 = *(undefined8 *)(*(longlong *)pFVar25 + 0x10 + (longlong)pFVar34 * 0x18);
                  uVar35 = (undefined4)uVar26;
                  uVar36 = (undefined4)((ulonglong)uVar26 >> 0x20);
                }
                FStack_248._4_4_ = uVar36;
                FStack_248._0_4_ = uVar35;
                if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("IsValid()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                        ,0x458,L""), bVar11)) {
                  pcVar5 = (code *)swi(3);
                  pFVar13 = (FString *)(*pcVar5)();
                  return pFVar13;
                }
                ::FString::PrintfImpl(&local_198,L"X=%3.3f Y=%3.3f Z=%3.3f");
                FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,&local_198);
                FVar22.Data = local_198.Data.AllocatorInstance.Data;
              }
              else {
                pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                    ((FNiagaraTypeDefinitionHandle *)pFVar28);
                if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                      FNiagaraTypeHelper::Vector2DDef.ClassStructOrEnum.field0_0x0) &&
                    (pFVar15->UnderlyingType == FNiagaraTypeHelper::Vector2DDef.UnderlyingType)) &&
                   ((pFVar15->Flags == FNiagaraTypeHelper::Vector2DDef.Flags &&
                    (pFVar25 != (FScriptContainerElement *)0x0)))) {
                  if ((*(int *)(pFVar25 + 0x20) != 0x10) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("sizeof(T) == Size",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                          ,0x42,L""), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    pFVar13 = (FString *)(*pcVar5)();
                    return pFVar13;
                  }
                  if (((longlong)pFVar34 < 0) ||
                     (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
                    local_c8 = 0;
                    uStack_c0 = 0;
                  }
                  if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar11)) {
                    pcVar5 = (code *)swi(3);
                    pFVar13 = (FString *)(*pcVar5)();
                    return pFVar13;
                  }
                  ::FString::PrintfImpl(&local_228,L"X=%3.3f Y=%3.3f");
                  FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,&local_228);
                  FVar22.Data = local_228.Data.AllocatorInstance.Data;
                }
                else {
                  pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                      ((FNiagaraTypeDefinitionHandle *)pFVar28);
                  if (((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr
                         == FNiagaraTypeHelper::Vector4Def.ClassStructOrEnum.field0_0x0) &&
                       (pFVar15->UnderlyingType == FNiagaraTypeHelper::Vector4Def.UnderlyingType))
                      && (pFVar15->Flags == FNiagaraTypeHelper::Vector4Def.Flags)) &&
                     (pFVar25 != (FScriptContainerElement *)0x0)) {
                    if ((*(int *)(pFVar25 + 0x20) != 0x20) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("sizeof(T) == Size",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                            ,0x42,L""), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      pFVar13 = (FString *)(*pcVar5)();
                      return pFVar13;
                    }
                    if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                           ("IsValid()",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                            ,0x458,L""), bVar11)) {
                      pcVar5 = (code *)swi(3);
                      pFVar13 = (FString *)(*pcVar5)();
                      return pFVar13;
                    }
                    ::FString::PrintfImpl(&local_218,L"X=%3.3f Y=%3.3f Z=%3.3f W=%3.3f");
                    FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,&local_218);
                    FVar22.Data = local_218.Data.AllocatorInstance.Data;
                  }
                  else {
                    pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                        ((FNiagaraTypeDefinitionHandle *)pFVar28);
                    if ((((TObjectPtr<UObject>_u_0)(pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr
                          == FNiagaraTypeHelper::QuatDef.ClassStructOrEnum.field0_0x0) &&
                        (pFVar15->UnderlyingType == FNiagaraTypeHelper::QuatDef.UnderlyingType)) &&
                       ((pFVar15->Flags == FNiagaraTypeHelper::QuatDef.Flags &&
                        (pFVar25 != (FScriptContainerElement *)0x0)))) {
                      if ((*(int *)(pFVar25 + 0x20) != 0x20) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("sizeof(T) == Size",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                              ,0x42,L""), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        pFVar13 = (FString *)(*pcVar5)();
                        return pFVar13;
                      }
                      if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                             ("IsValid()",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                              ,0x458,L""), bVar11)) {
                        pcVar5 = (code *)swi(3);
                        pFVar13 = (FString *)(*pcVar5)();
                        return pFVar13;
                      }
                      ::FString::PrintfImpl(&local_208,L"X=%.9f Y=%.9f Z=%.9f W=%.9f");
                      FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,&local_208);
                      FVar22.Data = local_208.Data.AllocatorInstance.Data;
                    }
                    else {
                      pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                          ((FNiagaraTypeDefinitionHandle *)pFVar28);
                      if (((((TObjectPtr<UObject>_u_0)
                             (pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                             FNiagaraTypeDefinition::ColorDef.ClassStructOrEnum.field0_0x0) &&
                           (pFVar15->UnderlyingType ==
                            FNiagaraTypeDefinition::ColorDef.UnderlyingType)) &&
                          (pFVar15->Flags == FNiagaraTypeDefinition::ColorDef.Flags)) &&
                         (pFVar25 != (FScriptContainerElement *)0x0)) {
                        if ((*(int *)(pFVar25 + 0x20) != 0x10) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("sizeof(T) == Size",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                                ,0x42,L""), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          pFVar13 = (FString *)(*pcVar5)();
                          return pFVar13;
                        }
                        if (((longlong)pFVar34 < 0) ||
                           (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
                          local_108 = 0;
                          uStack_100 = 0;
                          local_1f8._0_8_ = 0;
                          local_1f8._8_8_ = 0;
                        }
                        else {
                          puVar1 = (undefined8 *)(*(longlong *)pFVar25 + (longlong)pFVar34 * 0x10);
                          local_1f8._0_8_ = *puVar1;
                          local_1f8._8_8_ = puVar1[1];
                        }
                        if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                               ("IsValid()",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                ,0x458,L""), bVar11)) {
                          pcVar5 = (code *)swi(3);
                          pFVar13 = (FString *)(*pcVar5)();
                          return pFVar13;
                        }
                        pFVar13 = FLinearColor::ToString((FLinearColor *)&local_1f8._s_0,&local_128)
                        ;
                        FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,pFVar13);
                        FVar22.Data = local_128.Data.AllocatorInstance.Data;
                      }
                      else {
                        pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                            ((FNiagaraTypeDefinitionHandle *)pFVar28);
                        if (((((TObjectPtr<UObject>_u_0)
                               (pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr ==
                               FNiagaraTypeDefinition::IDDef.ClassStructOrEnum.field0_0x0) &&
                             (pFVar15->UnderlyingType ==
                              FNiagaraTypeDefinition::IDDef.UnderlyingType)) &&
                            (pFVar15->Flags == FNiagaraTypeDefinition::IDDef.Flags)) &&
                           (pFVar25 != (FScriptContainerElement *)0x0)) {
                          if ((*(int *)(pFVar25 + 0x20) != 8) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("sizeof(T) == Size",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                                  ,0x42,L""), bVar11)) {
                            pcVar5 = (code *)swi(3);
                            pFVar13 = (FString *)(*pcVar5)();
                            return pFVar13;
                          }
                          if (((longlong)pFVar34 < 0) ||
                             (*(int *)(pFVar25 + 8) / *(int *)(pFVar25 + 0x20) <= iVar8)) {
                            local_308 = 0xffffffffffffffff;
                            uVar26 = 0xffffffffffffffff;
                          }
                          else {
                            uVar26 = *(undefined8 *)(*(longlong *)pFVar25 + (longlong)pFVar34 * 8);
                          }
                          local_300 = uVar26;
                          if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("IsValid()",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar11)) {
                            pcVar5 = (code *)swi(3);
                            pFVar13 = (FString *)(*pcVar5)();
                            return pFVar13;
                          }
                          local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_2d8.Data.ArrayNum = 0;
                          local_2d8.Data.ArrayMax = 0;
                          ::FString::AppendInt(&local_2d8,local_300._4_4_);
                          ::FString::FString(&local_1c8,"/");
                          local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                          local_2e8.Data.ArrayNum = 0;
                          local_2e8.Data.ArrayMax = 0;
                          ::FString::AppendInt(&local_2e8,(int)uVar26);
                          ::FString::ConcatFF(&local_1d8,&local_2e8,&local_1c8);
                          ::FString::ConcatFF(&local_1e8,&local_1d8,&local_2d8);
                          FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,&local_1e8);
                          if (local_1e8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
                          }
                          if (local_1d8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
                          }
                          if (local_2e8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
                          }
                          FVar22.Data = local_2d8.Data.AllocatorInstance.Data;
                          if (local_1c8.Data.AllocatorInstance.Data !=
                              (FScriptContainerElement *)0x0) {
                            FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
                            FVar22.Data = local_2d8.Data.AllocatorInstance.Data;
                          }
                        }
                        else {
                          pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                              ((FNiagaraTypeDefinitionHandle *)pFVar28);
                          if ((pFVar15->UnderlyingType == 3) &&
                             (pFVar25 != (FScriptContainerElement *)0x0)) {
                            if ((*(int *)(pFVar25 + 0x20) != 4) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("sizeof(T) == Size",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelVariableBuffer.h"
                                                  ,0x42,L""), bVar11)) {
                              pcVar5 = (code *)swi(3);
                              pFVar13 = (FString *)(*pcVar5)();
                              return pFVar13;
                            }
                            if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar11)) {
                              pcVar5 = (code *)swi(3);
                              pFVar13 = (FString *)(*pcVar5)();
                              return pFVar13;
                            }
                            pFVar15 = FNiagaraTypeDefinitionHandle::Resolve
                                                ((FNiagaraTypeDefinitionHandle *)pFVar28);
                            if (pFVar15->UnderlyingType == 3) {
                              if ((pFVar15->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0
                                 ) {
                                pFVar13 = GetTypeName<UEnum>(&local_d8);
                                if ((pFVar13->Data).ArrayNum != 0) {
                                  pwVar33 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                                }
                    /* WARNING: Subroutine does not return */
                                CastLogError(L"nullptr",pwVar33);
                              }
                              pUVar16 = Z_Construct_UClass_UEnum_NoRegister();
                              bVar11 = FObjectPtr::IsA((FObjectPtr *)pFVar15,pUVar16);
                              if ((!bVar11) ||
                                 (this_01 = (UEnum *)(pFVar15->ClassStructOrEnum).field0_0x0.
                                                     DebugPtr, this_01 == (UEnum *)0x0)) {
                                pFVar13 = GetTypeName<UEnum>(&local_f8);
                                if ((pFVar13->Data).ArrayNum == 0) {
                                  pwVar29 = L"";
                                }
                                else {
                                  pwVar29 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                                }
                                pFVar13 = GetFullNameForCastLogError<UObject>
                                                    (&local_e8,
                                                     (pFVar15->ClassStructOrEnum).field0_0x0.
                                                     DebugPtr);
                                if ((pFVar13->Data).ArrayNum != 0) {
                                  pwVar33 = (wchar_t *)(pFVar13->Data).AllocatorInstance.Data;
                                }
                    /* WARNING: Subroutine does not return */
                                CastLogError(pwVar33,pwVar29);
                              }
                            }
                            else {
                              this_01 = (UEnum *)0x0;
                            }
                            this_00 = UEnum::GetNameByValue(this_01,(long64)local_130);
                            pFVar13 = ::FName::ToString((FName *)this_00,&local_118);
                            FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,pFVar13);
                            FVar22.Data = local_118.Data.AllocatorInstance.Data;
                          }
                          else {
                            if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
                               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("IsValid()",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                                  ,0x458,L""), bVar11)) {
                              pcVar5 = (code *)swi(3);
                              pFVar13 = (FString *)(*pcVar5)();
                              return pFVar13;
                            }
                            pFVar17 = FUtf8String::FUtf8String(&local_188,"???");
                            FJsonObject::SetStringField((FJsonObject *)this_02,&local_368,pFVar17);
                            FVar22.Data = local_188.Data.AllocatorInstance.Data;
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (FVar22.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(FVar22.Data);
              }
            }
          }
        }
        if (local_368.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_368.Data.AllocatorInstance.Data);
        }
        TStack_280.UnvisitedBitMask = TStack_280.UnvisitedBitMask & ~TStack_280._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_280);
      }
      if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x408,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar5)();
        return pFVar13;
      }
      pTVar14 = local_318;
      if (local_318 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_318->SharedReferenceCount = (atomic<int>)((int)local_318->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x25d,L""), bVar11)) {
        pcVar5 = (code *)swi(3);
        pFVar13 = (FString *)(*pcVar5)();
        return pFVar13;
      }
      pTVar9 = local_2f8;
      if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_2f8->SharedReferenceCount = (atomic<int>)((int)local_2f8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar18 = ::operator_new(0x38);
      if (pTVar18 == (TReferenceControllerBase<1> *)0x0) {
        local_2c8.Object = pFVar6;
        local_2c8.SharedReferenceCount.ReferenceController = pTVar7;
      }
      else {
        pTVar18->SharedReferenceCount = (atomic<int>)0x1;
        pTVar18->WeakReferenceCount = (atomic<int>)0x1;
        pTVar18->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_UFElement_FJsonSerializerPolicy_JsonObject___00_SharedPointerInternals__6B_
        ;
        pTVar18[1]._padding_ = 0;
        pTVar18[1].SharedReferenceCount = (atomic<int>)0x0;
        pTVar18[1].WeakReferenceCount = (atomic<int>)0x0;
        pTVar19 = ::operator_new(0x30);
        if (pTVar19 == (TReferenceControllerBase<1> *)0x0) {
          pTVar19 = (TReferenceControllerBase<1> *)0x0;
          pTVar18[2]._padding_ = 0x10;
          pTVar18[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar18[2].WeakReferenceCount = (atomic<int>)0x0;
        }
        else {
          pTVar19->SharedReferenceCount = (atomic<int>)0x1;
          pTVar19->WeakReferenceCount = (atomic<int>)0x1;
          pTVar19->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
          ;
          local_1b8.SharedReferenceCount.ReferenceController = pTVar14;
          if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_1b8.Object = (FJsonObject *)this_02;
          FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar19 + 1),&local_1b8);
          if ((pTVar19 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar11)) {
            pcVar5 = (code *)swi(3);
            pFVar13 = (FString *)(*pcVar5)();
            return pFVar13;
          }
          pTVar18[2]._padding_ = (longlong)(pTVar19 + 1);
          *(TReferenceControllerBase<1> **)&pTVar18[2].SharedReferenceCount = pTVar19;
          LOCK();
          pTVar19->SharedReferenceCount = (atomic<int>)((int)pTVar19->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = local_318;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar19)
        ;
        local_2c8.Object = (FElement *)(pTVar18 + 1);
        *(undefined2 *)&pTVar18[3]._padding_ = 0;
        local_2c8.SharedReferenceCount.ReferenceController = pTVar18;
        if ((local_2c8.Object == (FElement *)0x0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("InObject != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x246,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          pFVar13 = (FString *)(*pcVar5)();
          return pFVar13;
        }
      }
      this_03 = local_298;
      TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
      Serialize<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>
                (&local_2c8,(TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)local_298,true)
      ;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_2c8.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
      pFVar34 = (FArchiveState *)((longlong)&pFVar34->_padding_ + 1);
      local_res20 = local_res20 + 1;
    } while (local_res20 < param_1->NumElements);
  }
  TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_>::WriteArrayEnd
            ((TJsonWriter<wchar_t,TPrettyJsonPrintPolicy<wchar_t>_> *)this_03);
  (**(code **)(this_03->_padding_ + 8))(this_03);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_290);
  return __return_storage_ptr__;
}

