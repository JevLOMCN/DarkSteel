// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 17

// TTokenDefinitions<wchar_t> @ 1418ba3a0

TTokenDefinitions<wchar_t> * __thiscall
TTokenDefinitions<wchar_t>::TTokenDefinitions<wchar_t>(TTokenDefinitions<wchar_t> *this)

{
  this->bIgnoreWhitespace = false;
  (this->Definitions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Definitions).ArrayNum = 0;
  (this->Definitions).ArrayMax = 0;
  return this;
}

// ~TTokenDefinitions<wchar_t> @ 1418be7f0

void __thiscall
TTokenDefinitions<wchar_t>::~TTokenDefinitions<wchar_t>(TTokenDefinitions<wchar_t> *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>,int>
            ((TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)> *)
             (this->Definitions).AllocatorInstance.Data,(this->Definitions).ArrayNum);
  pFVar1 = (this->Definitions).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ConsumeToken @ 1418d15e0

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<char>::ConsumeToken
          (TTokenDefinitions<char> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char> *param_1)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  char *pcVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  FText *pFVar10;
  TOptional<FExpressionError> *pTVar11;
  FTextFormat *pFVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  byte *pbVar15;
  FScriptContainerElement *pFVar16;
  char *pcVar17;
  FScriptContainerElement *pFVar18;
  undefined1 local_res8;
  undefined7 uStackX_9;
  TOptional<FExpressionError> *local_res10;
  undefined1 local_res18 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  bool local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  local_res10 = __return_storage_ptr__;
  if (((this->bIgnoreWhitespace == false) ||
      (pbVar2 = (byte *)(param_1->Stream).ReadPos, pbVar2 < (param_1->Stream).Start)) ||
     (pbVar3 = (byte *)(param_1->Stream).End, pbVar3 + -1 < pbVar2)) goto LAB_1418d1698;
  pbVar15 = pbVar2;
  if (pbVar2 == pbVar3) {
LAB_1418d164f:
    pbVar15 = (byte *)CONCAT71(uStackX_9,local_res8);
    bVar6 = false;
  }
  else {
    do {
      iVar7 = isspace((uint)*pbVar15);
      if (iVar7 == 0) break;
      pbVar15 = pbVar15 + 1;
    } while (pbVar15 != (byte *)(param_1->Stream).End);
    if (pbVar15 == pbVar2) goto LAB_1418d164f;
    bVar6 = true;
  }
  if (bVar6) {
    if ((pbVar15 < (param_1->Stream).Start) || ((param_1->Stream).End < pbVar15)) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6855721686587670253>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                         ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TOptional<FExpressionError> *)(*pcVar5)();
        return pTVar11;
      }
    }
    else {
      (param_1->Stream).ReadPos = (char *)pbVar15;
    }
  }
LAB_1418d1698:
  pcVar4 = (param_1->Stream).ReadPos;
  if (pcVar4 != (param_1->Stream).End) {
    iVar7 = (this->Definitions).ArrayNum;
    pFVar16 = (this->Definitions).AllocatorInstance.Data;
    pFVar18 = pFVar16 + (longlong)iVar7 * 0x30;
    while( true ) {
      if ((this->Definitions).ArrayNum != iVar7) {
        local_res8 = 0;
        `TCheckedPointerIterator<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar16 == pFVar18) {
        pcVar4 = (param_1->Stream).ReadPos;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        iVar7 = iswspace((short)*pcVar4);
        pcVar17 = pcVar4;
        while (iVar7 != 0) {
          pcVar1 = pcVar17 + 1;
          pcVar17 = pcVar17 + 1;
          iVar7 = iswspace((short)*pcVar1);
        }
        iVar7 = iswspace((short)*pcVar17);
        for (; (iVar7 == 0 && (*pcVar17 != '\0')); pcVar17 = pcVar17 + 1) {
          iVar7 = iswspace((short)pcVar17[1]);
        }
        iVar8 = (int)pcVar17 - (int)pcVar4;
        iVar7 = 0x20;
        if (iVar8 < 0x20) {
          iVar7 = iVar8;
        }
        ::FString::ConstructFromPtrSize(&local_b8,pcVar4,iVar7);
        if (0x20 < (longlong)pcVar17 - (longlong)pcVar4) {
          ::FString::AppendChars(&local_b8,L"...",3);
        }
        pFVar10 = FText::FromString(&local_80,&local_b8);
        local_d8.Type = Text;
        FText::FText((FText *)&local_d8.TextValue,pFVar10);
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<FExpressionError> *)(*pcVar5)();
          return pTVar11;
        }
        if (((local_108.AllocatorInstance.Data <= &local_d8) &&
            (&local_d8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<FExpressionError> *)(*pcVar5)();
          return pTVar11;
        }
        iVar7 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar7 + 1;
        lVar14 = (longlong)iVar7 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar14].field_0x0 = local_d8.Type;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(float *)(local_108.AllocatorInstance.Data + lVar14 + 8) = local_d8.field1_0x8.FloatValue;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar14 + 0x18) = 0;
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar14 + 0x10),
                         (FText *)&local_d8.TextValue),
           local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        local_f8.field1_0x8 =
             (FFormatArgumentValue_u_8)
             (longlong)(*(int *)&(param_1->Stream).ReadPos - *(int *)&(param_1->Stream).Start);
        local_f8.Type = Int;
        local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
        if (((local_108.AllocatorInstance.Data <= &local_f8) &&
            (&local_f8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pTVar11 = (TOptional<FExpressionError> *)(*pcVar5)();
          return pTVar11;
        }
        iVar7 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar7 + 1;
        lVar14 = (longlong)iVar7 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar14].field_0x0 = local_f8.Type;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(float *)(local_108.AllocatorInstance.Data + lVar14 + 8) = local_f8.field1_0x8.FloatValue;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar14 + 0x18) = 0;
        if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar14 + 0x10),
                         (FText *)&local_f8.TextValue),
           local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        pFVar10 = FText::AsLocalizable_Advanced_LocText
                            (&local_60,L"ExpressionParser",L"LexicalError",
                             L"Unrecognized token \'{0}\' at character {1}");
        pFVar12 = FTextFormat::FTextFormat(&local_50,pFVar10,Default);
        pFVar10 = FText::Format(&local_70,pFVar12,&local_108);
        local_a8.TextData.Reference = (pFVar10->TextData).Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res18);
        }
        pTVar11 = local_res10;
        local_a8.Flags = pFVar10->Flags;
        FText::FText((FText *)local_res10,&local_a8);
        pTVar11->bIsSet = true;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data == (FFormatArgumentValue *)0x0)
        {
          return pTVar11;
        }
        FMemory::Free(local_108.AllocatorInstance.Data);
        return pTVar11;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar16);
      pFVar13 = *(FScriptContainerElement **)(pFVar16 + 0x28);
      pcVar5 = *(code **)pFVar16;
      if (pFVar13 == (FScriptContainerElement *)0x0) {
        pFVar13 = pFVar16 + 0x10;
      }
      uVar9 = (**(code **)(*(longlong *)pFVar13 + 8))();
      (*pcVar5)(&local_98,uVar9,param_1);
      pTVar11 = local_res10;
      if (local_88 != false) {
        local_res10->bIsSet = local_88;
        FText::FText((FText *)local_res10,&local_98);
        if (local_88 == false) {
          return pTVar11;
        }
        if (local_98.TextData.Reference == (ITextData *)0x0) {
          return pTVar11;
        }
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        return pTVar11;
      }
      __return_storage_ptr__ = local_res10;
      if ((param_1->Stream).ReadPos != pcVar4) break;
      pFVar16 = pFVar16 + 0x30;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeToken @ 1418d1b80

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<char8_t>::ConsumeToken
          (TTokenDefinitions<char8_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char8_t> *param_1)

{
  byte *pbVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  FText *pFVar8;
  TOptional<FExpressionError> *pTVar9;
  FTextFormat *pFVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  byte *pbVar13;
  FScriptContainerElement *pFVar14;
  byte *pbVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res8;
  undefined7 uStackX_9;
  TOptional<FExpressionError> *local_res10;
  undefined1 local_res18 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  bool local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  local_res10 = __return_storage_ptr__;
  if (((this->bIgnoreWhitespace == false) ||
      (pbVar1 = (param_1->Stream).ReadPos, pbVar1 < (param_1->Stream).Start)) ||
     (pbVar15 = (param_1->Stream).End, pbVar15 + -1 < pbVar1)) goto LAB_1418d1c38;
  pbVar13 = pbVar1;
  if (pbVar1 == pbVar15) {
LAB_1418d1bef:
    pbVar13 = (byte *)CONCAT71(uStackX_9,local_res8);
    bVar4 = false;
  }
  else {
    do {
      iVar5 = isspace((uint)*pbVar13);
      if (iVar5 == 0) break;
      pbVar13 = pbVar13 + 1;
    } while (pbVar13 != (param_1->Stream).End);
    if (pbVar13 == pbVar1) goto LAB_1418d1bef;
    bVar4 = true;
  }
  if (bVar4) {
    if ((pbVar13 < (param_1->Stream).Start) || ((param_1->Stream).End < pbVar13)) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6855721686587670253>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                         ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar9 = (TOptional<FExpressionError> *)(*pcVar3)();
        return pTVar9;
      }
    }
    else {
      (param_1->Stream).ReadPos = pbVar13;
    }
  }
LAB_1418d1c38:
  puVar2 = (param_1->Stream).ReadPos;
  if (puVar2 != (param_1->Stream).End) {
    iVar5 = (this->Definitions).ArrayNum;
    pFVar14 = (this->Definitions).AllocatorInstance.Data;
    pFVar16 = pFVar14 + (longlong)iVar5 * 0x30;
    while( true ) {
      if ((this->Definitions).ArrayNum != iVar5) {
        local_res8 = 0;
        `TCheckedPointerIterator<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar14 == pFVar16) {
        pbVar1 = (param_1->Stream).ReadPos;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        iVar5 = iswspace((ushort)*pbVar1);
        pbVar15 = pbVar1;
        while (iVar5 != 0) {
          pbVar13 = pbVar15 + 1;
          pbVar15 = pbVar15 + 1;
          iVar5 = iswspace((ushort)*pbVar13);
        }
        iVar5 = iswspace((ushort)*pbVar15);
        for (; (iVar5 == 0 && (*pbVar15 != 0)); pbVar15 = pbVar15 + 1) {
          iVar5 = iswspace((ushort)pbVar15[1]);
        }
        iVar6 = (int)pbVar15 - (int)pbVar1;
        iVar5 = 0x20;
        if (iVar6 < 0x20) {
          iVar5 = iVar6;
        }
        ::FString::ConstructFromPtrSize(&local_b8,pbVar1,iVar5);
        if (0x20 < (longlong)pbVar15 - (longlong)pbVar1) {
          ::FString::AppendChars(&local_b8,L"...",3);
        }
        pFVar8 = FText::FromString(&local_80,&local_b8);
        local_d8.Type = Text;
        FText::FText((FText *)&local_d8.TextValue,pFVar8);
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TOptional<FExpressionError> *)(*pcVar3)();
          return pTVar9;
        }
        if (((local_108.AllocatorInstance.Data <= &local_d8) &&
            (&local_d8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TOptional<FExpressionError> *)(*pcVar3)();
          return pTVar9;
        }
        iVar5 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar5 + 1;
        lVar12 = (longlong)iVar5 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar12].field_0x0 = local_d8.Type;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(float *)(local_108.AllocatorInstance.Data + lVar12 + 8) = local_d8.field1_0x8.FloatValue;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar12 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar12 + 0x18) = 0;
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar12 + 0x10),
                         (FText *)&local_d8.TextValue),
           local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        local_f8.field1_0x8 =
             (FFormatArgumentValue_u_8)
             (longlong)(*(int *)&(param_1->Stream).ReadPos - *(int *)&(param_1->Stream).Start);
        local_f8.Type = Int;
        local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
        if (((local_108.AllocatorInstance.Data <= &local_f8) &&
            (&local_f8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          pTVar9 = (TOptional<FExpressionError> *)(*pcVar3)();
          return pTVar9;
        }
        iVar5 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar5 + 1;
        lVar12 = (longlong)iVar5 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar12].field_0x0 = local_f8.Type;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             local_f8.field1_0x8;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             local_f8.field1_0x8;
        *(float *)(local_108.AllocatorInstance.Data + lVar12 + 8) = local_f8.field1_0x8.FloatValue;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar12 + 8) =
             local_f8.field1_0x8;
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar12 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar12 + 0x18) = 0;
        if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar12 + 0x10),
                         (FText *)&local_f8.TextValue),
           local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        pFVar8 = FText::AsLocalizable_Advanced_LocText
                           (&local_60,L"ExpressionParser",L"LexicalError",
                            L"Unrecognized token \'{0}\' at character {1}");
        pFVar10 = FTextFormat::FTextFormat(&local_50,pFVar8,Default);
        pFVar8 = FText::Format(&local_70,pFVar10,&local_108);
        local_a8.TextData.Reference = (pFVar8->TextData).Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res18);
        }
        pTVar9 = local_res10;
        local_a8.Flags = pFVar8->Flags;
        FText::FText((FText *)local_res10,&local_a8);
        pTVar9->bIsSet = true;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data == (FFormatArgumentValue *)0x0)
        {
          return pTVar9;
        }
        FMemory::Free(local_108.AllocatorInstance.Data);
        return pTVar9;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar14);
      pFVar11 = *(FScriptContainerElement **)(pFVar14 + 0x28);
      pcVar3 = *(code **)pFVar14;
      if (pFVar11 == (FScriptContainerElement *)0x0) {
        pFVar11 = pFVar14 + 0x10;
      }
      uVar7 = (**(code **)(*(longlong *)pFVar11 + 8))();
      (*pcVar3)(&local_98,uVar7,param_1);
      pTVar9 = local_res10;
      if (local_88 != false) {
        local_res10->bIsSet = local_88;
        FText::FText((FText *)local_res10,&local_98);
        if (local_88 == false) {
          return pTVar9;
        }
        if (local_98.TextData.Reference == (ITextData *)0x0) {
          return pTVar9;
        }
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        return pTVar9;
      }
      __return_storage_ptr__ = local_res10;
      if ((param_1->Stream).ReadPos != puVar2) break;
      pFVar14 = pFVar14 + 0x30;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeToken @ 1418d2120

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<wchar_t>::ConsumeToken
          (TTokenDefinitions<wchar_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  wchar_t *pwVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  FText *pFVar6;
  TOptional<FExpressionError> *pTVar7;
  FTextFormat *pFVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  undefined1 local_res8;
  undefined7 uStackX_9;
  TOptional<FExpressionError> *local_res10;
  undefined1 local_res18 [8];
  TArray<FFormatArgumentValue,TSizedDefaultAllocator<32>_> local_108;
  FFormatArgumentValue local_f8;
  FFormatArgumentValue local_d8;
  FString local_b8;
  FText local_a8;
  FText local_98;
  bool local_88;
  FText local_80;
  FText local_70;
  FText local_60;
  FTextFormat local_50;
  
  local_res10 = __return_storage_ptr__;
  if (((this->bIgnoreWhitespace == false) ||
      (pwVar1 = (param_1->Stream).ReadPos, pwVar1 < (param_1->Stream).Start)) ||
     (pwVar13 = (param_1->Stream).End, pwVar13 + -1 < pwVar1)) goto LAB_1418d21d9;
  pwVar11 = pwVar1;
  if (pwVar1 == pwVar13) {
LAB_1418d2190:
    pwVar11 = (wchar_t *)CONCAT71(uStackX_9,local_res8);
    bVar3 = false;
  }
  else {
    do {
      iVar4 = iswspace(*pwVar11);
      if (iVar4 == 0) break;
      pwVar11 = pwVar11 + 1;
    } while (pwVar11 != (param_1->Stream).End);
    if (pwVar11 == pwVar1) goto LAB_1418d2190;
    bVar3 = true;
  }
  if (bVar3) {
    if ((pwVar11 < (param_1->Stream).Start) || ((param_1->Stream).End < pwVar11)) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_6855721686587670253>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Misc\\ExpressionParser.cpp"
                         ,0x113,"IsReadPosValid(Token.TokenEnd, 0)");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar7 = (TOptional<FExpressionError> *)(*pcVar2)();
        return pTVar7;
      }
    }
    else {
      (param_1->Stream).ReadPos = pwVar11;
    }
  }
LAB_1418d21d9:
  pwVar1 = (param_1->Stream).ReadPos;
  if (pwVar1 != (param_1->Stream).End) {
    iVar4 = (this->Definitions).ArrayNum;
    pFVar12 = (this->Definitions).AllocatorInstance.Data;
    pFVar15 = pFVar12 + (longlong)iVar4 * 0x30;
    while( true ) {
      if ((this->Definitions).ArrayNum != iVar4) {
        local_res8 = 0;
        `TCheckedPointerIterator<TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar12 == pFVar15) {
        pwVar1 = (param_1->Stream).ReadPos;
        local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.ArrayNum = 0;
        local_108.ArrayMax = 0;
        iVar4 = iswspace(*pwVar1);
        pwVar13 = pwVar1;
        while (iVar4 != 0) {
          pwVar11 = pwVar13 + 1;
          pwVar13 = pwVar13 + 1;
          iVar4 = iswspace(*pwVar11);
        }
        iVar4 = iswspace(*pwVar13);
        for (; (iVar4 == 0 && (*pwVar13 != L'\0')); pwVar13 = pwVar13 + 1) {
          iVar4 = iswspace(pwVar13[1]);
        }
        lVar14 = (longlong)pwVar13 - (longlong)pwVar1 >> 1;
        iVar10 = (int)lVar14;
        iVar4 = 0x20;
        if (iVar10 < 0x20) {
          iVar4 = iVar10;
        }
        ::FString::ConstructFromPtrSize(&local_b8,pwVar1,iVar4);
        if (0x20 < lVar14) {
          ::FString::AppendChars(&local_b8,L"...",3);
        }
        pFVar6 = FText::FromString(&local_80,&local_b8);
        local_d8.Type = Text;
        FText::FText((FText *)&local_d8.TextValue,pFVar6);
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0xbd,
                               L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar7;
        }
        if (((local_108.AllocatorInstance.Data <= &local_d8) &&
            (&local_d8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar7;
        }
        iVar4 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar4 + 1;
        lVar14 = (longlong)iVar4 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar14].field_0x0 = local_d8.Type;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(float *)(local_108.AllocatorInstance.Data + lVar14 + 8) = local_d8.field1_0x8.FloatValue;
        *(ulonglong *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             CONCAT44(local_d8.field1_0x8.IntValue._4_4_,local_d8.field1_0x8.FloatValue);
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar14 + 0x18) = 0;
        if ((local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar14 + 0x10),
                         (FText *)&local_d8.TextValue),
           local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_d8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 0x10))();
        }
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        local_f8.field1_0x8 =
             (FFormatArgumentValue_u_8)
             (longlong)
             (int)((longlong)(param_1->Stream).ReadPos - (longlong)(param_1->Stream).Start >> 1);
        local_f8.Type = Int;
        local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference =
             (TRefCountPtr<ITextData>)(ITextData *)0x0;
        local_f8.TextValue.field0_0x0.TypedValue.Flags = 0;
        if (((local_108.AllocatorInstance.Data <= &local_f8) &&
            (&local_f8 <
             (FFormatArgumentValue *)
             (local_108.AllocatorInstance.Data + (longlong)local_108.ArrayMax * 0x20))) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          pTVar7 = (TOptional<FExpressionError> *)(*pcVar2)();
          return pTVar7;
        }
        iVar4 = local_108.ArrayNum;
        if (local_108.ArrayNum == local_108.ArrayMax) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&local_108.AllocatorInstance,&local_108.ArrayMax);
        }
        local_108.ArrayNum = iVar4 + 1;
        lVar14 = (longlong)iVar4 * 0x20;
        *(Type *)&local_108.AllocatorInstance.Data[lVar14].field_0x0 = local_f8.Type;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(float *)(local_108.AllocatorInstance.Data + lVar14 + 8) = local_f8.field1_0x8.FloatValue;
        *(FFormatArgumentValue_u_8 *)(local_108.AllocatorInstance.Data + lVar14 + 8) =
             local_f8.field1_0x8;
        *(undefined8 *)&local_108.AllocatorInstance.Data[lVar14 + 0x10].field_0x0 = 0;
        *(undefined4 *)(local_108.AllocatorInstance.Data + lVar14 + 0x18) = 0;
        if ((local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) &&
           (FText::FText((FText *)(local_108.AllocatorInstance.Data + lVar14 + 0x10),
                         (FText *)&local_f8.TextValue),
           local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0)) {
          (**(code **)((longlong)
                       *(ITextData *)local_f8.TextValue.field0_0x0.TypedValue.TextData.Reference +
                      0x10))();
        }
        pFVar6 = FText::AsLocalizable_Advanced_LocText
                           (&local_60,L"ExpressionParser",L"LexicalError",
                            L"Unrecognized token \'{0}\' at character {1}");
        pFVar8 = FTextFormat::FTextFormat(&local_50,pFVar6,Default);
        pFVar6 = FText::Format(&local_70,pFVar8,&local_108);
        local_a8.TextData.Reference = (pFVar6->TextData).Reference;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 8))
                    (local_a8.TextData.Reference,local_res18);
        }
        pTVar7 = local_res10;
        local_a8.Flags = pFVar6->Flags;
        FText::FText((FText *)local_res10,&local_a8);
        pTVar7->bIsSet = true;
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
        if (local_70.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_70.TextData.Reference + 0x10))();
        }
        if (local_60.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_60.TextData.Reference + 0x10))();
        }
        DestructItems<FFormatArgumentValue,int>
                  ((FFormatArgumentValue *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
        if ((FFormatArgumentValue *)local_108.AllocatorInstance.Data == (FFormatArgumentValue *)0x0)
        {
          return pTVar7;
        }
        FMemory::Free(local_108.AllocatorInstance.Data);
        return pTVar7;
      }
      UE::Core::Private::Function::CheckCallable(*(void **)pFVar12);
      pFVar9 = *(FScriptContainerElement **)(pFVar12 + 0x28);
      pcVar2 = *(code **)pFVar12;
      if (pFVar9 == (FScriptContainerElement *)0x0) {
        pFVar9 = pFVar12 + 0x10;
      }
      uVar5 = (**(code **)(*(longlong *)pFVar9 + 8))();
      (*pcVar2)(&local_98,uVar5,param_1);
      pTVar7 = local_res10;
      if (local_88 != false) {
        local_res10->bIsSet = local_88;
        FText::FText((FText *)local_res10,&local_98);
        if (local_88 == false) {
          return pTVar7;
        }
        if (local_98.TextData.Reference == (ITextData *)0x0) {
          return pTVar7;
        }
        (**(code **)((longlong)*local_98.TextData.Reference + 0x10))();
        return pTVar7;
      }
      __return_storage_ptr__ = local_res10;
      if ((param_1->Stream).ReadPos != pwVar1) break;
      pFVar12 = pFVar12 + 0x30;
    }
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeTokens @ 1418d26d0

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<char>::ConsumeTokens
          (TTokenDefinitions<char> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char> *param_1)

{
  TOptional<FExpressionError> local_28;
  
  if ((param_1->Stream).ReadPos != (param_1->Stream).End) {
    do {
      ConsumeToken(this,&local_28,param_1);
      if (local_28.bIsSet != false) {
        __return_storage_ptr__->bIsSet = local_28.bIsSet;
        FText::FText((FText *)__return_storage_ptr__,(FText *)&local_28);
        if (local_28.bIsSet == false) {
          return __return_storage_ptr__;
        }
        if (local_28.TypedValue.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_28.TypedValue.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    } while ((param_1->Stream).ReadPos != (param_1->Stream).End);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeTokens @ 1418d2780

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<char8_t>::ConsumeTokens
          (TTokenDefinitions<char8_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<char8_t> *param_1)

{
  TOptional<FExpressionError> local_28;
  
  if ((param_1->Stream).ReadPos != (param_1->Stream).End) {
    do {
      ConsumeToken(this,&local_28,param_1);
      if (local_28.bIsSet != false) {
        __return_storage_ptr__->bIsSet = local_28.bIsSet;
        FText::FText((FText *)__return_storage_ptr__,(FText *)&local_28);
        if (local_28.bIsSet == false) {
          return __return_storage_ptr__;
        }
        if (local_28.TypedValue.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_28.TypedValue.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    } while ((param_1->Stream).ReadPos != (param_1->Stream).End);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// ConsumeTokens @ 1418d2830

TOptional<FExpressionError> * __thiscall
TTokenDefinitions<wchar_t>::ConsumeTokens
          (TTokenDefinitions<wchar_t> *this,TOptional<FExpressionError> *__return_storage_ptr__,
          TExpressionTokenConsumer<wchar_t> *param_1)

{
  TOptional<FExpressionError> local_28;
  
  if ((param_1->Stream).ReadPos != (param_1->Stream).End) {
    do {
      ConsumeToken(this,&local_28,param_1);
      if (local_28.bIsSet != false) {
        __return_storage_ptr__->bIsSet = local_28.bIsSet;
        FText::FText((FText *)__return_storage_ptr__,(FText *)&local_28);
        if (local_28.bIsSet == false) {
          return __return_storage_ptr__;
        }
        if (local_28.TypedValue.Text.TextData.Reference == (ITextData *)0x0) {
          return __return_storage_ptr__;
        }
        (**(code **)((longlong)*local_28.TypedValue.Text.TextData.Reference + 0x10))();
        return __return_storage_ptr__;
      }
    } while ((param_1->Stream).ReadPos != (param_1->Stream).End);
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// DefineToken @ 1418d52c0

void __thiscall
TTokenDefinitions<char>::DefineToken
          (TTokenDefinitions<char> *this,
          TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char>_&)> *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  iVar3 = (this->Definitions).ArrayNum;
  piVar1 = &(this->Definitions).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->Definitions).AllocatorInstance,piVar1);
  }
  (this->Definitions).ArrayNum = iVar3 + 1;
  pFVar4 = (this->Definitions).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(longlong *)pFVar4 = *(longlong *)param_1;
  *(longlong *)(pFVar4 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar2 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar4 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar4 + 0x18) = lVar2;
  *(longlong *)(pFVar4 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar4 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// DefineToken @ 1418d5340

void __thiscall
TTokenDefinitions<char8_t>::DefineToken
          (TTokenDefinitions<char8_t> *this,
          TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<char8_t>_&)>
          *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  iVar3 = (this->Definitions).ArrayNum;
  piVar1 = &(this->Definitions).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->Definitions).AllocatorInstance,piVar1);
  }
  (this->Definitions).ArrayNum = iVar3 + 1;
  pFVar4 = (this->Definitions).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(longlong *)pFVar4 = *(longlong *)param_1;
  *(longlong *)(pFVar4 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar2 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar4 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar4 + 0x18) = lVar2;
  *(longlong *)(pFVar4 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar4 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// DefineToken @ 1418d53c0

void __thiscall
TTokenDefinitions<wchar_t>::DefineToken
          (TTokenDefinitions<wchar_t> *this,
          TFunction<TOptional<FExpressionError>___cdecl(TExpressionTokenConsumer<wchar_t>_&)>
          *param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  
  iVar3 = (this->Definitions).ArrayNum;
  piVar1 = &(this->Definitions).ArrayMax;
  if (iVar3 == *piVar1) {
    iVar3 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1030,&(this->Definitions).AllocatorInstance,piVar1);
  }
  (this->Definitions).ArrayNum = iVar3 + 1;
  pFVar4 = (this->Definitions).AllocatorInstance.Data + (longlong)iVar3 * 0x30;
  *(longlong *)pFVar4 = *(longlong *)param_1;
  *(longlong *)(pFVar4 + 0x28) = *(longlong *)&param_1->field_0x28;
  *(undefined8 *)&param_1->field_0x28 = 0;
  lVar2 = *(longlong *)&param_1->field_0x18;
  *(longlong *)(pFVar4 + 0x10) = *(longlong *)&param_1->field_0x10;
  *(longlong *)(pFVar4 + 0x18) = lVar2;
  *(longlong *)(pFVar4 + 0x20) = *(longlong *)&param_1->field_0x20;
  if (*(longlong *)pFVar4 != 0) {
    *(undefined8 *)param_1 = 0;
  }
  return;
}

// DoesIgnoreWhitespace @ 1418d7070

bool __thiscall TTokenDefinitions<char>::DoesIgnoreWhitespace(TTokenDefinitions<char> *this)

{
  return this->bIgnoreWhitespace;
}

// DoesIgnoreWhitespace @ 1418d7080

bool __thiscall TTokenDefinitions<char8_t>::DoesIgnoreWhitespace(TTokenDefinitions<char8_t> *this)

{
  return this->bIgnoreWhitespace;
}

// DoesIgnoreWhitespace @ 1418d7090

bool __thiscall TTokenDefinitions<wchar_t>::DoesIgnoreWhitespace(TTokenDefinitions<wchar_t> *this)

{
  return this->bIgnoreWhitespace;
}

// IgnoreWhitespace @ 1418e2590

void __thiscall TTokenDefinitions<char>::IgnoreWhitespace(TTokenDefinitions<char> *this)

{
  this->bIgnoreWhitespace = true;
  return;
}

// IgnoreWhitespace @ 1418e25a0

void __thiscall TTokenDefinitions<char8_t>::IgnoreWhitespace(TTokenDefinitions<char8_t> *this)

{
  this->bIgnoreWhitespace = true;
  return;
}

// IgnoreWhitespace @ 1418e25b0

void __thiscall TTokenDefinitions<wchar_t>::IgnoreWhitespace(TTokenDefinitions<wchar_t> *this)

{
  this->bIgnoreWhitespace = true;
  return;
}

