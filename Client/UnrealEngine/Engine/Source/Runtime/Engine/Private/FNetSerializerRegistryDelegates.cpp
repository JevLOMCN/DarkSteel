// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// OnPreFreezeNetSerializerRegistry @ 147b985b0

void __thiscall
UE::Net::FHitResultNetSerializer::FNetSerializerRegistryDelegates::OnPreFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      ::StaticInstance._padding_ = (longlong)&FHitResultNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_HitResult.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_HitResult.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

// OnPostFreezeNetSerializerRegistry @ 147b98650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Net::FHitResultNetSerializer::FNetSerializerRegistryDelegates::OnPostFreezeNetSerializerRegistry
          (FNetSerializerRegistryDelegates *this)

{
  ushort uVar1;
  FProperty **ppFVar2;
  FProperty *pFVar3;
  code *pcVar4;
  bool bVar5;
  UPackage *pUVar6;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar7;
  FName *pFVar8;
  FName FVar9;
  longlong lVar10;
  ulonglong uVar11;
  FProperty **ppFVar12;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 auStack_138 [32];
  uint local_118;
  uint local_110;
  FReplicationStateDescriptor *local_108;
  undefined1 local_100 [104];
  byte local_98;
  FName local_88 [4];
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50;
  FName local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_138;
  FReplicationStateDescriptorBuilder::FParameters::FParameters((FParameters *)(local_100 + 0x50));
  local_98 = local_98 | 0x10;
  if (Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FHitResult,(UObject *)pUVar6,L"HitResult");
  }
  TVar7 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)local_100,
                     (FParameters *)Z_Registration_Info_UScriptStruct_FHitResult.OuterSingleton);
  TVar13 = StructNetSerializerConfigForHitResult.StateDescriptor;
  uVar11 = 0;
  if (TVar7.Reference !=
      (FReplicationStateDescriptor *)&StructNetSerializerConfigForHitResult.StateDescriptor) {
    StructNetSerializerConfigForHitResult.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar7.Reference)->MemberDescriptors;
    (TVar7.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar13.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar13.Reference);
    }
  }
  if ((FReplicationStateDescriptor *)local_100._0_8_ != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release((FReplicationStateDescriptor *)local_100._0_8_);
  }
  TVar13.Reference = StructNetSerializerConfigForHitResult.StateDescriptor.Reference;
  local_108 = StructNetSerializerConfigForHitResult.StateDescriptor.Reference;
  if ((StructNetSerializerConfigForHitResult.StateDescriptor.Reference ==
       (FReplicationStateDescriptor *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Descriptor != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\HitResultNetSerializer.cpp"
                         ,0x1d2,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  HitResultStateTraits = (TVar13.Reference)->Traits;
  if (0x20 < (TVar13.Reference)->MemberCount) {
    local_118 = (uint)(TVar13.Reference)->MemberCount;
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\HitResultNetSerializer.cpp"
               ,0x1d7,L"%s Has more than 32 replicated members.");
  }
  pFVar8 = local_88;
  lVar10 = 9;
  do {
    pFVar8->ComparisonIndex = 0;
    pFVar8->Number = 0;
    pFVar8 = pFVar8 + 1;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  pFVar8 = ::FName::FName((FName *)(local_100 + 8),"FaceIndex");
  local_88[0] = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x10),"Distance");
  local_88[1] = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x18),"ImpactPoint");
  local_88[2] = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x20),"ImpactNormal");
  local_88[3] = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x28),"PenetrationDepth");
  local_68 = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x30),"Item");
  local_60 = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x38),"ElementIndex");
  local_58 = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x40),"bBlockingHit");
  local_50 = *pFVar8;
  pFVar8 = ::FName::FName((FName *)(local_100 + 0x48),"bStartPenetrating");
  local_48 = *pFVar8;
  ppFVar2 = (TVar13.Reference)->MemberProperties;
  uVar15 = uVar11;
  do {
    uVar1 = (TVar13.Reference)->MemberCount;
    for (ppFVar12 = ppFVar2; ppFVar12 != ppFVar2 + uVar1; ppFVar12 = ppFVar12 + 1) {
      pFVar3 = *ppFVar12;
      bVar5 = IsThisNotNull(pFVar3,"FField::GetFName");
      if (bVar5) {
        FVar9 = (FName)pFVar3->_padding_;
      }
      else {
        FVar9.ComparisonIndex.Value = 0;
        FVar9.Number = 0;
      }
      TVar13.Reference = local_108;
      if (FVar9 == local_88[uVar11]) {
        PropertyToMemberIndex[uVar11] = (ushort)((longlong)ppFVar12 - (longlong)ppFVar2 >> 3);
        uVar15 = (ulonglong)((uint)uVar15 | 1 << ((uint)uVar11 & 0x1f));
        break;
      }
    }
    uVar14 = (uint)uVar11 + 1;
    uVar11 = (ulonglong)uVar14;
    if (uVar14 == 9) {
      if ((int)uVar15 != 0x1ff) {
        Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\HitResultNetSerializer.cpp"
                   ,0x1fc,L"%s");
      }
      if (0x13c < (TVar13.Reference)->InternalSize) {
        local_110 = (uint)(TVar13.Reference)->InternalAlignment;
        local_118 = (TVar13.Reference)->InternalSize;
        Assert::Private::ProcessLowLevelFatalError
                  ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Engine\\HitResultNetSerializer.cpp"
                   ,0x203,
                   L"FQuantizedType::HitResult has size %u but requires size %u and alignment %u.");
      }
      ValidateForwardingNetSerializerTraits
                (&FHitResultNetSerializerNetSerializerInfo::Serializer,HitResultStateTraits);
      return;
    }
  } while( true );
}

// OnPreFreezeNetSerializerRegistry @ 147b9f6e0

void __thiscall
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined1 local_res10 [8];
  
  if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
    IConsoleManager::SetupSingleton();
    if (IConsoleManager::Singleton == (IConsoleManager *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Singleton != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x4fb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  CVarNetPackedMovementMaxBits =
       (IConsoleVariable *)
       (**(code **)((longlong)*IConsoleManager::Singleton + 0xc0))
                 (IConsoleManager::Singleton,L"p.NetPackedMovementMaxBits",0);
  if (CVarNetPackedMovementMaxBits == (IConsoleVariable *)0x0) {
    `UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FNetSerializerRegistryDelegates
    ::OnPreFreezeNetSerializerRegistry'::__l2::<lambda_1>::operator()(local_res10);
  }
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterMoveResponsePackedBits.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterMoveResponsePackedBits.Number;
      ::StaticInstance._padding_ =
           (longlong)
           &FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterServerMovePackedBitsPackedBits.
           ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterServerMovePackedBitsPackedBits.Number;
      ::StaticInstance._padding_ =
           (longlong)
           &FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  if (*piVar3 < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterNetworkSerializationPackedBits.
           ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_CharacterNetworkSerializationPackedBits.Number;
      ::StaticInstance._padding_ =
           (longlong)
           &FCharacterNetworkSerializationPackedBitsNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

// OnPreFreezeNetSerializerRegistry @ 147ba5200

void __thiscall
UE::Net::FUniqueNetIdReplNetSerializer::FNetSerializerRegistryDelegates::
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
           (longlong)&FUniqueNetIdReplNetSerializerNetSerializerInfo::Serializer;
      ::StaticInstance._padding_ = (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      ::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_UniqueNetIdRepl.ComparisonIndex.Value;
      ::StaticInstance._padding_._4_4_ = PropertyNetSerializerRegistry_NAME_UniqueNetIdRepl.Number;
      _Init_thread_footer(&::_TSS0);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register((FPropertyNetSerializerInfo *)&::StaticInstance);
  return;
}

// OnPostFreezeNetSerializerRegistry @ 147ba52a0

void __thiscall
UE::Net::FUniqueNetIdReplNetSerializer::FNetSerializerRegistryDelegates::
OnPostFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar2;
  bool bVar3;
  UScriptStruct *pUVar4;
  TRefCountPtr<UE::Net::FReplicationStateDescriptor_const_> TVar5;
  FReplicationStateDescriptor *local_res10;
  FReplicationStateDescriptor *local_res18;
  FParameters local_48;
  FParameters local_28;
  
  pUVar4 = FUniqueNetIdReplNetSerializerStringStruct::StaticStruct();
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_48);
  TVar5 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res10,(FParameters *)pUVar4);
  TVar2 = StructNetSerializerConfigForString.StateDescriptor;
  if (TVar5.Reference !=
      (FReplicationStateDescriptor *)&StructNetSerializerConfigForString.StateDescriptor) {
    StructNetSerializerConfigForString.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar5.Reference)->MemberDescriptors;
    (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar2.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar2.Reference);
    }
  }
  if (local_res10 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(local_res10);
  }
  TVar2.Reference = StructNetSerializerConfigForString.StateDescriptor.Reference;
  if (StructNetSerializerConfigForString.StateDescriptor.Reference ==
      (FReplicationStateDescriptor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\UniqueNetIdReplNetSerializer.cpp"
                       ,0x21e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((0x20 < (TVar2.Reference)->InternalSize) ||
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x10)) % ZEXT216((TVar2.Reference)->InternalAlignment),0)
      != 0)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\UniqueNetIdReplNetSerializer.cpp"
               ,0x224,
               L"FQuantizedType::QuantizedStringID has size %u but requires size %u and alignment %u."
              );
  }
  pUVar4 = FUniqueNetIdReplNetSerializerNameStruct::StaticStruct();
  FReplicationStateDescriptorBuilder::FParameters::FParameters(&local_28);
  TVar5 = FReplicationStateDescriptorBuilder::CreateDescriptorForStruct
                    ((UStruct *)&local_res18,(FParameters *)pUVar4);
  TVar2 = StructNetSerializerConfigForName.StateDescriptor;
  if (TVar5.Reference !=
      (FReplicationStateDescriptor *)&StructNetSerializerConfigForName.StateDescriptor) {
    StructNetSerializerConfigForName.StateDescriptor.Reference =
         (FReplicationStateDescriptor *)(TVar5.Reference)->MemberDescriptors;
    (TVar5.Reference)->MemberDescriptors = (FReplicationStateMemberDescriptor *)0x0;
    if (TVar2.Reference != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(TVar2.Reference);
    }
  }
  if (local_res18 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(local_res18);
  }
  TVar2.Reference = StructNetSerializerConfigForName.StateDescriptor.Reference;
  if (StructNetSerializerConfigForName.StateDescriptor.Reference ==
      (FReplicationStateDescriptor *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Descriptor != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\UniqueNetIdReplNetSerializer.cpp"
                       ,0x22c,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((0x20 < (TVar2.Reference)->InternalSize) ||
     (SUB168((ZEXT816(0) << 0x40 | ZEXT816(0x20)) % ZEXT216((TVar2.Reference)->InternalAlignment),0)
      != 0)) {
    Assert::Private::ProcessLowLevelFatalError
              ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\GameFramework\\UniqueNetIdReplNetSerializer.cpp"
               ,0x232,
               L"FQuantizedType::QuantizedTypeName has size %u but requires size %u and alignment %u."
              );
  }
  return;
}

// FNetSerializerRegistryDelegates @ 147bb9370

FNetSerializerRegistryDelegates * __thiscall
UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::
FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  Net::FNetSerializerRegistryDelegates::FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this,ShouldBindLoadedModulesUpdatedDelegate);
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FRootMotionSourceGroupNetSerializer_Net_UE__6B_;
  return this;
}

// ~FNetSerializerRegistryDelegates @ 147bbede0

void __thiscall
UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this =
       &
       ___7FNetSerializerRegistryDelegates_FCharacterNetworkSerializationPackedBitsNetSerializer_Net_UE__6B_
  ;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// ~FNetSerializerRegistryDelegates @ 147bbee00

void __thiscall
UE::Net::FHitResultNetSerializer::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
          (FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this = &___7FNetSerializerRegistryDelegates_FHitResultNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// ~FNetSerializerRegistryDelegates @ 147bbee20

void __thiscall
UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FRootMotionSourceGroupNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// ~FNetSerializerRegistryDelegates @ 147bbee40

void __thiscall
UE::Net::FUniqueNetIdReplNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this =
       &___7FNetSerializerRegistryDelegates_FUniqueNetIdReplNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// OnLoadedModulesUpdated @ 147bf5cf0

void __thiscall
UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::
OnLoadedModulesUpdated(FNetSerializerRegistryDelegates *this)

{
  UPackage *pUVar1;
  
  if (bIsPostFreezeCalled) {
    if (Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar1 = Z_Construct_UPackage__Script_Engine();
      Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRootMotionSource,(UObject *)pUVar1,
                           L"RootMotionSource");
    }
    FPolymorphicNetSerializerScriptStructCache::InitForType
              ((FPolymorphicNetSerializerScriptStructCache *)
               &FRootMotionSourceGroupNetSerializer::DefaultConfig.field_0x10,
               Z_Registration_Info_UScriptStruct_FRootMotionSource.OuterSingleton);
    return;
  }
  return;
}

// OnPostFreezeNetSerializerRegistry @ 147bf5f30

void __thiscall
UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::
OnPostFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  bIsPostFreezeCalled = true;
  return;
}

// OnPreFreezeNetSerializerRegistry @ 147bf5fc0

void __thiscall
UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
           (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
            *)0x0;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::StaticInstance._padding_ =
           (longlong)&FRootMotionSourceGroupNetSerializerNetSerializerInfo::Serializer;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::StaticInstance._padding_ =
           (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::StaticInstance._padding_._0_4_ =
           PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup.ComparisonIndex.Value;
      `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
      ::__l2::StaticInstance._padding_._4_4_ =
           PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup.Number;
      _Init_thread_footer(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FPropertyNetSerializerInfoRegistry::Register
            ((FPropertyNetSerializerInfo *)
             &`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRootMotionSourceGroupNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_PropertyNetSerializerRegistry_NAME_RootMotionSourceGroup(void)___ptr64'
              ::__l2::StaticInstance);
  return;
}

// OnPreFreezeNetSerializerRegistry @ 1484a5740

void __thiscall
UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry(FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  char *pcVar4;
  char **ppcVar5;
  UScriptStruct *local_res10;
  FName local_res18;
  UScriptStruct **local_res20;
  FName *local_88 [2];
  char *local_78;
  char *local_70 [12];
  char *local_10;
  
  if ((FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer.QuantizedTypeSize < 0x21) &&
     (FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer.QuantizedTypeAlignment < 9)) {
    if ((FRotatorAsShortNetSerializerNetSerializerInfo::Serializer.QuantizedTypeSize < 9) &&
       (FRotatorAsShortNetSerializerNetSerializerInfo::Serializer.QuantizedTypeAlignment < 3)) {
      local_res10 = FRepMovement::StaticStruct();
      if ((int)local_res10->_padding_ != 0x88) {
        local_res20 = &local_res10;
        bVar2 = `UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
                IsRepMovementLayoutAsExpected'::__l3::<lambda_1>::operator()(&local_res20);
        if (!bVar2) {
          return;
        }
      }
      local_70[0] = "AngularVelocity";
      pcVar4 = "LinearVelocity";
      local_78 = "LinearVelocity";
      local_70[1] = "Location";
      ppcVar5 = &local_78;
      local_70[2] = "Rotation";
      local_70[3] = "bSimulatedPhysicSleep";
      local_70[4] = "bRepPhysics";
      local_70[5] = "LocationQuantizationLevel";
      local_70[6] = "VelocityQuantizationLevel";
      local_70[7] = "RotationQuantizationLevel";
      local_70[8] = "ServerFrame";
      local_70[9] = "ServerPhysicsHandle";
      local_70[10] = "bRepAcceleration";
      local_70[0xb] = "Acceleration";
      while( true ) {
        ::FName::FName(&local_res18,pcVar4);
        pFVar3 = UStruct::FindPropertyByName((UStruct *)local_res10,local_res18);
        if (pFVar3 == (FProperty *)0x0) {
          local_88[0] = &local_res18;
          bVar2 = `UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
                  IsRepMovementLayoutAsExpected'::__l11::<lambda_2>::operator()(local_88);
          if (!bVar2) {
            return;
          }
        }
        ppcVar5 = ppcVar5 + 1;
        if (ppcVar5 == &local_10) break;
        pcVar4 = *ppcVar5;
      }
      VectorNetQuantizeNetSerializers[0] =
           &FVectorNetQuantizeNetSerializerNetSerializerInfo::Serializer;
      VectorNetQuantizeNetSerializers[1] =
           &FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer;
      VectorNetQuantizeNetSerializers[2] =
           &FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer;
      RotatorNetSerializers[0] = &FRotatorAsByteNetSerializerNetSerializerInfo::Serializer;
      RotatorNetSerializers[1] = &FRotatorAsShortNetSerializerNetSerializerInfo::Serializer;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
        ::__l2::StaticInstance.CreateAndRegisterReplicationFragmentFunction =
             (_func___cdecl_FReplicationFragment_ptr_UObject_ptr_FReplicationStateDescriptor_ptr_FFragmentRegistrationContext_ptr
              *)0x0;
        `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
        ::__l2::StaticInstance._padding_ =
             (longlong)&FRepMovementNetSerializerNetSerializerInfo::Serializer;
        `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
        ::__l2::StaticInstance._padding_ =
             (longlong)&___7FNamedStructPropertyNetSerializerInfo_Net_UE__6B_;
        `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
        ::__l2::StaticInstance._padding_._0_4_ = RepMovementNetSerializer.ComparisonIndex.Value;
        `private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
        ::__l2::StaticInstance._padding_._4_4_ = RepMovementNetSerializer.Number;
        _Init_thread_footer(&`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FPropertyNetSerializerInfoRegistry::Register
                ((FPropertyNetSerializerInfo *)
                 &`private:_struct_UE::Net::FPropertyNetSerializerInfo_const&___ptr64___cdecl_UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::GetPropertyNetSerializerInfo_RepMovementNetSerializer(void)___ptr64'
                  ::__l2::StaticInstance);
    }
    else {
      bVar2 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5071255138371371928>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepMovementNetSerializer.cpp"
                         ,0x398,
                         "sizeof(QuantizedType::Rotation) >= RotatorNetSerializer.QuantizedTypeSize && alignof(decltype(QuantizedType::Rotation)) >= RotatorNetSerializer.QuantizedTypeAlignment"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  else {
    bVar2 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5071255138371371903>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepMovementNetSerializer.cpp"
                       ,0x37f,
                       "sizeof(QuantizedType::AngularVelocity) >= VectorNetSerializer.QuantizedTypeSize && alignof(decltype(QuantizedType::AngularVelocity)) >= VectorNetSerializer.QuantizedTypeAlignment"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// ~FNetSerializerRegistryDelegates @ 1484bd8e0

void __thiscall
UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
~FNetSerializerRegistryDelegates(FNetSerializerRegistryDelegates *this)

{
  *(undefined ***)this = &___7FNetSerializerRegistryDelegates_FRepMovementNetSerializer_Net_UE__6B_;
  Net::FNetSerializerRegistryDelegates::~FNetSerializerRegistryDelegates
            ((FNetSerializerRegistryDelegates *)this);
  return;
}

// InitNetSerializer @ 1484df020

void __thiscall
UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::InitNetSerializer
          (FNetSerializerRegistryDelegates *this)

{
  VectorNetQuantizeNetSerializers[0] = &FVectorNetQuantizeNetSerializerNetSerializerInfo::Serializer
  ;
  VectorNetQuantizeNetSerializers[1] =
       &FVectorNetQuantize10NetSerializerNetSerializerInfo::Serializer;
  VectorNetQuantizeNetSerializers[2] =
       &FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer;
  RotatorNetSerializers[0] = &FRotatorAsByteNetSerializerNetSerializerInfo::Serializer;
  RotatorNetSerializers[1] = &FRotatorAsShortNetSerializerNetSerializerInfo::Serializer;
  return;
}

// IsRepMovementLayoutAsExpected @ 1484e09f0

bool __thiscall
UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::IsRepMovementLayoutAsExpected
          (FNetSerializerRegistryDelegates *this)

{
  bool bVar1;
  FProperty *pFVar2;
  char *pcVar3;
  char **ppcVar4;
  UScriptStruct *local_res10;
  FName local_res18;
  FName *local_res20;
  char *local_78;
  char *local_70 [12];
  char *local_10;
  
  local_res10 = FRepMovement::StaticStruct();
  if ((int)local_res10->_padding_ != 0x88) {
    local_res18 = (FName)&local_res10;
    bVar1 = `UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
            IsRepMovementLayoutAsExpected'::__l3::<lambda_1>::operator()(&local_res18);
    if (!bVar1) {
      return false;
    }
  }
  local_70[0] = "AngularVelocity";
  pcVar3 = "LinearVelocity";
  local_78 = "LinearVelocity";
  local_70[1] = "Location";
  ppcVar4 = &local_78;
  local_70[2] = "Rotation";
  local_70[3] = "bSimulatedPhysicSleep";
  local_70[4] = "bRepPhysics";
  local_70[5] = "LocationQuantizationLevel";
  local_70[6] = "VelocityQuantizationLevel";
  local_70[7] = "RotationQuantizationLevel";
  local_70[8] = "ServerFrame";
  local_70[9] = "ServerPhysicsHandle";
  local_70[10] = "bRepAcceleration";
  local_70[0xb] = "Acceleration";
  while( true ) {
    ::FName::FName(&local_res18,pcVar3);
    pFVar2 = UStruct::FindPropertyByName((UStruct *)local_res10,local_res18);
    if (pFVar2 == (FProperty *)0x0) {
      local_res20 = &local_res18;
      bVar1 = `UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::
              IsRepMovementLayoutAsExpected'::__l11::<lambda_2>::operator()(&local_res20);
      if (!bVar1) {
        return false;
      }
    }
    ppcVar4 = ppcVar4 + 1;
    if (ppcVar4 == &local_10) break;
    pcVar3 = *ppcVar4;
  }
  return true;
}

// QuantizedTypeMeetRequirements @ 1484e8390

bool __thiscall
UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::QuantizedTypeMeetRequirements
          (FNetSerializerRegistryDelegates *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char *pcVar4;
  atomic<unsigned_char> *paVar5;
  int iVar6;
  
  if ((FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer.QuantizedTypeSize < 0x21) &&
     (FVectorNetQuantize100NetSerializerNetSerializerInfo::Serializer.QuantizedTypeAlignment < 9)) {
    if ((FRotatorAsShortNetSerializerNetSerializerInfo::Serializer.QuantizedTypeSize < 9) &&
       (FRotatorAsShortNetSerializerNetSerializerInfo::Serializer.QuantizedTypeAlignment < 3)) {
      return true;
    }
    pcVar4 = 
    "sizeof(QuantizedType::Rotation) >= RotatorNetSerializer.QuantizedTypeSize && alignof(decltype(QuantizedType::Rotation)) >= RotatorNetSerializer.QuantizedTypeAlignment"
    ;
    iVar6 = 0x398;
    paVar5 = &bGEnsureHasExecuted<5071255138371371928>;
  }
  else {
    pcVar4 = 
    "sizeof(QuantizedType::AngularVelocity) >= VectorNetSerializer.QuantizedTypeSize && alignof(decltype(QuantizedType::AngularVelocity)) >= VectorNetSerializer.QuantizedTypeAlignment"
    ;
    iVar6 = 0x37f;
    paVar5 = &bGEnsureHasExecuted<5071255138371371903>;
  }
  bVar2 = Assert::Private::ExecCheckImplInternal
                    (paVar5,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\RepMovementNetSerializer.cpp"
                     ,iVar6,pcVar4);
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 150519f50

bool __thiscall
`UE::Net::FCharacterNetworkSerializationPackedBitsNetSerializer::FNetSerializerRegistryDelegates::
OnPreFreezeNetSerializerRegistry'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_180746727920238281>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_180746727920238281>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 15052ba80

bool __thiscall
`UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::IsRepMovementLayoutAsExpected'
::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5071255138371371942>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5071255138371371942>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

// operator() @ 15052c200

bool __thiscall
`UE::Net::FRepMovementNetSerializer::FNetSerializerRegistryDelegates::IsRepMovementLayoutAsExpected'
::__l11::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5071255138371371960>);
  if (bVar2) {
    ::FName::ToString(*(FName **)this,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5071255138371371960>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15052c267;
    }
  }
  bVar2 = false;
LAB_15052c267:
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

