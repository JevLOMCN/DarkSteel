// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayTags
// Functions: 5

// OnPreFreezeNetSerializerRegistry @ 146abf0d0

void __thiscall
UE::Net::FGameplayTagContainerNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      ::StaticInstance._padding_ =
           (longlong)&FGameplayTagContainerNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTagContainer.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTagContainer.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

// OnPostFreezeNetSerializerRegistry @ 146abf170

void __thiscall
UE::Net::FGameplayTagContainerNetSerializer::FNetSerializerRegistryDelegates::
OnPostFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar3;
  bool bVar4;
  UPackage *pUVar5;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar6;
  FReplicationStateDescriptor *local_res10;
  FParameters local_28;
  
  if (Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
      OuterSingleton == (UScriptStruct *)0x0) {
    pUVar5 = Z_Construct_UPackage__Script_GameplayTags();
    Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
    OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper
                         ,(UObject *)pUVar5,L"GameplayTagContainerNetSerializerSerializationHelper")
    ;
  }
  pUVar2 = Z_Registration_Info_UScriptStruct_FGameplayTagContainerNetSerializerSerializationHelper.
           OuterSingleton;
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_28);
  TVar6 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res10,(FParameters *)pUVar2);
  TVar3 = StructNetSerializerConfig.StateDescriptor;
  if (TVar6.Reference != (FReplicationStateDescriptor *)&StructNetSerializerConfig.StateDescriptor)
  {
    StructNetSerializerConfig.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar6.Reference)->MemberDescriptors;
    (TVar6.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar3.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar3.Reference);
    }
  }
  if (local_res10 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(local_res10);
  }
  TVar3.Reference = StructNetSerializerConfig.StateDescriptor.Reference;
  if (StructNetSerializerConfig.StateDescriptor.Reference == (FReplicationStateDescriptor *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainerNetSerializer.cpp"
                       ,0x166,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((TVar3.Reference)->Traits & HasObjectReference) != None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!EnumHasAnyFlags(Descriptor->Traits, EReplicationStateTraits::HasObjectReference)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainerNetSerializer.cpp"
                       ,0x168,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((0x10 < (TVar3.Reference)->InternalSize) || (8 < (TVar3.Reference)->InternalAlignment)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayTags\\Private\\GameplayTagContainerNetSerializer.cpp"
               ,0x16e,
               L"FQuantizedType::QuantizedStruct has size %u and alignment %u but requires size %u and alignment %u."
              );
  }
  return;
}

// OnPreFreezeNetSerializerRegistry @ 146ac31a0

void __thiscall
UE::Net::FGameplayTagNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      ::StaticInstance._padding_ = (longlong)&FGameplayTagNetSerializerNetSerializerInfo::Serializer
      ;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_GameplayTag.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_GameplayTag.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

// ~FNetSerializerRegistryDelegates @ 146acd830

void __thiscall
UE::Net::FGameplayTagContainerNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FGameplayTagContainerNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// ~FNetSerializerRegistryDelegates @ 146acd850

void __thiscall
UE::Net::FGameplayTagNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this = &___7FNetSerializerRegistryDelegates_FGameplayTagNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

