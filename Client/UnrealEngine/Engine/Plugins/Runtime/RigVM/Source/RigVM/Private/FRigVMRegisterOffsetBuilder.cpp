// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// WalkArray @ 14a116210

bool __cdecl
`FRigVMRegisterOffset::FRigVMRegisterOffset'::__l2::FRigVMRegisterOffsetBuilder::WalkArray
          (FArrayProperty *param_1,FString *param_2,FRigVMRegisterOffset *param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FArrayProperty *pFVar3;
  FProperty *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  uint uVar11;
  ForAnyElementType _Str;
  uint uVar12;
  wchar_t *pwVar13;
  FName local_res8;
  uint local_78;
  undefined4 local_74;
  FString local_70;
  FString local_60;
  FString local_50;
  void *local_40 [3];
  
  local_70.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.Data.ArrayNum = 0;
  local_70.Data.ArrayMax = 0;
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  ::FString::FString(&local_50,L".");
  bVar6 = ::FString::Split(param_2,&local_50,&local_70,&local_60);
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  if ((!bVar6) && (&local_70 != param_2)) {
    iVar9 = (param_2->Data).ArrayNum;
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    local_70.Data.ArrayNum = iVar9;
    if ((iVar9 == 0) && (local_70.Data.ArrayMax == 0)) {
      local_70.Data.ArrayNum = 0;
      local_70.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,local_70.Data.ArrayMax,(ForAnyElementType *)&local_70,iVar9,
                 &local_70.Data.ArrayMax);
      if (iVar9 != 0) {
        memcpy(local_70.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar9 * 2);
      }
    }
  }
  pwVar13 = L"";
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_70.Data.ArrayNum != 0) {
    _Str.Data = local_70.Data.AllocatorInstance.Data;
  }
  iVar8 = _wtoi((wchar_t *)_Str.Data);
  iVar9 = (param_3->Segments).ArrayNum;
  local_78 = ~(iVar8 * param_1->Inner->ElementSize);
  if (iVar9 < 1) {
    pFVar2 = (param_3->Segments).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_78) &&
       ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(param_3->Segments).ArrayMax * 4))
    {
LAB_14a116421:
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
    }
LAB_14a11645a:
    iVar9 = (param_3->Segments).ArrayNum;
    piVar1 = &(param_3->Segments).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_3,piVar1);
    }
    (param_3->Segments).ArrayNum = iVar9 + 1;
    *(uint *)((param_3->Segments).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_78;
  }
  else {
    uVar11 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar11 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    uVar11 = local_78;
    iVar9 = (param_3->Segments).ArrayNum;
    pFVar2 = (param_3->Segments).AllocatorInstance.Data;
    if (*(int *)(pFVar2 + ((longlong)iVar9 + -1) * 4) != 0) {
      if ((pFVar2 <= (FScriptContainerElement *)&local_78) &&
         ((FScriptContainerElement *)&local_78 < pFVar2 + (longlong)(param_3->Segments).ArrayMax * 4
         )) goto LAB_14a116421;
      goto LAB_14a11645a;
    }
    uVar12 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar12 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar12 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
    *(uint *)((param_3->Segments).AllocatorInstance.Data + ((longlong)iVar9 + -1) * 4) = uVar11;
  }
  pFVar3 = (FArrayProperty *)param_1->Inner;
  if (local_60.Data.ArrayNum < 2) {
    puVar10 = (undefined8 *)(**(code **)(pFVar3->_padding_ + 0x68))(pFVar3,local_40,0,0);
    if (*(int *)(puVar10 + 1) != 0) {
      pwVar13 = (wchar_t *)*puVar10;
    }
    ::FName::FName(&local_res8,pwVar13);
    param_3->CPPType = local_res8;
    if (local_40[0] != (void *)0x0) {
      FMemory::Free(local_40[0]);
    }
    param_3->ElementSize = (ushort)param_1->Inner->ElementSize;
    pFVar3 = (FArrayProperty *)param_1->Inner;
    if ((pFVar3 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      pFVar2 = (param_3->Segments).AllocatorInstance.Data;
      local_74 = 0xffffffff;
      if ((pFVar2 <= (FScriptContainerElement *)&local_74) &&
         (((FScriptContainerElement *)&local_74 <
           pFVar2 + (longlong)(param_3->Segments).ArrayMax * 4 &&
          (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)))) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      iVar9 = (param_3->Segments).ArrayNum;
      piVar1 = &(param_3->Segments).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_3,piVar1);
      }
      (param_3->Segments).ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_3->Segments).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_74;
      param_1 = pFVar3;
    }
    pFVar4 = param_1->Inner;
    if ((pFVar4 == (FProperty *)0x0) || ((*(uint *)(pFVar4->_padding_ + 0x18) >> 0x14 & 1) == 0)) {
      param_3->Type = Plain;
    }
    else {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UObject *)pFVar4[1]._padding_ != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pFVar4[1]._padding_);
      }
      (param_3->ScriptStruct).field0_0x0 = *(TObjectPtr<UScriptStruct>_u_0 *)(pFVar4 + 1);
      param_3->Type = Struct;
    }
  }
  else if (pFVar3 != (FArrayProperty *)0x0) {
    if ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      bVar6 = WalkStruct(*(UStruct **)&pFVar3->ArrayFlags,&local_60,param_3);
      goto LAB_14a116638;
    }
    if ((pFVar3 != (FArrayProperty *)0x0) &&
       ((*(uint *)(pFVar3->_padding_ + 0x18) >> 0x15 & 1) != 0)) {
      bVar6 = WalkArray(pFVar3,&local_60,param_3);
      goto LAB_14a116638;
    }
  }
  bVar6 = true;
LAB_14a116638:
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  return bVar6;
}

// WalkStruct @ 14a116680

bool __cdecl
`FRigVMRegisterOffset::FRigVMRegisterOffset'::__l2::FRigVMRegisterOffsetBuilder::WalkStruct
          (UStruct *param_1,FString *param_2,FRigVMRegisterOffset *param_3)

{
  int *piVar1;
  FProperty **ppFVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  FName *pFVar10;
  FArrayProperty *pFVar11;
  undefined8 *puVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  wchar_t *pwVar15;
  wchar_t *pwVar16;
  FName local_res20;
  int local_98;
  undefined4 local_94;
  FString local_90;
  FString local_80;
  FName local_70;
  FString local_68;
  FName local_58;
  void *local_50 [2];
  void *local_40 [3];
  
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  local_80.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.Data.ArrayNum = 0;
  local_80.Data.ArrayMax = 0;
  ::FString::FString(&local_68,L".");
  bVar7 = ::FString::Split(param_2,&local_68,&local_90,&local_80);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if ((!bVar7) && (&local_90 != param_2)) {
    iVar9 = (param_2->Data).ArrayNum;
    pFVar3 = (param_2->Data).AllocatorInstance.Data;
    local_90.Data.ArrayNum = iVar9;
    if ((iVar9 == 0) && (local_90.Data.ArrayMax == 0)) {
      local_90.Data.ArrayNum = 0;
      local_90.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,local_90.Data.ArrayMax,(ForAnyElementType *)&local_90,iVar9,
                 &local_90.Data.ArrayMax);
      if (iVar9 != 0) {
        memcpy(local_90.Data.AllocatorInstance.Data,pFVar3,(longlong)iVar9 * 2);
      }
    }
  }
  pwVar16 = L"";
  FVar14.Data = (FScriptContainerElement *)L"";
  if (local_90.Data.ArrayNum != 0) {
    FVar14.Data = local_90.Data.AllocatorInstance.Data;
  }
  pFVar10 = ::FName::FName(&local_58,(wchar_t *)FVar14.Data);
  pFVar11 = (FArrayProperty *)UStruct::FindPropertyByName(param_1,*pFVar10);
  if (pFVar11 == (FArrayProperty *)0x0) {
    bVar7 = false;
    goto LAB_14a116ae2;
  }
  iVar9 = (param_3->Segments).ArrayNum;
  local_98 = *(int *)((longlong)&pFVar11->_padding_ + 4);
  if (iVar9 < 1) {
    pFVar3 = (param_3->Segments).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
       ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)(param_3->Segments).ArrayMax * 4))
    {
LAB_14a1168b2:
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
    }
LAB_14a1168e6:
    iVar9 = (param_3->Segments).ArrayNum;
    piVar1 = &(param_3->Segments).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,(ForAnyElementType *)param_3,piVar1);
    }
    (param_3->Segments).ArrayNum = iVar9 + 1;
    *(int *)((param_3->Segments).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_98;
  }
  else {
    uVar13 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar13 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar6 = local_98;
    iVar9 = (param_3->Segments).ArrayNum;
    pFVar3 = (param_3->Segments).AllocatorInstance.Data;
    if (*(int *)(pFVar3 + ((longlong)iVar9 + -1) * 4) < 0) {
      if ((pFVar3 <= (FScriptContainerElement *)&local_98) &&
         ((FScriptContainerElement *)&local_98 < pFVar3 + (longlong)(param_3->Segments).ArrayMax * 4
         )) goto LAB_14a1168b2;
      goto LAB_14a1168e6;
    }
    uVar13 = 0;
    if ((int)(iVar9 - 1U) < iVar9) {
      uVar13 = ~(iVar9 - 1U) >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    pFVar3 = (param_3->Segments).AllocatorInstance.Data + ((longlong)iVar9 + -1) * 4;
    *(int *)pFVar3 = *(int *)pFVar3 + iVar6;
  }
  if (local_80.Data.ArrayNum < 2) {
    puVar12 = (undefined8 *)(**(code **)(pFVar11->_padding_ + 0x68))(pFVar11,local_50,0,0);
    if (*(int *)(puVar12 + 1) == 0) {
      pwVar15 = L"";
    }
    else {
      pwVar15 = (wchar_t *)*puVar12;
    }
    ::FName::FName(&local_res20,pwVar15);
    param_3->CPPType = local_res20;
    if (local_50[0] != (void *)0x0) {
      FMemory::Free(local_50[0]);
    }
    param_3->ElementSize = *(ushort *)((longlong)&pFVar11->_padding_ + 4);
    if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x15 & 1) == 0) {
LAB_14a116aa9:
      if ((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x14 & 1) != 0) {
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (*(UObject **)&pFVar11->ArrayFlags != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(*(UObject **)&pFVar11->ArrayFlags);
        }
        (param_3->ScriptStruct).field0_0x0 = *(TObjectPtr<UScriptStruct>_u_0 *)&pFVar11->ArrayFlags;
        param_3->Type = Struct;
        goto LAB_14a116ae0;
      }
    }
    else {
      pFVar3 = (param_3->Segments).AllocatorInstance.Data;
      local_94 = 0xffffffff;
      if (((pFVar3 <= (FScriptContainerElement *)&local_94) &&
          ((FScriptContainerElement *)&local_94 <
           pFVar3 + (longlong)(param_3->Segments).ArrayMax * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar8 = (*pcVar5)();
        return (bool)uVar8;
      }
      iVar9 = (param_3->Segments).ArrayNum;
      piVar1 = &(param_3->Segments).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_3,piVar1);
      }
      ppFVar2 = &pFVar11->Inner;
      (param_3->Segments).ArrayNum = iVar9 + 1;
      *(undefined4 *)((param_3->Segments).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_94;
      pFVar11 = (FArrayProperty *)*ppFVar2;
      puVar12 = (undefined8 *)(**(code **)(pFVar11->_padding_ + 0x68))(pFVar11,local_40,0,0);
      if (*(int *)(puVar12 + 1) != 0) {
        pwVar16 = (wchar_t *)*puVar12;
      }
      ::FName::FName(&local_70,pwVar16);
      param_3->CPPType = local_70;
      if (local_40[0] != (void *)0x0) {
        FMemory::Free(local_40[0]);
      }
      param_3->ElementSize = (ushort)(*ppFVar2)->ElementSize;
      if (pFVar11 != (FArrayProperty *)0x0) goto LAB_14a116aa9;
    }
    param_3->Type = Plain;
  }
  else {
    uVar4 = *(ulonglong *)(pFVar11->_padding_ + 0x18);
    if ((uVar4 >> 0x14 & 1) != 0) {
      bVar7 = WalkStruct(*(UStruct **)&pFVar11->ArrayFlags,&local_80,param_3);
      goto LAB_14a116ae2;
    }
    if ((uVar4 >> 0x15 & 1) != 0) {
      bVar7 = WalkArray(pFVar11,&local_80,param_3);
      goto LAB_14a116ae2;
    }
  }
LAB_14a116ae0:
  bVar7 = true;
LAB_14a116ae2:
  if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data.AllocatorInstance.Data);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return bVar7;
}

