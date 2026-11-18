// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationController
// Functions: 25

// AddDeviceFromMessage @ 148c55c00

void __thiscall
FAutomationDeviceClusterManager::AddDeviceFromMessage
          (FAutomationDeviceClusterManager *this,FMessageAddress *param_1,
          FAutomationWorkerFindWorkersResponse *param_2,uint param_3)

{
  int *piVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  int local_res18 [4];
  FString local_168;
  ForAnyElementType local_158;
  undefined8 local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  int local_138 [2];
  FString local_130;
  FGuid local_118;
  FDeviceState local_108;
  ulonglong uVar8;
  
  if ((((*(int *)((longlong)&param_2->_padding_ + 4) == 0 && (int)param_2->_padding_ == 0) &&
       *(int *)((longlong)&param_2->_padding_ + 4) == 0) && (int)param_2->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Message.InstanceId.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xf,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_138[0] = -1;
  local_res18[0] = -1;
  bVar4 = FindDevice(this,(FGuid *)param_2,local_138,local_res18);
  if (bVar4) {
    UpdateDeviceFromMessage(this,param_1,(FAutomationWorkerMessageBase *)param_2);
    return;
  }
  local_118.A = (param_1->UniqueId).A;
  local_118.B = (param_1->UniqueId).B;
  local_118.C = (param_1->UniqueId).C;
  local_118.D = (param_1->UniqueId).D;
  FDeviceState::FDeviceState(&local_108,(FMessageAddress *)&local_118,param_2);
  GetGroupNameForDevice(this,&local_130,&local_108,param_3);
  iVar6 = (this->Clusters).ArrayNum;
  uVar8 = 0;
  uVar13 = uVar8;
  uVar7 = 0;
  if (0 < iVar6) {
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < iVar6) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar9 = (this->Clusters).AllocatorInstance.Data;
      iVar6 = *(int *)(pFVar9 + uVar13 + 8);
      if (iVar6 == local_130.Data.ArrayNum) {
        if (1 < iVar6) {
          iVar6 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(pFVar9 + uVar13),
                             (wchar_t *)local_130.Data.AllocatorInstance.Data);
          bVar4 = iVar6 == 0;
          goto LAB_148c55d54;
        }
        iVar6 = (this->Clusters).ArrayNum;
LAB_148c55d74:
        uVar5 = 0;
        if ((int)uVar7 < iVar6) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = (this->Clusters).AllocatorInstance.Data;
        if (((*(FDeviceState **)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x20) <= &local_108) &&
            (&local_108 <
             *(FDeviceState **)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x20) +
             *(int *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x2c))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = *(int *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x28);
        if (iVar6 == *(int *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x2c)) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8e0,(ForAnyElementType *)
                                   (pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x20),
                             (int *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x2c));
        }
        *(int *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x28) = iVar6 + 1;
        puVar11 = (undefined8 *)
                  (*(longlong *)(pFVar9 + (longlong)(int)uVar7 * 0x30 + 0x20) +
                  (longlong)iVar6 * 0xe0);
        *puVar11 = local_108.DeviceMessageAddress.UniqueId._0_8_;
        puVar11[1] = local_108.DeviceMessageAddress.UniqueId._8_8_;
        FAutomationDeviceInfo::FAutomationDeviceInfo
                  ((FAutomationDeviceInfo *)(puVar11 + 2),&local_108.Info);
        puVar11[0x19] = local_108.Report.Object;
        puVar11[0x1a] = local_108.Report.SharedReferenceCount.ReferenceController;
        if (local_108.Report.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_108.Report.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.Report.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        *(bool *)(puVar11 + 0x1b) = local_108.IsDeviceAvailable;
        break;
      }
      bVar4 = iVar6 + local_130.Data.ArrayNum == 1;
LAB_148c55d54:
      iVar6 = (this->Clusters).ArrayNum;
      if (bVar4) goto LAB_148c55d74;
      uVar7 = uVar7 + 1;
      uVar8 = (ulonglong)uVar7;
      uVar13 = uVar13 + 0x30;
    } while ((int)uVar7 < iVar6);
  }
  if (uVar7 == (this->Clusters).ArrayNum) {
    local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_168.Data.ArrayNum = 0;
    local_168.Data.ArrayMax = 0;
    local_158.Data = (FScriptContainerElement *)0x0;
    uVar7 = local_130.Data.ArrayNum - 1;
    if (local_130.Data.ArrayNum == 0) {
      uVar7 = 0;
    }
    local_150 = 0;
    local_148.Data = (FScriptContainerElement *)0x0;
    local_140 = 0;
    ::FString::AssignRange(&local_168,(wchar_t *)local_130.Data.AllocatorInstance.Data,uVar7);
    if ((FString *)&local_158 != &param_2->Platform) {
      iVar6 = (param_2->Platform).Data.ArrayNum;
      pFVar9 = (param_2->Platform).Data.AllocatorInstance.Data;
      local_150 = CONCAT44(local_150._4_4_,iVar6);
      if ((iVar6 == 0) && (local_150._4_4_ == 0)) {
        local_150 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar6,local_150._4_4_,&local_158,iVar6,(int *)((longlong)&local_150 + 4));
        if (iVar6 != 0) {
          memcpy(local_158.Data,pFVar9,(longlong)iVar6 * 2);
        }
      }
    }
    if (((local_148.Data <= &local_108) &&
        (&local_108 < (FDeviceState *)(local_148.Data + (longlong)local_140._4_4_ * 0xe0))) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (int)local_140;
    if ((int)local_140 == local_140._4_4_) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x8e0,&local_148,(int *)((longlong)&local_140 + 4));
    }
    local_140 = CONCAT44(local_140._4_4_,iVar6 + 1);
    pFVar9 = local_148.Data + (longlong)iVar6 * 0xe0;
    *(undefined8 *)&pFVar9->field_0x0 = local_108.DeviceMessageAddress.UniqueId._0_8_;
    *(undefined8 *)(pFVar9 + 8) = local_108.DeviceMessageAddress.UniqueId._8_8_;
    FAutomationDeviceInfo::FAutomationDeviceInfo
              ((FAutomationDeviceInfo *)(pFVar9 + 0x10),&local_108.Info);
    *(IAutomationReport **)(pFVar9 + 200) = local_108.Report.Object;
    *(TReferenceControllerBase<1> **)(pFVar9 + 0xd0) =
         local_108.Report.SharedReferenceCount.ReferenceController;
    if (local_108.Report.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_108.Report.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_108.Report.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    pFVar9[0xd8] = (FScriptContainerElement)local_108.IsDeviceAvailable;
    pFVar9 = (this->Clusters).AllocatorInstance.Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 < pFVar9 + (longlong)(this->Clusters).ArrayMax * 0x30
        )) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (this->Clusters).ArrayNum;
    piVar1 = &(this->Clusters).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x830,(ForAnyElementType *)this,piVar1);
    }
    FVar3.Data = local_168.Data.AllocatorInstance.Data;
    (this->Clusters).ArrayNum = iVar6 + 1;
    pFVar9 = (this->Clusters).AllocatorInstance.Data + (longlong)iVar6 * 0x30;
    *(undefined8 *)&pFVar9->field_0x0 = 0;
    lVar12 = (longlong)local_168.Data.ArrayNum;
    *(int *)&pFVar9[8].field_0x0 = local_168.Data.ArrayNum;
    if (local_168.Data.ArrayNum == 0) {
      *(int *)(pFVar9 + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_168.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,local_168.Data.ArrayNum,
                 (int *)(pFVar9 + 0xc));
      memcpy(*(void **)&pFVar9->field_0x0,FVar3.Data,lVar12 * 2);
    }
    FVar3.Data = local_158.Data;
    pFVar10 = pFVar9 + 0x10;
    *(FScriptContainerElement **)&pFVar10->field_0x0 = (FScriptContainerElement *)0x0;
    lVar12 = (longlong)(int)local_150;
    *(int *)&pFVar9[0x18].field_0x0 = (int)local_150;
    if ((int)local_150 == 0) {
      *(int *)(pFVar9 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,(int)local_150,0,(ForAnyElementType *)pFVar10,(int)local_150,
                 (int *)(pFVar9 + 0x1c));
      memcpy(*(FScriptContainerElement **)&pFVar10->field_0x0,FVar3.Data,lVar12 * 2);
    }
    FVar3.Data = local_148.Data;
    pFVar10 = pFVar9 + 0x20;
    *(undefined8 *)&pFVar10->field_0x0 = 0;
    iVar6 = (int)local_140;
    *(int *)&pFVar9[0x28].field_0x0 = (int)local_140;
    if ((int)local_140 == 0) {
      *(int *)(pFVar9 + 0x2c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xe0,8,(int)local_140,0,(ForAnyElementType *)pFVar10,(int)local_140,
                 (int *)(pFVar9 + 0x2c));
      ConstructItems<FAutomationDeviceClusterManager::FDeviceState,FAutomationDeviceClusterManager::FDeviceState,int>
                (*(void **)&pFVar10->field_0x0,(FDeviceState *)FVar3.Data,iVar6);
    }
    DestructItems<FAutomationDeviceClusterManager::FDeviceState,int>
              ((FDeviceState *)local_148.Data,(int)local_140);
    if ((FDeviceState *)local_148.Data != (FDeviceState *)0x0) {
      FMemory::Free(local_148.Data);
    }
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_108.Report.SharedReferenceCount.ReferenceController);
  FAutomationDeviceInfo::~FAutomationDeviceInfo(&local_108.Info);
  return;
}

// DeviceEnabled @ 148c58d80

bool __thiscall
FAutomationDeviceClusterManager::DeviceEnabled
          (FAutomationDeviceClusterManager *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x154,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  if (-1 < param_2) {
    uVar6 = 0;
    if (param_1 < *piVar1) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar7 * 0x30 + 0x28))
    goto LAB_148c58e70;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,0x155,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
LAB_148c58e70:
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  pFVar2 = (this->Clusters).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar7 * 0x30 + 0x28)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return (bool)*(undefined1 *)
                ((longlong)param_2 * 0xe0 + 0xd8 + *(longlong *)(pFVar2 + lVar7 * 0x30 + 0x20));
}

// DisableDevice @ 148c58f40

void __thiscall
FAutomationDeviceClusterManager::DisableDevice
          (FAutomationDeviceClusterManager *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x14b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (-1 < param_2) {
    uVar5 = 0;
    if (param_1 < *piVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar6 * 0x30 + 0x28))
    goto LAB_148c59030;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,0x14c,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_148c59030:
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (this->Clusters).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar6 * 0x30 + 0x28)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined1 *)((longlong)param_2 * 0xe0 + 0xd8 + *(longlong *)(pFVar2 + lVar6 * 0x30 + 0x20)) = 0
  ;
  return;
}

// FindDevice @ 148c5b700

bool __thiscall
FAutomationDeviceClusterManager::FindDevice
          (FAutomationDeviceClusterManager *this,FGuid *param_1,int *param_2,int *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  
  *param_2 = -1;
  uVar9 = 0;
  *param_3 = -1;
  if (0 < (this->Clusters).ArrayNum) {
    lVar10 = 0;
    do {
      uVar8 = 0;
      lVar11 = 0;
      while( true ) {
        uVar6 = 0;
        if ((int)uVar9 < (this->Clusters).ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        iVar1 = (this->Clusters).ArrayNum;
        if (*(int *)((this->Clusters).AllocatorInstance.Data + lVar10 + 0x28) <= (int)uVar8) break;
        uVar6 = 0;
        if ((int)uVar9 < iVar1) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        pFVar2 = (this->Clusters).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar8 < *(int *)(pFVar2 + (longlong)(int)uVar9 * 0x30 + 0x28)) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
        lVar7 = *(longlong *)(pFVar2 + (longlong)(int)uVar9 * 0x30 + 0x20) + lVar11;
        if (((*(uint *)(lVar7 + 0x2c) == param_1->D && *(uint *)(lVar7 + 0x28) == param_1->C) &&
            *(uint *)(lVar7 + 0x24) == param_1->B) && *(uint *)(lVar7 + 0x20) == param_1->A) {
          *param_2 = uVar9;
          *param_3 = uVar8;
          return true;
        }
        uVar8 = uVar8 + 1;
        lVar11 = lVar11 + 0xe0;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x30;
    } while ((int)uVar9 < iVar1);
  }
  return false;
}

// GetClusterDeviceName @ 148c5ca80

FString * __thiscall
FAutomationDeviceClusterManager::GetClusterDeviceName
          (FAutomationDeviceClusterManager *this,FString *__return_storage_ptr__,int param_1,
          int param_2)

{
  FAutomationDeviceInfo *pFVar1;
  
  pFVar1 = GetDeviceInfo(this,param_1,param_2);
  ::FString::FString(__return_storage_ptr__,&pFVar1->DeviceName);
  return __return_storage_ptr__;
}

// GetClusterDeviceType @ 148c5cab0

FString * __thiscall
FAutomationDeviceClusterManager::GetClusterDeviceType
          (FAutomationDeviceClusterManager *this,FString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xdf,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)
                     ((this->Clusters).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x10));
  return __return_storage_ptr__;
}

// GetClusterGameInstance @ 148c5cb90

FString * __thiscall
FAutomationDeviceClusterManager::GetClusterGameInstance
          (FAutomationDeviceClusterManager *this,FString *__return_storage_ptr__,int param_1,
          int param_2)

{
  FAutomationDeviceInfo *pFVar1;
  
  pFVar1 = GetDeviceInfo(this,param_1,param_2);
  ::FString::FString(__return_storage_ptr__,&pFVar1->InstanceName);
  return __return_storage_ptr__;
}

// GetClusterGameInstanceId @ 148c5cbd0

FGuid * __thiscall
FAutomationDeviceClusterManager::GetClusterGameInstanceId
          (FAutomationDeviceClusterManager *this,FGuid *__return_storage_ptr__,int param_1,
          int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  FAutomationDeviceInfo *pFVar4;
  
  pFVar4 = GetDeviceInfo(this,param_1,param_2);
  uVar1 = (pFVar4->Instance).B;
  uVar2 = (pFVar4->Instance).C;
  uVar3 = (pFVar4->Instance).D;
  __return_storage_ptr__->A = (pFVar4->Instance).A;
  __return_storage_ptr__->B = uVar1;
  __return_storage_ptr__->C = uVar2;
  __return_storage_ptr__->D = uVar3;
  return __return_storage_ptr__;
}

// GetClusterGroupName @ 148c5cce0

FString * __thiscall
FAutomationDeviceClusterManager::GetClusterGroupName
          (FAutomationDeviceClusterManager *this,FString *__return_storage_ptr__,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FString *pFVar5;
  
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xd8,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  uVar4 = 0;
  if (param_1 < *piVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar2)();
    return pFVar5;
  }
  ::FString::FString(__return_storage_ptr__,
                     (FString *)((this->Clusters).AllocatorInstance.Data + (longlong)param_1 * 0x30)
                    );
  return __return_storage_ptr__;
}

// GetDeviceInfo @ 148c5d2c0

FAutomationDeviceInfo * __thiscall
FAutomationDeviceClusterManager::GetDeviceInfo
          (FAutomationDeviceClusterManager *this,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAutomationDeviceInfo *pFVar6;
  longlong lVar7;
  
  lVar7 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xf5,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FAutomationDeviceInfo *)(*pcVar3)();
    return pFVar6;
  }
  if (-1 < param_2) {
    uVar5 = 0;
    if (param_1 < *piVar1) {
      uVar5 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar5 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FAutomationDeviceInfo *)(*pcVar3)();
      return pFVar6;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar7 * 0x30 + 0x28))
    goto LAB_148c5d3b0;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,0xf6,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FAutomationDeviceInfo *)(*pcVar3)();
    return pFVar6;
  }
LAB_148c5d3b0:
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FAutomationDeviceInfo *)(*pcVar3)();
    return pFVar6;
  }
  pFVar2 = (this->Clusters).AllocatorInstance.Data;
  uVar5 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar7 * 0x30 + 0x28)) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar6 = (FAutomationDeviceInfo *)(*pcVar3)();
    return pFVar6;
  }
  return (FAutomationDeviceInfo *)
         (*(longlong *)(pFVar2 + lVar7 * 0x30 + 0x20) + (longlong)param_2 * 0xe0 + 0x10);
}

// GetDeviceMessageAddress @ 148c5d480

FMessageAddress * __thiscall
FAutomationDeviceClusterManager::GetDeviceMessageAddress
          (FAutomationDeviceClusterManager *this,FMessageAddress *__return_storage_ptr__,int param_1
          ,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  FMessageAddress *pFVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x111,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMessageAddress *)(*pcVar4)();
    return pFVar9;
  }
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_1 < *piVar1) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMessageAddress *)(*pcVar4)();
      return pFVar9;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar10 * 0x30 + 0x28))
    goto LAB_148c5d575;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,0x112,L"");
  if (bVar7) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMessageAddress *)(*pcVar4)();
    return pFVar9;
  }
LAB_148c5d575:
  uVar8 = 0;
  if (param_1 < *piVar1) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMessageAddress *)(*pcVar4)();
    return pFVar9;
  }
  pFVar3 = (this->Clusters).AllocatorInstance.Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar3 + lVar10 * 0x30 + 0x28)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMessageAddress *)(*pcVar4)();
    return pFVar9;
  }
  puVar2 = (undefined8 *)((longlong)param_2 * 0xe0 + *(longlong *)(pFVar3 + lVar10 * 0x30 + 0x20));
  uVar5 = *puVar2;
  uVar6 = puVar2[1];
  (__return_storage_ptr__->UniqueId).A = (int)uVar5;
  (__return_storage_ptr__->UniqueId).B = (int)((ulonglong)uVar5 >> 0x20);
  (__return_storage_ptr__->UniqueId).C = (int)uVar6;
  (__return_storage_ptr__->UniqueId).D = (int)((ulonglong)uVar6 >> 0x20);
  return __return_storage_ptr__;
}

// GetDevicesReservedForTest @ 148c5d770

TArray<FMessageAddress,TSizedDefaultAllocator<32>_> * __thiscall
FAutomationDeviceClusterManager::GetDevicesReservedForTest
          (FAutomationDeviceClusterManager *this,
          TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,int param_1,
          TSharedPtr<IAutomationReport,1> *param_2)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  lVar15 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x11b,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar9;
  }
  lVar13 = lVar15 * 0x30;
  uVar10 = (uint)~param_1 >> 0x1f;
  uVar12 = 0;
  lVar14 = 0;
  do {
    uVar7 = 0;
    if (param_1 < *piVar1) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    if (*(int *)((this->Clusters).AllocatorInstance.Data + lVar13 + 0x28) <= (int)uVar12) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((param_2->SharedReferenceCount).ReferenceController);
      return __return_storage_ptr__;
    }
    uVar7 = 0;
    if (param_1 < *piVar1) {
      uVar7 = uVar10;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    pFVar11 = (this->Clusters).AllocatorInstance.Data;
    uVar7 = 0;
    if ((int)uVar12 < *(int *)(pFVar11 + lVar13 + 0x28)) {
      uVar7 = ~uVar12 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar9;
    }
    if (*(IAutomationReport **)(*(longlong *)(pFVar11 + lVar13 + 0x20) + 200 + lVar14) ==
        param_2->Object) {
      uVar7 = 0;
      if (param_1 < *piVar1) {
        uVar7 = uVar10;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      pFVar11 = (this->Clusters).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar12 < *(int *)(pFVar11 + lVar15 * 0x30 + 0x28)) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      piVar2 = &__return_storage_ptr__->ArrayMax;
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)(*(longlong *)(pFVar11 + lVar15 * 0x30 + 0x20) + lVar14);
      if (((pFVar3 <= pFVar11) && (pFVar11 < pFVar3 + (longlong)*piVar2 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == *piVar2) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,piVar2);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      uVar5 = *(undefined8 *)(pFVar11 + 8);
      pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar3 = *(undefined8 *)pFVar11;
      *(undefined8 *)(pFVar3 + 8) = uVar5;
    }
    uVar12 = uVar12 + 1;
    lVar14 = lVar14 + 0xe0;
  } while( true );
}

// GetGroupNameForDevice @ 148c5f5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall
FAutomationDeviceClusterManager::GetGroupNameForDevice
          (FAutomationDeviceClusterManager *this,FString *__return_storage_ptr__,
          FDeviceState *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  iVar2 = 0;
  if ((param_2 & 1) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).DeviceName,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 2) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).Platform,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 4) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).OSVersion,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 8) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).Model,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 0x10) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).GPU,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 0x20) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).CPUModel,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 0x40) != 0) {
    ::FString::PrintfImpl(&local_18,L"%uGB Ram-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if ((param_2 & 0x80) != 0) {
    ::FString::ConcatFC(&local_18,&(param_1->Info).RenderMode,L"-");
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = iVar2;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  iVar3 = (__return_storage_ptr__->Data).ArrayNum;
  iVar1 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar1 = iVar2;
  }
  if (0 < iVar1) {
    if (iVar1 + -1 < iVar1) {
      iVar1 = iVar1 + -1;
    }
    if (0 < iVar1) {
      iVar2 = iVar1;
    }
    ::FString::RemoveAt(__return_storage_ptr__,iVar2,1,No);
  }
  return __return_storage_ptr__;
}

// GetNumActiveDevicesInCluster @ 148c5fb30

int __thiscall
FAutomationDeviceClusterManager::GetNumActiveDevicesInCluster
          (FAutomationDeviceClusterManager *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  
  piVar1 = &(this->Clusters).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                       ,0xc9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  lVar7 = (longlong)param_1 * 0x30;
  iVar5 = 0;
  uVar9 = 0;
  lVar8 = 0;
  while( true ) {
    uVar6 = 0;
    if (param_1 < *piVar1) {
      uVar6 = (uint)~param_1 >> 0x1f;
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
    }
    if (*(int *)((this->Clusters).AllocatorInstance.Data + lVar7 + 0x28) <= (int)uVar9) break;
    uVar6 = 0;
    if (param_1 < *piVar1) {
      uVar6 = (uint)~param_1 >> 0x1f;
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
    }
    pFVar2 = (this->Clusters).AllocatorInstance.Data;
    uVar6 = 0;
    if ((int)uVar9 < *(int *)(pFVar2 + lVar7 + 0x28)) {
      uVar6 = ~uVar9 >> 0x1f;
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
    }
    if (*(char *)(*(longlong *)(pFVar2 + lVar7 + 0x20) + 0xd8 + lVar8) != '\0') {
      iVar5 = iVar5 + 1;
    }
    uVar9 = uVar9 + 1;
    lVar8 = lVar8 + 0xe0;
  }
  return iVar5;
}

// GetNumClusters @ 148c5fcd0

int __thiscall
FAutomationDeviceClusterManager::GetNumClusters(FAutomationDeviceClusterManager *this)

{
  return (this->Clusters).ArrayNum;
}

// GetNumDevicesInCluster @ 148c5fd00

int __thiscall
FAutomationDeviceClusterManager::GetNumDevicesInCluster
          (FAutomationDeviceClusterManager *this,int param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0xc2,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  uVar5 = 0;
  if (param_1 < *piVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  return *(int *)((this->Clusters).AllocatorInstance.Data + (longlong)param_1 * 0x30 + 0x28);
}

// GetTest @ 148c603c0

TSharedPtr<IAutomationReport,1> * __thiscall
FAutomationDeviceClusterManager::GetTest
          (FAutomationDeviceClusterManager *this,
          TSharedPtr<IAutomationReport,1> *__return_storage_ptr__,int param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  TSharedPtr<IAutomationReport,1> *pTVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x12a,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
    return pTVar7;
  }
  if (-1 < param_2) {
    uVar6 = 0;
    if (param_1 < *piVar1) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar7 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
      return pTVar7;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar8 * 0x30 + 0x28))
    goto LAB_148c604bc;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,299,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
    return pTVar7;
  }
LAB_148c604bc:
  uVar6 = 0;
  if (param_1 < *piVar1) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
    return pTVar7;
  }
  pFVar2 = (this->Clusters).AllocatorInstance.Data;
  uVar6 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar8 * 0x30 + 0x28)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IAutomationReport,1> *)(*pcVar4)();
    return pTVar7;
  }
  lVar8 = (longlong)param_2 * 0xe0 + *(longlong *)(pFVar2 + lVar8 * 0x30 + 0x20);
  __return_storage_ptr__->Object = *(IAutomationReport **)(lVar8 + 200);
  pTVar3 = *(TReferenceControllerBase<1> **)(lVar8 + 0xd0);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetTotalNumDevices @ 148c60820

int __thiscall
FAutomationDeviceClusterManager::GetTotalNumDevices(FAutomationDeviceClusterManager *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar4 = (this->Clusters).ArrayNum;
  iVar7 = 0;
  uVar5 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar5 < iVar4) {
        uVar3 = ~uVar5 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        iVar4 = (*pcVar1)();
        return iVar4;
      }
      uVar5 = uVar5 + 1;
      iVar4 = (this->Clusters).ArrayNum;
      iVar7 = iVar7 + *(int *)((this->Clusters).AllocatorInstance.Data + lVar6 + 0x28);
      lVar6 = lVar6 + 0x30;
    } while ((int)uVar5 < iVar4);
  }
  return iVar7;
}

// HasActiveDevice @ 148c63c00

bool __thiscall
FAutomationDeviceClusterManager::HasActiveDevice(FAutomationDeviceClusterManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  bool local_res8;
  
  uVar7 = 0;
  local_res8 = false;
  bVar3 = false;
  if (0 < (this->Clusters).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      lVar8 = 0;
      while( true ) {
        uVar5 = 0;
        if ((int)uVar7 < (this->Clusters).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(int *)((this->Clusters).AllocatorInstance.Data + lVar9 + 0x28) <= (int)uVar6)
        goto LAB_148c63d5c;
        uVar5 = 0;
        if ((int)uVar7 < (this->Clusters).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        pFVar1 = (this->Clusters).AllocatorInstance.Data;
        uVar5 = 0;
        if ((int)uVar6 < *(int *)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 0x28)) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        if (*(char *)(lVar8 + 0xd8 + *(longlong *)(pFVar1 + (longlong)(int)uVar7 * 0x30 + 0x20)) !=
            '\0') break;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0xe0;
      }
      local_res8 = true;
LAB_148c63d5c:
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x30;
      bVar3 = local_res8;
    } while ((int)uVar7 < (this->Clusters).ArrayNum);
  }
  return bVar3;
}

// ReGroupDevices @ 148c66500

void __thiscall
FAutomationDeviceClusterManager::ReGroupDevices(FAutomationDeviceClusterManager *this,uint param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  ForAnyElementType FVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar15;
  FScriptContainerElement *pFVar16;
  undefined8 *puVar17;
  longlong lVar18;
  FDeviceState *pFVar19;
  ulonglong uVar20;
  longlong local_res8;
  ForAnyElementType local_88;
  int local_80 [2];
  FString local_78;
  FString local_68;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulonglong uVar14;
  
  iVar10 = (this->Clusters).ArrayNum;
  uVar11 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80[0] = 0;
  local_80[1] = 0;
  uVar14 = uVar11;
  uVar20 = uVar11;
  if (0 < iVar10) {
    do {
      uVar12 = (uint)uVar14;
      uVar13 = 0;
      if ((int)uVar12 < iVar10) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (this->Clusters).AllocatorInstance.Data + uVar20 + 0x20;
      if (((FScriptContainerElement *)&local_88 == pFVar16) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x96e,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar10 = *(int *)&pFVar16[8].field_0x0;
      if (iVar10 != 0) {
        iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0xe0,8,iVar10,&local_88,local_80,local_80 + 1);
        ConstructItems<FAutomationDeviceClusterManager::FDeviceState,FAutomationDeviceClusterManager::FDeviceState,int>
                  (local_88.Data + (longlong)iVar8 * 0xe0,*(FDeviceState **)&pFVar16->field_0x0,
                   iVar10);
      }
      iVar10 = (this->Clusters).ArrayNum;
      uVar14 = (ulonglong)(uVar12 + 1);
      uVar20 = uVar20 + 0x30;
    } while ((int)(uVar12 + 1) < iVar10);
  }
  DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int>
            ((FDeviceCluster *)(this->Clusters).AllocatorInstance.Data,iVar10);
  piVar15 = &(this->Clusters).ArrayMax;
  (this->Clusters).ArrayNum = 0;
  if (*piVar15 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar15);
  }
  if (0 < local_80[0]) {
    local_res8 = 0;
    do {
      uVar12 = (uint)uVar11;
      uVar13 = 0;
      if ((int)uVar12 < local_80[0]) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar19 = (FDeviceState *)(local_88.Data + local_res8);
      GetGroupNameForDevice(this,&local_78,pFVar19,param_1);
      iVar10 = (this->Clusters).ArrayNum;
      uVar11 = 0;
      uVar13 = 0;
      uVar14 = uVar11;
      uVar20 = uVar11;
      if (0 < iVar10) {
        do {
          uVar13 = (uint)uVar11;
          uVar9 = 0;
          if ((int)uVar13 < iVar10) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar16 = (this->Clusters).AllocatorInstance.Data;
          iVar10 = *(int *)(pFVar16 + uVar14 + 8);
          if (iVar10 == local_78.Data.ArrayNum) {
            if (1 < iVar10) {
              iVar10 = FGenericPlatformStricmp::Stricmp
                                 (*(wchar_t **)(pFVar16 + uVar14),
                                  (wchar_t *)local_78.Data.AllocatorInstance.Data);
              bVar7 = iVar10 == 0;
              goto LAB_148c66771;
            }
            iVar10 = (this->Clusters).ArrayNum;
LAB_148c6679b:
            uVar9 = 0;
            if ((int)uVar13 < iVar10) {
              uVar9 = ~uVar13 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pFVar16 = (this->Clusters).AllocatorInstance.Data;
            if (((*(FDeviceState **)(pFVar16 + uVar20 * 0x30 + 0x20) <= pFVar19) &&
                (pFVar19 < *(FDeviceState **)(pFVar16 + uVar20 * 0x30 + 0x20) +
                           *(int *)(pFVar16 + uVar20 * 0x30 + 0x2c))) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar10 = *(int *)(pFVar16 + uVar20 * 0x30 + 0x28);
            if (iVar10 == *(int *)(pFVar16 + uVar20 * 0x30 + 0x2c)) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x8e0,(ForAnyElementType *)(pFVar16 + uVar20 * 0x30 + 0x20),
                                  (int *)(pFVar16 + uVar20 * 0x30 + 0x2c));
            }
            *(int *)(pFVar16 + uVar20 * 0x30 + 0x28) = iVar10 + 1;
            uVar5 = *(undefined8 *)&(pFVar19->DeviceMessageAddress).UniqueId.C;
            puVar17 = (undefined8 *)
                      (*(longlong *)(pFVar16 + uVar20 * 0x30 + 0x20) + (longlong)iVar10 * 0xe0);
            *puVar17 = *(undefined8 *)&(pFVar19->DeviceMessageAddress).UniqueId;
            puVar17[1] = uVar5;
            FAutomationDeviceInfo::FAutomationDeviceInfo
                      ((FAutomationDeviceInfo *)(puVar17 + 2),&pFVar19->Info);
            puVar17[0x19] = (pFVar19->Report).Object;
            pTVar3 = (pFVar19->Report).SharedReferenceCount.ReferenceController;
            puVar17[0x1a] = pTVar3;
            if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
              UNLOCK();
            }
            *(bool *)(puVar17 + 0x1b) = pFVar19->IsDeviceAvailable;
            break;
          }
          bVar7 = iVar10 + local_78.Data.ArrayNum == 1;
LAB_148c66771:
          iVar10 = (this->Clusters).ArrayNum;
          if (bVar7) goto LAB_148c6679b;
          uVar13 = uVar13 + 1;
          uVar11 = (ulonglong)uVar13;
          uVar14 = uVar14 + 0x30;
          uVar20 = uVar20 + 1;
        } while ((int)uVar13 < iVar10);
      }
      piVar15 = &(this->Clusters).ArrayMax;
      if (uVar13 == (this->Clusters).ArrayNum) {
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_58.Data = (FScriptContainerElement *)0x0;
        iVar10 = local_78.Data.ArrayNum + -1;
        if (local_78.Data.ArrayNum == 0) {
          iVar10 = 0;
        }
        local_50 = 0;
        local_48.Data = (FScriptContainerElement *)0x0;
        local_40 = 0;
        ::FString::AssignRange(&local_68,(wchar_t *)local_78.Data.AllocatorInstance.Data,iVar10);
        pFVar1 = &(pFVar19->Info).Platform;
        if ((FString *)&local_58 != pFVar1) {
          iVar10 = (pFVar19->Info).Platform.Data.ArrayNum;
          pFVar16 = (pFVar1->Data).AllocatorInstance.Data;
          local_50 = CONCAT44(local_50._4_4_,iVar10);
          if ((iVar10 == 0) && (local_50._4_4_ == 0)) {
            local_50 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar10,local_50._4_4_,&local_58,iVar10,(int *)((longlong)&local_50 + 4));
            if (iVar10 != 0) {
              memcpy(local_58.Data,pFVar16,(longlong)iVar10 * 2);
            }
          }
        }
        if (((local_48.Data <= pFVar19) &&
            (pFVar19 < (FDeviceState *)(local_48.Data + (longlong)local_40._4_4_ * 0xe0))) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (int)local_40;
        if ((int)local_40 == local_40._4_4_) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x8e0,&local_48,(int *)((longlong)&local_40 + 4));
        }
        uVar5 = *(undefined8 *)&(pFVar19->DeviceMessageAddress).UniqueId.C;
        local_40 = CONCAT44(local_40._4_4_,iVar10 + 1);
        pFVar16 = local_48.Data + (longlong)iVar10 * 0xe0;
        *(undefined8 *)&pFVar16->field_0x0 =
             *(undefined8 *)&(pFVar19->DeviceMessageAddress).UniqueId;
        *(undefined8 *)(pFVar16 + 8) = uVar5;
        FAutomationDeviceInfo::FAutomationDeviceInfo
                  ((FAutomationDeviceInfo *)(pFVar16 + 0x10),&pFVar19->Info);
        *(IAutomationReport **)(pFVar16 + 200) = (pFVar19->Report).Object;
        pTVar3 = (pFVar19->Report).SharedReferenceCount.ReferenceController;
        *(TReferenceControllerBase<1> **)(pFVar16 + 0xd0) = pTVar3;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        pFVar16[0xd8] = (FScriptContainerElement)pFVar19->IsDeviceAvailable;
        pFVar16 = (this->Clusters).AllocatorInstance.Data;
        if (((pFVar16 <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < pFVar16 + (longlong)*piVar15 * 0x30)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = (this->Clusters).ArrayNum;
        if (iVar10 == *piVar15) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x830,(ForAnyElementType *)this,piVar15);
        }
        FVar6.Data = local_68.Data.AllocatorInstance.Data;
        (this->Clusters).ArrayNum = iVar10 + 1;
        pFVar16 = (this->Clusters).AllocatorInstance.Data + (longlong)iVar10 * 0x30;
        *(undefined8 *)&pFVar16->field_0x0 = 0;
        lVar18 = (longlong)local_68.Data.ArrayNum;
        *(int *)&pFVar16[8].field_0x0 = local_68.Data.ArrayNum;
        if (local_68.Data.ArrayNum == 0) {
          *(int *)(pFVar16 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,
                     local_68.Data.ArrayNum,(int *)(pFVar16 + 0xc));
          memcpy(*(void **)&pFVar16->field_0x0,FVar6.Data,lVar18 * 2);
        }
        FVar6.Data = local_58.Data;
        *(undefined8 *)&pFVar16[0x10].field_0x0 = 0;
        lVar18 = (longlong)(int)local_50;
        *(int *)&pFVar16[0x18].field_0x0 = (int)local_50;
        if ((int)local_50 == 0) {
          *(int *)(pFVar16 + 0x1c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_50,0,(ForAnyElementType *)(pFVar16 + 0x10),(int)local_50,
                     (int *)(pFVar16 + 0x1c));
          memcpy(*(FScriptContainerElement **)&pFVar16[0x10].field_0x0,FVar6.Data,lVar18 * 2);
        }
        FVar6.Data = local_48.Data;
        pFVar2 = pFVar16 + 0x20;
        *(FScriptContainerElement **)&pFVar2->field_0x0 = (FScriptContainerElement *)0x0;
        iVar10 = (int)local_40;
        *(int *)&pFVar16[0x28].field_0x0 = (int)local_40;
        if ((int)local_40 == 0) {
          *(int *)(pFVar16 + 0x2c) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xe0,8,(int)local_40,0,(ForAnyElementType *)pFVar2,(int)local_40,
                     (int *)(pFVar16 + 0x2c));
          ConstructItems<FAutomationDeviceClusterManager::FDeviceState,FAutomationDeviceClusterManager::FDeviceState,int>
                    (*(FScriptContainerElement **)&pFVar2->field_0x0,(FDeviceState *)FVar6.Data,
                     iVar10);
        }
        DestructItems<FAutomationDeviceClusterManager::FDeviceState,int>
                  ((FDeviceState *)local_48.Data,(int)local_40);
        if ((FDeviceState *)local_48.Data != (FDeviceState *)0x0) {
          FMemory::Free(local_48.Data);
        }
        if (local_58.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      local_res8 = local_res8 + 0xe0;
      uVar11 = (ulonglong)(uVar12 + 1);
    } while ((int)(uVar12 + 1) < local_80[0]);
  }
  DestructItems<FAutomationDeviceClusterManager::FDeviceState,int>
            ((FDeviceState *)local_88.Data,local_80[0]);
  if ((FDeviceState *)local_88.Data != (FDeviceState *)0x0) {
    FMemory::Free(local_88.Data);
  }
  return;
}

// Remove @ 148c66f00

void __thiscall
FAutomationDeviceClusterManager::Remove(FAutomationDeviceClusterManager *this,FGuid *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  void *_Dst;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong local_res20;
  
  iVar5 = (this->Clusters).ArrayNum;
  uVar10 = 0;
  if (0 < iVar5) {
    local_res20 = 0;
    do {
      uVar7 = ~uVar10 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar10 < iVar5) {
        uVar9 = uVar7;
      }
      if ((uVar9 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      uVar9 = *(int *)((this->Clusters).AllocatorInstance.Data + local_res20 + 0x28) - 1;
      if (-1 < (int)uVar9) {
        lVar11 = (longlong)(int)uVar9 * 0xe0;
        do {
          uVar4 = 0;
          if ((int)uVar10 < (this->Clusters).ArrayNum) {
            uVar4 = uVar7;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->Clusters).AllocatorInstance.Data;
          uVar8 = ~uVar9 >> 0x1f;
          uVar4 = 0;
          if ((int)uVar9 < *(int *)(pFVar1 + local_res20 + 0x28)) {
            uVar4 = uVar8;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          lVar6 = *(longlong *)(pFVar1 + local_res20 + 0x20) + lVar11;
          if (((*(uint *)(lVar6 + 0x28) == param_1->C && *(uint *)(lVar6 + 0x24) == param_1->B) &&
              *(uint *)(lVar6 + 0x2c) == param_1->D) && *(uint *)(lVar6 + 0x20) == param_1->A) {
            uVar4 = 0;
            if ((int)uVar10 < (this->Clusters).ArrayNum) {
              uVar4 = uVar7;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pFVar1 = (this->Clusters).AllocatorInstance.Data;
            uVar4 = 0;
            if ((int)uVar9 < *(int *)(pFVar1 + local_res20 + 0x28)) {
              uVar4 = uVar8;
            }
            if ((uVar4 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            _Dst = (void *)(*(longlong *)(pFVar1 + local_res20 + 0x20) + lVar11);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (*(TReferenceControllerBase<1> **)((longlong)_Dst + 0xd0));
            FAutomationDeviceInfo::~FAutomationDeviceInfo
                      ((FAutomationDeviceInfo *)((longlong)_Dst + 0x10));
            iVar5 = *(int *)(pFVar1 + local_res20 + 0x28) + ~uVar9;
            if (iVar5 != 0) {
              memmove(_Dst,(void *)((longlong)_Dst + 0xe0),(longlong)iVar5 * 0xe0);
            }
            *(int *)(pFVar1 + local_res20 + 0x28) = *(int *)(pFVar1 + local_res20 + 0x28) + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0xe0,8,(ForAnyElementType *)(pFVar1 + local_res20 + 0x20),
                       *(int *)(pFVar1 + local_res20 + 0x28),(int *)(pFVar1 + local_res20 + 0x2c));
          }
          lVar11 = lVar11 + -0xe0;
          uVar9 = uVar9 - 1;
        } while (-1 < (int)uVar9);
      }
      iVar5 = (this->Clusters).ArrayNum;
      local_res20 = local_res20 + 0x30;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < iVar5);
  }
  return;
}

// Reset @ 148c686d0

void __thiscall FAutomationDeviceClusterManager::Reset(FAutomationDeviceClusterManager *this)

{
  int *piVar1;
  
  DestructItems<FAutomationDeviceClusterManager::FDeviceCluster,int>
            ((FDeviceCluster *)(this->Clusters).AllocatorInstance.Data,(this->Clusters).ArrayNum);
  piVar1 = &(this->Clusters).ArrayMax;
  (this->Clusters).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// ResetAllDevicesRunningTest @ 148c68720

void __thiscall
FAutomationDeviceClusterManager::ResetAllDevicesRunningTest
          (FAutomationDeviceClusterManager *this,int param_1,
          TSharedPtr<IAutomationReport,1> *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined8 local_48;
  FSharedReferencer<1> FStack_40;
  
  lVar9 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if ((param_1 < 0) || (*piVar1 <= param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                       ,0x13d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar8 = lVar9 * 0x30;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar7 = 0;
  lVar10 = 0;
  while( true ) {
    uVar5 = 0;
    if (param_1 < *piVar1) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(int *)((this->Clusters).AllocatorInstance.Data + lVar8 + 0x28) <= (int)uVar7) break;
    uVar5 = 0;
    if (param_1 < *piVar1) {
      uVar5 = uVar11;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Clusters).AllocatorInstance.Data;
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(pFVar2 + lVar8 + 0x28)) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (*(IAutomationReport **)(lVar10 + 200 + *(longlong *)(pFVar2 + lVar8 + 0x20)) ==
        param_2->Object) {
      uVar5 = 0;
      if (param_1 < *piVar1) {
        uVar5 = uVar11;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this->Clusters).AllocatorInstance.Data;
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(pFVar2 + lVar9 * 0x30 + 0x28)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      puVar6 = (undefined8 *)(*(longlong *)(pFVar2 + lVar9 * 0x30 + 0x20) + 200 + lVar10);
      local_48 = 0;
      FStack_40.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (puVar6 != &local_48) {
        *puVar6 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(puVar6 + 1),&FStack_40);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_40.ReferenceController);
    }
    uVar7 = uVar7 + 1;
    lVar10 = lVar10 + 0xe0;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// SetTest @ 148c6b9c0

void __thiscall
FAutomationDeviceClusterManager::SetTest
          (FAutomationDeviceClusterManager *this,int param_1,int param_2,
          TSharedPtr<IAutomationReport,1> *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  IAutomationReport *pIVar4;
  code *pcVar5;
  TReferenceControllerBase<1> *pTVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  
  lVar9 = (longlong)param_1;
  piVar1 = &(this->Clusters).ArrayNum;
  if (((param_1 < 0) || (*piVar1 <= param_1)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ClusterIndex >= 0) && (ClusterIndex < Clusters.Num())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                         ,0x133,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (-1 < param_2) {
    uVar8 = 0;
    if (param_1 < *piVar1) {
      uVar8 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (param_2 < *(int *)((this->Clusters).AllocatorInstance.Data + lVar9 * 0x30 + 0x28))
    goto LAB_148c6bab4;
  }
  bVar7 = ::FDebug::CheckVerifyFailedImpl2
                    ("(DeviceIndex >= 0) && (DeviceIndex < Clusters[ClusterIndex].Devices.Num())",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                     ,0x134,L"");
  if (bVar7) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
LAB_148c6bab4:
  uVar8 = 0;
  if (param_1 < *piVar1) {
    uVar8 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar2 = (this->Clusters).AllocatorInstance.Data;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + lVar9 * 0x30 + 0x28)) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar9 = (longlong)param_2 * 0xe0 + *(longlong *)(pFVar2 + lVar9 * 0x30 + 0x20);
  pTVar3 = (param_3->SharedReferenceCount).ReferenceController;
  pIVar4 = param_3->Object;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar6 = *(TReferenceControllerBase<1> **)(lVar9 + 0xd0);
  *(IAutomationReport **)(lVar9 + 200) = pIVar4;
  *(TReferenceControllerBase<1> **)(lVar9 + 0xd0) = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return;
}

// UpdateDeviceFromMessage @ 148c6eb60

void __thiscall
FAutomationDeviceClusterManager::UpdateDeviceFromMessage
          (FAutomationDeviceClusterManager *this,FMessageAddress *param_1,
          FAutomationWorkerMessageBase *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  uint local_res18 [2];
  uint local_res20 [2];
  
  if ((((param_2->InstanceId).D == 0 && (param_2->InstanceId).C == 0) &&
      (param_2->InstanceId).B == 0) && (param_2->InstanceId).A == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Message.InstanceId.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\AutomationController\\Private\\AutomationDeviceClusterManager.cpp"
                       ,0x35,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res18[0] = 0xffffffff;
  local_res20[0] = 0xffffffff;
  bVar7 = FindDevice(this,&param_2->InstanceId,(int *)local_res18,(int *)local_res20);
  uVar6 = local_res18[0];
  if (bVar7) {
    uVar4 = *(undefined8 *)&param_1->UniqueId;
    uVar5 = *(undefined8 *)&(param_1->UniqueId).C;
    uVar8 = 0;
    if ((int)local_res18[0] < (this->Clusters).ArrayNum) {
      uVar8 = ~local_res18[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->Clusters).AllocatorInstance.Data;
    lVar9 = (longlong)(int)local_res20[0];
    uVar8 = 0;
    if ((int)local_res20[0] < *(int *)(pFVar2 + (longlong)(int)uVar6 * 0x30 + 0x28)) {
      uVar8 = ~local_res20[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    puVar1 = (undefined8 *)
             (lVar9 * 0xe0 + *(longlong *)(pFVar2 + (longlong)(int)uVar6 * 0x30 + 0x20));
    *puVar1 = uVar4;
    puVar1[1] = uVar5;
  }
  return;
}

