// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 6

// FNativeFastArrayReplicationFragmentBase @ 144229110

FNativeFastArrayReplicationFragmentBase * __thiscall
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::FNativeFastArrayReplicationFragmentBase
          (FNativeFastArrayReplicationFragmentBase *this,EReplicationFragmentTraits param_1,
          UObject *param_2,FReplicationStateDescriptor *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  FNetSerializer *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNativeFastArrayReplicationFragmentBase *pFVar7;
  ulonglong uVar8;
  
  *(EReplicationFragmentTraits *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)&___7FNativeFastArrayReplicationFragmentBase_Private_Net_UE__6B_;
  (this->ReplicationStateDescriptor).Reference = param_3;
  if (param_3 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::AddRef(param_3);
  }
  this->Owner = param_2;
  if (((param_3->Traits & (IsNativeFastArrayReplicationState|IsFastArrayReplicationState)) !=
       (IsNativeFastArrayReplicationState|IsFastArrayReplicationState)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("EnumHasAllFlags(InDescriptor->Traits, EReplicationStateTraits::IsFastArrayReplicationState | EReplicationStateTraits::IsNativeFastArrayReplicationState)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0x10d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar7 = (FNativeFastArrayReplicationFragmentBase *)(*pcVar4)();
    return pFVar7;
  }
  uVar6 = (uint)this->_padding_ | 0x10;
  *(uint *)&this->_padding_ = uVar6;
  if ((param_1 & CanReceive) != None) {
    if ((param_3->Traits & HasRepNotifies) != None) {
      if (((param_3->Traits & KeepPreviousState) != None) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                             ,0x119,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FNativeFastArrayReplicationFragmentBase *)(*pcVar4)();
        return pFVar7;
      }
      uVar6 = (uint)this->_padding_ | 2;
    }
    uVar6 = uVar6 | 0x100;
    *(uint *)&this->_padding_ = uVar6;
  }
  if ((param_3->Traits & HasObjectReference) != None) {
    *(uint *)&this->_padding_ = uVar6 | 0x2000;
  }
  uVar8 = 0;
  plVar1 = (longlong *)
           ((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
           SerializerConfig[1]._padding_;
  plVar2 = (longlong *)plVar1[2];
  pFVar3 = (FNetSerializer *)*plVar2;
  while (pFVar3 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar8 = (ulonglong)((int)uVar8 + 1);
    pFVar3 = (FNetSerializer *)plVar2[uVar8 * 2];
  }
  this->WrappedArrayOffsetRelativeFastArraySerializerProperty =
       (ulonglong)*(uint *)(*plVar1 + uVar8 * 8);
  return this;
}

// CollectOwner @ 144233de0

void __thiscall
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::CollectOwner
          (FNativeFastArrayReplicationFragmentBase *this,FReplicationStateOwnerCollector *param_1)

{
  uint uVar1;
  
  uVar1 = param_1->OwnerCount;
  if ((uVar1 < param_1->MaxOwnerCount) &&
     ((uVar1 == 0 || (param_1->Owners[uVar1 - 1] != this->Owner)))) {
    param_1->Owners[uVar1] = this->Owner;
    param_1->OwnerCount = param_1->OwnerCount + 1;
  }
  return;
}

// GetArrayElementDescriptor @ 14423af50

FReplicationStateDescriptor * __thiscall
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::GetArrayElementDescriptor
          (FNativeFastArrayReplicationFragmentBase *this)

{
  longlong *plVar1;
  FNetSerializer *pFVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar1 = *(longlong **)
            (((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
             SerializerConfig[1]._padding_ + 0x10);
  pFVar2 = (FNetSerializer *)*plVar1;
  while (pFVar2 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar3 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar3;
    pFVar2 = (FNetSerializer *)plVar1[(ulonglong)uVar3 * 2];
  }
  return *(FReplicationStateDescriptor **)
          (*(longlong *)(*(longlong *)(*(longlong *)(plVar1[uVar4 * 2 + 1] + 0x38) + 0x10) + 8) +
          0x10);
}

// GetFastArrayPropertyStructDescriptor @ 14423c050

FReplicationStateDescriptor * __thiscall
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::GetFastArrayPropertyStructDescriptor
          (FNativeFastArrayReplicationFragmentBase *this)

{
  return (FReplicationStateDescriptor *)
         ((this->ReplicationStateDescriptor).Reference)->MemberSerializerDescriptors->
         SerializerConfig[1]._padding_;
}

// InternalDequantizeFastArray @ 144242450

void __cdecl
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::InternalDequantizeFastArray
          (FNetSerializationContext *param_1,uchar *param_2,uchar *param_3,
          FReplicationStateDescriptor *param_4)

{
  FReplicationStateMemberSerializerDescriptor *pFVar1;
  FNetSerializer *pFVar2;
  FReplicationStateMemberDescriptor *pFVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  FNetDequantizeArgs local_48;
  
  pFVar1 = param_4->MemberSerializerDescriptors;
  uVar6 = 0;
  pFVar2 = pFVar1->Serializer;
  while (pFVar2 != &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) {
    uVar6 = (ulonglong)((uint)uVar6 + 1);
    pFVar2 = pFVar1[uVar6].Serializer;
  }
  pFVar3 = param_4->MemberDescriptors;
  if (((uint)param_4->MemberCount <= (uint)uVar6) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MemberIndex < MemberCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationSystem\\FastArrayReplicationFragment.cpp"
                         ,0x146,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_48._padding_ = 0;
  local_48._padding_._0_4_ = 0;
  local_48._padding_ = (longlong)pFVar1[uVar6].SerializerConfig;
  local_48.Target = (ulong64)(param_2 + pFVar3[uVar6].ExternalMemberOffset);
  local_48.Source = (ulong64)(param_3 + pFVar3[uVar6].InternalMemberOffset);
  (*(pFVar1[uVar6].Serializer)->Dequantize)(param_1,&local_48);
  return;
}

// ToString @ 144254b00

void __cdecl
UE::Net::Private::FNativeFastArrayReplicationFragmentBase::ToString
          (TStringBuilderBase<wchar_t> *param_1,uchar *param_2,FReplicationStateDescriptor *param_3)

{
  ushort uVar1;
  FProperty **ppFVar2;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar7;
  FString local_58;
  FString local_48;
  ulonglong uVar6;
  
  ppFVar2 = param_3->MemberProperties;
  uVar1 = param_3->MemberCount;
  TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"FNativeFastArrayReplicationState %s\n");
  uVar6 = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  uVar7 = uVar6;
  if (uVar1 != 0) {
    do {
      plVar3 = *(longlong **)(uVar7 + (longlong)ppFVar2);
      (**(code **)(*plVar3 + 0xe0))
                (plVar3,&local_58,
                 param_2 + *(uint *)((longlong)&param_3->MemberDescriptors->ExternalMemberOffset +
                                    uVar7),0,0,0,0x2000,0);
      bVar4 = IsThisNotNull(plVar3,"FField::GetName");
      if (bVar4) {
        ::FName::ToString((FName *)(plVar3 + 4),&local_48);
      }
      else {
        ::FString::FString(&local_48,L"None");
      }
      TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%u - %s : %s\n");
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      ::FString::Reset(&local_58,0);
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      uVar7 = uVar7 + 8;
    } while (uVar5 < uVar1);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

