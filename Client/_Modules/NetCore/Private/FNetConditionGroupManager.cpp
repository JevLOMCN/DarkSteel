// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 6

// CountBytes @ 1441d79a0

void __thiscall
UE::Net::FNetConditionGroupManager::CountBytes(FNetConditionGroupManager *this,FArchive *param_1)

{
  longlong lVar1;
  
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)*(int *)&(this->SubObjectGroupMap).field_0x8 << 6,
             (longlong)*(int *)&(this->SubObjectGroupMap).field_0xc << 6);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(ulonglong)(*(int *)&(this->SubObjectGroupMap).field_0x28 + 0x1fU >> 5) << 2,
             (ulonglong)(*(int *)&(this->SubObjectGroupMap).field_0x2c + 0x1fU >> 5) << 2);
  lVar1 = (longlong)*(int *)&(this->SubObjectGroupMap).field_0x48 << 2;
                    /* WARNING: Could not recover jumptable at 0x0001441d798b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,lVar1,lVar1);
  return;
}

// RegisterSubObjectInGroup @ 1441e5220

void __thiscall
UE::Net::FNetConditionGroupManager::RegisterSubObjectInGroup
          (FNetConditionGroupManager *this,UObject *param_1,FName param_2)

{
  code *pcVar1;
  FObjectKey FVar2;
  bool bVar3;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  FName local_res20;
  UObject *local_38;
  FString local_30;
  
  local_res18 = param_2;
  if (((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(SubObject)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                         ,0x13,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (local_res18 == (FName)0x0) {
    if (param_1 == (UObject *)0x0) {
      ::FString::FString(&local_30,L"None");
    }
    else {
      local_res20.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
      local_res20.Number = *(uint *)&param_1->field_0x1c;
      ::FName::ToString(&local_res20,&local_30);
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!NetConditionGroup.IsNone()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                       ,0x14,L"%s was registered with invalid netcondition group NONE");
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar4 = 0;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  uVar5 = uVar4;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_38 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_38);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    FVar2 = local_res8;
    uVar4 = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    uVar5 = local_res8.ObjectSerialNumber;
    local_res8 = FVar2;
  }
  uVar7 = uVar4 - uVar5 ^ uVar5 >> 0xd;
  uVar4 = (-0x61c88647 - uVar7) - uVar5 ^ uVar7 << 8;
  uVar6 = (uVar5 - uVar4) - uVar7 ^ uVar4 >> 0xd;
  uVar7 = (uVar7 - uVar6) - uVar4 ^ uVar6 >> 0xc;
  uVar5 = (uVar4 - uVar6) - uVar7 ^ uVar7 << 0x10;
  uVar4 = (uVar6 - uVar5) - uVar7 ^ uVar5 >> 5;
  uVar6 = (uVar7 - uVar4) - uVar5 ^ uVar4 >> 3;
  uVar5 = (uVar5 - uVar6) - uVar4 ^ uVar6 << 10;
  this_00 = &TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
             ::FindOrAddImpl<FObjectKey>
                       ((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                         *)this,(uVar4 - uVar5) - uVar6 ^ uVar5 >> 0xf,&local_res8)->NetGroups;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
  AddUniqueImpl<FName_const_&>(this_00,&local_res18);
  return;
}

// RegisterSubObjectInMultipleGroups @ 1441e53f0

void __thiscall
UE::Net::FNetConditionGroupManager::RegisterSubObjectInMultipleGroups
          (FNetConditionGroupManager *this,UObject *param_1,TArrayView<FName,int> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  FObjectKey FVar3;
  bool bVar4;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  FName *pFVar10;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  UObject *local_res20;
  FName local_58;
  FString local_50 [2];
  
  if ((param_1 == (UObject *)0x0) || ((*(uint *)&param_1->field_0x8 >> 0x1e & 1) != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid(SubObject)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                       ,0x1c,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar8 = 0;
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    uVar6 = 0;
    if (param_1 == (UObject *)0x0) goto LAB_1441e549e;
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res20 = param_1;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
  local_res8.ObjectIndex = local_res10.ObjectIndex;
  local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  FVar3 = local_res8;
  iVar8 = local_res10.ObjectIndex;
  local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  uVar6 = local_res8.ObjectSerialNumber;
  local_res8 = FVar3;
LAB_1441e549e:
  uVar9 = iVar8 - uVar6 ^ uVar6 >> 0xd;
  uVar5 = (-0x61c88647 - uVar9) - uVar6 ^ uVar9 << 8;
  uVar7 = (uVar6 - uVar5) - uVar9 ^ uVar5 >> 0xd;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar7 >> 0xc;
  uVar6 = (uVar5 - uVar7) - uVar9 ^ uVar9 << 0x10;
  uVar5 = (uVar7 - uVar6) - uVar9 ^ uVar6 >> 5;
  uVar7 = (uVar9 - uVar5) - uVar6 ^ uVar5 >> 3;
  uVar6 = (uVar6 - uVar7) - uVar5 ^ uVar7 << 10;
  this_00 = &TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
             ::FindOrAddImpl<FObjectKey>
                       ((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                         *)this,(uVar5 - uVar6) - uVar7 ^ uVar6 >> 0xf,&local_res8)->NetGroups;
  pFVar10 = param_2->DataPtr;
  pFVar1 = pFVar10 + param_2->ArrayNum;
  if (pFVar10 != pFVar1) {
    if (param_1 == (UObject *)0x0) {
      do {
        local_res18 = *pFVar10;
        if (local_res18 == (FName)0x0) {
          ::FString::FString(local_50,L"None");
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!GroupName.IsNone()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                             ,0x22,L"%s was registered with invalid netcondition group NONE");
          if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
          }
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
        AddUniqueImpl<FName_const_&>(this_00,&local_res18);
        pFVar10 = pFVar10 + 1;
        if (pFVar10 == pFVar1) {
          return;
        }
      } while( true );
    }
    do {
      local_res18 = *pFVar10;
      if (local_res18 == (FName)0x0) {
        local_58.ComparisonIndex.Value = *(uint *)&param_1->field_0x18;
        local_58.Number = *(uint *)&param_1->field_0x1c;
        ::FName::ToString(&local_58,local_50);
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!GroupName.IsNone()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                           ,0x22,L"%s was registered with invalid netcondition group NONE");
        if (local_50[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50[0].Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<FName_const_&>(this_00,&local_res18);
      pFVar10 = pFVar10 + 1;
    } while (pFVar10 != pFVar1);
  }
  return;
}

// UnregisterSubObjectFromAllGroups @ 1441f01c0

void __thiscall
UE::Net::FNetConditionGroupManager::UnregisterSubObjectFromAllGroups
          (FNetConditionGroupManager *this,UObject *param_1)

{
  code *pcVar1;
  FObjectKey FVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                       ,0x4e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  uVar4 = 0;
  uVar5 = uVar4;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res18[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    FVar2 = local_res8;
    uVar4 = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
    uVar5 = local_res8.ObjectSerialNumber;
    local_res8 = FVar2;
  }
  if (*(int *)&(this->SubObjectGroupMap).field_0x8 != *(int *)&(this->SubObjectGroupMap).field_0x34)
  {
    uVar6 = uVar4 - uVar5 ^ uVar5 >> 0xd;
    uVar4 = (-0x61c88647 - uVar6) - uVar5 ^ uVar6 << 8;
    uVar7 = (uVar5 - uVar4) - uVar6 ^ uVar4 >> 0xd;
    uVar6 = (uVar6 - uVar7) - uVar4 ^ uVar7 >> 0xc;
    uVar5 = (uVar4 - uVar7) - uVar6 ^ uVar6 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 >> 5;
    uVar4 = (uVar6 - uVar7) - uVar5 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar4) - uVar7 ^ uVar4 << 10;
    TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
    ::RemoveImpl<FObjectKey>
              ((TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
                *)this,(uVar7 - uVar5) - uVar4 ^ uVar5 >> 0xf,&local_res8);
  }
  return;
}

// UnregisterSubObjectFromGroup @ 1441f0300

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Net::FNetConditionGroupManager::UnregisterSubObjectFromGroup
          (FNetConditionGroupManager *this,UObject *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *this_00;
  FObjectKey local_res8;
  FWeakObjectPtr local_res10;
  FName local_res18;
  UObject *local_res20;
  
  local_res18 = param_2;
  if (param_1 == (UObject *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubObject",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                       ,0x29,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res10.ObjectIndex = 0;
    local_res10.ObjectSerialNumber = 0;
    local_res20 = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
    local_res8.ObjectIndex = local_res10.ObjectIndex;
    local_res8.ObjectSerialNumber = local_res10.ObjectSerialNumber;
  }
  this_00 = &TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
             ::Find((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                     *)this,&local_res8)->NetGroups;
  if (this_00 != (TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *)0x0) {
    TArray<FName,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::RemoveSingleSwap
              (this_00,&local_res18,Default);
    if (this_00->ArrayNum == 0) {
      TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
      ::Remove((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                *)this,&local_res8);
    }
  }
  return;
}

// UnregisterSubObjectFromMultipleGroups @ 1441f03f0

void __thiscall
UE::Net::FNetConditionGroupManager::UnregisterSubObjectFromMultipleGroups
          (FNetConditionGroupManager *this,UObject *param_1,TArrayView<FName,int> *param_2)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  ForElementType<FName> FVar4;
  uint uVar5;
  ForElementType<FName> FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ForElementType<FName> FVar10;
  uint uVar11;
  FName *pFVar12;
  FObjectKey local_res10 [2];
  FWeakObjectPtr local_res20;
  UObject *local_48 [2];
  
  if ((param_1 == (UObject *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubObject",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Misc\\NetConditionGroupManager.cpp"
                         ,0x3a,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = 0;
  local_res10[0].ObjectIndex = 0;
  local_res10[0].ObjectSerialNumber = 0;
  if (param_1 != (UObject *)0x0) {
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    local_res20.ObjectIndex = 0;
    local_res20.ObjectSerialNumber = 0;
    local_48[0] = param_1;
    if (GC::GIsIncrementalReachabilityPending != false) {
      GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_48);
    local_res10[0].ObjectIndex = local_res20.ObjectIndex;
    local_res10[0].ObjectSerialNumber = local_res20.ObjectSerialNumber;
    uVar9 = (ulonglong)local_res20 >> 0x20;
  }
  FVar4 = (ForElementType<FName>)
          TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
          ::Find((TMapBase<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>_>
                  *)this,local_res10);
  if (FVar4 != (ForElementType<FName>)0x0) {
    pFVar12 = param_2->DataPtr;
    pFVar1 = pFVar12 + param_2->ArrayNum;
    if (pFVar12 != pFVar1) {
      do {
        FVar6 = FVar4;
        if (*(ForElementType<FName> *)((longlong)FVar4 + 0x20) != (ForElementType<FName>)0x0) {
          FVar6 = *(ForElementType<FName> *)((longlong)FVar4 + 0x20);
        }
        for (FVar10 = FVar6;
            FVar10 != (ForElementType<FName>)
                      ((longlong)FVar6 + (longlong)*(int *)((longlong)FVar4 + 0x28) * 8);
            FVar10 = (ForElementType<FName>)((longlong)FVar10 + 8)) {
          if (*(FName *)FVar10 == *pFVar12) {
            uVar5 = (uint)((longlong)FVar10 - (longlong)FVar6 >> 3);
            if (uVar5 != 0xffffffff) {
              uVar8 = 0;
              if ((int)(uVar5 + 1) <= *(int *)((longlong)FVar4 + 0x28)) {
                uVar8 = ~uVar5 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x458,
                                     L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                    ), bVar3)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              FVar6 = FVar4;
              if (*(ForElementType<FName> *)((longlong)FVar4 + 0x20) != (ForElementType<FName>)0x0)
              {
                FVar6 = *(ForElementType<FName> *)((longlong)FVar4 + 0x20);
              }
              iVar7 = *(int *)((longlong)FVar4 + 0x28) + ~uVar5;
              if (1 < iVar7) {
                iVar7 = 1;
              }
              if (iVar7 != 0) {
                memmove((void *)((longlong)FVar6 + (longlong)(int)uVar5 * 8),
                        (void *)((longlong)FVar6 +
                                (longlong)(*(int *)((longlong)FVar4 + 0x28) - iVar7) * 8),
                        (longlong)iVar7 << 3);
              }
              *(int *)((longlong)FVar4 + 0x28) = *(int *)((longlong)FVar4 + 0x28) + -1;
              Core::Private::
              ReallocShrink<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FName>_>
                        (8,4,(ForElementType<FName> *)FVar4,*(int *)((longlong)FVar4 + 0x28),
                         (int *)((longlong)FVar4 + 0x2c));
            }
            break;
          }
        }
        pFVar12 = pFVar12 + 1;
      } while (pFVar12 != pFVar1);
      uVar9 = (ulonglong)local_res10[0] >> 0x20;
    }
    if ((*(int *)((longlong)FVar4 + 0x28) == 0) &&
       (*(int *)&(this->SubObjectGroupMap).field_0x8 !=
        *(int *)&(this->SubObjectGroupMap).field_0x34)) {
      iVar7 = (int)uVar9;
      uVar11 = local_res10[0].ObjectIndex - iVar7 ^ (uint)(uVar9 >> 0xd);
      uVar5 = (-0x61c88647 - uVar11) - iVar7 ^ uVar11 << 8;
      uVar8 = (iVar7 - uVar5) - uVar11 ^ uVar5 >> 0xd;
      uVar11 = (uVar11 - uVar8) - uVar5 ^ uVar8 >> 0xc;
      uVar5 = (uVar5 - uVar8) - uVar11 ^ uVar11 << 0x10;
      uVar8 = (uVar8 - uVar5) - uVar11 ^ uVar5 >> 5;
      uVar11 = (uVar11 - uVar8) - uVar5 ^ uVar8 >> 3;
      uVar5 = (uVar5 - uVar11) - uVar8 ^ uVar11 << 10;
      TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
      ::RemoveImpl<FObjectKey>
                ((TSet<TTuple<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::Net::FNetConditionGroupManager::FSubObjectGroupInfo,0>,FDefaultSetAllocator>
                  *)this,(uVar8 - uVar5) - uVar11 ^ uVar5 >> 0xf,local_res10);
    }
  }
  return;
}

