// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 6

// FPlayerControllersDebugBlock @ 14d58e850

FPlayerControllersDebugBlock * __thiscall
UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllersDebugBlock
          (FPlayerControllersDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FPlayerControllersDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->PlayerControllers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlayerControllers).ArrayNum = 0;
  (this->PlayerControllers).ArrayMax = 0;
  this->bHadValidWorld = false;
  return this;
}

// GetTypeID @ 14d5abc30

FCameraObjectTypeID * __thiscall
UE::Cameras::FPlayerControllersDebugBlock::GetTypeID(FPlayerControllersDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d5af770

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
UE::Cameras::FPlayerControllersDebugBlock::Initialize
          (FPlayerControllersDebugBlock *this,UWorld *param_1)

{
  int *piVar1;
  APlayerCameraManager *this_00;
  code *pcVar2;
  FScriptContainerElement *_Src;
  TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  APlayerController *this_01;
  AActor *pAVar8;
  undefined8 *puVar9;
  ULocalPlayer *pUVar10;
  ForAnyElementType FVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FScriptContainerElement *local_d8;
  undefined8 local_d0;
  uint local_c8;
  FScriptContainerElement local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  FString local_88;
  TIndexedContainerIterator<TArray<TWeakObjectPtr<APlayerController,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>_const_,TWeakObjectPtr<APlayerController,FWeakObjectPtr>_const_,int>
  local_78;
  FName local_68;
  FString local_60;
  FString local_50;
  
  if (param_1 != (UWorld *)0x0) {
    this->bHadValidWorld = true;
    UWorld::GetPlayerControllerIterator(param_1,&local_78);
    for (; (iVar7 = local_78.Index, pTVar3 = local_78.Container, -1 < local_78.Index &&
           (local_78.Index < (local_78.Container)->ArrayNum)); local_78.Index = local_78.Index + 1)
    {
      uVar6 = 0;
      if (local_78.Index < (local_78.Container)->ArrayNum) {
        uVar6 = (uint)~local_78.Index >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_01 = (APlayerController *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)
                                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 8));
      if ((((this_01 != (APlayerController *)0x0) && ((this_01->_padding_ & 2) != 0)) &&
          (cVar5 = (**(code **)(this_01->_padding_ + 0x7f0))(this_01), cVar5 != '\0')) &&
         (this_00 = (this_01->PlayerCameraManager).field0_0x0.DebugPtr,
         this_00 != (APlayerCameraManager *)0x0)) {
        pAVar8 = APlayerCameraManager::GetViewTarget(this_00);
        puVar9 = (undefined8 *)(**(code **)(this_00->_padding_ + 0x798))(this_00);
        local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = 0;
        local_108.Data.ArrayMax = 0;
        local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.Data.ArrayNum = 0;
        local_f8.Data.ArrayMax = 0;
        local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.Data.ArrayNum = 0;
        local_e8.Data.ArrayMax = 0;
        local_d8 = (FScriptContainerElement *)0x0;
        local_d0._0_4_ = 0;
        local_d0._4_4_ = 0;
        local_c4 = (FScriptContainerElement)0x0;
        local_res10 = (FName)this_01->_padding_;
        ::FName::ToString(&local_res10,&local_60);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_60.Data.ArrayNum != 0) {
          FVar11.Data = local_60.Data.AllocatorInstance.Data;
        }
        ::FString::operator=(&local_108,(wchar_t *)FVar11.Data);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        local_res18 = (FName)this_00->_padding_;
        ::FName::ToString(&local_res18,&local_50);
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_50.Data.ArrayNum != 0) {
          FVar11.Data = local_50.Data.AllocatorInstance.Data;
        }
        ::FString::operator=(&local_f8,(wchar_t *)FVar11.Data);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        if (pAVar8 == (AActor *)0x0) {
          ::FString::FString(&local_88,L"None");
        }
        else {
          local_res20 = (FName)pAVar8->_padding_;
          ::FName::ToString(&local_res20,&local_88);
        }
        FVar11.Data = (FScriptContainerElement *)L"";
        if (local_88.Data.ArrayNum != 0) {
          FVar11.Data = local_88.Data.AllocatorInstance.Data;
        }
        ::FString::operator=(&local_e8,(wchar_t *)FVar11.Data);
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        pUVar10 = APlayerController::GetLocalPlayer(this_01);
        if (pUVar10 != (ULocalPlayer *)0x0) {
          local_68 = (FName)pUVar10->_padding_;
          ::FName::ToString(&local_68,&local_118);
          if (local_d8 != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8);
          }
          local_d8 = local_118.Data.AllocatorInstance.Data;
          local_d0._0_4_ = local_118.Data.ArrayNum;
          local_d0._4_4_ = local_118.Data.ArrayMax;
          local_c8 = (uint)(pUVar10->AspectRatioAxisConstraint).Value;
          local_118.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_118.Data.ArrayNum = 0;
          local_118.Data.ArrayMax = 0;
          local_c4 = (FScriptContainerElement)0x1;
        }
        local_c0 = *puVar9;
        uStack_b8 = puVar9[1];
        pFVar12 = (this->PlayerControllers).AllocatorInstance.Data;
        local_b0 = puVar9[2];
        local_a8 = puVar9[3];
        uStack_a0 = puVar9[4];
        local_98 = puVar9[5];
        local_90 = *(undefined4 *)(puVar9 + 6);
        local_8c = *(undefined4 *)((longlong)puVar9 + 0x5c);
        if (((pFVar12 <= (FScriptContainerElement *)&local_108) &&
            ((FScriptContainerElement *)&local_108 <
             pFVar12 + (longlong)(this->PlayerControllers).ArrayMax * 0x80)) &&
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
        iVar7 = (this->PlayerControllers).ArrayNum;
        piVar1 = &(this->PlayerControllers).ArrayMax;
        if (iVar7 == *piVar1) {
          iVar7 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x880,&(this->PlayerControllers).AllocatorInstance,piVar1);
        }
        FVar11.Data = local_108.Data.AllocatorInstance.Data;
        pFVar12 = (this->PlayerControllers).AllocatorInstance.Data;
        (this->PlayerControllers).ArrayNum = iVar7 + 1;
        pFVar12 = pFVar12 + (longlong)iVar7 * 0x80;
        *(undefined8 *)&pFVar12->field_0x0 = 0;
        lVar13 = (longlong)local_108.Data.ArrayNum;
        *(int *)&pFVar12[8].field_0x0 = local_108.Data.ArrayNum;
        if (local_108.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0xc) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)pFVar12,
                     local_108.Data.ArrayNum,(int *)(pFVar12 + 0xc));
          memcpy(*(void **)&pFVar12->field_0x0,FVar11.Data,lVar13 * 2);
        }
        FVar11.Data = local_f8.Data.AllocatorInstance.Data;
        *(undefined8 *)&pFVar12[0x10].field_0x0 = 0;
        lVar13 = (longlong)local_f8.Data.ArrayNum;
        *(int *)&pFVar12[0x18].field_0x0 = local_f8.Data.ArrayNum;
        if (local_f8.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0x1c) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)(pFVar12 + 0x10),
                     local_f8.Data.ArrayNum,(int *)(pFVar12 + 0x1c));
          memcpy(*(FScriptContainerElement **)&pFVar12[0x10].field_0x0,FVar11.Data,lVar13 * 2);
        }
        FVar11.Data = local_e8.Data.AllocatorInstance.Data;
        *(undefined8 *)&pFVar12[0x20].field_0x0 = 0;
        lVar13 = (longlong)local_e8.Data.ArrayNum;
        *(int *)&pFVar12[0x28].field_0x0 = local_e8.Data.ArrayNum;
        if (local_e8.Data.ArrayNum == 0) {
          *(int *)(pFVar12 + 0x2c) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_e8.Data.ArrayNum,0,(ForAnyElementType *)(pFVar12 + 0x20),
                     local_e8.Data.ArrayNum,(int *)(pFVar12 + 0x2c));
          memcpy(*(FScriptContainerElement **)&pFVar12[0x20].field_0x0,FVar11.Data,lVar13 * 2);
        }
        _Src = local_d8;
        *(undefined8 *)&pFVar12[0x30].field_0x0 = 0;
        lVar13 = (longlong)(int)local_d0;
        *(int *)&pFVar12[0x38].field_0x0 = (int)local_d0;
        if ((int)local_d0 == 0) {
          *(int *)(pFVar12 + 0x3c) = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,(int)local_d0,0,(ForAnyElementType *)(pFVar12 + 0x30),(int)local_d0,
                     (int *)(pFVar12 + 0x3c));
          memcpy(*(FScriptContainerElement **)&pFVar12[0x30].field_0x0,_Src,lVar13 * 2);
        }
        pFVar12[0x44] = (FScriptContainerElement)0x0;
        pFVar12[0x44] = local_c4;
        if (local_c4 != (FScriptContainerElement)0x0) {
          *(uint *)&pFVar12[0x40].field_0x0 = local_c8;
        }
        *(undefined8 *)&pFVar12[0x48].field_0x0 = local_c0;
        *(undefined8 *)&pFVar12[0x50].field_0x0 = uStack_b8;
        *(undefined8 *)&pFVar12[0x58].field_0x0 = local_b0;
        *(undefined8 *)&pFVar12[0x60].field_0x0 = local_a8;
        *(undefined8 *)&pFVar12[0x68].field_0x0 = uStack_a0;
        *(undefined8 *)&pFVar12[0x70].field_0x0 = local_98;
        *(undefined4 *)&pFVar12[0x78].field_0x0 = local_90;
        *(undefined4 *)(pFVar12 + 0x7c) = local_8c;
        if (local_d8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// IsKindOf @ 14d5b4880

bool __thiscall
UE::Cameras::FPlayerControllersDebugBlock::IsKindOf
          (FPlayerControllersDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FPlayerControllersDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bb800

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
UE::Cameras::FPlayerControllersDebugBlock::OnDebugDraw
          (FPlayerControllersDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  int iVar1;
  ulong64 uVar2;
  size_t sVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  ForAnyElementType FVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  ForAnyElementType _Str;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  ::FString::FString(&local_78,"{cam_title}Player Controllers:{cam_default}");
  FVar6.Data = local_78.Data.AllocatorInstance.Data;
  if (local_78.Data.ArrayNum == 0) {
    _Str.Data = (FScriptContainerElement *)L"";
  }
  else {
    iVar9 = 0;
    _Str.Data = local_78.Data.AllocatorInstance.Data;
    if (local_78.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) goto LAB_14d5bb866;
  }
  sVar3 = wcslen((wchar_t *)_Str.Data);
  iVar9 = (int)sVar3;
LAB_14d5bb866:
  uVar2 = (longlong)iVar9 * 2;
  if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
    TStringBuilderBase<wchar_t>::Extend
              ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar9);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (iVar9 != 0) {
    pvVar4 = FGenericPlatformString::Memcpy
                       ((void *)(param_2->LineBuilder)._padding_,_Str.Data,uVar2);
    (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar4 + uVar2);
    FVar6.Data = local_78.Data.AllocatorInstance.Data;
  }
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  FCameraDebugRenderer::AddIndent(param_2);
  FCameraDebugRenderer::AddText(param_2,L"%d active local player controller(s)\n");
  if (this->bHadValidWorld == false) {
    FCameraDebugRenderer::AddText(param_2,L"<invalid world>");
  }
  else {
    iVar9 = (this->PlayerControllers).ArrayNum;
    pFVar7 = (this->PlayerControllers).AllocatorInstance.Data;
    pFVar8 = pFVar7 + (longlong)iVar9 * 0x80;
    while( true ) {
      if ((this->PlayerControllers).ArrayNum != iVar9) {
        `TCheckedPointerIterator<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar7 == pFVar8) break;
      FCameraDebugRenderer::AddText(param_2,L"- {cam_notice}%s{cam_default}");
      FCameraDebugRenderer::AddIndent(param_2);
      FCameraDebugRenderer::AddText(param_2,L"Local player: {cam_notice}%s{cam_default}\n");
      FCameraDebugRenderer::AddText(param_2,L"Camera manager: {cam_notice}%s{cam_default}\n");
      FCameraDebugRenderer::AddText(param_2,L"View target: {cam_notice}%s{cam_default}");
      FCameraDebugRenderer::AddIndent(param_2);
      ::FString::PrintfImpl(&local_78,L"X=%3.3f Y=%3.3f Z=%3.3f");
      FCameraDebugRenderer::AddText(param_2,L"Location  : %s\n");
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_68,L"P=%f Y=%f R=%f");
      FCameraDebugRenderer::AddText(param_2,L"Rotation  : %s\n");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_58,L"%f");
      FCameraDebugRenderer::AddText(param_2,L"FOV  : %s\n");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      ::FString::PrintfImpl(&local_48,L"%f");
      FCameraDebugRenderer::AddText(param_2,L"AspectRatio  : %s\n");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (pFVar7[0x44] == (FScriptContainerElement)0x0) {
        FCameraDebugRenderer::AddText
                  (param_2,L"DefaultAspectRatioAxisConstraint  : <no local player>\n");
      }
      else {
        iVar1 = *(int *)(pFVar7 + 0x40);
        if (iVar1 == 0) {
          pwVar5 = L"Maintain Y-Axis FOV";
        }
        else if (iVar1 == 1) {
          pwVar5 = L"Maintain X-Axis FOV";
        }
        else if (iVar1 == 2) {
          pwVar5 = L"Maintain Major Axis FOV";
        }
        else {
          pwVar5 = L"Invalid";
        }
        ::FString::FString(&local_38,pwVar5);
        FCameraDebugRenderer::AddText(param_2,L"DefaultAspectRatioAxisConstraint  : %s\n");
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      FCameraDebugRenderer::RemoveIndent(param_2);
      FCameraDebugRenderer::RemoveIndent(param_2);
      pFVar7 = pFVar7 + 0x80;
    }
  }
  FCameraDebugRenderer::RemoveIndent(param_2);
  return;
}

// OnSerialize @ 14d5c3890

void __thiscall
UE::Cameras::FPlayerControllersDebugBlock::OnSerialize
          (FPlayerControllersDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FPlayerControllersDebugBlock::FPlayerControllerDebugInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->PlayerControllers);
  ::operator<<(param_1,&this->bHadValidWorld);
  return;
}

