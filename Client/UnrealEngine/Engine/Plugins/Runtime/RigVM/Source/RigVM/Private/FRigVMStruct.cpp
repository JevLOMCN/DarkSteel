// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 27

// GetSupportedWorkflows @ 14a06b110

TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMStruct::GetSupportedWorkflows
          (FRigVMStruct *this,
          TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          UObject *param_1)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  return __return_storage_ptr__;
}

// ProcessPinLabelForInjection @ 14a072cc0

FString * __thiscall
FRigVMStruct::ProcessPinLabelForInjection
          (FRigVMStruct *this,FString *__return_storage_ptr__,FString *param_1)

{
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetEventName @ 14a072cf0

FName __thiscall FRigVMStruct::GetEventName(FRigVMStruct *this)

{
  FName in_RDX;
  
  *(undefined8 *)in_RDX = 0;
  return in_RDX;
}

// CanOnlyExistOnce @ 14a072d00

bool __thiscall FRigVMStruct::CanOnlyExistOnce(FRigVMStruct *this)

{
  return false;
}

// GetUnitLabel @ 14a072d10

FString * __thiscall FRigVMStruct::GetUnitLabel(FRigVMStruct *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetUnitSubTitle @ 14a072d30

FString * __thiscall
FRigVMStruct::GetUnitSubTitle(FRigVMStruct *this,FString *__return_storage_ptr__)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetExecuteContextStruct @ 14a072d50

UScriptStruct * __thiscall FRigVMStruct::GetExecuteContextStruct(FRigVMStruct *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMExecuteContext,(UObject *)pUVar1,
                         L"RigVMExecuteContext");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMExecuteContext.OuterSingleton;
}

// Initialize @ 14a072d90

void __thiscall FRigVMStruct::Initialize(FRigVMStruct *this)

{
  return;
}

// Execute @ 14a072da0

void __thiscall FRigVMStruct::Execute(FRigVMStruct *this)

{
  return;
}

// GetNumSlices @ 14a072dc0

int __thiscall FRigVMStruct::GetNumSlices(FRigVMStruct *this)

{
  return 1;
}

// IsControlFlowBlockSliced @ 14a072dd0

bool __thiscall FRigVMStruct::IsControlFlowBlockSliced(FRigVMStruct *this,FName *param_1)

{
  return false;
}

// OnUnitNodeCreated @ 14a072de0

void __thiscall
FRigVMStruct::OnUnitNodeCreated(FRigVMStruct *this,FRigVMUnitNodeCreatedContext *param_1)

{
  return;
}

// GetUpgradeInfo @ 14a072df0

FRigVMStructUpgradeInfo * __thiscall
FRigVMStruct::GetUpgradeInfo(FRigVMStruct *this,FRigVMStructUpgradeInfo *__return_storage_ptr__)

{
  FRigVMStructUpgradeInfo::FRigVMStructUpgradeInfo(__return_storage_ptr__);
  return __return_storage_ptr__;
}

// ~FRigVMStruct @ 14a07bf50

void __thiscall FRigVMStruct::~FRigVMStruct(FRigVMStruct *this)

{
  *this = (FRigVMStruct)&___7FRigVMStruct__6B_;
  return;
}

// StaticStruct @ 14a0aee20

UScriptStruct * __cdecl FRigVMStruct::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStruct,(UObject *)pUVar1,L"RigVMStruct");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMStruct.OuterSingleton;
}

// GetNextAggregateName @ 14a0aef40

FName __thiscall FRigVMStruct::GetNextAggregateName(FRigVMStruct *this,FName *param_1)

{
  wchar_t wVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  FName *this_00;
  ForAnyElementType FVar7;
  FName *in_R8;
  FName local_res18;
  undefined1 local_res20 [8];
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (*in_R8 == (FName)0x0) {
    param_1->ComparisonIndex = 0;
    param_1->Number = 0;
    return (FName)param_1;
  }
  ::FName::ToString(in_R8,&local_68);
  bVar3 = ::FString::IsNumeric(&local_68);
  if (bVar3) {
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_68.Data.ArrayNum != 0) {
      FVar7.Data = local_68.Data.AllocatorInstance.Data;
    }
    iVar4 = _wtoi((wchar_t *)FVar7.Data);
    pFVar6 = ::FString::FormatAsNumber(&local_38,iVar4 + 1);
    FVar7.Data = (FScriptContainerElement *)L"";
    if ((pFVar6->Data).ArrayNum != 0) {
      FVar7.Data = (pFVar6->Data).AllocatorInstance.Data;
    }
  }
  else {
    iVar4 = local_68.Data.ArrayNum + -1;
    if (local_68.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    if ((iVar4 == 1) &&
       (((wVar1 = *(wchar_t *)local_68.Data.AllocatorInstance.Data, 0x60 < (ushort)wVar1 &&
         ((ushort)wVar1 < 0x7a)) || ((ushort)(wVar1 + L'﾿') < 0x19)))) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      ::FString::AppendChar(&local_58,wVar1 + L'\x01');
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FName::FName(param_1,(wchar_t *)FVar7.Data);
      local_38.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      goto LAB_14a0af1c3;
    }
    iVar4 = ::FString::Find(&local_68,L"_",1,IgnoreCase,FromStart,-1);
    if (iVar4 != -1) {
      iVar5 = ::FString::Find(&local_68,L"_",1,IgnoreCase,FromEnd,-1);
      iVar4 = local_68.Data.ArrayNum + -1;
      if (local_68.Data.ArrayNum == 0) {
        iVar4 = 0;
      }
      if (iVar5 < iVar4) {
        iVar4 = iVar5;
      }
      iVar5 = 0;
      if (0 < iVar4) {
        iVar5 = iVar4;
      }
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_68.Data.ArrayNum != 0) {
        FVar7.Data = local_68.Data.AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_38,(wchar_t *)FVar7.Data,iVar5);
      iVar4 = ::FString::Find(&local_68,L"_",1,IgnoreCase,FromEnd,-1);
      ::FString::RightChop(&local_68,&local_48,iVar4 + 1);
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_48.Data.ArrayNum != 0) {
        FVar7.Data = local_48.Data.AllocatorInstance.Data;
      }
      pcVar2 = *(code **)((longlong)*this + 0x60);
      ::FName::FName(&local_res18,(wchar_t *)FVar7.Data);
      this_00 = (FName *)(*pcVar2)(this,local_res20,&local_res18);
      ::FName::ToString(this_00,&local_28);
      ::FString::PrintfImpl(&local_58,L"%s_%s");
      FVar7.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        FVar7.Data = local_58.Data.AllocatorInstance.Data;
      }
      ::FName::FName(param_1,(wchar_t *)FVar7.Data);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      goto LAB_14a0af1c3;
    }
    ::FString::PrintfImpl(&local_38,L"%s_1");
    FVar7.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar7.Data = local_38.Data.AllocatorInstance.Data;
    }
  }
  ::FName::FName(param_1,(wchar_t *)FVar7.Data);
LAB_14a0af1c3:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// GetControlFlowBlocks_Impl @ 14a0af300

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMStruct::GetControlFlowBlocks_Impl(FRigVMStruct *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`FRigVMStruct::GetControlFlowBlocks_Impl'::__l2::
             _dynamic_atexit_destructor_for__EmptyArray__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &::EmptyArray;
}

// ApplyUpgradeInfo @ 14a0ce160

/* WARNING: Type propagation algorithm not settling */

bool __thiscall FRigVMStruct::ApplyUpgradeInfo(FRigVMStruct *this,FRigVMStructUpgradeInfo *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  FProperty *this_00;
  longlong lVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint *puVar18;
  FName *pFVar19;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_cc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c0;
  undefined8 uStack_a0;
  FOutputDevice local_98;
  int local_88;
  UScriptStruct *local_80;
  UScriptStruct *local_78;
  FName local_70;
  undefined4 local_4c;
  
  if ((((1 < (param_1->NodePath).Data.ArrayNum) || (param_1->OldStruct == (UScriptStruct *)0x0)) ||
      (param_1->NewStruct == (UScriptStruct *)0x0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUpgradeInfo.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x353,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  puVar1 = &(param_1->DefaultValues).field_0x10;
  iVar15 = 0;
  iVar3 = *(int *)&(param_1->DefaultValues).field_0x28;
  iVar17 = 0;
  uVar9 = 1;
  iVar10 = 0;
  if (iVar3 != 0) {
    puVar18 = *(uint **)&(param_1->DefaultValues).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar14 = *puVar18;
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      iVar17 = iVar17 + 0x20;
      iVar15 = iVar15 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a0ce24d;
      uVar14 = puVar18[lVar11 + 1];
    }
    uVar9 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res18 = (int)lVar11;
    iVar10 = iVar17 + -1 + local_res18;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14a0ce24d:
  uVar14 = *(uint *)&(param_1->DefaultValues).field_0x28;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_c0._padding_ = CONCAT44(uVar9,iVar15);
  TStack_c0.CurrentBitIndex = iVar10;
  TStack_c0.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar14 >> 5;
  TStack_c0._28_4_ = local_4c;
  TStack_c0.BaseBitIndex = iVar17;
  uStack_a0 = CONCAT44(uStack_cc,
                       *(int *)&(param_1->DefaultValues).field_0x8 -
                       *(int *)&(param_1->DefaultValues).field_0x34);
  TStack_c0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar3 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = *(uint *)&(param_1->DefaultValues).field_0x28;
  if (uVar14 != uVar9) {
    puVar16 = *(undefined1 **)&(param_1->DefaultValues).field_0x20;
    if (puVar16 == (undefined1 *)0x0) {
      puVar16 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar16 + (longlong)iVar15 * 4);
    while (uVar14 == 0) {
      lVar11 = (longlong)iVar15;
      uVar13 = uVar13 + 0x20;
      iVar15 = iVar15 + 1;
      uVar14 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_14a0ce360;
      uVar14 = *(uint *)(puVar16 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_res20 = (int)lVar11;
    uVar14 = local_res20 + -1 + uVar13;
    if ((int)uVar9 < (int)uVar14) {
      uVar14 = uVar9;
    }
  }
LAB_14a0ce360:
  while( true ) {
    if (*(int *)&(param_1->DefaultValues).field_0x8 - *(int *)&(param_1->DefaultValues).field_0x34
        != (int)uStack_a0) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_c0.CurrentBitIndex == uVar14) &&
       (TStack_c0.Array ==
        (TBitArray<FDefaultBitArrayAllocator> *)&(param_1->DefaultValues).field_0x10)) {
      return true;
    }
    pFVar19 = (FName *)((longlong)TStack_c0.CurrentBitIndex * 0x20 +
                       *(longlong *)&param_1->DefaultValues);
    this_00 = UStruct::FindPropertyByName((UStruct *)param_1->NewStruct,*pFVar19);
    if (this_00 == (FProperty *)0x0) {
      return false;
    }
    if ((this_00->ArrayDim < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) break;
    if ((this == (FRigVMStruct *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    iVar3 = this_00->Offset_Internal;
    pUVar4 = param_1->NewStruct;
    pUVar5 = param_1->OldStruct;
    FOutputDevice::FOutputDevice(&local_98);
    local_98._padding_ = (longlong)&___7FRigVMStructApplyUpgradeInfoErrorContext__6B_;
    local_70 = *pFVar19;
    local_88 = 0;
    if (pFVar19[2].ComparisonIndex.Value == 0) {
      pwVar12 = L"";
    }
    else {
      pwVar12 = *(wchar_t **)(pFVar19 + 1);
    }
    local_80 = pUVar5;
    local_78 = pUVar4;
    bVar7 = FProperty::ValidateImportFlags(this_00,0,&local_98);
    if ((bVar7) && ((FName)pwVar12 != (FName)0x0)) {
      (**(code **)(this_00->_padding_ + 0xe8))
                (this_00,pwVar12,&this->field_0x0 + iVar3,0,0,0x8000000,&local_98);
    }
    if (0 < local_88) {
      FOutputDevice::~FOutputDevice(&local_98);
      return false;
    }
    FOutputDevice::~FOutputDevice(&local_98);
    TStack_c0.UnvisitedBitMask = TStack_c0.UnvisitedBitMask & ~TStack_c0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c0);
  }
  pcVar6 = (code *)swi(3);
  uVar8 = (*pcVar6)();
  return (bool)uVar8;
}

// ExportToFullyQualifiedText @ 14a0d76c0

FString * __thiscall
FRigVMStruct::ExportToFullyQualifiedText
          (FRigVMStruct *this,FString *__return_storage_ptr__,UScriptStruct *param_1,FName *param_2,
          uchar *param_3,bool param_4)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FProperty *pFVar4;
  
  if (param_1 == (UScriptStruct *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InScriptStruct",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                       ,0x2d4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (param_3 != (uchar *)0x0) {
    this = (FRigVMStruct *)param_3;
  }
  pFVar4 = UStruct::FindPropertyByName((UStruct *)param_1,*param_2);
  if (pFVar4 == (FProperty *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
  }
  else {
    if (pFVar4->ArrayDim < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    if (this == (FRigVMStruct *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FString *)(*pcVar1)();
        return pFVar3;
      }
    }
    ExportToFullyQualifiedText
              (__return_storage_ptr__,pFVar4,&this->field_0x0 + pFVar4->Offset_Internal,param_4);
  }
  return __return_storage_ptr__;
}

// ExportToFullyQualifiedText @ 14a0d77d0

FString * __cdecl
FRigVMStruct::ExportToFullyQualifiedText
          (FString *__return_storage_ptr__,FProperty *param_1,uchar *param_2,bool param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  FString *pFVar7;
  FScriptContainerElement *pFVar8;
  wchar_t *pwVar9;
  uchar *puVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int iVar13;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if ((param_1 == (FProperty *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMemberProperty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x27c,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InMemberMemoryPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x27d,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    pFVar7 = (FString *)(*pcVar3)();
    return pFVar7;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  if (param_1 != (FProperty *)0x0) {
    if ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0) {
      pFVar7 = ExportToFullyQualifiedText
                         (&local_78,(UScriptStruct *)param_1[1]._padding_,param_2,true);
      local_48.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      if (__return_storage_ptr__ != pFVar7) {
        pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      }
      goto joined_r0x00014a0d7bf1;
    }
    if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x15 & 1) != 0))
    {
      lVar4 = param_1[1]._padding_;
      (**(code **)(*(longlong *)param_1[1]._padding_ + 0x168))();
      lVar1 = param_1[1]._padding_;
      iVar12 = *(int *)(lVar1 + 0x34);
      if ((iVar12 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ElementSize > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1177,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      if ((lVar1 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InnerProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1178,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FString *)(*pcVar3)();
        return pFVar7;
      }
      local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_98.ArrayNum = 0;
      local_98.ArrayMax = 0;
      puVar10 = (uchar *)0x0;
      while( true ) {
        iVar13 = (int)puVar10;
        if (*(int *)(param_2 + 8) <= iVar13) break;
        puVar10 = (uchar *)0x0;
        if (*(int *)(param_2 + 8) != 0) {
          puVar10 = *(uchar **)param_2;
          if (((lVar4 & 1) != 0) && (((ulonglong)puVar10 & 1) != 0)) {
            puVar10 = param_2 + ((longlong)puVar10 >> 0x18);
          }
          puVar10 = puVar10 + (longlong)iVar12 * (longlong)iVar13;
        }
        pFVar8 = (FScriptContainerElement *)
                 ExportToFullyQualifiedText
                           (&local_68,(FProperty *)param_1[1]._padding_,puVar10,true);
        if (((local_98.AllocatorInstance.Data <= pFVar8) &&
            (pFVar8 < local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 0x10)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
          pcVar3 = (code *)swi(3);
          pFVar7 = (FString *)(*pcVar3)();
          return pFVar7;
        }
        iVar6 = local_98.ArrayNum;
        if (local_98.ArrayNum == local_98.ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_98.AllocatorInstance,&local_98.ArrayMax);
        }
        local_98.ArrayNum = iVar6 + 1;
        pFVar11 = local_98.AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(undefined8 *)pFVar11 = 0;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar8;
        *(undefined8 *)pFVar8 = 0;
        *(int *)(pFVar11 + 8) = *(int *)(pFVar8 + 8);
        *(int *)(pFVar11 + 0xc) = *(int *)(pFVar8 + 0xc);
        *(undefined8 *)(pFVar8 + 8) = 0;
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        puVar10 = (uchar *)(ulonglong)(iVar13 + 1);
      }
      pFVar7 = RigVMStringUtils::JoinStrings(&local_58,&local_98,L",",L"(",L")");
      if (__return_storage_ptr__ != pFVar7) {
        pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
        if (pFVar8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar8);
        }
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
      local_48.Data.AllocatorInstance.Data = local_98.AllocatorInstance.Data;
      goto joined_r0x00014a0d7bf1;
    }
  }
  (**(code **)(param_1->_padding_ + 0xe0))(param_1,__return_storage_ptr__,param_2,0,0,0,1,0);
  uVar2 = *(ulonglong *)(param_1->_padding_ + 0x18);
  if (((uVar2 >> 0xd & 1) == 0) && (((uVar2 >> 0xe & 1) == 0 && ((uVar2 >> 0x1e & 1) == 0)))) {
    return __return_storage_ptr__;
  }
  if (param_3) {
    if ((__return_storage_ptr__->Data).ArrayNum < 2) {
      ::FString::operator=(__return_storage_ptr__,L"\"\"");
      return __return_storage_ptr__;
    }
    pwVar9 = ::FString::operator[](__return_storage_ptr__,0);
    if (*pwVar9 == L'\"') {
      return __return_storage_ptr__;
    }
    iVar13 = (__return_storage_ptr__->Data).ArrayNum;
    iVar12 = iVar13 + -2;
    if (iVar13 == 0) {
      iVar12 = -1;
    }
    pwVar9 = ::FString::operator[](__return_storage_ptr__,iVar12);
    if (*pwVar9 == L'\"') {
      return __return_storage_ptr__;
    }
    ::FString::PrintfImpl(&local_88,L"\"%s\"");
    local_48.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_88) {
      pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_88.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_88.Data.ArrayMax;
      local_88.Data.ArrayNum = 0;
      local_88.Data.ArrayMax = 0;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_48.Data.AllocatorInstance.Data = local_88.Data.AllocatorInstance.Data;
    }
  }
  else {
    pFVar7 = ::FString::TrimQuotes(__return_storage_ptr__,&local_48,(bool *)0x0);
    if (__return_storage_ptr__ != pFVar7) {
      pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
      (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar7->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar7->Data).ArrayMax;
      (pFVar7->Data).ArrayNum = 0;
      (pFVar7->Data).ArrayMax = 0;
    }
  }
joined_r0x00014a0d7bf1:
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ExportToFullyQualifiedText @ 14a0d7c60

/* WARNING: Removing unreachable block (ram,0x00014a0d7f79) */

FString * __cdecl
FRigVMStruct::ExportToFullyQualifiedText
          (FString *__return_storage_ptr__,UScriptStruct *param_1,uchar *param_2,bool param_3)

{
  code *pcVar1;
  FProperty *pFVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FScriptContainerElement *pFVar6;
  TArray<FString,TSizedDefaultAllocator<32>_> local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FInstancedStruct local_58;
  FString local_48;
  TFieldIterator<FProperty> local_38;
  
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x2b2,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  if ((param_2 == (uchar *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InStructMemoryPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x2b3,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FString *)(*pcVar1)();
    return pFVar5;
  }
  if ((param_1->StructFlags & (STRUCT_ImportTextItemNative|STRUCT_ExportTextItemNative)) ==
      STRUCT_NoFlags) {
    local_38.Field = (FField *)param_1->_padding_;
    local_98.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.ArrayNum = 0;
    local_98.ArrayMax = 0;
    local_38.bIncludeInterface = false;
    local_38.InterfaceIndex = -1;
    local_38.bIncludeSuper = true;
    local_38.bIncludeDeprecated = true;
    local_38.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_38);
    pFVar2 = (FProperty *)local_38.Field;
    while (local_38.Field = (FField *)pFVar2, pFVar2 != (FProperty *)0x0) {
      if (((uint)(int)pFVar2->PropertyFlags >> 0xd & 1) == 0) {
        bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&pFVar2->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        if ((pFVar2->ArrayDim < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar1)();
          return pFVar5;
        }
        if ((param_2 == (uchar *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar1)();
          return pFVar5;
        }
        ExportToFullyQualifiedText(&local_48,pFVar2,param_2 + pFVar2->Offset_Internal,param_3);
        ::FString::PrintfImpl(&local_88,L"%s=%s");
        if (((local_98.AllocatorInstance.Data <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             local_98.AllocatorInstance.Data + (longlong)local_98.ArrayMax * 0x10)) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar5 = (FString *)(*pcVar1)();
          return pFVar5;
        }
        if (local_98.ArrayNum == local_98.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_98.AllocatorInstance,&local_98.ArrayMax);
          pFVar6 = local_98.AllocatorInstance.Data + (longlong)iVar4 * 0x10;
          local_98.ArrayNum = iVar4 + 1;
        }
        else {
          pFVar6 = local_98.AllocatorInstance.Data + (longlong)local_98.ArrayNum * 0x10;
          local_98.ArrayNum = local_98.ArrayNum + 1;
        }
        *(undefined8 *)pFVar6 = 0;
        *(FScriptContainerElement **)pFVar6 = local_88.Data.AllocatorInstance.Data;
        *(int *)(pFVar6 + 8) = local_88.Data.ArrayNum;
        *(int *)(pFVar6 + 0xc) = local_88.Data.ArrayMax;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
      }
      local_38.Field = (FField *)pFVar2->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_38);
      pFVar2 = (FProperty *)local_38.Field;
    }
    RigVMStringUtils::JoinStrings(__return_storage_ptr__,&local_98,L",",L"(",L")");
    DestructItems<FString,int>((FString *)local_98.AllocatorInstance.Data,local_98.ArrayNum);
    if (local_98.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.AllocatorInstance.Data);
    }
  }
  else {
    FInstancedStruct::FInstancedStruct(&local_58);
    FInstancedStruct::InitializeAs(&local_58,param_1,(uchar *)0x0);
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    UScriptStruct::ExportText
              (param_1,&local_78,param_2,local_58.StructMemory,(UObject *)0x0,0,(UObject *)0x0,true)
    ;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_78.Data.ArrayMax;
    local_78.Data.ArrayNum = 0;
    local_78.Data.ArrayMax = 0;
    local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FInstancedStruct::Reset(&local_58);
  }
  return __return_storage_ptr__;
}

// GetControlFlowBlocks @ 14a0e2cf0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMStruct::GetControlFlowBlocks(FRigVMStruct *this)

{
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a0e2cf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pTVar1 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(**(code **)((longlong)*this + 0x78))();
  return pTVar1;
}

// GetDefaultValues @ 14a0e3880

TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> * __thiscall
FRigVMStruct::GetDefaultValues
          (FRigVMStruct *this,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *__return_storage_ptr__,UScriptStruct *param_1)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  code *pcVar4;
  FProperty *pFVar5;
  void *_Src;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *pTVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  void *_Dst;
  undefined8 *puVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  longlong local_res20;
  TFieldIterator<FProperty> local_c8;
  int local_b0;
  uint uStack_ac;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined8 uStack_9c;
  undefined4 uStack_94;
  TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_> *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  FSparseArrayAllocationInfo local_68;
  FString local_58;
  
  if ((param_1 == (UScriptStruct *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InScriptStruct",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\RigVM\\Source\\RigVM\\Private\\RigVMCore\\RigVMStruct.cpp"
                         ,0x309,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               *)(*pcVar4)();
    return pTVar10;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if ((param_1->StructFlags & (STRUCT_ImportTextItemNative|STRUCT_ExportTextItemNative)) ==
      STRUCT_NoFlags) {
    local_c8.Field = (FField *)param_1->_padding_;
    local_c8.InterfaceIndex = -1;
    local_c8.bIncludeSuper = true;
    local_c8.bIncludeDeprecated = true;
    local_c8.bIncludeInterface = false;
    local_c8.Struct = (UStruct *)param_1;
    TFieldIterator<FProperty>::IterateToNext(&local_c8);
    pFVar5 = (FProperty *)local_c8.Field;
    while (pFVar5 != (FProperty *)0x0) {
      puVar16 = &__return_storage_ptr__->field_0x10;
      if (((uint)(int)pFVar5->PropertyFlags >> 0xd & 1) == 0) {
        local_c8.Field = (FField *)pFVar5;
        bVar6 = IsThisNotNull(pFVar5,"FField::GetFName");
        if (bVar6) {
          local_res20 = pFVar5->_padding_;
        }
        else {
          local_res20 = 0;
        }
        if ((pFVar5->ArrayDim < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                     *)(*pcVar4)();
          return pTVar10;
        }
        if ((this == (FRigVMStruct *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ContainerPtr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0x2de,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          pTVar10 = (TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                     *)(*pcVar4)();
          return pTVar10;
        }
        ExportToFullyQualifiedText
                  (&local_58,pFVar5,&this->field_0x0 + pFVar5->Offset_Internal,false);
        if (*(int *)&__return_storage_ptr__->field_0x34 == 0) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x20,8,1,(ForAnyElementType *)__return_storage_ptr__,
                             (int *)&__return_storage_ptr__->field_0x8,
                             (int *)&__return_storage_ptr__->field_0xc);
          iVar9 = TBitArray<FDefaultBitArrayAllocator>::AddUninitialized
                            ((TBitArray<FDefaultBitArrayAllocator> *)puVar16,1);
          puVar13 = puVar16;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x20 != (undefined1 *)0x0) {
            puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x20;
          }
          bVar12 = (byte)iVar9 & 0x1f;
          if (iVar9 < 0) {
            iVar9 = iVar9 + 0x1f;
            bVar12 = bVar12 - 0x20;
          }
          *(uint *)(puVar13 + (longlong)(iVar9 >> 5) * 4) =
               *(uint *)(puVar13 + (longlong)(iVar9 >> 5) * 4) & ~(1 << (bVar12 & 0x1f));
        }
        else {
          iVar7 = *(int *)&__return_storage_ptr__->field_0x30;
          iVar1 = *(int *)((longlong)iVar7 * 0x20 + 4 + *(longlong *)__return_storage_ptr__);
          iVar9 = *(int *)&__return_storage_ptr__->field_0x34 + -1;
          *(int *)&__return_storage_ptr__->field_0x30 = iVar1;
          *(int *)&__return_storage_ptr__->field_0x34 = iVar9;
          if (iVar9 != 0) {
            *(undefined4 *)((longlong)iVar1 * 0x20 + *(longlong *)__return_storage_ptr__) =
                 0xffffffff;
          }
        }
        TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::AllocateIndex((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)__return_storage_ptr__,&local_68,iVar7);
        _Src = local_68.Pointer;
        if (local_68.Pointer != (longlong *)0x0) {
          *(longlong *)local_68.Pointer = local_res20;
          ::FString::FString((FString *)((longlong)local_68.Pointer + 8),&local_58);
          *(undefined4 *)((longlong)_Src + 0x18) = 0xffffffff;
        }
        lVar15 = *(longlong *)_Src;
        uVar8 = ::GetTypeHash((FNameEntryId)(uint)lVar15);
        uVar20 = *(int *)&__return_storage_ptr__->field_0x8 -
                 *(int *)&__return_storage_ptr__->field_0x34;
        uVar8 = uVar8 + (int)((ulonglong)lVar15 >> 0x20);
        if (uVar20 == 1) {
LAB_14a0e3b57:
          if (uVar20 < 4) goto LAB_14a0e3bc1;
          uVar14 = (ulonglong)((uVar20 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar17 = 1 << ((byte)lVar15 & 0x1f);
        }
        else {
          if (uVar20 != 0) {
            puVar13 = &__return_storage_ptr__->field_0x38;
            if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
              puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
            }
            iVar7 = *(int *)(puVar13 +
                            (ulonglong)(*(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar8) *
                            4);
            if (iVar7 != -1) {
              lVar15 = *(longlong *)__return_storage_ptr__;
              do {
                if (*(longlong *)((longlong)iVar7 * 0x20 + lVar15) == *(longlong *)_Src) {
                  if (iVar7 != -1) {
                    _Dst = (void *)((longlong)iVar7 * 0x20 + lVar15);
                    pvVar2 = *(void **)((longlong)_Dst + 8);
                    if (pvVar2 != (void *)0x0) {
                      FMemory::Free(pvVar2);
                    }
                    memmove(_Dst,_Src,0x18);
                    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::RemoveAtUninitialized
                              ((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                *)__return_storage_ptr__,local_68.Index,1);
                    goto LAB_14a0e3de0;
                  }
                  break;
                }
                iVar7 = *(int *)((longlong)iVar7 * 0x20 + 0x18 + lVar15);
              } while (iVar7 != -1);
            }
            goto LAB_14a0e3b57;
          }
LAB_14a0e3bc1:
          uVar17 = 1;
        }
        if (((int)uVar20 < 1) || ((int)uVar17 <= *(int *)&__return_storage_ptr__->field_0x48)) {
          uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U & uVar8;
          *(uint *)((longlong)_Src + 0x1c) = uVar8;
          puVar16 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          uVar14 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U & (longlong)(int)uVar8
          ;
          *(undefined4 *)((longlong)_Src + 0x18) = *(undefined4 *)(puVar16 + uVar14 * 4);
          *(int *)(puVar16 + uVar14 * 4) = local_68.Index;
        }
        else {
          *(uint *)&__return_storage_ptr__->field_0x48 = uVar17;
          if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,0,4);
          }
          if (uVar17 != 0) {
            uVar8 = uVar17;
            if (uVar17 < 2) {
              if (*(longlong *)&__return_storage_ptr__->field_0x40 != 0) {
                uVar8 = 0;
                goto LAB_14a0e3c0e;
              }
            }
            else {
LAB_14a0e3c0e:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)&__return_storage_ptr__->field_0x40,0,uVar8,4);
            }
            if (0 < (int)uVar17) {
              uVar14 = 0;
              uVar19 = (ulonglong)uVar17;
              do {
                puVar13 = &__return_storage_ptr__->field_0x38;
                if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                  puVar13 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
                }
                uVar11 = (longlong)(int)uVar17 - 1U & uVar14;
                uVar14 = uVar14 + 1;
                *(undefined4 *)(puVar13 + uVar11 * 4) = 0xffffffff;
                uVar19 = uVar19 - 1;
              } while (uVar19 != 0);
            }
          }
          if (*(int *)&__return_storage_ptr__->field_0x48 != 0) {
            iVar7 = *(int *)&__return_storage_ptr__->field_0x28;
            uVar8 = 0;
            local_b0 = 0;
            uStack_ac = 1;
            uStack_9c = 0;
            if (iVar7 != 0) {
              puVar21 = (uint *)puVar16;
              if (*(uint **)&__return_storage_ptr__->field_0x20 != (uint *)0x0) {
                puVar21 = *(uint **)&__return_storage_ptr__->field_0x20;
              }
              uVar20 = *puVar21;
              local_b0 = 0;
              while (uVar20 == 0) {
                uVar8 = uVar8 + 0x20;
                lVar15 = (longlong)local_b0;
                local_b0 = local_b0 + 1;
                uStack_9c = (ulonglong)uVar8 << 0x20;
                if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < local_b0)
                goto LAB_14a0e3cfa;
                uVar20 = puVar21[lVar15 + 1];
              }
              uStack_ac = -uVar20 & uVar20;
              uVar14 = (ulonglong)uStack_ac * 2 + 1;
              lVar15 = 0x3f;
              if (uVar14 != 0) {
                for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                }
              }
              iVar9 = (int)lVar15 + -1 + uVar8;
              uStack_9c._4_4_ = (int)((ulonglong)uStack_9c >> 0x20);
              uStack_9c = CONCAT44(uStack_9c._4_4_,iVar9);
              if (iVar7 < iVar9) {
LAB_14a0e3cfa:
                uStack_9c = CONCAT44(uStack_9c._4_4_,iVar7);
              }
            }
            local_a0 = 0xffffffff;
            local_88._padding_ = CONCAT44(uStack_ac,local_b0);
            local_88.UnvisitedBitMask = 0xffffffff;
            local_88.CurrentBitIndex = (int)uStack_9c;
            local_88.BaseBitIndex = uStack_9c._4_4_;
            local_88._28_4_ = uStack_94;
            puStack_a8 = puVar16;
            local_90 = __return_storage_ptr__;
            local_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar16;
            if ((int)uStack_9c < iVar7) {
              do {
                iVar7 = local_88.CurrentBitIndex;
                puVar18 = (undefined8 *)
                          ((longlong)local_88.CurrentBitIndex * 0x20 + *(longlong *)local_90);
                uVar3 = *puVar18;
                uVar8 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
                uVar8 = *(int *)&__return_storage_ptr__->field_0x48 - 1U &
                        uVar8 + (int)((ulonglong)uVar3 >> 0x20);
                *(uint *)((longlong)puVar18 + 0x1c) = uVar8;
                puVar16 = &__return_storage_ptr__->field_0x38;
                if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
                  puVar16 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
                }
                uVar14 = (longlong)*(int *)&__return_storage_ptr__->field_0x48 - 1U &
                         (longlong)(int)uVar8;
                *(undefined4 *)(puVar18 + 3) = *(undefined4 *)(puVar16 + uVar14 * 4);
                *(int *)(puVar16 + uVar14 * 4) = iVar7;
                local_88.UnvisitedBitMask = local_88.UnvisitedBitMask & ~local_88._padding_._4_4_;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_88);
              } while (local_88.CurrentBitIndex < (local_88.Array)->NumBits);
            }
          }
        }
LAB_14a0e3de0:
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
      }
      local_c8.Field = (FField *)pFVar5->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_c8);
      pFVar5 = (FProperty *)local_c8.Field;
    }
  }
  return __return_storage_ptr__;
}

// GetRatioFromIndex @ 14a0eb5b0

float __cdecl FRigVMStruct::GetRatioFromIndex(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 2) {
    return 0.0;
  }
  iVar3 = param_2 + -1;
  iVar2 = iVar3;
  if (param_1 < iVar3) {
    iVar2 = param_1;
  }
  iVar1 = 0;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  return (float)iVar1 / (float)iVar3;
}

// GetWorkflows @ 14a0f36b0

TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> * __thiscall
FRigVMStruct::GetWorkflows
          (FRigVMStruct *this,
          TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          ERigVMUserWorkflowType param_1,UObject *param_2)

{
  TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *this_00;
  FRigVMUserWorkflow *local_18;
  int local_10;
  
  this_00 = (TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_> *)
            (**(code **)((longlong)*this + 0x70))(this,&local_18,param_2);
  TArray<FRigVMUserWorkflow,TSizedDefaultAllocator<32>_>::
  FilterByPredicate<_FRigVMStruct::GetWorkflows_::__l2::<lambda_1>_>
            (this_00,__return_storage_ptr__,(<lambda_1>)param_1);
  DestructItems<FRigVMUserWorkflow,int>(local_18,local_10);
  if (local_18 != (FRigVMUserWorkflow *)0x0) {
    FMemory::Free(local_18);
  }
  return __return_storage_ptr__;
}

// IsControlFlowNode @ 14a0f8fb0

bool __thiscall FRigVMStruct::IsControlFlowNode(FRigVMStruct *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((longlong)*this + 0x78))();
  return *(int *)(lVar1 + 8) != 0;
}

// IsForLoop @ 14a0f9500

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRigVMStruct::IsForLoop(FRigVMStruct *this)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  undefined1 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (2 < (byte)LogRigVM._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRigVM);
  }
  lVar5 = (**(code **)((longlong)*this + 0x78))(this);
  if (*(int *)(lVar5 + 8) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      FLazyName::Resolve(&ExecuteContextName);
      FLazyName::Resolve(&ForLoopCompletedPinName);
      ExpectedLoopBlocks.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      ExpectedLoopBlocks.ArrayNum = 2;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,2,0,&ExpectedLoopBlocks.AllocatorInstance,2,&ExpectedLoopBlocks.ArrayMax);
      FVar2 = ExpectedLoopBlocks.AllocatorInstance;
      *(undefined8 *)ExpectedLoopBlocks.AllocatorInstance.Data = local_18;
      *(undefined8 *)(FVar2.Data + 8) = uStack_10;
      atexit(`FRigVMStruct::IsForLoop'::__l23::_dynamic_atexit_destructor_for__ExpectedLoopBlocks__)
      ;
      _Init_thread_footer(&::_TSS0);
    }
    plVar6 = (longlong *)(**(code **)((longlong)*this + 0x78))(this);
    if ((int)plVar6[1] == ExpectedLoopBlocks.ArrayNum) {
      if ((ExpectedLoopBlocks.ArrayNum < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      FVar2.Data = ExpectedLoopBlocks.AllocatorInstance.Data;
      if (((int)plVar6[1] < 1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      if (*(longlong *)*plVar6 == *(longlong *)FVar2.Data) {
        if ((ExpectedLoopBlocks.ArrayNum < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        FVar2.Data = ExpectedLoopBlocks.AllocatorInstance.Data;
        if (((int)plVar6[1] < 2) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          uVar4 = (*pcVar1)();
          return (bool)uVar4;
        }
        if (*(longlong *)(*plVar6 + 8) == *(longlong *)(FVar2.Data + 8)) {
          return true;
        }
      }
      return false;
    }
  }
  return false;
}

