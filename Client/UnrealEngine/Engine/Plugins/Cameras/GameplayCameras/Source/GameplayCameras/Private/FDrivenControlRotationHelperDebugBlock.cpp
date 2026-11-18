// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetStaticFields @ 14d661750

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d661bf0

FCameraObjectTypeID * __thiscall
UE::Cameras::FDrivenControlRotationHelperDebugBlock::GetTypeID
          (FDrivenControlRotationHelperDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d662ed0

bool __thiscall
UE::Cameras::FDrivenControlRotationHelperDebugBlock::IsKindOf
          (FDrivenControlRotationHelperDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FDrivenControlRotationHelperDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d666470

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
UE::Cameras::FDrivenControlRotationHelperDebugBlock::OnDebugDraw
          (FDrivenControlRotationHelperDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  FString local_48;
  
  iVar4 = (this->MonitoringRequests).ArrayNum;
  if ((this->CachedControlRotations).ArrayNum < iVar4) {
    iVar4 = (this->CachedControlRotations).ArrayNum;
  }
  if ((this->ContextNames).ArrayNum < iVar4) {
    iVar4 = (this->ContextNames).ArrayNum;
  }
  FCameraDebugRenderer::AddText(param_2,L"%d monitored contexts");
  FCameraDebugRenderer::AddIndent(param_2);
  uVar7 = 0;
  if (0 < iVar4) {
    lVar6 = 0;
    do {
      uVar5 = ~uVar7 >> 0x1f;
      uVar3 = 0;
      if ((int)uVar7 < (this->CachedControlRotations).ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      ::FString::PrintfImpl(&local_48,L"P=%f Y=%f R=%f");
      uVar3 = 0;
      if ((int)uVar7 < (this->MonitoringRequests).ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar7 < (this->ContextNames).ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FCameraDebugRenderer::AddText
                (param_2,L"{cam_notice}\'%s\'{cam_passive} (%d requests){cam_defualt} : %s\n");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar4);
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  return;
}

// OnSerialize @ 14d66e620

void __thiscall
UE::Cameras::FDrivenControlRotationHelperDebugBlock::OnSerialize
          (FDrivenControlRotationHelperDebugBlock *this,FArchive *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res18 [8];
  
  pTVar3 = GetStaticFields();
  pFVar4 = (pTVar3->AllocatorInstance).Data;
  iVar2 = pTVar3->ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 8;
  while( true ) {
    if (pTVar3->ArrayNum != iVar2) {
      `TCheckedPointerIterator<UE::Cameras::FCameraDebugBlockField_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar4 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar4 + 8))(*(longlong **)pFVar4,this,param_1);
    pFVar4 = pFVar4 + 8;
  }
  return;
}

