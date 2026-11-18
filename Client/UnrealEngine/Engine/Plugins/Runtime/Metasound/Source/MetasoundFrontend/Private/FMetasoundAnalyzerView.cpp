// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 5

// FMetasoundAnalyzerView @ 14ad99dd0

FMetasoundAnalyzerView * __thiscall
Metasound::Frontend::FMetasoundAnalyzerView::FMetasoundAnalyzerView
          (FMetasoundAnalyzerView *this,FAnalyzerAddress *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(undefined8 *)&this->OutputReceivers = 0;
  *(undefined8 *)&(this->OutputReceivers).field_0x8 = 0;
  *(undefined8 *)&(this->OutputReceivers).field_0x20 = 0;
  *(undefined4 *)&(this->OutputReceivers).field_0x28 = 0;
  *(undefined4 *)&(this->OutputReceivers).field_0x2c = 0x80;
  *(undefined4 *)&(this->OutputReceivers).field_0x34 = 0;
  *(undefined4 *)&(this->OutputReceivers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->OutputReceivers).field_0x40 = 0;
  *(undefined4 *)&(this->OutputReceivers).field_0x48 = 0;
  (this->AnalyzerAddress)._padding_ = (longlong)&___7FAnalyzerAddress_Frontend_Metasound__6B_;
  (this->AnalyzerAddress).InstanceID = param_1->InstanceID;
  uVar1 = (param_1->NodeID).B;
  uVar2 = (param_1->NodeID).C;
  uVar3 = (param_1->NodeID).D;
  (this->AnalyzerAddress).NodeID.A = (param_1->NodeID).A;
  (this->AnalyzerAddress).NodeID.B = uVar1;
  (this->AnalyzerAddress).NodeID.C = uVar2;
  (this->AnalyzerAddress).NodeID.D = uVar3;
  (this->AnalyzerAddress).OutputName = param_1->OutputName;
  (this->AnalyzerAddress).DataType = param_1->DataType;
  (this->AnalyzerAddress).AnalyzerName = param_1->AnalyzerName;
  uVar1 = (param_1->AnalyzerInstanceID).B;
  uVar2 = (param_1->AnalyzerInstanceID).C;
  uVar3 = (param_1->AnalyzerInstanceID).D;
  (this->AnalyzerAddress).AnalyzerInstanceID.A = (param_1->AnalyzerInstanceID).A;
  (this->AnalyzerAddress).AnalyzerInstanceID.B = uVar1;
  (this->AnalyzerAddress).AnalyzerInstanceID.C = uVar2;
  (this->AnalyzerAddress).AnalyzerInstanceID.D = uVar3;
  (this->AnalyzerAddress).AnalyzerMemberName = param_1->AnalyzerMemberName;
  (this->AnalyzerAddress).UseDataTransmissionCenter = param_1->UseDataTransmissionCenter;
  return this;
}

// BindToAllOutputs @ 14ada6910

void __thiscall
Metasound::Frontend::FMetasoundAnalyzerView::BindToAllOutputs
          (FMetasoundAnalyzerView *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  IVertexAnalyzerRegistry *pIVar4;
  longlong *plVar5;
  FDataTransmissionCenter *this_00;
  TUniquePtr<Metasound::IReceiver,TDefaultDelete<Metasound::IReceiver>_> TVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  FMetasoundAnalyzerView *local_res8;
  TPairInitializer<FName_&&,TSharedPtr<Metasound::IReceiver,1>_&&> local_res18;
  undefined8 local_d8;
  longlong local_d0;
  TReferenceControllerBase<1> *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_98;
  ulong64 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  FName local_78;
  undefined8 local_70;
  FName local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  pIVar4 = IVertexAnalyzerRegistry::Get();
  plVar5 = (longlong *)
           (**(code **)((longlong)*pIVar4 + 8))(pIVar4,(this->AnalyzerAddress).AnalyzerName);
  if ((plVar5 != (longlong *)0x0) ||
     (local_res8 = this,
     bVar3 = `Metasound::Frontend::FMetasoundAnalyzerView::BindToAllOutputs'::__l3::<lambda_1>::
             operator()(&local_res8), bVar3)) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 8))(plVar5);
    lVar2 = plVar5[1];
    puVar7 = (undefined8 *)*plVar5;
    puVar8 = puVar7 + (longlong)(int)lVar2 * 2;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar2) {
        `TCheckedPointerIterator<Metasound::Frontend::FAnalyzerOutput_const_,int,0>::operator!='::
        __l2::<lambda_1>::operator()(&local_res8);
      }
      if (puVar7 == puVar8) break;
      local_90 = (this->AnalyzerAddress).InstanceID;
      local_88._0_4_ = (this->AnalyzerAddress).NodeID.A;
      local_88._4_4_ = (this->AnalyzerAddress).NodeID.B;
      uStack_80._0_4_ = (this->AnalyzerAddress).NodeID.C;
      uStack_80._4_4_ = (this->AnalyzerAddress).NodeID.D;
      local_78 = (this->AnalyzerAddress).OutputName;
      local_68 = (this->AnalyzerAddress).AnalyzerName;
      local_48 = (this->AnalyzerAddress).UseDataTransmissionCenter;
      local_60._0_4_ = (this->AnalyzerAddress).AnalyzerInstanceID.A;
      local_60._4_4_ = (this->AnalyzerAddress).AnalyzerInstanceID.B;
      uStack_58._0_4_ = (this->AnalyzerAddress).AnalyzerInstanceID.C;
      uStack_58._4_4_ = (this->AnalyzerAddress).AnalyzerInstanceID.D;
      local_50 = *puVar7;
      local_b0._0_4_ = param_1->SampleRate;
      local_b0._4_4_ = param_1->TargetBlockRate;
      uStack_a8._0_4_ = param_1->ActualBlockRate;
      uStack_a8._4_4_ = param_1->NumFramesPerBlock;
      local_70 = puVar7[1];
      local_98 = &___7FAnalyzerAddress_Frontend_Metasound__6B_;
      this_00 = FDataTransmissionCenter::Get();
      TVar6 = FDataTransmissionCenter::RegisterNewReceiver
                        (this_00,(FTransmissionAddress *)&local_res18.Value,
                         (FReceiverInitParams *)&local_98);
      lVar1 = (TVar6.Ptr)->_padding_;
      (TVar6.Ptr)->_padding_ = 0;
      if (local_res18.Value != (TSharedPtr<Metasound::IReceiver,1> *)0x0) {
        (*(code *)(local_res18.Value)->Object->_padding_)(local_res18.Value,1);
      }
      local_c8 = ::operator_new(0x18);
      if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
        local_c8->SharedReferenceCount = (atomic<int>)0x1;
        local_c8->_padding_ =
             (longlong)
             &
             ___7__TReferenceControllerWithDeleter_VIReceiver_Metasound__U__DefaultDeleter_VIReceiver_Metasound___SharedPointerInternals___00_SharedPointerInternals__6B_
        ;
        local_c8->WeakReferenceCount = (atomic<int>)0x1;
        local_c8[1]._padding_ = lVar1;
      }
      local_d8 = *puVar7;
      local_c0 = &local_d8;
      local_b8 = &local_d0;
      local_d0 = lVar1;
      TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FName_&&,TSharedPtr<Metasound::IReceiver,1>_&&>_>
                ((TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                  *)this,&local_res18,(bool *)&local_c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      puVar7 = puVar7 + 2;
    }
  }
  return;
}

// GetBoundOutputDescriptions @ 14adbcfc0

TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
* __thiscall
Metasound::Frontend::FMetasoundAnalyzerView::GetBoundOutputDescriptions
          (FMetasoundAnalyzerView *this,
          TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  FMetasoundAnalyzerView *pFVar6;
  bool bVar7;
  int iVar8;
  TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
  *pTVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  undefined1 *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  FMetasoundAnalyzerView *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  FMetasoundAnalyzerView *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->OutputReceivers).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar8 = *(int *)&(this->OutputReceivers).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar8 != 0) {
    puVar15 = *(uint **)&(this->OutputReceivers).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar13 = *puVar15;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar13 == 0) {
      lVar11 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_14adbd06d;
      uVar13 = puVar15[lVar11 + 1];
    }
    uStack_9c = -uVar13 & uVar13;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iStack_8c = local_88 + -1 + local_res18;
    if (iVar8 < iStack_8c) {
      iStack_8c = iVar8;
    }
  }
LAB_14adbd06d:
  uVar13 = *(uint *)&(this->OutputReceivers).field_0x28;
  iStack_80 = *(int *)&(this->OutputReceivers).field_0x8 -
              *(int *)&(this->OutputReceivers).field_0x34;
  uVar16 = uVar13 & 0xffffffe0;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uStack_90 = 0xffffffff;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar13 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = this;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = this;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
              *)(*pcVar5)();
    return pTVar9;
  }
  uVar3 = *(uint *)&(this->OutputReceivers).field_0x28;
  if (uVar13 != uVar3) {
    puVar14 = *(undefined1 **)&(this->OutputReceivers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar12 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar13 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14adbd180;
      uVar13 = *(uint *)(puVar14 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar13 = local_res20 + -1 + uVar16;
    if ((int)uVar3 < (int)uVar13) {
      uVar13 = uVar3;
    }
  }
LAB_14adbd180:
  while( true ) {
    pFVar6 = local_78;
    if (*(int *)&(local_78->OutputReceivers).field_0x8 -
        *(int *)&(local_78->OutputReceivers).field_0x34 != (int)uStack_50) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_70.CurrentBitIndex == uVar13) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pFVar6 == this))
    break;
    puVar10 = (undefined8 *)
              (*(longlong *)&pFVar6->OutputReceivers + (longlong)TStack_70.CurrentBitIndex * 0x20);
    lVar11 = puVar10[1];
    if (lVar11 == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5834949535335448523>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundFrontend\\Private\\Analysis\\MetasoundFrontendAnalyzerView.cpp"
                         ,0x35,"Receiver.Value.IsValid()");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
                  *)(*pcVar5)();
        return pTVar9;
      }
    }
    else {
      local_b8 = *puVar10;
      uStack_b0 = *(undefined8 *)(lVar11 + 8);
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
          ((FScriptContainerElement *)&local_b8 <
           pFVar4 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TArray<Metasound::Frontend::FMetasoundAnalyzerView::FBoundOutputDescription,TSizedDefaultAllocator<32>_>
                  *)(*pcVar5)();
        return pTVar9;
      }
      iVar8 = __return_storage_ptr__->ArrayNum;
      if (iVar8 == __return_storage_ptr__->ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x410,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar8 + 1;
      pFVar4 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
      *(undefined8 *)pFVar4 = local_b8;
      *(undefined8 *)(pFVar4 + 8) = uStack_b0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// UnbindOutput @ 14add2bb0

bool __thiscall
Metasound::Frontend::FMetasoundAnalyzerView::UnbindOutput
          (FMetasoundAnalyzerView *this,FName param_1)

{
  uint uVar1;
  int iVar2;
  FName local_res8;
  FName local_res10;
  
  if (*(int *)&(this->OutputReceivers).field_0x8 != *(int *)&(this->OutputReceivers).field_0x34) {
    local_res8 = param_1;
    local_res10 = param_1;
    uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
    iVar2 = TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
            ::RemoveImpl<FName>((TSet<TTuple<FName,TSharedPtr<Metasound::IReceiver,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<Metasound::IReceiver,1>,0>,FDefaultSetAllocator>
                                 *)this,local_res10.Number + uVar1,&local_res8);
    return 0 < iVar2;
  }
  return false;
}

// operator() @ 15055cf90

bool __thiscall
`Metasound::Frontend::FMetasoundAnalyzerView::BindToAllOutputs'::__l3::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5834949535335448548>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 0x80),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5834949535335448548>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15055cffb;
    }
  }
  bVar2 = false;
LAB_15055cffb:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

