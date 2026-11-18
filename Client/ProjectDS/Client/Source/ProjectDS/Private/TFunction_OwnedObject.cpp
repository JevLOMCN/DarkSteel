// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 99

// CloneToEmptyStorage @ 14b86a500

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_AI_GYM_SyncActor::AddDamageWidget'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x20,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`ADS_AI_GYM_SyncActor::AddDamageWidget'::`2'::<lambda_1>,0,1>::
             _vftable_;
  uVar1 = *(undefined8 *)((longlong)this + 0x10);
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  puVar2[2] = uVar1;
  puVar2[3] = *(undefined8 *)((longlong)this + 0x18);
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b86a560

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b86a580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b86a5a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>,0,0>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b86a5c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b86a5e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`UDS_MountAnimLayer::OnOutReadyState'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14b86e860

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_AI_GYM_SyncActor::AddDamageWidget'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b86e890

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b86e895. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b86e8a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b86e8a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b86e8b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>,0,0>
::Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b86e8b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b86e8c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>,0,0>::
Destroy(void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b86e8c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b86e8d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b86e8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14b8761f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_AI_GYM_SyncActor::AddDamageWidget'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b876200

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Finish'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b876210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_Begin'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b876220

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_PreThrow_End'::__l2::<lambda_1>,0,0>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b876230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_InteractionAnimLayer::OnBlendOut_LiftUp_Start'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b876240

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_MountAnimLayer::OnOutReadyState'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14b9e3620

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMRequestBase::HandleError'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(puVar2 + 3) = *(undefined4 *)((longlong)this + 0x18);
  ::FString::FString((FString *)(puVar2 + 4),(FString *)((longlong)this + 0x20));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3690

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMConversationListener::OnConversationChanged'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMConversationVector::TXV2TIMConversationVector
            ((TXV2TIMConversationVector *)(puVar2 + 3),
             (TXV2TIMConversationVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3700

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMString::V2TIMString((V2TIMString *)(puVar2 + 3),(V2TIMString *)((longlong)this + 0x18));
  TXV2TIMGroupChangeInfoVector::TXV2TIMGroupChangeInfoVector
            ((TXV2TIMGroupChangeInfoVector *)(puVar2 + 5),
             (TXV2TIMGroupChangeInfoVector *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3790

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberEnter'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  ::FString::FString((FString *)(puVar2 + 3),(FString *)((longlong)this + 0x18));
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector
            ((TXV2TIMGroupMemberInfoVector *)(puVar2 + 5),
             (TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3820

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  ::FString::FString((FString *)(puVar2 + 3),(FString *)((longlong)this + 0x18));
  TXV2TIMGroupMemberChangeInfoVector::TXV2TIMGroupMemberChangeInfoVector
            ((TXV2TIMGroupMemberChangeInfoVector *)(puVar2 + 5),
             (TXV2TIMGroupMemberChangeInfoVector *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e38b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberKicked'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  ::FString::FString((FString *)(puVar2 + 3),(FString *)((longlong)this + 0x18));
  TXV2TIMGroupMemberInfoVector::TXV2TIMGroupMemberInfoVector
            ((TXV2TIMGroupMemberInfoVector *)(puVar2 + 5),
             (TXV2TIMGroupMemberInfoVector *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x78,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberLeave'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  ::FString::FString((FString *)(puVar2 + 3),(FString *)((longlong)this + 0x18));
  V2TIMGroupMemberInfo::V2TIMGroupMemberInfo
            ((V2TIMGroupMemberInfo *)(puVar2 + 5),(V2TIMGroupMemberInfo *)((longlong)this + 0x28));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e39d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x1e0,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::`2'::<lambda_1>,0,1>
             ::_vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMMessage::V2TIMMessage((V2TIMMessage *)(puVar2 + 3),(V2TIMMessage *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3a40

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x38,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_UV2TIMConversationResult____UEAAXAEBUV2TIMConversationResult___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMConversationResult::V2TIMConversationResult
            ((V2TIMConversationResult *)(puVar2 + 3),
             (V2TIMConversationResult *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3ab0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x30,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_UV2TIMGroupMemberInfoResult____UEAAXAEBUV2TIMGroupMemberInfoResult___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMGroupMemberInfoResult::V2TIMGroupMemberInfoResult
            ((V2TIMGroupMemberInfoResult *)(puVar2 + 3),
             (V2TIMGroupMemberInfoResult *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3b20

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMConversationOperationResultVector____UEAAXAEBVTXV2TIMConversationOperationResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMConversationOperationResultVector::TXV2TIMConversationOperationResultVector
            ((TXV2TIMConversationOperationResultVector *)(puVar2 + 3),
             (TXV2TIMConversationOperationResultVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3b90

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupInfoResultVector____UEAAXAEBVTXV2TIMGroupInfoResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMGroupInfoResultVector::TXV2TIMGroupInfoResultVector
            ((TXV2TIMGroupInfoResultVector *)(puVar2 + 3),
             (TXV2TIMGroupInfoResultVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3c00

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupInfoVector____UEAAXAEBVTXV2TIMGroupInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMGroupInfoVector::TXV2TIMGroupInfoVector
            ((TXV2TIMGroupInfoVector *)(puVar2 + 3),
             (TXV2TIMGroupInfoVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3c70

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupMemberFullInfoVector____UEAAXAEBVTXV2TIMGroupMemberFullInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMGroupMemberFullInfoVector::TXV2TIMGroupMemberFullInfoVector
            ((TXV2TIMGroupMemberFullInfoVector *)(puVar2 + 3),
             (TXV2TIMGroupMemberFullInfoVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3ce0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMGroupMemberOperationResultVector____UEAAXAEBVTXV2TIMGroupMemberOperationResultVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMGroupMemberOperationResultVector::TXV2TIMGroupMemberOperationResultVector
            ((TXV2TIMGroupMemberOperationResultVector *)(puVar2 + 3),
             (TXV2TIMGroupMemberOperationResultVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3d50

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMMessageVector____UEAAXAEBVTXV2TIMMessageVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMMessageVector::TXV2TIMMessageVector
            ((TXV2TIMMessageVector *)(puVar2 + 3),(TXV2TIMMessageVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3dc0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VTXV2TIMUserFullInfoVector____UEAAXAEBVTXV2TIMUserFullInfoVector___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  TXV2TIMUserFullInfoVector::TXV2TIMUserFullInfoVector
            ((TXV2TIMUserFullInfoVector *)(puVar2 + 3),
             (TXV2TIMUserFullInfoVector *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3e30

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x28,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &
            ___7__TFunction_OwnedObject_V<lambda_1>__1__OnSuccess___TDS_V2TIMRequestValueCallback_VV2TIMString____UEAAXAEBVV2TIMString___Z__0A__00_Function_Private_Core_UE__6B_
  ;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMString::V2TIMString((V2TIMString *)(puVar2 + 3),(V2TIMString *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// CloneToEmptyStorage @ 14b9e3ea0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`FDS_V2TIMRequestCallback::OnSuccess'::`2'::<lambda_1>,0,0>::_vftable_
  ;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  *(longlong *)(param_1->InlineAllocation + 0x10) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  return param_1->InlineAllocation + 8;
}

// CloneToEmptyStorage @ 14b9e3ed0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>,0,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = FMemory::Malloc(0x1e0,8);
  param_1->HeapAllocation = puVar2;
  *puVar2 = &TFunction_OwnedObject<`FDS_V2TIMRequestSendCallback::OnSuccess'::`2'::<lambda_1>,0,1>::
             _vftable_;
  puVar2[1] = *(undefined8 *)((longlong)this + 8);
  lVar1 = *(longlong *)((longlong)this + 0x10);
  puVar2[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  V2TIMMessage::V2TIMMessage((V2TIMMessage *)(puVar2 + 3),(V2TIMMessage *)((longlong)this + 0x18));
  return puVar2 + 1;
}

// Destroy @ 14b9e6ef0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e6f20

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e6f50

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e6f80

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e6fb0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e6fe0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7010

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7040

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>,0,1>::
Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e70a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e70d0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7100

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7130

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7190

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e71c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e71f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7220

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14b9e7250

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014b9e7255. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14b9e7260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>,0,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14b9ec880

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestBase::HandleError'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec890

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMConversationListener::OnConversationChanged'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnGroupInfoChanged'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberEnter'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberInfoChanged'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberKicked'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMGroupListener::OnMemberLeave'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec8f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMAdvancedMsgListener::OnRecvNewMessage'::__l2::<lambda_1>,0,1>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec900

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMConversationResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec910

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMGroupMemberInfoResult>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec920

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMConversationOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec930

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec940

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec950

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec960

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMGroupMemberOperationResultVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec970

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMMessageVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec980

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<TXV2TIMUserFullInfoVector>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`TDS_V2TIMRequestValueCallback<V2TIMString>::OnSuccess'::__l2::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec9a0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestCallback::OnSuccess'::__l2::<lambda_1>,0,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14b9ec9b0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FDS_V2TIMRequestSendCallback::OnSuccess'::__l2::<lambda_1>,0,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14bb55580

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14bb555c0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>,1,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14bb55600

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataInternal'::__l2::<lambda_1>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14bb55640

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// CloneToEmptyStorage @ 14bb55680

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>,1,1>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\Function.h"
                     ,0xff,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pvVar3 = (void *)(*pcVar1)();
    return pvVar3;
  }
  return (void *)0x0;
}

// Destroy @ 14bb5d550

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14bb5d580

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>,1,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bb5d585. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// Destroy @ 14bb5d590

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataInternal'::__l2::<lambda_1>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14bb5d5c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// Destroy @ 14bb5d5f0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>,1,1>::Destroy
          (void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14bb633f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<``UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>::operator()'::__l2::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14bb63400

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>,1,0>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14bb63410

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataInternal'::__l2::<lambda_1>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// GetAddress @ 14bb63420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`Async<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_1>_>'::__l4::<lambda_1>,1,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 0x10);
}

// GetAddress @ 14bb63430

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_NTPClient::UpdateNTPDataAsync'::__l2::<lambda_2>,1,1>::GetAddress
          (void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14bc32ad0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0>::
CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  *(undefined ***)param_1->InlineAllocation =
       &TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::`2'::<lambda_1>,0,0>::
        _vftable_;
  *(undefined8 *)(param_1->InlineAllocation + 8) = *(undefined8 *)((longlong)this + 8);
  return param_1->InlineAllocation + 8;
}

// Destroy @ 14bc38dc0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0>::Destroy
          (void *this)

{
                    /* WARNING: Could not recover jumptable at 0x00014bc38dc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  return;
}

// GetAddress @ 14bc3f4e0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`ADS_EntityActorBase::OnDetectedByPlayerSkill'::__l2::<lambda_1>,0,0>::
GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

// CloneToEmptyStorage @ 14bc8c520

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1>
::CloneToEmptyStorage(void *this,FFunctionStorage *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = FMemory::Malloc(0x40,8);
  param_1->HeapAllocation = puVar1;
  *puVar1 = &TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::`5'::<lambda_1>,0,1>
             ::_vftable_;
  puVar1[1] = *(undefined8 *)((longlong)this + 8);
  puVar1[2] = *(undefined8 *)((longlong)this + 0x10);
  FSoftObjectPath::FSoftObjectPath
            ((FSoftObjectPath *)(puVar1 + 3),(FSoftObjectPath *)((longlong)this + 0x18));
  *(undefined1 *)(puVar1 + 7) = *(undefined1 *)((longlong)this + 0x38);
  return puVar1 + 1;
}

// Destroy @ 14bc96640

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1>
::Destroy(void *this)

{
  (**(code **)(*(longlong *)this + 0x18))(this,0);
  FMemory::Free(this);
  return;
}

// GetAddress @ 14bc9e990

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`UDS_CommonLazyImage::SetBrushFromLazyDisplayAssetOverride'::__l5::<lambda_1>,0,1>
::GetAddress(void *this)

{
  return (void *)((longlong)this + 8);
}

