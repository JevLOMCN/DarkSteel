// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 21

// ~FWidgetSnapshotData @ 142e149b0

void __thiscall FWidgetSnapshotData::~FWidgetSnapshotData(FWidgetSnapshotData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestroyBrushes(this);
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)
             (this->EmptyNavigationSimulationData).SimulationData.AllocatorInstance.Data,
             (this->EmptyNavigationSimulationData).SimulationData.ArrayNum);
  pFVar1 = (this->EmptyNavigationSimulationData).SimulationData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>
            ((TSharedPtr<FSlateDynamicImageBrush,1> *)
             (this->WindowTextureBrushes).AllocatorInstance.Data,
             (this->WindowTextureBrushes).ArrayNum);
  pFVar1 = (this->WindowTextureBrushes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWidgetSnapshotTextureData,int>
            ((FWidgetSnapshotTextureData *)(this->WindowTextureData).AllocatorInstance.Data,
             (this->WindowTextureData).ArrayNum);
  pFVar1 = (this->WindowTextureData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWidgetSnapshotNavigationSimulationData,int>
            ((FWidgetSnapshotNavigationSimulationData *)
             (this->NavigationSimulationData).AllocatorInstance.Data,
             (this->NavigationSimulationData).ArrayNum);
  pFVar1 = (this->NavigationSimulationData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>
            ((TSharedPtr<FWidgetReflectorNodeBase,1> *)(this->Windows).AllocatorInstance.Data,
             (this->Windows).ArrayNum);
  pFVar1 = (this->Windows).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ClearSnapshot @ 142e31a90

void __thiscall FWidgetSnapshotData::ClearSnapshot(FWidgetSnapshotData *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FWidgetSnapshotTextureData *pFVar5;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar6;
  
  DestroyBrushes(this);
  piVar1 = &(this->Windows).ArrayMax;
  pTVar3 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(this->Windows).AllocatorInstance.Data;
  iVar2 = (this->Windows).ArrayNum;
  if ((this->Windows).ArrayMax < 0) {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->Windows).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->Windows).ArrayNum = 0;
  }
  piVar1 = &(this->NavigationSimulationData).ArrayMax;
  pFVar4 = (this->NavigationSimulationData).AllocatorInstance.Data;
  iVar2 = (this->NavigationSimulationData).ArrayNum;
  if ((this->NavigationSimulationData).ArrayMax < 0) {
    DestructItems<FWidgetSnapshotNavigationSimulationData,int>
              ((FWidgetSnapshotNavigationSimulationData *)pFVar4,iVar2);
    (this->NavigationSimulationData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->NavigationSimulationData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FWidgetSnapshotNavigationSimulationData,int>
              ((FWidgetSnapshotNavigationSimulationData *)pFVar4,iVar2);
    (this->NavigationSimulationData).ArrayNum = 0;
  }
  piVar1 = &(this->WindowTextureData).ArrayMax;
  pFVar5 = (FWidgetSnapshotTextureData *)(this->WindowTextureData).AllocatorInstance.Data;
  iVar2 = (this->WindowTextureData).ArrayNum;
  if ((this->WindowTextureData).ArrayMax < 0) {
    DestructItems<FWidgetSnapshotTextureData,int>(pFVar5,iVar2);
    (this->WindowTextureData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->WindowTextureData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FWidgetSnapshotTextureData,int>(pFVar5,iVar2);
    (this->WindowTextureData).ArrayNum = 0;
  }
  piVar1 = &(this->WindowTextureBrushes).ArrayMax;
  pTVar6 = (TSharedPtr<FSlateDynamicImageBrush,1> *)
           (this->WindowTextureBrushes).AllocatorInstance.Data;
  iVar2 = (this->WindowTextureBrushes).ArrayNum;
  if (-1 < (this->WindowTextureBrushes).ArrayMax) {
    DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar6,iVar2);
    (this->WindowTextureBrushes).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar6,iVar2);
  (this->WindowTextureBrushes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->WindowTextureBrushes).AllocatorInstance,0,piVar1);
  }
  return;
}

// CreateBrushes @ 142e57900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FWidgetSnapshotData::CreateBrushes(FWidgetSnapshotData *this)

{
  TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  FName *pFVar12;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar13;
  ForAnyElementType FVar14;
  FScriptContainerElement *pFVar15;
  int *piVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c8;
  FScriptContainerElement *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  float local_a0;
  float local_9c;
  FScriptContainerElement *local_98;
  FString local_90;
  FName local_80;
  FLinearColor_u_0 local_78;
  TSharedPtr<FSlateDynamicImageBrush,1> local_68 [2];
  
  DestroyBrushes(this);
  uVar3 = (this->WindowTextureData).ArrayNum;
  pTVar1 = &this->WindowTextureBrushes;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar16 = &(this->WindowTextureBrushes).ArrayMax;
  if (*piVar16 < (int)uVar3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar3,&pTVar1->AllocatorInstance,(this->WindowTextureBrushes).ArrayNum,piVar16
              );
  }
  uVar7 = _UNK_15076b1f8;
  uVar6 = ___xmm_3f8000003f8000003f8000003f800000;
  local_res20 = (this->WindowTextureData).ArrayNum;
  uVar11 = (ulonglong)(int)local_res20;
  pFVar15 = (this->WindowTextureData).AllocatorInstance.Data;
  local_98 = pFVar15 + uVar11 * 0x20;
  pFVar19 = pFVar15 + 0x18;
  pFVar18 = local_98;
  do {
    while( true ) {
      piVar16 = &(this->WindowTextureBrushes).ArrayMax;
      local_b8 = pFVar15;
      if ((this->WindowTextureData).ArrayNum != (int)uVar11) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FWidgetSnapshotTextureData,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
      }
      if (pFVar15 == pFVar18) {
        return;
      }
      if (0 < *(int *)pFVar19) break;
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      local_b0 = 0;
      uStack_a8 = 0;
      if (((pFVar17 <= (FScriptContainerElement *)&local_b0) &&
          ((FScriptContainerElement *)&local_b0 < pFVar17 + (longlong)*piVar16 * 0x10)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (this->WindowTextureBrushes).ArrayNum;
      if (iVar10 == *piVar16) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar16);
      }
      (this->WindowTextureBrushes).ArrayNum = iVar10 + 1;
      pFVar17 = (pTVar1->AllocatorInstance).Data;
      *(undefined8 *)(pFVar17 + (longlong)iVar10 * 0x10) = local_b0;
      *(undefined8 *)(pFVar17 + (longlong)iVar10 * 0x10 + 8) = uStack_a8;
      uStack_a8 = 0;
      local_b0 = 0;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      uVar11 = (ulonglong)local_res20;
      pFVar15 = pFVar15 + 0x20;
      pFVar19 = pFVar19 + 0x20;
    }
    uVar3 = *(int *)pFVar19 * 4;
    local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.ArrayNum = 0;
    local_c8.ArrayMax = 0;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if (0 < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar3,&local_c8.AllocatorInstance,0,&local_c8.ArrayMax);
    }
    pFVar17 = *(FScriptContainerElement **)(pFVar19 + -8);
    iVar10 = *(int *)pFVar19;
    pFVar15 = pFVar17 + 2;
    pFVar18 = pFVar17 + (longlong)iVar10 * 4;
    while( true ) {
      if (*(int *)pFVar19 != iVar10) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FColor_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar17 == pFVar18) break;
      if (((local_c8.AllocatorInstance.Data <= pFVar17) &&
          (pFVar17 < local_c8.AllocatorInstance.Data + local_c8.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
        local_c8.ArrayNum = iVar9;
      }
      pFVar2 = pFVar15 + -1;
      iVar9 = local_c8.ArrayNum + 1;
      local_c8.AllocatorInstance.Data[local_c8.ArrayNum] = *pFVar17;
      local_c8.ArrayNum = iVar9;
      if (((local_c8.AllocatorInstance.Data <= pFVar2) &&
          (pFVar2 < local_c8.AllocatorInstance.Data + local_c8.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      iVar9 = local_c8.ArrayNum + 1;
      local_c8.AllocatorInstance.Data[local_c8.ArrayNum] = *pFVar2;
      local_c8.ArrayNum = iVar9;
      if (((local_c8.AllocatorInstance.Data <= pFVar15) &&
          (pFVar15 < local_c8.AllocatorInstance.Data + local_c8.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        local_c8.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x101,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      iVar9 = local_c8.ArrayNum + 1;
      pFVar2 = pFVar15 + 1;
      local_c8.AllocatorInstance.Data[local_c8.ArrayNum] = *pFVar15;
      local_c8.ArrayNum = iVar9;
      if (((local_c8.AllocatorInstance.Data <= pFVar2) &&
          (pFVar2 < local_c8.AllocatorInstance.Data + local_c8.ArrayMax)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar9 = local_c8.ArrayNum;
      if (local_c8.ArrayNum == local_c8.ArrayMax) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&local_c8.AllocatorInstance,&local_c8.ArrayMax);
      }
      pFVar17 = pFVar17 + 4;
      local_c8.ArrayNum = iVar9 + 1;
      pFVar15 = pFVar15 + 4;
      local_c8.AllocatorInstance.Data[iVar9] = *pFVar2;
    }
    local_9c = (float)*(int *)(pFVar19 + -0x14);
    TextureIndex = TextureIndex + 1;
    local_a0 = (float)*(int *)local_b8;
    local_78._0_8_ = uVar6;
    local_78._8_8_ = uVar7;
    ::FString::PrintfImpl(&local_90,L"FWidgetSnapshotData_WindowTextureBrush_%d");
    FVar14.Data = (FScriptContainerElement *)L"";
    if (local_90.Data.ArrayNum != 0) {
      FVar14.Data = local_90.Data.AllocatorInstance.Data;
    }
    pFVar12 = ::FName::FName(&local_80,(wchar_t *)FVar14.Data);
    pTVar13 = FSlateDynamicImageBrush::CreateWithImageData
                        (local_68,*pFVar12,(FDeprecateVector2DParameter *)&local_a0,&local_c8,
                         (FLinearColor *)&local_78._s_0,NoTile,FullColor);
    pTVar4 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(pTVar1->AllocatorInstance).Data;
    piVar16 = &(this->WindowTextureBrushes).ArrayMax;
    if (((pTVar4 <= pTVar13) && (pTVar13 < pTVar4 + *piVar16)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = (this->WindowTextureBrushes).ArrayNum;
    if (iVar10 == *piVar16) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar1->AllocatorInstance,piVar16);
    }
    (this->WindowTextureBrushes).ArrayNum = iVar10 + 1;
    pFVar15 = (pTVar1->AllocatorInstance).Data;
    *(FSlateDynamicImageBrush **)(pFVar15 + (longlong)iVar10 * 0x10) = pTVar13->Object;
    *(TReferenceControllerBase<1> **)(pFVar15 + (longlong)iVar10 * 0x10 + 8) =
         (pTVar13->SharedReferenceCount).ReferenceController;
    (pTVar13->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar13->Object = (FSlateDynamicImageBrush *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68[0].SharedReferenceCount.ReferenceController);
    if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.Data.AllocatorInstance.Data);
    }
    if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.AllocatorInstance.Data);
    }
    pFVar15 = local_b8 + 0x20;
    pFVar19 = pFVar19 + 0x20;
    uVar11 = (ulonglong)local_res20;
    pFVar18 = local_98;
  } while( true );
}

// CreateSnapshot @ 142e6d520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FWidgetSnapshotData::CreateSnapshot
          (FWidgetSnapshotData *this,
          TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  undefined8 uVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetReflectorNodeBase *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  FGeometry *pFVar11;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar12;
  IModuleInterface *pIVar13;
  FSlateNavigationEventSimulator *this_00;
  FSlateApplication *pFVar14;
  ForElementType<FArrangedWidget> FVar15;
  FScriptContainerElement *pFVar16;
  int *piVar17;
  FScriptContainerElement *pFVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined1 auStackY_318 [32];
  undefined1 local_2c8;
  char local_2c7;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *local_2c0;
  undefined8 local_2b8;
  FWidgetReflectorNodeBase *local_2b0;
  TReferenceControllerBase<1> *local_2a8;
  uint local_2a0;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> local_298;
  TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_> local_288;
  TArray<FSlateNavigationEventSimulator::FSimulationResult,TSizedDefaultAllocator<32>_> local_278;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> *local_268;
  FScriptContainerElement *local_260;
  TSharedRef<SWidget,1> local_258;
  FArrangedWidget local_248;
  TSharedRef<FWidgetReflectorNodeBase,1> local_1f8;
  undefined8 local_1e8;
  longlong local_1e0;
  FWidgetPath local_1d8;
  FGeometry local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2c7 = param_2;
  local_268 = param_1;
  Reset(this);
  uVar8 = param_1->ArrayNum;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar17 = &(this->Windows).ArrayMax;
  if (*piVar17 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8,(ForAnyElementType *)this,(this->Windows).ArrayNum,piVar17);
  }
  if ((this->NavigationSimulationData).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8,&(this->NavigationSimulationData).AllocatorInstance,
               (this->NavigationSimulationData).ArrayNum,&(this->NavigationSimulationData).ArrayMax)
    ;
  }
  if ((this->WindowTextureData).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar8,&(this->WindowTextureData).AllocatorInstance,
               (this->WindowTextureData).ArrayNum,&(this->WindowTextureData).ArrayMax);
  }
  if ((this->WindowTextureBrushes).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar8,&(this->WindowTextureBrushes).AllocatorInstance,
               (this->WindowTextureBrushes).ArrayNum,&(this->WindowTextureBrushes).ArrayMax);
  }
  local_2a0 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)local_2a0;
  pFVar18 = (param_1->AllocatorInstance).Data;
  local_260 = pFVar18 + uVar10 * 0x10;
  while( true ) {
    pFVar16 = local_260;
    piVar17 = &(this->NavigationSimulationData).ArrayMax;
    if (param_1->ArrayNum != (int)uVar10) {
      local_2c8 = 0;
      `TCheckedPointerIterator<TSharedRef<SWindow,1>_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_2c8);
    }
    if (pFVar18 == pFVar16) break;
    pFVar11 = SWindow::GetWindowGeometryInScreen(*(SWindow **)pFVar18,&local_78);
    local_248.Widget.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar18 + 8);
    local_248.Widget.Object = *(SWidget **)pFVar18;
    if (local_248.Widget.SharedReferenceCount.ReferenceController ==
        (TReferenceControllerBase<1> *)0x0) {
      local_248.Geometry.Size = pFVar11->Size;
      local_248.Geometry._8_8_ = *(undefined8 *)&pFVar11->Scale;
      local_248.Geometry._16_8_ =
           *(undefined8 *)((longlong)&(pFVar11->AbsolutePosition).field0_0x0 + 4);
      local_248.Geometry._24_8_ = *(undefined8 *)((longlong)&(pFVar11->Position).field0_0x0 + 4);
      local_248.Geometry.AccumulatedRenderTransform.M.M[0][1] =
           (pFVar11->AccumulatedRenderTransform).M.M[0][1];
      local_248.Geometry.AccumulatedRenderTransform.M.M[1][0] =
           (pFVar11->AccumulatedRenderTransform).M.M[1][0];
      local_248.Geometry.AccumulatedRenderTransform.M.M[1][1] =
           (pFVar11->AccumulatedRenderTransform).M.M[1][1];
      local_248.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X =
           (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      uVar1 = *(undefined8 *)&(pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      uVar19 = (undefined4)uVar1;
      uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      LOCK();
      (local_248.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_248.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
      local_248.Geometry.Size = pFVar11->Size;
      local_248.Geometry._8_8_ = *(undefined8 *)&pFVar11->Scale;
      local_248.Geometry._16_8_ =
           *(undefined8 *)((longlong)&(pFVar11->AbsolutePosition).field0_0x0 + 4);
      local_248.Geometry._24_8_ = *(undefined8 *)((longlong)&(pFVar11->Position).field0_0x0 + 4);
      local_248.Geometry.AccumulatedRenderTransform.M.M[0][1] =
           (pFVar11->AccumulatedRenderTransform).M.M[0][1];
      local_248.Geometry.AccumulatedRenderTransform.M.M[1][0] =
           (pFVar11->AccumulatedRenderTransform).M.M[1][0];
      local_248.Geometry.AccumulatedRenderTransform.M.M[1][1] =
           (pFVar11->AccumulatedRenderTransform).M.M[1][1];
      local_248.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.X =
           (pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
      uVar1 = *(undefined8 *)&(pFVar11->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y;
      uVar19 = (undefined4)uVar1;
      uVar20 = (undefined4)((ulonglong)uVar1 >> 0x20);
      LOCK();
      (local_248.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_248.Widget.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
           1);
      UNLOCK();
    }
    local_248.Geometry._52_4_ = uVar20;
    local_248.Geometry.AccumulatedRenderTransform.Trans.field0_0x0._s_0.Y = (float)uVar19;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.Widget.SharedReferenceCount.ReferenceController);
    pTVar12 = FWidgetReflectorNodeUtils::NewNodeTreeFrom(&local_1f8,Snapshot,&local_248);
    pTVar2 = (pTVar12->SharedReferenceCount).ReferenceController;
    pFVar3 = pTVar12->Object;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
    }
    else {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1f8.SharedReferenceCount.ReferenceController);
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar16 = (this->Windows).AllocatorInstance.Data;
    local_2b0 = pFVar3;
    local_2a8 = pTVar2;
    if ((pFVar16 <= (FScriptContainerElement *)&local_2b0) &&
       ((FScriptContainerElement *)&local_2b0 < pFVar16 + (longlong)(this->Windows).ArrayMax * 0x10)
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->Windows).ArrayNum;
    if (iVar7 == (this->Windows).ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,&(this->Windows).ArrayMax);
    }
    (this->Windows).ArrayNum = iVar7 + 1;
    pFVar16 = (this->Windows).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(FWidgetReflectorNodeBase **)pFVar16 = local_2b0;
    *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_2a8;
    local_2a8 = (TReferenceControllerBase<1> *)0x0;
    local_2b0 = (FWidgetReflectorNodeBase *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_248.Widget.SharedReferenceCount.ReferenceController);
    if (local_2c7 != '\0') {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) <
          `public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
          ::__l2::_thread_safe_static_guard_0__) {
        _Init_thread_header(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                             ::__l2::_thread_safe_static_guard_0__);
        if (`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
            ::__l2::_thread_safe_static_guard_0__ == -1) {
          ::FName::FName(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                          ::__l2::ModuleName,"SlateReflector");
          _Init_thread_footer(&`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
      }
      pIVar13 = FModuleManager::GetModulePtr_Internal
                          (`public:_static_class_FSlateReflectorModule*___ptr64___cdecl_FSlateReflectorModule::GetModulePtr(void)'
                           ::__l2::ModuleName);
      this_00 = (FSlateNavigationEventSimulator *)(**(code **)((longlong)*pIVar13 + 0x68))(pIVar13);
      FWidgetPath::FWidgetPath(&local_1d8);
      pFVar14 = FSlateApplication::Get();
      pcVar4 = *(code **)(*(longlong *)pFVar14 + 0x20);
      local_1e8 = *(undefined8 *)pFVar18;
      local_1e0 = *(longlong *)(pFVar18 + 8);
      if (local_1e0 != 0) {
        LOCK();
        *(int *)(local_1e0 + 8) = *(int *)(local_1e0 + 8) + 1;
        UNLOCK();
      }
      (*pcVar4)(pFVar14,&local_1e8,&local_1d8);
      FSlateNavigationEventSimulator::SimulateForEachWidgets
                (this_00,&local_298,&local_1d8,0,Controller,FourCardinalDirections);
      if (local_1d8.VirtualPointerPositions.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_1d8.VirtualPointerPositions.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1d8.TopLevelWindow.SharedReferenceCount.ReferenceController);
      FVar15 = (ForElementType<FArrangedWidget>)&local_1d8.Widgets.Array;
      if (local_1d8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FVar15 = local_1d8.Widgets.Array.AllocatorInstance.SecondaryData;
      }
      DestructItems<FArrangedWidget,int>((FArrangedWidget *)FVar15,local_1d8.Widgets.Array.ArrayNum)
      ;
      if (local_1d8.Widgets.Array.AllocatorInstance.SecondaryData !=
          (ForElementType<FArrangedWidget>)0x0) {
        FMemory::Free((void *)local_1d8.Widgets.Array.AllocatorInstance.SecondaryData);
      }
      DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
                ((FSimulationResult *)0x0,0);
      local_278.AllocatorInstance.Data = local_298.AllocatorInstance.Data;
      local_278.ArrayNum = local_298.ArrayNum;
      local_278.ArrayMax = local_298.ArrayMax;
      local_298.ArrayNum = 0;
      local_298.ArrayMax = 0;
      local_298.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
                ((FSimulationResult *)0x0,0);
      if ((FSimulationResult *)local_298.AllocatorInstance.Data != (FSimulationResult *)0x0) {
        FMemory::Free(local_298.AllocatorInstance.Data);
      }
      local_2c0 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0;
      local_2b8 = 0;
      NavigationSimulationNodeUtilsInternal::BuildNavigationSimulationNodeList
                (&local_288,Snapshot,&local_278);
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>(local_2c0,(int)local_2b8);
      if (local_2c0 != (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0) {
        FMemory::Free(local_2c0);
      }
      local_2c0 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)local_288.AllocatorInstance.Data;
      local_2b8._0_4_ = local_288.ArrayNum;
      local_2b8._4_4_ = local_288.ArrayMax;
      local_288.ArrayNum = 0;
      local_288.ArrayMax = 0;
      local_288.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0,0);
      pFVar16 = (this->NavigationSimulationData).AllocatorInstance.Data;
      if ((pFVar16 <= (FScriptContainerElement *)&local_2c0) &&
         ((FScriptContainerElement *)&local_2c0 < pFVar16 + (longlong)*piVar17 * 0x10)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->NavigationSimulationData).ArrayNum;
      if (iVar7 == *piVar17) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(this->NavigationSimulationData).AllocatorInstance,piVar17);
      }
      (this->NavigationSimulationData).ArrayNum = iVar7 + 1;
      pFVar16 = (this->NavigationSimulationData).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
      *(undefined8 *)pFVar16 = 0;
      *(TSharedPtr<FNavigationSimulationWidgetNode,1> **)pFVar16 = local_2c0;
      local_2c0 = (void *)0x0;
      *(int *)(pFVar16 + 8) = (int)local_2b8;
      *(int *)(pFVar16 + 0xc) = local_2b8._4_4_;
      local_2b8 = 0;
      DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
                ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0,0);
      if (local_2c0 != (void *)0x0) {
        FMemory::Free(local_2c0);
      }
      FVar5.Data = local_278.AllocatorInstance.Data;
      DestructItems<FSlateNavigationEventSimulator::FSimulationResult,int>
                ((FSimulationResult *)local_278.AllocatorInstance.Data,local_278.ArrayNum);
      if ((FSimulationResult *)FVar5.Data != (FSimulationResult *)0x0) {
        FMemory::Free(FVar5.Data);
      }
    }
    uVar8 = (this->WindowTextureData).ArrayNum;
    if (uVar8 == (this->WindowTextureData).ArrayMax) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x820,&(this->WindowTextureData).AllocatorInstance,
                         &(this->WindowTextureData).ArrayMax);
    }
    (this->WindowTextureData).ArrayNum = uVar8 + 1;
    DefaultConstructItems<FWidgetSnapshotTextureData,int>
              ((this->WindowTextureData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20,1);
    uVar9 = 0;
    if ((int)uVar8 < (this->WindowTextureData).ArrayNum) {
      uVar9 = ~uVar8 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar16 = (this->WindowTextureData).AllocatorInstance.Data + (longlong)(int)uVar8 * 0x20;
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentApplication.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                         ,0x141,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar6 = IsInGameThread();
    if (!bVar6) {
      bVar6 = IsInSlateThread();
      if (!bVar6) {
        bVar6 = (*IsInAsyncLoadingThread)();
        if (!bVar6) {
          bVar6 = IsInParallelLoadingThread();
          if (!bVar6) {
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                               ,0x142,L"");
            if (bVar6) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
        }
      }
    }
    if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar14 = FSlateApplication::CurrentApplication.Object;
    local_258.Object = *(SWidget **)pFVar18;
    local_258.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar18 + 8);
    if (local_258.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_258.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlateApplication::TakeScreenshot
              (pFVar14,&local_258,(TArray<FColor,TSizedDefaultAllocator<32>_> *)(pFVar16 + 0x10),
               (TIntVector3<int> *)pFVar16);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_258.SharedReferenceCount.ReferenceController);
    uVar10 = (ulonglong)local_2a0;
    pFVar18 = pFVar18 + 0x10;
    param_1 = local_268;
  }
  CreateBrushes(this);
  return;
}

// DestroyBrushes @ 142e6e960

void __thiscall FWidgetSnapshotData::DestroyBrushes(FWidgetSnapshotData *this)

{
  TArray<TSharedPtr<FSlateDynamicImageBrush,1>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  iVar3 = (this->WindowTextureBrushes).ArrayNum;
  pTVar1 = &this->WindowTextureBrushes;
  pFVar5 = (pTVar1->AllocatorInstance).Data;
  pFVar6 = pFVar5 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->WindowTextureBrushes).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TSharedPtr<FSlateDynamicImageBrush,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    if (*(FSlateDynamicImageBrush **)pFVar5 != (FSlateDynamicImageBrush *)0x0) {
      FSlateDynamicImageBrush::ReleaseResource(*(FSlateDynamicImageBrush **)pFVar5);
    }
    pFVar5 = pFVar5 + 0x10;
  }
  piVar2 = &(this->WindowTextureBrushes).ArrayMax;
  pTVar4 = (TSharedPtr<FSlateDynamicImageBrush,1> *)(pTVar1->AllocatorInstance).Data;
  iVar3 = (this->WindowTextureBrushes).ArrayNum;
  if ((this->WindowTextureBrushes).ArrayMax < 0) {
    DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar4,iVar3);
    (this->WindowTextureBrushes).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar4,iVar3);
    (this->WindowTextureBrushes).ArrayNum = 0;
  }
  return;
}

// GetBrush @ 142e9a220

FSlateBrush * __thiscall FWidgetSnapshotData::GetBrush(FWidgetSnapshotData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSlateBrush *pFVar3;
  uint uVar4;
  
  if ((-1 < param_1) && (param_1 < (this->WindowTextureBrushes).ArrayNum)) {
    uVar4 = 0;
    if (param_1 < (this->WindowTextureBrushes).ArrayNum) {
      uVar4 = (uint)~param_1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSlateBrush *)(*pcVar1)();
        return pFVar3;
      }
    }
    return *(FSlateBrush **)
            ((this->WindowTextureBrushes).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return (FSlateBrush *)0x0;
}

// GetNavigationSimulation @ 142ea0660

FWidgetSnapshotNavigationSimulationData * __thiscall
FWidgetSnapshotData::GetNavigationSimulation(FWidgetSnapshotData *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetSnapshotNavigationSimulationData *pFVar4;
  
  if ((-1 < param_1) && (param_1 < (this->NavigationSimulationData).ArrayNum)) {
    uVar3 = 0;
    if (param_1 < (this->NavigationSimulationData).ArrayNum) {
      uVar3 = (uint)~param_1 >> 0x1f;
    }
    if (uVar3 == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FWidgetSnapshotNavigationSimulationData *)(*pcVar1)();
        return pFVar4;
      }
    }
    return (FWidgetSnapshotNavigationSimulationData *)
           ((this->NavigationSimulationData).AllocatorInstance.Data + (longlong)param_1 * 0x10);
  }
  return &this->EmptyNavigationSimulationData;
}

// GetWindow @ 142eac650

TSharedPtr<FWidgetReflectorNodeBase,1> * __thiscall
FWidgetSnapshotData::GetWindow
          (FWidgetSnapshotData *this,TSharedPtr<FWidgetReflectorNodeBase,1> *__return_storage_ptr__,
          int param_1)

{
  FScriptContainerElement *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FWidgetReflectorNodeBase *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar6;
  
  if ((param_1 < 0) || ((this->Windows).ArrayNum <= param_1)) {
    __return_storage_ptr__->Object = (FWidgetReflectorNodeBase *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    if (param_1 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(*pcVar4)();
        return pTVar6;
      }
    }
    pFVar1 = (this->Windows).AllocatorInstance.Data;
    pTVar2 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)param_1 * 0x10 + 8);
    pFVar3 = *(FWidgetReflectorNodeBase **)(pFVar1 + (longlong)param_1 * 0x10);
    if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar3;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// GetWindowsPtr @ 142eac820

TArray<TSharedPtr<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
FWidgetSnapshotData::GetWindowsPtr(FWidgetSnapshotData *this)

{
  return &this->Windows;
}

// GetWindowsRef @ 142eac830

TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> * __thiscall
FWidgetSnapshotData::GetWindowsRef
          (FWidgetSnapshotData *this,
          TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *pTVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  longlong local_28;
  TReferenceControllerBase<1> *local_20;
  
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = (this->Windows).ArrayNum;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar2,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  iVar3 = (this->Windows).ArrayNum;
  pFVar10 = (this->Windows).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->Windows).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*(longlong *)pFVar10 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
    }
    local_28 = *(longlong *)pFVar10;
    local_20 = *(TReferenceControllerBase<1> **)(pFVar10 + 8);
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (local_28 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
    }
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data;
    if ((pFVar8 <= (FScriptContainerElement *)&local_28) &&
       ((FScriptContainerElement *)&local_28 < pFVar8 + (longlong)*piVar1 * 0x10)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pTVar7 = (TArray<TSharedRef<FWidgetReflectorNodeBase,1>,TSizedDefaultAllocator<32>_> *)
                 (*pcVar4)();
        return pTVar7;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    pFVar8 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 0x10;
    *(longlong *)pFVar8 = local_28;
    *(TReferenceControllerBase<1> **)(pFVar8 + 8) = local_20;
    if (local_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_20->SharedReferenceCount = (atomic<int>)((int)local_20->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_20);
    pFVar10 = pFVar10 + 0x10;
  }
  return __return_storage_ptr__;
}

// IsEmpty @ 142ebb570

bool __thiscall FWidgetSnapshotData::IsEmpty(FWidgetSnapshotData *this)

{
  return (this->Windows).ArrayNum == 0;
}

// LoadSnapshotFromBuffer @ 142ebff70

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FWidgetSnapshotData::LoadSnapshotFromBuffer
          (FWidgetSnapshotData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  code *pcVar1;
  FName FVar2;
  FSharedReferencer<1> FVar3;
  bool bVar4;
  int iVar5;
  FNameEntryId FVar6;
  undefined4 extraout_var;
  TJsonReader<wchar_t> *pTVar7;
  TJsonReader<wchar_t> *pTVar8;
  size_t _Size;
  uint local_res10 [2];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStackX_24;
  ForAnyElementType local_208;
  int local_200 [2];
  TSharedPtr<FJsonObject,1> local_1f8;
  StackState local_1e8;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_1b0;
  TSharedRef<TJsonReader<wchar_t>,1> local_1a8;
  TSharedRef<FJsonObject,1> local_198;
  FMemoryReader local_188;
  FArchiveState local_d8;
  undefined8 local_48;
  ForAnyElementType *local_40;
  undefined8 local_38;
  
  pTVar8 = (TJsonReader<wchar_t> *)0x0;
  local_res10[0] = 0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200[0] = 0;
  local_200[1] = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  local_188._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_188);
  local_188._padding_ = 0;
  local_188._padding_ = (longlong)&___7FMemoryReader__6B_;
  local_188.LimitSize = 0x7fffffffffffffff;
  local_188.Bytes = param_1;
  FArchiveState::SetIsLoading((FArchiveState *)&local_188,true);
  (**(code **)(local_188._padding_ + 0x108))(&local_188,0);
  if (*(uint **)(local_188._padding_ + 8) < *(uint **)local_188._padding_ + 1) {
    if ((local_188._padding_ & 0x10000U) == 0) {
      if (*(code **)(local_188._padding_ + 0x188) == FMemoryReader::Serialize) {
        FMemoryReader::Serialize(&local_188,local_res10,4);
      }
      else {
        (**(code **)(local_188._padding_ + 0x188))();
      }
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_188._padding_;
    *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 4;
  }
  _Size = (size_t)(int)local_res10[0];
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_res10[0],&local_208,local_200,local_200 + 1);
  memset(local_208.Data + iVar5,0,_Size);
  FVar6 = FNameEntryId::FromValidEName((EName)local_res18);
  uStackX_24 = 0;
  local_res20 = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res20;
  FArchive::SerializeCompressed
            ((FArchive *)&local_188,local_208.Data,(longlong)(int)local_res10[0],FVar2,
             COMPRESS_NoFlags,false);
  FArchive::~FArchive((FArchive *)&local_188);
  local_1f8.Object = (FJsonObject *)0x0;
  local_1f8.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (0 < local_200[0]) {
    local_d8._padding_ = 0;
    local_d8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_d8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_d8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_d8._40_8_ = 0;
    local_d8.ArSerializingDefaults = 0;
    local_d8.ArPortFlags = 0;
    local_d8.ArMaxSerializeSize = 0;
    local_d8.ArUEVer.FileVersionUE4 = 0;
    local_d8.ArUEVer.FileVersionUE5 = 0;
    local_d8.ArLicenseeUEVer = 0;
    local_d8.ArEngineVer.Major = 0;
    local_d8.ArEngineVer.Minor = 0;
    local_d8.ArEngineVer.Patch = 0;
    local_d8.ArEngineVer._6_2_ = 0;
    local_d8.ArEngineVer.Changelist = 0;
    local_d8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_d8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_d8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_d8.SerializedProperty = (FProperty *)0x0;
    local_d8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_d8.bCustomVersionsAreReset = false;
    local_d8._129_7_ = 0;
    local_d8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_d8);
    local_40 = &local_208;
    local_48 = 0;
    local_d8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_38 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_d8,true);
    (**(code **)(local_d8._padding_ + 0x108))(&local_d8,0);
    pTVar7 = ::operator_new(0x70);
    if (pTVar7 != (TJsonReader<wchar_t> *)0x0) {
      (pTVar7->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->ParseState).ArrayNum = 0;
      (pTVar7->ParseState).ArrayMax = 0;
      pTVar7->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
      pTVar7->Stream = (FArchive *)&local_d8;
      pTVar7->CurrentToken = None;
      (pTVar7->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->Identifier).Data.ArrayNum = 0;
      (pTVar7->Identifier).Data.ArrayMax = 0;
      (pTVar7->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->ErrorMessage).Data.ArrayNum = 0;
      (pTVar7->ErrorMessage).Data.ArrayMax = 0;
      (pTVar7->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->StringValue).Data.ArrayNum = 0;
      (pTVar7->StringValue).Data.ArrayMax = 0;
      pTVar7->NumberValue = 0.0;
      pTVar7->LineNumber = 1;
      pTVar7->CharacterNumber = 0;
      pTVar7->BoolValue = false;
      pTVar7->FinishedReadingRootObject = false;
      pTVar8 = pTVar7;
    }
    local_1b0.Object = pTVar8;
    TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
              (&local_1a8,&local_1b0);
    local_1e8.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Identifier.Data.ArrayNum = 0;
    local_1e8.Identifier.Data.ArrayMax = 0;
    local_1e8.Object.Object = (FJsonObject *)0x0;
    local_1e8.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_1e8.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e8.Array.ArrayNum = 0;
    local_1e8.Array.ArrayMax = 0;
    bVar4 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      (local_1a8.Object,&local_1e8,None);
    if (bVar4) {
      bVar4 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_1e8,&local_1f8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1e8.Array.AllocatorInstance.Data,
                 local_1e8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1e8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1e8.Array.AllocatorInstance.Data);
      }
      if (local_1e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Identifier.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_d8);
      if (bVar4) {
        if (local_1f8.Object == (FJsonObject *)0x0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootJsonObject.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                             ,0x259,L"");
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          if ((local_1f8.Object == (FJsonObject *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        FVar3.ReferenceController = local_1f8.SharedReferenceCount.ReferenceController;
        local_198.SharedReferenceCount.ReferenceController =
             local_1f8.SharedReferenceCount.ReferenceController;
        if (local_1f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_1f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        local_198.Object = local_1f8.Object;
        if ((local_1f8.Object == (FJsonObject *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        LoadSnapshotFromJson(this,&local_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar3.ReferenceController);
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_1e8.Array.AllocatorInstance.Data,
                 local_1e8.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_1e8.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_1e8.Array.AllocatorInstance.Data);
      }
      if (local_1e8.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Identifier.Data.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a8.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_d8);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1f8.SharedReferenceCount.ReferenceController);
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  return;
}

// LoadSnapshotFromFile @ 142ec03d0

bool __thiscall
FWidgetSnapshotData::LoadSnapshotFromFile(FWidgetSnapshotData *this,FString *param_1)

{
  code *pcVar1;
  FSharedReferencer<1> FVar2;
  bool bVar3;
  undefined1 uVar4;
  IFileManager *pIVar5;
  FArchive *pFVar6;
  TJsonReader<wchar_t> *pTVar7;
  wchar_t *pwVar8;
  TRawPtrProxy<TJsonReader<wchar_t>_> local_res10;
  TSharedPtr<FJsonObject,1> local_78;
  TSharedRef<TJsonReader<wchar_t>,1> local_68;
  TSharedRef<FJsonObject,1> local_58;
  StackState local_48;
  
  local_78.Object = (FJsonObject *)0x0;
  local_78.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pIVar5 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar6 = (FArchive *)(**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pwVar8);
  if (pFVar6 != (FArchive *)0x0) {
    pTVar7 = ::operator_new(0x70);
    local_res10.Object = (TJsonReader<wchar_t> *)0x0;
    if (pTVar7 != (TJsonReader<wchar_t> *)0x0) {
      (pTVar7->ParseState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->ParseState).ArrayNum = 0;
      (pTVar7->ParseState).ArrayMax = 0;
      pTVar7->_padding_ = (longlong)&___7__TJsonReader__W__6B_;
      pTVar7->CurrentToken = None;
      pTVar7->Stream = pFVar6;
      (pTVar7->Identifier).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->Identifier).Data.ArrayNum = 0;
      (pTVar7->Identifier).Data.ArrayMax = 0;
      (pTVar7->ErrorMessage).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->ErrorMessage).Data.ArrayNum = 0;
      (pTVar7->ErrorMessage).Data.ArrayMax = 0;
      (pTVar7->StringValue).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pTVar7->StringValue).Data.ArrayNum = 0;
      (pTVar7->StringValue).Data.ArrayMax = 0;
      pTVar7->NumberValue = 0.0;
      pTVar7->LineNumber = 1;
      pTVar7->CharacterNumber = 0;
      pTVar7->BoolValue = false;
      pTVar7->FinishedReadingRootObject = false;
      local_res10.Object = pTVar7;
    }
    TSharedRef<TJsonReader<wchar_t>,1>::TSharedRef<TJsonReader<wchar_t>,1><TJsonReader<wchar_t>_>
              (&local_68,&local_res10);
    local_48.Identifier.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Identifier.Data.ArrayNum = 0;
    local_48.Identifier.Data.ArrayMax = 0;
    local_48.Object.Object = (FJsonObject *)0x0;
    local_48.Object.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_48.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.Array.ArrayNum = 0;
    local_48.Array.ArrayMax = 0;
    bVar3 = TJsonSerializer<FJsonSerializerPolicy_JsonObject>::Deserialize<wchar_t>
                      (local_68.Object,&local_48,None);
    if (bVar3) {
      bVar3 = FJsonSerializerPolicy_JsonObject::GetValueFromState(&local_48,&local_78);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
                 local_48.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_48.Array.AllocatorInstance.Data);
      }
      if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)pFVar6 + 0x210))(pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if (bVar3) {
        if (local_78.Object == (FJsonObject *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("RootJsonObject.IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                             ,0x234,L"");
          if (bVar3) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
          if ((local_78.Object == (FJsonObject *)0x0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x408,L""), bVar3)) {
            pcVar1 = (code *)swi(3);
            uVar4 = (*pcVar1)();
            return (bool)uVar4;
          }
        }
        FVar2.ReferenceController = local_78.SharedReferenceCount.ReferenceController;
        local_58.SharedReferenceCount.ReferenceController =
             local_78.SharedReferenceCount.ReferenceController;
        if (local_78.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_78.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.Object = local_78.Object;
        if ((local_78.Object == (FJsonObject *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x25d,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        LoadSnapshotFromJson(this,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FVar2.ReferenceController);
        bVar3 = true;
        goto LAB_142ec0511;
      }
    }
    else {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_48.Object.SharedReferenceCount.ReferenceController);
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data,
                 local_48.Array.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_48.Array.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_48.Array.AllocatorInstance.Data);
      }
      if (local_48.Identifier.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Identifier.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)pFVar6 + 0x210))(pFVar6);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  bVar3 = false;
LAB_142ec0511:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.SharedReferenceCount.ReferenceController);
  return bVar3;
}

// LoadSnapshotFromJson @ 142ec0660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FWidgetSnapshotData::LoadSnapshotFromJson
          (FWidgetSnapshotData *this,TSharedRef<FJsonObject,1> *param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  double dVar4;
  FName FVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FNameEntryId FVar11;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *pTVar12;
  TSharedRef<FSnapshotWidgetReflectorNode,1> *pTVar13;
  longlong *plVar14;
  undefined4 extraout_var;
  ulonglong uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_228;
  undefined1 local_227 [7];
  ForAnyElementType local_220;
  undefined8 local_218;
  int local_210;
  int iStack_20c;
  undefined4 local_208;
  ForAnyElementType local_200;
  int local_1f8 [2];
  FSnapshotWidgetReflectorNode *local_1f0;
  TReferenceControllerBase<1> *local_1e8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1e0;
  uint local_1d0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> *local_1c8;
  TSharedPtr<FNavigationSimulationWidgetNode,1> local_1c0;
  uint local_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [8];
  TSharedRef<FJsonValue,1> local_1a0;
  TSharedRef<FJsonValue,1> local_190;
  wchar_t *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  wchar_t *local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  wchar_t *local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  wchar_t *local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  wchar_t *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  wchar_t *local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  wchar_t *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  wchar_t *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  FString local_f8;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TSharedRef<FSnapshotWidgetReflectorNode,1> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  Reset(this);
  local_178 = L"Version";
  uStack_170 = 7;
  local_d8._12_4_ = uStack_16c;
  local_d8.Size = 7;
  local_d8.DataPtr = L"Version";
  dVar4 = FJsonObject::GetNumberField(param_1->Object,&local_d8);
  if ((dVar4 < SnapshotJsonVersion) && (1 < (byte)LogSlate._0_1_)) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  local_168 = L"Windows";
  uStack_160 = 7;
  local_c8._12_4_ = uStack_15c;
  local_c8.Size = 7;
  local_c8.DataPtr = L"Windows";
  pTVar12 = FJsonObject::GetArrayField(param_1->Object,&local_c8);
  iVar10 = pTVar12->ArrayNum;
  pFVar17 = (pTVar12->AllocatorInstance).Data;
  pFVar20 = pFVar17 + (longlong)iVar10 * 0x10;
  while( true ) {
    if (pTVar12->ArrayNum != iVar10) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res18);
    }
    if (pFVar17 == pFVar20) break;
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_1a0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar17 + 8);
    local_1a0.Object = *(FJsonValue **)pFVar17;
    if (local_1a0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1a0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_1a0.Object == (FJsonValue *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar13 = FSnapshotWidgetReflectorNode::FromJson(&local_b8,&local_1a0);
    local_1f0 = pTVar13->Object;
    local_1e8 = (pTVar13->SharedReferenceCount).ReferenceController;
    if (local_1e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_1e8->SharedReferenceCount = (atomic<int>)((int)local_1e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar18 = (this->Windows).AllocatorInstance.Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_1f0) &&
        ((FScriptContainerElement *)&local_1f0 < pFVar18 + (longlong)(this->Windows).ArrayMax * 0x10
        )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = (this->Windows).ArrayNum;
    piVar1 = &(this->Windows).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Windows).ArrayNum = iVar9 + 1;
    pFVar18 = (this->Windows).AllocatorInstance.Data;
    *(FSnapshotWidgetReflectorNode **)(pFVar18 + (longlong)iVar9 * 0x10) = local_1f0;
    *(TReferenceControllerBase<1> **)(pFVar18 + (longlong)iVar9 * 0x10 + 8) = local_1e8;
    local_1e8 = (TReferenceControllerBase<1> *)0x0;
    local_1f0 = (FSnapshotWidgetReflectorNode *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b8.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1a0.SharedReferenceCount.ReferenceController);
    pFVar17 = pFVar17 + 0x10;
  }
  local_158 = L"NavigationData";
  uStack_150 = 0xe;
  local_a8._12_4_ = uStack_14c;
  local_a8.Size = 0xe;
  local_a8.DataPtr = L"NavigationData";
  local_1c8 = FJsonObject::GetArrayField(param_1->Object,&local_a8);
  local_1d0 = local_1c8->ArrayNum;
  uVar15 = (ulonglong)(int)local_1d0;
  pFVar17 = (local_1c8->AllocatorInstance).Data;
  pFVar20 = pFVar17 + uVar15 * 0x10;
  while( true ) {
    if (local_1c8->ArrayNum != (int)uVar15) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res20);
    }
    if (pFVar17 == pFVar20) break;
    local_220.Data = (FScriptContainerElement *)0x0;
    local_218 = 0;
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar14 = (longlong *)(**(code **)**(undefined8 **)pFVar17)();
    if ((*plVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_148 = L"SimulationData";
    uStack_140 = 0xe;
    local_98._12_4_ = uStack_13c;
    local_98.Size = 0xe;
    local_98.DataPtr = L"SimulationData";
    pTVar12 = FJsonObject::GetArrayField((FJsonObject *)*plVar14,&local_98);
    iVar10 = pTVar12->ArrayNum;
    pFVar18 = (pTVar12->AllocatorInstance).Data;
    pFVar21 = pFVar18 + (longlong)iVar10 * 0x10;
    while( true ) {
      if (pTVar12->ArrayNum != iVar10) {
        local_228 = 0;
        `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_228);
      }
      if (pFVar18 == pFVar21) break;
      if ((*(longlong *)pFVar18 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x408,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_190.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)(pFVar18 + 8);
      local_190.Object = *(FJsonValue **)pFVar18;
      if (local_190.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_190.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((local_190.Object == (FJsonValue *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNavigationSimulationWidgetNode::FromJson(&local_1c0,&local_190);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_190.SharedReferenceCount.ReferenceController);
      if (((local_220.Data <= &local_1c0) &&
          (&local_1c0 <
           (TSharedPtr<FNavigationSimulationWidgetNode,1> *)
           (local_220.Data + (longlong)local_218._4_4_ * 0x10))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = (int)local_218;
      if ((int)local_218 == local_218._4_4_) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_220,(int *)((longlong)&local_218 + 4));
      }
      local_218 = CONCAT44(local_218._4_4_,iVar9 + 1);
      *(FNavigationSimulationWidgetNode **)(local_220.Data + (longlong)iVar9 * 0x10) =
           local_1c0.Object;
      *(TReferenceControllerBase<1> **)(local_220.Data + (longlong)iVar9 * 0x10 + 8) =
           local_1c0.SharedReferenceCount.ReferenceController;
      if (local_1c0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1c0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1c0.SharedReferenceCount.ReferenceController);
      pFVar18 = pFVar18 + 0x10;
    }
    pFVar18 = (this->NavigationSimulationData).AllocatorInstance.Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_220) &&
        ((FScriptContainerElement *)&local_220 <
         pFVar18 + (longlong)(this->NavigationSimulationData).ArrayMax * 0x10)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (this->NavigationSimulationData).ArrayNum;
    piVar1 = &(this->NavigationSimulationData).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&(this->NavigationSimulationData).AllocatorInstance,piVar1);
    }
    lVar16 = (longlong)iVar10;
    (this->NavigationSimulationData).ArrayNum = iVar10 + 1;
    pFVar18 = (this->NavigationSimulationData).AllocatorInstance.Data;
    *(undefined8 *)(pFVar18 + lVar16 * 0x10) = 0;
    *(FScriptContainerElement **)(pFVar18 + lVar16 * 0x10) = local_220.Data;
    local_220.Data = (FScriptContainerElement *)0x0;
    *(int *)(pFVar18 + lVar16 * 0x10 + 8) = (int)local_218;
    *(int *)(pFVar18 + lVar16 * 0x10 + 0xc) = local_218._4_4_;
    local_218 = 0;
    DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
              ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0,0);
    if (local_220.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_220.Data);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar15 = (ulonglong)local_1d0;
  }
  local_e8 = L"Textures";
  uStack_e0 = 8;
  local_88._12_4_ = uStack_dc;
  local_88.Size = 8;
  local_88.DataPtr = L"Textures";
  local_1c8 = FJsonObject::GetArrayField(param_1->Object,&local_88);
  uVar2 = local_1c8->ArrayNum;
  uVar15 = (ulonglong)(int)uVar2;
  pFVar17 = (local_1c8->AllocatorInstance).Data;
  pFVar20 = pFVar17 + uVar15 * 0x10;
  while( true ) {
    if (local_1c8->ArrayNum != (int)uVar15) {
      local_227[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FJsonValue,1>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_227);
    }
    if (pFVar17 == pFVar20) {
      CreateBrushes(this);
      return;
    }
    if ((*(longlong *)pFVar17 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    plVar14 = (longlong *)(**(code **)**(undefined8 **)pFVar17)();
    if ((*plVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("TextureDataJsonObject.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                           ,0x287,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_200.Data = (FScriptContainerElement *)0x0;
    local_1f8[0] = 0;
    local_1f8[1] = 0;
    if ((*plVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_138 = L"Dimensions";
    uStack_130 = 10;
    local_78._12_4_ = uStack_12c;
    local_78.Size = 10;
    local_78.DataPtr = L"Dimensions";
    pTVar12 = FJsonObject::GetArrayField((FJsonObject *)*plVar14,&local_78);
    if ((pTVar12->ArrayNum != 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("StructJsonArray.Num() == 2",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                           ,0x28d,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pTVar12->ArrayNum < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = (pTVar12->AllocatorInstance).Data;
    if ((*(longlong *)pFVar18 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) break;
    dVar4 = FJsonValue::AsNumber(*(FJsonValue **)pFVar18);
    local_210 = (int)dVar4;
    if ((pTVar12->ArrayNum < 2) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar18 = (pTVar12->AllocatorInstance).Data;
    if ((*(longlong *)(pFVar18 + 0x10) == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    dVar4 = FJsonValue::AsNumber(*(FJsonValue **)(pFVar18 + 0x10));
    iStack_20c = (int)dVar4;
    if ((*plVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_128 = L"TextureData";
    uStack_120 = 0xb;
    local_68._12_4_ = uStack_11c;
    local_68.Size = 0xb;
    local_68.DataPtr = L"TextureData";
    FJsonObject::GetStringField((FJsonObject *)*plVar14,&local_f8,&local_68);
    local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1e0.ArrayNum = 0;
    local_1e0.ArrayMax = 0;
    FBase64::Decode(&local_f8,&local_1e0,Standard);
    if ((*plVar14 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_118 = L"IsCompressed";
    uStack_110 = 0xc;
    local_58._12_4_ = uStack_10c;
    local_58.Size = 0xc;
    local_58.DataPtr = L"IsCompressed";
    bVar8 = FJsonObject::GetBoolField((FJsonObject *)*plVar14,&local_58);
    FVar6.Data = local_1e0.AllocatorInstance.Data;
    if (bVar8) {
      if ((*plVar14 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_108 = L"UncompressedSize";
      uStack_100 = 0x10;
      local_48._12_4_ = uStack_fc;
      local_48.Size = 0x10;
      local_48.DataPtr = L"UncompressedSize";
      dVar4 = FJsonObject::GetNumberField((FJsonObject *)*plVar14,&local_48);
      iVar9 = (int)((ulonglong)(longlong)(int)dVar4 >> 2);
      iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,iVar9,&local_200,local_1f8,local_1f8 + 1);
      memset(local_200.Data + (longlong)iVar10 * 4,0,(longlong)iVar9 << 2);
      FVar7.Data = local_1e0.AllocatorInstance.Data;
      FVar6.Data = local_200.Data;
      lVar16 = (longlong)local_1e0.ArrayNum;
      FVar11 = FNameEntryId::FromValidEName((EName)local_1a8);
      local_1b0 = *(uint *)CONCAT44(extraout_var,FVar11.Value);
      uStack_1ac = 0;
      FVar5.Number = 0;
      FVar5.ComparisonIndex.Value = local_1b0;
      FCompression::UncompressMemory
                (FVar5,FVar6.Data,(longlong)(int)dVar4,FVar7.Data,lVar16,COMPRESS_NoFlags,0);
    }
    else {
      iVar10 = (int)((ulonglong)(longlong)local_1e0.ArrayNum >> 2);
      if (((local_1e0.AllocatorInstance.Data == (FScriptContainerElement *)0x0) && (iVar10 != 0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Ptr != nullptr || Count == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x9c1,L""), bVar8)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,iVar10,&local_200,local_1f8,local_1f8 + 1);
      if (iVar10 != 0) {
        memcpy(local_200.Data + (longlong)iVar9 * 4,FVar6.Data,(longlong)iVar10 << 2);
      }
    }
    if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    pFVar18 = (this->WindowTextureData).AllocatorInstance.Data;
    if (((pFVar18 <= (FScriptContainerElement *)&local_210) &&
        ((FScriptContainerElement *)&local_210 <
         pFVar18 + (longlong)(this->WindowTextureData).ArrayMax * 0x20)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar10 = (this->WindowTextureData).ArrayNum;
    piVar1 = &(this->WindowTextureData).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x820,&(this->WindowTextureData).AllocatorInstance,piVar1);
    }
    FVar6.Data = local_200.Data;
    (this->WindowTextureData).ArrayNum = iVar10 + 1;
    pFVar18 = (this->WindowTextureData).AllocatorInstance.Data;
    lVar16 = (longlong)iVar10 * 0x20;
    pFVar21 = pFVar18 + lVar16 + 0x10;
    *(ulonglong *)(pFVar18 + lVar16) = CONCAT44(iStack_20c,local_210);
    *(undefined4 *)(pFVar18 + lVar16 + 8) = local_208;
    *(undefined8 *)&pFVar21->field_0x0 = 0;
    lVar19 = (longlong)local_1f8[0];
    *(int *)&pFVar21[8].field_0x0 = local_1f8[0];
    if (local_1f8[0] == 0) {
      *(int *)(pFVar18 + lVar16 + 0x1c) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_1f8[0],0,(ForAnyElementType *)pFVar21,local_1f8[0],
                 (int *)(pFVar18 + lVar16 + 0x1c));
      memcpy(*(void **)&pFVar21->field_0x0,FVar6.Data,lVar19 << 2);
    }
    if (local_200.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data);
    }
    pFVar17 = pFVar17 + 0x10;
    uVar15 = (ulonglong)uVar2;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// Num @ 142ec5a60

int __thiscall FWidgetSnapshotData::Num(FWidgetSnapshotData *this)

{
  return (this->Windows).ArrayNum;
}

// Reserve @ 142ef9dd0

void __thiscall FWidgetSnapshotData::Reserve(FWidgetSnapshotData *this,int param_1)

{
  if (-1 < param_1) {
    if ((this->Windows).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,(ForAnyElementType *)this,(this->Windows).ArrayNum,
                 &(this->Windows).ArrayMax);
    }
    if ((this->NavigationSimulationData).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&(this->NavigationSimulationData).AllocatorInstance,
                 (this->NavigationSimulationData).ArrayNum,
                 &(this->NavigationSimulationData).ArrayMax);
    }
    if ((this->WindowTextureData).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&(this->WindowTextureData).AllocatorInstance,
                 (this->WindowTextureData).ArrayNum,&(this->WindowTextureData).ArrayMax);
    }
    if ((this->WindowTextureBrushes).ArrayMax < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&(this->WindowTextureBrushes).AllocatorInstance,
                 (this->WindowTextureBrushes).ArrayNum,&(this->WindowTextureBrushes).ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 142ef9f50

void __thiscall FWidgetSnapshotData::Reset(FWidgetSnapshotData *this)

{
  int *piVar1;
  int iVar2;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar3;
  FScriptContainerElement *pFVar4;
  FWidgetSnapshotTextureData *pFVar5;
  TSharedPtr<FSlateDynamicImageBrush,1> *pTVar6;
  
  DestroyBrushes(this);
  piVar1 = &(this->Windows).ArrayMax;
  pTVar3 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(this->Windows).AllocatorInstance.Data;
  iVar2 = (this->Windows).ArrayNum;
  if ((this->Windows).ArrayMax < 0) {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->Windows).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FWidgetReflectorNodeBase,1>,int>(pTVar3,iVar2);
    (this->Windows).ArrayNum = 0;
  }
  piVar1 = &(this->NavigationSimulationData).ArrayMax;
  pFVar4 = (this->NavigationSimulationData).AllocatorInstance.Data;
  iVar2 = (this->NavigationSimulationData).ArrayNum;
  if ((this->NavigationSimulationData).ArrayMax < 0) {
    DestructItems<FWidgetSnapshotNavigationSimulationData,int>
              ((FWidgetSnapshotNavigationSimulationData *)pFVar4,iVar2);
    (this->NavigationSimulationData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->NavigationSimulationData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FWidgetSnapshotNavigationSimulationData,int>
              ((FWidgetSnapshotNavigationSimulationData *)pFVar4,iVar2);
    (this->NavigationSimulationData).ArrayNum = 0;
  }
  piVar1 = &(this->WindowTextureData).ArrayMax;
  pFVar5 = (FWidgetSnapshotTextureData *)(this->WindowTextureData).AllocatorInstance.Data;
  iVar2 = (this->WindowTextureData).ArrayNum;
  if ((this->WindowTextureData).ArrayMax < 0) {
    DestructItems<FWidgetSnapshotTextureData,int>(pFVar5,iVar2);
    (this->WindowTextureData).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->WindowTextureData).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FWidgetSnapshotTextureData,int>(pFVar5,iVar2);
    (this->WindowTextureData).ArrayNum = 0;
  }
  piVar1 = &(this->WindowTextureBrushes).ArrayMax;
  pTVar6 = (TSharedPtr<FSlateDynamicImageBrush,1> *)
           (this->WindowTextureBrushes).AllocatorInstance.Data;
  iVar2 = (this->WindowTextureBrushes).ArrayNum;
  if (-1 < (this->WindowTextureBrushes).ArrayMax) {
    DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar6,iVar2);
    (this->WindowTextureBrushes).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FSlateDynamicImageBrush,1>,int>(pTVar6,iVar2);
  (this->WindowTextureBrushes).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->WindowTextureBrushes).AllocatorInstance,0,piVar1);
  }
  return;
}

// SaveSnapshotAsJson @ 142efa5b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

TSharedRef<FJsonObject,1> * __thiscall
FWidgetSnapshotData::SaveSnapshotAsJson
          (FWidgetSnapshotData *this,TSharedRef<FJsonObject,1> *__return_storage_ptr__)

{
  uint uVar1;
  FJsonObject *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FSnapshotWidgetReflectorNode *pFVar4;
  void *pvVar5;
  code *pcVar6;
  FName FVar7;
  FName FVar8;
  TReferenceControllerBase<1> *pTVar9;
  double dVar10;
  ForAnyElementType FVar11;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  FNameEntryId FVar17;
  int iVar18;
  TSharedRef<FJsonObject,1> *pTVar19;
  TSharedRef<FJsonValue,1> *pTVar20;
  ulonglong uVar21;
  TReferenceControllerBase<1> *pTVar22;
  FJsonValueNumber *pFVar23;
  FJsonValueNumber *this_00;
  FJsonValueNumber *pFVar24;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FJsonValueObject *this_01;
  FJsonValueObject *pFVar25;
  longlong *plVar26;
  uint uVar27;
  FScriptContainerElement *pFVar28;
  longlong *plVar29;
  TReferenceControllerBase<1> *this_02;
  int iVar30;
  FScriptContainerElement *pFVar31;
  TReferenceControllerBase<1> *pTVar32;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_2b8;
  undefined1 local_2b7 [7];
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_2b0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_2a0;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_290;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_280;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_270;
  TArray<TSharedPtr<FJsonValue,1>,TSizedDefaultAllocator<32>_> local_260;
  uint local_250 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_248;
  TSharedPtr<FJsonValue,1> local_238;
  TSharedPtr<FJsonValue,1> local_228;
  TSharedPtr<FJsonValue,1> local_218;
  uint local_208;
  TSharedPtr<FJsonValue,1> local_200;
  TSharedPtr<FJsonValue,1> local_1f0;
  TSharedPtr<FJsonValue,1> local_1e0;
  TSharedRef<FJsonObject,1> local_1c8;
  uint local_1b8;
  undefined4 uStack_1b4;
  uint local_1b0;
  undefined4 uStack_1ac;
  TRawPtrProxy<FJsonValueNumber> local_1a8;
  TRawPtrProxy<FJsonValueObject> local_1a0;
  undefined1 local_198 [4];
  undefined1 local_194 [4];
  TRawPtrProxy<FJsonObject> local_190;
  TRawPtrProxy<FJsonValueNumber> local_188;
  TSharedRef<FSnapshotWidgetReflectorNode,1> local_180;
  FString local_170;
  FString local_160;
  FString local_150;
  TSharedPtr<FJsonObject,1> local_140;
  FString local_130;
  FString local_120;
  FString local_110;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  FString local_b0;
  FString local_a0;
  TSharedRef<FJsonValue,1> local_90;
  TSharedRef<FJsonValue,1> local_80;
  TSharedPtr<FJsonObject,1> local_68 [2];
  
  if (((this->Windows).ArrayNum != (this->WindowTextureData).ArrayNum) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Windows.Num() == WindowTextureData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                          ,0x1c8,L""), bVar13)) {
    pcVar6 = (code *)swi(3);
    pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
    return pTVar19;
  }
  MakeShared<FJsonObject,1>(__return_storage_ptr__);
  dVar10 = SnapshotJsonVersion;
  pFVar2 = __return_storage_ptr__->Object;
  ::FString::FString(&local_170,L"Version");
  FJsonObject::SetNumberField(pFVar2,&local_170,dVar10);
  if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_170.Data.AllocatorInstance.Data);
  }
  iVar16 = (this->Windows).ArrayNum;
  pFVar28 = (this->Windows).AllocatorInstance.Data;
  pFVar31 = pFVar28 + (longlong)iVar16 * 0x10;
  local_280.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_280.ArrayNum = 0;
  local_280.ArrayMax = 0;
  while( true ) {
    if ((this->Windows).ArrayNum != iVar16) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWidgetReflectorNodeBase,1>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar28 == pFVar31) {
      pFVar2 = __return_storage_ptr__->Object;
      ::FString::FString(&local_160,L"Windows");
      FJsonObject::SetArrayField(pFVar2,&local_160,&local_280);
      if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_160.Data.AllocatorInstance.Data);
      }
      DestructItems<TSharedPtr<FJsonValue,1>,int>
                ((TSharedPtr<FJsonValue,1> *)local_280.AllocatorInstance.Data,local_280.ArrayNum);
      if ((TSharedPtr<FJsonValue,1> *)local_280.AllocatorInstance.Data !=
          (TSharedPtr<FJsonValue,1> *)0x0) {
        FMemory::Free(local_280.AllocatorInstance.Data);
      }
      pTVar9 = _UNK_150651568;
      pTVar3 = ___xmm_00000000000000000000000000000010;
      local_208 = (this->NavigationSimulationData).ArrayNum;
      uVar21 = (ulonglong)(int)local_208;
      pFVar28 = (this->NavigationSimulationData).AllocatorInstance.Data;
      pFVar31 = pFVar28 + uVar21 * 0x10;
      local_260.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_260.ArrayNum = 0;
      local_260.ArrayMax = 0;
      do {
        pTVar32 = (TReferenceControllerBase<1> *)0x0;
        if ((this->NavigationSimulationData).ArrayNum != (int)uVar21) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FWidgetSnapshotNavigationSimulationData_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (pFVar28 == pFVar31) {
          pFVar2 = __return_storage_ptr__->Object;
          ::FString::FString(&local_130,L"NavigationData");
          FJsonObject::SetArrayField(pFVar2,&local_130,&local_260);
          if (local_130.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_130.Data.AllocatorInstance.Data);
          }
          DestructItems<TSharedPtr<FJsonValue,1>,int>
                    ((TSharedPtr<FJsonValue,1> *)local_260.AllocatorInstance.Data,local_260.ArrayNum
                    );
          if ((TSharedPtr<FJsonValue,1> *)local_260.AllocatorInstance.Data !=
              (TSharedPtr<FJsonValue,1> *)0x0) {
            FMemory::Free(local_260.AllocatorInstance.Data);
          }
          iVar16 = (this->WindowTextureData).ArrayNum;
          pFVar28 = (this->WindowTextureData).AllocatorInstance.Data;
          pFVar31 = pFVar28 + (longlong)iVar16 * 0x20;
          local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_290.ArrayNum = 0;
          local_290.ArrayMax = 0;
          while( true ) {
            pFVar24 = (FJsonValueNumber *)0x0;
            if ((this->WindowTextureData).ArrayNum != iVar16) {
              local_2b7[0] = 0;
              `TCheckedPointerIterator<FWidgetSnapshotTextureData_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_2b7);
            }
            if (pFVar28 == pFVar31) {
              pFVar2 = __return_storage_ptr__->Object;
              ::FString::FString(&local_a0,L"Textures");
              FJsonObject::SetArrayField(pFVar2,&local_a0,&local_290);
              if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a0.Data.AllocatorInstance.Data);
              }
              DestructItems<TSharedPtr<FJsonValue,1>,int>
                        ((TSharedPtr<FJsonValue,1> *)local_290.AllocatorInstance.Data,
                         local_290.ArrayNum);
              if ((TSharedPtr<FJsonValue,1> *)local_290.AllocatorInstance.Data !=
                  (TSharedPtr<FJsonValue,1> *)0x0) {
                FMemory::Free(local_290.AllocatorInstance.Data);
              }
              return __return_storage_ptr__;
            }
            pFVar23 = ::operator_new(0x50);
            local_190.Object = (FJsonObject *)pFVar24;
            if (pFVar23 != (FJsonValueNumber *)0x0) {
              pFVar23->Value = 0.0;
              pFVar23[1]._padding_ = 0;
              pFVar23[2]._padding_ = 0;
              pFVar23[3]._padding_ = 0;
              pFVar23->_padding_ = 0;
              pFVar23->_padding_ = 0;
              pFVar23[1]._padding_ = 0;
              *(undefined4 *)&pFVar23[1].Value = 0;
              *(undefined4 *)((longlong)&pFVar23[1].Value + 4) = 0x80;
              *(undefined4 *)&pFVar23[2]._padding_ = 0xffffffff;
              *(undefined4 *)((longlong)&pFVar23[2]._padding_ + 4) = 0;
              pFVar23[2].Value = 0.0;
              local_190.Object = (FJsonObject *)pFVar23;
            }
            TSharedRef<FJsonObject,1>::TSharedRef<FJsonObject,1><FJsonObject>(&local_1c8,&local_190)
            ;
            local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2b0.ArrayNum = 0;
            local_2b0.ArrayMax = 0;
            this_00 = ::operator_new(0x18);
            pFVar23 = pFVar24;
            if (this_00 != (FJsonValueNumber *)0x0) {
              pFVar23 = FJsonValueNumber::FJsonValueNumber(this_00,(double)*(int *)pFVar28);
            }
            local_188.Object = pFVar23;
            TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>
                      (&local_200,&local_188);
            if (((local_2b0.AllocatorInstance.Data <= &local_200) &&
                (&local_200 <
                 (TSharedPtr<FJsonValue,1> *)
                 (local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 0x10))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) break;
            iVar15 = local_2b0.ArrayNum;
            if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
            }
            local_2b0.ArrayNum = iVar15 + 1;
            *(FJsonValue **)&local_2b0.AllocatorInstance.Data[(longlong)iVar15 * 0x10].field_0x0 =
                 local_200.Object;
            *(TReferenceControllerBase<1> **)
             (local_2b0.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) =
                 local_200.SharedReferenceCount.ReferenceController;
            local_200.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_200.Object = (FJsonValue *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            pFVar23 = ::operator_new(0x18);
            if (pFVar23 != (FJsonValueNumber *)0x0) {
              pFVar24 = FJsonValueNumber::FJsonValueNumber(pFVar23,(double)*(int *)(pFVar28 + 4));
            }
            local_1a8.Object = pFVar24;
            TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueNumber>
                      (&local_1f0,&local_1a8);
            if (((local_2b0.AllocatorInstance.Data <= &local_1f0) &&
                (&local_1f0 <
                 (TSharedPtr<FJsonValue,1> *)
                 (local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 0x10))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
              return pTVar19;
            }
            iVar15 = local_2b0.ArrayNum;
            if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
            }
            local_2b0.ArrayNum = iVar15 + 1;
            *(FJsonValue **)&local_2b0.AllocatorInstance.Data[(longlong)iVar15 * 0x10].field_0x0 =
                 local_1f0.Object;
            *(TReferenceControllerBase<1> **)
             (local_2b0.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) =
                 local_1f0.SharedReferenceCount.ReferenceController;
            local_1f0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_1f0.Object = (FJsonValue *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            ::FString::FString(&local_120,L"Dimensions");
            pFVar2 = local_1c8.Object;
            FJsonObject::SetArrayField(local_1c8.Object,&local_120,&local_2b0);
            if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_120.Data.AllocatorInstance.Data);
            }
            DestructItems<TSharedPtr<FJsonValue,1>,int>
                      ((TSharedPtr<FJsonValue,1> *)local_2b0.AllocatorInstance.Data,
                       local_2b0.ArrayNum);
            if ((TSharedPtr<FJsonValue,1> *)local_2b0.AllocatorInstance.Data !=
                (TSharedPtr<FJsonValue,1> *)0x0) {
              FMemory::Free(local_2b0.AllocatorInstance.Data);
            }
            iVar30 = *(int *)(pFVar28 + 0x18) << 2;
            local_2a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_2a0.ArrayNum = 0;
            local_2a0.ArrayMax = 0;
            FVar17 = FNameEntryId::FromValidEName((EName)local_194);
            uStack_1b4 = 0;
            local_1b8 = *(uint *)CONCAT44(extraout_var,FVar17.Value);
            FVar7.Number = 0;
            FVar7.ComparisonIndex.Value = local_1b8;
            iVar15 = FCompression::CompressMemoryBound(FVar7,iVar30,COMPRESS_NoFlags,0);
            iVar18 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (1,1,iVar15,&local_2a0.AllocatorInstance,&local_2a0.ArrayNum,
                                &local_2a0.ArrayMax);
            memset(local_2a0.AllocatorInstance.Data + iVar18,0,(longlong)iVar15);
            FVar11.Data = local_2a0.AllocatorInstance.Data;
            pvVar5 = *(void **)(pFVar28 + 0x10);
            local_250[0] = local_2a0.ArrayNum;
            FVar17 = FNameEntryId::FromValidEName((EName)local_198);
            local_1b0 = *(uint *)CONCAT44(extraout_var_00,FVar17.Value);
            uStack_1ac = 0;
            FVar8.Number = 0;
            FVar8.ComparisonIndex.Value = local_1b0;
            bVar13 = FCompression::CompressMemory
                               (FVar8,FVar11.Data,(int *)local_250,pvVar5,iVar30,COMPRESS_NoFlags,0)
            ;
            if (bVar13) {
              ::FString::FString(&local_110,L"IsCompressed");
              FJsonObject::SetBoolField(pFVar2,&local_110,true);
              if (local_110.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_110.Data.AllocatorInstance.Data);
              }
              ::FString::FString(&local_100,L"UncompressedSize");
              FJsonObject::SetNumberField(pFVar2,&local_100,(double)iVar30);
              if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_100.Data.AllocatorInstance.Data);
              }
              uVar1 = local_250[0];
              if (local_2a0.ArrayNum < (int)local_250[0]) {
                iVar18 = local_250[0] - local_2a0.ArrayNum;
                iVar15 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (1,1,iVar18,&local_2a0.AllocatorInstance,&local_2a0.ArrayNum,
                                    &local_2a0.ArrayMax);
                memset(local_2a0.AllocatorInstance.Data + iVar15,0,(longlong)iVar18);
              }
              else {
                if ((int)local_250[0] < 0) {
                    /* WARNING: Subroutine does not return */
                  UE::Core::Private::OnInvalidArrayNum((ulonglong)local_250[0]);
                }
                if ((int)local_250[0] < local_2a0.ArrayNum) {
                  uVar27 = local_2a0.ArrayNum - local_250[0];
                  if ((int)(uVar27 | local_250[0]) < 0) {
                    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x458,
                                        L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                       );
                    if (bVar13) {
                      pcVar6 = (code *)swi(3);
                      pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
                      return pTVar19;
                    }
                  }
                  if (uVar27 != 0) {
                    iVar18 = (local_2a0.ArrayNum - uVar27) - uVar1;
                    iVar15 = local_2a0.ArrayNum;
                    if (iVar18 != 0) {
                      memmove(local_2a0.AllocatorInstance.Data + (int)uVar1,
                              local_2a0.AllocatorInstance.Data + (int)uVar1 + (int)uVar27,
                              (longlong)iVar18);
                      iVar15 = local_2a0.ArrayNum;
                    }
                    local_2a0.ArrayNum = iVar15 - uVar27;
                  }
                }
              }
              FBase64::Encode(&local_e0,&local_2a0,Standard);
              ::FString::FString(&local_f0,L"TextureData");
              FJsonObject::SetStringField(pFVar2,&local_f0,&local_e0);
              if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f0.Data.AllocatorInstance.Data);
              }
              if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e0.Data.AllocatorInstance.Data);
              }
            }
            else {
              ::FString::FString(&local_d0,L"IsCompressed");
              FJsonObject::SetBoolField(pFVar2,&local_d0,false);
              if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d0.Data.AllocatorInstance.Data);
              }
              uVar1 = *(uint *)(pFVar28 + 0x18);
              pvVar5 = *(void **)(pFVar28 + 0x10);
              local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_248.ArrayNum = 0;
              local_248.ArrayMax = 0;
              if (((pvVar5 == (void *)0x0) && ((uVar1 & 0x3fffffff) != 0)) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Ptr != nullptr || Count == 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x9c1,L""), bVar13)) {
                pcVar6 = (code *)swi(3);
                pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
                return pTVar19;
              }
              iVar15 = UE::Core::Private::
                       ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (1,1,uVar1 << 2,&local_248.AllocatorInstance,&local_248.ArrayNum,
                                  &local_248.ArrayMax);
              if ((uVar1 & 0x3fffffff) != 0) {
                memcpy(local_248.AllocatorInstance.Data + iVar15,pvVar5,(longlong)(int)(uVar1 << 2))
                ;
              }
              FBase64::Encode(&local_b0,&local_248,Standard);
              ::FString::FString(&local_c0,L"TextureData");
              FJsonObject::SetStringField(pFVar2,&local_c0,&local_b0);
              if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c0.Data.AllocatorInstance.Data);
              }
              if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b0.Data.AllocatorInstance.Data);
              }
              if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.AllocatorInstance.Data);
              }
            }
            pFVar25 = (FJsonValueObject *)0x0;
            if (local_2a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2a0.AllocatorInstance.Data);
            }
            this_01 = ::operator_new(0x20);
            FVar12.ReferenceController = local_1c8.SharedReferenceCount.ReferenceController;
            if (this_01 != (FJsonValueObject *)0x0) {
              local_68[0].Object = local_1c8.Object;
              local_68[0].SharedReferenceCount.ReferenceController =
                   local_1c8.SharedReferenceCount.ReferenceController;
              if (local_1c8.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_1c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_1c8.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              pFVar25 = FJsonValueObject::FJsonValueObject(this_01,local_68);
            }
            local_1a0.Object = pFVar25;
            TSharedPtr<FJsonValue,1>::TSharedPtr<FJsonValue,1><FJsonValueObject>
                      (&local_1e0,&local_1a0);
            if (((local_290.AllocatorInstance.Data <= &local_1e0) &&
                (&local_1e0 <
                 (TSharedPtr<FJsonValue,1> *)
                 (local_290.AllocatorInstance.Data + (longlong)local_290.ArrayMax * 0x10))) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar13)) {
              pcVar6 = (code *)swi(3);
              pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
              return pTVar19;
            }
            iVar15 = local_290.ArrayNum;
            if (local_290.ArrayNum == local_290.ArrayMax) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&local_290.AllocatorInstance,&local_290.ArrayMax);
            }
            local_290.ArrayNum = iVar15 + 1;
            *(FJsonValue **)&local_290.AllocatorInstance.Data[(longlong)iVar15 * 0x10].field_0x0 =
                 local_1e0.Object;
            *(TReferenceControllerBase<1> **)
             (local_290.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) =
                 local_1e0.SharedReferenceCount.ReferenceController;
            local_1e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_1e0.Object = (FJsonValue *)0x0;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      ((TReferenceControllerBase<1> *)0x0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (FVar12.ReferenceController);
            pFVar28 = pFVar28 + 0x20;
          }
          pcVar6 = (code *)swi(3);
          pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
          return pTVar19;
        }
        pTVar22 = ::operator_new(0x60);
        if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
          this_02 = (TReferenceControllerBase<1> *)&DAT_00000010;
        }
        else {
          pTVar22->SharedReferenceCount = (atomic<int>)0x1;
          this_02 = pTVar22 + 1;
          pTVar22->WeakReferenceCount = (atomic<int>)0x1;
          pTVar22->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFJsonObject___00_SharedPointerInternals__6B_;
          pTVar22[2]._padding_ = 0;
          pTVar22[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar22[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar22[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar22[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar22[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar22[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar22[1]._padding_ = 0;
          pTVar22[3]._padding_ = 0;
          pTVar22[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar22[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar22[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar22[3].WeakReferenceCount = (atomic<int>)0x80;
          *(undefined4 *)((longlong)&pTVar22[4]._padding_ + 4) = 0;
          *(undefined4 *)&pTVar22[4]._padding_ = 0xffffffff;
          pTVar22[5]._padding_ = 0;
          pTVar32 = pTVar22;
          if ((this_02 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
            return pTVar19;
          }
        }
        iVar16 = *(int *)(pFVar28 + 8);
        local_270.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_270.ArrayNum = 0;
        local_270.ArrayMax = 0;
        plVar26 = *(longlong **)pFVar28;
        plVar29 = plVar26 + (longlong)iVar16 * 2;
        while( true ) {
          if (*(int *)(pFVar28 + 8) != iVar16) {
            local_2b8 = 0;
            `TCheckedPointerIterator<TSharedPtr<FNavigationSimulationWidgetNode,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(&local_2b8);
          }
          if (plVar26 == plVar29) break;
          if ((*plVar26 == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("SimulationData.Get()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                                  ,0x1e3,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
            return pTVar19;
          }
          pTVar20 = FNavigationSimulationWidgetNode::ToJson
                              (&local_80,(FNavigationSimulationWidgetNode *)*plVar26);
          local_218.Object = pTVar20->Object;
          local_218.SharedReferenceCount.ReferenceController =
               (pTVar20->SharedReferenceCount).ReferenceController;
          if (local_218.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_218.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          if (((local_270.AllocatorInstance.Data <= &local_218) &&
              (&local_218 <
               (TSharedPtr<FJsonValue,1> *)
               (local_270.AllocatorInstance.Data + (longlong)local_270.ArrayMax * 0x10))) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
            return pTVar19;
          }
          iVar15 = local_270.ArrayNum;
          if (local_270.ArrayNum == local_270.ArrayMax) {
            iVar15 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_270.AllocatorInstance,&local_270.ArrayMax);
          }
          local_270.ArrayNum = iVar15 + 1;
          *(FJsonValue **)&local_270.AllocatorInstance.Data[(longlong)iVar15 * 0x10].field_0x0 =
               local_218.Object;
          *(TReferenceControllerBase<1> **)
           (local_270.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) =
               local_218.SharedReferenceCount.ReferenceController;
          local_218.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_218.Object = (FJsonValue *)0x0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          plVar26 = plVar26 + 2;
        }
        ::FString::FString(&local_150,L"SimulationData");
        FJsonObject::SetArrayField((FJsonObject *)this_02,&local_150,&local_270);
        if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_150.Data.AllocatorInstance.Data);
        }
        pTVar22 = ::operator_new(0x30);
        if (pTVar22 == (TReferenceControllerBase<1> *)0x0) {
          pTVar22 = (TReferenceControllerBase<1> *)0x0;
          local_238.Object = (FJsonValue *)pTVar3;
          local_238.SharedReferenceCount.ReferenceController = pTVar9;
        }
        else {
          pTVar22->SharedReferenceCount = (atomic<int>)0x1;
          pTVar22->WeakReferenceCount = (atomic<int>)0x1;
          pTVar22->_padding_ =
               (longlong)
               &
               ___7__TIntrusiveReferenceController_VFJsonValueObject___00_SharedPointerInternals__6B_
          ;
          if (pTVar32 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar32->SharedReferenceCount = (atomic<int>)((int)pTVar32->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_140.Object = (FJsonObject *)this_02;
          local_140.SharedReferenceCount.ReferenceController = pTVar32;
          FJsonValueObject::FJsonValueObject((FJsonValueObject *)(pTVar22 + 1),&local_140);
          if ((pTVar22 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InObject != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x246,L""), bVar13)) {
            pcVar6 = (code *)swi(3);
            pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
            return pTVar19;
          }
          LOCK();
          pTVar22->SharedReferenceCount = (atomic<int>)((int)pTVar22->SharedReferenceCount + 1);
          UNLOCK();
          local_238.Object = (FJsonValue *)(pTVar22 + 1);
          local_238.SharedReferenceCount.ReferenceController = pTVar22;
        }
        if (((local_260.AllocatorInstance.Data <= &local_238) &&
            (&local_238 <
             (TSharedPtr<FJsonValue,1> *)
             (local_260.AllocatorInstance.Data + (longlong)local_260.ArrayMax * 0x10))) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar13)) {
          pcVar6 = (code *)swi(3);
          pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
          return pTVar19;
        }
        iVar16 = local_260.ArrayNum;
        if (local_260.ArrayNum == local_260.ArrayMax) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_260.AllocatorInstance,&local_260.ArrayMax);
        }
        local_260.ArrayNum = iVar16 + 1;
        *(FJsonValue **)&local_260.AllocatorInstance.Data[(longlong)iVar16 * 0x10].field_0x0 =
             local_238.Object;
        *(TReferenceControllerBase<1> **)
         (local_260.AllocatorInstance.Data + (longlong)iVar16 * 0x10 + 8) =
             local_238.SharedReferenceCount.ReferenceController;
        local_238.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_238.Object = (FJsonValue *)0x0;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)0x0);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar22)
        ;
        DestructItems<TSharedPtr<FJsonValue,1>,int>
                  ((TSharedPtr<FJsonValue,1> *)local_270.AllocatorInstance.Data,local_270.ArrayNum);
        if ((TSharedPtr<FJsonValue,1> *)local_270.AllocatorInstance.Data !=
            (TSharedPtr<FJsonValue,1> *)0x0) {
          FMemory::Free(local_270.AllocatorInstance.Data);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar32)
        ;
        uVar21 = (ulonglong)local_208;
        pFVar28 = pFVar28 + 0x10;
      } while( true );
    }
    if ((*(longlong *)pFVar28 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
      return pTVar19;
    }
    cVar14 = (**(code **)(**(longlong **)pFVar28 + 8))();
    if ((cVar14 != '\x01') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Window->GetNodeType() == EWidgetReflectorNodeType::Snapshot",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\SlateReflector\\Private\\Widgets\\SWidgetSnapshotVisualizer.cpp"
                            ,0x1d4,L""), bVar13)) break;
    if ((*(longlong *)pFVar28 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
      return pTVar19;
    }
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar28 + 8);
    pFVar4 = *(FSnapshotWidgetReflectorNode **)pFVar28;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pFVar4 == (FSnapshotWidgetReflectorNode *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
      return pTVar19;
    }
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_180.Object = pFVar4;
    local_180.SharedReferenceCount.ReferenceController = pTVar3;
    pTVar20 = FSnapshotWidgetReflectorNode::ToJson(&local_90,&local_180);
    local_228.Object = pTVar20->Object;
    local_228.SharedReferenceCount.ReferenceController =
         (pTVar20->SharedReferenceCount).ReferenceController;
    if (local_228.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_228.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_280.AllocatorInstance.Data <= &local_228) &&
        (&local_228 <
         (TSharedPtr<FJsonValue,1> *)
         (local_280.AllocatorInstance.Data + (longlong)local_280.ArrayMax * 0x10))) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar13)) {
      pcVar6 = (code *)swi(3);
      pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
      return pTVar19;
    }
    iVar15 = local_280.ArrayNum;
    if (local_280.ArrayNum == local_280.ArrayMax) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&local_280.AllocatorInstance,&local_280.ArrayMax);
    }
    local_280.ArrayNum = iVar15 + 1;
    *(FJsonValue **)&local_280.AllocatorInstance.Data[(longlong)iVar15 * 0x10].field_0x0 =
         local_228.Object;
    *(TReferenceControllerBase<1> **)
     (local_280.AllocatorInstance.Data + (longlong)iVar15 * 0x10 + 8) =
         local_228.SharedReferenceCount.ReferenceController;
    local_228.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_228.Object = (FJsonValue *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_180.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar28 = pFVar28 + 0x10;
  }
  pcVar6 = (code *)swi(3);
  pTVar19 = (TSharedRef<FJsonObject,1> *)(*pcVar6)();
  return pTVar19;
}

// SaveSnapshotToBuffer @ 142efb600

/* WARNING: Enum "ECompressionFlags": Some values do not have unique names */

void __thiscall
FWidgetSnapshotData::SaveSnapshotToBuffer
          (FWidgetSnapshotData *this,TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_1)

{
  FSharedReferencer<1> FVar1;
  FNameEntryId FVar2;
  FName FVar3;
  FName FVar4;
  undefined4 extraout_var;
  uint local_res10 [2];
  FName local_res18 [2];
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_1c8;
  TSharedRef<FJsonObject,1> local_1b8;
  FArchiveState local_1a8;
  undefined8 local_118;
  void **local_110;
  undefined8 local_108;
  void *local_100;
  undefined8 local_f8;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_e8;
  TSharedPtr<FJsonObject,1> local_38 [2];
  
  SaveSnapshotAsJson(this,&local_1b8);
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  local_1a8._padding_ = 0;
  local_1a8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_1a8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_1a8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_1a8._40_8_ = 0;
  local_1a8.ArSerializingDefaults = 0;
  local_1a8.ArPortFlags = 0;
  local_1a8.ArMaxSerializeSize = 0;
  local_1a8.ArUEVer.FileVersionUE4 = 0;
  local_1a8.ArUEVer.FileVersionUE5 = 0;
  local_1a8.ArLicenseeUEVer = 0;
  local_1a8.ArEngineVer.Major = 0;
  local_1a8.ArEngineVer.Minor = 0;
  local_1a8.ArEngineVer.Patch = 0;
  local_1a8.ArEngineVer._6_2_ = 0;
  local_1a8.ArEngineVer.Changelist = 0;
  local_1a8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_1a8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_1a8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_1a8.SerializedProperty = (FProperty *)0x0;
  local_1a8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_1a8.bCustomVersionsAreReset = false;
  local_1a8._129_7_ = 0;
  local_1a8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_1a8);
  local_110 = &local_100;
  local_118 = 0;
  local_1a8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_108 = 0;
  FArchiveState::SetIsSaving(&local_1a8,true);
  (**(code **)(local_1a8._padding_ + 0x108))(&local_1a8,0);
  local_100 = (void *)0x0;
  local_1a8._padding_ = (longlong)&___7FBufferArchive__6B_;
  local_f8 = 0;
  FVar3 = (FName)::operator_new(0x28);
  if (FVar3 != (FName)0x0) {
    *(undefined8 *)((longlong)FVar3 + 0x10) = 0;
    *(undefined ***)FVar3 = &___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
    *(FArchiveState **)((longlong)FVar3 + 8) = &local_1a8;
    *(undefined8 *)((longlong)FVar3 + 0x18) = 0;
    *(undefined8 *)((longlong)FVar3 + 0x20) = 0;
    FVar4 = FVar3;
  }
  local_res18[0] = FVar4;
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1>::
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>
            (&local_1c8,
             (TRawPtrProxy<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_> *)local_res18)
  ;
  FVar1.ReferenceController = local_1b8.SharedReferenceCount.ReferenceController;
  local_38[0].Object = local_1b8.Object;
  local_38[0].SharedReferenceCount.ReferenceController =
       local_1b8.SharedReferenceCount.ReferenceController;
  if (local_1b8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_1b8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
  Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(local_38,&local_1c8,true);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar1.ReferenceController);
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  local_e8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_e8);
  local_e8._padding_ = 0;
  local_e8.ArchiveName.ComparisonIndex.Value = 0;
  local_e8.ArchiveName.Number = 0;
  local_e8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_e8.Bytes = param_1;
  FArchiveState::SetIsSaving((FArchiveState *)&local_e8,true);
  (**(code **)(local_e8._padding_ + 0x108))(&local_e8,0);
  local_e8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_res10[0] = (uint)local_f8;
  if (*(uint **)(local_e8._padding_ + 8) < *(uint **)local_e8._padding_ + 1) {
    if ((local_e8._padding_ & 0x10000U) == 0) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_e8,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)&local_e8,local_res10);
    }
  }
  else {
    local_res10[0] = **(uint **)local_e8._padding_;
    *(longlong *)local_e8._padding_ = *(longlong *)local_e8._padding_ + 4;
  }
  FVar2 = FNameEntryId::FromValidEName((EName)local_res18);
  local_res18[0].Number = 0;
  local_res18[0].ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  FArchive::SerializeCompressed
            ((FArchive *)&local_e8,local_100,(longlong)(int)(uint)local_f8,local_res18[0],
             COMPRESS_NoFlags,false);
  FArchive::~FArchive((FArchive *)&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1c8.SharedReferenceCount.ReferenceController);
  if (local_100 != (void *)0x0) {
    FMemory::Free(local_100);
  }
  FArchive::~FArchive((FArchive *)&local_1a8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1b8.SharedReferenceCount.ReferenceController);
  return;
}

// SaveSnapshotToFile @ 142efb8e0

bool __thiscall FWidgetSnapshotData::SaveSnapshotToFile(FWidgetSnapshotData *this,FString *param_1)

{
  FSharedReferencer<1> FVar1;
  IFileManager *pIVar2;
  FArchive *pFVar3;
  wchar_t *pwVar4;
  TRawPtrProxy<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_> local_res10 [3];
  TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1> local_48;
  TSharedRef<FJsonObject,1> local_38;
  TSharedPtr<FJsonObject,1> local_28 [2];
  
  SaveSnapshotAsJson(this,&local_38);
  pIVar2 = IFileManager::Get();
  if ((param_1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  pFVar3 = (FArchive *)(**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,pwVar4,0);
  if (pFVar3 != (FArchive *)0x0) {
    local_res10[0].Object = ::operator_new(0x28);
    if (local_res10[0].Object == (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0) {
      local_res10[0].Object = (TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_> *)0x0;
    }
    else {
      (local_res10[0].Object)->Stream = pFVar3;
      (local_res10[0].Object)->_padding_ =
           (longlong)&___7__TJsonWriter__WU__TCondensedJsonPrintPolicy__W____6B_;
      ((local_res10[0].Object)->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ((local_res10[0].Object)->Stack).ArrayNum = 0;
      ((local_res10[0].Object)->Stack).ArrayMax = 0;
      (local_res10[0].Object)->PreviousTokenWritten = None;
      (local_res10[0].Object)->IndentLevel = 0;
    }
    TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1>::
    TSharedRef<TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>,1><TJsonWriter<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>_>
              (&local_48,local_res10);
    FVar1.ReferenceController = local_38.SharedReferenceCount.ReferenceController;
    local_28[0].Object = local_38.Object;
    local_28[0].SharedReferenceCount.ReferenceController =
         local_38.SharedReferenceCount.ReferenceController;
    if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TJsonSerializer<FJsonSerializerPolicy_JsonObject>::
    Serialize<wchar_t,TCondensedJsonPrintPolicy<wchar_t>_>(local_28,&local_48,true);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar1.ReferenceController);
    (**(code **)(*(longlong *)pFVar3 + 0x210))(pFVar3);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    return true;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return false;
}

// TakeSnapshot @ 142f0cc10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FWidgetSnapshotData::TakeSnapshot(FWidgetSnapshotData *this,bool param_1)

{
  FSlateApplication *this_00;
  TArray<TSharedRef<SWindow,1>,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  this_00 = FSlateApplication::Get();
  FSlateApplication::GetAllVisibleWindowsOrdered(this_00,&local_18);
  CreateSnapshot(this,&local_18,param_1);
  DestructItems<TSharedRef<SWindow,1>,int>
            ((TSharedRef<SWindow,1> *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if ((TSharedRef<SWindow,1> *)local_18.AllocatorInstance.Data != (TSharedRef<SWindow,1> *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

