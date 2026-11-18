// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 68

// `dynamic_initializer_for_'AccountPortal'' @ 14144b710

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__AccountPortal__(void)

{
  ::FName::FName(&AccountPortal,L"AccountPortal");
  return;
}

// `dynamic_initializer_for_'AmazonAccessToken'' @ 14144b730

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__AmazonAccessToken__(void)

{
  ::FName::FName(&AmazonAccessToken,L"AmazonAccessToken");
  return;
}

// `dynamic_initializer_for_'AppleIdToken'' @ 14144b750

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__AppleIdToken__(void)

{
  ::FName::FName(&AppleIdToken,L"AppleIdToken");
  return;
}

// `dynamic_initializer_for_'Auto'' @ 14144b770

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__Auto__(void)

{
  ::FName::FName(&Auto,L"Auto");
  return;
}

// `dynamic_initializer_for_'Developer'' @ 14144b790

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__Developer__(void)

{
  ::FName::FName(&Developer,L"Developer");
  return;
}

// `dynamic_initializer_for_'DeviceIdAccessToken'' @ 14144b7b0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__DeviceIdAccessToken__(void)

{
  ::FName::FName(&DeviceIdAccessToken,L"DeviceIdAccessToken");
  return;
}

// `dynamic_initializer_for_'DiscordAccessToken'' @ 14144b7d0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__DiscordAccessToken__(void)

{
  ::FName::FName(&DiscordAccessToken,L"DiscordAccessToken");
  return;
}

// `dynamic_initializer_for_'DisplayName'' @ 14144b7f0

void __cdecl UE::Online::AccountAttributeData::_dynamic_initializer_for__DisplayName__(void)

{
  ::FName::FName(&DisplayName,L"DisplayName");
  return;
}

// `dynamic_initializer_for_'Epic'' @ 14144b810

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__Epic__(void)

{
  ::FName::FName(&Epic,L"Epic");
  return;
}

// `dynamic_initializer_for_'EpicIdToken'' @ 14144b830

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__EpicIdToken__(void)

{
  ::FName::FName(&EpicIdToken,L"EpicIdToken");
  return;
}

// `dynamic_initializer_for_'ExchangeCode'' @ 14144b850

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__ExchangeCode__(void)

{
  ::FName::FName(&ExchangeCode,L"ExchangeCode");
  return;
}

// `dynamic_initializer_for_'ExternalAuth'' @ 14144b870

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__ExternalAuth__(void)

{
  ::FName::FName(&ExternalAuth,L"ExternalAuth");
  return;
}

// `dynamic_initializer_for_'GogSessionTicket'' @ 14144b890

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__GogSessionTicket__(void)

{
  ::FName::FName(&GogSessionTicket,L"GogSessionTicket");
  return;
}

// `dynamic_initializer_for_'GoogleIdToken'' @ 14144b8b0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__GoogleIdToken__(void)

{
  ::FName::FName(&GoogleIdToken,L"GoogleIdToken");
  return;
}

// `dynamic_initializer_for_'ItchioJwt'' @ 14144b8d0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__ItchioJwt__(void)

{
  ::FName::FName(&ItchioJwt,L"ItchioJwt");
  return;
}

// `dynamic_initializer_for_'ItchioKey'' @ 14144b8f0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__ItchioKey__(void)

{
  ::FName::FName(&ItchioKey,L"ItchioKey");
  return;
}

// `dynamic_initializer_for_'LogOnlineSchema'' @ 14144b910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOnlineSchema__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOnlineSchema,L"LogOnlineSchema",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOnlineSchema__);
  return;
}

// `dynamic_initializer_for_'LogOnlineServices'' @ 14144b950

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOnlineServices__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOnlineServices,L"LogOnlineServices",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOnlineServices__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOnlineServicesInterface'' @ 14144b990

void __cdecl _dynamic_initializer_for__ModuleRegistrantOnlineServicesInterface__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OnlineServicesInterface";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OnlineServicesInterface",0x17);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOnlineServicesInterfaceModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'NintendoIdToken'' @ 14144b9e0

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__NintendoIdToken__(void)

{
  ::FName::FName(&NintendoIdToken,L"NintendoIdToken");
  return;
}

// `dynamic_initializer_for_'NintendoNsaIdToken'' @ 14144ba00

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__NintendoNsaIdToken__(void)

{
  ::FName::FName(&NintendoNsaIdToken,L"NintendoNsaIdToken");
  return;
}

// `dynamic_initializer_for_'OculusUserIdNonce'' @ 14144ba20

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__OculusUserIdNonce__(void)

{
  ::FName::FName(&OculusUserIdNonce,L"OculusUserIdNonce");
  return;
}

// `dynamic_initializer_for_'OnAsyncOpCompleted'' @ 14144ba40

void __cdecl UE::Online::_dynamic_initializer_for__OnAsyncOpCompleted__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnAsyncOpCompleted__);
  return;
}

// `dynamic_initializer_for_'OnOnlineServicesCreated'' @ 14144ba60

void __cdecl UE::Online::_dynamic_initializer_for__OnOnlineServicesCreated__(void)

{
  atexit(_dynamic_atexit_destructor_for__OnOnlineServicesCreated__);
  return;
}

// `dynamic_initializer_for_'OpenIdAccessToken'' @ 14144ba80

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__OpenIdAccessToken__(void)

{
  ::FName::FName(&OpenIdAccessToken,L"OpenIdAccessToken");
  return;
}

// `dynamic_initializer_for_'Password'' @ 14144baa0

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__Password__(void)

{
  ::FName::FName(&Password,L"Password");
  return;
}

// `dynamic_initializer_for_'PersistentAuth'' @ 14144bac0

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__PersistentAuth__(void)

{
  ::FName::FName(&PersistentAuth,L"PersistentAuth");
  return;
}

// `dynamic_initializer_for_'PsnAuthCode'' @ 14144bae0

void __cdecl UE::Online::ExternalServerAuthTicketType::_dynamic_initializer_for__PsnAuthCode__(void)

{
  ::FName::FName(&PsnAuthCode,L"PsnAuthCode");
  return;
}

// `dynamic_initializer_for_'PsnIdToken'' @ 14144bb00

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__PsnIdToken__(void)

{
  ::FName::FName(&PsnIdToken,L"PsnIdToken");
  return;
}

// `dynamic_initializer_for_'RefreshToken'' @ 14144bb20

void __cdecl UE::Online::LoginCredentialsType::_dynamic_initializer_for__RefreshToken__(void)

{
  ::FName::FName(&RefreshToken,L"RefreshToken");
  return;
}

// `dynamic_initializer_for_'SteamSessionTicket'' @ 14144bb40

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__SteamSessionTicket__(void)

{
  ::FName::FName(&SteamSessionTicket,L"SteamSessionTicket");
  return;
}

// `dynamic_initializer_for_'UplayAccessToken'' @ 14144bb60

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__UplayAccessToken__(void)

{
  ::FName::FName(&UplayAccessToken,L"UplayAccessToken");
  return;
}

// `dynamic_initializer_for_'XblXstsToken'' @ 14144bb80

void __cdecl UE::Online::ExternalLoginType::_dynamic_initializer_for__XblXstsToken__(void)

{
  ::FName::FName(&XblXstsToken,L"XblXstsToken");
  return;
}

// `dynamic_initializer_for_'XblXstsToken'' @ 14144bba0

void __cdecl
UE::Online::ExternalServerAuthTicketType::_dynamic_initializer_for__XblXstsToken__(void)

{
  ::FName::FName(&XblXstsToken,L"XblXstsToken");
  return;
}

// `scalar_deleting_destructor' @ 14ec1cbf0

void * __thiscall
FOnlineServicesInterfaceModule::_scalar_deleting_destructor_
          (FOnlineServicesInterfaceModule *this,uint param_1)

{
  *this = (FOnlineServicesInterfaceModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AllOf<TStringView<wchar_t>,bool_(__cdecl*)(wchar_t)> @ 14ec1d0f0

bool __cdecl
Algo::AllOf<TStringView<wchar_t>,bool_(__cdecl*)(wchar_t)>
          (TStringView<wchar_t> *param_1,_func___cdecl_bool_wchar_t *param_2)

{
  wchar_t *pwVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  pwVar3 = param_1->DataPtr;
  pwVar1 = pwVar3 + param_1->Size;
  while( true ) {
    if (pwVar3 == pwVar1) {
      return true;
    }
    bVar2 = (*param_2)(*pwVar3);
    if (!bVar2) break;
    pwVar3 = pwVar3 + 1;
  }
  return false;
}

// FindByPredicate<TMap<UE::Online::FSchemaServiceAttributeDescriptor_const_*,enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FSchemaServiceAttributeDescriptor_const_*,enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,0>_>_&,`UE::Online::FSchemaRegistry::ParseConfig'::__l910::<lambda_1>_> @ 14ec20170

TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
* __cdecl AlgoImpl::
          FindByPredicate<TMap<UE::Online::FSchemaServiceAttributeDescriptor_const_*,enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FSchemaServiceAttributeDescriptor_const_*,enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags,0>_>_&,_UE::Online::FSchemaRegistry::ParseConfig_::__l910::<lambda_1>_>
                    (TMap<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags,0>_>
                     *param_1,<lambda_1> *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ESchemaServiceAttributeSupportedTypeFlags EVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  ESchemaServiceAttributeSupportedTypeFlags EVar7;
  uint uVar8;
  int iVar9;
  TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
  *pTVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar4 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar14 = 0;
  uVar8 = 1;
  iVar16 = 0;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar13 = *puVar17;
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ec2020d;
      uVar13 = puVar17[lVar11 + 1];
    }
    uVar8 = -uVar13 & uVar13;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_14ec2020d:
  uVar13 = *(uint *)&param_1->field_0x28;
  uVar12 = uVar13 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar14);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar13 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar16;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar13 < 0) || (iVar4 < (int)uVar13)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar10 = (TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
               *)(*pcVar5)();
    return pTVar10;
  }
  uVar8 = *(uint *)&param_1->field_0x28;
  if (uVar13 != uVar8) {
    puVar15 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar13 == 0) {
      lVar11 = (longlong)iVar14;
      uVar12 = uVar12 + 0x20;
      iVar14 = iVar14 + 1;
      uVar13 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_14ec20310;
      uVar13 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar13 = (int)lVar11 + -1 + uVar12;
    if ((int)uVar8 < (int)uVar13) {
      uVar13 = uVar8;
    }
  }
LAB_14ec20310:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,enum_UE::Online::ESchemaServiceAttributeSupportedTypeFlags>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar13) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = *(longlong *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    pTVar10 = (TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
               *)(*(longlong *)param_1 + (longlong)TStack_60.CurrentBitIndex * 0x18);
    EVar3 = pTVar10->field_0x8;
    EVar7 = UE::Online::`anonymous_namespace'::TranslateAttributeType
                      ((param_2->SchemaAttributeDefinition).Type);
    if (((EVar3 & EVar7) != None) &&
       ((param_2->SchemaAttributeDefinition).MaxSize <= *(int *)(lVar11 + 0x28))) {
      return pTVar10;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (TTuple<UE::Online::FSchemaServiceAttributeDescriptor_const_*,UE::Online::ESchemaServiceAttributeSupportedTypeFlags>
          *)0x0;
}

// FindByPredicate<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,`UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot'::__l2::<lambda_1>_> @ 14ec203b0

TTuple<FName,UE::Online::FSchemaVariant> * __cdecl
AlgoImpl::
FindByPredicate<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l2::<lambda_1>_>
          (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TTuple<FName,UE::Online::FSchemaVariant> *pTVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ec2044e;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (int)lVar10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ec2044e:
  uVar11 = *(uint *)&param_1->field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pTVar9 = (TTuple<FName,UE::Online::FSchemaVariant> *)(*pcVar5)();
    return pTVar9;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_14ec20550;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_14ec20550:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pTVar9 = (TTuple<FName,UE::Online::FSchemaVariant> *)
             ((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)param_1);
    FVar4.ComparisonIndex.Value = *(uint *)&pTVar9->field_0x0;
    FVar4.Number = *(uint *)&pTVar9->field_0x4;
    if (FVar4 == (*param_2.SchemaCategoryDefinition)->SchemaCompatibilityServiceAttributeId) {
      return pTVar9;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return (TTuple<FName,UE::Online::FSchemaVariant> *)0x0;
}

// ForEach<TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>_&,`UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges'::__l2::<lambda_2>_> @ 14ec208d0

void __cdecl
Algo::
ForEach<TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_2>_>
          (TMap<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>_>
           *param_1,<lambda_2> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec2096e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ec2096e:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec20a70;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ec20a70:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x50 + *(longlong *)param_1);
    TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
    ::Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&>
              ((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                *)param_2.ClientDataSnapshot,pFVar9,(FSchemaVariant *)(pFVar9 + 5));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,`UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges'::__l2::<lambda_1>_> @ 14ec20af0

void __cdecl
Algo::
ForEach<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_1>_>
          (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
           *param_1,<lambda_1> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  FName *pFVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar11 = 0;
  uVar6 = 1;
  iVar13 = 0;
  iVar7 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar7 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec20b8e;
      uVar10 = puVar14[lVar8 + 1];
    }
    uVar6 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (int)lVar8 + -1 + iVar13;
    if (iVar3 < iVar7) {
      iVar7 = iVar3;
    }
  }
LAB_14ec20b8e:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar6,iVar11);
  TStack_60.CurrentBitIndex = iVar7;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar7;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar6) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec20c90;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar15;
    if ((int)uVar6 < (int)uVar10) {
      uVar10 = uVar6;
    }
  }
LAB_14ec20c90:
  while( true ) {
    if (*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    pFVar9 = (FName *)((longlong)TStack_60.CurrentBitIndex * 0x30 + *(longlong *)param_1);
    TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
    ::Emplace<FName_const_&,UE::Online::FSchemaVariant_const_&>
              ((TMapBase<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
                *)param_2.ClientDataSnapshot,pFVar9,(FSchemaVariant *)(pFVar9 + 1));
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// ForEach<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,`UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges'::__l2::<lambda_3>_> @ 14ec20d10

void __cdecl
Algo::
ForEach<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::CommitClientChanges_::__l2::<lambda_3>_>
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,<lambda_3> param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  FName local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iVar11 = 0;
  uVar7 = 1;
  iVar13 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar14 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar10 = *puVar14;
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec20dae;
      uVar10 = puVar14[lVar9 + 1];
    }
    uVar7 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = (int)lVar9 + -1 + iVar13;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ec20dae:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar15 = uVar10 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar11);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(param_1->Elements).field_0x8 -
                       *(int *)&(param_1->Elements).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar3 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar7) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar9 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec20eb0;
      uVar10 = *(uint *)(puVar12 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar10 = (int)lVar9 + -1 + uVar15;
    if ((int)uVar7 < (int)uVar10) {
      uVar10 = uVar7;
    }
  }
LAB_14ec20eb0:
  while( true ) {
    if (*(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34 !=
        (int)uStack_40) {
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar10) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    FVar4 = *(FName *)(*(longlong *)&param_1->Elements + (longlong)TStack_60.CurrentBitIndex * 0x10)
    ;
    local_res20 = FVar4;
    if (*(int *)&(param_2.ClientDataSnapshot)->field_0x8 !=
        *(int *)&(param_2.ClientDataSnapshot)->field_0x34) {
      uVar7 = ::GetTypeHash(FVar4.ComparisonIndex.Value);
      TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                           *)param_2.ClientDataSnapshot,FVar4.Number + uVar7,&local_res20);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// MakeFlagsRange<enum_UE::Online::ESchemaAttributeFlags> @ 14ec21090

TRange<UE::Online::ESchemaAttributeFlags> __cdecl
MakeFlagsRange<enum_UE::Online::ESchemaAttributeFlags>(ESchemaAttributeFlags param_1)

{
  undefined7 in_register_00000009;
  undefined1 in_DL;
  
  *(undefined1 *)CONCAT71(in_register_00000009,param_1) = in_DL;
  return (TRange<UE::Online::ESchemaAttributeFlags>)param_1;
}

// MakeShared<UE::Online::FOnlineError,1,UE::Online::FOnlineError_const_&> @ 14ec210a0

TSharedRef<UE::Online::FOnlineError,1> * __cdecl
MakeShared<UE::Online::FOnlineError,1,UE::Online::FOnlineError_const_&>
          (TSharedRef<UE::Online::FOnlineError,1> *__return_storage_ptr__,FOnlineError *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<UE::Online::FOnlineError,1> *pTVar5;
  
  pTVar4 = operator_new(0x38);
  if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
    __return_storage_ptr__->Object = (FOnlineError *)0x10;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar4->SharedReferenceCount = (atomic<int>)0x1;
    pTVar4->WeakReferenceCount = (atomic<int>)0x1;
    pTVar4->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFOnlineError_Online_UE___00_SharedPointerInternals__6B_
    ;
    pTVar4[1]._padding_ = (longlong)(param_1->Details).Object;
    pTVar1 = (param_1->Details).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar4[1].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4[2]._padding_ = (longlong)(param_1->Inner).Object;
    pTVar1 = (param_1->Inner).SharedReferenceCount.ReferenceController;
    *(TReferenceControllerBase<1> **)&pTVar4[2].SharedReferenceCount = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar4[3]._padding_ = param_1->ErrorCode;
    __return_storage_ptr__->Object = (FOnlineError *)(pTVar4 + 1);
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar4;
    if ((FOnlineError *)(pTVar4 + 1) == (FOnlineError *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TSharedRef<UE::Online::FOnlineError,1> *)(*pcVar2)();
        return pTVar5;
      }
    }
  }
  return __return_storage_ptr__;
}

// NoneOf<TStringView<wchar_t>_[3],bool_(__cdecl_TStringView<wchar_t>::*)(void)const_> @ 14ec213a0

bool __cdecl
Algo::NoneOf<TStringView<wchar_t>_[3],bool_(__cdecl_TStringView<wchar_t>::*)(void)const_>
          (TStringView<wchar_t> (*param_1) [3],pmf_8c0bea34 param_2)

{
  TStringView<wchar_t> (*paTVar1) [3];
  char cVar2;
  
  paTVar1 = param_1 + 1;
  while( true ) {
    if (param_1 == paTVar1) {
      return true;
    }
    cVar2 = (*(code *)param_2)(param_1);
    if (cVar2 != '\0') break;
    param_1 = (TStringView<wchar_t> (*) [3])((longlong)param_1 + 0x10);
  }
  return false;
}

// Transform<TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,``UE::Online::`anonymous_namespace'::LogSchemaDefinition'::__l5::<lambda_2>::operator()'::__l2::<lambda_1>_> @ 14ec21a50

/* WARNING: Removing unreachable block (ram,0x00014ec21cf7) */

void __cdecl
Algo::
Transform<TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>,TArray<FString,TSizedDefaultAllocator<32>_>_&,__UE::Online::_anonymous_namespace_::LogSchemaDefinition_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>_>
          (TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
           *param_1,TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FString local_b0;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TMap<FName,UE::Online::FSchemaCategoryDefinition,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaCategoryDefinition,0>_>
  *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar7 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar7 != 0) {
    puVar13 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ec21aee;
      uVar10 = puVar13[lVar8 + 1];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar7 < iStack_84) {
      iStack_84 = iVar7;
    }
  }
LAB_14ec21aee:
  uVar10 = *(uint *)&param_1->field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_78 = *(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar7 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&param_1->field_0x28;
  if (uVar10 != uVar3) {
    puVar12 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec21bf0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_14ec21bf0:
  while( true ) {
    pTVar5 = local_70;
    if (*(int *)&local_70->field_0x8 - *(int *)&local_70->field_0x34 != (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaCategoryDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar10) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    ::FName::ToString((FName *)((longlong)TStack_68.CurrentBitIndex * 200 + *(longlong *)pTVar5),
                      &local_b0);
    pFVar9 = (param_2->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_b0.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_b0.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_b0.Data.ArrayMax;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// Transform<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,``UE::Online::`anonymous_namespace'::LogSchemaDefinition'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_> @ 14ec21d40

/* WARNING: Removing unreachable block (ram,0x00014ec21fe7) */

void __cdecl
Algo::
Transform<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>,TArray<FString,TSizedDefaultAllocator<32>_>_&,__UE::Online::_anonymous_namespace_::LogSchemaDefinition_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
          (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,<lambda_1> param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  uint uVar14;
  undefined1 local_res8 [8];
  FString local_b0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  iVar7 = *(int *)&(param_1->Elements).field_0x28;
  puVar1 = &(param_1->Elements).field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar7 != 0) {
    puVar13 = *(uint **)&(param_1->Elements).field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)puVar1;
    }
    uVar10 = *puVar13;
    while (uVar10 == 0) {
      lVar8 = (longlong)iStack_98;
      local_80 = local_80 + 0x20;
      iStack_98 = iStack_98 + 1;
      iStack_84 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14ec21dde;
      uVar10 = puVar13[lVar8 + 1];
    }
    uStack_94 = -uVar10 & uVar10;
    uVar2 = (ulonglong)uStack_94 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iStack_84 = (int)lVar8 + -1 + local_80;
    if (iVar7 < iStack_84) {
      iStack_84 = iVar7;
    }
  }
LAB_14ec21dde:
  uVar10 = *(uint *)&(param_1->Elements).field_0x28;
  uVar14 = uVar10 & 0xffffffe0;
  iStack_78 = *(int *)&(param_1->Elements).field_0x8 - *(int *)&(param_1->Elements).field_0x34;
  uStack_88 = 0xffffffff;
  TStack_68._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_68.CurrentBitIndex = iStack_84;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar10 >> 5;
  TStack_68._28_4_ = iStack_84;
  TStack_68.BaseBitIndex = local_80;
  uStack_48 = CONCAT44(uStack_74,iStack_78);
  local_a0 = param_1;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_70 = param_1;
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar7 < (int)uVar10)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar3 = *(uint *)&(param_1->Elements).field_0x28;
  if (uVar10 != uVar3) {
    puVar12 = *(undefined1 **)&(param_1->Elements).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar10 == 0) {
      lVar8 = (longlong)iVar11;
      uVar14 = uVar14 + 0x20;
      iVar11 = iVar11 + 1;
      uVar10 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14ec21ee0;
      uVar10 = *(uint *)(puVar12 + lVar8 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar8 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = (int)lVar8 + -1 + uVar14;
    if ((int)uVar3 < (int)uVar10) {
      uVar10 = uVar3;
    }
  }
LAB_14ec21ee0:
  while( true ) {
    pTVar5 = local_70;
    if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
        (int)uStack_48) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_68.CurrentBitIndex == uVar10) &&
        (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    ::FName::ToString((FName *)((longlong)TStack_68.CurrentBitIndex * 0x10 +
                               *(longlong *)&pTVar5->Elements),&local_b0);
    pFVar9 = (param_2->AllocatorInstance).Data;
    if (((pFVar9 <= (FScriptContainerElement *)&local_b0) &&
        ((FScriptContainerElement *)&local_b0 < pFVar9 + (longlong)param_2->ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = param_2->ArrayNum;
    if (iVar7 == param_2->ArrayMax) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar7 + 1;
    pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(undefined8 *)pFVar9 = 0;
    *(FScriptContainerElement **)pFVar9 = local_b0.Data.AllocatorInstance.Data;
    *(int *)(pFVar9 + 8) = local_b0.Data.ArrayNum;
    *(int *)(pFVar9 + 0xc) = local_b0.Data.ArrayMax;
    local_b0.Data.ArrayNum = 0;
    local_b0.Data.ArrayMax = 0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  return;
}

// TransformIf<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,`UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot'::__l171::<lambda_2>,`UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot'::__l171::<lambda_3>_> @ 14ec22030

void __cdecl
Algo::
TransformIf<TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_&,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l171::<lambda_2>,_UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot_::__l171::<lambda_3>_>
          (TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
           *param_1,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *param_2,
          <lambda_2> param_3,<lambda_3> param_4)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  code *pcVar4;
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *pTVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TTuple<FName,UE::Online::FSchemaVariant> *pTVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 local_res8 [8];
  FPreparedServiceChanges *local_res18 [2];
  undefined4 uStack_7c;
  undefined1 local_74 [12];
  TMap<FName,UE::Online::FSchemaVariant,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&param_1->field_0x28;
  puVar1 = &param_1->field_0x10;
  iVar13 = 0;
  uVar7 = 1;
  iVar15 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar16 = *(uint **)&param_1->field_0x20;
    if (*(uint **)&param_1->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar12 = *puVar16;
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ec220dd;
      uVar12 = puVar16[lVar9 + 1];
    }
    uVar7 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar8 = iVar15 + -1 + (int)lVar9;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_14ec220dd:
  uVar12 = *(uint *)&param_1->field_0x28;
  uVar11 = uVar12 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar13);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar12 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar15;
  uStack_40 = CONCAT44(uStack_7c,*(int *)&param_1->field_0x8 - *(int *)&param_1->field_0x34);
  local_res18[0] = param_3.NewPreparedServiceChanges;
  local_68 = param_1;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar12 < 0) || (iVar3 < (int)uVar12)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = *(uint *)&param_1->field_0x28;
  if (uVar12 != uVar7) {
    puVar14 = *(undefined1 **)&param_1->field_0x20;
    if (*(undefined1 **)&param_1->field_0x20 == (undefined1 *)0x0) {
      puVar14 = puVar1;
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar12 == 0) {
      lVar9 = (longlong)iVar13;
      uVar11 = uVar11 + 0x20;
      iVar13 = iVar13 + 1;
      uVar12 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14ec221e0;
      uVar12 = *(uint *)(puVar14 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar12 = (int)lVar9 + -1 + uVar11;
    if ((int)uVar7 < (int)uVar12) {
      uVar12 = uVar7;
    }
  }
LAB_14ec221e0:
  while( true ) {
    pTVar5 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar12) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar5 == param_1))
    break;
    pTVar10 = (TTuple<FName,UE::Online::FSchemaVariant> *)
              (*(longlong *)pTVar5 + (longlong)TStack_60.CurrentBitIndex * 0x30);
    bVar6 = `UE::Online::Private::FSchemaCategoryInstanceBase::PrepareServiceSnapshot'::__l171::
            <lambda_2>::operator()(local_res18,pTVar10);
    if (bVar6) {
      local_74._4_8_ = *(undefined8 *)pTVar10;
      TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::Emplace<FName>
                (param_2,(FName *)local_74,(bool *)(local_74 + 4));
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// `scalar_deleting_destructor' @ 14ec252c0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FSchemaDefinition,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FSchemaDefinition,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xc0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25300

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FOnlineError,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FOnlineError,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25340

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<UE::Online::FOnlineErrorDetails,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<UE::Online::FOnlineErrorDetails,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25380

void * __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges>::
_scalar_deleting_destructor_
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges> *this,uint param_1
          )

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0xa8;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25410

void * __thiscall
UE::Online::TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot>::
_scalar_deleting_destructor_
          (TOnlineResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot> *this,
          uint param_1)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  bVar1 = this->field_0x30;
  if (1 < (ulonglong)bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[bVar1])(&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec254a0

void * __thiscall
UE::Online::
TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>::
_scalar_deleting_destructor_
          (TResult<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareClientChanges::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25530

void * __thiscall
UE::Online::
TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
::_scalar_deleting_destructor_
          (TResult<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>
           *this,uint param_1)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)(this->Storage).TypeIndex;
  if (1 < uVar4) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSchemaCategoryInstancePrepareServiceSnapshot::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar4])(&this->Storage);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec255c0

void * __thiscall
UE::Online::FOnlineErrorDetails::_scalar_deleting_destructor_
          (FOnlineErrorDetails *this,uint param_1)

{
  ITextData *pIVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FOnlineErrorDetails_Online_UE__6B_;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  pFVar2 = (this->LogString).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->FriendlyErrorCode).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14ec25630

void * __thiscall
UE::Online::Private::FSchemaCategoryInstanceBase::_scalar_deleting_destructor_
          (FSchemaCategoryInstanceBase *this,uint param_1)

{
  void *pvVar1;
  
  if ((this->PreparedServiceChanges).bIsSet != false) {
    *(undefined4 *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x48 = 0;
    pvVar1 = *(void **)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot.field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&(this->PreparedServiceChanges).TypedValue.ClientDataSnapshot);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedServiceChanges).TypedValue.DerivedSchemaDefinition.
               SharedReferenceCount.ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedServiceChanges);
  }
  if ((this->PreparedClientChanges).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((this->PreparedClientChanges).TypedValue.DerivedSchemaDefinition.SharedReferenceCount
               .ReferenceController);
    FSchemaServiceClientChanges::~FSchemaServiceClientChanges
              ((FSchemaServiceClientChanges *)&this->PreparedClientChanges);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BaseSchemaDefinition).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DerivedSchemaDefinition).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SchemaRegistry).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x2d8);
  }
  return this;
}

// IMPLEMENT_MODULE_OnlineServicesInterface @ 14ec39db0

void __cdecl IMPLEMENT_MODULE_OnlineServicesInterface(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'AwayText'' @ 150470050

void __cdecl `UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__AwayText__(void)

{
  if (AwayText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047005f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*AwayText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'DoNotDisturbText'' @ 150470070

void __cdecl `UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__DoNotDisturbText__(void)

{
  if (DoNotDisturbText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047007f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*DoNotDisturbText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'EmptyString'' @ 150470090

void __cdecl
`UE::Online::FSchemaVariant::GetString'::__l7::_dynamic_atexit_destructor_for__EmptyString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::EmptyString.Data.AllocatorInstance.Data;
  if (::EmptyString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::EmptyString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogOnlineSchema'' @ 1504700b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOnlineSchema__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOnlineSchema);
  return;
}

// `dynamic_atexit_destructor_for_'LogOnlineServices'' @ 1504700d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOnlineServices__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOnlineServices);
  return;
}

// `dynamic_atexit_destructor_for_'OfflineText'' @ 1504700f0

void __cdecl `UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__OfflineText__(void)

{
  if (OfflineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504700ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OfflineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'OnAsyncOpCompleted'' @ 150470110

void __cdecl UE::Online::_dynamic_atexit_destructor_for__OnAsyncOpCompleted__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnAsyncOpCompleted._8_8_,
             OnAsyncOpCompleted._16_4_);
  if (OnAsyncOpCompleted._8_8_ != 0) {
    FMemory::Free((void *)OnAsyncOpCompleted._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnAsyncOpCompleted);
  return;
}

// `dynamic_atexit_destructor_for_'OnOnlineServicesCreated'' @ 150470150

void __cdecl UE::Online::_dynamic_atexit_destructor_for__OnOnlineServicesCreated__(void)

{
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            ((TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> *)OnOnlineServicesCreated._8_8_,
             OnOnlineServicesCreated._16_4_);
  if (OnOnlineServicesCreated._8_8_ != 0) {
    FMemory::Free((void *)OnOnlineServicesCreated._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&OnOnlineServicesCreated);
  return;
}

// `dynamic_atexit_destructor_for_'OnlineText'' @ 150470190

void __cdecl `UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__OnlineText__(void)

{
  if (OnlineText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00015047019f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*OnlineText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1504701b0

void __cdecl
`TLazySingleton<UE::Online::FOnlineServicesRegistry>::GetLazy'::__l2::
_dynamic_atexit_destructor_for__Singleton__(void)

{
  if (DAT_1553aced8 != (FOnlineServicesRegistry *)0x0) {
    UE::Online::FOnlineServicesRegistry::~FOnlineServicesRegistry(DAT_1553aced8);
    DAT_1553aced8 = (FOnlineServicesRegistry *)0x0;
  }
  return;
}

// `dynamic_atexit_destructor_for_'UnknownText'' @ 1504701e0

void __cdecl `UE::Online::ToLocText'::__l2::_dynamic_atexit_destructor_for__UnknownText__(void)

{
  if (UnknownText.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001504701ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*UnknownText.TextData.Reference + 0x10))();
    return;
  }
  return;
}

