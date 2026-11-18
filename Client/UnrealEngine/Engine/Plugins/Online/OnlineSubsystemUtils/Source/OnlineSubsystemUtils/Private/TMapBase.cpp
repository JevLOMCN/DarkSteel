// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 11

// Find @ 14ec72670

FName * __thiscall
TMapBase<unsigned_char,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>_>
::Find(TMapBase<unsigned_char,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_char,FName,0>_>
       *this,uchar param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FName *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    ((ulonglong)((this->Pairs).HashSize - 1) & (ulonglong)param_1) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x14;
        if (*(uchar *)(lVar2 + (longlong)iVar3 * 0x14) == param_1) {
          pFVar4 = (FName *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FName *)(lVar1 + 4);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return (FName *)0x0;
}

// Find @ 14ec726e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FConnectionState * __thiscall
TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
::Find(TMapBase<UNetConnection_*,AOnlineBeaconHost::FConnectionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UNetConnection_*,AOnlineBeaconHost::FConnectionState,0>_>
       *this,UNetConnection *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ForElementType<FSetElementId> FVar4;
  FConnectionState *pFVar5;
  uint uVar6;
  
  uVar6 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar4 = (this->Pairs).Hash.SecondaryData;
    if (FVar4 == (ForElementType<FSetElementId>)0x0) {
      FVar4 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar4 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x28;
        if (*(UNetConnection **)(lVar2 + (longlong)iVar3 * 0x28) == param_1) {
          pFVar5 = (FConnectionState *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FConnectionState *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar3 = *(int *)(lVar1 + 0x20);
      } while (iVar3 != -1);
    }
  }
  return (FConnectionState *)0x0;
}

// Find @ 14ec72790

uchar * __thiscall
TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
::Find(TMapBase<FName,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uchar *puVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x14;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x14) == param_1) {
          puVar5 = (uchar *)0x0;
          if (lVar1 != 0) {
            puVar5 = (uchar *)(lVar1 + 8);
          }
          return puVar5;
        }
        iVar4 = *(int *)(lVar1 + 0xc);
      } while (iVar4 != -1);
    }
  }
  return (uchar *)0x0;
}

// Find @ 14ec72830

FDelegateHandle * __thiscall
TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
::Find(TMapBase<FName,FDelegateHandle,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FDelegateHandle,0>_>
       *this,FName param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  FDelegateHandle *pFVar5;
  ForElementType<FSetElementId> FVar6;
  
  uVar3 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar6 = (this->Pairs).Hash.SecondaryData;
    if (FVar6 == (ForElementType<FSetElementId>)0x0) {
      FVar6 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar4 = *(int *)((longlong)FVar6 +
                    (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar3) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar4 * 0x18;
        if (*(FName *)(lVar2 + (longlong)iVar4 * 0x18) == param_1) {
          pFVar5 = (FDelegateHandle *)0x0;
          if (lVar1 != 0) {
            pFVar5 = (FDelegateHandle *)(lVar1 + 8);
          }
          return pFVar5;
        }
        iVar4 = *(int *)(lVar1 + 0x10);
      } while (iVar4 != -1);
    }
  }
  return (FDelegateHandle *)0x0;
}

// Find @ 14ec728d0

TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> * __thiscall
TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
::Find(TMapBase<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar6;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TDelegate<AOnlineBeaconClient_*___cdecl(UNetConnection_*),FDefaultDelegateUserPolicy> *)
         0x0;
}

// Find @ 14ec72960

TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *
__thiscall
TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
::Find(TMapBase<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>_>
       *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy> *pTVar6
  ;
  
  iVar2 = (param_1->Data).ArrayNum;
  if (iVar2 == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  uVar1 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,pwVar5);
  iVar2 = TSet<TTuple<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<FString,TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar1,param_1);
  if (iVar2 != -1) {
    lVar4 = (longlong)iVar2 * 0x30 + *(longlong *)&(this->Pairs).Elements;
    pTVar6 = (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
              *)0x0;
    if (lVar4 != 0) {
      pTVar6 = (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
                *)(lVar4 + 0x10);
    }
    return pTVar6;
  }
  return (TDelegate<void___cdecl(AOnlineBeaconClient_*,UNetConnection_*),FDefaultDelegateUserPolicy>
          *)0x0;
}

// Remove @ 14ec91350

int __thiscall
TMapBase<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>_>
::Remove(TMapBase<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>_>
         *this,TSharedRef<FInternetAddr_const_,1> *param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 == *(int *)&(this->Pairs).Elements.field_0x34) {
    iVar2 = 0;
  }
  else {
    uVar1 = (**(code **)((longlong)*param_1->Object + 0x90))();
    iVar2 = TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
            ::RemoveImpl<TSharedRef<FInternetAddr_const_,1>_>(&this->Pairs,uVar1,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return iVar2;
}

// FindOrAddImpl<FUniqueNetIdWrapper_const_&> @ 14ecd6840

FVoiceAmplitudeData * __thiscall
TMapBase<FUniqueNetIdWrapper,FVoiceAmplitudeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>_>
::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
          (TMapBase<FUniqueNetIdWrapper,FVoiceAmplitudeData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>_>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FUniqueNetIdWrapper *local_res20;
  
  iVar1 = TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FVoiceAmplitudeData *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FUniqueNetIdWrapper,FVoiceAmplitudeData>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FVoiceAmplitudeData,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FUniqueNetIdWrapper_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FVoiceAmplitudeData *)
         (*(longlong *)&(this->Pairs).Elements + (longlong)local_res8[0] * 0x38 + 0x20);
}

// FindOrAddImpl<FUniqueNetIdWrapper_const_&> @ 14ecd68d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRemoteTalkerDataImpl * __thiscall
TMapBase<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
::FindOrAddImpl<FUniqueNetIdWrapper_const_&>
          (TMapBase<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>_>
           *this,uint param_1,FUniqueNetIdWrapper *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FUniqueNetIdWrapper *local_res20;
  
  iVar1 = TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FUniqueNetIdWrapper>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x120 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FRemoteTalkerDataImpl *)(lVar2 + 0x20);
  }
  local_res20 = param_2;
  TSet<TTuple<FUniqueNetIdWrapper,FRemoteTalkerDataImpl>,TDefaultMapHashableKeyFuncs<FUniqueNetIdWrapper,FRemoteTalkerDataImpl,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FUniqueNetIdWrapper_const_&>_>
            (&this->Pairs,(uint)local_res8,
             (TKeyInitializer<FUniqueNetIdWrapper_const_&> *)(ulonglong)param_1,(bool *)&local_res20
            );
  return (FRemoteTalkerDataImpl *)
         (*(longlong *)&(this->Pairs).Elements + 0x20 + (longlong)local_res8[0] * 0x120);
}

// Find @ 14ece6670

FVariantData * __thiscall
TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
::Find(TMapBase<FName,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FVariantData *pFVar2;
  ForElementType<FSetElementId> FVar3;
  FName *pFVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar4 = (FName *)((longlong)(int)uVar1 * 0x30 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar4 == param_1) {
          pFVar2 = (FVariantData *)0x0;
          if (pFVar4 != (FName *)0x0) {
            pFVar2 = (FVariantData *)(pFVar4 + 1);
          }
          return pFVar2;
        }
        uVar1 = pFVar4[5].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (FVariantData *)0x0;
}

// FindChecked @ 14ece6710

FVariantData * __thiscall
TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
::FindChecked(TMapBase<FString,FVariantData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>_>
              *this,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FVariantData *pFVar5;
  int iVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  
  iVar4 = (param_1->Data).ArrayNum;
  if (iVar4 == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  lVar8 = 0;
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,pwVar7);
  iVar4 = TSet<TTuple<FString,FVariantData>,TDefaultMapHashableKeyFuncs<FString,FVariantData,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&this->Pairs,uVar3,param_1);
  if ((iVar4 == -1) ||
     (lVar8 = (longlong)iVar4 * 0x38 + *(longlong *)&(this->Pairs).Elements, lVar8 == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FVariantData *)(*pcVar1)();
      return pFVar5;
    }
  }
  return (FVariantData *)(lVar8 + 0x10);
}

