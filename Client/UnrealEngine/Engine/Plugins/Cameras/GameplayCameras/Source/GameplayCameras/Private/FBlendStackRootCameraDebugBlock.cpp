// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 5

// GetStaticFields @ 14d558af0

TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> * __cdecl
UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      atexit(`UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields'::__l2::
             _dynamic_atexit_destructor_for__StaticFields__);
      _Init_thread_footer(&`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  return (TArray<UE::Cameras::FCameraDebugBlockField_*,TSizedDefaultAllocator<32>_> *)
         &`private:_static_class_TArray<UE::Cameras::FCameraDebugBlockField*___ptr64,TSizedDefaultAllocator<32>_>&___ptr64___cdecl_UE::Cameras::FBlendStackRootCameraDebugBlock::GetStaticFields(void)'
          ::__l2::StaticFields;
}

// GetTypeID @ 14d558cd0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStackRootCameraDebugBlock::GetTypeID(FBlendStackRootCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d55a430

bool __thiscall
UE::Cameras::FBlendStackRootCameraDebugBlock::IsKindOf
          (FBlendStackRootCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStackRootCameraDebugBlock>)param_1->ID !=
       PrivateTypeID) &&
     ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
      FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d55b750

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
UE::Cameras::FBlendStackRootCameraDebugBlock::OnDebugDraw
          (FBlendStackRootCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  FCameraDebugBlock *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong lVar10;
  
  iVar2 = (int)this->_padding_;
  puVar4 = (undefined8 *)this->_padding_;
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FCameraDebugRenderer::AddText(param_2,L"{cam_passive}<Blend>{cam_default}\n");
  FCameraDebugRenderer::AddIndent(param_2);
  if ((iVar2 < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)*puVar4,param_1,param_2);
  FCameraDebugRenderer::RemoveIndent(param_2);
  if ((this->BlendedParameterOverridesEntries).ArrayNum != 0) {
    FCameraDebugRenderer::AddText(param_2,L"{cam_passive}<%d Merged Camera Rigs>{cam_default}\n");
    FCameraDebugRenderer::AddIndent(param_2);
    uVar9 = 0;
    if ((iVar2 < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar3 = *(int *)(puVar4[1] + 0x20);
    puVar8 = *(undefined8 **)(puVar4[1] + 0x18);
    if ((iVar3 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    puVar1 = puVar8 + iVar3;
    for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
      this_00 = (FCameraDebugBlock *)*puVar8;
      lVar10 = (longlong)(int)uVar9;
      uVar7 = 0;
      if ((int)uVar9 < (this->BlendedParameterOverridesEntries).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar9 = uVar9 + 1;
      FCameraDebugRenderer::AddText
                (param_2,(FString *)
                         ((this->BlendedParameterOverridesEntries).AllocatorInstance.Data +
                         lVar10 * 0x10));
      FCameraDebugBlock::DebugDraw(this_00,param_1,param_2);
    }
    FCameraDebugRenderer::RemoveIndent(param_2);
  }
  FCameraDebugRenderer::AddText
            (param_2,L"{cam_passive}<CameraRig> {cam_default}Running {cam_notice}%s{cam_default}\n")
  ;
  FCameraDebugRenderer::AddIndent(param_2);
  if ((iVar2 < 3) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FCameraDebugBlock::DebugDraw((FCameraDebugBlock *)puVar4[2],param_1,param_2);
  FCameraDebugRenderer::RemoveIndent(param_2);
  FCameraDebugRenderer::SkipAllBlocks(param_2);
  return;
}

// OnSerialize @ 14d55d320

void __thiscall
UE::Cameras::FBlendStackRootCameraDebugBlock::OnSerialize
          (FBlendStackRootCameraDebugBlock *this,FArchive *param_1)

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

