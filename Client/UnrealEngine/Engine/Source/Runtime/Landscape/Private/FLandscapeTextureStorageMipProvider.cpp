// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 11

// FLandscapeTextureStorageMipProvider @ 145fb4cd0

FLandscapeTextureStorageMipProvider * __thiscall
FLandscapeTextureStorageMipProvider::FLandscapeTextureStorageMipProvider
          (FLandscapeTextureStorageMipProvider *this,
          ULandscapeTextureStorageProviderFactory *param_1)

{
  UTexture2D *pUVar1;
  undefined4 uVar2;
  
  FTextureMipDataProvider::FTextureMipDataProvider
            ((FTextureMipDataProvider *)this,(UTexture *)(param_1->Texture).field0_0x0.DebugPtr,Init
             ,Async);
  this->_padding_ = (longlong)&___7FLandscapeTextureStorageMipProvider__6B_;
  (this->IORequests).AllocatorInstance.SecondaryData =
       (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0;
  (this->IORequests).ArrayNum = 0;
  (this->IORequests).ArrayMax = 0xf;
  (this->DestMipInfos).AllocatorInstance.SecondaryData = (ForElementType<FTextureMipInfo>)0x0;
  (this->DestMipInfos).ArrayNum = 0;
  (this->DestMipInfos).ArrayMax = 0xf;
  (this->TextureName).ComparisonIndex = 0;
  (this->TextureName).Number = 0;
  *(undefined8 *)&this->AsyncFileCallBack = 0;
  *(undefined8 *)&(this->AsyncFileCallBack).field_0x28 = 0;
  this->bPrioritizedIORequest = false;
  this->bIORequestCancelled = false;
  this->bIORequestAborted = false;
  this->Factory = param_1;
  this->FirstRequestedMipIndex = -1;
  pUVar1 = (param_1->Texture).field0_0x0.DebugPtr;
  uVar2 = *(undefined4 *)((longlong)&pUVar1->_padding_ + 4);
  (this->TextureName).ComparisonIndex = (FNameEntryId)*(undefined4 *)&pUVar1->_padding_;
  (this->TextureName).Number = uVar2;
  return this;
}

// ~FLandscapeTextureStorageMipProvider @ 145fb6600

void __thiscall
FLandscapeTextureStorageMipProvider::~FLandscapeTextureStorageMipProvider
          (FLandscapeTextureStorageMipProvider *this)

{
  longlong *plVar1;
  ForElementType<FTextureMipInfo> FVar2;
  longlong *plVar3;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar4;
  
  this->_padding_ = (longlong)&___7FLandscapeTextureStorageMipProvider__6B_;
  if (*(longlong *)&this->AsyncFileCallBack != 0) {
    plVar1 = *(longlong **)&(this->AsyncFileCallBack).field_0x28;
    plVar3 = (longlong *)&(this->AsyncFileCallBack).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  FVar2 = (this->DestMipInfos).AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<FTextureMipInfo>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  FVar4 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar4 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)&this->IORequests;
  }
  DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
            ((FIORequest *)FVar4,(this->IORequests).ArrayNum);
  FVar4 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  this->_padding_ = (longlong)&___7FTextureMipDataProvider__6B_;
  return;
}

// AbortPollMips @ 145fb98d0

void __thiscall
FLandscapeTextureStorageMipProvider::AbortPollMips(FLandscapeTextureStorageMipProvider *this)

{
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar1;
  int iVar2;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar3;
  undefined1 local_res8 [8];
  
  FVar3 = (this->IORequests).AllocatorInstance.SecondaryData;
  iVar2 = (this->IORequests).ArrayNum;
  if (FVar3 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar3 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)&this->IORequests;
  }
  FVar1 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
          ((longlong)FVar3 + (longlong)iVar2 * 0x18);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FLandscapeTextureStorageMipProvider::FIORequest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar3 == FVar1) break;
    if (*(longlong **)((longlong)FVar3 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)FVar3 + 8) + 0x28))();
      this->bIORequestAborted = true;
    }
    FVar3 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
            ((longlong)FVar3 + 0x18);
  }
  return;
}

// Cancel @ 145fba880

void __thiscall
FLandscapeTextureStorageMipProvider::Cancel
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateSyncOptions *param_1)

{
  TArray<FLandscapeTextureStorageMipProvider::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar5;
  longlong *plVar6;
  undefined1 auStackX_8 [8];
  
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IORequests;
  iVar3 = (this->IORequests).ArrayNum;
  if (FVar5 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar5 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
  }
  plVar6 = (longlong *)((longlong)FVar5 + 8);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FLandscapeTextureStorageMipProvider::FIORequest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(auStackX_8);
    }
    if (plVar6 + -1 == (longlong *)((longlong)FVar5 + (longlong)iVar3 * 0x18)) break;
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)*plVar6 + 0x28))();
        (**(code **)(*(longlong *)*plVar6 + 0x10))((longlong *)*plVar6,0);
      }
    }
    plVar6 = plVar6 + 3;
  }
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar5 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
  }
  DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
            ((FIORequest *)FVar5,(this->IORequests).ArrayNum);
  piVar2 = &(this->IORequests).ArrayMax;
  (this->IORequests).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_>
              (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// CleanUp @ 145fbaec0

void __thiscall
FLandscapeTextureStorageMipProvider::CleanUp
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateSyncOptions *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((uint)this->_padding_ < 6) {
    *(undefined4 *)&this->_padding_ = 5;
    *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("(uint32)NextTickState <= (uint32)InState",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                     ,0xd1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return;
}

// ClearIORequests @ 145fbb130

void __thiscall
FLandscapeTextureStorageMipProvider::ClearIORequests(FLandscapeTextureStorageMipProvider *this)

{
  TArray<FLandscapeTextureStorageMipProvider::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  pTVar1 = &this->IORequests;
  iVar3 = (this->IORequests).ArrayNum;
  if (FVar5 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar5 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
  }
  plVar6 = (longlong *)((longlong)FVar5 + 8);
  while( true ) {
    if ((this->IORequests).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FLandscapeTextureStorageMipProvider::FIORequest,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (plVar6 + -1 == (longlong *)((longlong)FVar5 + (longlong)iVar3 * 0x18)) break;
    if ((longlong *)*plVar6 != (longlong *)0x0) {
      cVar4 = (**(code **)(*(longlong *)*plVar6 + 8))();
      if (cVar4 == '\0') {
        (**(code **)(*(longlong *)*plVar6 + 0x28))();
        (**(code **)(*(longlong *)*plVar6 + 0x10))((longlong *)*plVar6,0);
      }
    }
    plVar6 = plVar6 + 3;
  }
  FVar5 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar5 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar5 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
  }
  DestructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
            ((FIORequest *)FVar5,(this->IORequests).ArrayNum);
  piVar2 = &(this->IORequests).ArrayMax;
  (this->IORequests).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_>
              (0x18,8,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  return;
}

// CreateAsyncFileCallback @ 145fbb9c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateSyncOptions *param_1)

{
  FThreadSafeCounter *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined1 auStack_e8 [32];
  FLandscapeTextureStorageMipProvider *local_c8;
  FThreadSafeCounter *local_c0;
  longlong local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pFVar1 = param_1->Counter;
  local_58 = *(longlong *)&param_1->RescheduleCallback;
  local_30 = (longlong *)0x0;
  if (*(longlong *)&param_1->RescheduleCallback != 0) {
    puVar11 = *(undefined8 **)&(param_1->RescheduleCallback).field_0x28;
    puVar12 = (undefined8 *)&(param_1->RescheduleCallback).field_0x10;
    if (puVar11 != (undefined8 *)0x0) {
      puVar12 = puVar11;
    }
    (**(code **)*puVar12)(puVar12,local_48);
  }
  if (((pFVar1 == (FThreadSafeCounter *)0x0) || (local_58 == 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Counter && RescheduleCallback",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                          ,0x229,L""), bVar10)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_90 = (longlong *)0x0;
  local_c8 = this;
  local_c0 = pFVar1;
  local_b8 = local_58;
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)*plVar14)(plVar14,&local_a8);
  }
  local_88 = (code *)0x0;
  puVar11 = FMemory::Malloc(0x50,0x10);
  *puVar11 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  puVar11[2] = local_c8;
  puVar11[3] = local_c0;
  puVar11[4] = local_b8;
  puVar11[9] = local_90;
  local_90 = (longlong *)0x0;
  puVar11[6] = local_a8;
  puVar11[7] = uStack_a0;
  puVar11[8] = local_98;
  if (puVar11[4] != 0) {
    local_b8 = 0;
  }
  lVar8 = *(longlong *)&this->AsyncFileCallBack;
  uVar9 = *(undefined8 *)&(this->AsyncFileCallBack).field_0x8;
  uVar3 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x10;
  uVar4 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x14;
  uVar5 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x18;
  uVar6 = *(undefined4 *)&(this->AsyncFileCallBack).field_0x1c;
  uVar7 = *(undefined8 *)&(this->AsyncFileCallBack).field_0x20;
  plVar14 = *(longlong **)&(this->AsyncFileCallBack).field_0x28;
  if (puVar11 + 2 != (undefined8 *)0x0) {
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`FLandscapeTextureStorageMipProvider::CreateAsyncFileCallback'::__l2::<lambda_1>,void,bool,IBulkDataIORequest_*>
               ::Call;
  }
  *(code **)&this->AsyncFileCallBack = local_88;
  *(undefined8 *)&(this->AsyncFileCallBack).field_0x8 = uStack_80;
  uStack_60._0_4_ = SUB84(puVar11,0);
  uStack_60._4_4_ = (undefined4)((ulonglong)puVar11 >> 0x20);
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x10 = local_78;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x14 = uStack_74;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x18 = uStack_70;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x1c = uStack_6c;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x20 = (undefined4)local_68;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x24 = local_68._4_4_;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x28 = (undefined4)uStack_60;
  *(undefined4 *)&(this->AsyncFileCallBack).field_0x2c = uStack_60._4_4_;
  local_88 = (code *)lVar8;
  uStack_80 = uVar9;
  local_78 = uVar3;
  uStack_74 = uVar4;
  uStack_70 = uVar5;
  uStack_6c = uVar6;
  local_68 = uVar7;
  uStack_60 = plVar14;
  if (lVar8 != 0) {
    plVar13 = (longlong *)&local_78;
    if (plVar14 != (longlong *)0x0) {
      plVar13 = plVar14;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (local_b8 != 0) {
    plVar14 = &local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar14 = local_90;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  if (local_58 != 0) {
    plVar14 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar14 = local_30;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// GetCancelThread @ 145fc1550

ETickThread __thiscall
FLandscapeTextureStorageMipProvider::GetCancelThread(FLandscapeTextureStorageMipProvider *this)

{
  ETickThread EVar1;
  
  EVar1 = None;
  if ((this->IORequests).ArrayNum != 0) {
    EVar1 = Async;
  }
  return EVar1;
}

// GetMips @ 145fc29b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAsyncIOPriorityAndFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
FLandscapeTextureStorageMipProvider::GetMips
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateContext *param_1,int param_2,
          TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *param_3
          ,FTextureUpdateSyncOptions *param_4)

{
  ULandscapeTextureStorageProviderFactory *pUVar1;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar2;
  undefined8 uVar3;
  IBulkDataIORequest *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong64 uVar11;
  uchar *puVar12;
  TEventRef<unsigned_int> TVar13;
  IBulkDataIORequest *pIVar14;
  FWriteBuffer *pFVar15;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar16;
  EAsyncIOPriorityAndFlags EVar17;
  FScriptContainerElement *pFVar18;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar19;
  ulonglong uVar20;
  longlong lVar21;
  EAsyncIOPriorityAndFlags EVar22;
  uint uVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined1 auStackY_128 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  FBulkData *local_a8;
  longlong local_a0;
  FTextureUpdateSyncOptions *local_98;
  FName local_90;
  FName local_88;
  ForElementType<FTextureMipInfo> local_80;
  FName local_78;
  FName local_70;
  undefined4 *local_68;
  longlong local_60;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  uVar20 = (ulonglong)param_2;
  local_98 = param_4;
  local_80 = (ForElementType<FTextureMipInfo>)param_3;
  CreateAsyncFileCallback(this,param_4);
  if ((param_4->Counter == (FThreadSafeCounter *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SyncOptions.Counter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                         ,0x275,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>::operator=
            (&this->DestMipInfos,param_3);
  this->FirstRequestedMipIndex = param_2;
  if (param_2 < (int)this->_padding_) {
    lVar25 = uVar20 * 0x18;
    lVar21 = uVar20 * 0x30;
    while ((param_2 = (int)uVar20, local_a0 = lVar21, -1 < param_2 &&
           (param_2 < *(int *)((longlong)param_3 + 0x2d8)))) {
      uVar23 = (uint)~param_2 >> 0x1f;
      if ((param_2 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      pUVar1 = this->Factory;
      if (*(ForElementType<FTextureMipInfo> *)((longlong)param_3 + 0x2d0) !=
          (ForElementType<FTextureMipInfo>)0x0) {
        param_3 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
                   *)*(ForElementType<FTextureMipInfo> *)((longlong)param_3 + 0x2d0);
      }
      plVar24 = (longlong *)((longlong)param_3 + lVar21);
      if ((pUVar1->Mips).ArrayNum <= param_2) break;
      uVar10 = 0;
      if (param_2 < (pUVar1->Mips).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      pFVar18 = (pUVar1->Mips).AllocatorInstance.Data + (longlong)param_2 * 0x38;
      if ((pFVar18 == (FScriptContainerElement *)0x0) || (*plVar24 == 0)) break;
      FVar19 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)&this->IORequests;
      uVar10 = 0;
      if (param_2 < (this->IORequests).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
      FVar16 = FVar19;
      if (FVar2 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
        FVar16 = FVar2;
      }
      if (*(int *)((longlong)FVar16 + lVar25) == 0) break;
      LOCK();
      local_98->Counter->Counter = local_98->Counter->Counter + 1;
      UNLOCK();
      local_a8 = (FBulkData *)(pFVar18 + 0x10);
      uVar11 = FBulkData::GetBulkDataSize(local_a8);
      if (pFVar18[8] == (FScriptContainerElement)0x0) {
        if ((plVar24[1] != 0) && (plVar24[1] != uVar11)) {
          if (1 < (byte)LogLandscape._0_1_) {
            UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
          }
          if ((uVar11 != plVar24[1]) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("StreamDataSize == DestMip.DataSize",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                                 ,0x2ac,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar9 = (*pcVar6)();
            return iVar9;
          }
        }
        if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
          local_b0 = 0;
          TVar13 = (TEventRef<unsigned_int>)&local_b0;
        }
        else {
          ::FName::FName(&local_88,"Landscape");
          TVar13 = FStringTrace::GetNameRef(&local_70);
        }
        uVar3 = *(undefined8 *)TVar13;
        bVar7 = false;
        if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
          UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                    ((TLogScope<0> *)&local_58);
          bVar7 = true;
          *local_58 = (int)uVar3;
          *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
        }
        uVar10 = 0;
        if (param_2 < (this->IORequests).ArrayNum) {
          uVar10 = uVar23;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
        FVar16 = FVar19;
        if (FVar2 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
          FVar16 = FVar2;
        }
        EVar17 = (this->bPrioritizedIORequest != false) + AIOP_Low;
        EVar22 = AIOP_Low;
        if (AIOP_Low < EVar17) {
          EVar22 = EVar17;
        }
        pIVar14 = FBulkData::CreateStreamingRequest
                            (local_a8,0,uVar11,EVar22 | AIOP_FLAG_DONTCACHE,&this->AsyncFileCallBack
                             ,(uchar *)*plVar24);
        pIVar4 = *(IBulkDataIORequest **)((uchar *)((longlong)FVar16 + 8) + lVar25);
        if ((pIVar4 != pIVar14) &&
           (*(IBulkDataIORequest **)((uchar *)((longlong)FVar16 + 8) + lVar25) = pIVar14,
           pIVar4 != (IBulkDataIORequest *)0x0)) {
          (**(code **)*pIVar4)(pIVar4,1);
        }
        if (bVar7) {
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar21 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar15 = *(FWriteBuffer **)(lVar21 + 0x20);
          if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 1) {
            pFVar15 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar15->Cursor = '\n';
          pFVar15->Cursor = pFVar15->Cursor + 1;
          pFVar15->Committed = pFVar15->Cursor;
        }
      }
      else {
        puVar12 = FMemory::Malloc(uVar11,0);
        if ((MetadataChannel->Enabled < 0) || (IoStoreChannel->Enabled < 0)) {
          local_b8 = 0;
          TVar13 = (TEventRef<unsigned_int>)&local_b8;
        }
        else {
          ::FName::FName(&local_90,"Landscape");
          TVar13 = FStringTrace::GetNameRef(&local_78);
        }
        uVar3 = *(undefined8 *)TVar13;
        bVar7 = false;
        if ((-1 < MetadataChannel->Enabled) && (-1 < IoStoreChannel->Enabled)) {
          UE::Trace::Private::FLogScope::ScopedEnter<FMetadataIoStoreTagFields>
                    ((TLogScope<0> *)&local_68);
          bVar7 = true;
          *local_68 = (int)uVar3;
          *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
        }
        uVar10 = 0;
        if (param_2 < (this->IORequests).ArrayNum) {
          uVar10 = uVar23;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          iVar9 = (*pcVar6)();
          return iVar9;
        }
        FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
        FVar16 = FVar19;
        if (FVar2 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
          FVar16 = FVar2;
        }
        EVar17 = (this->bPrioritizedIORequest != false) + AIOP_Low;
        EVar22 = AIOP_Low;
        if (AIOP_Low < EVar17) {
          EVar22 = EVar17;
        }
        pIVar14 = FBulkData::CreateStreamingRequest
                            (local_a8,0,uVar11,EVar22 | AIOP_FLAG_DONTCACHE,&this->AsyncFileCallBack
                             ,puVar12);
        pIVar4 = *(IBulkDataIORequest **)((uchar *)((longlong)FVar16 + 8) + lVar25);
        if ((pIVar4 != pIVar14) &&
           (*(IBulkDataIORequest **)((uchar *)((longlong)FVar16 + 8) + lVar25) = pIVar14,
           pIVar4 != (IBulkDataIORequest *)0x0)) {
          (**(code **)*pIVar4)(pIVar4,1);
        }
        if (bVar7) {
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if (*(char *)(lVar21 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          pFVar15 = *(FWriteBuffer **)(lVar21 + 0x20);
          if ((int)pFVar15 - *(int *)&pFVar15->Cursor < 1) {
            pFVar15 = UE::Trace::Private::Writer_NextBuffer();
          }
          *pFVar15->Cursor = '\n';
          pFVar15->Cursor = pFVar15->Cursor + 1;
          pFVar15->Committed = pFVar15->Cursor;
        }
      }
      lVar5 = *plVar24;
      uVar10 = 0;
      if (param_2 < (this->IORequests).ArrayNum) {
        uVar10 = uVar23;
      }
      if ((uVar10 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar9 = (*pcVar6)();
        return iVar9;
      }
      FVar2 = (this->IORequests).AllocatorInstance.SecondaryData;
      if (FVar2 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
        FVar19 = FVar2;
      }
      lVar21 = local_a0 + 0x30;
      param_2 = param_2 + 1;
      uVar20 = (ulonglong)(uint)param_2;
      *(longlong *)(lVar25 + 0x10 + (longlong)FVar19) = lVar5;
      lVar25 = lVar25 + 0x18;
      param_3 = (TArray<FTextureMipInfo,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_> *
                )local_80;
      local_a0 = lVar21;
      if ((int)this->_padding_ <= param_2) break;
    }
  }
  if ((2 < (uint)this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    iVar9 = (*pcVar6)();
    return iVar9;
  }
  this->_padding_ = 2;
  return param_2;
}

// Init @ 145fc4920

void __thiscall
FLandscapeTextureStorageMipProvider::Init
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateContext *param_1,
          FTextureUpdateSyncOptions *param_2)

{
  TArray<FLandscapeTextureStorageMipProvider::FIORequest,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ULandscapeTextureStorageProviderFactory *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long64 lVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar13;
  uint uVar14;
  ulonglong uVar15;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar16;
  longlong lVar17;
  
  iVar4 = (int)this->_padding_;
  pTVar1 = &this->IORequests;
  iVar8 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<15,32,TSizedDefaultAllocator<32>_>::ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>_>
                    (0x18,8,iVar4,&pTVar1->AllocatorInstance,&(this->IORequests).ArrayNum,
                     &(this->IORequests).ArrayMax);
  FVar16 = (this->IORequests).AllocatorInstance.SecondaryData;
  if (FVar16 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
    FVar16 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
  }
  DefaultConstructItems<FLandscapeTextureStorageMipProvider::FIORequest,int>
            ((void *)((longlong)FVar16 + (longlong)iVar8 * 0x18),iVar4);
  bVar2 = *(byte *)((longlong)&this->_padding_ + 3);
  bVar3 = *(byte *)((longlong)&this->_padding_ + 2);
  if (((bVar3 < bVar2) &&
      (iVar4 = *(int *)((longlong)&this->_padding_ + 4), iVar4 < (int)((uint)bVar2 - (uint)bVar3)))
     && (uVar14 = 0, 0 < iVar4)) {
    lVar17 = 0;
    do {
      pUVar5 = this->Factory;
      if (((int)uVar14 < 0) || ((pUVar5->Mips).ArrayNum <= (int)uVar14)) {
        pFVar12 = (FScriptContainerElement *)0x0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar14 < (pUVar5->Mips).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (pUVar5->Mips).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x38;
      }
      uVar10 = MakeIoFilenameHash((FIoChunkId *)(pFVar12 + 0x28));
      uVar9 = 0;
      if ((int)uVar14 < (this->IORequests).ArrayNum) {
        uVar9 = ~uVar14 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVar16 = (this->IORequests).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
      if (FVar16 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
        FVar13 = FVar16;
      }
      uVar14 = uVar14 + 1;
      *(uint *)(lVar17 + (longlong)FVar13) = uVar10;
      lVar17 = lVar17 + 0x18;
    } while ((int)uVar14 < *(int *)((longlong)&this->_padding_ + 4));
  }
  iVar4 = *(int *)((longlong)&this->_padding_ + 4);
  uVar15 = (ulonglong)iVar4;
  if (iVar4 < (int)this->_padding_) {
    lVar17 = uVar15 * 0x18;
    do {
      pUVar5 = this->Factory;
      uVar14 = (uint)uVar15;
      if (((int)uVar14 < 0) || ((pUVar5->Mips).ArrayNum <= (int)uVar14)) {
        pFVar12 = (FScriptContainerElement *)0x0;
      }
      else {
        uVar9 = 0;
        if ((int)uVar14 < (pUVar5->Mips).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar12 = (pUVar5->Mips).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x38;
      }
      bVar7 = FBulkData::IsStoredCompressedOnDisk((FBulkData *)(pFVar12 + 0x10));
      if ((!bVar7) &&
         (lVar11 = FBulkData::GetBulkDataSize((FBulkData *)(pFVar12 + 0x10)), 0 < lVar11)) {
        uVar10 = MakeIoFilenameHash((FIoChunkId *)(pFVar12 + 0x28));
        uVar9 = 0;
        if ((int)uVar14 < (this->IORequests).ArrayNum) {
          uVar9 = ~uVar14 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar16 = (this->IORequests).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)pTVar1;
        if (FVar16 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
          FVar13 = FVar16;
        }
        *(uint *)(lVar17 + (longlong)FVar13) = uVar10;
      }
      uVar15 = (ulonglong)(uVar14 + 1);
      lVar17 = lVar17 + 0x18;
    } while ((int)(uVar14 + 1) < (int)this->_padding_);
  }
  if ((1 < (uint)this->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this->_padding_ = 1;
  return;
}

// PollMips @ 145fc5c10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FLandscapeTextureStorageMipProvider::PollMips
          (FLandscapeTextureStorageMipProvider *this,FTextureUpdateSyncOptions *param_1)

{
  int iVar1;
  ULandscapeTextureStorageProviderFactory *pUVar2;
  uchar *puVar3;
  ULandscapeHeightmapTextureEdgeFixup *this_00;
  FLandscapeGroup *SRWLock;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  FStreamingManagerCollection *this_01;
  IRenderAssetStreamingManager *pIVar8;
  long64 lVar9;
  longlong lVar10;
  uint uVar11;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar12;
  uint uVar13;
  ForElementType<FLandscapeTextureStorageMipProvider::FIORequest> FVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [8];
  longlong local_d0;
  longlong local_c8;
  uchar *local_c0;
  FString local_b8;
  FNeighborSnapshots local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->bIORequestCancelled != false) && (this->bIORequestAborted == false)) {
    this_01 = IStreamingManager::Get();
    pIVar8 = FStreamingManagerCollection::GetRenderAssetStreamingManager(this_01);
    FVar14 = (this->IORequests).AllocatorInstance.SecondaryData;
    iVar1 = (this->IORequests).ArrayNum;
    if (FVar14 == (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
      FVar14 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)&this->IORequests;
    }
    FVar12 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
             ((longlong)FVar14 + (longlong)iVar1 * 0x18);
    while( true ) {
      if ((this->IORequests).ArrayNum != iVar1) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<FLandscapeTextureStorageMipProvider::FIORequest,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_d8);
      }
      if (FVar14 == FVar12) break;
      (**(code **)(*(longlong *)pIVar8 + 0x118))(pIVar8,*(undefined4 *)FVar14);
      FVar14 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
               ((longlong)FVar14 + 0x18);
    }
    if (2 < (byte)LogLandscape._0_1_) {
      ::FName::ToString(&this->TextureName,&local_b8);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
      }
    }
  }
  if ((this->bIORequestCancelled == false) && (this->bIORequestAborted == false)) {
    uVar15 = (ulonglong)this->FirstRequestedMipIndex;
    if (this->FirstRequestedMipIndex < (int)this->_padding_) {
      local_d0 = uVar15 * 0x18;
      do {
        pUVar2 = this->Factory;
        uVar13 = (uint)uVar15;
        uVar11 = 0;
        pFVar17 = (FScriptContainerElement *)0x0;
        if ((-1 < (int)uVar13) && ((int)uVar13 < (pUVar2->Mips).ArrayNum)) {
          uVar16 = uVar11;
          if ((int)uVar13 < (pUVar2->Mips).ArrayNum) {
            uVar16 = ~uVar13 >> 0x1f;
          }
          if ((uVar16 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          pFVar17 = (pUVar2->Mips).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x38;
        }
        iVar1 = (this->IORequests).ArrayNum;
        uVar16 = ~uVar13 >> 0x1f;
        if (pFVar17[8] == (FScriptContainerElement)0x0) {
          uVar7 = uVar11;
          if ((int)uVar13 < iVar1) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar18 = local_d0;
          FVar14 = (this->IORequests).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
                   &this->IORequests;
          if (FVar14 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
            FVar12 = FVar14;
          }
          lVar10 = (**(code **)(**(longlong **)(local_d0 + 8 + (longlong)FVar12) + 0x18))();
          if ((int)uVar13 < (this->IORequests).ArrayNum) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar14 = (this->IORequests).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
                   &this->IORequests;
          if (FVar14 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
            FVar12 = FVar14;
          }
          if ((*(longlong *)(lVar18 + 0x10 + (longlong)FVar12) != lVar10) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IORequests[MipIndex].DestMipData == SourceData",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Landscape\\Private\\LandscapeTextureStorageProvider.cpp"
                                 ,0x2e7,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        else {
          uVar7 = uVar11;
          if ((int)uVar13 < iVar1) {
            uVar7 = uVar16;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          lVar18 = local_d0;
          FVar14 = (this->IORequests).AllocatorInstance.SecondaryData;
          FVar12 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
                   &this->IORequests;
          if (FVar14 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
            FVar12 = FVar14;
          }
          local_c0 = (uchar *)(**(code **)(**(longlong **)(local_d0 + 8 + (longlong)FVar12) + 0x18))
                                        ();
          local_c8 = (longlong)(*(int *)(pFVar17 + 4) * *(int *)pFVar17 * 4);
          if ((int)uVar13 < (this->IORequests).ArrayNum) {
            uVar11 = uVar16;
          }
          if ((uVar11 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          FVar14 = (this->IORequests).AllocatorInstance.SecondaryData;
          pUVar2 = this->Factory;
          FVar12 = (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)
                   &this->IORequests;
          if (FVar14 != (ForElementType<FLandscapeTextureStorageMipProvider::FIORequest>)0x0) {
            FVar12 = FVar14;
          }
          puVar3 = *(uchar **)(lVar18 + 0x10 + (longlong)FVar12);
          lVar9 = FBulkData::GetBulkDataSize((FBulkData *)(pFVar17 + 0x10));
          ULandscapeTextureStorageProviderFactory::DecompressMip
                    (pUVar2,local_c0,lVar9,puVar3,local_c8,uVar13);
          FMemory::Free(local_c0);
        }
        local_d0 = lVar18 + 0x18;
        uVar15 = (ulonglong)(uVar13 + 1);
      } while ((int)(uVar13 + 1) < (int)this->_padding_);
    }
    bVar5 = UE::Landscape::ShouldPatchStreamingMipEdges();
    if (((bVar5) &&
        (this_00 = (this->Factory->EdgeFixup).field0_0x0.DebugPtr,
        this_00 != (ULandscapeHeightmapTextureEdgeFixup *)0x0)) &&
       (SRWLock = this_00->ActiveGroup, SRWLock != (FLandscapeGroup *)0x0)) {
      AcquireSRWLockShared((PSRWLOCK)SRWLock);
      ULandscapeHeightmapTextureEdgeFixup::GetNeighborSnapshots(this_00,&local_a8);
      if (local_a8.ExistingNeighbors != None) {
        ULandscapeHeightmapTextureEdgeFixup::PatchTextureEdgesForStreamingMips
                  (*(int *)((longlong)&this->_padding_ + 4),(int)this->_padding_,&this->DestMipInfos
                   ,&local_a8);
      }
      if (5 < (byte)LogLandscape._0_1_) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogLandscape);
      }
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    }
  }
  ClearIORequests(this);
  if ((5 < (uint)this->_padding_) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(uint32)NextTickState <= (uint32)InState",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Streaming\\TextureMipDataProvider.h"
                         ,0xd1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  bVar5 = this->bIORequestCancelled;
  *(undefined4 *)&this->_padding_ = 5;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 2;
  return bVar5 == false;
}

