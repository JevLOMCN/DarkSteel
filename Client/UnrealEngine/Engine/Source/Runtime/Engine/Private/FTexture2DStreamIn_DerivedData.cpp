// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FTexture2DStreamIn_DerivedData @ 148806a10

FTexture2DStreamIn_DerivedData * __thiscall
UE::FTexture2DStreamIn_DerivedData::FTexture2DStreamIn_DerivedData
          (FTexture2DStreamIn_DerivedData *this,UTexture2D *param_1,bool param_2)

{
  FTexture2DStreamIn::FTexture2DStreamIn((FTexture2DStreamIn *)this,param_1);
  this->bHighPriority = param_2;
  this->_padding_ = (longlong)&___7FTexture2DStreamIn_DerivedData_UE__6B_;
  (this->Response).Response.Ptr = (FIoResponse *)0x0;
  (this->ResponseComplete).State = (atomic<unsigned_char>)0x0;
  return this;
}

// operator() @ 14880ef40

void __thiscall
`UE::FTexture2DStreamIn_DerivedData::DoBeginIoRequests'::__l2::<lambda_1>::operator()(void *this)

{
  byte bVar1;
  EDerivedDataIoStatus EVar2;
  byte *pbVar3;
  
  LOCK();
  *(int *)(*(longlong *)this + 0x58) = *(int *)(*(longlong *)this + 0x58) + -1;
  UNLOCK();
  EVar2 = UE::FDerivedDataIoResponse::GetOverallStatus
                    ((FDerivedDataIoResponse *)(*(longlong *)this + 0x260));
  if ((EVar2 != Ok) && (*(int *)(*(longlong *)this + 0x60) != 0)) {
    *(undefined1 *)(*(longlong *)this + 0x5c) = 1;
  }
  if (0 < FRenderAssetStreamingSettings::ExtraIOLatency) {
    FWindowsPlatformProcess::Sleep
              ((float)((*(int *)(*(longlong *)this + 0x10) - *(int *)(*(longlong *)this + 0x14)) *
                      FRenderAssetStreamingSettings::ExtraIOLatency) * __real_3a83126f);
  }
  pbVar3 = (byte *)(*(longlong *)this + 0x268);
  LOCK();
  bVar1 = *pbVar3;
  *pbVar3 = 1;
  UNLOCK();
  if ((bVar1 & 3) == 2) {
    UE::ParkingLot::WakeAll(pbVar3);
  }
  FRenderAssetUpdate::Tick(*(FRenderAssetUpdate **)this,TT_None);
  return;
}

// Abort @ 148816700

void __thiscall UE::FTexture2DStreamIn_DerivedData::Abort(FTexture2DStreamIn_DerivedData *this)

{
  if ((int)this->_padding_ != 0) {
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
  }
  FDerivedDataIoResponse::Cancel(&this->Response);
  return;
}

// DoBeginIoRequests @ 1488318f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::FTexture2DStreamIn_DerivedData::DoBeginIoRequests
          (FTexture2DStreamIn_DerivedData *this,FTexture2DUpdateContext *param_1)

{
  int iVar1;
  FDerivedDataIoOptions *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined ***pppuVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  FDerivedDataIoPriority FVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  uint local_c8 [2];
  TPimplPtr<UE::DerivedData::Private::FIoResponse,0> local_c0;
  FDerivedData local_b8;
  FString local_98;
  FString local_88;
  code *local_78 [2];
  undefined **local_68;
  FTexture2DStreamIn_DerivedData *local_60;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  LOCK();
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  UNLOCK();
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  uVar9 = (ulonglong)iVar1;
  local_c0.Ptr = (FIoResponse *)0x0;
  if (iVar1 < (int)this->_padding_) {
    lVar13 = uVar9 * 8;
    lVar12 = uVar9 << 4;
    do {
      if (*(char *)((longlong)&this->_padding_ + 4) != '\0') break;
      iVar1 = (param_1->MipsView).ArrayNum;
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_d8 = (longlong)(int)uVar8;
        local_d0 = (longlong)iVar1;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar1 = (int)this->_padding_;
      pFVar2 = *(FDerivedDataIoOptions **)((longlong)(param_1->MipsView).DataPtr + lVar13);
      uVar5 = 0;
      if ((int)uVar8 < iVar1) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_d8 = (longlong)(int)uVar8;
        local_d0 = (longlong)iVar1;
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
      plVar10 = &this->_padding_;
      if ((longlong *)this->_padding_ != (longlong *)0x0) {
        plVar10 = (longlong *)this->_padding_;
      }
      if ((*(longlong *)(lVar12 + (longlong)plVar10) == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("MipData[MipIndex].Data",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\Texture2DStreamIn_DerivedData.cpp"
                             ,0x1f,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(char *)((longlong)&pFVar2[1].Target + 3) == '\0') {
        bVar4 = FBulkData::IsBulkDataLoaded((FBulkData *)&pFVar2[1].Size);
        if (bVar4) {
          if (1 < (byte)LogTexture._0_1_) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)param_1->Texture,&local_98,(UObject *)0x0);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          iVar1 = (int)this->_padding_;
        }
        else {
          if (1 < (byte)LogTexture._0_1_) {
            UObjectBaseUtility::GetPathName
                      ((UObjectBaseUtility *)param_1->Texture,&local_88,(UObject *)0x0);
            Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTexture);
            if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_88.Data.AllocatorInstance.Data);
            }
          }
          iVar1 = (int)this->_padding_;
        }
        if (iVar1 != 0) {
          *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
        }
      }
      else {
        local_c8[0] = 0;
        uVar6 = FTexture2DResource::CalculateTightPackedMipSize
                          ((uint)*(ushort *)&pFVar2[3].Target,
                           (uint)*(ushort *)((longlong)&pFVar2[3].Target + 2),
                           *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4),local_c8);
        iVar1 = (int)this->_padding_;
        uVar5 = 0;
        if ((int)uVar8 < iVar1) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_d8 = (longlong)(int)uVar8;
          local_d0 = (longlong)iVar1;
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
        plVar10 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar10 = (longlong *)this->_padding_;
        }
        local_b8.CookedData.ChunkSize = *(ulong64 *)((longlong)plVar10 + lVar12);
        local_b8.CookedData.ChunkId[8] = '\0';
        local_b8.CookedData.ChunkId[9] = '\0';
        local_b8.CookedData.ChunkId[10] = '\0';
        local_b8.CookedData.ChunkId[0xb] = '\0';
        local_b8.CookedData.Flags = None;
        local_b8.CookedData.ChunkId._0_8_ = (ulonglong)uVar6;
        FDerivedDataIoBatch::Read((FDerivedDataIoBatch *)&local_c0,&local_b8,pFVar2);
        iVar1 = (int)this->_padding_;
        uVar5 = 0;
        if ((int)uVar8 < iVar1) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if (uVar5 == 0) {
          local_d8 = (longlong)(int)uVar8;
          local_d0 = (longlong)iVar1;
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
        plVar10 = &this->_padding_;
        if ((longlong *)this->_padding_ != (longlong *)0x0) {
          plVar10 = (longlong *)this->_padding_;
        }
        FTexture2DResource::WarnRequiresTightPackedMip
                  ((uint)*(ushort *)&pFVar2[3].Target,
                   (uint)*(ushort *)((longlong)&pFVar2[3].Target + 2),
                   *(EPixelFormat *)((longlong)&param_1->Resource->_padding_ + 4),
                   *(uint *)((longlong)plVar10 + lVar12 + 8));
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      lVar13 = lVar13 + 8;
      lVar12 = lVar12 + 0x10;
    } while ((int)(uVar8 + 1) < (int)this->_padding_);
  }
  local_50 = (undefined ***)0x0;
  FVar11.Value = -0x20000000;
  if (this->bHighPriority == false) {
    FVar11.Value = -0x40000000;
  }
  local_68 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::FTexture2DStreamIn_DerivedData::DoBeginIoRequests'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::FTexture2DStreamIn_DerivedData::DoBeginIoRequests'::__l2::<lambda_1>,void>
                ::Call;
  local_60 = this;
  FDerivedDataIoBatch::Dispatch
            ((FDerivedDataIoBatch *)&local_c0,&this->Response,FVar11,
             (TUniqueFunction<void___cdecl(void)> *)local_78);
  if (local_78[0] != (code *)0x0) {
    pppuVar7 = &local_68;
    if (local_50 != (undefined ***)0x0) {
      pppuVar7 = local_50;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (local_c0.Ptr != (FIoResponse *)0x0) {
    (**(code **)&local_c0.Ptr[-1].ResponseComplete.field_0x20)
              (&local_c0.Ptr[-1].ResponseComplete.field_0x20);
  }
  return;
}

// DoCancelIoRequests @ 148831d60

void __thiscall
UE::FTexture2DStreamIn_DerivedData::DoCancelIoRequests(FTexture2DStreamIn_DerivedData *this)

{
  FDerivedDataIoResponse::Cancel(&this->Response);
  return;
}

// DoEndIoRequests @ 148832800

void __thiscall
UE::FTexture2DStreamIn_DerivedData::DoEndIoRequests
          (FTexture2DStreamIn_DerivedData *this,FTexture2DUpdateContext *param_1)

{
  FManualResetEvent *pFVar1;
  atomic<unsigned_char> aVar2;
  FMonotonicTimePoint FVar3;
  bool bVar4;
  atomic<unsigned_char> *local_res8;
  FWaitState local_28 [2];
  
  FVar3.Time = __real_7ff0000000000000.Time;
  pFVar1 = &this->ResponseComplete;
  aVar2 = pFVar1->State;
  do {
    if (((byte)aVar2 & 1) != 0) {
      return;
    }
    if (((byte)aVar2 & 2) == 0) {
      LOCK();
      bVar4 = aVar2 == pFVar1->State;
      if (bVar4) {
        pFVar1->State = (atomic<unsigned_char>)0x2;
      }
      UNLOCK();
      if (bVar4) goto LAB_148832842;
    }
    else {
LAB_148832842:
      local_res8 = &pFVar1->State;
      ParkingLot::Private::WaitUntil
                (local_28,pFVar1,
                 TFunctionWithContext<bool___cdecl(void)>::
                 Call<_UE::FManualResetEvent::WaitUntil_::__l13::<lambda_1>_>,&local_res8,
                 (_func___cdecl_void_void_ptr *)0x0,(void *)0x0,FVar3);
    }
    aVar2 = pFVar1->State;
  } while( true );
}

// DoPollIoRequests @ 1488331b0

bool __thiscall
UE::FTexture2DStreamIn_DerivedData::DoPollIoRequests
          (FTexture2DStreamIn_DerivedData *this,FTexture2DUpdateContext *param_1)

{
  bool bVar1;
  
  bVar1 = FDerivedDataIoResponse::Poll(&this->Response);
  return bVar1;
}

