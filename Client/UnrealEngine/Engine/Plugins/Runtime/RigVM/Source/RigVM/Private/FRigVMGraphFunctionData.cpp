// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 10

// StaticStruct @ 14a0aeb90

UScriptStruct * __cdecl FRigVMGraphFunctionData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMGraphFunctionData,(UObject *)pUVar1,
                         L"RigVMGraphFunctionData");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMGraphFunctionData.OuterSingleton;
}

// FRigVMGraphFunctionData @ 14a0bd550

FRigVMGraphFunctionData * __thiscall
FRigVMGraphFunctionData::FRigVMGraphFunctionData
          (FRigVMGraphFunctionData *this,FRigVMGraphFunctionData *param_1)

{
  int *piVar1;
  FRigVMObjectArchive *pFVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(&this->Header,&param_1->Header);
  FRigVMFunctionCompilationData::FRigVMFunctionCompilationData
            (&this->CompilationData,&param_1->CompilationData);
  ::FString::FString(&this->SerializedCollapsedNode_DEPRECATED,
                     &param_1->SerializedCollapsedNode_DEPRECATED);
  pFVar2 = &this->CollapseNodeArchive;
  (pFVar2->Buffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->CollapseNodeArchive).Buffer.ArrayMax;
  iVar3 = (param_1->CollapseNodeArchive).Buffer.ArrayNum;
  _Src = (param_1->CollapseNodeArchive).Buffer.AllocatorInstance.Data;
  (this->CollapseNodeArchive).Buffer.ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar3,0,(ForAnyElementType *)pFVar2,iVar3,piVar1);
    memcpy((pFVar2->Buffer).AllocatorInstance.Data,_Src,(longlong)iVar3);
  }
  (this->CollapseNodeArchive).UncompressedSize = (param_1->CollapseNodeArchive).UncompressedSize;
  (this->CollapseNodeArchive).CompressedSize = (param_1->CollapseNodeArchive).CompressedSize;
  (this->CollapseNodeArchive).bIsCompressed = (param_1->CollapseNodeArchive).bIsCompressed;
  return this;
}

// ClearCompilationData @ 14a0cf500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRigVMGraphFunctionData::ClearCompilationData(FRigVMGraphFunctionData *this)

{
  FRigVMFunctionCompilationData *pFVar1;
  undefined1 auStack_278 [32];
  FRigVMFunctionCompilationData local_258;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_278;
  pFVar1 = FRigVMFunctionCompilationData::FRigVMFunctionCompilationData(&local_258);
  FRigVMFunctionCompilationData::operator=(&this->CompilationData,pFVar1);
  FRigVMFunctionCompilationData::~FRigVMFunctionCompilationData(&local_258);
  return;
}

// FindFunctionData @ 14a0d8cf0

FRigVMGraphFunctionData * __cdecl
FRigVMGraphFunctionData::FindFunctionData
          (FRigVMGraphFunctionIdentifier *param_1,bool *param_2,FString *param_3)

{
  FScriptContainerElement *pFVar1;
  UObject *this;
  UClass *pUVar2;
  longlong *plVar3;
  FRigVMGraphFunctionStore *this_00;
  FRigVMGraphFunctionData *pFVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this = FSoftObjectPath::TryLoad(&param_1->HostObject,(FUObjectSerializeContext *)0x0);
  if (this == (UObject *)0x0) {
    if (param_3 == (FString *)0x0) {
      return (FRigVMGraphFunctionData *)0x0;
    }
    FSoftObjectPath::ToString(&param_1->HostObject,&local_28);
    ::FString::PrintfImpl(&local_48,L"Failed to load the Host object %s.");
    local_38.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
    if (param_3 != &local_48) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_48.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pUVar2 = URigVMGraphFunctionHost::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar2);
    if (plVar3 == (longlong *)0x0) {
      if (param_3 == (FString *)0x0) {
        return (FRigVMGraphFunctionData *)0x0;
      }
      ::FString::operator=(param_3,L"Host object is not a IRigVMGraphFunctionHost.");
      return (FRigVMGraphFunctionData *)0x0;
    }
    this_00 = (FRigVMGraphFunctionStore *)(**(code **)(*plVar3 + 0x18))(plVar3);
    if (this_00 == (FRigVMGraphFunctionStore *)0x0) {
      if (param_3 == (FString *)0x0) {
        return (FRigVMGraphFunctionData *)0x0;
      }
      ::FString::operator=(param_3,L"Host object does not contain a function store.");
      return (FRigVMGraphFunctionData *)0x0;
    }
    pFVar4 = FRigVMGraphFunctionStore::FindFunctionImpl(this_00,param_1,param_2);
    if (pFVar4 != (FRigVMGraphFunctionData *)0x0) {
      return pFVar4;
    }
    if (param_3 == (FString *)0x0) {
      return (FRigVMGraphFunctionData *)0x0;
    }
    FSoftObjectPath::ToString(&param_1->HostObject,&local_28);
    FRigVMGraphFunctionIdentifier::GetFunctionName(param_1,&local_38);
    ::FString::PrintfImpl(&local_58,L"Function %s not found in host %s.");
    if (param_3 != &local_58) {
      pFVar1 = (param_3->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_3->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (param_3->Data).ArrayNum = local_58.Data.ArrayNum;
      (param_3->Data).ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FRigVMGraphFunctionData *)0x0;
}

// FindFunctionData @ 14a0d8ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FRigVMGraphFunctionData * __cdecl
FRigVMGraphFunctionData::FindFunctionData
          (FSoftObjectPath *param_1,FName *param_2,bool *param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  FName *pFVar3;
  UObject *this;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 uVar6;
  FRigVMGraphFunctionData *pFVar7;
  FRigVMGraphFunctionData *pFVar8;
  FRigVMGraphFunctionData *pFVar9;
  undefined1 auStack_2a8 [32];
  FString local_288;
  FString local_278;
  FString local_268;
  undefined1 local_258 [8];
  FString local_250;
  FRigVMGraphFunctionHeader local_238;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  FRigVMGraphFunctionHeader::FRigVMGraphFunctionHeader(&local_238);
  pFVar3 = (FName *)FSoftObjectPath::ToString(param_1,&local_268);
  FRigVMGraphFunctionHeader::GetFunctionNameFromObjectPath((FString *)local_258,pFVar3);
  if ((UObject *)local_268.Data.AllocatorInstance.Data != (UObject *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  this = FSoftObjectPath::TryLoad(param_1,(FUObjectSerializeContext *)0x0);
  pFVar9 = (FRigVMGraphFunctionData *)0x0;
  pFVar8 = pFVar9;
  if (this == (UObject *)0x0) {
    if (param_4 == (FString *)0x0) goto LAB_14a0d91f5;
    FSoftObjectPath::ToString(param_1,&local_268);
    ::FString::PrintfImpl(&local_288,L"Failed to load the Host object %s.");
    if (param_4 != &local_288) {
      pFVar1 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_4->Data).AllocatorInstance.Data = local_288.Data.AllocatorInstance.Data;
      (param_4->Data).ArrayNum = local_288.Data.ArrayNum;
      (param_4->Data).ArrayMax = local_288.Data.ArrayMax;
      local_288.Data.ArrayNum = 0;
      local_288.Data.ArrayMax = 0;
      local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    local_250.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
      local_250.Data.AllocatorInstance.Data = local_268.Data.AllocatorInstance.Data;
    }
  }
  else {
    pUVar4 = URigVMGraphFunctionHost::StaticClass();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar4);
    if (plVar5 == (longlong *)0x0) {
      if (GetFunctionHostFromObjectFunc._0_8_ != 0) {
        local_268.Data.AllocatorInstance.Data = (FScriptContainerElement *)this;
        UE::Core::Private::Function::CheckCallable((void *)GetFunctionHostFromObjectFunc._0_8_);
        uVar2 = GetFunctionHostFromObjectFunc._0_8_;
        plVar5 = (longlong *)&GetFunctionHostFromObjectFunc.field_0x10;
        if (GetFunctionHostFromObjectFunc._40_8_ != 0) {
          plVar5 = (longlong *)GetFunctionHostFromObjectFunc._40_8_;
        }
        uVar6 = (**(code **)(*plVar5 + 8))();
        plVar5 = (longlong *)(*(code *)uVar2)(uVar6,&local_268);
        if (plVar5 != (longlong *)0x0) goto LAB_14a0d9087;
      }
      if (param_4 != (FString *)0x0) {
        ::FString::operator=(param_4,L"Host object is not a IRigVMGraphFunctionHost.");
      }
      goto LAB_14a0d91f5;
    }
LAB_14a0d9087:
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))();
    if (plVar5 == (longlong *)0x0) {
      if (param_4 != (FString *)0x0) {
        ::FString::operator=(param_4,L"Host object does not contain a function store.");
      }
      goto LAB_14a0d91f5;
    }
    pFVar8 = (FRigVMGraphFunctionData *)*plVar5;
    pFVar7 = pFVar8 + (int)plVar5[1];
    for (; pFVar8 != pFVar7; pFVar8 = pFVar8 + 1) {
      if ((pFVar8->Header).Name == (FName)local_258) {
        if (param_3 != (bool *)0x0) {
          *param_3 = true;
        }
        goto LAB_14a0d9126;
      }
    }
    pFVar8 = (FRigVMGraphFunctionData *)plVar5[2];
    pFVar7 = pFVar8 + (int)plVar5[3];
    if (pFVar8 != pFVar7) {
LAB_14a0d9100:
      if ((pFVar8->Header).Name != (FName)local_258) goto code_r0x00014a0d9106;
      if (param_3 != (bool *)0x0) {
        *param_3 = false;
      }
LAB_14a0d9126:
      if (pFVar8 != (FRigVMGraphFunctionData *)0x0) goto LAB_14a0d91f5;
    }
LAB_14a0d912f:
    pFVar8 = pFVar9;
    if (param_4 == (FString *)0x0) goto LAB_14a0d91f5;
    FSoftObjectPath::ToString(param_1,&local_250);
    ::FName::ToString((FName *)local_258,&local_268);
    ::FString::PrintfImpl(&local_278,L"Function %s not found in host %s.");
    if (param_4 != &local_278) {
      pFVar1 = (param_4->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_4->Data).AllocatorInstance.Data = local_278.Data.AllocatorInstance.Data;
      (param_4->Data).ArrayNum = local_278.Data.ArrayNum;
      (param_4->Data).ArrayMax = local_278.Data.ArrayMax;
      local_278.Data.ArrayNum = 0;
      local_278.Data.ArrayMax = 0;
      local_278.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_278.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Data.AllocatorInstance.Data);
    }
    if ((UObject *)local_268.Data.AllocatorInstance.Data != (UObject *)0x0) {
      FMemory::Free(local_268.Data.AllocatorInstance.Data);
    }
  }
  pFVar8 = pFVar9;
  if ((UObject *)local_250.Data.AllocatorInstance.Data != (UObject *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
LAB_14a0d91f5:
  FRigVMGraphFunctionHeader::~FRigVMGraphFunctionHeader(&local_238);
  return pFVar8;
code_r0x00014a0d9106:
  pFVar8 = pFVar8 + 1;
  if (pFVar8 == pFVar7) goto LAB_14a0d912f;
  goto LAB_14a0d9100;
}

// GetArgumentNameFromPinHash @ 14a0dfb80

FString * __cdecl
FRigVMGraphFunctionData::GetArgumentNameFromPinHash
          (FString *__return_storage_ptr__,FString *param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar2 = RigVMStringUtils::SplitNodePathAtEnd(param_1,&local_68,&local_48);
  if (bVar2) {
    ::FString::Reset(&local_68,0);
    bVar2 = RigVMStringUtils::SplitPinPathAtStart(&local_48,&local_68,&local_58);
    if (bVar2) {
      ::FString::FString(&local_28,EntryString);
      if (local_68.Data.ArrayNum == local_28.Data.ArrayNum) {
        if (1 < local_68.Data.ArrayNum) {
          iVar3 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                         (wchar_t *)local_28.Data.AllocatorInstance.Data);
          bVar2 = iVar3 == 0;
          goto LAB_14a0dfc33;
        }
LAB_14a0dfc95:
        bVar2 = false;
LAB_14a0dfc99:
        bVar4 = true;
        bVar1 = true;
        if (bVar2) goto LAB_14a0dfca0;
      }
      else {
        bVar2 = local_68.Data.ArrayNum + local_28.Data.ArrayNum == 1;
LAB_14a0dfc33:
        if (bVar2) goto LAB_14a0dfc95;
        ::FString::FString(&local_38,ReturnString);
        if (local_68.Data.ArrayNum == local_38.Data.ArrayNum) {
          if (1 < local_68.Data.ArrayNum) {
            iVar3 = wcscmp((wchar_t *)local_68.Data.AllocatorInstance.Data,
                           (wchar_t *)local_38.Data.AllocatorInstance.Data);
            bVar4 = iVar3 == 0;
            goto LAB_14a0dfc78;
          }
          bVar2 = true;
          goto LAB_14a0dfc99;
        }
        bVar4 = local_68.Data.ArrayNum + local_38.Data.ArrayNum == 1;
LAB_14a0dfc78:
        bVar2 = true;
        if (bVar4) goto LAB_14a0dfc99;
        bVar1 = false;
LAB_14a0dfca0:
        bVar4 = bVar1;
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (bVar4) {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data
        ;
        (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
        local_58.Data.ArrayNum = 0;
        local_58.Data.ArrayMax = 0;
        local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        goto LAB_14a0dfd02;
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14a0dfd02:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetOperandForArgument @ 14a0e8f00

FRigVMOperand __thiscall
FRigVMGraphFunctionData::GetOperandForArgument(FRigVMGraphFunctionData *this,FName *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *pTVar2;
  ulonglong uVar3;
  uint uVar4;
  code *pcVar5;
  ForAnyElementType FVar6;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *pTVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  FString *pFVar15;
  uint uVar16;
  FName *in_R8;
  undefined1 *puVar17;
  uint *puVar18;
  undefined1 local_res8 [8];
  FString local_b8;
  FString local_a8;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  undefined1 *local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  TMap<FString,FRigVMOperand,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  ::FName::ToString(in_R8,&local_b8);
  iStack_90 = 0;
  puVar1 = &(this->CompilationData).Operands.field_0x10;
  iVar10 = *(int *)&(this->CompilationData).Operands.field_0x28;
  pTVar2 = &(this->CompilationData).Operands;
  uStack_8c = 1;
  local_78 = 0;
  iStack_7c = 0;
  if (iVar10 != 0) {
    puVar18 = *(uint **)&(this->CompilationData).Operands.field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    while (uVar16 == 0) {
      lVar12 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_14a0e8fbd;
      uVar16 = puVar18[lVar12 + 1];
    }
    uStack_8c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_8c * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_7c = local_78 + -1 + (int)lVar12;
    if (iVar10 < iStack_7c) {
      iStack_7c = iVar10;
    }
  }
LAB_14a0e8fbd:
  iStack_70 = *(int *)&(this->CompilationData).Operands.field_0x8 -
              *(int *)&(this->CompilationData).Operands.field_0x34;
  uVar16 = *(uint *)&(this->CompilationData).Operands.field_0x28;
  uStack_80 = 0xffffffff;
  uVar14 = uVar16 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.CurrentBitIndex = iStack_7c;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  uStack_40 = CONCAT44(uStack_6c,iStack_70);
  local_98 = pTVar2;
  local_88 = puVar1;
  iStack_74 = iStack_7c;
  local_68 = pTVar2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar10 < (int)uVar16)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    uVar11 = (*pcVar5)();
    return SUB86(uVar11,0);
  }
  uVar4 = *(uint *)&(this->CompilationData).Operands.field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->CompilationData).Operands.field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar12 = (longlong)iVar13;
      uVar14 = uVar14 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14a0e90c0;
      uVar16 = *(uint *)(puVar17 + lVar12 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar16 = (int)lVar12 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14a0e90c0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_60.CurrentBitIndex == uVar16) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == pTVar2))
    {
      *(undefined1 *)&(param_1->ComparisonIndex).Value = 0;
      *(undefined4 *)((longlong)&(param_1->ComparisonIndex).Value + 2) = 0xffffffff;
      if (local_b8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14a0e919d;
      goto LAB_14a0e9198;
    }
    pFVar15 = (FString *)((longlong)TStack_60.CurrentBitIndex * 0x20 + *(longlong *)pTVar7);
    GetArgumentNameFromPinHash(&local_a8,pFVar15);
    FVar6.Data = local_a8.Data.AllocatorInstance.Data;
    FVar8.Data = local_b8.Data.AllocatorInstance.Data;
    iVar10 = local_a8.Data.ArrayNum;
    if (1 < iVar10) {
      if (iVar10 == local_b8.Data.ArrayNum) {
        iVar10 = wcscmp((wchar_t *)local_a8.Data.AllocatorInstance.Data,
                        (wchar_t *)local_b8.Data.AllocatorInstance.Data);
        bVar9 = iVar10 == 0;
      }
      else {
        bVar9 = iVar10 + local_b8.Data.ArrayNum == 1;
      }
      if (bVar9) {
        (param_1->ComparisonIndex).Value = *(uint *)&pFVar15[1].Data.AllocatorInstance.Data;
        *(undefined2 *)&param_1->Number =
             *(undefined2 *)((longlong)&pFVar15[1].Data.AllocatorInstance.Data + 4);
        if (FVar6.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar6.Data);
          FVar8.Data = local_b8.Data.AllocatorInstance.Data;
        }
        local_b8.Data.AllocatorInstance.Data = FVar8.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_14a0e9198:
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
LAB_14a0e919d:
        return SUB86(param_1,0);
      }
    }
    if (FVar6.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar6.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// IsAnyOperandSharedAcrossArguments @ 14a0f8630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FRigVMGraphFunctionData::IsAnyOperandSharedAcrossArguments(FRigVMGraphFunctionData *this)

{
  uint *puVar1;
  FNameEntryId FVar2;
  short sVar3;
  ushort uVar4;
  void *_Src;
  TBitArray<FDefaultBitArrayAllocator> *pTVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  ForAnyElementType FVar12;
  ulonglong uVar13;
  longlong lVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  undefined4 uVar17;
  uint uVar18;
  FRigVMOperand *pFVar19;
  FRigVMGraphFunctionArgument *pFVar20;
  uint uVar21;
  ulonglong uVar22;
  FRigVMGraphFunctionArgument *this_00;
  undefined1 auStackY_148 [32];
  undefined1 local_118 [8];
  FRigVMGraphFunctionArgument *local_110;
  FName local_108;
  undefined8 local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  FSparseArrayAllocationInfo local_d8;
  undefined4 local_c8;
  int iStack_c4;
  int iStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_a8;
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_88;
  FScriptContainerElement local_50 [8];
  ForAnyElementType local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_148;
  uVar16 = (this->Header).Arguments.ArrayNum;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  local_88.AllocationFlags.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_88.AllocationFlags.NumBits = 0;
  local_88.AllocationFlags.MaxBits = 0x80;
  local_88.FirstFreeIndex = -1;
  local_88.NumFreeIndices = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = 0;
  TStack_f8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_f8.Array._4_4_,TStack_f8.Array._0_4_)
  ;
  if (uVar16 == 0) goto LAB_14a0f889c;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar16);
  }
  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve(&local_88,uVar16);
  if (uVar16 < 4) {
    uVar16 = 1;
  }
  else {
    uVar13 = (ulonglong)((uVar16 >> 1) + 7) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar16 = 1 << ((byte)lVar14 & 0x1f);
  }
  if ((local_40 != 0) &&
     (TStack_f8.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(TStack_f8.Array._4_4_,TStack_f8.Array._0_4_), (int)uVar16 <= (int)local_40))
  goto LAB_14a0f889c;
  local_40 = uVar16;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
  }
  if (uVar16 != 0) {
    uVar18 = uVar16;
    if (uVar16 < 2) {
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        uVar18 = 0;
        goto LAB_14a0f871f;
      }
    }
    else {
LAB_14a0f871f:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,uVar18,4);
    }
    if (0 < (int)uVar16) {
      uVar22 = (ulonglong)uVar16;
      uVar13 = 0;
      do {
        FVar12.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar8 = uVar13 & (longlong)(int)uVar16 - 1U;
        uVar13 = uVar13 + 1;
        *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
    }
  }
  TStack_f8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)CONCAT44(TStack_f8.Array._4_4_,TStack_f8.Array._0_4_)
  ;
  if (local_40 != 0) {
    local_d8.Pointer = &local_88.AllocationFlags;
    local_d8._4_4_ = 1;
    local_d8.Index = 0;
    iStack_c4 = 0;
    iStack_c0 = 0;
    if (local_88.AllocationFlags.NumBits != 0) {
      FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
      if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
      }
      uVar16 = *(uint *)FVar15;
      iStack_c0 = 0;
      local_d8.Index = 0;
      while (uVar16 == 0) {
        iStack_c0 = iStack_c0 + 0x20;
        lVar14 = (longlong)local_d8.Index;
        local_d8.Index = local_d8.Index + 1;
        if ((int)(local_88.AllocationFlags.NumBits + -1 +
                 (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < local_d8.Index)
        goto LAB_14a0f880b;
        uVar16 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar14 * 4);
      }
      local_d8._4_4_ = -uVar16 & uVar16;
      uVar13 = (ulonglong)(uint)local_d8._4_4_ * 2 + 1;
      lVar14 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iStack_c4 = (int)lVar14 + -1 + iStack_c0;
      if (local_88.AllocationFlags.NumBits < iStack_c4) {
LAB_14a0f880b:
        iStack_c4 = local_88.AllocationFlags.NumBits;
      }
    }
    local_c8 = 0xffffffff;
    local_100 = &local_88;
    TStack_f8._padding_ = CONCAT44(local_d8._4_4_,local_d8.Index);
    TStack_f8._28_4_ = uStack_bc;
    TStack_f8.BaseBitIndex = iStack_c0;
    TStack_f8.UnvisitedBitMask = 0xffffffff;
    TStack_f8.CurrentBitIndex = iStack_c4;
    TStack_f8.Array = local_d8.Pointer;
    if (iStack_c4 < local_88.AllocationFlags.NumBits) {
      do {
        iVar10 = TStack_f8.CurrentBitIndex;
        pFVar19 = (FRigVMOperand *)
                  ((local_100->Data).AllocatorInstance.Data +
                  (longlong)TStack_f8.CurrentBitIndex * 0x10);
        uVar16 = ::GetTypeHash(pFVar19);
        uVar16 = uVar16 & local_40 - 1;
        pFVar19[2].MemoryType = (char)uVar16;
        pFVar19[2].field_0x1 = (char)(uVar16 >> 8);
        pFVar19[2].RegisterIndex = (short)(uVar16 >> 0x10);
        FVar12.Data = local_50;
        if (local_48.Data != (FScriptContainerElement *)0x0) {
          FVar12.Data = local_48.Data;
        }
        uVar13 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
        uVar17 = *(undefined4 *)(FVar12.Data + uVar13 * 4);
        pFVar19[1].RegisterIndex = (short)uVar17;
        pFVar19[1].RegisterOffset = (short)((uint)uVar17 >> 0x10);
        *(int *)(FVar12.Data + uVar13 * 4) = iVar10;
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      } while (TStack_f8.CurrentBitIndex < (TStack_f8.Array)->NumBits);
    }
  }
LAB_14a0f889c:
  local_b8 = (this->Header).Arguments.ArrayNum;
  uVar13 = (ulonglong)(int)local_b8;
  this_00 = (FRigVMGraphFunctionArgument *)(this->Header).Arguments.AllocatorInstance.Data;
  pFVar20 = this_00 + uVar13;
  local_110 = pFVar20;
  do {
    if ((this->Header).Arguments.ArrayNum != (int)uVar13) {
      `TCheckedPointerIterator<FRigVMGraphFunctionArgument_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_118);
    }
    if (this_00 == pFVar20) {
      bVar6 = false;
LAB_14a0f8da3:
      local_40 = 0;
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<FRigVMOperand>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)&local_88);
      return bVar6;
    }
    bVar6 = FRigVMGraphFunctionArgument::IsExecuteContext(this_00);
    pTVar5 = TStack_f8.Array;
    if (!bVar6) {
      GetOperandForArgument(this,&local_108);
      sVar3 = local_108.ComparisonIndex.Value._2_2_;
      pFVar20 = local_110;
      pTVar5 = TStack_f8.Array;
      if (local_108.ComparisonIndex.Value._2_2_ != -1) {
        uVar16 = ::GetTypeHash((FRigVMOperand *)&local_108);
        uVar4 = (ushort)local_108.Number;
        FVar2.Value = local_108.ComparisonIndex.Value;
        if (local_88.Data.ArrayNum != local_88.NumFreeIndices) {
          FVar12.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_48.Data;
          }
          iVar10 = *(int *)(FVar12.Data + (ulonglong)(local_40 - 1 & uVar16) * 4);
          while (iVar10 != -1) {
            lVar14 = (longlong)iVar10;
            if (((local_88.Data.AllocatorInstance.Data[lVar14 * 0x10] ==
                  SUB41(local_108.ComparisonIndex.Value,0)) &&
                (*(short *)(local_88.Data.AllocatorInstance.Data + lVar14 * 0x10 + 2) == sVar3)) &&
               (*(ushort *)(local_88.Data.AllocatorInstance.Data + lVar14 * 0x10 + 4) ==
                (ushort)local_108.Number)) {
              if (iVar10 != -1) {
                bVar6 = true;
                goto LAB_14a0f8da3;
              }
              break;
            }
            iVar10 = *(int *)(local_88.Data.AllocatorInstance.Data + lVar14 * 0x10 + 8);
          }
        }
        if (local_88.NumFreeIndices == 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,4,1,(ForAnyElementType *)&local_88,&local_88.Data.ArrayNum,
                              &local_88.Data.ArrayMax);
          iVar7 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            (&local_88.AllocationFlags,1);
          FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
          if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
          }
          bVar9 = (byte)iVar7 & 0x1f;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0x1f;
            bVar9 = bVar9 - 0x20;
          }
          puVar1 = (uint *)((longlong)FVar15 + (longlong)(iVar7 >> 5) * 4);
          *puVar1 = *puVar1 & ~(1 << (bVar9 & 0x1f));
          iVar7 = local_88.FirstFreeIndex;
        }
        else {
          local_88.NumFreeIndices = local_88.NumFreeIndices + -1;
          iVar7 = *(int *)(local_88.Data.AllocatorInstance.Data +
                          (longlong)local_88.FirstFreeIndex * 0x10 + 4);
          iVar10 = local_88.FirstFreeIndex;
          if (local_88.NumFreeIndices != 0) {
            *(undefined4 *)(local_88.Data.AllocatorInstance.Data + (longlong)iVar7 * 0x10) =
                 0xffffffff;
          }
        }
        local_88.FirstFreeIndex = iVar7;
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex(&local_88,&local_d8,iVar10);
        _Src = local_d8.Pointer;
        iVar10 = local_d8.Index;
        if (local_d8.Pointer != (FRigVMOperand *)0x0) {
          *(uint *)local_d8.Pointer = FVar2.Value;
          *(ushort *)((longlong)local_d8.Pointer + 4) = uVar4;
          ((FRigVMOperand *)((longlong)local_d8.Pointer + 6))->RegisterIndex = 0xffff;
          ((FRigVMOperand *)((longlong)local_d8.Pointer + 6))->RegisterOffset = 0xffff;
        }
        uVar16 = ::GetTypeHash(local_d8.Pointer);
        if ((local_88.Data.ArrayNum - local_88.NumFreeIndices != 1) &&
           (local_88.Data.ArrayNum != local_88.NumFreeIndices)) {
          FVar12.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_48.Data;
          }
          uVar17 = *(undefined4 *)(FVar12.Data + (ulonglong)(local_40 - 1 & uVar16) * 4);
          if (uVar17 != 0xffffffff) {
            do {
              pFVar11 = local_88.Data.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10;
              if (((*pFVar11 == *(FScriptContainerElement *)_Src) &&
                  (*(undefined2 *)(pFVar11 + 2) == *(ushort *)((longlong)_Src + 2))) &&
                 (*(undefined2 *)(pFVar11 + 4) == *(ushort *)((longlong)_Src + 4))) {
                if (uVar17 != 0xffffffff) {
                  memmove(local_88.Data.AllocatorInstance.Data + (longlong)(int)uVar17 * 0x10,_Src,6
                         );
                  TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ::RemoveAtUninitialized(&local_88,iVar10,1);
                  pFVar20 = local_110;
                  pTVar5 = TStack_f8.Array;
                  goto LAB_14a0f8d8e;
                }
                break;
              }
              uVar17 = *(undefined4 *)(pFVar11 + 8);
            } while (uVar17 != 0xffffffff);
          }
        }
        uVar21 = local_88.Data.ArrayNum - local_88.NumFreeIndices;
        uVar18 = 1;
        if (3 < uVar21) {
          uVar13 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
          lVar14 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar18 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar21 < 1) || ((int)uVar18 <= (int)local_40)) {
          uVar16 = local_40 - 1 & uVar16;
          pFVar19 = (FRigVMOperand *)((longlong)_Src + 0xc);
          pFVar19->MemoryType = (char)uVar16;
          pFVar19->field_0x1 = (char)(uVar16 >> 8);
          pFVar19->RegisterIndex = (short)(uVar16 >> 0x10);
          FVar12.Data = local_50;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            FVar12.Data = local_48.Data;
          }
          uVar13 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
          uVar17 = *(undefined4 *)(FVar12.Data + uVar13 * 4);
          ((FRigVMOperand *)((longlong)_Src + 6))->RegisterIndex = (short)uVar17;
          ((FRigVMOperand *)((longlong)_Src + 6))->RegisterOffset = (short)((uint)uVar17 >> 0x10);
          *(int *)(FVar12.Data + uVar13 * 4) = iVar10;
          pFVar20 = local_110;
          pTVar5 = TStack_f8.Array;
        }
        else {
          local_40 = uVar18;
          if (local_48.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_48,0,0,4);
          }
          if (uVar18 != 0) {
            uVar16 = uVar18;
            if (uVar18 < 2) {
              if (local_48.Data != (FScriptContainerElement *)0x0) {
                uVar16 = 0;
                goto LAB_14a0f8bba;
              }
            }
            else {
LAB_14a0f8bba:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_48,0,uVar16,4);
            }
            if (0 < (int)uVar18) {
              uVar22 = (ulonglong)uVar18;
              uVar13 = 0;
              do {
                FVar12.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_48.Data;
                }
                uVar8 = uVar13 & (longlong)(int)uVar18 - 1U;
                uVar13 = uVar13 + 1;
                *(undefined4 *)(FVar12.Data + uVar8 * 4) = 0xffffffff;
                uVar22 = uVar22 - 1;
              } while (uVar22 != 0);
            }
          }
          pFVar20 = local_110;
          pTVar5 = TStack_f8.Array;
          if (local_40 != 0) {
            TStack_f8._padding_ = (longlong)&local_88.AllocationFlags;
            iVar10 = 0;
            local_100 = (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)&DAT_100000000;
            TStack_f8.Array._4_4_ = 0;
            TStack_f8.UnvisitedBitMask = 0;
            if (local_88.AllocationFlags.NumBits != 0) {
              FVar15 = (ForElementType<unsigned_int>)&local_88.AllocationFlags;
              if (local_88.AllocationFlags.AllocatorInstance.SecondaryData !=
                  (ForElementType<unsigned_int>)0x0) {
                FVar15 = local_88.AllocationFlags.AllocatorInstance.SecondaryData;
              }
              uVar16 = *(uint *)FVar15;
              TStack_f8.UnvisitedBitMask = 0;
              while (uVar16 == 0) {
                TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask + 0x20;
                lVar14 = (longlong)iVar10;
                iVar10 = iVar10 + 1;
                uVar13 = (ulonglong)local_100 >> 0x20;
                local_100 = (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)CONCAT44((int)uVar13,iVar10);
                if ((int)(local_88.AllocationFlags.NumBits + -1 +
                         (local_88.AllocationFlags.NumBits + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10)
                goto LAB_14a0f8cbc;
                uVar16 = *(uint *)((uchar *)((longlong)FVar15 + 4) + lVar14 * 4);
              }
              local_100 = (TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           *)CONCAT44(-uVar16 & uVar16,SUB84(local_100,0));
              uVar13 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
              lVar14 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              TStack_f8.Array._4_4_ = (int)lVar14 + -1 + TStack_f8.UnvisitedBitMask;
              if (local_88.AllocationFlags.NumBits < TStack_f8.Array._4_4_) {
LAB_14a0f8cbc:
                TStack_f8.Array._4_4_ = local_88.AllocationFlags.NumBits;
              }
            }
            TStack_f8.Array._0_4_ = 0xffffffff;
            local_b0 = &local_88;
            local_a8.CurrentBitIndex = TStack_f8.Array._4_4_;
            local_a8.UnvisitedBitMask = 0xffffffff;
            local_a8._28_4_ = TStack_f8.CurrentBitIndex;
            local_a8.BaseBitIndex = TStack_f8.UnvisitedBitMask;
            local_a8._padding_ = (longlong)local_100;
            iVar10 = TStack_f8.Array._4_4_;
            local_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)TStack_f8._padding_;
            pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
                     CONCAT44(TStack_f8.Array._4_4_,0xffffffff);
            if (TStack_f8.Array._4_4_ < local_88.AllocationFlags.NumBits) {
              do {
                pFVar19 = (FRigVMOperand *)
                          ((local_b0->Data).AllocatorInstance.Data + (longlong)iVar10 * 0x10);
                uVar16 = ::GetTypeHash(pFVar19);
                uVar16 = uVar16 & local_40 - 1;
                pFVar19[2].MemoryType = (char)uVar16;
                pFVar19[2].field_0x1 = (char)(uVar16 >> 8);
                pFVar19[2].RegisterIndex = (short)(uVar16 >> 0x10);
                FVar12.Data = local_50;
                if (local_48.Data != (FScriptContainerElement *)0x0) {
                  FVar12.Data = local_48.Data;
                }
                uVar13 = (longlong)(int)local_40 - 1U & (longlong)(int)uVar16;
                uVar17 = *(undefined4 *)(FVar12.Data + uVar13 * 4);
                pFVar19[1].RegisterIndex = (short)uVar17;
                pFVar19[1].RegisterOffset = (short)((uint)uVar17 >> 0x10);
                *(int *)(FVar12.Data + uVar13 * 4) = iVar10;
                local_a8.UnvisitedBitMask = local_a8.UnvisitedBitMask & ~local_a8._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_a8);
                pFVar20 = local_110;
                iVar10 = local_a8.CurrentBitIndex;
                pTVar5 = (TBitArray<FDefaultBitArrayAllocator> *)
                         CONCAT44(TStack_f8.Array._4_4_,TStack_f8.Array._0_4_);
              } while (local_a8.CurrentBitIndex < (local_a8.Array)->NumBits);
            }
          }
        }
      }
    }
LAB_14a0f8d8e:
    TStack_f8.Array = pTVar5;
    uVar13 = (ulonglong)local_b8;
    this_00 = this_00 + 1;
  } while( true );
}

// IsMutable @ 14a0f9830

bool __thiscall FRigVMGraphFunctionData::IsMutable(FRigVMGraphFunctionData *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UScriptStruct *pUVar7;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->Header).Arguments.AllocatorInstance.Data;
  iVar1 = (this->Header).Arguments.ArrayNum;
  this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + 0x18);
  do {
    if ((this->Header).Arguments.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FRigVMGraphFunctionArgument_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (&this_00[-1].ObjectID.AssetPath.AssetName == (FName *)(pFVar3 + (longlong)iVar1 * 0xb0)) {
      return false;
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (((pUVar5 == (UObject *)0x0) &&
        (pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00), pUVar5 == (UObject *)0x0)) &&
       ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0)) {
      FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
      TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    }
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if ((pUVar5 != (UObject *)0x0) &&
       (pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00), pUVar5 != (UObject *)0x0)) {
      pUVar6 = Z_Construct_UClass_UScriptStruct_NoRegister();
      iVar2 = (int)pUVar6->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
         (((longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar6->_padding_ &&
          (pUVar7 = FRigVMExecutePin::StaticStruct(), pUVar7 != (UScriptStruct *)0x0)))) {
        iVar2 = (int)pUVar7->_padding_;
        if ((*(int *)&pUVar5[1].field_0x10 < iVar2) ||
           ((longlong *)*(undefined1 **)(*(longlong *)&pUVar5[1].field_0x8 + (longlong)iVar2 * 8) !=
            &pUVar7->_padding_)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          return true;
        }
      }
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)&this_00[4].ObjectID.AssetPath.AssetName;
  } while( true );
}

// PatchSharedArgumentOperandsIfRequired @ 14a1000f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERigVMOpCode": Some values do not have unique names */

bool __thiscall
FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired(FRigVMGraphFunctionData *this)

{
  int *piVar1;
  TArray<FRigVMFunctionCompilationPropertyDescription,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined2 uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  undefined1 *puVar7;
  code *pcVar8;
  char cVar9;
  ushort uVar10;
  FRigVMGraphFunctionData *pFVar11;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *pTVar12;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *pTVar13;
  bool bVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  FRigVMOperand FVar19;
  longlong lVar20;
  undefined2 extraout_var;
  FName FVar21;
  uint uVar22;
  ForAnyElementType FVar23;
  FName *pFVar24;
  FString *pFVar25;
  FRigVMInstruction *pFVar26;
  ERigVMMemoryType *pEVar27;
  FScriptContainerElement *pFVar28;
  FScriptContainerElement *pFVar29;
  uint uVar30;
  FRigVMGraphFunctionArgument *pFVar31;
  ulonglong uVar32;
  int iVar33;
  ulonglong uVar34;
  int iVar35;
  ForElementType<FSetElementId> FVar36;
  undefined1 *puVar37;
  uint *puVar38;
  FRigVMGraphFunctionArgument *pFVar39;
  undefined1 *puVar40;
  FRigVMFunctionCompilationData *this_00;
  undefined1 auStackY_378 [32];
  FRigVMOperand local_328;
  undefined1 local_320;
  undefined1 local_31f;
  undefined1 local_31e;
  undefined1 local_31d;
  undefined1 local_31c [4];
  FRigVMOperand local_318;
  FName local_310;
  FString local_308;
  undefined4 local_2f8;
  ushort local_2f4;
  uint local_2f0;
  FString local_2e8;
  FString local_2d8;
  FRigVMGraphFunctionData *local_2c8;
  ForAnyElementType local_2c0;
  undefined8 local_2b8;
  FRigVMInstruction *local_2b0;
  ERigVMMemoryType local_2a8;
  undefined3 uStack_2a7;
  ushort uStack_2a6;
  ushort local_2a4;
  undefined1 local_2a2;
  undefined1 uStack_2a1;
  undefined2 uStack_2a0;
  undefined2 uStack_29e;
  undefined4 local_29c;
  undefined2 local_298;
  undefined4 local_296;
  ushort local_292;
  int local_290;
  int local_28c;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *local_288;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *local_280;
  int iStack_278;
  uint uStack_274;
  undefined1 *local_270;
  undefined4 uStack_268;
  int iStack_264;
  int local_260;
  undefined4 uStack_25c;
  int iStack_258;
  undefined4 uStack_254;
  FString local_250;
  TArrayView<FRigVMOperand_const_,int> local_240;
  FString local_230;
  FString local_220;
  FRigVMInstructionArray local_210;
  undefined8 local_1f8;
  FString local_1f0;
  undefined8 local_1e0;
  FSoftObjectPath local_1d8;
  FString local_1b8;
  int local_1a8;
  int local_1a4;
  FName local_1a0;
  FString *local_198;
  int local_190;
  FName *local_188;
  int local_180;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *local_178;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_170;
  undefined8 uStack_150;
  TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
  *local_148;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_140;
  undefined8 uStack_120;
  FName local_118;
  FName local_110;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8 [2];
  undefined4 local_ac;
  undefined4 local_8c;
  TSet<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_378;
  local_2c8 = this;
  bVar14 = IsAnyOperandSharedAcrossArguments(this);
  if (!bVar14) {
    return bVar14;
  }
LAB_14a100161:
  uVar17 = (this->Header).Arguments.ArrayNum;
  local_2c0.Data = (FScriptContainerElement *)0x0;
  local_2b8 = 0;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if (0 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar17,&local_2c0,0,(int *)((longlong)&local_2b8 + 4));
  }
  iVar35 = (this->Header).Arguments.ArrayNum;
  pFVar39 = (FRigVMGraphFunctionArgument *)(this->Header).Arguments.AllocatorInstance.Data;
  pFVar31 = pFVar39 + iVar35;
  while( true ) {
    if ((this->Header).Arguments.ArrayNum != iVar35) {
      local_320 = 0;
      `TCheckedPointerIterator<FRigVMGraphFunctionArgument,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_320);
    }
    if (pFVar39 == pFVar31) break;
    bVar14 = FRigVMGraphFunctionArgument::IsExecuteContext(pFVar39);
    if (!bVar14) {
      GetOperandForArgument(this,&local_310);
      if (local_310.ComparisonIndex.Value._2_2_ != -1) {
        iVar16 = (int)local_2b8;
        if ((int)local_2b8 == local_2b8._4_4_) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_2c0,(int *)((longlong)&local_2b8 + 4));
        }
        local_2b8 = CONCAT44(local_2b8._4_4_,iVar16 + 1);
        pFVar24 = (FName *)(local_2c0.Data + (longlong)iVar16 * 0x10);
        *pFVar24 = pFVar39->Name;
        pFVar24[1].ComparisonIndex.Value = local_310.ComparisonIndex.Value;
        *(undefined2 *)&pFVar24[1].Number = (undefined2)local_310.Number;
        uVar17 = ::GetTypeHash((FRigVMOperand *)&local_310);
        iVar16 = TSet<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FRigVMOperand>(&local_88,uVar17,(FRigVMOperand *)&local_310);
        if ((iVar16 == -1) ||
           (lVar20 = (longlong)iVar16 * 0x20 + local_88.Elements._0_8_, lVar20 == 0)) {
          local_188 = &local_310;
          TSet<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TKeyInitializer<FRigVMOperand_const_&>_>
                    (&local_88,(uint)&local_290,
                     (TKeyInitializer<FRigVMOperand_const_&> *)(ulonglong)uVar17,(bool *)&local_188)
          ;
          lVar20 = (longlong)local_290 * 0x20 + local_88.Elements._0_8_;
        }
        if (((*(FRigVMGraphFunctionArgument **)(lVar20 + 8) <= pFVar39) &&
            (pFVar39 < (FRigVMGraphFunctionArgument *)
                       (&(*(FRigVMGraphFunctionArgument **)(lVar20 + 8))->Name +
                       *(int *)(lVar20 + 0x14)))) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        iVar16 = *(int *)(lVar20 + 0x10);
        if (iVar16 == *(int *)(lVar20 + 0x14)) {
          iVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)(lVar20 + 8),(int *)(lVar20 + 0x14));
        }
        *(int *)(lVar20 + 0x10) = iVar16 + 1;
        *(FName *)(((ForAnyElementType *)(lVar20 + 8))->Data + (longlong)iVar16 * 8) = pFVar39->Name
        ;
      }
    }
    pFVar39 = pFVar39 + 1;
  }
  uVar32 = 0;
  local_328.MemoryType = Work;
  pFVar26 = (FRigVMInstruction *)0xffffffffffffffff;
  local_328.RegisterIndex = 0xffff;
  local_328.RegisterOffset = 0xffff;
  uVar17 = 0xffffffff;
  local_318.MemoryType = Work;
  local_318.RegisterIndex = 0xffff;
  local_318.RegisterOffset = 0xffff;
  local_2d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2d8.Data.ArrayNum = 0;
  local_2d8.Data.ArrayMax = 0;
  local_2e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2e8.Data.ArrayNum = 0;
  local_2e8.Data.ArrayMax = 0;
  uVar34 = uVar32;
  if ((this->Header).Arguments.ArrayNum < 1) {
LAB_14a1005d9:
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
    }
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
    if (local_2c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.Data);
    }
    return true;
  }
  do {
    uVar30 = (uint)uVar32;
    uVar18 = 0;
    if ((int)uVar30 < (this->Header).Arguments.ArrayNum) {
      uVar18 = ~uVar30 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    pFVar39 = (FRigVMGraphFunctionArgument *)
              ((this->Header).Arguments.AllocatorInstance.Data + uVar34);
    bVar14 = FRigVMGraphFunctionArgument::IsExecuteContext(pFVar39);
    if (!bVar14) {
      uVar17 = uVar17 + 1;
      pFVar26 = (FRigVMInstruction *)((longlong)&pFVar26->Index + 1);
      local_2f0 = uVar17;
      local_2b0 = pFVar26;
      FVar19 = GetOperandForArgument(this,&local_118);
      uVar5 = *(undefined4 *)CONCAT26(extraout_var,FVar19);
      local_328.MemoryType = (ERigVMMemoryType)uVar5;
      local_328._1_1_ = SUB41((uint)uVar5 >> 8,0);
      local_328.RegisterIndex = (ushort)((uint)uVar5 >> 0x10);
      uVar3 = *(undefined2 *)((undefined4 *)CONCAT26(extraout_var,FVar19) + 1);
      if (local_328.RegisterIndex == 0xffff) {
        local_2a2 = 0;
        uStack_2a0 = 0xffff;
        uStack_29e = 0xffff;
        local_328.MemoryType = Work;
        local_328._1_1_ = uStack_2a1;
        local_328.RegisterIndex = 0xffff;
        local_328.RegisterOffset = 0xffff;
      }
      else {
        local_328.RegisterOffset = uVar3;
        uVar18 = ::GetTypeHash(&local_328);
        if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
          FVar36 = (ForElementType<FSetElementId>)&local_88.Hash;
          if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar36 = local_88.Hash.SecondaryData;
          }
          uVar5 = *(int *)((longlong)FVar36 + (ulonglong)(local_88.HashSize - 1U & uVar18) * 4);
          while (uVar5 != 0xffffffff) {
            pEVar27 = (ERigVMMemoryType *)((longlong)(int)uVar5 * 0x20 + local_88.Elements._0_8_);
            if (((*pEVar27 == local_328.MemoryType) &&
                (*(undefined2 *)(pEVar27 + 2) == local_328.RegisterIndex)) &&
               (*(undefined2 *)(pEVar27 + 4) == uVar3)) {
              if (uVar5 != 0xffffffff) {
                if (pEVar27 == (ERigVMMemoryType *)0x0) goto LAB_14a100534;
                goto LAB_14a10055a;
              }
              break;
            }
            uVar5 = *(undefined4 *)(pEVar27 + 0x18);
          }
        }
        pEVar27 = (ERigVMMemoryType *)0x0;
LAB_14a100534:
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Pair != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                            ,0x288,L"");
        if (bVar14) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
LAB_14a10055a:
        iVar35 = 0;
        pFVar26 = local_2b0;
        if (*(undefined4 *)(pEVar27 + 0x10) != Literal) {
          if (((int)*(undefined4 *)(pEVar27 + 0x10) < 1) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar8 = (code *)swi(3);
            uVar15 = (*pcVar8)();
            return (bool)uVar15;
          }
          if ((**(uint **)(pEVar27 + 8) != (pFVar39->Name).ComparisonIndex.Value) ||
             (pFVar26 = local_2b0, (*(uint **)(pEVar27 + 8))[1] != (pFVar39->Name).Number)) break;
        }
      }
    }
    uVar32 = (ulonglong)(uVar30 + 1);
    uVar34 = uVar34 + 0xb0;
    if ((this->Header).Arguments.ArrayNum <= (int)(uVar30 + 1)) goto LAB_14a1005d9;
  } while( true );
  if ((local_328.MemoryType != Work) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceOperand.GetMemoryType() == ERigVMMemoryType::Work",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMGraphFunctionDefinition.cpp"
                          ,0x2af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  pTVar2 = &(this->CompilationData).WorkPropertyDescriptions;
  if (local_328.RegisterIndex == 0xffff) {
    uVar18 = 0xffffffff;
  }
  else {
    uVar18 = (uint)local_328.RegisterIndex;
    uVar17 = 0;
    if ((int)(uint)local_328.RegisterIndex <
        (this->CompilationData).WorkPropertyDescriptions.ArrayNum) {
      uVar17 = ~uVar18 >> 0x1f;
    }
    if (uVar17 != 0) goto LAB_14a100720;
  }
  bVar14 = ::FDebug::CheckVerifyFailedImpl2
                     ("(Index >= 0) & (Index < ArrayNum)",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                      ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar14) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
LAB_14a100720:
  pFVar28 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar18 * 0x50;
  local_1f8 = *(undefined8 *)pFVar28;
  ::FString::FString(&local_1f0,(FString *)(pFVar28 + 8));
  local_1e0 = *(undefined8 *)(pFVar28 + 0x18);
  FSoftObjectPath::FSoftObjectPath(&local_1d8,(FSoftObjectPath *)(pFVar28 + 0x20));
  ::FString::FString(&local_1b8,(FString *)(pFVar28 + 0x40));
  local_288 = (TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
               *)&(this->CompilationData).Operands;
  puVar40 = &(this->CompilationData).Operands.field_0x10;
  uStack_274 = 1;
  local_260 = 0;
  iVar16 = *(int *)&(this->CompilationData).Operands.field_0x28;
  iStack_264 = 0;
  if (iVar16 != 0) {
    puVar6 = *(uint **)&(this->CompilationData).Operands.field_0x20;
    puVar38 = (uint *)puVar40;
    if (puVar6 != (uint *)0x0) {
      puVar38 = puVar6;
    }
    uVar17 = *puVar38;
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar35;
      local_260 = local_260 + 0x20;
      iVar35 = iVar35 + 1;
      iStack_264 = iVar16;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar35) goto LAB_14a100811;
      uVar17 = puVar38[lVar20 + 1];
    }
    uStack_274 = ~(uVar17 - 1) & uVar17;
    uVar34 = (ulonglong)uStack_274 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1a8 = (int)lVar20;
    iStack_264 = local_260 + -1 + local_1a8;
    if (iVar16 < iStack_264) {
      iStack_264 = iVar16;
    }
  }
LAB_14a100811:
  uStack_25c = local_8c;
  iStack_258 = *(int *)&(local_2c8->CompilationData).Operands.field_0x8 -
               *(int *)&(this->CompilationData).Operands.field_0x34;
  uVar17 = *(uint *)&(local_2c8->CompilationData).Operands.field_0x28;
  TStack_170._padding_ = CONCAT44(uStack_274,iVar35);
  uVar18 = uVar17 & 0xffffffe0;
  uStack_268 = 0xffffffff;
  TStack_170.CurrentBitIndex = iStack_264;
  TStack_170.UnvisitedBitMask = 0xffffffff;
  iVar33 = (int)uVar17 >> 5;
  TStack_170._28_4_ = local_8c;
  TStack_170.BaseBitIndex = local_260;
  uStack_150 = CONCAT44(uStack_254,iStack_258);
  local_280 = local_288;
  iStack_278 = iVar35;
  local_270 = puVar40;
  local_178 = local_288;
  TStack_170.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
  if ((((int)uVar17 < 0) || (iVar16 < (int)uVar17)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  pTVar12 = local_288;
  uVar30 = *(uint *)&(this->CompilationData).Operands.field_0x28;
  if (uVar17 != uVar30) {
    puVar7 = *(undefined1 **)&(this->CompilationData).Operands.field_0x20;
    puVar37 = puVar40;
    if (puVar7 != (undefined1 *)0x0) {
      puVar37 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar33 * 4);
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar33;
      uVar18 = uVar18 + 0x20;
      iVar33 = iVar33 + 1;
      uVar17 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar33)
      goto LAB_14a100940;
      uVar17 = *(uint *)(puVar37 + lVar20 * 4 + 4);
    }
    uVar34 = (ulonglong)(~(uVar17 - 1) & uVar17) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_1a4 = (int)lVar20;
    uVar17 = local_1a4 + -1 + uVar18;
    if ((int)uVar30 < (int)uVar17) {
      uVar17 = uVar30;
    }
  }
LAB_14a100940:
  do {
    pTVar13 = local_178;
    if (*(int *)&(local_178->Elements).field_0x8 - *(int *)&(local_178->Elements).field_0x34 !=
        (int)uStack_150) {
      local_31f = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_31f);
    }
    if (((TStack_170.CurrentBitIndex == uVar17) &&
        (TStack_170.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar40)) &&
       (pTVar13 == pTVar12)) goto LAB_14a100a2f;
    pFVar25 = (FString *)
              ((longlong)TStack_170.CurrentBitIndex * 0x20 + *(longlong *)&pTVar13->Elements);
    if (((*(ERigVMMemoryType *)&pFVar25[1].Data.AllocatorInstance.Data == local_328.MemoryType) &&
        (*(ushort *)((longlong)&pFVar25[1].Data.AllocatorInstance.Data + 2) ==
         local_328.RegisterIndex)) &&
       (*(ushort *)((longlong)&pFVar25[1].Data.AllocatorInstance.Data + 4) ==
        local_328.RegisterOffset)) break;
    TStack_170.UnvisitedBitMask = TStack_170.UnvisitedBitMask & ~TStack_170._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_170);
  } while( true );
  if (&local_2d8 != pFVar25) {
    iVar35 = (pFVar25->Data).ArrayNum;
    pFVar28 = (pFVar25->Data).AllocatorInstance.Data;
    local_2d8.Data.ArrayNum = iVar35;
    if ((iVar35 == 0) && (local_2d8.Data.ArrayMax == 0)) {
      local_2d8.Data.ArrayNum = 0;
      local_2d8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar35,local_2d8.Data.ArrayMax,(ForAnyElementType *)&local_2d8,iVar35,
                 &local_2d8.Data.ArrayMax);
      if (iVar35 != 0) {
        memcpy(local_2d8.Data.AllocatorInstance.Data,pFVar28,(longlong)iVar35 * 2);
      }
    }
  }
LAB_14a100a2f:
  if ((local_2d8.Data.ArrayNum < 2) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SourcePinPath.IsEmpty()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMGraphFunctionDefinition.cpp"
                          ,700,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  local_308.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_308.Data.ArrayNum = 0;
  local_308.Data.ArrayMax = 0;
  local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Data.ArrayNum = 0;
  local_250.Data.ArrayMax = 0;
  local_220.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_220.Data.ArrayNum = 0;
  local_220.Data.ArrayMax = 0;
  local_230.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_230.Data.ArrayNum = 0;
  local_230.Data.ArrayMax = 0;
  bVar14 = RigVMStringUtils::SplitPinPathAtEnd(&local_2d8,&local_308,&local_230);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("RigVMStringUtils::SplitPinPathAtEnd(SourcePinPath, CompleteNodePath, PinName)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMGraphFunctionDefinition.cpp"
                          ,0x2be,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  bVar14 = RigVMStringUtils::SplitNodePathAtEnd(&local_308,&local_250,&local_220);
  if ((!bVar14) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("RigVMStringUtils::SplitNodePathAtEnd(CompleteNodePath, NodePathPrefix, NodeName)"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMGraphFunctionDefinition.cpp"
                          ,0x2bf,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  if ((pFVar39->Direction == Input) || (pFVar39->Direction == IO)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FString::FString(&NewNodeName,L"Entry");
      atexit(`FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired'::__l66::
             _dynamic_atexit_destructor_for__NewNodeName__);
      _Init_thread_footer(&::_TSS2);
    }
    pFVar25 = RigVMStringUtils::JoinNodePath(&local_f8,&local_250,&NewNodeName);
    FVar23.Data = local_f8.Data.AllocatorInstance.Data;
    if (&local_308 != pFVar25) {
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      local_308.Data.AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
      (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.Data.ArrayNum = (pFVar25->Data).ArrayNum;
      local_308.Data.ArrayMax = (pFVar25->Data).ArrayMax;
      (pFVar25->Data).ArrayNum = 0;
      (pFVar25->Data).ArrayMax = 0;
      FVar23.Data = local_f8.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FString::FString(&NewNodeName,L"Return");
      atexit(`FRigVMGraphFunctionData::PatchSharedArgumentOperandsIfRequired'::__l68::
             _dynamic_atexit_destructor_for__NewNodeName__);
      _Init_thread_footer(&::_TSS3);
    }
    pFVar25 = RigVMStringUtils::JoinNodePath(&local_108,&local_250,&NewNodeName);
    FVar23.Data = local_108.Data.AllocatorInstance.Data;
    if (&local_308 != pFVar25) {
      if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Data.AllocatorInstance.Data);
      }
      local_308.Data.AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
      (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_308.Data.ArrayNum = (pFVar25->Data).ArrayNum;
      local_308.Data.ArrayMax = (pFVar25->Data).ArrayMax;
      (pFVar25->Data).ArrayNum = 0;
      (pFVar25->Data).ArrayMax = 0;
      FVar23.Data = local_108.Data.AllocatorInstance.Data;
    }
  }
  if (FVar23.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar23.Data);
  }
  pFVar25 = ::FName::ToString((FName *)pFVar39,local_d8);
  pFVar25 = RigVMStringUtils::JoinPinPath(&local_e8,&local_308,pFVar25);
  if (&local_2e8 != pFVar25) {
    if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
    }
    local_2e8.Data.AllocatorInstance.Data = (pFVar25->Data).AllocatorInstance.Data;
    (pFVar25->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2e8.Data.ArrayNum = (pFVar25->Data).ArrayNum;
    local_2e8.Data.ArrayMax = (pFVar25->Data).ArrayMax;
    (pFVar25->Data).ArrayNum = 0;
    (pFVar25->Data).ArrayMax = 0;
  }
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  if (local_d8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8[0].Data.AllocatorInstance.Data);
  }
  FVar23.Data = (FScriptContainerElement *)L"";
  if (local_2e8.Data.ArrayNum != 0) {
    FVar23.Data = local_2e8.Data.AllocatorInstance.Data;
  }
  ::FName::FName(&local_1a0,(wchar_t *)FVar23.Data);
  FVar21 = FRigVMPropertyDescription::SanitizeName(&local_110);
  pFVar11 = local_2c8;
  uVar17 = local_2f0;
  uVar34 = (ulonglong)(int)local_2f0;
  local_1f8 = *(undefined8 *)FVar21;
  if (((int)local_2f0 < 0) ||
     ((local_2c8->CompilationData).WorkPropertyDescriptions.ArrayNum <= (int)local_2f0)) {
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar28 <= (FScriptContainerElement *)&local_1f8) &&
       (((FScriptContainerElement *)&local_1f8 <
         pFVar28 + (longlong)(this->CompilationData).WorkPropertyDescriptions.ArrayMax * 0x50 &&
        (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar14)))) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    uVar17 = (this->CompilationData).WorkPropertyDescriptions.ArrayNum;
    piVar1 = &(this->CompilationData).WorkPropertyDescriptions.ArrayMax;
    if (uVar17 == *piVar1) {
      uVar17 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    uVar34 = (ulonglong)uVar17;
    (this->CompilationData).WorkPropertyDescriptions.ArrayNum = uVar17 + 1;
    pFVar28 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x50;
    *(undefined8 *)pFVar28 = local_1f8;
  }
  else {
    pFVar28 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar28 <= (FScriptContainerElement *)&local_1f8) &&
        ((FScriptContainerElement *)&local_1f8 <
         pFVar28 + (longlong)(this->CompilationData).WorkPropertyDescriptions.ArrayMax * 0x50)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      uVar15 = (*pcVar8)();
      return (bool)uVar15;
    }
    iVar35 = (this->CompilationData).WorkPropertyDescriptions.ArrayNum;
    piVar1 = &(this->CompilationData).WorkPropertyDescriptions.ArrayMax;
    if (iVar35 == *piVar1) {
      iVar35 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x850,&pTVar2->AllocatorInstance,piVar1);
    }
    pFVar28 = (pTVar2->AllocatorInstance).Data + uVar34 * 0x50;
    (this->CompilationData).WorkPropertyDescriptions.ArrayNum = iVar35 + 1;
    memmove(pFVar28 + 0x50,pFVar28,(longlong)(int)(iVar35 - uVar17) * 0x50);
    pFVar28 = (pTVar2->AllocatorInstance).Data + (longlong)local_2b0 * 0x50;
    *(undefined8 *)pFVar28 = local_1f8;
  }
  ::FString::FString((FString *)(pFVar28 + 8),&local_1f0);
  *(undefined8 *)(pFVar28 + 0x18) = local_1e0;
  FSoftObjectPath::FSoftObjectPath((FSoftObjectPath *)(pFVar28 + 0x20),&local_1d8);
  ::FString::FString((FString *)(pFVar28 + 0x40),&local_1b8);
  uVar5 = _local_2a8;
  uVar17 = 0xffffffff;
  if (local_328.RegisterOffset != 0xffff) {
    uVar17 = (uint)local_328.RegisterOffset;
  }
  _local_2a8 = CONCAT31(uStack_2a7,local_328.MemoryType);
  if ((int)uVar34 < 0) {
    uVar34 = 0xffff;
  }
  local_318.RegisterIndex = (ushort)uVar34;
  _local_2a8 = CONCAT22(local_318.RegisterIndex,_local_2a8);
  if ((int)uVar17 < 0) {
    uVar17 = 0xffff;
  }
  local_318.RegisterOffset = (ushort)uVar17;
  local_318.MemoryType = local_328.MemoryType;
  local_318._1_1_ = SUB41((uint)uVar5 >> 8,0);
  local_2a4 = local_318.RegisterOffset;
  if (local_230.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_230.Data.AllocatorInstance.Data);
  }
  if (local_220.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_220.Data.AllocatorInstance.Data);
  }
  if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data.AllocatorInstance.Data);
  }
  if (local_308.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_308.Data.AllocatorInstance.Data);
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  if (local_1d8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d8.SubPathString.Data.AllocatorInstance.Data);
  }
  if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
  }
  local_2f8 = CONCAT22(local_318.RegisterIndex,CONCAT11(local_318._1_1_,local_318.MemoryType));
  iVar35 = (pFVar11->CompilationData).WorkPropertyPathDescriptions.ArrayNum;
  pFVar29 = (pFVar11->CompilationData).WorkPropertyPathDescriptions.AllocatorInstance.Data;
  local_2f4 = local_318.RegisterOffset;
  pFVar28 = pFVar29 + (longlong)iVar35 * 0x28;
  while( true ) {
    if ((pFVar11->CompilationData).WorkPropertyPathDescriptions.ArrayNum != iVar35) {
      local_31e = 0;
      `TCheckedPointerIterator<FRigVMFunctionCompilationPropertyPath,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_31e);
    }
    pTVar12 = local_288;
    if (pFVar29 == pFVar28) break;
    iVar16 = *(int *)pFVar29;
    if (iVar16 != -1) {
      uVar17 = 0xffffffff;
      if (local_318.RegisterIndex != 0xffff) {
        uVar17 = (uint)local_318.RegisterIndex;
      }
      if ((int)uVar17 <= iVar16) {
        *(int *)pFVar29 = iVar16 + 1;
      }
    }
    pFVar29 = pFVar29 + 0x28;
  }
  iVar35 = *(int *)&(this->CompilationData).Operands.field_0x28;
  iStack_278 = 0;
  uStack_274 = 1;
  local_260 = 0;
  iStack_264 = 0;
  if (iVar35 != 0) {
    puVar6 = *(uint **)&(this->CompilationData).Operands.field_0x20;
    puVar38 = (uint *)puVar40;
    if (puVar6 != (uint *)0x0) {
      puVar38 = puVar6;
    }
    uVar17 = *puVar38;
    local_260 = 0;
    while (uVar17 == 0) {
      lVar20 = (longlong)iStack_278;
      local_260 = local_260 + 0x20;
      iStack_278 = iStack_278 + 1;
      iStack_264 = iVar35;
      if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_278) goto LAB_14a101061;
      uVar17 = puVar38[lVar20 + 1];
    }
    uStack_274 = -uVar17 & uVar17;
    uVar34 = (ulonglong)uStack_274 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_180 = (int)lVar20;
    iStack_264 = local_260 + -1 + local_180;
    if (iVar35 < iStack_264) {
      iStack_264 = iVar35;
    }
  }
LAB_14a101061:
  uStack_25c = local_ac;
  uVar17 = *(uint *)&(pFVar11->CompilationData).Operands.field_0x28;
  iStack_258 = *(int *)&(pFVar11->CompilationData).Operands.field_0x8 -
               *(int *)&(local_288->Elements).field_0x34;
  local_280 = local_288;
  uVar18 = uVar17 & 0xffffffe0;
  TStack_140._padding_ = CONCAT44(uStack_274,iStack_278);
  local_148 = local_288;
  uStack_268 = 0xffffffff;
  TStack_140.CurrentBitIndex = iStack_264;
  TStack_140.UnvisitedBitMask = 0xffffffff;
  TStack_140._28_4_ = local_ac;
  TStack_140.BaseBitIndex = local_260;
  uStack_120 = CONCAT44(uStack_254,iStack_258);
  iVar35 = (int)uVar17 >> 5;
  local_270 = puVar40;
  TStack_140.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar40;
  if (((int)uVar17 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    uVar15 = (*pcVar8)();
    return (bool)uVar15;
  }
  uVar30 = *(uint *)&(this->CompilationData).Operands.field_0x28;
  if (uVar17 != uVar30) {
    puVar7 = *(undefined1 **)&(this->CompilationData).Operands.field_0x20;
    puVar37 = puVar40;
    if (puVar7 != (undefined1 *)0x0) {
      puVar37 = puVar7;
    }
    uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar35 * 4);
    while (uVar17 == 0) {
      lVar20 = (longlong)iVar35;
      uVar18 = uVar18 + 0x20;
      iVar35 = iVar35 + 1;
      uVar17 = uVar30;
      if ((int)((uVar30 - 1) + ((int)(uVar30 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar35)
      goto LAB_14a101173;
      uVar17 = *(uint *)(puVar37 + lVar20 * 4 + 4);
    }
    uVar34 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar20 = 0x3f;
    if (uVar34 != 0) {
      for (; uVar34 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    local_190 = (int)lVar20;
    uVar17 = local_190 + -1 + uVar18;
    if ((int)uVar30 < (int)uVar17) {
      uVar17 = uVar30;
    }
  }
LAB_14a101173:
  uVar10 = local_2f8._2_2_;
  cVar9 = (ERigVMMemoryType)local_2f8;
  while( true ) {
    pTVar13 = local_148;
    if (*(int *)&(local_148->Elements).field_0x8 - *(int *)&(local_148->Elements).field_0x34 !=
        (int)uStack_120) {
      local_31d = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FRigVMOperand>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_31d);
    }
    uVar4 = local_318.RegisterOffset;
    if (((TStack_140.CurrentBitIndex == uVar17) &&
        (TStack_140.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar40)) &&
       (pTVar13 == pTVar12)) break;
    lVar20 = (longlong)TStack_140.CurrentBitIndex * 0x20 + *(longlong *)&pTVar13->Elements;
    if (*(char *)(lVar20 + 0x10) == cVar9) {
      uVar4 = *(ushort *)(lVar20 + 0x12);
      uVar30 = (uint)uVar4;
      uVar18 = 0xffffffff;
      if (uVar4 != 0xffff) {
        uVar18 = (uint)uVar4;
      }
      uVar22 = 0xffffffff;
      if (uVar10 != 0xffff) {
        uVar22 = (uint)uVar10;
      }
      if ((int)uVar22 <= (int)uVar18) {
        uVar18 = (uint)*(ushort *)(lVar20 + 0x14);
        if (*(ushort *)(lVar20 + 0x14) == 0xffff) {
          uVar18 = 0xffffffff;
        }
        if (uVar4 == 0xffff) {
          uVar30 = 0xffffffff;
        }
        iVar35 = uVar30 + 1;
        local_29c = CONCAT31(local_29c._1_3_,*(char *)(lVar20 + 0x10));
        if (iVar35 < 0) {
          iVar35 = 0xffff;
        }
        local_29c = CONCAT22((short)iVar35,(undefined2)local_29c);
        if ((int)uVar18 < 0) {
          uVar18 = 0xffff;
        }
        *(undefined4 *)(lVar20 + 0x10) = local_29c;
        local_298 = (undefined2)uVar18;
        *(undefined2 *)(lVar20 + 0x14) = local_298;
      }
    }
    TStack_140.UnvisitedBitMask = TStack_140.UnvisitedBitMask & ~TStack_140._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_140);
  }
  uVar5 = CONCAT22(local_318.RegisterIndex,CONCAT11(local_318._1_1_,local_318.MemoryType));
  iVar35 = local_2e8.Data.ArrayNum + -1;
  FVar23.Data = local_2e8.Data.AllocatorInstance.Data;
  if (local_2e8.Data.ArrayNum == 0) {
    iVar35 = 0;
    FVar23.Data = (FScriptContainerElement *)L"";
  }
  uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar35,(wchar_t *)FVar23.Data);
  iVar35 = TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>(pTVar12,uVar17,&local_2e8);
  if ((iVar35 == -1) ||
     (lVar20 = (longlong)iVar35 * 0x20 + *(longlong *)&pTVar12->Elements, lVar20 == 0)) {
    local_198 = &local_2e8;
    TSet<TTuple<FString,FRigVMOperand>,TDefaultMapHashableKeyFuncs<FString,FRigVMOperand,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
              (pTVar12,(uint)&local_28c,(TKeyInitializer<FString_const_&> *)(ulonglong)uVar17,
               (bool *)&local_198);
    lVar20 = (longlong)local_28c * 0x20 + *(longlong *)&pTVar12->Elements;
  }
  *(undefined4 *)(lVar20 + 0x10) = uVar5;
  this_00 = &local_2c8->CompilationData;
  *(ushort *)(lVar20 + 0x14) = uVar4;
  FRigVMInstructionArray::FRigVMInstructionArray
            (&local_210,&this_00->ByteCode,(local_2c8->CompilationData).ByteCode.bByteCodeIsAligned)
  ;
  local_2f0 = local_210.Instructions.ArrayNum;
  uVar34 = (ulonglong)(int)local_2f0;
  pFVar26 = (FRigVMInstruction *)(local_210.Instructions.AllocatorInstance.Data + uVar34 * 0xc);
  FVar23.Data = local_210.Instructions.AllocatorInstance.Data;
  local_2b0 = pFVar26;
  while( true ) {
    uVar17 = 0;
    if (local_210.Instructions.ArrayNum != (int)uVar34) {
      local_31c[0] = 0;
      `TCheckedPointerIterator<FRigVMInstruction_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_31c);
    }
    if ((FRigVMInstruction *)FVar23.Data == pFVar26) break;
    FRigVMByteCode::GetOperandsForOp(&this_00->ByteCode,&local_240,(FRigVMInstruction *)FVar23.Data)
    ;
    if (0 < local_240.ArrayNum) {
      lVar20 = 0;
      iVar35 = local_240.ArrayNum;
      do {
        uVar18 = 0;
        if ((int)uVar17 < iVar35) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), iVar35 = local_240.ArrayNum, bVar14)) {
          pcVar8 = (code *)swi(3);
          uVar15 = (*pcVar8)();
          return (bool)uVar15;
        }
        pEVar27 = &(local_240.DataPtr)->MemoryType + lVar20;
        if (*pEVar27 == (ERigVMMemoryType)local_2f8) {
          uVar4 = *(ushort *)(pEVar27 + 2);
          uVar18 = 0xffffffff;
          if (uVar4 != 0xffff) {
            uVar18 = (uint)uVar4;
          }
          uVar30 = 0xffffffff;
          if (uVar10 != 0xffff) {
            uVar30 = (uint)uVar10;
          }
          if ((int)uVar30 <= (int)uVar18) {
            uVar18 = 0xffffffff;
            if (*(ushort *)(pEVar27 + 4) != 0xffff) {
              uVar18 = (uint)*(ushort *)(pEVar27 + 4);
            }
            uVar30 = 0xffffffff;
            if (uVar4 != 0xffff) {
              uVar30 = (uint)uVar4;
            }
            iVar35 = uVar30 + 1;
            local_296 = CONCAT31(local_296._1_3_,*pEVar27);
            if (iVar35 < 0) {
              iVar35 = 0xffff;
            }
            local_296 = CONCAT22((short)iVar35,(undefined2)local_296);
            if ((int)uVar18 < 0) {
              uVar18 = 0xffff;
            }
            *(undefined4 *)pEVar27 = local_296;
            local_292 = (ushort)uVar18;
            *(ushort *)(pEVar27 + 4) = local_292;
            iVar35 = local_240.ArrayNum;
          }
        }
        uVar17 = uVar17 + 1;
        lVar20 = lVar20 + 6;
      } while ((int)uVar17 < iVar35);
      uVar34 = (ulonglong)local_2f0;
      pFVar26 = local_2b0;
    }
    FVar23.Data = FVar23.Data + 0xc;
  }
  FRigVMByteCode::AddCopyOp(&this_00->ByteCode,&local_328,&local_318);
  if ((FRigVMInstruction *)local_210.Instructions.AllocatorInstance.Data != (FRigVMInstruction *)0x0
     ) {
    FMemory::Free(local_210.Instructions.AllocatorInstance.Data);
  }
  if (local_2e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e8.Data.AllocatorInstance.Data);
  }
  if (local_2d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.Data.AllocatorInstance.Data);
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigVMOperand,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  this = local_2c8;
  if (local_2c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2c0.Data);
  }
  goto LAB_14a100161;
}

