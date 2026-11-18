// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 4

// FindOrAddDisplayConfiguration @ 14d76fd30

FOpenColorIODisplayConfiguration * __thiscall
FOpenColorIODisplayManager::FindOrAddDisplayConfiguration
          (FOpenColorIODisplayManager *this,FViewportClient *param_1)

{
  TArray<TSharedPtr<FOpenColorIODisplayExtension,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FOpenColorIODisplayExtension *pFVar6;
  FOpenColorIODisplayConfiguration *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FAutoRegister local_res8 [8];
  TRawPtrProxy<FOpenColorIODisplayExtension> local_res10;
  FOpenColorIODisplayExtension *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  TSharedRef<FOpenColorIODisplayExtension,1> local_28;
  TSharedRef<ISceneViewExtension,1> local_18;
  
  pFVar9 = (this->DisplayExtensions).AllocatorInstance.Data;
  pTVar1 = &this->DisplayExtensions;
  pFVar8 = pFVar9 + (longlong)(this->DisplayExtensions).ArrayNum * 0x10;
  do {
    if (pFVar9 == pFVar8) {
      pFVar6 = ::operator_new(0x110);
      if (pFVar6 == (FOpenColorIODisplayExtension *)0x0) {
        local_res10.Object = (FOpenColorIODisplayExtension *)0x0;
      }
      else {
        local_res10.Object =
             FOpenColorIODisplayExtension::FOpenColorIODisplayExtension(pFVar6,local_res8,param_1);
        if ((((local_res10.Object != (FOpenColorIODisplayExtension *)0x0) &&
             ((local_res10.Object)->_padding_ != 0)) && ((local_res10.Object)->_padding_ != 0)) &&
           ((0 < *(int *)((local_res10.Object)->_padding_ + 8) &&
            (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                               ("!InObject || !InObject->DoesSharedInstanceExist()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x7a5,L"Trying to share an already-shared object"), bVar4)))) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FOpenColorIODisplayConfiguration *)(*pcVar3)();
          return pFVar7;
        }
      }
      TSharedRef<FOpenColorIODisplayExtension,1>::
      TSharedRef<FOpenColorIODisplayExtension,1><FOpenColorIODisplayExtension>
                (&local_28,&local_res10);
      local_18.Object = (ISceneViewExtension *)local_28.Object;
      local_18.SharedReferenceCount.ReferenceController =
           local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      FSceneViewExtensions::RegisterExtension(&local_18);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_18.SharedReferenceCount.ReferenceController);
      local_38 = local_28.Object;
      pTStack_30 = local_28.SharedReferenceCount.ReferenceController;
      if (local_28.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_28.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.SharedReferenceCount.ReferenceController);
      pFVar9 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar9 <= (FScriptContainerElement *)&local_38) &&
          ((FScriptContainerElement *)&local_38 <
           pFVar9 + (longlong)(this->DisplayExtensions).ArrayMax * 0x10)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOpenColorIODisplayConfiguration *)(*pcVar3)();
        return pFVar7;
      }
      iVar5 = (this->DisplayExtensions).ArrayNum;
      piVar2 = &(this->DisplayExtensions).ArrayMax;
      if (iVar5 == *piVar2) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      pFVar9 = (pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
      (this->DisplayExtensions).ArrayNum = iVar5 + 1;
      *(FOpenColorIODisplayExtension **)pFVar9 = local_38;
      *(TReferenceControllerBase<1> **)(pFVar9 + 8) = pTStack_30;
      if (pTStack_30 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_30->SharedReferenceCount = (atomic<int>)((int)pTStack_30->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_38 == (FOpenColorIODisplayExtension *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FOpenColorIODisplayConfiguration *)(*pcVar3)();
        return pFVar7;
      }
      pFVar6 = local_38;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
LAB_14d76ff58:
      return &pFVar6->DisplayConfiguration;
    }
    pFVar6 = *(FOpenColorIODisplayExtension **)pFVar9;
    if ((pFVar6 != (FOpenColorIODisplayExtension *)0x0) && (param_1 == pFVar6->LinkedViewportClient)
       ) {
      FOpenColorIOColorConversionSettings::ValidateColorSpaces
                (&(pFVar6->DisplayConfiguration).ColorConfiguration);
      goto LAB_14d76ff58;
    }
    pFVar9 = pFVar9 + 0x10;
  } while( true );
}

// GetDisplayConfiguration @ 14d770da0

FOpenColorIODisplayConfiguration * __thiscall
FOpenColorIODisplayManager::GetDisplayConfiguration
          (FOpenColorIODisplayManager *this,FViewportClient *param_1)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar2 = (this->DisplayExtensions).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)(this->DisplayExtensions).ArrayNum * 0x10;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FOpenColorIODisplayConfiguration *)0x0;
    }
    lVar1 = *(longlong *)pFVar2;
    if ((lVar1 != 0) && (param_1 == *(FViewportClient **)(lVar1 + 0x108))) break;
    pFVar2 = pFVar2 + 0x10;
  }
  FOpenColorIOColorConversionSettings::ValidateColorSpaces
            ((FOpenColorIOColorConversionSettings *)(lVar1 + 0x68));
  return (FOpenColorIODisplayConfiguration *)(lVar1 + 0x60);
}

// IsTrackingViewport @ 14d773790

bool __thiscall
FOpenColorIODisplayManager::IsTrackingViewport
          (FOpenColorIODisplayManager *this,FViewportClient *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->DisplayExtensions).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (longlong)(this->DisplayExtensions).ArrayNum * 0x10;
  for (; pFVar1 != pFVar2; pFVar1 = pFVar1 + 0x10) {
    if ((*(longlong *)pFVar1 != 0) &&
       (param_1 == *(FViewportClient **)(*(longlong *)pFVar1 + 0x108))) goto LAB_14d7737c0;
  }
  pFVar1 = (FScriptContainerElement *)0x0;
LAB_14d7737c0:
  return pFVar1 != (FScriptContainerElement *)0x0;
}

// RemoveDisplayConfiguration @ 14d775e30

bool __thiscall
FOpenColorIODisplayManager::RemoveDisplayConfiguration
          (FOpenColorIODisplayManager *this,FViewportClient *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  
  pFVar2 = (this->DisplayExtensions).AllocatorInstance.Data;
  iVar1 = (this->DisplayExtensions).ArrayNum;
  pFVar8 = pFVar2;
  while( true ) {
    if (pFVar8 == pFVar2 + (longlong)iVar1 * 0x10) {
      return false;
    }
    if ((*(longlong *)pFVar8 != 0) &&
       (param_1 == *(FViewportClient **)(*(longlong *)pFVar8 + 0x108))) break;
    pFVar8 = pFVar8 + 0x10;
  }
  uVar7 = (uint)((longlong)pFVar8 - (longlong)pFVar2 >> 4);
  if (uVar7 == 0xffffffff) {
    return false;
  }
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
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
  TArray<TSharedPtr<FOpenColorIODisplayExtension,1>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
            (&this->DisplayExtensions,uVar7);
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,&(this->DisplayExtensions).AllocatorInstance,(this->DisplayExtensions).ArrayNum,
             &(this->DisplayExtensions).ArrayMax);
  return true;
}

