// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 11

// StaticStruct @ 14a0ac5b0

UScriptStruct * __cdecl FRigVMRegisterOffset::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMRegisterOffset,(UObject *)pUVar1,
                         L"RigVMRegisterOffset");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMRegisterOffset.OuterSingleton;
}

// FRigVMRegisterOffset @ 14a0beec0

FRigVMRegisterOffset * __thiscall
FRigVMRegisterOffset::FRigVMRegisterOffset(FRigVMRegisterOffset *this,FRigVMRegisterOffset *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  UScriptStruct *pUVar3;
  
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  iVar2 = (param_1->Segments).ArrayNum;
  _Src = (param_1->Segments).AllocatorInstance.Data;
  (this->Segments).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
    memcpy((this->Segments).AllocatorInstance.Data,_Src,(longlong)iVar2 << 2);
  }
  this->Type = param_1->Type;
  this->CPPType = param_1->CPPType;
  pUVar3 = (param_1->ScriptStruct).field0_0x0.DebugPtr;
  (this->ScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar3 = (param_1->ParentScriptStruct).field0_0x0.DebugPtr;
  (this->ParentScriptStruct).field0_0x0.DebugPtr = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  this->ArrayIndex = param_1->ArrayIndex;
  this->ElementSize = param_1->ElementSize;
  ::FString::FString(&this->CachedSegmentPath,&param_1->CachedSegmentPath);
  return this;
}

// FRigVMRegisterOffset @ 14a0befb0

FRigVMRegisterOffset * __thiscall
FRigVMRegisterOffset::FRigVMRegisterOffset
          (FRigVMRegisterOffset *this,UScriptStruct *param_1,FString *param_2,int param_3,
          ushort param_4,FName *param_5)

{
  FScriptContainerElement *pFVar1;
  UScriptStruct *pUVar2;
  code *pcVar3;
  bool bVar4;
  FRigVMRegisterOffset *pFVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  int iVar8;
  ForAnyElementType FVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  int local_res20 [2];
  FString local_68;
  FString local_58;
  FString local_48;
  FScriptContainerElement *local_38 [2];
  
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Segments).ArrayNum = 0;
  (this->Segments).ArrayMax = 0;
  this->Type = Plain;
  this->CPPType = *param_5;
  (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->ParentScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  this->ArrayIndex = 0;
  this->ElementSize = param_4;
  local_res20[0] = param_3;
  ::FString::FString(&this->CachedSegmentPath,param_2);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (param_1 == (UScriptStruct *)0x0)) {
    (this->ParentScriptStruct).field0_0x0.DebugPtr = param_1;
    if (param_1 != (UScriptStruct *)0x0) goto LAB_14a0bf03c;
    iVar8 = local_res20[0] / (int)(uint)param_4;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->ParentScriptStruct).field0_0x0.DebugPtr = param_1;
LAB_14a0bf03c:
    iVar8 = (int)*(short *)((longlong)&param_1->_padding_ + 4);
    iVar8 = local_res20[0] / ((int)param_1->_padding_ + -1 + iVar8 & -iVar8);
  }
  this->ArrayIndex = iVar8;
  pFVar1 = (this->Segments).AllocatorInstance.Data;
  if (((pFVar1 <= (FScriptContainerElement *)local_res20) &&
      ((FScriptContainerElement *)local_res20 < pFVar1 + (longlong)(this->Segments).ArrayMax * 4))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRigVMRegisterOffset *)(*pcVar3)();
    return pFVar5;
  }
  iVar8 = (this->Segments).ArrayNum;
  if (iVar8 == (this->Segments).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,(ForAnyElementType *)this,&(this->Segments).ArrayMax);
  }
  (this->Segments).ArrayNum = iVar8 + 1;
  *(int *)((this->Segments).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_res20[0];
  if ((param_2->Data).ArrayNum < 2) {
    pUVar2 = (this->ParentScriptStruct).field0_0x0.DebugPtr;
    if (pUVar2 == (UScriptStruct *)0x0) goto LAB_14a0bf31b;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar2);
    }
    pUVar2 = (this->ParentScriptStruct).field0_0x0.DebugPtr;
    (this->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
    this->Type = Struct;
    puVar7 = (undefined8 *)(**(code **)(pUVar2->_padding_ + 0x388))(pUVar2,local_38,0);
    if (*(int *)(puVar7 + 1) == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)*puVar7;
    }
    ::FName::FName((FName *)&param_5,pwVar10);
    this->CPPType = (FName)param_5;
    FVar9.Data = local_38[0];
  }
  else {
    if ((param_1 == (UScriptStruct *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InScriptStruct",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                           ,0x15a,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FRigVMRegisterOffset *)(*pcVar3)();
      return pFVar5;
    }
    local_68.Data.ArrayNum = (param_2->Data).ArrayNum;
    lVar11 = (longlong)local_68.Data.ArrayNum;
    pFVar1 = (param_2->Data).AllocatorInstance.Data;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_68.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_68.Data.ArrayNum,0,(ForAnyElementType *)&local_68,local_68.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,pFVar1,lVar11 * 2);
    }
    pFVar6 = ::FString::Replace(&local_68,&local_58,L"[",L".",IgnoreCase);
    if (&local_68 != pFVar6) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar6 = ::FString::Replace(&local_68,&local_48,L"]",L".",IgnoreCase);
    if (&local_68 != pFVar6) {
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      local_68.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_68.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    bVar4 = `FRigVMRegisterOffset::FRigVMRegisterOffset'::__l2::FRigVMRegisterOffsetBuilder::
            WalkStruct((UStruct *)param_1,&local_68,this);
    if (!bVar4) {
      this->Type = Invalid;
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return this;
      }
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
      return this;
    }
    FVar9.Data = local_68.Data.AllocatorInstance.Data;
    if (this->Type == Plain) {
      bVar4 = ::FName::Equals(this->CPPType,L"FName");
      if (bVar4) {
        this->Type = Name;
        FVar9.Data = local_68.Data.AllocatorInstance.Data;
      }
      else {
        bVar4 = ::FName::Equals(this->CPPType,L"FString");
        FVar9.Data = local_68.Data.AllocatorInstance.Data;
        if (bVar4) {
          this->Type = String;
        }
      }
    }
  }
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
LAB_14a0bf31b:
  if ((this->ElementSize == 0) &&
     (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1838201463877140101>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                         ,0x17b,"ElementSize > 0"), bVar4)) {
    pcVar3 = (code *)swi(3);
    pFVar5 = (FRigVMRegisterOffset *)(*pcVar3)();
    return pFVar5;
  }
  return this;
}

// operator== @ 14a0c8620

bool __thiscall
FRigVMRegisterOffset::operator==(FRigVMRegisterOffset *this,FRigVMRegisterOffset *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  
  if (((((this->Segments).ArrayNum == (param_1->Segments).ArrayNum) &&
       (this->ElementSize == param_1->ElementSize)) &&
      ((this->ScriptStruct).field0_0x0.DebugPtr == (param_1->ScriptStruct).field0_0x0.DebugPtr)) &&
     ((this->ParentScriptStruct).field0_0x0.DebugPtr ==
      (param_1->ParentScriptStruct).field0_0x0.DebugPtr)) {
    iVar5 = (this->CachedSegmentPath).Data.ArrayNum;
    iVar1 = (param_1->CachedSegmentPath).Data.ArrayNum;
    if (iVar5 == iVar1) {
      if (1 < iVar5) {
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(this->CachedSegmentPath).Data.AllocatorInstance.Data,
                           (wchar_t *)(param_1->CachedSegmentPath).Data.AllocatorInstance.Data);
        bVar9 = iVar5 == 0;
        goto LAB_14a0c8699;
      }
    }
    else {
      bVar9 = iVar5 + iVar1 == 1;
LAB_14a0c8699:
      if (!bVar9) goto LAB_14a0c8760;
    }
    uVar7 = 0;
    if (0 < (this->Segments).ArrayNum) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar7 < (param_1->Segments).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
        }
        pFVar2 = (param_1->Segments).AllocatorInstance.Data;
        uVar6 = 0;
        if ((int)uVar7 < (this->Segments).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar4 = (*pcVar3)();
            return (bool)uVar4;
          }
        }
        if (*(int *)((this->Segments).AllocatorInstance.Data + lVar8 * 4) !=
            *(int *)(pFVar2 + lVar8 * 4)) goto LAB_14a0c8760;
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar7 < (this->Segments).ArrayNum);
    }
    bVar9 = true;
  }
  else {
LAB_14a0c8760:
    bVar9 = false;
  }
  return bVar9;
}

// ContainsArraySegment @ 14a0d11b0

bool __thiscall FRigVMRegisterOffset::ContainsArraySegment(FRigVMRegisterOffset *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Segments).AllocatorInstance.Data;
  iVar2 = (this->Segments).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar1) break;
    if (*(int *)pFVar3 < 0) {
      return true;
    }
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// GetData @ 14a0e2d00

uchar * __thiscall FRigVMRegisterOffset::GetData(FRigVMRegisterOffset *this,uchar *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (this->Segments).AllocatorInstance.Data;
  iVar2 = (this->Segments).ArrayNum;
  pFVar1 = pFVar4 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Segments).ArrayNum != iVar2) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar4 == pFVar1) break;
    uVar3 = *(uint *)pFVar4;
    if ((int)uVar3 < 0) {
      param_1 = (uchar *)((longlong)(int)~uVar3 + *(longlong *)param_1);
      pFVar4 = pFVar4 + 4;
    }
    else {
      param_1 = (uchar *)((longlong)param_1 + (longlong)(int)uVar3);
      pFVar4 = pFVar4 + 4;
    }
  }
  return (uchar *)(longlong *)param_1;
}

// GetElementSize @ 14a0e42d0

ushort __thiscall FRigVMRegisterOffset::GetElementSize(FRigVMRegisterOffset *this)

{
  return this->ElementSize;
}

// GetScriptStruct @ 14a0eb950

UScriptStruct * __thiscall FRigVMRegisterOffset::GetScriptStruct(FRigVMRegisterOffset *this)

{
  return (this->ScriptStruct).field0_0x0.DebugPtr;
}

// Load @ 14a0fc020

void __thiscall FRigVMRegisterOffset::Load(FRigVMRegisterOffset *this,FArchive *param_1)

{
  ERigVMRegisterType *pEVar1;
  ushort *puVar2;
  int *piVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  UClass *pUVar8;
  UScriptStruct *pUVar9;
  FName local_res8;
  FName local_res10;
  FString local_c8;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  TStringView<wchar_t> local_a8;
  FString local_98;
  FRigVMRegisterOffset local_88;
  
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->Segments);
  pEVar1 = (ERigVMRegisterType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMRegisterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
  }
  else {
    this->Type = *pEVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->CPPType);
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (iVar6 < 0x23) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    if (local_res8 == (FName)0x0) {
      (this->ScriptStruct).field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    }
    else {
      pFVar7 = ::FName::ToString(&local_res8,&local_98);
      local_b8 = (pFVar7->Data).AllocatorInstance.Data;
      iVar6 = (pFVar7->Data).ArrayNum;
      iStack_b0 = iVar6 + -1;
      if (iVar6 == 0) {
        iStack_b0 = 0;
      }
      pUVar8 = Z_Construct_UClass_UScriptStruct_NoRegister();
      local_a8._12_4_ = uStack_ac;
      local_a8.Size = iStack_b0;
      local_a8.DataPtr = (wchar_t *)local_b8;
      pUVar9 = (UScriptStruct *)UClass::TryFindTypeSlow(pUVar8,&local_a8,None);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UScriptStruct *)0x0))
      {
        UE::GC::MarkAsReachable((UObject *)pUVar9);
      }
      (this->ScriptStruct).field0_0x0.DebugPtr = pUVar9;
      if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ScriptStruct);
  }
  puVar2 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ElementSize,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&this->ElementSize);
    }
  }
  else {
    this->ElementSize = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  iVar6 = FArchiveState::CustomVer((FArchiveState *)param_1,&FReleaseObjectVersion::GUID);
  if (iVar6 < 0x23) {
    return;
  }
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ParentScriptStruct);
  ::operator<<(param_1,&local_c8);
  piVar3 = (int *)**(undefined8 **)&param_1->field_0x8;
  if ((int *)(*(undefined8 **)&param_1->field_0x8)[1] < piVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ArrayIndex,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)&this->ArrayIndex);
    }
  }
  else {
    this->ArrayIndex = *piVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  pUVar9 = (this->ParentScriptStruct).field0_0x0.DebugPtr;
  if (pUVar9 == (UScriptStruct *)0x0) goto LAB_14a0fc2eb;
  iVar6 = (int)*(short *)((longlong)&pUVar9->_padding_ + 4);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FRigVMRegisterOffset
            (&local_88,pUVar9,&local_c8,
             ((int)pUVar9->_padding_ + -1 + iVar6 & -iVar6) * this->ArrayIndex,this->ElementSize,
             &local_res10);
  if (local_88.Type == Invalid) {
    this->Type = Invalid;
LAB_14a0fc28d:
    iVar6 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    ::FString::AssignRange
              (&this->CachedSegmentPath,(wchar_t *)local_c8.Data.AllocatorInstance.Data,iVar6);
  }
  else {
    if (local_88.Segments.ArrayNum == (this->Segments).ArrayNum) {
      TArray<int,TSizedDefaultAllocator<32>_>::operator=(&this->Segments,&local_88.Segments);
      goto LAB_14a0fc28d;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                       ,0xb1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (local_88.CachedSegmentPath.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.CachedSegmentPath.Data.AllocatorInstance.Data);
  }
  if (local_88.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Segments.AllocatorInstance.Data);
  }
LAB_14a0fc2eb:
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  return;
}

// Save @ 14a10db00

void __thiscall FRigVMRegisterOffset::Save(FRigVMRegisterOffset *this,FArchive *param_1)

{
  ushort *puVar1;
  int *piVar2;
  ERigVMRegisterType *pEVar3;
  ushort *puVar4;
  int *piVar5;
  
  TArrayPrivateFriend::Serialize<int,TSizedDefaultAllocator<32>_>(param_1,&this->Segments);
  pEVar3 = (ERigVMRegisterType *)**(undefined8 **)&param_1->field_0x8;
  if ((ERigVMRegisterType *)(*(undefined8 **)&param_1->field_0x8)[1] < pEVar3 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->Type,1);
  }
  else {
    this->Type = *pEVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->CPPType);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ScriptStruct);
  puVar1 = &this->ElementSize;
  puVar4 = (ushort *)**(undefined8 **)&param_1->field_0x8;
  if ((ushort *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar4 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar1,2);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar1);
    }
  }
  else {
    *puVar1 = *puVar4;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 2;
  }
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->ParentScriptStruct);
  ::operator<<(param_1,&this->CachedSegmentPath);
  piVar2 = &this->ArrayIndex;
  piVar5 = (int *)**(undefined8 **)&param_1->field_0x8;
  if (piVar5 + 1 <= (int *)(*(undefined8 **)&param_1->field_0x8)[1]) {
    *piVar2 = *piVar5;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
    return;
  }
  if ((param_1->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a10dc31. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,piVar2,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(param_1,(uint *)piVar2);
  return;
}

// Serialize @ 14a10e900

void __thiscall FRigVMRegisterOffset::Serialize(FRigVMRegisterOffset *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FAnimObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FReleaseObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FAnimObjectVersion::GUID);
  if (1 < iVar3) {
    if (((param_1->field_0x28 & 4) == 0) && ((param_1->field_0x2b & 5) == 0)) {
      if ((param_1->field_0x28 & 1) != 0) {
        Load(this,param_1);
        return;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMMemoryDeprecated.cpp"
                         ,0x65,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      Save(this,param_1);
    }
  }
  return;
}

