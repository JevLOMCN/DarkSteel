// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 10

// AddLevel @ 148354da0

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
FVolumetricLightmapGridStreamingManager::AddLevel
          (FVolumetricLightmapGridStreamingManager *this,ULevel *param_1)

{
  return;
}

// BlockTillAllRequestsFinished @ 14835dcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVolumetricLightmapGridStreamingManager::BlockTillAllRequestsFinished
          (FVolumetricLightmapGridStreamingManager *this,float param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = FVolumetricLightmapGridManager::WaitForPendingRequest(this->Owner,param_1);
  return iVar1;
}

// CancelForcedResources @ 148362cf0

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
FVolumetricLightmapGridStreamingManager::CancelForcedResources
          (FVolumetricLightmapGridStreamingManager *this)

{
  return;
}

// GetNumWantingResources @ 1483848f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __thiscall
FVolumetricLightmapGridStreamingManager::GetNumWantingResources
          (FVolumetricLightmapGridStreamingManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FVolumetricLightmapGridManager *pFVar2;
  
  pFVar2 = this->Owner;
  lpCriticalSection = &pFVar2->PendingRequestsCriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (pFVar2->PendingCellRequests).ArrayNum;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// NotifyLevelChange @ 148395190

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
FVolumetricLightmapGridStreamingManager::NotifyLevelChange
          (FVolumetricLightmapGridStreamingManager *this)

{
  return;
}

// NotifyLevelOffset @ 1483951a0

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
FVolumetricLightmapGridStreamingManager::NotifyLevelOffset
          (FVolumetricLightmapGridStreamingManager *this,ULevel *param_1,TVector<double> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PrecomputedVolumetricLightmapStreaming.cpp"
                     ,0x8a,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RemoveLevel @ 1483a0c40

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
FVolumetricLightmapGridStreamingManager::RemoveLevel
          (FVolumetricLightmapGridStreamingManager *this,ULevel *param_1)

{
  return;
}

// SetDisregardWorldResourcesForFrames @ 1483a8bc0

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
FVolumetricLightmapGridStreamingManager::SetDisregardWorldResourcesForFrames
          (FVolumetricLightmapGridStreamingManager *this,int param_1)

{
  return;
}

// Tick @ 1483b00b0

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
FVolumetricLightmapGridStreamingManager::Tick
          (FVolumetricLightmapGridStreamingManager *this,float param_1,bool param_2)

{
  return;
}

// UpdateResourceStreaming @ 1483b7f90

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

void __thiscall
FVolumetricLightmapGridStreamingManager::UpdateResourceStreaming
          (FVolumetricLightmapGridStreamingManager *this,float param_1,bool param_2)

{
  UWorld *this_00;
  code *pcVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  AWorldSettings *pAVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStack_98 [32];
  longlong local_78;
  longlong local_70;
  TVector<double>_u_0 local_68;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_98;
  IStreamingManager::Get();
  iVar2 = IStreamingManager::CurrentViewInfos.ArrayNum;
  pFVar9 = (FScriptContainerElement *)0x0;
  this_00 = this->Owner->World;
  pFVar7 = pFVar9;
  pFVar8 = pFVar9;
  if (0 < IStreamingManager::CurrentViewInfos.ArrayNum) {
    do {
      IStreamingManager::Get();
      uVar6 = (uint)pFVar7;
      uVar4 = 0;
      if ((int)uVar6 < IStreamingManager::CurrentViewInfos.ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_70 = (longlong)IStreamingManager::CurrentViewInfos.ArrayNum;
        local_78 = (longlong)(int)uVar6;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar7 = IStreamingManager::CurrentViewInfos.AllocatorInstance.Data +
               (longlong)(int)uVar6 * 0x40;
      bVar3 = TWeakObjectPtr<UWorld,FWeakObjectPtr>::UEOpEquals<UWorld,bool>
                        ((TWeakObjectPtr<UWorld,FWeakObjectPtr> *)(pFVar7 + 0x34),this_00);
      if (bVar3) {
        pFVar9 = pFVar7;
        if (pFVar7 != (FScriptContainerElement *)0x0) goto LAB_1483b8095;
        break;
      }
      bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(pFVar7 + 0x34));
      if ((!bVar3) && (pFVar8 == (FScriptContainerElement *)0x0)) {
        pFVar8 = pFVar7;
      }
      pFVar7 = (FScriptContainerElement *)(ulonglong)(uVar6 + 1);
    } while ((int)(uVar6 + 1) < iVar2);
    pFVar7 = pFVar9;
    if (pFVar8 != (FScriptContainerElement *)0x0) {
LAB_1483b8095:
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        pFVar8 = pFVar7;
      }
      pAVar5 = UWorld::GetWorldSettings(this_00,false,true);
      local_40 = (double)pAVar5->VolumetricLightmapLoadingRange;
      local_38 = 1;
      local_68._s_0.X = *(double *)pFVar8 - local_40;
      local_68._s_0.Y = *(double *)(pFVar8 + 8) - local_40;
      local_50 = *(double *)pFVar8 + local_40;
      local_48 = *(double *)(pFVar8 + 8) + local_40;
      local_68._s_0.Z = *(double *)(pFVar8 + 0x10) - local_40;
      local_40 = *(double *)(pFVar8 + 0x10) + local_40;
      FVolumetricLightmapGridManager::UpdateBounds(this->Owner,(TBox<double> *)&local_68._s_0);
    }
  }
  return;
}

