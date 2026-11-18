// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 6

// FNativeGameplayTag @ 146acc0c0

FNativeGameplayTag * __thiscall
FNativeGameplayTag::FNativeGameplayTag
          (FNativeGameplayTag *this,FName param_1,FName param_2,FName param_3,FString *param_4,
          ENativeGameplayTagToken param_5)

{
  FName FVar1;
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar2;
  FNativeGameplayTag *local_res8;
  FNativeGameplayTag *local_res10;
  
  FVar2.ComparisonIndex.Value = 0;
  FVar2.Number = 0;
  (this->InternalTag).TagName = (FName)0x0;
  (this->ModulePackageName).ComparisonIndex = 0;
  (this->ModulePackageName).Number = 0;
  this->PluginName = param_1;
  this->ModuleName = param_2;
  this->bValidated = false;
  FVar1 = FPackageName::GetModuleScriptPackageName((FName)&local_res8);
  this->ModulePackageName = *(FName *)FVar1;
  if (param_3 == (FName)0x0) {
    local_res8 = (FNativeGameplayTag *)0x0;
    param_3 = FVar2;
  }
  (this->InternalTag).TagName = param_3;
  this_00 = GetRegisteredNativeTags();
  local_res10 = this;
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  ::Emplace<FNativeGameplayTag_const_*>(this_00,&local_res8,(bool *)&local_res10);
  if (UGameplayTagsManager::SingletonManager != (UGameplayTagsManager *)0x0) {
    UGameplayTagsManager::AddNativeGameplayTag(UGameplayTagsManager::SingletonManager,this);
  }
  return this;
}

// ~FNativeGameplayTag @ 146acd760

void __thiscall FNativeGameplayTag::~FNativeGameplayTag(FNativeGameplayTag *this)

{
  UGameplayTagsManager *this_00;
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  *this_01;
  
  this_01 = GetRegisteredNativeTags();
  TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
  ::Remove(this_01,this);
  this_00 = UGameplayTagsManager::SingletonManager;
  if ((UGameplayTagsManager::SingletonManager != (UGameplayTagsManager *)0x0) &&
     (*(char *)((longlong)
                (UGameplayTagsManager::SingletonManager->GameplayTagMapCritical).CriticalSection.
                Opaque1 +
               ((ulonglong)
                ((UGameplayTagsManager::SingletonManager->ShouldAllowUnloadingTagsOverride).bIsSet
                != false) - 0x24)) != '\0')) {
    if ((UGameplayTagsManager::SingletonManager->bIsConstructingGameplayTagTree == false) &&
       (UGameplayTagsManager::SingletonManager->bDoneAddingNativeTags != false)) {
      if (((UGameplayTagsManager::SingletonManager->ShouldDeferGameplayTagTreeRebuilds).bIsSet ==
           false) ||
         ((UGameplayTagsManager::SingletonManager->ShouldDeferGameplayTagTreeRebuilds).TypedValue ==
          false)) {
        UGameplayTagsManager::DestroyGameplayTagTree(UGameplayTagsManager::SingletonManager);
        UGameplayTagsManager::ConstructGameplayTagTree(this_00);
        return;
      }
      if (UGameplayTagsManager::SingletonManager->bUseFastReplication != false) {
        UGameplayTagsManager::SingletonManager->bNetworkIndexInvalidated = true;
      }
      if (this_00->bDeferBroadcastOnGameplayTagTreeChanged != 0) {
        this_00->bShouldBroadcastDeferredOnGameplayTagTreeChanged = true;
        return;
      }
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                (&IGameplayTagsModule::OnGameplayTagTreeChanged);
      return;
    }
    UGameplayTagsManager::SingletonManager->bNeedsTreeRebuildOnDoneAddingGameplayTags = true;
  }
  return;
}

// GetGameplayTagTableRow @ 146ade6d0

FGameplayTagTableRow * __thiscall
FNativeGameplayTag::GetGameplayTagTableRow
          (FNativeGameplayTag *this,FGameplayTagTableRow *__return_storage_ptr__)

{
  FString *pFVar1;
  int *piVar2;
  FName FVar3;
  ForAnyElementType _Src;
  FString local_18;
  
  ValidateTagRegistration(this);
  ::FString::FString(&local_18,L"");
  _Src.Data = local_18.Data.AllocatorInstance.Data;
  FVar3 = (this->InternalTag).TagName;
  pFVar1 = &__return_storage_ptr__->DevComment;
  __return_storage_ptr__->_padding_ = (longlong)&___7FGameplayTagTableRow__6B_;
  __return_storage_ptr__->Tag = FVar3;
  piVar2 = &(__return_storage_ptr__->DevComment).Data.ArrayMax;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->DevComment).Data.ArrayNum = local_18.Data.ArrayNum;
  if (local_18.Data.ArrayNum == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)pFVar1,local_18.Data.ArrayNum,
               piVar2);
    memcpy((pFVar1->Data).AllocatorInstance.Data,_Src.Data,(longlong)local_18.Data.ArrayNum * 2);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetRegisteredNativeTags @ 146ae00f0

TSet<FNativeGameplayTag_const_*,DefaultKeyFuncs<FNativeGameplayTag_const_*,0>,FDefaultSetAllocator>
* __cdecl FNativeGameplayTag::GetRegisteredNativeTags(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FNativeGameplayTag::GetRegisteredNativeTags'::__l2::
             _dynamic_atexit_destructor_for__RegisteredNativeTags__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &RegisteredNativeTags;
}

// ValidateTagRegistration @ 146af0360

void __thiscall FNativeGameplayTag::ValidateTagRegistration(FNativeGameplayTag *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  bool bVar6;
  IProjectManager *pIVar7;
  longlong lVar8;
  IPluginManager *pIVar9;
  FString *pFVar10;
  FName *pFVar11;
  FName *pFVar12;
  FName *pFVar13;
  FName *local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  longlong *local_b8;
  TReferenceControllerBase<1> *local_b0;
  FName local_a8;
  FName *local_a0;
  FNativeGameplayTag *local_98 [2];
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FName *local_78;
  FName *local_70;
  FName **local_68;
  FName *local_60;
  FName *local_58;
  FName **local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  FString local_38;
  
  if (this->bValidated == false) {
    this->bValidated = true;
    pIVar7 = IProjectManager::Get();
    lVar8 = (**(code **)((longlong)*pIVar7 + 8))(pIVar7);
    if (lVar8 != 0) {
      local_res8 = *(FName **)(lVar8 + 0x38);
      pFVar13 = (FName *)0x0;
      pFVar11 = local_res8 + (longlong)*(int *)(lVar8 + 0x40) * 0x2d;
      if (local_res8 != pFVar11) {
        do {
          if (*local_res8 == this->ModuleName) {
            local_res10 = (this->InternalTag).TagName;
            local_res18 = this->ModuleName;
            if (local_res8 != (FName *)0x0) {
              uVar2 = local_res8[1].ComparisonIndex.Value;
              if ((uVar2 != 0) && (uVar2 != 2)) {
                local_78 = &local_res10;
                local_70 = &local_res18;
                local_68 = &local_res8;
                `VerifyModuleCanContainGameplayTag'::__l8::<lambda_1>::operator()(&local_78);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        ((TReferenceControllerBase<1> *)0x0);
              return;
            }
            goto LAB_146af03e8;
          }
          local_res8 = local_res8 + 0x2d;
        } while (local_res8 != pFVar11);
      }
      local_res10 = (this->InternalTag).TagName;
      local_res18 = this->ModuleName;
      local_res8 = (FName *)0x0;
LAB_146af03e8:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pIVar9 = IPluginManager::Get();
      pcVar3 = *(code **)((longlong)*pIVar9 + 0x70);
      pFVar10 = ::FName::ToString(&this->PluginName,&local_38);
      pFVar4 = (pFVar10->Data).AllocatorInstance.Data;
      iVar1 = (pFVar10->Data).ArrayNum;
      iStack_80 = iVar1 + -1;
      if (iVar1 == 0) {
        iStack_80 = 0;
      }
      local_88._0_4_ = SUB84(pFVar4,0);
      local_88._4_4_ = (undefined4)((ulonglong)pFVar4 >> 0x20);
      local_48 = (undefined4)local_88;
      uStack_44 = local_88._4_4_;
      uStack_3c = uStack_7c;
      local_88 = pFVar4;
      iStack_40 = iStack_80;
      (*pcVar3)(pIVar9,&local_b8,&local_48);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      local_a0 = pFVar13;
      if (local_b8 != (longlong *)0x0) {
        if ((local_b8 == (longlong *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = (**(code **)(*local_b8 + 0xa0))();
        pFVar11 = *(FName **)(lVar8 + 0xe8);
        pFVar12 = pFVar11 + (longlong)*(int *)(lVar8 + 0xf0) * 0x2d;
        if (pFVar11 != pFVar12) {
          do {
            local_a0 = pFVar11;
            if (*pFVar11 == this->ModuleName) break;
            pFVar11 = pFVar11 + 0x2d;
            local_a0 = pFVar13;
          } while (pFVar11 != pFVar12);
        }
      }
      pTVar5 = local_b0;
      if (local_b0 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_b0->SharedReferenceCount = (atomic<int>)((int)local_b0->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_res20 = (this->InternalTag).TagName;
      local_a8 = this->ModuleName;
      if (local_a0 == (FName *)0x0) {
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b0);
        local_98[0] = this;
        `FNativeGameplayTag::ValidateTagRegistration'::__l17::<lambda_3>::operator()(local_98);
      }
      else {
        uVar2 = local_a0[1].ComparisonIndex.Value;
        if ((uVar2 != 0) && (uVar2 != 2)) {
          local_60 = &local_res20;
          local_58 = &local_a8;
          local_50 = &local_a0;
          `VerifyModuleCanContainGameplayTag'::__l8::<lambda_1>::operator()(&local_60);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_b0);
    }
  }
  return;
}

// operator() @ 1504f8bc0

bool __thiscall
`FNativeGameplayTag::ValidateTagRegistration'::__l17::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 uVar5;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  bVar2 = false;
  bVar4 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<2030477099495587962>);
  if (bVar4) {
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_18);
    ::FName::ToString((FName *)(*(longlong *)this + 0x10),&local_28);
    bVar3 = true;
    bVar2 = true;
    bVar4 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<2030477099495587962>,&::ENSURE_Static);
    if (bVar4) {
      bVar4 = true;
      goto LAB_1504f8c60;
    }
  }
  bVar4 = false;
LAB_1504f8c60:
  if ((bVar2) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar4) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return (bool)uVar5;
  }
  return false;
}

