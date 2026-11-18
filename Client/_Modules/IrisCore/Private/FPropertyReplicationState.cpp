// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 31

// FPropertyReplicationState @ 1441f8bc0

FPropertyReplicationState * __thiscall
UE::Net::FPropertyReplicationState::FPropertyReplicationState
          (FPropertyReplicationState *this,FPropertyReplicationState *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *_Dst;
  
  (this->ReplicationStateDescriptor).Reference = (FReplicationStateDescriptor *)0x0;
  pFVar1 = (param_1->ReplicationStateDescriptor).Reference;
  (this->ReplicationStateDescriptor).Reference = pFVar1;
  if ((pFVar1 != (FReplicationStateDescriptor *)0x0) && ((pFVar1->Traits & NeedsRefCount) != None))
  {
    LOCK();
    pFVar1->RefCount = (atomic<int>)((int)pFVar1->RefCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  this->bOwnState = 1;
  this->StateBuffer = (uchar *)0x0;
  _Dst = FMemory::Malloc((ulonglong)pFVar1->ExternalSize,(uint)pFVar1->ExternalAlignment);
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  this->StateBuffer = _Dst;
  memset(_Dst,0,(ulonglong)pFVar1->ExternalSize);
  Net::Private::ConstructPropertyReplicationState
            (this->StateBuffer,(this->ReplicationStateDescriptor).Reference);
  operator=(this,param_1);
  return this;
}

// FPropertyReplicationState @ 1441f8c50

FPropertyReplicationState * __thiscall
UE::Net::FPropertyReplicationState::FPropertyReplicationState
          (FPropertyReplicationState *this,FReplicationStateDescriptor *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  uchar *_Dst;
  
  (this->ReplicationStateDescriptor).Reference = param_1;
  if ((param_1 != (FReplicationStateDescriptor *)0x0) && ((param_1->Traits & NeedsRefCount) != None)
     ) {
    LOCK();
    param_1->RefCount = (atomic<int>)((int)param_1->RefCount + 1);
    UNLOCK();
  }
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  this->bOwnState = 1;
  this->StateBuffer = (uchar *)0x0;
  _Dst = FMemory::Malloc((ulonglong)pFVar1->ExternalSize,(uint)pFVar1->ExternalAlignment);
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  this->StateBuffer = _Dst;
  memset(_Dst,0,(ulonglong)pFVar1->ExternalSize);
  Net::Private::ConstructPropertyReplicationState
            (this->StateBuffer,(this->ReplicationStateDescriptor).Reference);
  return this;
}

// FPropertyReplicationState @ 1441f8cc0

FPropertyReplicationState * __thiscall
UE::Net::FPropertyReplicationState::FPropertyReplicationState
          (FPropertyReplicationState *this,FReplicationStateDescriptor *param_1,uchar *param_2)

{
  FReplicationStateDescriptor *this_00;
  code *pcVar1;
  bool bVar2;
  FPropertyReplicationState *pFVar3;
  
  (this->ReplicationStateDescriptor).Reference = param_1;
  if ((param_1 != (FReplicationStateDescriptor *)0x0) && ((param_1->Traits & NeedsRefCount) != None)
     ) {
    LOCK();
    param_1->RefCount = (atomic<int>)((int)param_1->RefCount + 1);
    UNLOCK();
  }
  this->bOwnState = 0;
  this->StateBuffer = (uchar *)0x0;
  if (param_2 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStateBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x1f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPropertyReplicationState *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->StateBuffer != (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPropertyReplicationState *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_2 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStateBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPropertyReplicationState *)(*pcVar1)();
      return pFVar3;
    }
  }
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != param_1) {
    (this->ReplicationStateDescriptor).Reference = param_1;
    if ((param_1 != (FReplicationStateDescriptor *)0x0) &&
       ((param_1->Traits & NeedsRefCount) != None)) {
      LOCK();
      param_1->RefCount = (atomic<int>)((int)param_1->RefCount + 1);
      UNLOCK();
    }
    if (this_00 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(this_00);
    }
  }
  this->StateBuffer = param_2;
  return this;
}

// ~FPropertyReplicationState @ 1441f9da0

void __thiscall
UE::Net::FPropertyReplicationState::~FPropertyReplicationState(FPropertyReplicationState *this)

{
  FReplicationStateDescriptor *this_00;
  
  if ((this->bOwnState != 0) && (this->StateBuffer != (uchar *)0x0)) {
    Net::Private::DestructPropertyReplicationState
              (this->StateBuffer,(this->ReplicationStateDescriptor).Reference);
    FMemory::Free(this->StateBuffer);
    this->StateBuffer = (uchar *)0x0;
  }
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != (FReplicationStateDescriptor *)0x0) {
    FReplicationStateDescriptor::Release(this_00);
    return;
  }
  return;
}

// operator= @ 1441fa4e0

FPropertyReplicationState * __thiscall
UE::Net::FPropertyReplicationState::operator=
          (FPropertyReplicationState *this,FPropertyReplicationState *param_1)

{
  uchar *_Src;
  uchar *_Dst;
  FReplicationStateDescriptor *pFVar1;
  uchar *puVar2;
  uchar *puVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FPropertyReplicationState *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FReplicationStateMemberDescriptor *pFVar10;
  ushort *puVar11;
  
  if ((((this == param_1) || (this->StateBuffer == (uchar *)0x0)) ||
      ((this->ReplicationStateDescriptor).Reference == (FReplicationStateDescriptor *)0x0)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("this != &Other && IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                         ,0x3a,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FPropertyReplicationState *)(*pcVar5)();
    return pFVar7;
  }
  if (((this->ReplicationStateDescriptor).Reference !=
       (param_1->ReplicationStateDescriptor).Reference) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReplicationStateDescriptor.GetReference() == Other.ReplicationStateDescriptor.GetReference()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                         ,0x3b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    pFVar7 = (FPropertyReplicationState *)(*pcVar5)();
    return pFVar7;
  }
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  lVar8 = 0;
  puVar2 = this->StateBuffer;
  if ((pFVar1->Traits & IsNativeFastArrayReplicationState) != None) {
    lVar8 = (ulonglong)pFVar1->ChangeMasksExternalOffset - 4;
  }
  if ((*(uint *)(puVar2 + lVar8) & 0x3fffffff) == 0) {
    uVar9 = (ulonglong)pFVar1->ExternalAlignment - 1;
    puVar3 = param_1->StateBuffer;
    if (((((ulonglong)puVar2 & uVar9) != 0) || (((ulonglong)puVar3 & uVar9) != 0)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsAligned(DstStateBuffer, Descriptor->ExternalAlignment) && IsAligned(SrcStateBuffer, Descriptor->ExternalAlignment)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\InternalPropertyReplicationState.cpp"
                           ,0x74,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar7 = (FPropertyReplicationState *)(*pcVar5)();
      return pFVar7;
    }
    Net::Private::CopyPropertyReplicationStateInternals(puVar2,puVar3,pFVar1,true);
    pFVar10 = pFVar1->MemberDescriptors;
    if (pFVar1->MemberCount != 0) {
      puVar11 = &pFVar1->MemberPropertyDescriptors->ArrayIndex;
      lVar8 = (longlong)pFVar1->MemberProperties - (longlong)pFVar10;
      uVar9 = (ulonglong)pFVar1->MemberCount;
      do {
        if (*puVar11 == 0) {
          plVar4 = *(longlong **)((longlong)pFVar10 + lVar8);
          _Src = puVar3 + pFVar10->ExternalMemberOffset;
          _Dst = puVar2 + pFVar10->ExternalMemberOffset;
          if (_Dst != _Src) {
            if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
              (**(code **)(*plVar4 + 0xf0))(plVar4,_Dst,_Src,(int)plVar4[6]);
            }
            else {
              memcpy(_Dst,_Src,
                     (longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6]);
            }
          }
        }
        puVar11 = puVar11 + 8;
        pFVar10 = pFVar10 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  else {
    Set(this,param_1);
  }
  return this;
}

// CallRepNotifies @ 1442009d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Net::FPropertyReplicationState::CallRepNotifies
          (FPropertyReplicationState *this,void *param_1,FCallRepNotifiesParameters *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  UFunction *pUVar2;
  FReplicationStateDescriptor *pFVar3;
  longlong lVar4;
  bool bVar5;
  ForAnyElementType FVar6;
  EReplicationStateTraits EVar7;
  bool bVar8;
  int iVar9;
  size_t sVar10;
  FReplicationStateMemberDescriptor *pFVar11;
  uchar *puVar12;
  wchar_t *_Str;
  longlong lVar13;
  FReplicationStateMemberPropertyDescriptor *pFVar14;
  uint uVar15;
  bool bVar16;
  longlong local_e8;
  longlong local_d8;
  FName local_c0;
  uint local_b8;
  longlong local_b0;
  FNetBitArrayView local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  
  bVar16 = false;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar1 = (this->ReplicationStateDescriptor).Reference,
     pFVar1 != (FReplicationStateDescriptor *)0x0)) {
    pFVar11 = pFVar1->MemberDescriptors;
    pFVar14 = pFVar1->MemberPropertyDescriptors;
    EVar7 = pFVar1->Traits;
    uVar15 = 0;
    local_b8 = (uint)pFVar1->MemberCount;
    local_b0 = 0;
    if (local_b8 != 0) {
      local_e8 = 0;
      lVar13 = (longlong)pFVar1->MemberProperties - (longlong)pFVar11;
      local_d8 = 0;
      do {
        pUVar2 = pFVar14->RepNotifyFunction;
        if (pUVar2 != (UFunction *)0x0) {
          if ((EVar7 & InitOnly) == None) {
            puVar12 = this->StateBuffer;
            pFVar3 = (this->ReplicationStateDescriptor).Reference;
            if (((puVar12 == (uchar *)0x0) || (pFVar3 == (FReplicationStateDescriptor *)0x0)) ||
               ((pFVar3->Traits & InitOnly) == None)) {
              local_a8.BitCount = (uint)pFVar3->ChangeMaskBitCount;
              local_a8.WordCount = pFVar3->ChangeMaskBitCount + 0x1f >> 5;
              local_a8.Storage = &local_a8.BitCount;
              if (local_a8.BitCount != 0) {
                local_a8.Storage = (uint *)(puVar12 + pFVar3->ChangeMasksExternalOffset);
              }
              bVar8 = FNetBitArrayView::IsAnyBitSet
                                (&local_a8,
                                 (uint)*(ushort *)
                                        ((longlong)&pFVar3->MemberChangeMaskDescriptors->BitOffset +
                                        local_d8),
                                 (uint)*(ushort *)
                                        ((longlong)&pFVar3->MemberChangeMaskDescriptors->BitCount +
                                        local_d8));
            }
            else if ((pFVar3->Traits >> 0xb & 1) == 0) {
              bVar8 = (bool)((byte)((uint)*(undefined4 *)puVar12 >> 0x1e) & 1);
            }
            else {
              bVar8 = (bool)((byte)((uint)*(undefined4 *)
                                           (puVar12 +
                                           ((ulonglong)pFVar3->ChangeMasksExternalOffset - 4)) >>
                                   0x1e) & 1);
            }
            if (bVar8 == false) goto LAB_144200e38;
          }
          lVar4 = *(longlong *)((longlong)pFVar11 + lVar13);
          if (lVar4 != local_b0) {
            if (param_2->PreviousState == (FPropertyReplicationState *)0x0) {
              puVar12 = (uchar *)0x0;
            }
            else {
              puVar12 = param_2->PreviousState->StateBuffer + pFVar11->ExternalMemberOffset;
            }
            if (param_2->bOnlyCallIfDiffersFromLocal == false) {
              if (param_2->bIsInit != false) {
LAB_144200bf3:
                bVar8 = Net::Private::InternalCompareMember
                                  (pFVar1,uVar15,this->StateBuffer + pFVar11->ExternalMemberOffset,
                                   puVar12);
                if (bVar8) {
                  bVar8 = false;
                  goto LAB_144200baf;
                }
              }
LAB_144200c0e:
              bVar8 = true;
LAB_144200c11:
              local_b0 = lVar4;
              (**(code **)(*(longlong *)param_1 + 0x260))(param_1,pUVar2);
            }
            else {
              if (param_2->bIsInit == false) {
                if ((*(byte *)((longlong)&pFVar1->MemberTraitsDescriptors->Traits + local_e8) & 8)
                    == 0) goto LAB_144200bf3;
                goto LAB_144200c0e;
              }
              bVar8 = Net::Private::InternalCompareMember
                                (pFVar1,uVar15,this->StateBuffer + pFVar11->ExternalMemberOffset,
                                 puVar12);
              bVar8 = !bVar8;
              if (bVar8) goto LAB_144200c11;
            }
LAB_144200baf:
            if (5 < (byte)LogIrisRepNotify._0_1_) {
              if (IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum < 2) {
LAB_144200c99:
                bVar5 = true;
              }
              else {
                bVar16 = true;
                if (param_1 == (void *)0x0) {
                  ::FString::FString(&local_98,L"None");
                }
                else {
                  local_c0 = *(FName *)((longlong)param_1 + 0x18);
                  ::FName::ToString(&local_c0,&local_98);
                }
                if (IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.ArrayNum == 0) {
                  _Str = L"";
LAB_144200c63:
                  sVar10 = wcslen(_Str);
                  iVar9 = ::FString::Find(&local_98,_Str,(int)sVar10,IgnoreCase,FromStart,-1);
                  if (iVar9 != -1) goto LAB_144200c99;
                }
                else {
                  _Str = (wchar_t *)
                         IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.
                         AllocatorInstance.Data;
                  if (IrisDebugHelper::IrisDebugHelperInternal::GIrisDebugName.Data.
                      AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_144200c63;
                }
                bVar5 = false;
              }
              if ((bVar16) &&
                 (bVar16 = false,
                 local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
                FMemory::Free(local_98.Data.AllocatorInstance.Data);
              }
              if (bVar5) {
                if (bVar8) {
                  if (5 < (byte)LogIrisRepNotify._0_1_) {
                    local_c0 = (FName)pUVar2->_padding_;
                    ::FName::ToString(&local_c0,&local_88);
                    UObjectBaseUtility::GetFullName(param_1,&local_68,(UObject *)0x0,None);
                    Logging::Private::BasicLog<6>
                              (&::LOG_Static,(FLogCategoryBase *)&LogIrisRepNotify);
                    FVar6.Data = local_88.Data.AllocatorInstance.Data;
                    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_68.Data.AllocatorInstance.Data);
                      FVar6.Data = local_88.Data.AllocatorInstance.Data;
                    }
joined_r0x000144200e15:
                    if (FVar6.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(FVar6.Data);
                    }
                  }
                }
                else if (6 < (byte)LogIrisRepNotify._0_1_) {
                  local_c0 = (FName)pUVar2->_padding_;
                  ::FName::ToString(&local_c0,&local_78);
                  UObjectBaseUtility::GetFullName(param_1,&local_58,(UObject *)0x0,None);
                  Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogIrisRepNotify)
                  ;
                  FVar6.Data = local_78.Data.AllocatorInstance.Data;
                  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_58.Data.AllocatorInstance.Data);
                    FVar6.Data = local_78.Data.AllocatorInstance.Data;
                  }
                  goto joined_r0x000144200e15;
                }
              }
            }
          }
        }
LAB_144200e38:
        pFVar14 = pFVar14 + 1;
        local_d8 = local_d8 + 4;
        pFVar11 = pFVar11 + 1;
        local_e8 = local_e8 + 2;
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_b8);
    }
  }
  return;
}

// ConstructStateInternal @ 144201a10

void __thiscall
UE::Net::FPropertyReplicationState::ConstructStateInternal(FPropertyReplicationState *this)

{
  FReplicationStateDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  uchar *_Dst;
  
  if (this->StateBuffer != (uchar *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x6b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  _Dst = FMemory::Malloc((ulonglong)pFVar1->ExternalSize,(uint)pFVar1->ExternalAlignment);
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  this->StateBuffer = _Dst;
  memset(_Dst,0,(ulonglong)pFVar1->ExternalSize);
  Net::Private::ConstructPropertyReplicationState
            (this->StateBuffer,(this->ReplicationStateDescriptor).Reference);
  return;
}

// CopyDirtyProperties @ 144201d40

void __thiscall
UE::Net::FPropertyReplicationState::CopyDirtyProperties
          (FPropertyReplicationState *this,FPropertyReplicationState *param_1)

{
  FReplicationStateDescriptor *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  
  if (((this == param_1) || (this->StateBuffer == (uchar *)0x0)) ||
     ((this->ReplicationStateDescriptor).Reference == (FReplicationStateDescriptor *)0x0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("this != &Other && IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x1b8,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->ReplicationStateDescriptor).Reference !=
      (param_1->ReplicationStateDescriptor).Reference) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ReplicationStateDescriptor.GetReference() == Other.ReplicationStateDescriptor.GetReference()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x1b9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  if ((pFVar1->Traits & IsNativeFastArrayReplicationState) == None) {
    lVar4 = 0;
  }
  else {
    lVar4 = (ulonglong)pFVar1->ChangeMasksExternalOffset - 4;
  }
  if ((*(uint *)(this->StateBuffer + lVar4) & 0x3fffffff) == 0) {
    Net::Private::CopyDirtyMembers(this->StateBuffer,param_1->StateBuffer,pFVar1);
    return;
  }
  Set(this,param_1);
  return;
}

// DestructStateInternal @ 144208060

void __thiscall
UE::Net::FPropertyReplicationState::DestructStateInternal(FPropertyReplicationState *this)

{
  if ((this->bOwnState != 0) && (this->StateBuffer != (uchar *)0x0)) {
    Net::Private::DestructPropertyReplicationState
              (this->StateBuffer,(this->ReplicationStateDescriptor).Reference);
    FMemory::Free(this->StateBuffer);
    this->StateBuffer = (uchar *)0x0;
  }
  return;
}

// GetPropertyValue @ 14420cf40

void __thiscall
UE::Net::FPropertyReplicationState::GetPropertyValue
          (FPropertyReplicationState *this,uint param_1,void *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  Net::Private::InternalCopyPropertyValue
            (pFVar1,param_1,param_2,
             this->StateBuffer + pFVar1->MemberDescriptors[param_1].ExternalMemberOffset);
  return;
}

// InjectState @ 14420ffe0

void __thiscall
UE::Net::FPropertyReplicationState::InjectState
          (FPropertyReplicationState *this,FReplicationStateDescriptor *param_1,uchar *param_2)

{
  FReplicationStateDescriptor *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->StateBuffer != (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateBuffer == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x83,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2 == (uchar *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InStateBuffer != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x84,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (this->ReplicationStateDescriptor).Reference;
  if (this_00 != param_1) {
    (this->ReplicationStateDescriptor).Reference = param_1;
    if ((param_1 != (FReplicationStateDescriptor *)0x0) &&
       ((param_1->Traits & NeedsRefCount) != None)) {
      LOCK();
      param_1->RefCount = (atomic<int>)((int)param_1->RefCount + 1);
      UNLOCK();
    }
    if (this_00 != (FReplicationStateDescriptor *)0x0) {
      FReplicationStateDescriptor::Release(this_00);
    }
  }
  this->StateBuffer = param_2;
  return;
}

// IsCustomConditionEnabled @ 1442117a0

bool __thiscall
UE::Net::FPropertyReplicationState::IsCustomConditionEnabled
          (FPropertyReplicationState *this,uint param_1)

{
  ushort uVar1;
  ushort uVar2;
  FReplicationStateDescriptor *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint *puVar7;
  uint local_c;
  
  pFVar3 = (this->ReplicationStateDescriptor).Reference;
  if (((pFVar3->Traits & HasLifetimeConditionals) != None) &&
     (pFVar3->MemberChangeMaskDescriptors[param_1].BitCount != 0)) {
    uVar1 = pFVar3->ChangeMaskBitCount;
    uVar2 = pFVar3->MemberChangeMaskDescriptors[param_1].BitOffset;
    local_c = (uint)uVar1;
    puVar7 = &local_c;
    if (uVar1 != 0) {
      puVar7 = (uint *)(this->StateBuffer +
                       (pFVar3->ChangeMasksExternalOffset + (uVar1 + 0x1f >> 5) * 4));
    }
    if ((uint)uVar1 <= (uint)uVar2) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    return (puVar7[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) != 0;
  }
  return true;
}

// IsDirty @ 1442118c0

bool __thiscall UE::Net::FPropertyReplicationState::IsDirty(FPropertyReplicationState *this)

{
  uint uVar1;
  FReplicationStateDescriptor *pFVar2;
  longlong lVar3;
  
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    if ((pFVar2->Traits & IsNativeFastArrayReplicationState) == None) {
      lVar3 = 0;
    }
    else {
      lVar3 = (ulonglong)pFVar2->ChangeMasksExternalOffset - 4;
    }
    uVar1 = *(uint *)(this->StateBuffer + lVar3);
    if (((int)uVar1 < 0) || ((uVar1 >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// IsDirty @ 144211910

bool __thiscall
UE::Net::FPropertyReplicationState::IsDirty(FPropertyReplicationState *this,uint param_1)

{
  uchar *puVar1;
  FReplicationStateDescriptor *pFVar2;
  bool bVar3;
  FNetBitArrayView local_18;
  
  puVar1 = this->StateBuffer;
  pFVar2 = (this->ReplicationStateDescriptor).Reference;
  if (((puVar1 != (uchar *)0x0) && (pFVar2 != (FReplicationStateDescriptor *)0x0)) &&
     ((pFVar2->Traits & InitOnly) != None)) {
    if ((pFVar2->Traits >> 0xb & 1) != 0) {
      return (bool)((byte)((uint)*(undefined4 *)
                                  (puVar1 + ((ulonglong)pFVar2->ChangeMasksExternalOffset - 4)) >>
                          0x1e) & 1);
    }
    return (bool)((byte)((uint)*(undefined4 *)puVar1 >> 0x1e) & 1);
  }
  local_18.BitCount = (uint)pFVar2->ChangeMaskBitCount;
  local_18.WordCount = pFVar2->ChangeMaskBitCount + 0x1f >> 5;
  local_18.Storage = &local_18.BitCount;
  if (local_18.BitCount != 0) {
    local_18.Storage = (uint *)(puVar1 + pFVar2->ChangeMasksExternalOffset);
  }
  bVar3 = FNetBitArrayView::IsAnyBitSet
                    (&local_18,(uint)pFVar2->MemberChangeMaskDescriptors[param_1].BitOffset,
                     (uint)pFVar2->MemberChangeMaskDescriptors[param_1].BitCount);
  return bVar3;
}

// IsDirtyForPolling @ 1442119c0

bool __thiscall
UE::Net::FPropertyReplicationState::IsDirtyForPolling(FPropertyReplicationState *this,uint param_1)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  uint local_c;
  
  bVar4 = IsDirty(this,param_1);
  if (!bVar4) {
    pFVar2 = (this->ReplicationStateDescriptor).Reference;
    uVar1 = pFVar2->MemberCount;
    if ((pFVar2->Traits & HasLifetimeConditionals) == None) {
      iVar6 = 0;
    }
    else {
      iVar6 = (pFVar2->ChangeMaskBitCount + 0x1f >> 5) << 2;
    }
    local_c = (uint)uVar1;
    puVar7 = &local_c;
    if (uVar1 != 0) {
      puVar7 = (uint *)(this->StateBuffer +
                       (iVar6 + pFVar2->ChangeMasksExternalOffset +
                                (pFVar2->ChangeMaskBitCount + 0x1f >> 5) * 4));
    }
    if (uVar1 <= param_1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index < BitCount",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                         ,0x2c1,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    if ((puVar7[param_1 >> 5] >> (param_1 & 0x1f) & 1) == 0) {
      return false;
    }
  }
  return true;
}

// IsDirtyForPolling @ 144211aa0

bool __thiscall
UE::Net::FPropertyReplicationState::IsDirtyForPolling(FPropertyReplicationState *this)

{
  ushort uVar1;
  uchar *puVar2;
  FReplicationStateDescriptor *pFVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  uint *puVar8;
  uint local_c [3];
  
  puVar2 = this->StateBuffer;
  uVar5 = 0;
  if ((puVar2 != (uchar *)0x0) &&
     (pFVar3 = (this->ReplicationStateDescriptor).Reference,
     pFVar3 != (FReplicationStateDescriptor *)0x0)) {
    uVar6 = uVar5;
    if ((pFVar3->Traits & IsNativeFastArrayReplicationState) != None) {
      uVar6 = (ulonglong)pFVar3->ChangeMasksExternalOffset - 4;
    }
    if (((int)*(uint *)(puVar2 + uVar6) < 0) || ((*(uint *)(puVar2 + uVar6) >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  pFVar3 = (this->ReplicationStateDescriptor).Reference;
  uVar1 = pFVar3->MemberCount;
  if ((pFVar3->Traits & HasLifetimeConditionals) == None) {
    iVar7 = 0;
  }
  else {
    iVar7 = (pFVar3->ChangeMaskBitCount + 0x1f >> 5) << 2;
  }
  local_c[0] = (uint)uVar1;
  puVar8 = local_c;
  if (uVar1 != 0) {
    puVar8 = (uint *)(puVar2 + (pFVar3->ChangeMasksExternalOffset +
                                (pFVar3->ChangeMaskBitCount + 0x1f >> 5) * 4 + iVar7));
  }
  if (uVar1 + 0x1f >> 5 != 0) {
    do {
      if (puVar8[uVar5] != 0) {
        return true;
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < uVar1 + 0x1f >> 5);
  }
  return false;
}

// IsInitState @ 144211b90

bool __thiscall UE::Net::FPropertyReplicationState::IsInitState(FPropertyReplicationState *this)

{
  FReplicationStateDescriptor *pFVar1;
  
  if (((this->StateBuffer != (uchar *)0x0) &&
      (pFVar1 = (this->ReplicationStateDescriptor).Reference,
      pFVar1 != (FReplicationStateDescriptor *)0x0)) && ((pFVar1->Traits & InitOnly) != None)) {
    return true;
  }
  return false;
}

// IsValid @ 144212400

bool __thiscall UE::Net::FPropertyReplicationState::IsValid(FPropertyReplicationState *this)

{
  if ((this->StateBuffer != (uchar *)0x0) &&
     ((this->ReplicationStateDescriptor).Reference != (FReplicationStateDescriptor *)0x0)) {
    return true;
  }
  return false;
}

// MarkArrayDirty @ 144212650

void __thiscall
UE::Net::FPropertyReplicationState::MarkArrayDirty(FPropertyReplicationState *this,uint param_1)

{
  ushort uVar1;
  uint uVar2;
  FReplicationStateMemberChangeMaskDescriptor FVar3;
  FReplicationStateDescriptor *pFVar4;
  uchar *puVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  uint *puVar9;
  FNetBitArrayView local_18;
  
  pFVar4 = (this->ReplicationStateDescriptor).Reference;
  if ((pFVar4->Traits >> 0xb & 1) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = (ulonglong)pFVar4->ChangeMasksExternalOffset - 4;
  }
  puVar5 = this->StateBuffer;
  if (((puVar5 == (uchar *)0x0) || (pFVar4 == (FReplicationStateDescriptor *)0x0)) ||
     ((pFVar4->Traits & InitOnly) == None)) {
    uVar1 = pFVar4->ChangeMaskBitCount;
    local_18.BitCount = (uint)uVar1;
    local_18.WordCount = uVar1 + 0x1f >> 5;
    puVar9 = &local_18.BitCount;
    if (uVar1 != 0) {
      puVar9 = (uint *)(puVar5 + pFVar4->ChangeMasksExternalOffset);
    }
    FVar3 = pFVar4->MemberChangeMaskDescriptors[param_1];
    local_18.Storage = puVar9;
    if ((*(uint *)(puVar5 + lVar8) & 0x3fffffff) != 0) {
      if ((uint)uVar1 <= ((uint)FVar3 & 0xffff)) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index < BitCount",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                           ,0x2c1,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if ((puVar9[((uint)FVar3 & 0xffff) >> 5] >> ((uint)FVar3 & 0x1f) & 1) == 0) {
        *(uint *)(puVar5 + lVar8) = *(uint *)(puVar5 + lVar8) | 0x80000000;
      }
    }
    FNetBitArrayView::SetBits(&local_18,(uint)FVar3 & 0xffff,1);
  }
  else {
    uVar2 = *(uint *)(puVar5 + lVar8);
    if (((uVar2 >> 0x1e & 1) == 0) &&
       (*(uint *)(puVar5 + lVar8) = uVar2 | 0x40000000, (uVar2 & 0x3fffffff) != 0)) {
      *(uint *)(puVar5 + lVar8) = uVar2 | 0xc0000000;
      return;
    }
  }
  return;
}

// MarkDirty @ 144212870

void __thiscall
UE::Net::FPropertyReplicationState::MarkDirty(FPropertyReplicationState *this,uint param_1)

{
  FReplicationStateHeader *pFVar1;
  FReplicationStateHeader FVar2;
  FReplicationStateDescriptor *pFVar3;
  uchar *puVar4;
  FReplicationStateHeader FVar5;
  longlong lVar6;
  FNetBitArrayView local_18;
  
  pFVar3 = (this->ReplicationStateDescriptor).Reference;
  if ((pFVar3->Traits >> 0xb & 1) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)pFVar3->ChangeMasksExternalOffset - 4;
  }
  puVar4 = this->StateBuffer;
  pFVar1 = (FReplicationStateHeader *)(puVar4 + lVar6);
  if (((puVar4 == (uchar *)0x0) || (pFVar3 == (FReplicationStateDescriptor *)0x0)) ||
     ((pFVar3->Traits & InitOnly) == None)) {
    local_18.BitCount = (uint)pFVar3->ChangeMaskBitCount;
    local_18.WordCount = pFVar3->ChangeMaskBitCount + 0x1f >> 5;
    local_18.Storage = &local_18.BitCount;
    if (local_18.BitCount != 0) {
      local_18.Storage = (uint *)(puVar4 + pFVar3->ChangeMasksExternalOffset);
    }
    Net::Private::MarkDirty(pFVar1,&local_18,pFVar3->MemberChangeMaskDescriptors + param_1);
  }
  else {
    FVar2 = *pFVar1;
    if ((pFVar1->bInitStateIsDirty == 0) &&
       (*pFVar1 = (FReplicationStateHeader)((uint)FVar2 | 0x40000000), pFVar1->NetHandleId != 0)) {
      *pFVar1 = (FReplicationStateHeader)((uint)FVar2 | 0xc0000000);
      return;
    }
  }
  return;
}

// PollObjectReferences @ 144213360

bool __thiscall
UE::Net::FPropertyReplicationState::PollObjectReferences
          (FPropertyReplicationState *this,void *param_1)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  uint uVar3;
  ushort *puVar5;
  FProperty **ppFVar6;
  FReplicationStateMemberTraitsDescriptor *pFVar7;
  ulonglong uVar8;
  ulonglong uVar4;
  
  uVar8 = 0;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    ppFVar6 = pFVar2->MemberProperties;
    pFVar7 = pFVar2->MemberTraitsDescriptors;
    uVar1 = pFVar2->MemberCount;
    if (uVar1 != 0) {
      puVar5 = &pFVar2->MemberPropertyDescriptors->ArrayIndex;
      uVar4 = uVar8;
      do {
        if ((pFVar7->Traits & HasObjectReference) != None) {
          PollPropertyValue(this,(uint)uVar4,
                            (void *)((longlong)param_1 +
                                    (longlong)(*ppFVar6)->Offset_Internal +
                                    (longlong)(int)((uint)*puVar5 * (*ppFVar6)->ElementSize)));
        }
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        pFVar7 = pFVar7 + 1;
        ppFVar6 = ppFVar6 + 1;
        puVar5 = puVar5 + 8;
      } while (uVar3 < uVar1);
    }
  }
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    if ((pFVar2->Traits & IsNativeFastArrayReplicationState) != None) {
      uVar8 = (ulonglong)pFVar2->ChangeMasksExternalOffset - 4;
    }
    uVar3 = *(uint *)(this->StateBuffer + uVar8);
    if (((int)uVar3 < 0) || ((uVar3 >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// PollPropertyReplicationState @ 144213480

bool __thiscall
UE::Net::FPropertyReplicationState::PollPropertyReplicationState
          (FPropertyReplicationState *this,void *param_1)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  uint uVar3;
  ulonglong uVar5;
  ushort *puVar6;
  FProperty **ppFVar7;
  bool bVar8;
  ulonglong uVar4;
  
  uVar5 = 0;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    bVar8 = -1 < CpuChannel->Enabled;
    if (bVar8) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (pFVar2->DebugName->Name,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                 ,0x11d);
    }
    uVar1 = pFVar2->MemberCount;
    ppFVar7 = pFVar2->MemberProperties;
    if (uVar1 != 0) {
      puVar6 = &pFVar2->MemberPropertyDescriptors->ArrayIndex;
      uVar4 = uVar5;
      do {
        PollPropertyValue(this,(uint)uVar4,
                          (void *)((longlong)param_1 +
                                  (longlong)(*ppFVar7)->Offset_Internal +
                                  (longlong)(int)((uint)*puVar6 * (*ppFVar7)->ElementSize)));
        uVar3 = (uint)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        ppFVar7 = ppFVar7 + 1;
        puVar6 = puVar6 + 8;
      } while (uVar3 < uVar1);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    if ((pFVar2->Traits & IsNativeFastArrayReplicationState) != None) {
      uVar5 = (ulonglong)pFVar2->ChangeMasksExternalOffset - 4;
    }
    uVar3 = *(uint *)(this->StateBuffer + uVar5);
    if (((int)uVar3 < 0) || ((uVar3 >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// PollPropertyValue @ 1442135c0

void __thiscall
UE::Net::FPropertyReplicationState::PollPropertyValue
          (FPropertyReplicationState *this,uint param_1,void *param_2)

{
  uint *puVar1;
  FReplicationStateHeader *pFVar2;
  ushort uVar3;
  uint uVar4;
  FReplicationStateMemberChangeMaskDescriptor FVar5;
  FReplicationStateHeader FVar6;
  FReplicationStateDescriptor *pFVar7;
  FReplicationStateMemberChangeMaskDescriptor *pFVar8;
  FReplicationStateDescriptor *pFVar9;
  uchar *puVar10;
  code *pcVar11;
  FReplicationStateHeader FVar12;
  bool bVar13;
  longlong lVar14;
  uchar *puVar15;
  uint *puVar16;
  FNetBitArrayView local_48;
  FNetBitArrayView local_38;
  FNetBitArrayView local_28;
  
  pFVar7 = (this->ReplicationStateDescriptor).Reference;
  puVar15 = this->StateBuffer + pFVar7->MemberDescriptors[param_1].ExternalMemberOffset;
  if (((pFVar7->MemberSerializerDescriptors[param_1].Serializer !=
        &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) ||
      (((pFVar8 = pFVar7->MemberChangeMaskDescriptors, this->StateBuffer != (uchar *)0x0 &&
        (pFVar7 != (FReplicationStateDescriptor *)0x0)) && ((pFVar7->Traits & InitOnly) != None))))
     || ((bVar13 = IsCustomConditionEnabled(this,param_1), !bVar13 || (pFVar8[param_1].BitCount < 2)
         ))) {
    bVar13 = IsDirty(this,param_1);
    if (((!bVar13) && (bVar13 = IsCustomConditionEnabled(this,param_1), bVar13)) &&
       (bVar13 = Net::Private::InternalCompareMember(pFVar7,param_1,param_2,puVar15), !bVar13)) {
      pFVar9 = (this->ReplicationStateDescriptor).Reference;
      if ((pFVar9->Traits >> 0xb & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (ulonglong)pFVar9->ChangeMasksExternalOffset - 4;
      }
      puVar10 = this->StateBuffer;
      pFVar2 = (FReplicationStateHeader *)(puVar10 + lVar14);
      if (((puVar10 == (uchar *)0x0) || (pFVar9 == (FReplicationStateDescriptor *)0x0)) ||
         ((pFVar9->Traits & InitOnly) == None)) {
        local_28.BitCount = (uint)pFVar9->ChangeMaskBitCount;
        local_28.WordCount = pFVar9->ChangeMaskBitCount + 0x1f >> 5;
        local_28.Storage = &local_28.BitCount;
        if (local_28.BitCount != 0) {
          local_28.Storage = (uint *)(puVar10 + pFVar9->ChangeMasksExternalOffset);
        }
        Net::Private::MarkDirty(pFVar2,&local_28,pFVar9->MemberChangeMaskDescriptors + param_1);
      }
      else {
        FVar6 = *pFVar2;
        if ((pFVar2->bInitStateIsDirty == 0) &&
           (*pFVar2 = (FReplicationStateHeader)((uint)FVar6 | 0x40000000), pFVar2->NetHandleId != 0)
           ) {
          *pFVar2 = (FReplicationStateHeader)((uint)FVar6 | 0xc0000000);
        }
      }
    }
    Net::Private::InternalCopyPropertyValue(pFVar7,param_1,puVar15,param_2);
    return;
  }
  local_48.BitCount = (uint)pFVar7->ChangeMaskBitCount;
  local_48.WordCount = pFVar7->ChangeMaskBitCount + 0x1f >> 5;
  local_48.Storage = &local_48.BitCount;
  if (local_48.BitCount != 0) {
    local_48.Storage = (uint *)(this->StateBuffer + pFVar7->ChangeMasksExternalOffset);
  }
  bVar13 = Net::Private::InternalCompareAndCopyArrayWithElementChangeMask
                     (pFVar7,param_1,puVar15,param_2,&local_48);
  puVar1 = local_48.Storage;
  if (bVar13) {
    return;
  }
  uVar3 = pFVar8[param_1].BitOffset;
  if ((local_48.BitCount <= uVar3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < BitCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x2c1,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((puVar1[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
    return;
  }
  pFVar7 = (this->ReplicationStateDescriptor).Reference;
  if ((pFVar7->Traits >> 0xb & 1) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (ulonglong)pFVar7->ChangeMasksExternalOffset - 4;
  }
  puVar15 = this->StateBuffer;
  puVar1 = (uint *)(puVar15 + lVar14);
  if (((puVar15 != (uchar *)0x0) && (pFVar7 != (FReplicationStateDescriptor *)0x0)) &&
     ((pFVar7->Traits & InitOnly) != None)) {
    uVar4 = *puVar1;
    if ((uVar4 >> 0x1e & 1) != 0) {
      return;
    }
    *puVar1 = uVar4 | 0x40000000;
    if ((uVar4 & 0x3fffffff) == 0) {
      return;
    }
    *puVar1 = uVar4 | 0xc0000000;
    return;
  }
  uVar3 = pFVar7->ChangeMaskBitCount;
  local_38.BitCount = (uint)uVar3;
  local_38.WordCount = uVar3 + 0x1f >> 5;
  puVar16 = &local_38.BitCount;
  if (uVar3 != 0) {
    puVar16 = (uint *)(puVar15 + pFVar7->ChangeMasksExternalOffset);
  }
  FVar5 = pFVar7->MemberChangeMaskDescriptors[param_1];
  local_38.Storage = puVar16;
  if ((*puVar1 & 0x3fffffff) != 0) {
    if (((uint)uVar3 <= ((uint)FVar5 & 0xffff)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < BitCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x2c1,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((puVar16[((uint)FVar5 & 0xffff) >> 5] >> ((uint)FVar5 & 0x1f) & 1) == 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  FNetBitArrayView::SetBits(&local_38,(uint)FVar5 & 0xffff,1);
  return;
}

// PollPushBasedPropertyReplicationState @ 1442138f0

bool __thiscall
UE::Net::FPropertyReplicationState::PollPushBasedPropertyReplicationState
          (FPropertyReplicationState *this,void *param_1,FPollParameters *param_2)

{
  ushort uVar1;
  ushort uVar2;
  FReplicationStateDescriptor *pFVar3;
  FReplicationStateDescriptor *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  wchar_t *pwVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  FReplicationStateMemberTraitsDescriptor *pFVar16;
  longlong local_78;
  ulonglong local_70;
  ushort *local_68;
  uint *local_60;
  uint local_54;
  FProperty **local_50;
  
  uVar15 = 0;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar3 = (this->ReplicationStateDescriptor).Reference,
     pFVar3 != (FReplicationStateDescriptor *)0x0)) {
    if ((param_2->bEnableVerboseProfiling == false) || (CpuChannel->Enabled < 0)) {
      bVar8 = false;
      bVar7 = false;
    }
    else {
      bVar8 = true;
      bVar7 = true;
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (pFVar3->DebugName->Name,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                 ,0x13b);
    }
    local_50 = pFVar3->MemberProperties;
    uVar1 = pFVar3->MemberCount;
    pFVar16 = pFVar3->MemberTraitsDescriptors;
    if (uVar1 != 0) {
      local_68 = &pFVar3->MemberPropertyDescriptors->ArrayIndex;
      uVar14 = 1;
      local_78 = 0;
      local_70 = 0;
      uVar13 = uVar15;
      do {
        uVar12 = (uint)uVar13;
        if ((param_2->bForceRefreshObjectReferences == false) ||
           ((pFVar16->Traits & HasObjectReference) == None)) {
          bVar8 = true;
          if ((pFVar16->Traits & HasPushBasedDirtiness) == None) goto LAB_144213ab4;
          bVar8 = IsDirty(this,uVar12);
          if (bVar8) goto LAB_144213ab0;
          pFVar4 = (this->ReplicationStateDescriptor).Reference;
          uVar2 = pFVar4->MemberCount;
          iVar11 = 0;
          if ((pFVar4->Traits & HasLifetimeConditionals) != None) {
            iVar11 = (pFVar4->ChangeMaskBitCount + 0x1f >> 5) << 2;
          }
          local_54 = (uint)uVar2;
          local_60 = (uint *)(this->StateBuffer +
                             (pFVar4->ChangeMasksExternalOffset +
                              (pFVar4->ChangeMaskBitCount + 0x1f >> 5) * 4 + iVar11));
          if (uVar2 == 0) {
            local_60 = &local_54;
LAB_144213a71:
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index < BitCount",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                               ,0x2c1,L"");
            if (bVar8) {
              pcVar5 = (code *)swi(3);
              uVar9 = (*pcVar5)();
              return (bool)uVar9;
            }
          }
          else if (uVar2 <= uVar12) goto LAB_144213a71;
          if ((local_60[local_70 >> 5] & uVar14) != 0) goto LAB_144213ab0;
        }
        else {
LAB_144213ab0:
          bVar8 = (pFVar16->Traits & HasPushBasedDirtiness) == None;
LAB_144213ab4:
          pwVar10 = L"AlwaysPolled";
          if (!bVar8) {
            pwVar10 = L"PushBased";
          }
          if ((param_2->bEnableVerboseProfiling == false) || (CpuChannel->Enabled < 0)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
            FCpuProfilerTrace::OutputBeginDynamicEvent
                      (pwVar10,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x149);
          }
          if ((param_2->bEnableVerboseProfiling == false) || (CpuChannel->Enabled < 0)) {
            bVar6 = false;
          }
          else {
            bVar6 = true;
            FCpuProfilerTrace::OutputBeginDynamicEvent
                      ((wchar_t *)
                       **(undefined8 **)
                         ((longlong)&pFVar3->MemberDebugDescriptors->DebugName + local_78),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                       ,0x14a);
          }
          PollPropertyValue(this,uVar12,
                            (void *)((longlong)param_1 +
                                    (longlong)
                                    *(int *)(*(longlong *)(local_78 + (longlong)local_50) + 0x44) +
                                    (longlong)
                                    (int)((uint)*local_68 *
                                         *(int *)(*(longlong *)(local_78 + (longlong)local_50) +
                                                 0x34))));
          if (bVar6) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
        }
        local_78 = local_78 + 8;
        local_70 = local_70 + 1;
        local_68 = local_68 + 8;
        uVar13 = (ulonglong)(uVar12 + 1);
        pFVar16 = pFVar16 + 1;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        bVar8 = bVar7;
      } while (uVar12 + 1 < (uint)uVar1);
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar3 = (this->ReplicationStateDescriptor).Reference,
     pFVar3 != (FReplicationStateDescriptor *)0x0)) {
    if ((pFVar3->Traits & IsNativeFastArrayReplicationState) != None) {
      uVar15 = (ulonglong)pFVar3->ChangeMasksExternalOffset - 4;
    }
    uVar14 = *(uint *)(this->StateBuffer + uVar15);
    if (((int)uVar14 < 0) || ((uVar14 >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// PushPropertyReplicationState @ 144214db0

void __thiscall
UE::Net::FPropertyReplicationState::PushPropertyReplicationState
          (FPropertyReplicationState *this,UObject *param_1,void *param_2,bool param_3)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  uint *puVar3;
  FReplicationStateDescriptor *pFVar4;
  uchar *puVar5;
  bool bVar6;
  bool bVar7;
  ushort *puVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  FNetBitArrayView local_48;
  
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    bVar12 = -1 < CpuChannel->Enabled;
    if (bVar12) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (pFVar2->DebugName->Name,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                 ,0x18c);
    }
    puVar3 = (uint *)pFVar2->MemberProperties;
    uVar1 = pFVar2->MemberCount;
    if ((param_3) ||
       (((this->StateBuffer != (uchar *)0x0 &&
         (pFVar4 = (this->ReplicationStateDescriptor).Reference,
         pFVar4 != (FReplicationStateDescriptor *)0x0)) && ((pFVar4->Traits & InitOnly) != None))))
    {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    uVar9 = 0;
    local_48.Storage = puVar3;
    if (uVar1 != 0) {
      puVar8 = &pFVar2->MemberPropertyDescriptors->ArrayIndex;
      lVar10 = 0;
      lVar11 = 0;
      do {
        if (bVar6) {
LAB_144214f1b:
          pFVar2 = (this->ReplicationStateDescriptor).Reference;
          Net::Private::InternalApplyPropertyValue
                    (pFVar2,uVar9,
                     (void *)((longlong)param_2 +
                             (longlong)*(int *)(*(longlong *)(lVar10 + (longlong)puVar3) + 0x44) +
                             (longlong)
                             (int)((uint)*puVar8 *
                                  *(int *)(*(longlong *)(lVar10 + (longlong)puVar3) + 0x34))),
                     this->StateBuffer +
                     *(uint *)((longlong)&pFVar2->MemberDescriptors->ExternalMemberOffset + lVar10))
          ;
        }
        else {
          puVar5 = this->StateBuffer;
          pFVar2 = (this->ReplicationStateDescriptor).Reference;
          if (((puVar5 == (uchar *)0x0) || (pFVar2 == (FReplicationStateDescriptor *)0x0)) ||
             ((pFVar2->Traits & InitOnly) == None)) {
            local_48.BitCount = (uint)pFVar2->ChangeMaskBitCount;
            local_48.WordCount = pFVar2->ChangeMaskBitCount + 0x1f >> 5;
            local_48.Storage = &local_48.BitCount;
            if (local_48.BitCount != 0) {
              local_48.Storage = (uint *)(puVar5 + pFVar2->ChangeMasksExternalOffset);
            }
            bVar7 = FNetBitArrayView::IsAnyBitSet
                              (&local_48,
                               (uint)*(ushort *)
                                      ((longlong)&pFVar2->MemberChangeMaskDescriptors->BitOffset +
                                      lVar11),
                               (uint)*(ushort *)
                                      ((longlong)&pFVar2->MemberChangeMaskDescriptors->BitCount +
                                      lVar11));
          }
          else if ((pFVar2->Traits >> 0xb & 1) == 0) {
            bVar7 = (bool)((byte)((uint)*(undefined4 *)puVar5 >> 0x1e) & 1);
          }
          else {
            bVar7 = (bool)((byte)((uint)*(undefined4 *)
                                         (puVar5 + ((ulonglong)pFVar2->ChangeMasksExternalOffset - 4
                                                   )) >> 0x1e) & 1);
          }
          if (bVar7 != false) goto LAB_144214f1b;
        }
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 4;
        lVar10 = lVar10 + 8;
        puVar8 = puVar8 + 8;
      } while (uVar9 < uVar1);
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// PushPropertyValue @ 144214fb0

void __thiscall
UE::Net::FPropertyReplicationState::PushPropertyValue
          (FPropertyReplicationState *this,uint param_1,void *param_2)

{
  FReplicationStateDescriptor *pFVar1;
  
  pFVar1 = (this->ReplicationStateDescriptor).Reference;
  Net::Private::InternalApplyPropertyValue
            (pFVar1,param_1,param_2,
             this->StateBuffer + pFVar1->MemberDescriptors[param_1].ExternalMemberOffset);
  return;
}

// Set @ 144219b80

void __thiscall
UE::Net::FPropertyReplicationState::Set
          (FPropertyReplicationState *this,FPropertyReplicationState *param_1)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  uchar *puVar3;
  uint uVar4;
  FReplicationStateMemberDescriptor *pFVar5;
  
  if (((this->StateBuffer != (uchar *)0x0) &&
      (pFVar2 = (this->ReplicationStateDescriptor).Reference,
      pFVar2 != (FReplicationStateDescriptor *)0x0)) && (this != param_1)) {
    uVar4 = 0;
    uVar1 = pFVar2->MemberCount;
    pFVar5 = pFVar2->MemberDescriptors;
    puVar3 = param_1->StateBuffer;
    if (uVar1 != 0) {
      do {
        PollPropertyValue(this,uVar4,puVar3 + pFVar5->ExternalMemberOffset);
        uVar4 = uVar4 + 1;
        pFVar5 = pFVar5 + 1;
      } while (uVar4 < uVar1);
    }
  }
  return;
}

// SetPropertyValue @ 14421b5f0

void __thiscall
UE::Net::FPropertyReplicationState::SetPropertyValue
          (FPropertyReplicationState *this,uint param_1,void *param_2)

{
  uint *puVar1;
  FReplicationStateHeader *pFVar2;
  ushort uVar3;
  uint uVar4;
  FReplicationStateMemberChangeMaskDescriptor FVar5;
  FReplicationStateHeader FVar6;
  FReplicationStateDescriptor *pFVar7;
  FReplicationStateMemberChangeMaskDescriptor *pFVar8;
  FReplicationStateDescriptor *pFVar9;
  uchar *puVar10;
  code *pcVar11;
  FReplicationStateHeader FVar12;
  bool bVar13;
  longlong lVar14;
  uchar *puVar15;
  uint *puVar16;
  FNetBitArrayView FStack_48;
  FNetBitArrayView FStack_38;
  FNetBitArrayView FStack_28;
  
  pFVar7 = (this->ReplicationStateDescriptor).Reference;
  puVar15 = this->StateBuffer + pFVar7->MemberDescriptors[param_1].ExternalMemberOffset;
  if (((pFVar7->MemberSerializerDescriptors[param_1].Serializer !=
        &FArrayPropertyNetSerializerNetSerializerInfo::Serializer) ||
      (((pFVar8 = pFVar7->MemberChangeMaskDescriptors, this->StateBuffer != (uchar *)0x0 &&
        (pFVar7 != (FReplicationStateDescriptor *)0x0)) && ((pFVar7->Traits & InitOnly) != None))))
     || ((bVar13 = IsCustomConditionEnabled(this,param_1), !bVar13 || (pFVar8[param_1].BitCount < 2)
         ))) {
    bVar13 = IsDirty(this,param_1);
    if (((!bVar13) && (bVar13 = IsCustomConditionEnabled(this,param_1), bVar13)) &&
       (bVar13 = Net::Private::InternalCompareMember(pFVar7,param_1,param_2,puVar15), !bVar13)) {
      pFVar9 = (this->ReplicationStateDescriptor).Reference;
      if ((pFVar9->Traits >> 0xb & 1) == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = (ulonglong)pFVar9->ChangeMasksExternalOffset - 4;
      }
      puVar10 = this->StateBuffer;
      pFVar2 = (FReplicationStateHeader *)(puVar10 + lVar14);
      if (((puVar10 == (uchar *)0x0) || (pFVar9 == (FReplicationStateDescriptor *)0x0)) ||
         ((pFVar9->Traits & InitOnly) == None)) {
        FStack_28.BitCount = (uint)pFVar9->ChangeMaskBitCount;
        FStack_28.WordCount = pFVar9->ChangeMaskBitCount + 0x1f >> 5;
        FStack_28.Storage = &FStack_28.BitCount;
        if (FStack_28.BitCount != 0) {
          FStack_28.Storage = (uint *)(puVar10 + pFVar9->ChangeMasksExternalOffset);
        }
        Net::Private::MarkDirty(pFVar2,&FStack_28,pFVar9->MemberChangeMaskDescriptors + param_1);
      }
      else {
        FVar6 = *pFVar2;
        if ((pFVar2->bInitStateIsDirty == 0) &&
           (*pFVar2 = (FReplicationStateHeader)((uint)FVar6 | 0x40000000), pFVar2->NetHandleId != 0)
           ) {
          *pFVar2 = (FReplicationStateHeader)((uint)FVar6 | 0xc0000000);
        }
      }
    }
    Net::Private::InternalCopyPropertyValue(pFVar7,param_1,puVar15,param_2);
    return;
  }
  FStack_48.BitCount = (uint)pFVar7->ChangeMaskBitCount;
  FStack_48.WordCount = pFVar7->ChangeMaskBitCount + 0x1f >> 5;
  FStack_48.Storage = &FStack_48.BitCount;
  if (FStack_48.BitCount != 0) {
    FStack_48.Storage = (uint *)(this->StateBuffer + pFVar7->ChangeMasksExternalOffset);
  }
  bVar13 = Net::Private::InternalCompareAndCopyArrayWithElementChangeMask
                     (pFVar7,param_1,puVar15,param_2,&FStack_48);
  puVar1 = FStack_48.Storage;
  if (bVar13) {
    return;
  }
  uVar3 = pFVar8[param_1].BitOffset;
  if ((FStack_48.BitCount <= uVar3) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index < BitCount",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                          ,0x2c1,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((puVar1[uVar3 >> 5] >> (uVar3 & 0x1f) & 1) != 0) {
    return;
  }
  pFVar7 = (this->ReplicationStateDescriptor).Reference;
  if ((pFVar7->Traits >> 0xb & 1) == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (ulonglong)pFVar7->ChangeMasksExternalOffset - 4;
  }
  puVar15 = this->StateBuffer;
  puVar1 = (uint *)(puVar15 + lVar14);
  if (((puVar15 != (uchar *)0x0) && (pFVar7 != (FReplicationStateDescriptor *)0x0)) &&
     ((pFVar7->Traits & InitOnly) != None)) {
    uVar4 = *puVar1;
    if ((uVar4 >> 0x1e & 1) != 0) {
      return;
    }
    *puVar1 = uVar4 | 0x40000000;
    if ((uVar4 & 0x3fffffff) == 0) {
      return;
    }
    *puVar1 = uVar4 | 0xc0000000;
    return;
  }
  uVar3 = pFVar7->ChangeMaskBitCount;
  FStack_38.BitCount = (uint)uVar3;
  FStack_38.WordCount = uVar3 + 0x1f >> 5;
  puVar16 = &FStack_38.BitCount;
  if (uVar3 != 0) {
    puVar16 = (uint *)(puVar15 + pFVar7->ChangeMasksExternalOffset);
  }
  FVar5 = pFVar7->MemberChangeMaskDescriptors[param_1];
  FStack_38.Storage = puVar16;
  if ((*puVar1 & 0x3fffffff) != 0) {
    if (((uint)uVar3 <= ((uint)FVar5 & 0xffff)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index < BitCount",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\NetBitArray.h"
                            ,0x2c1,L""), bVar13)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((puVar16[((uint)FVar5 & 0xffff) >> 5] >> ((uint)FVar5 & 0x1f) & 1) == 0) {
      *puVar1 = *puVar1 | 0x80000000;
    }
  }
  FNetBitArrayView::SetBits(&FStack_38,(uint)FVar5 & 0xffff,1);
  return;
}

// StoreCurrentPropertyReplicationStateForRepNotifies @ 14421be30

bool __thiscall
UE::Net::FPropertyReplicationState::StoreCurrentPropertyReplicationStateForRepNotifies
          (FPropertyReplicationState *this,void *param_1,FPropertyReplicationState *param_2)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  FProperty **ppFVar3;
  FReplicationStateDescriptor *pFVar4;
  uchar *puVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  ulonglong uVar9;
  FReplicationStateMemberPropertyDescriptor *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  FNetBitArrayView local_58;
  
  uVar9 = 0;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    bVar15 = -1 < CpuChannel->Enabled;
    if (bVar15) {
      FCpuProfilerTrace::OutputBeginDynamicEvent
                (pFVar2->DebugName->Name,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Iris\\Private\\Iris\\ReplicationState\\PropertyReplicationState.cpp"
                 ,0x160);
    }
    ppFVar3 = pFVar2->MemberProperties;
    uVar1 = pFVar2->MemberCount;
    pFVar10 = pFVar2->MemberPropertyDescriptors;
    if ((((this->StateBuffer == (uchar *)0x0) ||
         (pFVar4 = (this->ReplicationStateDescriptor).Reference,
         pFVar4 == (FReplicationStateDescriptor *)0x0)) || ((pFVar4->Traits & InitOnly) == None)) &&
       (param_2 != (FPropertyReplicationState *)0x0)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    uVar12 = uVar9;
    uVar13 = uVar9;
    uVar14 = uVar9;
    if (uVar1 != 0) {
      do {
        if (pFVar10->RepNotifyFunction != (UFunction *)0x0) {
          if (!bVar7) {
            puVar5 = param_2->StateBuffer;
            pFVar4 = (param_2->ReplicationStateDescriptor).Reference;
            if (((puVar5 == (uchar *)0x0) || (pFVar4 == (FReplicationStateDescriptor *)0x0)) ||
               ((pFVar4->Traits & InitOnly) == None)) {
              local_58.BitCount = (uint)pFVar4->ChangeMaskBitCount;
              local_58.WordCount = pFVar4->ChangeMaskBitCount + 0x1f >> 5;
              local_58.Storage = &local_58.BitCount;
              if (local_58.BitCount != 0) {
                local_58.Storage = (uint *)(puVar5 + pFVar4->ChangeMasksExternalOffset);
              }
              bVar8 = FNetBitArrayView::IsAnyBitSet
                                (&local_58,
                                 (uint)*(ushort *)
                                        ((longlong)&pFVar4->MemberChangeMaskDescriptors->BitOffset +
                                        uVar14),
                                 (uint)*(ushort *)
                                        ((longlong)&pFVar4->MemberChangeMaskDescriptors->BitCount +
                                        uVar14));
            }
            else if ((pFVar4->Traits >> 0xb & 1) == 0) {
              bVar8 = (bool)((byte)((uint)*(undefined4 *)puVar5 >> 0x1e) & 1);
            }
            else {
              bVar8 = (bool)((byte)((uint)*(undefined4 *)
                                           (puVar5 + ((ulonglong)pFVar4->ChangeMasksExternalOffset -
                                                     4)) >> 0x1e) & 1);
            }
            if (bVar8 == false) goto LAB_14421bffd;
          }
          lVar6 = *(longlong *)(uVar13 + (longlong)ppFVar3);
          Net::Private::InternalCopyPropertyValue
                    (pFVar2,(uint)uVar12,
                     this->StateBuffer +
                     *(uint *)((longlong)&pFVar2->MemberDescriptors->ExternalMemberOffset + uVar13),
                     (void *)((longlong)param_1 +
                             (longlong)*(int *)(lVar6 + 0x44) +
                             (longlong)(int)((uint)pFVar10->ArrayIndex * *(int *)(lVar6 + 0x34))));
        }
LAB_14421bffd:
        uVar11 = (uint)uVar12 + 1;
        pFVar10 = pFVar10 + 1;
        uVar12 = (ulonglong)uVar11;
        uVar13 = uVar13 + 8;
        uVar14 = uVar14 + 4;
      } while (uVar11 < uVar1);
    }
    if (bVar15) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    if ((pFVar2->Traits & IsNativeFastArrayReplicationState) != None) {
      uVar9 = (ulonglong)pFVar2->ChangeMasksExternalOffset - 4;
    }
    uVar11 = *(uint *)(this->StateBuffer + uVar9);
    if (((int)uVar11 < 0) || ((uVar11 >> 0x1e & 1) != 0)) {
      return true;
    }
  }
  return false;
}

// ToString @ 14421c0b0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::Net::FPropertyReplicationState::ToString
          (FPropertyReplicationState *this,FString *__return_storage_ptr__,bool param_1)

{
  undefined1 auStack_1058 [32];
  TStringBuilderBase<wchar_t> local_1038;
  wchar_t local_1018 [2048];
  ulonglong local_18 [2];
  
  local_18[1] = 0x14421c0bc;
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_1058;
  local_1038.Base = local_1018;
  local_1038.bIsDynamic = false;
  local_1038.bIsExternal = false;
  local_1038.CurPos = local_1018;
  local_1038.End = (wchar_t *)local_18;
  ToString(this,&local_1038,param_1);
  if (local_1038.End < local_1038.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_1038,1);
  }
  *local_1038.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_1038.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1038);
  return __return_storage_ptr__;
}

// ToString @ 14421c170

wchar_t * __thiscall
UE::Net::FPropertyReplicationState::ToString
          (FPropertyReplicationState *this,TStringBuilderBase<wchar_t> *param_1,bool param_2)

{
  ushort uVar1;
  FReplicationStateDescriptor *pFVar2;
  FProperty **ppFVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar9;
  FString local_58;
  FString local_48;
  ulonglong uVar8;
  
  uVar8 = 0;
  if ((this->StateBuffer != (uchar *)0x0) &&
     (pFVar2 = (this->ReplicationStateDescriptor).Reference,
     pFVar2 != (FReplicationStateDescriptor *)0x0)) {
    ppFVar3 = pFVar2->MemberProperties;
    uVar1 = pFVar2->MemberCount;
    TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"FPropertyReplicationState %s\n");
    if ((param_2) || ((pFVar2->Traits & InitOnly) != None)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    uVar9 = uVar8;
    if (uVar1 != 0) {
      do {
        plVar4 = *(longlong **)(uVar9 + (longlong)ppFVar3);
        if ((bVar5) || (bVar6 = IsDirty(this,(uint)uVar8), bVar6)) {
          (**(code **)(*plVar4 + 0xe0))
                    (plVar4,&local_58,
                     this->StateBuffer +
                     *(uint *)((longlong)&pFVar2->MemberDescriptors->ExternalMemberOffset + uVar9),0
                     ,this->StateBuffer +
                      *(uint *)((longlong)&pFVar2->MemberDescriptors->ExternalMemberOffset + uVar9),
                     0,0x8022000,0);
          bVar6 = IsThisNotNull(plVar4,"FField::GetName");
          if (bVar6) {
            ::FName::ToString((FName *)(plVar4 + 4),&local_48);
          }
          else {
            ::FString::FString(&local_48,L"None");
          }
          TStringBuilderBase<wchar_t>::AppendfImpl(param_1,L"%u - %s : %s\n");
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          ::FString::Reset(&local_58,0);
        }
        uVar7 = (uint)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar9 = uVar9 + 8;
      } while (uVar7 < uVar1);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (param_1->End < param_1->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(param_1,1);
  }
  *param_1->CurPos = L'\0';
  return param_1->Base;
}

