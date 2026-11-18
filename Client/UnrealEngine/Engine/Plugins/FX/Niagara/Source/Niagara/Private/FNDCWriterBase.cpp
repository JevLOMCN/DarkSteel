// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// BeginWrite_Internal<FNDCAccessContextInst> @ 1490815a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDCWriterBase::BeginWrite_Internal<FNDCAccessContextInst>
          (FNDCWriterBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNDCAccessContextInst *param_3,int param_4,bool param_5,bool param_6,bool param_7)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *this_00;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  UObject *pUVar10;
  UNiagaraDataChannel *this_01;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar11;
  UWorld *pUVar12;
  FNiagaraWorldManager *this_02;
  UNiagaraDataChannelHandler *pUVar13;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar14;
  FNiagaraDataChannelGameData *pFVar15;
  longlong *plVar16;
  undefined4 local_res8 [2];
  UObject *local_res10;
  UNiagaraDataChannel *local_res18;
  FNDCAccessContextInst *local_res20;
  undefined1 local_a8 [8];
  FNiagaraDataChannelData *local_a0;
  TReferenceControllerBase<1> *local_98;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_90;
  longlong local_80;
  TReferenceControllerBase<1> *pTStack_78;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_70;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_60 [2];
  
  bVar9 = false;
  this_00 = &this->Data;
  local_res8[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (this_00->Object != (FNiagaraDataChannelGameData *)0x0) {
    local_res8[0] = 0;
    `FNDCWriterBase::BeginWrite_Internal<FNDCAccessContextInst>'::__l2::<lambda_1>::operator()
              (local_res8);
  }
  UNiagaraDataChannel::GetLayoutInfo(param_2,&local_90);
  if ((FNiagaraDataChannelLayoutInfo *)this->_padding_ != local_90.Object) {
    FNDCAccessorBase::Init((FNDCAccessorBase *)this,param_2);
    if (local_90.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_90.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_80 = this->_padding_;
    pTStack_78 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)local_90.Object;
    this->_padding_ = (longlong)local_90.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_78);
  }
  plVar16 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar16 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      local_a8[0] = 0;
      `TCheckedPointerIterator<FNDCVarAccessorBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_a8);
    }
    if (plVar16 == plVar1) {
      bVar9 = IsInGameThread();
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessorImpl.h"
                             ,0x23,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((((local_res10 != (UObject *)0x0) &&
           (pUVar12 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull),
           pUVar12 != (UWorld *)0x0)) && (0 < param_4)) &&
         (((this->_padding_ != 0 &&
           (this_02 = FNiagaraWorldManager::Get(pUVar12), this_02 != (FNiagaraWorldManager *)0x0))
          && (pUVar13 = FNiagaraWorldManager::FindDataChannelHandler(this_02,local_res18),
             pUVar13 != (UNiagaraDataChannelHandler *)0x0)))) {
        (**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13,&local_a0,local_res20,1);
        if (local_a0 != (FNiagaraDataChannelData *)0x0) {
          if ((local_a0 == (FNiagaraDataChannelData *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pTVar14 = FNiagaraDataChannelData::GetGameDataForWriteGT
                              (local_a0,local_60,param_4,param_5,param_6,param_7,&this->DebugSource)
          ;
          if (this_00 != pTVar14) {
            this_00->Object = pTVar14->Object;
            pTVar14->Object = (FNiagaraDataChannelGameData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Data).SharedReferenceCount,&pTVar14->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60[0].SharedReferenceCount.ReferenceController);
          pFVar15 = TSharedPtr<FNiagaraDataChannelGameData,1>::operator->(this_00);
          this->StartIndex = pFVar15->NumElements;
          this->Count = param_4;
          pFVar15 = TSharedPtr<FNiagaraDataChannelGameData,1>::operator->(this_00);
          FNiagaraDataChannelGameData::SetNum(pFVar15,this->StartIndex + param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98);
          bVar9 = true;
          goto LAB_1490818a1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      bVar9 = false;
LAB_1490818a1:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      return bVar9;
    }
    lVar4 = *plVar16;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
    lVar5 = *(longlong *)&pUVar10[1].field_0x18;
    if ((((lVar5 == 0) || (iVar3 = *(int *)&pUVar10[1].field_0x8, iVar3 < 1)) ||
        (*(int *)(lVar5 + 0x18) != iVar3)) || (*(int *)(lVar5 + 0x60) != iVar3)) {
LAB_1490816ac:
      bVar7 = true;
    }
    else {
      this_01 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
      bVar9 = true;
      pTVar11 = UNiagaraDataChannel::GetLayoutInfo(this_01,&local_70);
      if (pTVar11->Object != *(FNiagaraDataChannelLayoutInfo **)(lVar4 + 0x10)) goto LAB_1490816ac;
      bVar7 = false;
    }
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_70.SharedReferenceCount.ReferenceController);
    }
    if ((bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("WeakNDC->IsValid() && WeakNDC->GetLayoutInfo() == DebugCachedLayout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                           ,0x131,L"NDC Variable being accessed with stale layout info."), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    plVar16 = plVar16 + 1;
  } while( true );
}

// BeginWrite_Internal<FNiagaraDataChannelSearchParameters> @ 1490818d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FNDCWriterBase::BeginWrite_Internal<FNiagaraDataChannelSearchParameters>
          (FNDCWriterBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,int param_4,bool param_5,bool param_6,
          bool param_7)

{
  TSharedPtr<FNiagaraDataChannelGameData,1> *this_00;
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  bool bVar9;
  UObject *pUVar10;
  UNiagaraDataChannel *this_01;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar11;
  UWorld *pUVar12;
  FNiagaraWorldManager *this_02;
  UNiagaraDataChannelHandler *pUVar13;
  FNiagaraDataChannelSearchParameters *pFVar14;
  TSharedPtr<FNiagaraDataChannelGameData,1> *pTVar15;
  FNiagaraDataChannelGameData *pFVar16;
  longlong *plVar17;
  undefined4 local_res8 [2];
  UObject *local_res10;
  UNiagaraDataChannel *local_res18;
  FNiagaraDataChannelSearchParameters *local_res20;
  undefined1 local_c8 [8];
  FNiagaraDataChannelData *local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_b0;
  longlong local_a0;
  TReferenceControllerBase<1> *pTStack_98;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_90;
  TSharedPtr<FNiagaraDataChannelGameData,1> local_80;
  FNiagaraDataChannelSearchParameters local_70;
  
  bVar9 = false;
  this_00 = &this->Data;
  local_res8[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if (this_00->Object != (FNiagaraDataChannelGameData *)0x0) {
    local_res8[0] = 0;
    `FNDCWriterBase::BeginWrite_Internal<FNiagaraDataChannelSearchParameters>'::__l2::<lambda_1>::
    operator()(local_res8);
  }
  UNiagaraDataChannel::GetLayoutInfo(param_2,&local_b0);
  if ((FNiagaraDataChannelLayoutInfo *)this->_padding_ != local_b0.Object) {
    FNDCAccessorBase::Init((FNDCAccessorBase *)this,param_2);
    if (local_b0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_b0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_a0 = this->_padding_;
    pTStack_98 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)local_b0.Object;
    this->_padding_ = (longlong)local_b0.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_98);
  }
  plVar17 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar17 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      local_c8[0] = 0;
      `TCheckedPointerIterator<FNDCVarAccessorBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_c8);
    }
    if (plVar17 == plVar1) {
      bVar9 = IsInGameThread();
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessorImpl.h"
                             ,0x23,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((((local_res10 != (UObject *)0x0) &&
           (pUVar12 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull),
           pUVar12 != (UWorld *)0x0)) && (0 < param_4)) &&
         (((this->_padding_ != 0 &&
           (this_02 = FNiagaraWorldManager::Get(pUVar12), this_02 != (FNiagaraWorldManager *)0x0))
          && (pUVar13 = FNiagaraWorldManager::FindDataChannelHandler(this_02,local_res18),
             pUVar13 != (UNiagaraDataChannelHandler *)0x0)))) {
        pcVar6 = *(code **)(pUVar13->_padding_ + 0x2e0);
        pFVar14 = FNiagaraDataChannelSearchParameters::FNiagaraDataChannelSearchParameters
                            (&local_70,local_res20);
        (*pcVar6)(pUVar13,&local_c0,pFVar14,1);
        if (local_c0 != (FNiagaraDataChannelData *)0x0) {
          if ((local_c0 == (FNiagaraDataChannelData *)0x0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pTVar15 = FNiagaraDataChannelData::GetGameDataForWriteGT
                              (local_c0,&local_80,param_4,param_5,param_6,param_7,&this->DebugSource
                              );
          if (this_00 != pTVar15) {
            this_00->Object = pTVar15->Object;
            pTVar15->Object = (FNiagaraDataChannelGameData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Data).SharedReferenceCount,&pTVar15->SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          pFVar16 = TSharedPtr<FNiagaraDataChannelGameData,1>::operator->(this_00);
          this->StartIndex = pFVar16->NumElements;
          this->Count = param_4;
          pFVar16 = TSharedPtr<FNiagaraDataChannelGameData,1>::operator->(this_00);
          FNiagaraDataChannelGameData::SetNum(pFVar16,this->StartIndex + param_4);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8);
          bVar9 = true;
          goto LAB_149081be3;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8);
      }
      bVar9 = false;
LAB_149081be3:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      return bVar9;
    }
    lVar4 = *plVar17;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
    lVar5 = *(longlong *)&pUVar10[1].field_0x18;
    if ((((lVar5 == 0) || (iVar3 = *(int *)&pUVar10[1].field_0x8, iVar3 < 1)) ||
        (*(int *)(lVar5 + 0x18) != iVar3)) || (*(int *)(lVar5 + 0x60) != iVar3)) {
LAB_1490819dc:
      bVar7 = true;
    }
    else {
      this_01 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
      bVar9 = true;
      pTVar11 = UNiagaraDataChannel::GetLayoutInfo(this_01,&local_90);
      if (pTVar11->Object != *(FNiagaraDataChannelLayoutInfo **)(lVar4 + 0x10)) goto LAB_1490819dc;
      bVar7 = false;
    }
    if (bVar9) {
      bVar9 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
    }
    if ((bVar7) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("WeakNDC->IsValid() && WeakNDC->GetLayoutInfo() == DebugCachedLayout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                           ,0x131,L"NDC Variable being accessed with stale layout info."), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    plVar17 = plVar17 + 1;
  } while( true );
}

// BeginWrite @ 1490d0080

bool __thiscall
FNDCWriterBase::BeginWrite
          (FNDCWriterBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNDCAccessContextInst *param_3,int param_4,bool param_5,bool param_6,bool param_7)

{
  bool bVar1;
  
  bVar1 = BeginWrite_Internal<FNDCAccessContextInst>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

// BeginWrite @ 1490d00b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FNDCWriterBase::BeginWrite
          (FNDCWriterBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,int param_4,bool param_5,bool param_6,
          bool param_7)

{
  bool bVar1;
  
  bVar1 = BeginWrite_Internal<FNiagaraDataChannelSearchParameters>
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

// EndWrite @ 1490f1df0

void __thiscall FNDCWriterBase::EndWrite(FNDCWriterBase *this)

{
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->Data != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_18) {
    (this->Data).Object = (FNiagaraDataChannelGameData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Data).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this->StartIndex = -1;
  this->Count = -1;
  return;
}

// operator() @ 15053d320

bool __thiscall
`FNDCWriterBase::BeginWrite_Internal<FNDCAccessContextInst>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2205231154036998126>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2205231154036998126>,
                       &`public:___cdecl_`protected:_bool___cdecl_FNDCWriterBase::BeginWrite_Internal<FNDCAccessContextInst>(UObject_const*___ptr64,UNiagaraDataChannel_const*___ptr64,FNDCAccessContextInst&___ptr64,int,bool,bool,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053d360

bool __thiscall
`FNDCWriterBase::BeginWrite_Internal<FNiagaraDataChannelSearchParameters>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2205231154036998126>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2205231154036998126>,
                       &`public:___cdecl_`protected:_bool___cdecl_FNDCWriterBase::BeginWrite_Internal<FNiagaraDataChannelSearchParameters>(UObject_const*___ptr64,UNiagaraDataChannel_const*___ptr64,FNiagaraDataChannelSearchParameters&___ptr64,int,bool,bool,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

