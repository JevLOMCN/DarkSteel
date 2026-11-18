// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// GetID @ 14b4034f0

long64 __thiscall FDS_StringIDWrapper::GetID(FDS_StringIDWrapper *this)

{
  return 0;
}

// StaticStruct @ 14b59f980

UScriptStruct * __cdecl FDS_StringIDWrapper::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_StringIDWrapper.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_StringIDWrapper.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_StringIDWrapper,(UObject *)pUVar1,
                         L"DS_StringIDWrapper");
  }
  return Z_Registration_Info_UScriptStruct_FDS_StringIDWrapper.OuterSingleton;
}

// Str @ 14b98cf70

FString * __thiscall FDS_StringIDWrapper::Str(FDS_StringIDWrapper *this)

{
  longlong lVar1;
  FString *pFVar2;
  
  lVar1 = (**(code **)*this)();
  pFVar2 = InValid;
  if (lVar1 == 0) {
    pFVar2 = Empty;
  }
  return pFVar2;
}

// Format @ 14b9aa3a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDS_StringIDWrapper::Format
          (FDS_StringIDWrapper *this,FString *__return_storage_ptr__,FStringFormatArg *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStackY_d8 [32];
  undefined1 local_a8 [24];
  FStringFormatArg *local_90;
  FStringFormatArg *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  lVar2 = (**(code **)*this)(this);
  if (lVar2 == 0) {
    ::FString::FString(__return_storage_ptr__,"");
  }
  else {
    local_4c = 0x80;
    local_78._0_8_ = (FScriptContainerElement *)0x0;
    local_78._8_8_ = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_44 = 0;
    local_38 = (ForElementType<FSetElementId>)0x0;
    local_30 = 0;
    local_a8._0_8_ = (FScriptContainerElement *)0x0;
    local_a8._8_4_ = 0;
    local_a8._12_4_ = 0;
    local_48 = 0xffffffff;
    ::FString::AppendInt((FString *)local_a8,1);
    local_90 = (FStringFormatArg *)local_a8;
    local_88 = param_1;
    TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
              ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                *)local_78,
               (TPairInitializer<FString_&&,FStringFormatArg_const_&> *)(local_a8 + 0x10),
               (bool *)&local_90);
    if ((FScriptContainerElement *)local_a8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_a8._0_8_);
    }
    puVar3 = (undefined8 *)(**(code **)((longlong)*this + 8))(this);
    ::FString::FormatImpl
              (__return_storage_ptr__,(wchar_t *)*puVar3,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_78);
    local_30 = 0;
    if (local_38 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_38);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_78,0,local_78._8_4_);
    iVar1 = SUB84(local_78._8_8_,4);
    local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
    }
    local_44 = 0;
    local_50 = 0;
    local_48 = 0xffffffff;
    if (0x80 < local_4c) {
      local_4c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
    }
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_78._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// Format @ 14b9aa550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FDS_StringIDWrapper::Format
          (FDS_StringIDWrapper *this,FString *__return_storage_ptr__,
          TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  FString *pFVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [24];
  FStringFormatArg *local_b0;
  FScriptContainerElement *local_a8;
  undefined1 local_98 [32];
  void *local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ForElementType<FSetElementId> local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  lVar5 = (**(code **)*this)(this);
  if (lVar5 == 0) {
    ::FString::FString(__return_storage_ptr__,"");
  }
  else {
    iVar8 = param_1->ArrayNum;
    uVar9 = 0;
    local_98._0_8_ = (FScriptContainerElement *)0x0;
    local_98._8_8_ = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (ForElementType<FSetElementId>)0x0;
    local_50 = 0;
    if (0 < iVar8) {
      do {
        uVar4 = 0;
        if ((int)uVar9 < iVar8) {
          uVar4 = ~uVar9 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar2)();
          return pFVar6;
        }
        lVar5 = (longlong)(int)uVar9;
        uVar9 = uVar9 + 1;
        pFVar1 = (param_1->AllocatorInstance).Data;
        local_c8._0_8_ = (FScriptContainerElement *)0x0;
        local_c8._8_4_ = 0;
        local_c8._12_4_ = 0;
        ::FString::AppendInt((FString *)local_c8,uVar9);
        local_b0 = (FStringFormatArg *)local_c8;
        local_a8 = pFVar1 + lVar5 * 0x20;
        TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
                  ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                    *)local_98,
                   (TPairInitializer<FString_&&,FStringFormatArg_const_&> *)(local_c8 + 0x10),
                   (bool *)&local_b0);
        if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
          FMemory::Free((void *)local_c8._0_8_);
        }
        iVar8 = param_1->ArrayNum;
      } while ((int)uVar9 < iVar8);
    }
    puVar7 = (undefined8 *)(**(code **)((longlong)*this + 8))(this);
    ::FString::FormatImpl
              (__return_storage_ptr__,(wchar_t *)*puVar7,
               (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                *)local_98);
    local_50 = 0;
    if (local_58 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_98,0,local_98._8_4_);
    iVar8 = SUB84(local_98._8_8_,4);
    local_98._8_8_ = local_98._8_8_ & 0xffffffff00000000;
    if (iVar8 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,0,(ForAnyElementType *)local_98,0,(int *)(local_98 + 0xc));
    }
    local_64 = 0;
    local_70 = 0;
    local_68 = 0xffffffff;
    if (0x80 < local_6c) {
      local_6c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10),0);
    }
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    if ((FScriptContainerElement *)local_98._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_98._0_8_);
    }
  }
  return __return_storage_ptr__;
}

// FormatText @ 14b9aa780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
FDS_StringIDWrapper::FormatText
          (FDS_StringIDWrapper *this,FText *__return_storage_ptr__,FStringFormatArg *param_1)

{
  ITextData *pIVar1;
  int iVar2;
  longlong lVar3;
  FText *pFVar4;
  undefined8 *puVar5;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  FString local_a0;
  undefined8 *local_90;
  FStringFormatArg *local_88;
  undefined1 local_78 [32];
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  lVar3 = (**(code **)*this)();
  if (lVar3 == 0) {
    pFVar4 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar4->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_b8);
    }
    __return_storage_ptr__->Flags = pFVar4->Flags;
  }
  else {
    lVar3 = (**(code **)*this)(this);
    if (lVar3 == 0) {
      ::FString::FString(&local_a0,"");
    }
    else {
      local_4c = 0x80;
      local_78._0_8_ = (FScriptContainerElement *)0x0;
      local_78._8_8_ = 0;
      local_58 = (void *)0x0;
      local_50 = 0;
      local_44 = 0;
      local_38 = (ForElementType<FSetElementId>)0x0;
      local_30 = 0;
      local_b8._8_8_ = (FStringFormatArg *)0x0;
      local_a8 = 0;
      local_48 = 0xffffffff;
      ::FString::AppendInt((FString *)(local_b8 + 8),1);
      local_90 = (undefined8 *)(local_b8 + 8);
      local_88 = param_1;
      TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_&&,FStringFormatArg_const_&>_>
                ((TSet<TTuple<FString,FStringFormatArg>,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>,FDefaultSetAllocator>
                  *)local_78,(TPairInitializer<FString_&&,FStringFormatArg_const_&> *)local_b8,
                 (bool *)&local_90);
      if ((FStringFormatArg *)local_b8._8_8_ != (FStringFormatArg *)0x0) {
        FMemory::Free((void *)local_b8._8_8_);
      }
      puVar5 = (undefined8 *)(**(code **)((longlong)*this + 8))(this);
      ::FString::FormatImpl
                (&local_a0,(wchar_t *)*puVar5,
                 (TMap<FString,FStringFormatArg,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FStringFormatArg,0>_>
                  *)local_78);
      local_30 = 0;
      if (local_38 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_38);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FStringFormatArg>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_78,0,local_78._8_4_);
      iVar2 = SUB84(local_78._8_8_,4);
      local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
      if (iVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
      }
      local_48 = 0xffffffff;
      local_44 = 0;
      local_50 = 0;
      if (0x80 < local_4c) {
        local_4c = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
      }
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_78._0_8_);
      }
    }
    FText::FromString(__return_storage_ptr__,&local_a0);
    if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a0.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// FormatText @ 14b9aa970

FText * __thiscall
FDS_StringIDWrapper::FormatText
          (FDS_StringIDWrapper *this,FText *__return_storage_ptr__,
          TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *param_1)

{
  ITextData *pIVar1;
  longlong lVar2;
  FText *pFVar3;
  FString *pFVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  lVar2 = (**(code **)*this)();
  if (lVar2 == 0) {
    pFVar3 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar1 = (pFVar3->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar3->Flags;
    return __return_storage_ptr__;
  }
  pFVar4 = Format(this,&local_18,param_1);
  FText::FromString(__return_storage_ptr__,pFVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Text @ 14b9c7230

FText * __thiscall
FDS_StringIDWrapper::Text(FDS_StringIDWrapper *this,FText *__return_storage_ptr__)

{
  FString *pFVar1;
  
  pFVar1 = (FString *)(**(code **)((longlong)*this + 8))();
  FText::FromString(__return_storage_ptr__,pFVar1);
  return __return_storage_ptr__;
}

