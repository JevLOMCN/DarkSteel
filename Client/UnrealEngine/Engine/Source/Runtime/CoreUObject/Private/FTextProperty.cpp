// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 13

// GetFieldSize @ 141f81d10

ulong64 __thiscall FTextProperty::GetFieldSize(FTextProperty *this)

{
  return 0x70;
}

// FTextProperty @ 1422002f0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FTextProperty * __thiscall
FTextProperty::FTextProperty
          (FTextProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_None);
  *(undefined ***)this = &___7__TProperty_VFText__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FTextProperty__6B_;
  return this;
}

// FTextProperty @ 1422003a0

FTextProperty * __thiscall
FTextProperty::FTextProperty
          (FTextProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_VFText__VFProperty____6B_;
  FProperty::SetElementSize((FProperty *)this,0x10);
  *(undefined ***)this = &___7FTextProperty__6B_;
  return this;
}

// operator() @ 142202500

void __thiscall `FTextProperty::ExportText_Internal'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  int iVar4;
  int iVar5;
  
  if ((*(byte *)((longlong)this + 0x10) & 1) == 0) {
    pFVar2 = FText::ToString(*(FText **)((longlong)this + 8));
    iVar5 = (pFVar2->Data).ArrayNum;
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
    iVar4 = iVar5 + -1;
    if (iVar5 == 0) {
      iVar4 = 0;
    }
  }
  else {
    pwVar3 = L"\"";
    iVar4 = 1;
    ::FString::AppendChars(*(FString **)this,L"\"",1);
    pFVar2 = FText::ToString(*(FText **)((longlong)this + 8));
    iVar1 = (pFVar2->Data).ArrayNum;
    iVar5 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar5 = 0;
    }
    ::FString::AppendChars(*(FString **)this,(wchar_t *)(pFVar2->Data).AllocatorInstance.Data,iVar5)
    ;
  }
  ::FString::AppendChars(*(FString **)this,pwVar3,iVar4);
  return;
}

// Construct @ 142207840

FField * __cdecl
FTextProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  FProperty *this;
  FFieldClass *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x70,0);
  if (this != (FProperty *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar2 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FTextProperty",0x40000000,
                   CASTCLASS_FTextProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar2,Construct);
        atexit(`FTextProperty::StaticClass'::__l2::
               _dynamic_atexit_destructor_for__StaticFieldClass__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,&::StaticFieldClass);
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    this->_padding_ = (longlong)&___7FTextProperty__6B_;
    uVar1 = (param_1->Container).Unknown;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    local_res20 = uVar1;
    if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7__TProperty_VFText__VFProperty____6B_;
    FProperty::SetElementSize(this,0x10);
    this->_padding_ = (longlong)&___7FTextProperty__6B_;
    return (FField *)this;
  }
  return (FField *)0x0;
}

// ConvertFromType @ 142208800

EConvertFromTypeResult __thiscall
FTextProperty::ConvertFromType
          (FTextProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  int iVar1;
  FName FVar2;
  ITextData *pIVar3;
  code *pcVar4;
  bool bVar5;
  FNameEntryId FVar6;
  EConvertFromTypeResult EVar7;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FName FVar8;
  longlong *plVar9;
  FName FVar10;
  undefined1 local_res10 [8];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  undefined1 local_60 [8];
  FName local_58;
  FText local_50;
  FString local_40;
  FText local_30;
  
  FVar2 = param_1->Type;
  FVar6 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar10.Number = 0;
  FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar6.Value);
  if (FVar2 == FVar10) {
    local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40.Data.ArrayNum = 0;
    local_40.Data.ArrayMax = 0;
    ::operator<<(*(FArchive **)(*(longlong *)param_2 + 8),&local_40);
    FText::FromString(&local_50,&local_40);
    local_50.Flags = local_50.Flags | 4;
    iVar1 = param_1->ArrayIndex;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    plVar9 = (longlong *)
             (param_3 +
             (longlong)*(int *)&this->field_0x44 +
             (longlong)iVar1 * (longlong)*(int *)&this->field_0x34);
    pIVar3 = (ITextData *)*plVar9;
    if (pIVar3 != local_50.TextData.Reference) {
      *plVar9 = (longlong)local_50.TextData.Reference;
      if (local_50.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_50.TextData.Reference + 8))
                  (local_50.TextData.Reference,local_68);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    *(uint *)(plVar9 + 1) = local_50.Flags;
    if (local_50.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_50.TextData.Reference + 0x10))();
    }
    if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data.AllocatorInstance.Data);
      return Converted;
    }
  }
  else {
    FVar2 = param_1->Type;
    FVar6 = FNameEntryId::FromValidEName((EName)local_64);
    FVar8.Number = 0;
    FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar6.Value);
    if (FVar2 != FVar8) {
      return UseSerializeItem;
    }
    local_58.ComparisonIndex.Value = 0;
    local_58.Number = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_58);
    FText::FromName(&local_30,&local_58);
    local_30.Flags = local_30.Flags | 4;
    iVar1 = param_1->ArrayIndex;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar5)
       ) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      EVar7 = (*pcVar4)();
      return EVar7;
    }
    plVar9 = (longlong *)
             (param_3 +
             (longlong)*(int *)&this->field_0x44 +
             (longlong)iVar1 * (longlong)*(int *)&this->field_0x34);
    pIVar3 = (ITextData *)*plVar9;
    if (pIVar3 != local_30.TextData.Reference) {
      *plVar9 = (longlong)local_30.TextData.Reference;
      if (local_30.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_30.TextData.Reference + 8))
                  (local_30.TextData.Reference,local_60);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    *(uint *)(plVar9 + 1) = local_30.Flags;
    if (local_30.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_30.TextData.Reference + 0x10))();
    }
  }
  return Converted;
}

// ExportText_Internal @ 14220b240

void __thiscall
FTextProperty::ExportText_Internal
          (FTextProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  ITextData *pIVar1;
  TRefCountPtr<ITextData> TVar2;
  char cVar3;
  bool bVar4;
  undefined1 local_res20 [8];
  FText local_38;
  FString *local_28;
  FText *local_20;
  int local_18;
  
  FText::FText(&local_38);
  if (param_3 == Container) {
    cVar3 = (**(code **)(*(longlong *)this + 0x78))(this);
    if (cVar3 == '\0') {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
      goto LAB_14220b29a;
    }
    FProperty::GetValue_InContainer((FProperty *)this,param_2,&local_38);
  }
  else {
LAB_14220b29a:
    TVar2.Reference = local_38.TextData.Reference;
    pIVar1 = *(ITextData **)param_2;
    if (local_38.TextData.Reference != pIVar1) {
      local_38.TextData.Reference = pIVar1;
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res20);
      }
      if (TVar2.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar2.Reference + 0x10))(TVar2.Reference);
      }
    }
    local_38.Flags = *(uint *)((longlong)param_2 + 8);
  }
  local_20 = &local_38;
  local_18 = param_6;
  local_28 = param_1;
  if (((uint)param_6 >> 0xe & 1) == 0) {
    if (((uint)param_6 >> 0x13 & 1) != 0) {
      `FTextProperty::ExportText_Internal'::__l2::<lambda_1>::operator()(&local_28);
      goto LAB_14220b342;
    }
  }
  else {
    bVar4 = FText::IsCultureInvariant(&local_38);
    if ((!bVar4) && (bVar4 = FText::IsFromStringTable(&local_38), !bVar4)) {
      `FTextProperty::ExportText_Internal'::__l2::<lambda_1>::operator()(&local_28);
      goto LAB_14220b342;
    }
  }
  FTextStringHelper::WriteToBuffer(param_1,&local_38,(bool)((byte)param_6 & 1),false);
LAB_14220b342:
  if (local_38.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
  }
  return;
}

// Identical @ 142210820

bool __thiscall
FTextProperty::Identical(FTextProperty *this,void *param_1,void *param_2,uint param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FString *pFVar6;
  FTextKey local_res10 [2];
  FTextKey local_res18 [2];
  FName local_38;
  FName local_30;
  FText local_28;
  FText local_18;
  
  local_28.TextData.Reference = *(ITextData **)param_1;
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 8))
              (local_28.TextData.Reference,local_res10);
  }
  local_28.Flags = *(uint *)((longlong)param_1 + 8);
  if (param_2 == (void *)0x0) {
    pFVar5 = FTextInspector::GetDisplayString(&local_28);
    bVar2 = (pFVar5->Data).ArrayNum < 2;
    goto LAB_1422109f8;
  }
  local_18.TextData.Reference = *(ITextData **)param_2;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 8))
              (local_18.TextData.Reference,local_res10);
  }
  local_18.Flags = *(uint *)((longlong)param_2 + 8);
  bVar2 = FText::IsCultureInvariant(&local_18);
  bVar3 = FText::IsCultureInvariant(&local_28);
  if (bVar3 == bVar2) {
    bVar2 = FText::IsTransient(&local_18);
    bVar3 = FText::IsTransient(&local_28);
    if (bVar3 != bVar2) goto LAB_1422109d5;
    bVar2 = FText::IsEmpty(&local_18);
    bVar3 = FText::IsEmpty(&local_28);
    if (bVar3 != bVar2) goto LAB_1422109d5;
    bVar2 = FText::IsFromStringTable(&local_18);
    bVar3 = FText::IsFromStringTable(&local_28);
    if (bVar3 != bVar2) goto LAB_1422109d5;
    bVar2 = FText::IsEmpty(&local_28);
    if (bVar2) {
LAB_1422108fa:
      bVar2 = true;
    }
    else {
      bVar2 = FText::IsFromStringTable(&local_28);
      if (bVar2) {
        bVar2 = false;
        local_res18[0].Index = -1;
        local_30.ComparisonIndex.Value = 0;
        local_30.Number = 0;
        FTextInspector::GetTableIdAndKey(&local_28,&local_30,local_res18);
        local_38.ComparisonIndex.Value = 0;
        local_38.Number = 0;
        local_res10[0].Index = -1;
        FTextInspector::GetTableIdAndKey(&local_18,&local_38,local_res10);
        if ((local_30 == local_38) && (local_res18[0].Index == local_res10[0].Index)) {
          bVar2 = true;
        }
      }
      else {
        bVar2 = FText::IdenticalTo(&local_28,&local_18,None);
        if (bVar2) {
          bVar2 = true;
        }
        else {
          bVar2 = FText::IsCultureInvariant(&local_28);
          if (!bVar2) {
            bVar2 = FText::IsTransient(&local_28);
            if (!bVar2) goto LAB_1422109d5;
          }
          pFVar5 = FTextInspector::GetDisplayString(&local_28);
          pFVar6 = FTextInspector::GetDisplayString(&local_18);
          iVar4 = (pFVar5->Data).ArrayNum;
          iVar1 = (pFVar6->Data).ArrayNum;
          if (iVar4 == iVar1) {
            if (iVar4 < 2) goto LAB_1422108fa;
            iVar4 = wcscmp((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                           (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
            bVar2 = iVar4 == 0;
          }
          else {
            bVar2 = iVar1 + iVar4 == 1;
          }
        }
      }
    }
  }
  else {
LAB_1422109d5:
    bVar2 = false;
  }
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
LAB_1422109f8:
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  return bVar2;
}

// Identical_Implementation @ 142210a20

bool __cdecl FTextProperty::Identical_Implementation(FText *param_1,FText *param_2,uint param_3)

{
  bool bVar1;
  
  bVar1 = Identical_Implementation(param_1,param_2,param_3,None);
  return bVar1;
}

// Identical_Implementation @ 142210a30

bool __cdecl
FTextProperty::Identical_Implementation
          (FText *param_1,FText *param_2,uint param_3,EIdenticalLexicalCompareMethod param_4)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FString *pFVar6;
  FTextKey local_28;
  FTextKey local_24;
  FName local_20;
  FName local_18 [2];
  
  bVar2 = FText::IsCultureInvariant(param_1);
  bVar3 = FText::IsCultureInvariant(param_2);
  if (bVar2 == bVar3) {
    bVar2 = FText::IsTransient(param_1);
    bVar3 = FText::IsTransient(param_2);
    if (bVar2 == bVar3) {
      bVar2 = FText::IsEmpty(param_1);
      bVar3 = FText::IsEmpty(param_2);
      if (bVar2 == bVar3) {
        bVar2 = FText::IsFromStringTable(param_1);
        bVar3 = FText::IsFromStringTable(param_2);
        if (bVar2 == bVar3) {
          bVar2 = FText::IsEmpty(param_1);
          if (!bVar2) {
            bVar2 = FText::IsFromStringTable(param_1);
            if (bVar2) {
              local_24.Index = -1;
              local_18[0].ComparisonIndex.Value = 0;
              local_18[0].Number = 0;
              FTextInspector::GetTableIdAndKey(param_1,local_18,&local_24);
              local_20.ComparisonIndex.Value = 0;
              local_20.Number = 0;
              local_28.Index = -1;
              FTextInspector::GetTableIdAndKey(param_2,&local_20,&local_28);
              if (local_18[0] != local_20) {
                return false;
              }
              if (local_24.Index != local_28.Index) {
                return false;
              }
            }
            else {
              bVar2 = FText::IdenticalTo(param_1,param_2,None);
              if (!bVar2) {
                if (((param_4 == DisplayString) ||
                    (bVar2 = FText::IsCultureInvariant(param_1), bVar2)) ||
                   (bVar2 = FText::IsTransient(param_1), bVar2)) {
                  pFVar5 = FTextInspector::GetDisplayString(param_1);
                  pFVar6 = FTextInspector::GetDisplayString(param_2);
                }
                else {
                  if (param_4 != SourceString) {
                    return false;
                  }
                  pFVar5 = FTextInspector::GetSourceString(param_1);
                  pFVar6 = FTextInspector::GetSourceString(param_2);
                }
                iVar4 = (pFVar6->Data).ArrayNum;
                iVar1 = (pFVar5->Data).ArrayNum;
                if (iVar1 != iVar4) {
                  return iVar4 + iVar1 == 1;
                }
                if (1 < iVar1) {
                  iVar4 = wcscmp((wchar_t *)(pFVar5->Data).AllocatorInstance.Data,
                                 (wchar_t *)(pFVar6->Data).AllocatorInstance.Data);
                  return iVar4 == 0;
                }
              }
            }
          }
          return true;
        }
      }
    }
  }
  return false;
}

// ImportText_Internal @ 142211930

wchar_t * __thiscall
FTextProperty::ImportText_Internal
          (FTextProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  ITextData *pIVar1;
  UObject *this_00;
  bool bVar2;
  char cVar3;
  UPackage *pUVar4;
  UPackage *pUVar5;
  FString *pFVar6;
  UClass *this_01;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  FString local_88;
  FString local_78;
  FString local_68;
  FText local_58;
  FString local_48;
  FString local_38;
  
  FText::FText(&local_58);
  this_00 = param_4;
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  if ((param_4 != (UObject *)0x0) && ((*(uint *)&this->field_0x38 >> 0xe & 1) != 0)) {
    bVar2 = UsesPerObjectConfig(param_4);
    if (bVar2) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      pUVar4 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)this_00);
      pUVar5 = GetTransientPackage();
      if (pUVar4 == pUVar5) {
        param_4 = *(UObject **)&this_00->field_0x18;
        ::FName::ToString((FName *)&param_4,&local_68);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        local_78.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_78.Data.ArrayNum = local_68.Data.ArrayNum;
        local_78.Data.ArrayMax = local_68.Data.ArrayMax;
      }
      else {
        pFVar6 = UObjectBaseUtility::GetPathName
                           ((UObjectBaseUtility *)this_00,&local_38,(UObject *)pUVar4);
        if (&local_78 != pFVar6) {
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          local_78.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
          (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_78.Data.ArrayNum = (pFVar6->Data).ArrayNum;
          local_78.Data.ArrayMax = (pFVar6->Data).ArrayMax;
          (pFVar6->Data).ArrayNum = 0;
          (pFVar6->Data).ArrayMax = 0;
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      param_4 = *(UObject **)(*(longlong *)&this_00->field_0x10 + 0x18);
      ::FName::ToString((FName *)&param_4,&local_38);
      ::FString::ConcatFC(&local_48,&local_78,L" ");
      ::FString::ConcatFF(&local_68,&local_48,&local_38);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      local_88.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
      local_88.Data.ArrayNum = local_68.Data.ArrayNum;
      local_88.Data.ArrayMax = local_68.Data.ArrayMax;
      local_68.Data.ArrayNum = 0;
      local_68.Data.ArrayMax = 0;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      (**(code **)(*(longlong *)this_00 + 600))(this_00,&local_88);
      local_38.Data.AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
    }
    else {
      if ((*(uint *)&this->field_0x38 >> 0x12 & 1) == 0) {
        this_01 = *(UClass **)&this_00->field_0x10;
      }
      else {
        this_01 = FField::GetOwnerClass((FField *)this);
      }
      pFVar6 = UObjectBaseUtility::GetPathName
                         ((UObjectBaseUtility *)this_01,&local_38,(UObject *)0x0);
      if (&local_88 != pFVar6) {
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        local_88.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
        (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = (pFVar6->Data).ArrayNum;
        local_88.Data.ArrayMax = (pFVar6->Data).ArrayMax;
        (pFVar6->Data).ArrayNum = 0;
        (pFVar6->Data).ArrayMax = 0;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_88.Data.ArrayNum != 0) {
    FVar8.Data = local_88.Data.AllocatorInstance.Data;
  }
  pwVar7 = FTextStringHelper::ReadFromBuffer
                     (param_1,&local_58,(wchar_t *)FVar8.Data,L"",(bool)((byte)param_5 & 1));
  if (pwVar7 != (wchar_t *)0x0) {
    if (param_3 == Container) {
      cVar3 = (**(code **)(*(longlong *)this + 0x70))(this);
      if (cVar3 != '\0') {
        FProperty::SetValue_InContainer((FProperty *)this,param_2,&local_58);
        goto LAB_142211be3;
      }
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    pIVar1 = *(ITextData **)param_2;
    if (pIVar1 != local_58.TextData.Reference) {
      *(ITextData **)param_2 = local_58.TextData.Reference;
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 8))
                  (local_58.TextData.Reference,&param_5);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    *(uint *)((longlong)param_2 + 8) = local_58.Flags;
  }
LAB_142211be3:
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_58.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
  }
  return pwVar7;
}

// SerializeItem @ 14222a310

void __thiscall
FTextProperty::SerializeItem
          (FTextProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014222a31d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x170))
            (*(longlong **)(*(longlong *)param_1 + 8),param_2);
  return;
}

// StaticClass @ 14222df00

FFieldClass * __cdecl FTextProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FTextProperty",0x40000000,
                 CASTCLASS_FTextProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FTextProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

