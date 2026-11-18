// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TcpMessaging
// Functions: 4

// DoTask @ 14eac9b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FTcpSerializeMessageTask::DoTask
          (FTcpSerializeMessageTask *this,Type param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  uint uVar3;
  IMessageContext *pIVar4;
  FTcpSerializedMessage *this_00;
  FTcpMessageTransportConnection *this_01;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  longlong lVar8;
  FWeakObjectPtr *pFVar9;
  UStruct *pUVar10;
  longlong *plVar11;
  FGuid *pFVar12;
  TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *pTVar13;
  FDateTime *pFVar14;
  void *pvVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  TBitArray<FDefaultBitArrayAllocator> *pTVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136 [2];
  uint local_134;
  FTopLevelAssetPath local_130;
  longlong *local_120;
  int iStack_118;
  uint uStack_114;
  TBitArray<FDefaultBitArrayAllocator> *local_110;
  undefined4 uStack_108;
  int iStack_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  int local_f0;
  int local_ec;
  longlong *local_e8;
  TRawPtrProxy<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_> local_e0;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d0;
  undefined8 uStack_b0;
  TSharedPtr<FTcpSerializedMessage,1> local_a8;
  IStructSerializerBackend local_98;
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1> local_90;
  undefined4 local_80;
  undefined1 local_78 [56];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_158;
  pIVar4 = (this->MessageContext).Object;
  lVar8 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4);
  if (lVar8 == 0) {
    return;
  }
  pFVar9 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
  bVar7 = FWeakObjectPtr::IsValid(pFVar9,false,true);
  if (!bVar7) {
    return;
  }
  pIVar4 = (this->MessageContext).Object;
  this_00 = (this->SerializedMessage).Object;
  lVar8 = (**(code **)((longlong)*pIVar4 + 0x18))(pIVar4);
  if (lVar8 != 0) {
    pFVar9 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    bVar7 = FWeakObjectPtr::IsValid(pFVar9,false,true);
    if (bVar7) {
      pFVar9 = (FWeakObjectPtr *)(**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
      pUVar10 = (UStruct *)FWeakObjectPtr::Get(pFVar9);
      UStruct::GetStructPathName(pUVar10,&local_130);
      goto LAB_14eac9c28;
    }
  }
  local_130.PackageName.ComparisonIndex.Value = 0;
  local_130.PackageName.Number = 0;
  local_130.AssetName.ComparisonIndex.Value = 0;
  local_130.AssetName.Number = 0;
LAB_14eac9c28:
  plVar11 = (longlong *)(**(code **)(this_00->_padding_ + 0x178))(this_00,&local_130);
  (**(code **)(*plVar11 + 0x178))(plVar11,&local_130.AssetName);
  pFVar12 = (FGuid *)(**(code **)((longlong)*(this->MessageContext).Object + 0x48))();
  ::operator<<((FArchive *)this_00,pFVar12);
  pTVar13 = (TArray<FMessageAddress,TSizedDefaultAllocator<32>_> *)
            (**(code **)((longlong)*(this->MessageContext).Object + 0x30))();
  TArrayPrivateFriend::Serialize<FMessageAddress,TSizedDefaultAllocator<32>_>
            ((FArchive *)this_00,pTVar13);
  local_138 = (**(code **)((longlong)*(this->MessageContext).Object + 0x38))();
  plVar11 = (longlong *)this_00->_padding_;
  if ((undefined1 *)plVar11[1] < (undefined1 *)*plVar11 + 1) {
    (**(code **)(this_00->_padding_ + 0x188))(this_00,&local_138,1);
  }
  else {
    local_138 = *(undefined1 *)*plVar11;
    *plVar11 = *plVar11 + 1;
  }
  pFVar14 = (FDateTime *)(**(code **)((longlong)*(this->MessageContext).Object + 0x68))();
  ::operator<<((FArchive *)this_00,pFVar14);
  pFVar14 = (FDateTime *)(**(code **)((longlong)*(this->MessageContext).Object + 0x10))();
  ::operator<<((FArchive *)this_00,pFVar14);
  lVar8 = (**(code **)*(this->MessageContext).Object)();
  local_134 = *(int *)(lVar8 + 8) - *(int *)(lVar8 + 0x34);
  plVar11 = (longlong *)this_00->_padding_;
  if ((uint *)plVar11[1] < (uint *)*plVar11 + 1) {
    if ((this_00->_padding_ & 0x10000) == 0) {
      (**(code **)(this_00->_padding_ + 0x188))(this_00,&local_134,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped((FArchive *)this_00,&local_134);
    }
  }
  else {
    local_134 = *(uint *)*plVar11;
    *plVar11 = *plVar11 + 4;
  }
  plVar11 = (longlong *)(**(code **)*(this->MessageContext).Object)();
  iVar17 = (int)plVar11[5];
  iStack_118 = 0;
  uStack_114 = 1;
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar11 + 2);
  local_100 = 0;
  iVar16 = 0;
  iStack_104 = iStack_118;
  if (iVar17 != 0) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar21 = *(uint *)(pTVar20->AllocatorInstance).InlineData;
    local_100 = 0;
    iStack_118 = 0;
    while (uVar21 == 0) {
      lVar8 = (longlong)iStack_118;
      local_100 = local_100 + 0x20;
      iStack_118 = iStack_118 + 1;
      if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_118) {
        iVar16 = (int)plVar11[5];
        iStack_104 = iVar17;
        goto LAB_14eac9dc6;
      }
      uVar21 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    iVar16 = (int)plVar11[5];
    uStack_114 = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_114 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_f0 = (int)lVar8;
    iStack_104 = local_100 + -1 + local_f0;
    if (iVar16 < iStack_104) {
      iStack_104 = iVar17;
    }
  }
LAB_14eac9dc6:
  uVar21 = *(uint *)(plVar11 + 5);
  uVar22 = uVar21 & 0xffffffe0;
  iStack_f8 = (int)plVar11[1] - *(int *)((longlong)plVar11 + 0x34);
  uStack_108 = 0xffffffff;
  TStack_d0._padding_ = CONCAT44(uStack_114,iStack_118);
  TStack_d0.CurrentBitIndex = iStack_104;
  TStack_d0.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar21 >> 5;
  TStack_d0._28_4_ = iStack_104;
  TStack_d0.BaseBitIndex = local_100;
  uStack_b0 = CONCAT44(uStack_f4,iStack_f8);
  local_120 = plVar11;
  local_110 = pTVar1;
  iStack_fc = iStack_104;
  local_e8 = plVar11;
  local_d8 = plVar11;
  TStack_d0.Array = pTVar1;
  if ((((int)uVar21 < 0) || (iVar16 < (int)uVar21)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  plVar6 = local_e8;
  uVar3 = *(uint *)(plVar11 + 5);
  if (uVar21 != uVar3) {
    pTVar20 = (TBitArray<FDefaultBitArrayAllocator> *)plVar11[4];
    if ((TBitArray<FDefaultBitArrayAllocator> *)plVar11[4] ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar20 = pTVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) &
             *(uint *)((pTVar20->AllocatorInstance).InlineData + (longlong)iVar17 * 4);
    while (uVar21 == 0) {
      lVar8 = (longlong)iVar17;
      uVar22 = uVar22 + 0x20;
      iVar17 = iVar17 + 1;
      uVar21 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_14eac9ee1;
      uVar21 = *(uint *)((pTVar20->AllocatorInstance).InlineData + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    local_ec = (int)lVar8;
    uVar21 = local_ec + -1 + uVar22;
    if ((int)uVar3 < (int)uVar21) {
      uVar21 = uVar3;
    }
  }
LAB_14eac9ee1:
  while( true ) {
    plVar11 = local_d8;
    if ((int)local_d8[1] - *(int *)((longlong)local_d8 + 0x34) != (int)uStack_b0) {
      local_137 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(&local_137);
    }
    if (((TStack_d0.CurrentBitIndex == uVar21) && (TStack_d0.Array == pTVar1)) &&
       (plVar11 == plVar6)) break;
    lVar8 = *plVar11 + (longlong)TStack_d0.CurrentBitIndex * 0x20;
    (**(code **)(this_00->_padding_ + 0x178))(this_00,lVar8);
    ::operator<<((FArchive *)this_00,(FString *)(lVar8 + 8));
    TStack_d0.UnvisitedBitMask = TStack_d0.UnvisitedBitMask & ~TStack_d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d0);
  }
  pFVar9 = (FWeakObjectPtr *)(**(code **)((longlong)*(this->MessageContext).Object + 0x20))();
  pUVar10 = (UStruct *)FWeakObjectPtr::Get(pFVar9);
  local_98 = (IStructSerializerBackend)&___7FJsonStructSerializerBackend__6B_;
  local_e0.Object = ::operator_new(0x28);
  if (local_e0.Object == (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *)0x0)
  {
    local_e0.Object = (TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_> *)0x0;
  }
  else {
    (local_e0.Object)->Stream = (FArchive *)this_00;
    (local_e0.Object)->_padding_ = (longlong)&___7__TJsonWriter_GU__TPrettyJsonPrintPolicy_G____6B_;
    ((local_e0.Object)->Stack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    ((local_e0.Object)->Stack).ArrayNum = 0;
    ((local_e0.Object)->Stack).ArrayMax = 0;
    (local_e0.Object)->PreviousTokenWritten = None;
    (local_e0.Object)->IndentLevel = 0;
  }
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1>::
  TSharedRef<TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>,1><TJsonWriter<unsigned_short,TPrettyJsonPrintPolicy<unsigned_short>_>_>
            (&local_90,&local_e0);
  local_80 = 0;
  pvVar15 = (void *)(**(code **)((longlong)*(this->MessageContext).Object + 0x18))();
  local_78._0_4_ = Serialize;
  local_78._4_4_ = Ignore;
  local_78._8_4_ = KeyValuePair;
  local_78._16_8_ = 0;
  local_40 = (longlong *)0x0;
  FStructSerializer::Serialize(pvVar15,pUVar10,&local_98,(FStructSerializerPolicies *)local_78);
  if (local_78._16_8_ != 0) {
    plVar11 = (longlong *)(local_78 + 0x20);
    if (local_40 != (longlong *)0x0) {
      plVar11 = local_40;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  iVar17 = (this->RecipientConnections).ArrayNum;
  pFVar18 = (this->RecipientConnections).AllocatorInstance.Data;
  pFVar19 = pFVar18 + (longlong)iVar17 * 0x10;
  while( true ) {
    if ((this->RecipientConnections).ArrayNum != iVar17) {
      local_136[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FTcpMessageTransportConnection,1>,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_136);
    }
    if (pFVar18 == pFVar19) break;
    if ((*(longlong *)pFVar18 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_a8.Object = (this->SerializedMessage).Object;
    this_01 = *(FTcpMessageTransportConnection **)pFVar18;
    local_a8.SharedReferenceCount.ReferenceController =
         (this->SerializedMessage).SharedReferenceCount.ReferenceController;
    if (local_a8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FTcpMessageTransportConnection::Send(this_01,&local_a8);
    pFVar18 = pFVar18 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_90.SharedReferenceCount.ReferenceController);
  return;
}

// GetDesiredThread @ 14eacaa90

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall FTcpSerializeMessageTask::GetDesiredThread(FTcpSerializeMessageTask *this)

{
  return AnyNormalThreadNormalTask;
}

// GetStatId @ 14eacad10

/* WARNING: Enum "Type": Some values do not have unique names */

TStatId __thiscall FTcpSerializeMessageTask::GetStatId(FTcpSerializeMessageTask *this)

{
  FName *pFVar1;
  FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
  FVar2;
  TStatIdData *in_RDX;
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FTcpSerializeMessageTask ==
          (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
           )0x0) {
        pFVar1 = ::FName::FName(&local_res10,"FTcpSerializeMessageTask");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FTcpSerializeMessageTask,*pFVar1,
                   L"FTcpSerializeMessageTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                   L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar2 = StatPtr_FTcpSerializeMessageTask;
  if (StatPtr_FTcpSerializeMessageTask ==
      (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
       )0x0) {
    pFVar1 = ::FName::FName(&local_res10,"FTcpSerializeMessageTask");
    FVar2 = (FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FTcpSerializeMessageTask::GetStatId(void)const_::_2_::FStat_FTcpSerializeMessageTask>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FTcpSerializeMessageTask,*pFVar1,
                         L"FTcpSerializeMessageTask","STATGROUP_TaskGraphTasks","STATCAT_Advanced",
                         L"Task Graph Tasks",true,true,ST_int64,true,false,MCR_Invalid);
  }
  in_RDX->Name = (TAtomic<FMinimalName>)FVar2;
  return (TStatId)in_RDX;
}

// GetSubsequentsMode @ 14eacae70

Type __cdecl FTcpSerializeMessageTask::GetSubsequentsMode(void)

{
  return FireAndForget;
}

