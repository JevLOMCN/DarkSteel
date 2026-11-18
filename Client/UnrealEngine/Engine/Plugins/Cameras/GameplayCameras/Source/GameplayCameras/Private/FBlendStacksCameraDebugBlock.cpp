// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FBlendStacksCameraDebugBlock @ 14d58c160

FBlendStacksCameraDebugBlock * __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::FBlendStacksCameraDebugBlock
          (FBlendStacksCameraDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FBlendStacksCameraDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->BlendStackNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlendStackNames).ArrayNum = 0;
  (this->BlendStackNames).ArrayMax = 0;
  return this;
}

// AddBlendStack @ 14d5978b0

void __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::AddBlendStack
          (FBlendStacksCameraDebugBlock *this,FString *param_1,FBlendStackCameraDebugBlock *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  pFVar2 = (this->BlendStackNames).AllocatorInstance.Data;
  if ((pFVar2 <= param_1) && (param_1 < pFVar2 + (longlong)(this->BlendStackNames).ArrayMax * 0x10))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->BlendStackNames).ArrayNum;
  piVar1 = &(this->BlendStackNames).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->BlendStackNames).AllocatorInstance,piVar1);
  }
  (this->BlendStackNames).ArrayNum = iVar5 + 1;
  ::FString::FString((FString *)
                     ((this->BlendStackNames).AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                     param_1);
  FCameraDebugBlock::AddChild((FCameraDebugBlock *)this,(FCameraDebugBlock *)param_2);
  return;
}

// GetTypeID @ 14d5abaf0

FCameraObjectTypeID * __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::GetTypeID(FBlendStacksCameraDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// IsKindOf @ 14d5b4600

bool __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::IsKindOf
          (FBlendStacksCameraDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FBlendStacksCameraDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5b9800

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
UE::Cameras::FBlendStacksCameraDebugBlock::OnDebugDraw
          (FBlendStacksCameraDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  ulong64 uVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  FString *pFVar11;
  size_t sVar12;
  void *pvVar13;
  ForAnyElementType FVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong local_88;
  FString local_68;
  FString local_58;
  FString local_48;
  
  uVar15 = 0;
  iVar7 = FCameraDebugCategories::BlendStacks.Data.ArrayNum + -1;
  FVar14.Data = FCameraDebugCategories::BlendStacks.Data.AllocatorInstance.Data;
  if (FCameraDebugCategories::BlendStacks.Data.ArrayNum == 0) {
    iVar7 = 0;
    FVar14.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar7,(wchar_t *)FVar14.Data);
  iVar7 = TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::FindIndexByHash<FString>
                    (&param_1->ActiveCategories,uVar6,&FCameraDebugCategories::BlendStacks);
  if (iVar7 != -1) {
    FCameraDebugRenderer::FlushText(param_2);
    (param_2->DrawColor).field0_0x0._s_0 =
         (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Title.field0_0x0;
    FCameraDebugRenderer::AddText(param_2,L"Blend Stacks\n\n");
    FCameraDebugRenderer::FlushText(param_2);
    (param_2->DrawColor).field0_0x0._s_0 =
         (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
    iVar7 = (int)this->_padding_;
    lVar1 = this->_padding_;
    if ((iVar7 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar8 = (this->BlendStackNames).ArrayNum;
    if (iVar8 < iVar7) {
      iVar8 = iVar7;
    }
    if (0 < (longlong)iVar8) {
      local_88 = 0;
      uVar16 = uVar15;
      uVar17 = uVar15;
      do {
        uVar6 = (uint)uVar15;
        if (((int)uVar6 < 0) || ((this->BlendStackNames).ArrayNum <= (int)uVar6)) {
          uVar17 = (ulonglong)((uint)uVar17 | 2);
          pFVar11 = ::FString::FString(&local_48,L"<unnamed blend stack>");
        }
        else {
          uVar17 = (ulonglong)((uint)uVar17 | 1);
          uVar9 = 0;
          if ((int)uVar6 < (this->BlendStackNames).ArrayNum) {
            uVar9 = ~uVar6 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (this->BlendStackNames).AllocatorInstance.Data;
          local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          iVar10 = *(int *)(pFVar2 + local_88 + 8);
          pvVar13 = *(void **)(pFVar2 + local_88);
          local_68.Data.ArrayNum = iVar10;
          if (iVar10 == 0) {
            local_68.Data.ArrayMax = 0;
            pFVar11 = &local_68;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,iVar10,0,(ForAnyElementType *)&local_68,iVar10,&local_68.Data.ArrayMax);
            memcpy(local_68.Data.AllocatorInstance.Data,pvVar13,(longlong)iVar10 * 2);
            pFVar11 = &local_68;
          }
        }
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
        if (((uVar17 & 2) != 0) &&
           (uVar17 = (ulonglong)((uint)uVar17 & 0xfffffffd),
           local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (((uVar17 & 1) != 0) &&
           (uVar17 = (ulonglong)((uint)uVar17 & 0xfffffffe),
           local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.ArrayNum == 0) {
          FVar14.Data = (FScriptContainerElement *)L"";
LAB_14d5b9a70:
          sVar12 = wcslen((wchar_t *)FVar14.Data);
          iVar10 = (int)sVar12;
        }
        else {
          iVar10 = 0;
          FVar14.Data = local_58.Data.AllocatorInstance.Data;
          if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
          goto LAB_14d5b9a70;
        }
        uVar4 = (longlong)iVar10 * 2;
        if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar4)
        {
          TStringBuilderBase<wchar_t>::Extend
                    ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar10);
        }
        if (iVar10 != 0) {
          pvVar13 = FGenericPlatformString::Memcpy
                              ((void *)(param_2->LineBuilder)._padding_,FVar14.Data,uVar4);
          (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar13 + uVar4);
        }
        FCameraDebugRenderer::FlushText(param_2);
        iVar10 = param_2->IndentLevel * GGameplayCamerasDebugIndent +
                 GGameplayCamerasDebugLeftMargin;
        (param_2->NextDrawPosition).field0_0x0._s_0.Y =
             (float)param_2->MaxCharHeight + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
        (param_2->NextDrawPosition).field0_0x0._s_0.X = (float)iVar10;
        FVar14 = GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance;
        if (GGameplayCamerasDebugBlendStacksFilter.Data.ArrayNum < 2) {
LAB_14d5b9b52:
          if (((int)uVar6 < 0) || (iVar7 <= (int)uVar6)) {
            FCameraDebugRenderer::AddText(param_2,L"<missing blend stack>");
          }
          else {
            if (((int)uVar6 < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                   ,0x14f,
                                   L"Array index out of bounds: %lld from an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FCameraDebugBlock::DebugDraw
                      (*(FCameraDebugBlock **)(lVar1 + uVar16 * 8),param_1,param_2);
          }
        }
        else if (GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance.Data !=
                 (FScriptContainerElement *)0x0) {
          sVar12 = wcslen((wchar_t *)
                          GGameplayCamerasDebugBlendStacksFilter.Data.AllocatorInstance.Data);
          iVar10 = ::FString::Find(&local_58,(wchar_t *)FVar14.Data,(int)sVar12,IgnoreCase,FromStart
                                   ,-1);
          if (iVar10 != -1) goto LAB_14d5b9b52;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        uVar15 = (ulonglong)(uVar6 + 1);
        local_88 = local_88 + 0x10;
        uVar16 = uVar16 + 1;
      } while ((longlong)uVar16 < (longlong)iVar8);
    }
  }
  param_2->VisitFlags = param_2->VisitFlags | (SkipChildrenBlocks|SkipAttachedBlocks);
  return;
}

// OnSerialize @ 14d5c35a0

void __thiscall
UE::Cameras::FBlendStacksCameraDebugBlock::OnSerialize
          (FBlendStacksCameraDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FString,TSizedDefaultAllocator<32>_>
            (param_1,&this->BlendStackNames);
  return;
}

