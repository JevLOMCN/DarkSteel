// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioGameplayVolume
// Functions: 4

// FProxyMutator_SubmixOverride @ 14d99f0c0

FProxyMutator_SubmixOverride * __thiscall
FProxyMutator_SubmixOverride::FProxyMutator_SubmixOverride(FProxyMutator_SubmixOverride *this)

{
  FName local_res8;
  
  this->_padding_ = -1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FProxyVolumeMutator__6B_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  ::FName::FName(&local_res8,L"MutatorBase");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  this->_padding_ = (longlong)&___7FProxyMutator_SubmixOverride__6B_;
  (this->SubmixOverrideSettings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SubmixOverrideSettings).ArrayNum = 0;
  (this->SubmixOverrideSettings).ArrayMax = 0;
  ::FName::FName(&local_res8,L"SubmixOverride");
  *(FName *)((longlong)&this->_padding_ + 4) = local_res8;
  return this;
}

// ~FProxyMutator_SubmixOverride @ 14d9a01f0

void __thiscall
FProxyMutator_SubmixOverride::~FProxyMutator_SubmixOverride(FProxyMutator_SubmixOverride *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  DestructItems<FAudioVolumeSubmixOverrideSettings,int>
            ((FAudioVolumeSubmixOverrideSettings *)
             (this->SubmixOverrideSettings).AllocatorInstance.Data,
             (this->SubmixOverrideSettings).ArrayNum);
  pFVar3 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d9a0238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// Apply @ 14d9a2890

void __thiscall
FProxyMutator_SubmixOverride::Apply
          (FProxyMutator_SubmixOverride *this,FAudioGameplayVolumeListener *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  USoundEffectPreset *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FAudioDeviceManager *this_01;
  ulonglong uVar7;
  FSoundEffectSubmix *pFVar8;
  undefined8 *puVar9;
  FScriptContainerElement *pFVar10;
  FScriptContainerElement *pFVar11;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  ForAnyElementType local_b8;
  undefined8 local_b0;
  TSharedPtr<FSoundEffectSubmix,1> local_a8;
  uint local_98;
  undefined4 uStack_94;
  void *pvStack_90;
  float local_88;
  uint uStack_84;
  TSharedPtr<FSoundEffectBase,1> local_80;
  FAudioDeviceHandle local_70;
  USoundEffectPreset *local_58;
  FScriptContainerElement *local_50;
  
  bVar5 = IsInAudioThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\SubmixOverrideVolumeComponent.cpp"
                         ,0x14,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_01 = FAudioDeviceManager::Get();
  FAudioDeviceManager::GetAudioDevice(this_01,&local_70,param_1->OwningDeviceId);
  bVar5 = FAudioDeviceHandle::IsValid(&local_70);
  if (bVar5) {
    pvStack_90 = (void *)0x0;
    uStack_84 = 0xffffffff;
    local_98 = FAudioDeviceHandle::GetDeviceID(&local_70);
    bVar5 = FAudioDeviceHandle::IsValid(&local_70);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                           ,0x60,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar11 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
    local_res20 = (this->SubmixOverrideSettings).ArrayNum;
    uVar7 = (ulonglong)(int)local_res20;
    local_88 = (float)(local_70.Device)->SampleRate;
    local_b8.Data = (FScriptContainerElement *)0x0;
    pFVar10 = pFVar11 + uVar7 * 0x20;
    local_b0 = 0;
    local_50 = pFVar10;
    while( true ) {
      if ((this->SubmixOverrideSettings).ArrayNum != (int)uVar7) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FAudioVolumeSubmixOverrideSettings_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar11 == pFVar10) break;
      if (*(longlong *)pFVar11 == 0) {
LAB_14d9a2c99:
        uVar7 = (ulonglong)local_res20;
        pFVar11 = pFVar11 + 0x20;
      }
      else {
        iVar2 = *(int *)(pFVar11 + 0x10);
        if (iVar2 < 1) goto LAB_14d9a2c99;
        puVar9 = *(undefined8 **)(pFVar11 + 8);
        puVar1 = puVar9 + iVar2;
        while( true ) {
          if (*(int *)(pFVar11 + 0x10) != iVar2) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<TObjectPtr<USoundEffectSubmixPreset>_const_,int,0>::operator!='
            ::__l2::<lambda_1>::operator()(local_res18);
          }
          if (puVar9 == puVar1) break;
          this_00 = (USoundEffectPreset *)*puVar9;
          if (this_00 != (USoundEffectPreset *)0x0) {
            pvStack_90 = (void *)0x0;
            uStack_84 = *(uint *)((longlong)&this_00->_padding_ + 4);
            pFVar8 = (FSoundEffectSubmix *)(**(code **)(this_00->_padding_ + 0x2d0))(this_00);
            local_58 = this_00;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_00);
            }
            FWeakObjectPtr::operator=((FWeakObjectPtr *)&pFVar8->field_0x4c,(FObjectPtr)&local_58);
            lVar3 = *(longlong *)pFVar8;
            *(uint *)&pFVar8->field_0x54 = uStack_84;
            *(ulonglong *)&(pFVar8->InitData_Internal).DeviceID = CONCAT44(uStack_94,local_98);
            (pFVar8->InitData_Internal).PresetSettings = pvStack_90;
            (pFVar8->InitData_Internal).SampleRate = local_88;
            (pFVar8->InitData_Internal).ParentPresetUniqueId = uStack_84;
            (**(code **)(lVar3 + 0x48))(pFVar8,&local_98);
            local_a8.Object = pFVar8;
            local_80.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
            if (local_80.SharedReferenceCount.ReferenceController ==
                (TReferenceControllerBase<1> *)0x0) {
              local_80.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
              ;
            }
            else {
              (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)0x1;
              (local_80.SharedReferenceCount.ReferenceController)->WeakReferenceCount =
                   (atomic<int>)0x1;
              (local_80.SharedReferenceCount.ReferenceController)->_padding_ =
                   (longlong)
                   &
                   ___7__TReferenceControllerWithDeleter_VFSoundEffectSubmix__U__DefaultDeleter_VFSoundEffectSubmix___SharedPointerInternals___00_SharedPointerInternals__6B_
              ;
              local_80.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar8;
              LOCK();
              (local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_80.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            local_80.Object = (FSoundEffectBase *)local_a8.Object;
            local_a8.SharedReferenceCount.ReferenceController =
                 local_80.SharedReferenceCount.ReferenceController;
            USoundEffectPreset::AddEffectInstance(this_00,&local_80);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_80.SharedReferenceCount.ReferenceController);
            if ((local_a8.Object == (FSoundEffectSubmix *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            FSoundEffectBase::SetEnabled((FSoundEffectBase *)local_a8.Object,true);
            if (((local_b8.Data <= &local_a8) &&
                (&local_a8 <
                 (TSharedPtr<FSoundEffectSubmix,1> *)
                 (local_b8.Data + (longlong)local_b0._4_4_ * 0x10))) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar6 = (int)local_b0;
            if ((int)local_b0 == local_b0._4_4_) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&local_b8,(int *)((longlong)&local_b0 + 4));
            }
            local_b0 = CONCAT44(local_b0._4_4_,iVar6 + 1);
            *(FSoundEffectSubmix **)&local_b8.Data[(longlong)iVar6 * 0x10].field_0x0 =
                 local_a8.Object;
            *(TReferenceControllerBase<1> **)(local_b8.Data + (longlong)iVar6 * 0x10 + 8) =
                 local_a8.SharedReferenceCount.ReferenceController;
            if (local_a8.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                   1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_a8.SharedReferenceCount.ReferenceController);
          }
          puVar9 = puVar9 + 1;
        }
        bVar5 = FAudioDeviceHandle::IsValid(&local_70);
        pFVar10 = local_50;
        if ((!bVar5) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                               ,0x60,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (**(code **)((local_70.Device)->_padding_ + 0x1a0))
                  (local_70.Device,*(longlong *)pFVar11,&local_b8,*(undefined4 *)(pFVar11 + 0x18));
        if ((longlong)local_b0 < 0) {
          DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
                    ((TSharedPtr<FSoundEffectSubmix,1> *)local_b8.Data,(int)local_b0);
          uVar7 = local_b0 >> 0x20;
          local_b0 = local_b0 & 0xffffffff00000000;
          if ((int)uVar7 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,0,&local_b8,0,(int *)((longlong)&local_b0 + 4));
          }
          goto LAB_14d9a2c99;
        }
        DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
                  ((TSharedPtr<FSoundEffectSubmix,1> *)local_b8.Data,(int)local_b0);
        uVar7 = (ulonglong)local_res20;
        pFVar11 = pFVar11 + 0x20;
        local_b0 = local_b0 & 0xffffffff00000000;
      }
    }
    DestructItems<TSharedPtr<FSoundEffectSubmix,1>,int>
              ((TSharedPtr<FSoundEffectSubmix,1> *)local_b8.Data,(int)local_b0);
    if ((TSharedPtr<FSoundEffectSubmix,1> *)local_b8.Data != (TSharedPtr<FSoundEffectSubmix,1> *)0x0
       ) {
      FMemory::Free(local_b8.Data);
    }
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_70);
  return;
}

// Remove @ 14d9a8b50

void __thiscall
FProxyMutator_SubmixOverride::Remove
          (FProxyMutator_SubmixOverride *this,FAudioGameplayVolumeListener *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FAudioDeviceManager *this_00;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res10 [8];
  FAudioDeviceHandle local_28;
  
  bVar3 = IsInAudioThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInAudioThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\AudioGameplayVolume\\Source\\AudioGameplayVolume\\Private\\SubmixOverrideVolumeComponent.cpp"
                         ,0x39,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = FAudioDeviceManager::Get();
  FAudioDeviceManager::GetAudioDevice(this_00,&local_28,param_1->OwningDeviceId);
  bVar3 = FAudioDeviceHandle::IsValid(&local_28);
  if (bVar3) {
    pFVar4 = (this->SubmixOverrideSettings).AllocatorInstance.Data;
    iVar1 = (this->SubmixOverrideSettings).ArrayNum;
    pFVar5 = pFVar4 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((this->SubmixOverrideSettings).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FAudioVolumeSubmixOverrideSettings_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res10);
      }
      if (pFVar4 == pFVar5) break;
      bVar3 = FAudioDeviceHandle::IsValid(&local_28);
      if ((!bVar3) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\AudioDeviceHandle.h"
                             ,0x60,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (**(code **)((local_28.Device)->_padding_ + 0x1a8))
                (local_28.Device,*(undefined8 *)pFVar4,*(undefined4 *)(pFVar4 + 0x18));
      pFVar4 = pFVar4 + 0x20;
    }
  }
  FAudioDeviceHandle::~FAudioDeviceHandle(&local_28);
  return;
}

