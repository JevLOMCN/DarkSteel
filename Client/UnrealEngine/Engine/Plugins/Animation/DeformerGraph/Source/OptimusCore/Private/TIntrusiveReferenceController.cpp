// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 38

// TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1><UOptimusComponentSourceBinding_*_&> @ 14e1200c0

TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1>::
TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1><UOptimusComponentSourceBinding_*_&>
          (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *this,
          UOptimusComponentSourceBinding **param_1)

{
  UOptimusComponentSourceBinding *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *pTVar5;
  UOptimusComponentSource *pUVar6;
  FTopLevelAssetPath *pFVar7;
  UOptimusComponentSourceBindingContainer *pUVar8;
  FString *pFVar9;
  undefined4 uVar10;
  FScriptContainerElement *pFVar11;
  wchar_t *pwVar12;
  FString local_28;
  FTopLevelAssetPath local_18;
  
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_UFOptimusComponentBindingAction_RemoveBinding___00_SharedPointerInternals__6B_
  ;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this_00 = *param_1;
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x10] = '\0';
  (this->ObjectStorage).Pad[0x11] = '\0';
  (this->ObjectStorage).Pad[0x12] = '\0';
  (this->ObjectStorage).Pad[0x13] = '\0';
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusComponentBindingAction_RemoveBinding__6B_
  ;
  (this->ObjectStorage).Pad[0x18] = '\0';
  (this->ObjectStorage).Pad[0x19] = '\0';
  (this->ObjectStorage).Pad[0x1a] = '\0';
  (this->ObjectStorage).Pad[0x1b] = '\0';
  (this->ObjectStorage).Pad[0x1c] = '\0';
  (this->ObjectStorage).Pad[0x1d] = '\0';
  (this->ObjectStorage).Pad[0x1e] = '\0';
  (this->ObjectStorage).Pad[0x1f] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  (this->ObjectStorage).Pad[0x28] = '\0';
  (this->ObjectStorage).Pad[0x29] = '\0';
  (this->ObjectStorage).Pad[0x2a] = '\0';
  (this->ObjectStorage).Pad[0x2b] = '\0';
  (this->ObjectStorage).Pad[0x2c] = '\0';
  (this->ObjectStorage).Pad[0x2d] = '\0';
  (this->ObjectStorage).Pad[0x2e] = '\0';
  (this->ObjectStorage).Pad[0x2f] = '\0';
  (this->ObjectStorage).Pad[0x30] = '\0';
  (this->ObjectStorage).Pad[0x31] = '\0';
  (this->ObjectStorage).Pad[0x32] = '\0';
  (this->ObjectStorage).Pad[0x33] = '\0';
  (this->ObjectStorage).Pad[0x34] = '\0';
  (this->ObjectStorage).Pad[0x35] = '\0';
  (this->ObjectStorage).Pad[0x36] = '\0';
  (this->ObjectStorage).Pad[0x37] = '\0';
  (this->ObjectStorage).Pad[0x38] = '\0';
  (this->ObjectStorage).Pad[0x39] = '\0';
  (this->ObjectStorage).Pad[0x3a] = '\0';
  (this->ObjectStorage).Pad[0x3b] = '\0';
  (this->ObjectStorage).Pad[0x3c] = '\0';
  (this->ObjectStorage).Pad[0x3d] = '\0';
  (this->ObjectStorage).Pad[0x3e] = '\0';
  (this->ObjectStorage).Pad[0x3f] = '\0';
  (this->ObjectStorage).Pad[0x40] = '\0';
  (this->ObjectStorage).Pad[0x41] = '\0';
  (this->ObjectStorage).Pad[0x42] = '\0';
  (this->ObjectStorage).Pad[0x43] = '\0';
  if (this_00 == (UOptimusComponentSourceBinding *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338217>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0x57,"InBinding");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar5 = (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *)
               (*pcVar2)();
      return pTVar5;
    }
  }
  else {
    pUVar6 = UOptimusComponentSourceBinding::GetComponentSource(this_00);
    pFVar7 = UStruct::GetStructPathName(*(UStruct **)&pUVar6->field_0x10,&local_18);
    FVar3 = pFVar7->AssetName;
    *(FName *)((this->ObjectStorage).Pad + 0x20) = pFVar7->PackageName;
    *(FName *)((this->ObjectStorage).Pad + 0x28) = FVar3;
    *(FName *)((this->ObjectStorage).Pad + 0x18) = this_00->BindingName;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((this->ObjectStorage).Pad + 0x30),
               &this_00->ComponentTags);
    pUVar8 = CastChecked<UOptimusComponentSourceBindingContainer,UObject>
                       ((UObject *)this_00->_padding_);
    pFVar1 = (pUVar8->Bindings).AllocatorInstance.Data;
    for (pFVar11 = pFVar1; pFVar11 != pFVar1 + (longlong)(pUVar8->Bindings).ArrayNum * 8;
        pFVar11 = pFVar11 + 8) {
      if ((*(UOptimusComponentSourceBinding **)pFVar11 != (UOptimusComponentSourceBinding *)0x0) &&
         (*(UOptimusComponentSourceBinding **)pFVar11 == this_00)) {
        uVar10 = (undefined4)((longlong)pFVar11 - (longlong)pFVar1 >> 3);
        goto LAB_14e1201d0;
      }
    }
    uVar10 = 0xffffffff;
LAB_14e1201d0:
    *(undefined4 *)((this->ObjectStorage).Pad + 0x40) = uVar10;
    pFVar9 = ::FName::ToString((FName *)((this->ObjectStorage).Pad + 0x18),&local_28);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)&this->ObjectStorage,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04d50,pwVar12);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1><UOptimusNodePin_*_&,FOptimusDataDomain_const_&> @ 14e120240

TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1>::
TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1><UOptimusNodePin_*_&,FOptimusDataDomain_const_&>
          (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *this,
          UOptimusNodePin **param_1,FOptimusDataDomain *param_2)

{
  uchar *puVar1;
  UOptimusNodePin *this_00;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *pTVar4;
  FString *pFVar5;
  FString local_38;
  
  *(undefined4 *)&this->_padding_ = 1;
  puVar1 = (this->ObjectStorage).Pad + 0x18;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ =
       (longlong)
       &
       ___7__TIntrusiveReferenceController_UFOptimusNodeAction_SetPinDataDomain___00_SharedPointerInternals__6B_
  ;
  this_00 = *param_1;
  (this->ObjectStorage).Pad[8] = '\0';
  (this->ObjectStorage).Pad[9] = '\0';
  (this->ObjectStorage).Pad[10] = '\0';
  (this->ObjectStorage).Pad[0xb] = '\0';
  (this->ObjectStorage).Pad[0xc] = '\0';
  (this->ObjectStorage).Pad[0xd] = '\0';
  (this->ObjectStorage).Pad[0xe] = '\0';
  (this->ObjectStorage).Pad[0xf] = '\0';
  (this->ObjectStorage).Pad[0x10] = '\0';
  (this->ObjectStorage).Pad[0x11] = '\0';
  (this->ObjectStorage).Pad[0x12] = '\0';
  (this->ObjectStorage).Pad[0x13] = '\0';
  (this->ObjectStorage).Pad[0x14] = '\0';
  (this->ObjectStorage).Pad[0x15] = '\0';
  (this->ObjectStorage).Pad[0x16] = '\0';
  (this->ObjectStorage).Pad[0x17] = '\0';
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusNodeAction_SetPinDataDomain__6B_;
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  (this->ObjectStorage).Pad[0x20] = '\0';
  (this->ObjectStorage).Pad[0x21] = '\0';
  (this->ObjectStorage).Pad[0x22] = '\0';
  (this->ObjectStorage).Pad[0x23] = '\0';
  (this->ObjectStorage).Pad[0x24] = '\0';
  (this->ObjectStorage).Pad[0x25] = '\0';
  (this->ObjectStorage).Pad[0x26] = '\0';
  (this->ObjectStorage).Pad[0x27] = '\0';
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((this->ObjectStorage).Pad + 0x28));
  FOptimusDataDomain::FOptimusDataDomain((FOptimusDataDomain *)((this->ObjectStorage).Pad + 0x68));
  if (this_00 == (UOptimusNodePin *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1440688917643788025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusNodeActions.cpp"
                       ,0x107,"InPin");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  else {
    pFVar5 = UOptimusNodePin::GetPinPath(this_00,&local_38);
    if ((FString *)puVar1 != pFVar5) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = (pFVar5->Data).AllocatorInstance.Data;
      (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)((this->ObjectStorage).Pad + 0x20) = (pFVar5->Data).ArrayNum;
      *(int *)((this->ObjectStorage).Pad + 0x24) = (pFVar5->Data).ArrayMax;
      (pFVar5->Data).ArrayNum = 0;
      (pFVar5->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    *(EOptimusDataDomainType *)((this->ObjectStorage).Pad + 0x28) = param_2->Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((this->ObjectStorage).Pad + 0x30),
               &param_2->DimensionNames);
    *(int *)((this->ObjectStorage).Pad + 0x40) = param_2->Multiplier;
    ::FString::operator=((FString *)((this->ObjectStorage).Pad + 0x48),&param_2->Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((this->ObjectStorage).Pad + 0x58),
               &param_2->LevelNames_DEPRECATED);
    *(EOptimusDataDomainType *)((this->ObjectStorage).Pad + 0x68) = (this_00->DataDomain).Type;
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((this->ObjectStorage).Pad + 0x70),
               &(this_00->DataDomain).DimensionNames);
    *(int *)((this->ObjectStorage).Pad + 0x80) = (this_00->DataDomain).Multiplier;
    ::FString::operator=
              ((FString *)((this->ObjectStorage).Pad + 0x88),&(this_00->DataDomain).Expression);
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FName,TSizedDefaultAllocator<32>_> *)((this->ObjectStorage).Pad + 0x98),
               &(this_00->DataDomain).LevelNames_DEPRECATED);
  }
  return this;
}

// DestroyObject @ 14e1a36a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusCommentNodeAction_ResizeNode,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusCommentNodeAction_ResizeNode,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a36f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusComponentBindingAction_AddBinding,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusComponentBindingAction_AddBinding,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14e1a3710

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusComponentBindingAction_RemoveBinding,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x30);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3760

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FOptimusComponentBindingAction_RenameBinding,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusComponentBindingAction_RenameBinding,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14e1a3780

void __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<FOptimusComponentBindingAction_SetComponentSource,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusComponentBindingAction_SetComponentSource,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14e1a37a0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusCompoundAction,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusCompoundAction,1> *this)

{
  void *pvVar1;
  
  DestructItems<TSharedPtr<FOptimusAction,1>,int>
            (*(TSharedPtr<FOptimusAction,1> **)((this->ObjectStorage).Pad + 0x18),
             *(int *)((this->ObjectStorage).Pad + 0x20));
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a37f0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusDataType,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusDataType,1> *this)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 8);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014e1a37fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))();
    return;
  }
  return;
}

// DestroyObject @ 14e1a3810

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_MoveNode,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusNodeAction_MoveNode,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3860

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_MovePin,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusNodeAction_MovePin,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a38c0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_RemovePin,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusNodeAction_RemovePin,1> *this)

{
  FOptimusNodeAction_AddRemovePin::~FOptimusNodeAction_AddRemovePin
            ((FOptimusNodeAction_AddRemovePin *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a38d0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_RenameNode,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeAction_RenameNode,1> *this)

{
  longlong *plVar1;
  void *pvVar2;
  
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x38);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  plVar1 = *(longlong **)((this->ObjectStorage).Pad + 0x28);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar2 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3930

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeAction_SetPinDataDomain,1> *this)

{
  FOptimusNodeAction_SetPinDataDomain::~FOptimusNodeAction_SetPinDataDomain
            ((FOptimusNodeAction_SetPinDataDomain *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3940

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_SetPinName,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeAction_SetPinName,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3990

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_SetPinType,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeAction_SetPinType,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a39e0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeAction_SetPinValue,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeAction_SetPinValue,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x38);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3a40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_AddGraph,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_AddGraph,1> *this)

{
  FOptimusNodeGraphAction_AddGraph::~FOptimusNodeGraphAction_AddGraph
            ((FOptimusNodeGraphAction_AddGraph *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3a50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_AddLink,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_AddLink,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3aa0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_AddNode,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_AddNode,1> *this)

{
  FOptimusNodeGraphAction_AddNode::~FOptimusNodeGraphAction_AddNode
            ((FOptimusNodeGraphAction_AddNode *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3ab0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_AddNodePair,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_AddNodePair,1> *this)

{
  FOptimusNodeGraphAction_AddNodePair::~FOptimusNodeGraphAction_AddNodePair
            ((FOptimusNodeGraphAction_AddNodePair *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3ac0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_ConnectAdderPin,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_ConnectAdderPin,1> *this)

{
  FOptimusNodeGraphAction_ConnectAdderPin::~FOptimusNodeGraphAction_ConnectAdderPin
            ((FOptimusNodeGraphAction_ConnectAdderPin *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3ad0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_DuplicateNode,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_DuplicateNode,1> *this)

{
  FOptimusNodeGraphAction_DuplicateNode::~FOptimusNodeGraphAction_DuplicateNode
            ((FOptimusNodeGraphAction_DuplicateNode *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3ae0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveGraph,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveGraph,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x48);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3b40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveLink,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveLink,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3b90

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveNode,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveNode,1> *this)

{
  FOptimusNodeGraphAction_RemoveNode::~FOptimusNodeGraphAction_RemoveNode
            ((FOptimusNodeGraphAction_RemoveNode *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3ba0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveNodePair,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_RemoveNodePair,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3bf0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusNodeGraphAction_RenameGraph,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusNodeGraphAction_RenameGraph,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x28);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x18);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3c40

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusResourceAction_AddResource,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusResourceAction_AddResource,1> *this)

{
  FOptimusResourceAction_AddResource::~FOptimusResourceAction_AddResource
            ((FOptimusResourceAction_AddResource *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3c50

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusResourceAction_RemoveResource,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusResourceAction_RemoveResource,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3ca0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusResourceAction_RenameResource,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusResourceAction_RenameResource,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14e1a3cc0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusResourceAction_SetDataDomain,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusResourceAction_SetDataDomain,1> *this)

{
  FOptimusResourceAction_SetDataDomain::~FOptimusResourceAction_SetDataDomain
            ((FOptimusResourceAction_SetDataDomain *)&this->ObjectStorage);
  return;
}

// DestroyObject @ 14e1a3cd0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusResourceAction_SetDataType,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusResourceAction_SetDataType,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x70);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3d30

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusVariableAction_AddVariable,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusVariableAction_AddVariable,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3d80

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusVariableAction_RemoveVariable,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusVariableAction_RemoveVariable,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x68);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x58);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3de0

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusVariableAction_RenameVariable,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusVariableAction_RenameVariable,1> *this)

{
  void *pvVar1;
  FLowLevelMemTracker *this_00;
  
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// DestroyObject @ 14e1a3e00

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusVariableAction_SetDataType,1>::
DestroyObject(TIntrusiveReferenceController<FOptimusVariableAction_SetDataType,1> *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x70);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  *(undefined ***)(this->ObjectStorage).Pad = &___7FOptimusAction__6B_;
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 8);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
    return;
  }
  return;
}

// DestroyObject @ 14e1a3e60

void __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FOptimusPersistentBufferPool,1>::DestroyObject
          (TIntrusiveReferenceController<FOptimusPersistentBufferPool,1> *this)

{
  void *pvVar1;
  
  (this->ObjectStorage).Pad[0x98] = '\0';
  (this->ObjectStorage).Pad[0x99] = '\0';
  (this->ObjectStorage).Pad[0x9a] = '\0';
  (this->ObjectStorage).Pad[0x9b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x90);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((this->ObjectStorage).Pad + 0x50));
  (this->ObjectStorage).Pad[0x48] = '\0';
  (this->ObjectStorage).Pad[0x49] = '\0';
  (this->ObjectStorage).Pad[0x4a] = '\0';
  (this->ObjectStorage).Pad[0x4b] = '\0';
  pvVar1 = *(void **)((this->ObjectStorage).Pad + 0x40);
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TMap<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<FOptimusPersistentStructuredBuffer,TSizedDefaultAllocator<32>_>,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ObjectStorage);
  return;
}

