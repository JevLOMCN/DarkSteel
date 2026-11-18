// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// BeginRead_Internal<FNDCAccessContextInst> @ 149080fb0

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
FNDCReaderBase::BeginRead_Internal<FNDCAccessContextInst>
          (FNDCReaderBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNDCAccessContextInst *param_3,bool param_4)

{
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
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar11;
  UWorld *pUVar12;
  FNiagaraWorldManager *this_01;
  UNiagaraDataChannelHandler *pUVar13;
  TSharedRef<FNiagaraDataChannelGameData,1> *pTVar14;
  longlong *plVar15;
  undefined4 local_res8 [2];
  UObject *local_res10;
  UNiagaraDataChannel *local_res18;
  FNDCAccessContextInst *local_res20;
  undefined1 local_b8 [8];
  FNiagaraDataChannelGameData *local_b0;
  FSharedReferencer<1> local_a8;
  longlong local_a0;
  TReferenceControllerBase<1> *local_98;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_90;
  longlong local_80;
  TReferenceControllerBase<1> *pTStack_78;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_70;
  TSharedRef<FNiagaraDataChannelGameData,1> local_60 [2];
  
  bVar9 = false;
  local_res8[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((this->Data).Object != (FNiagaraDataChannelGameData *)0x0) {
    local_res8[0] = 0;
    `FNDCReaderBase::BeginRead_Internal<FNDCAccessContextInst>'::__l2::<lambda_1>::operator()
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
  plVar15 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar15 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      local_b8[0] = 0;
      `TCheckedPointerIterator<FNDCVarAccessorBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_b8);
    }
    if (plVar15 == plVar1) {
      bVar9 = IsInGameThread();
      if ((!bVar9) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessorImpl.h"
                             ,0x51,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
      if ((((local_res10 != (UObject *)0x0) &&
           (pUVar12 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull),
           pUVar12 != (UWorld *)0x0)) && (this->_padding_ != 0)) &&
         ((this_01 = FNiagaraWorldManager::Get(pUVar12), this_01 != (FNiagaraWorldManager *)0x0 &&
          (pUVar13 = FNiagaraWorldManager::FindDataChannelHandler(this_01,local_res18),
          pUVar13 != (UNiagaraDataChannelHandler *)0x0)))) {
        (**(code **)(pUVar13->_padding_ + 0x2d8))(pUVar13,&local_a0,local_res20,0);
        if (local_a0 != 0) {
          if ((local_a0 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar9)) {
            pcVar6 = (code *)swi(3);
            uVar8 = (*pcVar6)();
            return (bool)uVar8;
          }
          pTVar14 = TSharedFromThis<FNiagaraDataChannelGameData,1>::AsShared
                              (*(TSharedFromThis<FNiagaraDataChannelGameData,1> **)(local_a0 + 0x10)
                               ,local_60);
          local_a8.ReferenceController = (pTVar14->SharedReferenceCount).ReferenceController;
          local_b0 = pTVar14->Object;
          if (local_a8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_a8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_a8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (&this->Data != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_b0) {
            (this->Data).Object = local_b0;
            local_b0 = (FNiagaraDataChannelGameData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Data).SharedReferenceCount,&local_a8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60[0].SharedReferenceCount.ReferenceController);
          this->bPreviousFrame = param_4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_98);
          bVar9 = true;
          goto LAB_149081259;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      bVar9 = false;
LAB_149081259:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_90.SharedReferenceCount.ReferenceController);
      return bVar9;
    }
    lVar4 = *plVar15;
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
    lVar5 = *(longlong *)&pUVar10[1].field_0x18;
    if ((((lVar5 == 0) || (iVar3 = *(int *)&pUVar10[1].field_0x8, iVar3 < 1)) ||
        (*(int *)(lVar5 + 0x18) != iVar3)) || (*(int *)(lVar5 + 0x60) != iVar3)) {
LAB_1490810af:
      bVar7 = true;
    }
    else {
      this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
      bVar9 = true;
      pTVar11 = UNiagaraDataChannel::GetLayoutInfo(this_00,&local_70);
      if (pTVar11->Object != *(FNiagaraDataChannelLayoutInfo **)(lVar4 + 0x10)) goto LAB_1490810af;
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
    plVar15 = plVar15 + 1;
  } while( true );
}

// BeginRead_Internal<FNiagaraDataChannelSearchParameters> @ 149081280

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
FNDCReaderBase::BeginRead_Internal<FNiagaraDataChannelSearchParameters>
          (FNDCReaderBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  FNiagaraDataChannelSearchParameters *pFVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  UObject *pUVar11;
  UNiagaraDataChannel *this_00;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> *pTVar12;
  UWorld *pUVar13;
  FNiagaraWorldManager *this_01;
  UNiagaraDataChannelHandler *pUVar14;
  TSharedRef<FNiagaraDataChannelGameData,1> *pTVar15;
  longlong *plVar16;
  undefined4 local_res8 [2];
  UObject *local_res10;
  UNiagaraDataChannel *local_res18;
  FNiagaraDataChannelSearchParameters *local_res20;
  undefined1 local_d8 [8];
  FNiagaraDataChannelGameData *local_d0;
  FSharedReferencer<1> local_c8;
  longlong local_c0;
  TReferenceControllerBase<1> *local_b8;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_b0;
  TObjectPtr<USceneComponent>_u_0 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  uint local_80;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedPtr<FNiagaraDataChannelLayoutInfo,1> local_68;
  TSharedRef<FNiagaraDataChannelGameData,1> local_58;
  
  bVar10 = false;
  local_res8[0] = 0;
  local_res10 = param_1;
  local_res18 = param_2;
  local_res20 = param_3;
  if ((this->Data).Object != (FNiagaraDataChannelGameData *)0x0) {
    local_res8[0] = 0;
    `FNDCReaderBase::BeginRead_Internal<FNiagaraDataChannelSearchParameters>'::__l2::<lambda_1>::
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
    local_78 = this->_padding_;
    pTStack_70 = (TReferenceControllerBase<1> *)this->_padding_;
    this->_padding_ = (longlong)local_b0.Object;
    this->_padding_ = (longlong)local_b0.SharedReferenceCount.ReferenceController;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  }
  plVar16 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar16 + iVar2;
  do {
    if ((int)this->_padding_ != iVar2) {
      local_d8[0] = 0;
      `TCheckedPointerIterator<FNDCVarAccessorBase_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_d8);
    }
    if (plVar16 == plVar1) {
      bVar10 = IsInGameThread();
      if ((!bVar10) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessorImpl.h"
                              ,0x51,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      if ((((local_res10 != (UObject *)0x0) &&
           (pUVar13 = UEngine::GetWorldFromContextObject(GEngine,local_res10,LogAndReturnNull),
           pUVar13 != (UWorld *)0x0)) && (this->_padding_ != 0)) &&
         ((this_01 = FNiagaraWorldManager::Get(pUVar13), this_01 != (FNiagaraWorldManager *)0x0 &&
          (pUVar14 = FNiagaraWorldManager::FindDataChannelHandler(this_01,local_res18),
          pFVar7 = local_res20, pUVar14 != (UNiagaraDataChannelHandler *)0x0)))) {
        pcVar6 = *(code **)(pUVar14->_padding_ + 0x2e0);
        local_a0 = (TObjectPtr<USceneComponent>_u_0)
                   (local_res20->OwningComponent).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_a0.DebugPtr != (USceneComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_a0.DebugPtr);
        }
        local_98 = *(undefined4 *)&(pFVar7->Location).field0_0x0;
        uStack_94 = *(undefined4 *)((longlong)&(pFVar7->Location).field0_0x0 + 4);
        uStack_90 = *(undefined4 *)((longlong)&(pFVar7->Location).field0_0x0 + 8);
        uStack_8c = *(undefined4 *)((longlong)&(pFVar7->Location).field0_0x0 + 0xc);
        local_88 = (pFVar7->Location).field0_0x0._s_0.Z;
        local_80 = local_80 ^ (local_80 ^ pFVar7->bOverrideLocation) & 1;
        (*pcVar6)(pUVar14,&local_c0,&local_a0,0);
        if (local_c0 != 0) {
          if ((local_c0 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          pTVar15 = TSharedFromThis<FNiagaraDataChannelGameData,1>::AsShared
                              (*(TSharedFromThis<FNiagaraDataChannelGameData,1> **)(local_c0 + 0x10)
                               ,&local_58);
          local_c8.ReferenceController = (pTVar15->SharedReferenceCount).ReferenceController;
          local_d0 = pTVar15->Object;
          if (local_c8.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_c8.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_c8.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (&this->Data != (TSharedPtr<FNiagaraDataChannelGameData,1> *)&local_d0) {
            (this->Data).Object = local_d0;
            local_d0 = (FNiagaraDataChannelGameData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->Data).SharedReferenceCount,&local_c8);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c8.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_58.SharedReferenceCount.ReferenceController);
          this->bPreviousFrame = param_4;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_b8);
          bVar10 = true;
          goto LAB_14908156c;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8);
      }
      bVar10 = false;
LAB_14908156c:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_b0.SharedReferenceCount.ReferenceController);
      return bVar10;
    }
    lVar4 = *plVar16;
    pUVar11 = FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
    lVar5 = *(longlong *)&pUVar11[1].field_0x18;
    if ((((lVar5 == 0) || (iVar3 = *(int *)&pUVar11[1].field_0x8, iVar3 < 1)) ||
        (*(int *)(lVar5 + 0x18) != iVar3)) || (*(int *)(lVar5 + 0x60) != iVar3)) {
LAB_149081381:
      bVar8 = true;
    }
    else {
      this_00 = (UNiagaraDataChannel *)FWeakObjectPtr::Get((FWeakObjectPtr *)(lVar4 + 0x20));
      bVar10 = true;
      pTVar12 = UNiagaraDataChannel::GetLayoutInfo(this_00,&local_68);
      if (pTVar12->Object != *(FNiagaraDataChannelLayoutInfo **)(lVar4 + 0x10)) goto LAB_149081381;
      bVar8 = false;
    }
    if (bVar10) {
      bVar10 = false;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
    if ((bVar8) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("WeakNDC->IsValid() && WeakNDC->GetLayoutInfo() == DebugCachedLayout",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraDataChannelAccessor.h"
                           ,0x131,L"NDC Variable being accessed with stale layout info."), bVar8)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    plVar16 = plVar16 + 1;
  } while( true );
}

// BeginRead @ 1490ce720

bool __thiscall
FNDCReaderBase::BeginRead
          (FNDCReaderBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNDCAccessContextInst *param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = BeginRead_Internal<FNDCAccessContextInst>(this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// BeginRead @ 1490ce740

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
FNDCReaderBase::BeginRead
          (FNDCReaderBase *this,UObject *param_1,UNiagaraDataChannel *param_2,
          FNiagaraDataChannelSearchParameters *param_3,bool param_4)

{
  bool bVar1;
  
  bVar1 = BeginRead_Internal<FNiagaraDataChannelSearchParameters>
                    (this,param_1,param_2,param_3,param_4);
  return bVar1;
}

// EndRead @ 1490f0df0

void __thiscall FNDCReaderBase::EndRead(FNDCReaderBase *this)

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
  this->bPreviousFrame = false;
  return;
}

// Num @ 1491194f0

int __thiscall FNDCReaderBase::Num(FNDCReaderBase *this)

{
  FNiagaraDataChannelGameData *pFVar1;
  
  pFVar1 = (this->Data).Object;
  if (pFVar1 == (FNiagaraDataChannelGameData *)0x0) {
    return -1;
  }
  if (this->bPreviousFrame != false) {
    return pFVar1->PrevNumElements;
  }
  return pFVar1->NumElements;
}

// operator() @ 15053d2a0

bool __thiscall
`FNDCReaderBase::BeginRead_Internal<FNDCAccessContextInst>'::__l2::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2205231154036998080>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2205231154036998080>,
                       &`public:___cdecl_`protected:_bool___cdecl_FNDCReaderBase::BeginRead_Internal<FNDCAccessContextInst>(UObject_const*___ptr64,UNiagaraDataChannel_const*___ptr64,FNDCAccessContextInst&___ptr64,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15053d2e0

bool __thiscall
`FNDCReaderBase::BeginRead_Internal<FNiagaraDataChannelSearchParameters>'::__l2::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2205231154036998080>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2205231154036998080>,
                       &`public:___cdecl_`protected:_bool___cdecl_FNDCReaderBase::BeginRead_Internal<FNiagaraDataChannelSearchParameters>(UObject_const*___ptr64,UNiagaraDataChannel_const*___ptr64,FNiagaraDataChannelSearchParameters&___ptr64,bool)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

