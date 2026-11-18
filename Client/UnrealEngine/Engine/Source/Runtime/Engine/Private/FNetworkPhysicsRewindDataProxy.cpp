// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// StaticStruct @ 1482ce0c0

UScriptStruct * __cdecl FNetworkPhysicsRewindDataProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNetworkPhysicsRewindDataProxy,(UObject *)pUVar1,
                         L"NetworkPhysicsRewindDataProxy");
  }
  return Z_Registration_Info_UScriptStruct_FNetworkPhysicsRewindDataProxy.OuterSingleton;
}

// operator= @ 1482de4c0

FNetworkPhysicsRewindDataProxy * __thiscall
FNetworkPhysicsRewindDataProxy::operator=
          (FNetworkPhysicsRewindDataProxy *this,FNetworkPhysicsRewindDataProxy *param_1)

{
  UNetworkPhysicsComponent *pUVar1;
  FBaseRewindHistory *pFVar2;
  undefined8 *puVar3;
  FNetworkPhysicsRewindDataProxy *pFVar4;
  bool bVar5;
  undefined4 local_res8;
  undefined4 uStackX_c;
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> local_18;
  
  local_res8 = 0;
  if (param_1 != this) {
    if ((UE::GC::GIsIncrementalReachabilityPending) &&
       (pUVar1 = (param_1->Owner).field0_0x0.DebugPtr, pUVar1 != (UNetworkPhysicsComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    (this->Owner).field0_0x0 = (param_1->Owner).field0_0x0;
    pFVar2 = (param_1->History).Ptr;
    bVar5 = pFVar2 == (FBaseRewindHistory *)0x0;
    if (bVar5) {
      local_18.Ptr = pFVar2;
      pFVar4 = (FNetworkPhysicsRewindDataProxy *)&local_18;
    }
    else {
      pFVar4 = (FNetworkPhysicsRewindDataProxy *)
               (**(code **)((longlong)*pFVar2 + 0x10))(pFVar2,&local_res8);
    }
    if (this != pFVar4) {
      pFVar2 = (this->History).Ptr;
      (this->History).Ptr = (pFVar4->History).Ptr;
      (pFVar4->History).Ptr = (FBaseRewindHistory *)0x0;
      if (pFVar2 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar2)(pFVar2,1);
      }
    }
    if ((bVar5) && (local_18.Ptr != (FBaseRewindHistory *)0x0)) {
      (**(code **)*local_18.Ptr)(local_18.Ptr,1);
    }
    if ((!bVar5) &&
       (puVar3 = (undefined8 *)CONCAT44(uStackX_c,local_res8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return this;
}

// operator() @ 1482e2260

void __thiscall
`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>::operator()
          (void *this,void *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  UObjectBase *this_00;
  FNetworkPhysicsData *pFVar5;
  int iVar6;
  UObjectBase *pUVar7;
  undefined1 local_res10 [16];
  int local_res20 [2];
  undefined8 local_38 [2];
  
  if ((param_1 != (void *)0x0) && (*(longlong *)(*(longlong *)this + 8) != 0)) {
    this_00 = (UObjectBase *)
              FWeakObjectPtr::Get((FWeakObjectPtr *)(*(longlong *)(*(longlong *)this + 8) + 0x240));
    iVar6 = 0;
    pUVar7 = (UObjectBase *)0x0;
    if (this_00 != (UObjectBase *)0x0) {
      UObjectBase::AddRef(this_00);
      pUVar7 = this_00;
    }
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18);
    if (puVar1 == local_38) {
      if (pUVar7 != (UObjectBase *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)pUVar7);
      }
    }
    else {
      if ((UObject *)*puVar1 != (UObject *)0x0) {
        UEStrongObjectPtr_Private::ReleaseUObject((UObject *)*puVar1);
      }
      *puVar1 = pUVar7;
    }
    if (((PhysicsReplicationCVars::ResimulationCVars::bEnableStatefulDeltaSerialization != false) &&
        (param_2 == 0)) &&
       ((*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
           **)((longlong)this + 8))->Callable !=
        (_func___cdecl_FNetworkPhysicsData_ptr_void_ptr_int_ptr *)0x0)) {
      plVar2 = *(longlong **)((longlong)this + 0x10);
      local_res20[0] = 0;
      if ((*(byte *)(plVar2 + 5) & 1) == 0) {
        pFVar5 = UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                 ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                                **)((longlong)this + 8),-1);
        if (pFVar5 == (FNetworkPhysicsData *)0x0) {
          ``FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>::operator()'::__l29
          ::<lambda_1>::operator()(local_res10);
          pFVar5 = UE::Core::Private::Function::
                   TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                   ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                                  **)((longlong)this + 8),-2);
          *(FNetworkPhysicsData **)((longlong)param_1 + 0x20) = pFVar5;
        }
        else {
          *(FNetworkPhysicsData **)((longlong)param_1 + 0x20) = pFVar5;
          if (((int)pFVar5->_padding_ + 1 < 0) &&
             (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<7117391173232099494>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                                 ,0xa6,"(DeltaSourceData->ServerFrame + 1) >= 0"), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = (int)pFVar5->_padding_ + 1;
        }
        local_res20[0] = iVar6;
        (**(code **)(**(longlong **)((longlong)this + 0x10) + 0x1a0))
                  (*(longlong **)((longlong)this + 0x10),local_res20);
      }
      else {
        (**(code **)(*plVar2 + 0x1a0))(plVar2,local_res20);
        if (local_res20[0] == 0) {
          iVar6 = -2;
        }
        else {
          iVar6 = local_res20[0] + -1;
        }
        pFVar5 = UE::Core::Private::Function::
                 TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                 ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                                **)((longlong)this + 8),iVar6);
        if (pFVar5 == (FNetworkPhysicsData *)0x0) {
          *(undefined1 *)(*(longlong *)this + 0x10) = 1;
          pFVar5 = UE::Core::Private::Function::
                   TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                   ::operator()(*(TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<1>,FNetworkPhysicsData_*___cdecl(int)>
                                  **)((longlong)this + 8),-2);
        }
        *(FNetworkPhysicsData **)((longlong)param_1 + 0x20) = pFVar5;
      }
    }
  }
  return;
}

// NetSerializeBase @ 148311fa0

bool __thiscall
FNetworkPhysicsRewindDataProxy::NetSerializeBase
          (FNetworkPhysicsRewindDataProxy *this,FArchive *param_1,UPackageMap *param_2,bool *param_3
          ,TUniqueFunction<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>___cdecl(void)>
           *param_4,TUniqueFunction<FNetworkPhysicsData_*___cdecl(int)> *param_5)

{
  code *pcVar1;
  FBaseRewindHistory *pFVar2;
  bool bVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char local_88;
  undefined1 local_87 [7];
  FNetworkPhysicsRewindDataProxy local_80;
  code *local_68 [5];
  undefined8 *local_40;
  
  this->bDeltaSerializationIssue = false;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Owner);
  local_88 = (this->History).Ptr != (FBaseRewindHistory *)0x0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,&local_88,1);
  if (local_88 == '\0') goto LAB_148312139;
  if (((param_1->field_0x28 & 1) != 0) && ((this->History).Ptr == (FBaseRewindHistory *)0x0)) {
    if (((this->Owner).field0_0x0.DebugPtr == (UNetworkPhysicsComponent *)0x0) &&
       (bVar3 = `FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l9::<lambda_1>::operator()
                          (local_87), !bVar3)) {
      FArchiveState::SetError((FArchiveState *)param_1);
      *param_3 = false;
      goto LAB_148312139;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)param_4);
    pcVar1 = *(code **)param_4;
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    (*pcVar1)(&local_80,uVar4);
    if (this != &local_80) {
      pFVar2 = (this->History).Ptr;
      (this->History).Ptr = local_80.History.Ptr;
      local_80.History.Ptr = (FBaseRewindHistory *)0x0;
      if (pFVar2 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar2)(pFVar2,1);
      }
    }
    if (local_80.History.Ptr != (FBaseRewindHistory *)0x0) {
      (**(code **)*local_80.History.Ptr)(local_80.History.Ptr,1);
    }
    if (((this->History).Ptr == (FBaseRewindHistory *)0x0) &&
       (local_80.Owner.field0_0x0 = (TObjectPtr<UNetworkPhysicsComponent>_u_0)this,
       bVar3 = `FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l12::<lambda_2>::operator()
                         (&local_80.Owner), !bVar3)) {
      FArchiveState::SetError((FArchiveState *)param_1);
      *param_3 = false;
      goto LAB_148312139;
    }
  }
  pFVar2 = (this->History).Ptr;
  local_68[0] = (code *)0x0;
  pcVar1 = *(code **)((longlong)*pFVar2 + 0xb0);
  local_40 = FMemory::Malloc(0x20,8);
  *local_40 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::`5'::<lambda_3>,1,1>
               ::_vftable_;
  local_40[1] = this;
  local_40[2] = param_5;
  local_40[3] = param_1;
  if (local_40 + 1 != (undefined8 *)0x0) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l5::<lambda_3>,void,void_*,int>
                  ::Call;
  }
  (*pcVar1)(pFVar2,param_1,param_2,local_68);
LAB_148312139:
  if (*(longlong *)param_4 != 0) {
    plVar5 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if (*(longlong *)param_5 != 0) {
    plVar5 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar5 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return true;
}

// operator() @ 150529930

bool __thiscall
`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232099427>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232099427>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150529b50

bool __thiscall
`FNetworkPhysicsRewindDataProxy::NetSerializeBase'::__l12::<lambda_2>::operator()(void *this)

{
  UObjectBaseUtility *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7117391173232099430>);
  if (bVar2) {
    this_00 = *(UObjectBaseUtility **)(*(longlong *)this + 8);
    if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7117391173232099430>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_150529bdf;
    }
  }
  bVar2 = false;
LAB_150529bdf:
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

