// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// PushErrorContext<UE::UnifiedError::Core::FArgumentError> @ 141519590

void __thiscall
UE::UnifiedError::FError::PushErrorContext<UE::UnifiedError::Core::FArgumentError>
          (FError *this,FArgumentError *param_1,EDetailFilter *param_2)

{
  FArgumentError *pFVar1;
  EDetailFilter EVar2;
  code *pcVar3;
  IErrorDetails *pIVar4;
  IErrorDetails *pIVar5;
  FString *pFVar6;
  undefined1 local_res20 [8];
  IErrorDetails *local_28 [2];
  
  pIVar5 = ::operator_new(0x48);
  if (pIVar5 != (IErrorDetails *)0x0) {
    pFVar1 = (FArgumentError *)(pIVar5 + 4);
    EVar2 = *param_2;
    pIVar4 = pIVar5 + 6;
    *(undefined4 *)(pIVar5 + 2) = 0;
    pIVar5[3] = (IErrorDetails)0x0;
    *pIVar5 = (IErrorDetails)
              &TErrorDetails<UE::UnifiedError::Core::FArgumentError>::
               _vftable__for__UE__UnifiedError__IErrorDetails__;
    (pFVar1->ArgumentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pIVar5[5] = (IErrorDetails)0x0;
    *pIVar4 = (IErrorDetails)0x0;
    pIVar5[7] = (IErrorDetails)0x0;
    pIVar5[1] = (IErrorDetails)
                &TErrorDetails<UE::UnifiedError::Core::FArgumentError>::
                 _vftable__for__FRefCountBase__;
    *(undefined1 *)(pIVar5 + 8) = 5;
    if (pFVar1 != param_1) {
      (pFVar1->ArgumentName).Data.AllocatorInstance.Data =
           (param_1->ArgumentName).Data.AllocatorInstance.Data;
      (param_1->ArgumentName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar5 + 5) = (param_1->ArgumentName).Data.ArrayNum;
      *(int *)&pIVar5[5].field_0x4 = (param_1->ArgumentName).Data.ArrayMax;
      (param_1->ArgumentName).Data.ArrayNum = 0;
      (param_1->ArgumentName).Data.ArrayMax = 0;
    }
    pFVar6 = &param_1->ArgumentError;
    if (pIVar4 != (IErrorDetails *)pFVar6) {
      if (*pIVar4 != (IErrorDetails)0x0) {
        FMemory::Free((void *)*pIVar4);
      }
      *pIVar4 = (IErrorDetails)(pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      *(int *)(pIVar5 + 7) = (param_1->ArgumentError).Data.ArrayNum;
      *(int *)&pIVar5[7].field_0x4 = (param_1->ArgumentError).Data.ArrayMax;
      (param_1->ArgumentError).Data.ArrayNum = 0;
      (param_1->ArgumentError).Data.ArrayMax = 0;
    }
    *(EDetailFilter *)(pIVar5 + 8) = EVar2;
    (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res20);
    local_28[0] = (this->ErrorDetails).Reference;
    pcVar3 = *(code **)((longlong)*pIVar5 + 0x30);
    if (local_28[0] != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_28[0] + 8))(local_28[0],local_res20);
    }
    (*pcVar3)(pIVar5,local_28);
    pIVar4 = (this->ErrorDetails).Reference;
    if (pIVar4 != pIVar5) {
      (this->ErrorDetails).Reference = pIVar5;
      (**(code **)((longlong)*pIVar5 + 8))(pIVar5,local_res20);
      if (pIVar4 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar4 + 0x10))(pIVar4);
      }
    }
    (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
  }
  return;
}

// AppendFormatString @ 1415adbd0

void __thiscall UE::UnifiedError::FError::AppendFormatString(FError *this,FText *param_1)

{
  code *pcVar1;
  IErrorDetails *pIVar2;
  IErrorDetails *pIVar3;
  undefined1 local_res18 [8];
  IErrorDetails *local_res20;
  
  pIVar3 = ::operator_new(0x30);
  if (pIVar3 != (IErrorDetails *)0x0) {
    *(undefined4 *)(pIVar3 + 2) = 0;
    pIVar3[3] = (IErrorDetails)0x0;
    *pIVar3 = (IErrorDetails)
              &FAppendFormatStringDetails::_vftable__for__UE__UnifiedError__IErrorDetails__;
    pIVar3[1] = (IErrorDetails)&FAppendFormatStringDetails::_vftable__for__FRefCountBase__;
    FText::FText((FText *)(pIVar3 + 4));
    FText::operator=((FText *)(pIVar3 + 4),param_1);
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
    local_res20 = (this->ErrorDetails).Reference;
    pcVar1 = *(code **)((longlong)*pIVar3 + 0x30);
    if (local_res20 != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_res20 + 8))(local_res20,local_res18);
    }
    (*pcVar1)(pIVar3,&local_res20);
    pIVar2 = (this->ErrorDetails).Reference;
    if (pIVar2 != pIVar3) {
      (this->ErrorDetails).Reference = pIVar3;
      (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res18);
      if (pIVar2 != (IErrorDetails *)0x0) {
        (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
      }
    }
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
  }
  return;
}

// GetErrorCode @ 1415c5f50

int __thiscall UE::UnifiedError::FError::GetErrorCode(FError *this)

{
  return this->ErrorCode;
}

// GetErrorCodeString @ 1415c5f80

FAnsiString * __thiscall
UE::UnifiedError::FError::GetErrorCodeString(FError *this,FAnsiString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FManditoryErrorDetails *pFVar3;
  FAnsiString *pFVar4;
  
  pFVar3 = GetManditoryErrorDetails(this);
  if (pFVar3 == (FManditoryErrorDetails *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManditoryErrorDetails",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                       ,0x50,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnsiString *)(*pcVar1)();
      return pFVar4;
    }
  }
  (**(code **)((longlong)*pFVar3 + 0x60))(pFVar3,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetErrorMessage @ 1415c66d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FText * __thiscall
UE::UnifiedError::FError::GetErrorMessage(FError *this,FText *__return_storage_ptr__,bool param_1)

{
  IErrorDetails *pIVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  FText *pFVar6;
  FText *pFVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  FCbFieldViewIterator *pFVar10;
  FLogTemplate *pFVar11;
  IErrorDetails *pIVar12;
  undefined1 auStackY_668 [32];
  FLogTemplateOptions local_618 [8];
  TArray<FText,TSizedDefaultAllocator<32>_> local_610;
  longlong *local_600;
  FLogTemplate *local_5f8;
  longlong *local_5f0;
  FCbWriter local_5e8;
  FUtf8String local_5c0;
  TFunctionWithContext<void_*___cdecl(int)> local_5a8;
  uchar *local_598;
  int iStack_590;
  undefined4 uStack_58c;
  char *local_588;
  undefined4 uStack_580;
  undefined4 uStack_57c;
  TMemoryView<void> local_578;
  FText local_568;
  FText local_558;
  FText local_548;
  FText local_538;
  FText local_528;
  FText local_518;
  TStringView<char8_t> local_508;
  TStringView<char8_t> local_4f8;
  FText local_4e8;
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  FCbFieldViewIterator local_4a8;
  FLogTemplate local_488 [3];
  FLogTemplate *local_458;
  undefined4 local_450;
  undefined4 local_44c;
  ForElementType<char> local_448;
  int local_40 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_668;
  pIVar1 = (this->ErrorDetails).Reference;
  local_610.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_610.ArrayNum = 0;
  local_610.ArrayMax = 0;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,&local_558,this);
  pFVar6 = FText::AsLocalizable_Advanced_LocText
                     (&local_4e8,L"UnifiedError",L"DefaultLogPrepend",
                      L"{Root/ModuleIdString}.{Root/ErrorCodeString}");
  pFVar7 = FText::FromString(&local_538,": ");
  pFVar6 = FText::Join<FText,FText>(&local_548,pFVar7,pFVar6,&local_558);
  if (((local_610.AllocatorInstance.Data <= pFVar6) &&
      (pFVar6 < (FText *)(local_610.AllocatorInstance.Data + (longlong)local_610.ArrayMax * 0x10)))
     && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar6 = (FText *)(*pcVar2)();
    return pFVar6;
  }
  iVar5 = local_610.ArrayNum;
  if (local_610.ArrayNum == local_610.ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&local_610.AllocatorInstance,&local_610.ArrayMax);
  }
  local_610.ArrayNum = iVar5 + 1;
  FText::FText((FText *)(local_610.AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar6);
  if (local_548.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_548.TextData.Reference + 0x10))();
  }
  if (local_538.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_538.TextData.Reference + 0x10))();
  }
  pIVar1 = (this->ErrorDetails).Reference;
  do {
    if (pIVar1 == (IErrorDetails *)0x0) {
      pFVar6 = FText::FromString(&local_518,", ");
      FText::Join(&local_568,pFVar6,&local_610);
      if (local_518.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_518.TextData.Reference + 0x10))();
      }
      local_5f8 = local_488;
      local_618[0].bAllowSubObjectReferences = true;
      local_458 = (FLogTemplate *)0x0;
      local_5a8.Function =
           TFunctionWithContext<void_*___cdecl(int)>::
           Call<_UE::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>::TLogTemplate<UE::Logging::Private::FInlineLogTemplateStorage>_::__l2::<lambda_1>_>
      ;
      local_5a8.Context = &local_5f8;
      local_450 = 0;
      local_44c = 0x30;
      Logging::Private::CreateLocalizedLogTemplate
                (&local_568,local_618,(FLogField *)0x0,0,&local_5a8);
      FCbWriter::FCbWriter(&local_5e8);
      pIVar1 = (this->ErrorDetails).Reference;
      if (pIVar1 != (IErrorDetails *)0x0) {
        do {
          pIVar12 = pIVar1;
          cVar4 = (**(code **)((longlong)*pIVar12 + 0x58))(pIVar12,1);
          if (cVar4 != '\0') {
            puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x48))(pIVar12,local_4b8);
            local_598 = (uchar *)*puVar8;
            iStack_590 = (int)puVar8[1];
            local_508._12_4_ = uStack_58c;
            local_508.Size = iStack_590;
            local_508.DataPtr = local_598;
            FCbWriter::SetName(&local_5e8,&local_508);
            (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,&local_5e8,this);
          }
          puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x28))(pIVar12,&local_5f0);
          pIVar1 = (IErrorDetails *)*puVar8;
          if (local_5f0 != (longlong *)0x0) {
            (**(code **)(*local_5f0 + 0x10))();
          }
        } while (pIVar1 != (IErrorDetails *)0x0);
        uStack_580 = 4;
        local_588 = "Root";
        local_4f8._12_4_ = uStack_57c;
        local_4f8.Size = 4;
        local_4f8.DataPtr = "Root";
        FCbWriter::SetName(&local_5e8,&local_4f8);
        (**(code **)((longlong)*pIVar12 + 0x50))(pIVar12,&local_5e8,this);
      }
      local_448.SecondaryData = (ForElementType<char>)0x0;
      local_40[0] = 0;
      local_40[1] = 0x400;
      uVar9 = FCbWriter::GetSaveSize(&local_5e8);
      UE::Core::Private::
      ReallocGrow<2,TSizedInlineAllocator<1024,32,TSizedDefaultAllocator<32>_>::ForElementType<char>_>
                (1,1,(int)uVar9,&local_448,local_40,local_40 + 1);
      local_578.Data = &local_448;
      if (local_448.SecondaryData != (ForElementType<char>)0x0) {
        local_578.Data = (void *)local_448.SecondaryData;
      }
      local_578.Size = (ulong64)local_40[0];
      pFVar10 = FCbWriter::Save(&local_5e8,&local_4a8,&local_578);
      pFVar11 = local_488;
      if (local_458 != (FLogTemplate *)0x0) {
        pFVar11 = local_458;
      }
      FormatLogToText(__return_storage_ptr__,pFVar11,pFVar10);
      if (local_448.SecondaryData != (ForElementType<char>)0x0) {
        FMemory::Free((void *)local_448.SecondaryData);
      }
      FCbWriter::~FCbWriter(&local_5e8);
      pFVar11 = local_488;
      if (local_458 != (FLogTemplate *)0x0) {
        pFVar11 = local_458;
      }
      Logging::Private::DestroyLogTemplate(pFVar11);
      if (local_458 != (FLogTemplate *)0x0) {
        FMemory::Free(local_458);
      }
      if (local_568.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_568.TextData.Reference + 0x10))();
      }
      DestructItems<FText,int>((FText *)local_610.AllocatorInstance.Data,local_610.ArrayNum);
      if ((FText *)local_610.AllocatorInstance.Data != (FText *)0x0) {
        FMemory::Free(local_610.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    cVar4 = (**(code **)((longlong)*pIVar1 + 0x58))(pIVar1,4);
    if (cVar4 != '\0') {
      (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,local_4d8);
      (**(code **)((longlong)*pIVar1 + 0x48))(pIVar1,local_4c8);
      FUtf8String::PrintfImpl(&local_5c0,(uchar *)"(%s:{%s})");
      pFVar6 = FText::FromString(&local_528,&local_5c0);
      if (((local_610.AllocatorInstance.Data <= pFVar6) &&
          (pFVar6 < (FText *)(local_610.AllocatorInstance.Data + (longlong)local_610.ArrayMax * 0x10
                             ))) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FText *)(*pcVar2)();
        return pFVar6;
      }
      iVar5 = local_610.ArrayNum;
      if (local_610.ArrayNum == local_610.ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_610.AllocatorInstance,&local_610.ArrayMax);
      }
      local_610.ArrayNum = iVar5 + 1;
      FText::FText((FText *)(local_610.AllocatorInstance.Data + (longlong)iVar5 * 0x10),pFVar6);
      if (local_528.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_528.TextData.Reference + 0x10))();
      }
      if (local_5c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_5c0.Data.AllocatorInstance.Data);
      }
    }
    puVar8 = (undefined8 *)(**(code **)((longlong)*pIVar1 + 0x28))(pIVar1,&local_600);
    pIVar1 = (IErrorDetails *)*puVar8;
    if (local_600 != (longlong *)0x0) {
      (**(code **)(*local_600 + 0x10))();
    }
  } while( true );
}

// GetFormatErrorText @ 1415c6fc0

FText * __thiscall
UE::UnifiedError::FError::GetFormatErrorText(FError *this,FText *__return_storage_ptr__)

{
  IErrorDetails *pIVar1;
  
  pIVar1 = (this->ErrorDetails).Reference;
  (**(code **)((longlong)*pIVar1 + 0x20))(pIVar1,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// GetInnerMostErrorDetails @ 1415c72d0

TRefCountPtr<UE::UnifiedError::IErrorDetails_const_> __thiscall
UE::UnifiedError::FError::GetInnerMostErrorDetails(FError *this)

{
  longlong lVar1;
  longlong *plVar2;
  IErrorDetails *pIVar3;
  IErrorDetails *in_RDX;
  IErrorDetails IVar4;
  longlong *local_res8;
  longlong *local_res10;
  
  IVar4 = (IErrorDetails)(this->ErrorDetails).Reference;
  while( true ) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)IVar4 + 0x28))(IVar4,&local_res8);
    lVar1 = *plVar2;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
    if (lVar1 == 0) break;
    pIVar3 = (IErrorDetails *)(**(code **)(*(longlong *)IVar4 + 0x28))(IVar4,&local_res10);
    IVar4 = *pIVar3;
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 0x10))();
    }
  }
  *in_RDX = IVar4;
  (**(code **)(*(longlong *)IVar4 + 8))(IVar4,&local_res8);
  return (TRefCountPtr<UE::UnifiedError::IErrorDetails_const_>)in_RDX;
}

// GetManditoryErrorDetails @ 1415c74a0

FManditoryErrorDetails * __thiscall UE::UnifiedError::FError::GetManditoryErrorDetails(FError *this)

{
  code *pcVar1;
  FManditoryErrorDetails *pFVar2;
  bool bVar3;
  FManditoryErrorDetails *pFVar4;
  FManditoryErrorDetails *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  FManditoryErrorDetails *local_res18;
  
  pFVar4 = (FManditoryErrorDetails *)(this->ErrorDetails).Reference;
  if (pFVar4 != (FManditoryErrorDetails *)0x0) {
    (**(code **)((longlong)*pFVar4 + 8))(pFVar4,local_res8);
    while ((**(code **)((longlong)*pFVar4 + 0x28))(pFVar4,&local_res18), pFVar2 = local_res18,
          local_res18 != (FManditoryErrorDetails *)0x0) {
      pFVar5 = pFVar4;
      if ((pFVar4 != local_res18) &&
         ((**(code **)((longlong)*local_res18 + 8))(local_res18,local_res10), pFVar5 = pFVar2,
         pFVar4 != (FManditoryErrorDetails *)0x0)) {
        (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4);
      }
      pFVar4 = pFVar5;
      if (local_res18 != (FManditoryErrorDetails *)0x0) {
        (**(code **)((longlong)*local_res18 + 0x10))();
      }
    }
    if (pFVar4 != (FManditoryErrorDetails *)0x0) {
      (**(code **)((longlong)*pFVar4 + 0x10))(pFVar4);
    }
    return pFVar4;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4462217651833274431>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                     ,0x3f,"CurrentIt.GetReference()");
  if (!bVar3) {
    return (FManditoryErrorDetails *)0x0;
  }
  pcVar1 = (code *)swi(3);
  pFVar4 = (FManditoryErrorDetails *)(*pcVar1)();
  return pFVar4;
}

// GetModuleId @ 1415c76e0

int __thiscall UE::UnifiedError::FError::GetModuleId(FError *this)

{
  return this->ModuleId;
}

// GetModuleIdAndErrorCodeString @ 1415c76f0

FAnsiString * __thiscall
UE::UnifiedError::FError::GetModuleIdAndErrorCodeString
          (FError *this,FAnsiString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FManditoryErrorDetails *pFVar3;
  FAnsiString *pFVar4;
  void *local_28 [2];
  void *local_18 [2];
  
  pFVar3 = GetManditoryErrorDetails(this);
  if ((pFVar3 == (FManditoryErrorDetails *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManditoryErrorDetails",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                         ,0x50,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAnsiString *)(*pcVar1)();
    return pFVar4;
  }
  (**(code **)((longlong)*pFVar3 + 0x60))(pFVar3,local_18,this);
  pFVar3 = GetManditoryErrorDetails(this);
  if ((pFVar3 == (FManditoryErrorDetails *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManditoryErrorDetails",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                         ,0x57,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FAnsiString *)(*pcVar1)();
    return pFVar4;
  }
  (**(code **)((longlong)*pFVar3 + 0x68))(pFVar3,local_28,this);
  FAnsiString::PrintfImpl(__return_storage_ptr__,"%s.%s");
  if (local_28[0] != (void *)0x0) {
    FMemory::Free(local_28[0]);
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// GetModuleIdString @ 1415c7820

FAnsiString * __thiscall
UE::UnifiedError::FError::GetModuleIdString(FError *this,FAnsiString *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FManditoryErrorDetails *pFVar3;
  FAnsiString *pFVar4;
  
  pFVar3 = GetManditoryErrorDetails(this);
  if (pFVar3 == (FManditoryErrorDetails *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManditoryErrorDetails",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Experimental\\UnifiedError\\UnifiedError.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FAnsiString *)(*pcVar1)();
      return pFVar4;
    }
  }
  (**(code **)((longlong)*pFVar3 + 0x68))(pFVar3,__return_storage_ptr__,this);
  return __return_storage_ptr__;
}

// PushErrorDetails @ 1415da030

void __thiscall
UE::UnifiedError::FError::PushErrorDetails
          (FError *this,TRefCountPtr<UE::UnifiedError::IErrorDetails> param_1)

{
  IErrorDetails IVar1;
  code *pcVar2;
  IErrorDetails IVar3;
  undefined1 local_res10 [8];
  IErrorDetails *local_res18 [2];
  
  IVar1 = *param_1.Reference;
  if (IVar1 != (IErrorDetails)0x0) {
    local_res18[0] = (this->ErrorDetails).Reference;
    pcVar2 = *(code **)(*(longlong *)IVar1 + 0x30);
    if (local_res18[0] != (IErrorDetails *)0x0) {
      (**(code **)((longlong)*local_res18[0] + 8))(local_res18[0],local_res10);
    }
    (*pcVar2)(IVar1,local_res18);
    IVar1 = *param_1.Reference;
    IVar3 = (IErrorDetails)(this->ErrorDetails).Reference;
    if (IVar3 != IVar1) {
      (this->ErrorDetails).Reference = (IErrorDetails *)IVar1;
      if (IVar1 != (IErrorDetails)0x0) {
        (**(code **)((longlong)*(IErrorDetails *)IVar1 + 8))(IVar1,local_res10);
      }
      if (IVar3 != (IErrorDetails)0x0) {
        (**(code **)((longlong)*(IErrorDetails *)IVar3 + 0x10))(IVar3);
      }
    }
    if (*param_1.Reference != (IErrorDetails)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001415da0ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)*param_1.Reference + 0x10))();
      return;
    }
  }
  return;
}

// SerializeDetails @ 1415f1670

void __thiscall
UE::UnifiedError::FError::SerializeDetails
          (FError *this,FCbWriter *param_1,EDetailFilter param_2,bool param_3)

{
  IErrorDetails *pIVar1;
  IErrorDetails *pIVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong *local_res8;
  undefined4 uStack_3c;
  TStringView<char8_t> local_38;
  undefined1 local_28 [16];
  
  pIVar1 = (this->ErrorDetails).Reference;
  do {
    pIVar2 = pIVar1;
    if (pIVar2 == (IErrorDetails *)0x0) {
      return;
    }
    cVar3 = (**(code **)((longlong)*pIVar2 + 0x58))(pIVar2,param_2);
    if (cVar3 != '\0') {
      puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x48))(pIVar2,local_28);
      local_38.DataPtr = (uchar *)*puVar4;
      local_38._12_4_ = uStack_3c;
      local_38.Size = (int)puVar4[1];
      FCbWriter::SetName(param_1,&local_38);
      (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,param_1,this);
    }
    puVar4 = (undefined8 *)(**(code **)((longlong)*pIVar2 + 0x28))(pIVar2,&local_res8);
    pIVar1 = (IErrorDetails *)*puVar4;
    if (local_res8 != (longlong *)0x0) {
      (**(code **)(*local_res8 + 0x10))();
    }
  } while ((pIVar1 != (IErrorDetails *)0x0) || (!param_3));
  local_38._12_4_ = uStack_3c;
  local_38.Size = 4;
  local_38.DataPtr = "Root";
  FCbWriter::SetName(param_1,&local_38);
  (**(code **)((longlong)*pIVar2 + 0x50))(pIVar2,param_1,this);
  return;
}

// SerializeToJsonForAnalytics @ 1415f2230

FString * __thiscall
UE::UnifiedError::FError::SerializeToJsonForAnalytics(FError *this,FString *__return_storage_ptr__)

{
  SerializeToJsonString(this,__return_storage_ptr__,IncludeInAnalytics);
  return __return_storage_ptr__;
}

// SerializeToJsonString @ 1415f2250

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::UnifiedError::FError::SerializeToJsonString
          (FError *this,FString *__return_storage_ptr__,EDetailFilter param_1)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  IErrorDetails *pIVar5;
  char cVar6;
  undefined8 *puVar7;
  FCbFieldIterator *pFVar8;
  IErrorDetails *pIVar9;
  undefined1 auStack_2f8 [32];
  uchar *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  longlong *local_2c8 [2];
  TStringView<char8_t> local_2b8;
  FCbWriter local_2a8;
  undefined1 local_280 [40];
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_2f8;
  FCbWriter::FCbWriter(&local_2a8);
  FCbWriter::BeginObject(&local_2a8);
  pIVar5 = (this->ErrorDetails).Reference;
  if (pIVar5 != (IErrorDetails *)0x0) {
    do {
      pIVar9 = pIVar5;
      cVar6 = (**(code **)((longlong)*pIVar9 + 0x58))(pIVar9,param_1);
      if (cVar6 != '\0') {
        puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0x48))(pIVar9,local_280);
        local_2d8 = (uchar *)*puVar7;
        iStack_2d0 = (int)puVar7[1];
        local_2b8._12_4_ = uStack_2cc;
        local_2b8.Size = iStack_2d0;
        local_2b8.DataPtr = local_2d8;
        FCbWriter::SetName(&local_2a8,&local_2b8);
        (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,&local_2a8,this);
      }
      puVar7 = (undefined8 *)(**(code **)((longlong)*pIVar9 + 0x28))(pIVar9,local_2c8);
      pIVar5 = (IErrorDetails *)*puVar7;
      if (local_2c8[0] != (longlong *)0x0) {
        (**(code **)(*local_2c8[0] + 0x10))();
      }
    } while (pIVar5 != (IErrorDetails *)0x0);
    iStack_2d0 = 4;
    local_2d8 = "Root";
    local_2b8._12_4_ = uStack_2cc;
    local_2b8.Size = 4;
    local_2b8.DataPtr = "Root";
    FCbWriter::SetName(&local_2a8,&local_2b8);
    (**(code **)((longlong)*pIVar9 + 0x50))(pIVar9,&local_2a8,this);
  }
  FCbWriter::EndObject(&local_2a8);
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pFVar8 = FCbWriter::Save(&local_2a8,(FCbFieldIterator *)local_280);
  CompactBinaryToJson((FCbFieldView *)pFVar8,&local_258);
  if ((longlong *)local_280._16_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_280._16_8_ + 0x18);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (((uint)lVar3 & 0x3fffffff) == 1) {
      (**(code **)(*(longlong *)local_280._16_8_ + 0x10))(local_280._16_8_);
      *(longlong *)(local_280._16_8_ + 8) = 0;
      *(longlong *)(local_280._16_8_ + 0x10) = 0;
      LOCK();
      puVar2 = (ulonglong *)(local_280._16_8_ + 0x18);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 0x40000000;
      UNLOCK();
      if (((uint)(uVar4 >> 0x1e) & 0x3fffffff) == 1) {
        (*(code *)**(undefined8 **)local_280._16_8_)(local_280._16_8_,1);
      }
    }
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_258.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  FCbWriter::~FCbWriter(&local_2a8);
  return __return_storage_ptr__;
}

