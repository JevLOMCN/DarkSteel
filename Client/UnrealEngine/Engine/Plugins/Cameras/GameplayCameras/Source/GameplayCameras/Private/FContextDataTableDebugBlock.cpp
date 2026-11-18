// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 9

// FContextDataTableDebugBlock @ 14d58e6e0

FContextDataTableDebugBlock * __thiscall
UE::Cameras::FContextDataTableDebugBlock::FContextDataTableDebugBlock
          (FContextDataTableDebugBlock *this,FCameraContextDataTable *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ShowDataIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowDataIDsCVarName).Data.ArrayNum = 0;
  (this->ShowDataIDsCVarName).Data.ArrayMax = 0;
  this->_padding_ = (longlong)&___7FContextDataTableDebugBlock_Cameras_UE__6B_;
  Initialize(this,param_1);
  return this;
}

// FContextDataTableDebugBlock @ 14d58e730

FContextDataTableDebugBlock * __thiscall
UE::Cameras::FContextDataTableDebugBlock::FContextDataTableDebugBlock
          (FContextDataTableDebugBlock *this)

{
  this->_padding_ = (longlong)&___7FContextDataTableDebugBlock_Cameras_UE__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  (this->ShowDataIDsCVarName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShowDataIDsCVarName).Data.ArrayNum = 0;
  (this->ShowDataIDsCVarName).Data.ArrayMax = 0;
  return this;
}

// GetDebugValueString @ 14d5a7500

FString * __cdecl
UE::Cameras::FContextDataTableDebugBlock::GetDebugValueString
          (FString *__return_storage_ptr__,ECameraContextDataType param_1,UObject *param_2,
          uchar *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  switch(param_1) {
  case Name:
    pFVar6 = ::FName::ToString((FName *)param_3,&local_88);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    break;
  case String:
    ::FString::operator=(__return_storage_ptr__,(FString *)param_3);
    break;
  case Enum:
    if (param_2 == (UObject *)0x0) {
      pFVar6 = GetTypeName<UEnum_const_>(&local_68);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar5 = Z_Construct_UClass_UEnum_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<UEnum_const_>(&local_58);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject_const_>(&local_48,param_2);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    pFVar6 = UEnum::GetNameStringByValue((UEnum *)param_2,&local_78,(ulonglong)*param_3);
    if (__return_storage_ptr__ != pFVar6) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    break;
  case Struct:
    if (param_2 == (UObject *)0x0) {
      pFVar6 = GetTypeName<UScriptStruct_const_>(&local_38);
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar5 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&param_2->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_2->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) {
      pFVar6 = GetTypeName<UScriptStruct_const_>(&local_28);
      pwVar7 = L"";
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar8 = L"";
      }
      else {
        pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      pFVar6 = GetFullNameForCastLogError<UObject_const_>(&local_18,param_2);
      if ((pFVar6->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar8);
    }
    UScriptStruct::ExportText
              ((UScriptStruct *)param_2,__return_storage_ptr__,param_3,(void *)0x0,(UObject *)0x0,
               0x20041,(UObject *)0x0,true);
    break;
  case Object:
    FObjectPtr::GetPathName((FObjectPtr *)param_3,&local_a8);
    local_98.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
    if (__return_storage_ptr__ != &local_a8) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_a8.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_a8.Data.ArrayMax;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    goto LAB_14d5a76d9;
  case Class:
    FObjectPtr::GetPathName((FObjectPtr *)param_3,&local_98);
    if (__return_storage_ptr__ != &local_98) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_98.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_98.Data.ArrayMax;
      local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
LAB_14d5a76d9:
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    break;
  default:
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<2036964772150247540>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Cameras\\GameplayCameras\\Source\\GameplayCameras\\Private\\Debug\\ContextDataTableDebugBlock.cpp"
                       ,0x74,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  return __return_storage_ptr__;
}

// GetDebugValueString @ 14d5a7880

FString * __cdecl
UE::Cameras::FContextDataTableDebugBlock::GetDebugValueString
          (FString *__return_storage_ptr__,ECameraContextDataType param_1,
          ECameraContextDataContainerType param_2,UObject *param_3,uchar *param_4)

{
  int iVar1;
  uchar *puVar2;
  int iVar3;
  FString local_58;
  FString local_48;
  FString local_38;
  FArrayEntryHelper local_28;
  
  if (param_2 == None) {
    GetDebugValueString(__return_storage_ptr__,param_1,param_3,param_4);
  }
  else {
    iVar3 = 0;
    if (param_2 == Array) {
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      FCameraContextDataTable::FArrayEntryHelper::FArrayEntryHelper
                (&local_28,param_1,param_3,param_4);
      iVar1 = FCameraContextDataTable::FArrayEntryHelper::Num(&local_28);
      if (0 < iVar1) {
        do {
          puVar2 = FCameraContextDataTable::FArrayEntryHelper::GetRawPtr(&local_28,iVar3);
          GetDebugValueString(&local_38,param_1,param_3,puVar2);
          ::FString::PrintfImpl(&local_48,L"[%d] %s\n");
          iVar1 = local_48.Data.ArrayNum + -1;
          if (local_48.Data.ArrayNum == 0) {
            iVar1 = 0;
          }
          ::FString::AppendChars(&local_58,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar1);
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          iVar3 = iVar3 + 1;
          iVar1 = FCameraContextDataTable::FArrayEntryHelper::Num(&local_28);
        } while (iVar3 < iVar1);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_58.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_58.Data.ArrayMax;
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = 0;
      (__return_storage_ptr__->Data).ArrayMax = 0;
    }
  }
  return __return_storage_ptr__;
}

// GetTypeID @ 14d5abc00

FCameraObjectTypeID * __thiscall
UE::Cameras::FContextDataTableDebugBlock::GetTypeID(FContextDataTableDebugBlock *this)

{
  return (FCameraObjectTypeID *)&PrivateTypeID;
}

// Initialize @ 14d5af3e0

void __thiscall
UE::Cameras::FContextDataTableDebugBlock::Initialize
          (FContextDataTableDebugBlock *this,FCameraContextDataTable *param_1)

{
  int *piVar1;
  ECameraContextDataType EVar2;
  UObject *pUVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType _Src;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  uchar *puVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  FScriptContainerElement *pFVar14;
  FScriptContainerElement *pFVar15;
  FIdentityFunctor local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  FString local_f8;
  FString local_e8;
  undefined8 local_d8;
  undefined4 local_d0 [2];
  FString local_c8;
  undefined8 local_b8;
  FString local_b0;
  undefined8 local_a0;
  FScriptContainerElement *local_98;
  FString local_90;
  FString local_80;
  FArrayEntryHelper local_70;
  
  local_res20 = (param_1->Entries).ArrayNum;
  uVar10 = (ulonglong)(int)local_res20;
  pFVar15 = (param_1->Entries).AllocatorInstance.Data;
  pFVar14 = pFVar15 + uVar10 * 0x20;
  local_98 = pFVar14;
  while( true ) {
    if ((param_1->Entries).ArrayNum != (int)uVar10) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<UE::Cameras::FCameraContextDataTable::FEntry_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar15 == pFVar14) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      StableSortInternal<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,FIdentityFunctor,TDereferenceWrapper<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,_UE::Cameras::FContextDataTableDebugBlock::Initialize_::__l2::<lambda_1>_>_>
                ((FEntryDebugInfo *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum,
                 local_res8,(<lambda_1> *)local_res18);
      return;
    }
    pUVar3 = *(UObject **)(pFVar15 + 0x10);
    local_d8 = 0;
    if (pUVar3 != (UObject *)0x0) {
      local_d8 = *(undefined8 *)&pUVar3->field_0x18;
    }
    uVar7 = local_d8;
    EVar2 = *(ECameraContextDataType *)(pFVar15 + 4);
    if (*(int *)(pFVar15 + 8) == 0) {
      GetDebugValueString(&local_e8,EVar2,pUVar3,param_1->Memory + *(uint *)(pFVar15 + 0x18));
      iVar9 = local_e8.Data.ArrayNum;
    }
    else if (*(int *)(pFVar15 + 8) == 1) {
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      FCameraContextDataTable::FArrayEntryHelper::FArrayEntryHelper
                (&local_70,EVar2,pUVar3,param_1->Memory + *(uint *)(pFVar15 + 0x18));
      iVar13 = 0;
      iVar9 = FCameraContextDataTable::FArrayEntryHelper::Num(&local_70);
      if (0 < iVar9) {
        do {
          puVar11 = FCameraContextDataTable::FArrayEntryHelper::GetRawPtr(&local_70,iVar13);
          GetDebugValueString(&local_80,EVar2,pUVar3,puVar11);
          ::FString::PrintfImpl(&local_90,L"[%d] %s\n");
          iVar9 = local_90.Data.ArrayNum + -1;
          if (local_90.Data.ArrayNum == 0) {
            iVar9 = 0;
          }
          ::FString::AppendChars(&local_f8,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar9);
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_80.Data.AllocatorInstance.Data);
          }
          iVar13 = iVar13 + 1;
          iVar9 = FCameraContextDataTable::FArrayEntryHelper::Num(&local_70);
          pFVar14 = local_98;
        } while (iVar13 < iVar9);
      }
      uVar5 = local_f8.Data._8_8_;
      iVar9 = local_f8.Data.ArrayNum;
      local_e8.Data.AllocatorInstance.Data = local_f8.Data.AllocatorInstance.Data;
      local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = 0;
      local_f8.Data.ArrayMax = 0;
      uVar6 = local_f8.Data._8_8_;
      local_f8.Data.ArrayNum = (int)uVar5;
      local_f8.Data.ArrayMax = SUB84(uVar5,4);
      local_e8.Data.ArrayNum = local_f8.Data.ArrayNum;
      local_e8.Data.ArrayMax = local_f8.Data.ArrayMax;
      local_f8.Data._8_8_ = uVar6;
    }
    else {
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar9 = 0;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
    }
    _Src.Data = local_e8.Data.AllocatorInstance.Data;
    local_d0[0] = *(undefined4 *)pFVar15;
    local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c8.Data.ArrayNum = 0;
    local_c8.Data.ArrayMax = 0;
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_b8 = uVar7;
    local_b0.Data.ArrayNum = iVar9;
    if (iVar9 == 0) {
      local_b0.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar9,0,(ForAnyElementType *)&local_b0,iVar9,&local_b0.Data.ArrayMax);
      memcpy(local_b0.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar9 * 2);
    }
    local_a0 = (ulonglong)(CONCAT11((byte)pFVar15[0x1c] >> 3,(byte)pFVar15[0x1c] >> 2) & 0xff01) &
               0xffffffffffff01ff;
    pFVar12 = (this->Entries).AllocatorInstance.Data;
    if (((pFVar12 <= (FScriptContainerElement *)local_d0) &&
        ((FScriptContainerElement *)local_d0 < pFVar12 + (longlong)(this->Entries).ArrayMax * 0x38))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) break;
    iVar9 = (this->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Entries).AllocatorInstance,piVar1);
    }
    (this->Entries).ArrayNum = iVar9 + 1;
    pFVar12 = (this->Entries).AllocatorInstance.Data + (longlong)iVar9 * 0x38;
    *(undefined4 *)pFVar12 = local_d0[0];
    ::FString::FString((FString *)(pFVar12 + 8),&local_c8);
    *(undefined8 *)(pFVar12 + 0x18) = local_b8;
    ::FString::FString((FString *)(pFVar12 + 0x20),&local_b0);
    pFVar12[0x30] = local_a0._0_1_;
    pFVar12[0x31] = local_a0._1_1_;
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    uVar10 = (ulonglong)local_res20;
    pFVar15 = pFVar15 + 0x20;
  }
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

// IsKindOf @ 14d5b4820

bool __thiscall
UE::Cameras::FContextDataTableDebugBlock::IsKindOf
          (FContextDataTableDebugBlock *this,FCameraObjectTypeID *param_1)

{
  if (((TCameraObjectTypeID<UE::Cameras::FContextDataTableDebugBlock>)param_1->ID != PrivateTypeID)
     && ((TCameraObjectTypeID<UE::Cameras::FCameraDebugBlock>)param_1->ID !=
         FCameraDebugBlock::PrivateTypeID)) {
    return false;
  }
  return true;
}

// OnDebugDraw @ 14d5bb630

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::Cameras::FContextDataTableDebugBlock::OnDebugDraw
          (FContextDataTableDebugBlock *this,FCameraDebugBlockDrawParams *param_1,
          FCameraDebugRenderer *param_2)

{
  uint uVar1;
  ulong64 uVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  ulonglong uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  ForAnyElementType FVar9;
  ForAnyElementType _Str;
  undefined1 local_res8 [8];
  FString local_50;
  
  pFVar7 = (this->Entries).AllocatorInstance.Data;
  uVar1 = (this->Entries).ArrayNum;
  uVar6 = (ulonglong)(int)uVar1;
  pFVar8 = pFVar7 + uVar6 * 0x38;
  do {
    if ((this->Entries).ArrayNum != (int)uVar6) {
      `TCheckedPointerIterator<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) {
      return;
    }
    FCameraDebugRenderer::AddText(param_2,L"[%d] <no name data> : ");
    if (pFVar7[0x30] == (FScriptContainerElement)0x0) {
      ::FString::FString(&local_50,"{cam_warning}[Uninitialized]\n");
      FVar9.Data = local_50.Data.AllocatorInstance.Data;
      if (local_50.Data.ArrayNum == 0) {
        _Str.Data = (FScriptContainerElement *)L"";
LAB_14d5bb755:
        sVar4 = wcslen((wchar_t *)_Str.Data);
        iVar3 = (int)sVar4;
      }
      else {
        iVar3 = 0;
        _Str.Data = local_50.Data.AllocatorInstance.Data;
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
        goto LAB_14d5bb755;
      }
      uVar2 = (longlong)iVar3 * 2;
      if ((ulonglong)(param_2->LineBuilder)._padding_ < (param_2->LineBuilder)._padding_ + uVar2) {
        TStringBuilderBase<wchar_t>::Extend
                  ((TStringBuilderBase<wchar_t> *)&param_2->LineBuilder,(longlong)iVar3);
        FVar9.Data = local_50.Data.AllocatorInstance.Data;
      }
      if (iVar3 != 0) {
        pvVar5 = FGenericPlatformString::Memcpy
                           ((void *)(param_2->LineBuilder)._padding_,_Str.Data,uVar2);
        (param_2->LineBuilder)._padding_ = (longlong)((longlong)pvVar5 + uVar2);
        FVar9.Data = local_50.Data.AllocatorInstance.Data;
      }
      if (FVar9.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar9.Data);
      }
    }
    else {
      if (pFVar7[0x31] != (FScriptContainerElement)0x0) {
        FCameraDebugRenderer::AddText(param_2,L" {cam_passive}[WrittenThisFrame]");
      }
      FCameraDebugRenderer::FlushText(param_2);
      iVar3 = param_2->IndentLevel * GGameplayCamerasDebugIndent + GGameplayCamerasDebugLeftMargin;
      (param_2->NextDrawPosition).field0_0x0._s_0.Y =
           (float)param_2->MaxCharHeight + (param_2->NextDrawPosition).field0_0x0._s_0.Y;
      (param_2->NextDrawPosition).field0_0x0._s_0.X = (float)iVar3;
      FCameraDebugRenderer::AddIndent(param_2);
      FCameraDebugRenderer::AddText(param_2,(FString *)(pFVar7 + 0x20));
      FCameraDebugRenderer::RemoveIndent(param_2);
    }
    FCameraDebugRenderer::FlushText(param_2);
    pFVar7 = pFVar7 + 0x38;
    uVar6 = (ulonglong)uVar1;
    (param_2->DrawColor).field0_0x0._s_0 =
         (FColor_u_0_s_0)FCameraDebugColors::CurrentColorScheme.Default.field0_0x0;
  } while( true );
}

// OnSerialize @ 14d5c3850

void __thiscall
UE::Cameras::FContextDataTableDebugBlock::OnSerialize
          (FContextDataTableDebugBlock *this,FArchive *param_1)

{
  TArrayPrivateFriend::
  Serialize<UE::Cameras::FContextDataTableDebugBlock::FEntryDebugInfo,TSizedDefaultAllocator<32>_>
            (param_1,&this->Entries);
  ::operator<<(param_1,&this->ShowDataIDsCVarName);
  return;
}

