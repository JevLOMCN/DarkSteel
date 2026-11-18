// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 13

// OnPreFreezeNetSerializerRegistry @ 1442edeb0

void __thiscall
UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  FName *pFVar1;
  FName local_res10 [3];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pFVar1 = ::FName::FName(local_res10,"InstancedStruct");
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
      ::__l2::StaticInstance._8_8_ = *pFVar1;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
      ::__l2::StaticInstance._16_8_ = &FInstancedStructNetSerializerNetSerializerInfo::Serializer;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
      ::__l2::StaticInstance._0_8_ = &___7FInstancedStructPropertyNetSerializerInfo_Net_UE__6B_;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
      ::__l2::StaticInstance._24_8_ = 0;
      _Init_thread_footer(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register
            ((FPropertyNetSerializerInfo *)
             &`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_FInstancedStructPropertyNetSerializerInfo(void)___ptr64'
              ::__l2::StaticInstance);
  return;
}

// OnPostFreezeNetSerializerRegistry @ 1442ee1f0

void __thiscall
UE::Net::FFieldPathNetSerializer::FNetSerializerRegistryDelegates::OnPostFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FReplicationStateDescriptor *local_res10;
  FParameters local_28;
  
  pUVar4 = FFieldPathNetSerializerSerializationHelper::StaticStruct();
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_28);
  TVar5 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res10,(FParameters *)pUVar4);
  TVar2 = StructNetSerializerConfig.StateDescriptor;
  if (TVar5.Reference != (FReplicationStateDescriptor *)&StructNetSerializerConfig.StateDescriptor)
  {
    StructNetSerializerConfig.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar5.Reference)->MemberDescriptors;
    (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar2.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar2.Reference);
    }
  }
  if (local_res10 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(local_res10);
  }
  TVar2.Reference = StructNetSerializerConfig.StateDescriptor.Reference;
  if (StructNetSerializerConfig.StateDescriptor.Reference == (FReplicationStateDescriptor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\FieldPathNetSerializer.cpp"
                       ,0xe8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((0x28 < (TVar2.Reference)->InternalSize) || (8 < (TVar2.Reference)->InternalAlignment)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\FieldPathNetSerializer.cpp"
               ,0xee,
               L"FQuantizedType::QuantizedStruct has size %u and alignment %u but requires size %u and alignment %u."
              );
  }
  return;
}

// ~FNetSerializerRegistryDelegates @ 1442f89a0

void __thiscall
UE::Net::FInstancedStructNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FInstancedStructNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// OnPostFreezeNetSerializerRegistry @ 144321590

void __thiscall
UE::Net::FRemoteObjectReferenceNetSerializer::FNetSerializerRegistryDelegates::
OnPostFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FReplicationStateDescriptor *local_res10;
  FParameters local_28;
  
  pUVar4 = TBaseStructure<FRemoteObjectPathName>::Get();
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_28);
  TVar5 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res10,(FParameters *)pUVar4);
  TVar2 = RemoteObjectPathNameNetSerializerConfig.StateDescriptor;
  if (TVar5.Reference !=
      (FReplicationStateDescriptor *)&RemoteObjectPathNameNetSerializerConfig.StateDescriptor) {
    RemoteObjectPathNameNetSerializerConfig.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar5.Reference)->MemberDescriptors;
    (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar2.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar2.Reference);
    }
  }
  if (local_res10 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(local_res10);
  }
  TVar2.Reference = RemoteObjectPathNameNetSerializerConfig.StateDescriptor.Reference;
  if (RemoteObjectPathNameNetSerializerConfig.StateDescriptor.Reference ==
      (FReplicationStateDescriptor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteObjectReferenceNetSerializer.cpp"
                       ,0xf8,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((0x20 < (TVar2.Reference)->InternalSize) || (8 < (TVar2.Reference)->InternalAlignment)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\Serialization\\RemoteObjectReferenceNetSerializer.cpp"
               ,0xfe,
               L"QuantizedType::QuantizedStruct for FRemoteObjectReferenceNetSerializer has size %u and alignment %u but requires size %u and alignment %u."
              );
  }
  return;
}

// OnPreFreezeNetSerializerRegistry @ 144321c80

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::OnPreFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  return;
}

// OnLoadedModulesUpdated @ 144321c90

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::OnLoadedModulesUpdated
          (FNetSerializerRegistryDelegates *this)

{
  return;
}

// FNetSerializerRegistryDelegates @ 144326c80

FNetSerializerRegistryDelegates * __thiscall
UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
          (FNetSerializerRegistryDelegates *this,EFlags param_1)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  FDelegateHandle FVar2;
  
  this->_padding_ = (longlong)&___7FNetSerializerRegistryDelegates_Net_UE__6B_;
  pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetPreFreezeNetSerializerRegistryDelegate
                     ();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::FNetSerializerRegistryDelegates>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar1
             ,(FNetSerializerRegistryDelegates *)&this->PreFreezeDelegate,(pmf_515b9d87)this);
  pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetPostFreezeNetSerializerRegistryDelegate
                     ();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::FNetSerializerRegistryDelegates>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar1
             ,(FNetSerializerRegistryDelegates *)&this->PostFreezeDelegate,(pmf_515b9d87)this);
  (this->LoadedModulesUpdatedDelegate).ID = 0;
  if ((param_1 & ShouldBindLoadedModulesUpdatedDelegate) != None) {
    pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetLoadedModulesUpdatedDelegate();
    FVar2 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
            AddRaw<UE::Net::FNetSerializerRegistryDelegates>
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)pTVar1,(FNetSerializerRegistryDelegates *)&stack0x00000008,
                       (pmf_515b9d87)this);
                    /* WARNING: Load size is inaccurate */
    (this->LoadedModulesUpdatedDelegate).ID = *FVar2.ID;
  }
  return this;
}

// FNetSerializerRegistryDelegates @ 144326d20

FNetSerializerRegistryDelegates * __thiscall
UE::Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
          (FNetSerializerRegistryDelegates *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  
  this->_padding_ = (longlong)&___7FNetSerializerRegistryDelegates_Net_UE__6B_;
  pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetPreFreezeNetSerializerRegistryDelegate
                     ();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::FNetSerializerRegistryDelegates>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar1
             ,(FNetSerializerRegistryDelegates *)&this->PreFreezeDelegate,(pmf_515b9d87)this);
  pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetPostFreezeNetSerializerRegistryDelegate
                     ();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<UE::Net::FNetSerializerRegistryDelegates>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)pTVar1
             ,(FNetSerializerRegistryDelegates *)&this->PostFreezeDelegate,(pmf_515b9d87)this);
  (this->LoadedModulesUpdatedDelegate).ID = 0;
  this->_padding_ = (longlong)&___7FNetSerializerRegistryDelegates_Net_UE__6B_;
  return this;
}

// ~FNetSerializerRegistryDelegates @ 1443270f0

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
          (FNetSerializerRegistryDelegates *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *pTVar1;
  
  this->_padding_ = (longlong)&___7FNetSerializerRegistryDelegates_Net_UE__6B_;
  if ((this->PreFreezeDelegate).ID != 0) {
    pTVar1 = Net::Private::FInternalNetSerializerDelegates::
             GetPreFreezeNetSerializerRegistryDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar1,(FDelegateHandle)(this->PreFreezeDelegate).ID);
  }
  if ((this->PostFreezeDelegate).ID != 0) {
    pTVar1 = Net::Private::FInternalNetSerializerDelegates::
             GetPostFreezeNetSerializerRegistryDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar1,(FDelegateHandle)(this->PostFreezeDelegate).ID);
  }
  if ((this->LoadedModulesUpdatedDelegate).ID != 0) {
    pTVar1 = Net::Private::FInternalNetSerializerDelegates::GetLoadedModulesUpdatedDelegate();
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               pTVar1,(FDelegateHandle)(this->LoadedModulesUpdatedDelegate).ID);
    return;
  }
  return;
}

// LoadedModulesUpdated @ 1443349d0

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::LoadedModulesUpdated
          (FNetSerializerRegistryDelegates *this)

{
                    /* WARNING: Could not recover jumptable at 0x0001443349d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x18))();
  return;
}

// OnPostFreezeNetSerializerRegistry @ 1443349e0

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::OnPostFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  return;
}

// PostFreezeNetSerializerRegistry @ 144334cd0

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::PostFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  (**(code **)(this->_padding_ + 0x10))();
  this_00 = Net::Private::FInternalNetSerializerDelegates::
            GetPostFreezeNetSerializerRegistryDelegate();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(FDelegateHandle)(this->PostFreezeDelegate).ID);
  (this->PostFreezeDelegate).ID = 0;
  return;
}

// PreFreezeNetSerializerRegistry @ 144334d10

void __thiscall
UE::Net::FNetSerializerRegistryDelegates::PreFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *this_00;
  
  (**(code **)(this->_padding_ + 8))();
  this_00 = Net::Private::FInternalNetSerializerDelegates::GetPreFreezeNetSerializerRegistryDelegate
                      ();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             this_00,(FDelegateHandle)(this->PreFreezeDelegate).ID);
  (this->PreFreezeDelegate).ID = 0;
  return;
}

