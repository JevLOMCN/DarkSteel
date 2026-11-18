// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 32

// FNiagaraTypeDefinition @ 148e545b0

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::FNiagaraTypeDefinition(FNiagaraTypeDefinition *this,UObject *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FNiagaraTypeDefinition *pFVar5;
  TObjectPtr<UObject>_u_0 TVar6;
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 *local_res10;
  TObjectPtr<UObject>_u_0 local_68;
  undefined2 local_60;
  undefined1 local_5e;
  undefined8 local_5c;
  undefined4 local_54;
  TObjectPtr<UObject>_u_0 local_50;
  undefined2 local_48;
  undefined1 local_46;
  undefined8 local_44;
  undefined4 local_3c;
  TObjectPtr<UObject>_u_0 local_38;
  undefined2 local_30;
  undefined1 local_2e;
  undefined8 local_2c;
  undefined4 local_24;
  
  (this->ClassStructOrEnum).field0_0x0.DebugPtr = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  this->Flags = '\0';
  this->Size = -1;
  this->Alignment = -1;
  this->RegisteredTypeDefIndex = -1;
  this->UnderlyingTypePathNameHash = 0xffffffff;
  if (param_1 == (UObject *)0x0) {
LAB_148e5462f:
    TVar6.DebugPtr = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (TVar6.DebugPtr = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) goto LAB_148e5462f;
  }
  if (TVar6.DebugPtr != (UObject *)0x0) {
    local_68 = TVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(TVar6.DebugPtr);
    }
    local_5e = 0;
    local_60 = 1;
    local_5c = 0xffffffffffffffff;
    local_54 = 0xffffffff;
    GeneratePathNameHash((FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    operator=(this,(FNiagaraTypeDefinition *)&local_68.ObjectPtr);
    goto LAB_148e547c1;
  }
  if (param_1 == (UObject *)0x0) {
LAB_148e546b2:
    TVar6.DebugPtr = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       (TVar6.DebugPtr = param_1,
       (longlong *)
       *(undefined1 **)
        (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
       &pUVar4->_padding_)) goto LAB_148e546b2;
  }
  if ((UScriptStruct *)TVar6.DebugPtr != (UScriptStruct *)0x0) {
    local_res8 = TVar6;
    local_50 = TVar6;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(TVar6.DebugPtr);
    }
    local_46 = 0;
    local_48 = 2;
    local_44 = 0xffffffffffffffff;
    local_3c = 0xffffffff;
    bVar3 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct
                      ((UScriptStruct *)local_res8.DebugPtr,UserFacing);
    if (!bVar3) {
      local_res10 = &local_res8;
      `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_res10);
    }
    GeneratePathNameHash((FNiagaraTypeDefinition *)&local_50.ObjectPtr);
    operator=(this,(FNiagaraTypeDefinition *)&local_50.ObjectPtr);
    goto LAB_148e547c1;
  }
  if (param_1 == (UObject *)0x0) {
LAB_148e5474c:
    param_1 = (UObject *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_UEnum_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) goto LAB_148e5474c;
  }
  if (param_1 == (UObject *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                       ,0x2c6,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNiagaraTypeDefinition *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    local_38.DebugPtr = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_2e = 0;
    local_30 = 3;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
    operator=(this,(FNiagaraTypeDefinition *)&local_38.ObjectPtr);
  }
LAB_148e547c1:
  GeneratePathNameHash(this);
  return this;
}

// operator= @ 148e57310

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::operator=(FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ClassStructOrEnum).field0_0x0 = (param_1->ClassStructOrEnum).field0_0x0;
  this->UnderlyingType = param_1->UnderlyingType;
  this->Flags = param_1->Flags;
  this->Size = param_1->Size;
  this->Alignment = param_1->Alignment;
  this->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
  this->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
  return this;
}

// GetClass @ 148e68b60

UClass * __thiscall FNiagaraTypeDefinition::GetClass(FNiagaraTypeDefinition *this)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (this->UnderlyingType == 1) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
      pFVar3 = GetTypeName<UClass>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if ((!bVar1) ||
       (pUVar2 = (UClass *)(this->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar2 == (UClass *)0x0))
    {
      pFVar3 = GetTypeName<UClass>(&local_28);
      pwVar4 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UObject>
                         (&local_18,(this->ClassStructOrEnum).field0_0x0.DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar4,pwVar5);
    }
  }
  else {
    pUVar2 = (UClass *)0x0;
  }
  return pUVar2;
}

// GetSize @ 148e6eb50

int __thiscall FNiagaraTypeDefinition::GetSize(FNiagaraTypeDefinition *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  UStruct *pUVar5;
  UScriptStruct *pUVar6;
  short sVar7;
  uint uVar8;
  
  iVar3 = (int)this->Size;
  if (this->Size == -1) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar4 = GetClass(this);
      if (pUVar4 == (UClass *)0x0) {
        pUVar5 = GetStruct(this);
        pUVar6 = CastChecked<UScriptStruct,UStruct>(pUVar5);
        iVar3 = (int)*(short *)((longlong)&pUVar6->_padding_ + 4);
        uVar8 = iVar3 + -1 + (int)pUVar6->_padding_ & -iVar3;
        if (0x7fff < (int)uVar8) {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_2309485622517038180>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x39c,"StructSize <= TNumericLimits<int16>::Max()");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            iVar3 = (*pcVar1)();
            return iVar3;
          }
        }
        sVar7 = (short)uVar8;
        this->Size = sVar7;
        return (int)sVar7;
      }
    }
    this->Size = 0;
    iVar3 = 0;
  }
  return iVar3;
}

// GetStruct @ 148e6ec00

UStruct * __thiscall FNiagaraTypeDefinition::GetStruct(FNiagaraTypeDefinition *this)

{
  bool bVar1;
  UClass *pUVar2;
  
  if (this->UnderlyingType == 3) {
    return (UStruct *)IntStruct;
  }
  if ((this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar2 = Z_Construct_UClass_UStruct_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if (bVar1) {
      return (UStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
    }
  }
  return (UStruct *)0x0;
}

// operator== @ 148f82650

bool __thiscall
FNiagaraTypeDefinition::operator==(FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *param_1)

{
  if ((((this->ClassStructOrEnum).field0_0x0.DebugPtr ==
        (param_1->ClassStructOrEnum).field0_0x0.DebugPtr) &&
      (this->UnderlyingType == param_1->UnderlyingType)) && (this->Flags == param_1->Flags)) {
    return true;
  }
  return false;
}

// GetName @ 148fb4ac0

FString * __thiscall
FNiagaraTypeDefinition::GetName(FNiagaraTypeDefinition *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  if ((this->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"Invalid");
    return __return_storage_ptr__;
  }
  local_res8[0] = UE::CoreUObject::Private::GetFName((UObject *)(local_res8 + 2));
  local_res8[0] = *(FName *)local_res8[0];
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// FNiagaraTypeDefinition @ 149022ce0

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::FNiagaraTypeDefinition
          (FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  (this->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->UnderlyingType = param_1->UnderlyingType;
  this->Flags = param_1->Flags;
  this->Size = param_1->Size;
  this->Alignment = param_1->Alignment;
  this->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
  this->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
  return this;
}

// FNiagaraTypeDefinition @ 149022d50

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::FNiagaraTypeDefinition(FNiagaraTypeDefinition *this,UScriptStruct *param_1)

{
  bool bVar1;
  UScriptStruct *local_res8;
  UScriptStruct **local_res10 [3];
  
  (this->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)param_1;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  this->UnderlyingType = 2;
  this->Flags = '\0';
  this->Size = -1;
  this->Alignment = -1;
  this->RegisteredTypeDefIndex = -1;
  this->UnderlyingTypePathNameHash = 0xffffffff;
  bVar1 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_res8,UserFacing);
  if (!bVar1) {
    local_res10[0] = &local_res8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(local_res10);
  }
  GeneratePathNameHash(this);
  return this;
}

// GetNameText @ 14917f500

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __thiscall
FNiagaraTypeDefinition::GetNameText(FNiagaraTypeDefinition *this,FText *__return_storage_ptr__)

{
  UObject *pUVar1;
  FText *pFVar2;
  FTextFormat *pFVar3;
  TRefCountPtr<ITextData> TVar4;
  FName local_res8;
  FText local_58;
  FText local_48;
  FText local_38;
  FText local_28;
  FTextFormat local_18;
  
  if ((this->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
    FText::AsLocalizable_Advanced_LocText
              (__return_storage_ptr__,L"NiagaraTypeDefinition",L"InvalidNameText",
               L"Invalid (null type)");
  }
  else {
    FText::FText(&local_58);
    pUVar1 = (this->ClassStructOrEnum).field0_0x0.DebugPtr;
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar1->field_0x18;
    local_res8.Number = *(uint *)&pUVar1->field_0x1c;
    ::FName::ToString(&local_res8,(FString *)&local_48);
    pFVar2 = FText::FromString(&local_38,(FString *)&local_48);
    FText::operator=(&local_58,pFVar2);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    if (this->Flags != 0) {
      local_48.TextData.Reference = local_58.TextData.Reference;
      if ((this->Flags & 1) == 0) {
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 8))
                    (local_58.TextData.Reference,&local_res8);
        }
        local_48.Flags = local_58.Flags;
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           (&local_38,L"NiagaraTypeDefinition",L"UnknownNameText",
                            L"Unknown Flag Type {0}");
        pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
        pFVar2 = FText::Format<FText>(&local_28,pFVar3,&local_48);
        FText::operator=(&local_58,pFVar2);
        TVar4.Reference = local_38.TextData.Reference;
        if (local_28.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
          TVar4.Reference = local_38.TextData.Reference;
        }
      }
      else {
        if (local_58.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_58.TextData.Reference + 8))
                    (local_58.TextData.Reference,&local_res8);
        }
        local_48.Flags = local_58.Flags;
        pFVar2 = FText::AsLocalizable_Advanced_LocText
                           (&local_28,L"NiagaraTypeDefinition",L"FlagFormatNameText",L"Static {0}");
        pFVar3 = FTextFormat::FTextFormat(&local_18,pFVar2,Default);
        pFVar2 = FText::Format<FText>(&local_38,pFVar3,&local_48);
        FText::operator=(&local_58,pFVar2);
        TVar4.Reference = local_28.TextData.Reference;
        if (local_38.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
          TVar4.Reference = local_28.TextData.Reference;
        }
      }
      if (TVar4.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar4.Reference + 0x10))();
      }
    }
    FText::FText(__return_storage_ptr__,&local_58);
    if (local_58.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
    }
  }
  return __return_storage_ptr__;
}

// operator= @ 14927be10

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::operator=(FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *param_1)

{
  UObject *pUVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) &&
     (pUVar1 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  (this->ClassStructOrEnum).field0_0x0 = (param_1->ClassStructOrEnum).field0_0x0;
  this->UnderlyingType = param_1->UnderlyingType;
  this->Flags = param_1->Flags;
  this->Size = param_1->Size;
  this->Alignment = param_1->Alignment;
  this->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
  this->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
  return this;
}

// FNiagaraTypeDefinition @ 1492d15d0

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::FNiagaraTypeDefinition
          (FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *param_1)

{
  UObject *pUVar1;
  
  pUVar1 = (param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  (this->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  this->UnderlyingType = param_1->UnderlyingType;
  this->Flags = param_1->Flags;
  this->Size = param_1->Size;
  this->Alignment = param_1->Alignment;
  this->RegisteredTypeDefIndex = param_1->RegisteredTypeDefIndex;
  this->UnderlyingTypePathNameHash = param_1->UnderlyingTypePathNameHash;
  return this;
}

// operator() @ 1492d5c80

bool __thiscall
`FNiagaraTypeDefinition::GetNumericOutputType'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraTypeDefinition *param_1,FNiagaraTypeDefinition *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  longlong lVar4;
  int iVar5;
  
  pFVar1 = FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)FNiagaraTypeDefinition::OrderedNumericTypes.ArrayNum * 0x18;
  if (FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data != pFVar1) {
    FVar3.Data = FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data;
    do {
      if (((*(UObject **)FVar3.Data == (param_1->ClassStructOrEnum).field0_0x0.DebugPtr) &&
          (*(ushort *)(FVar3.Data + 8) == param_1->UnderlyingType)) &&
         (FVar3.Data[10] == (FScriptContainerElement)param_1->Flags)) {
        lVar4 = ((longlong)FVar3.Data -
                (longlong)FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data) / 6 +
                ((longlong)FVar3.Data -
                 (longlong)FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data >>
                0x3f);
        iVar2 = (int)(lVar4 >> 2) - (int)(lVar4 >> 0x3f);
        goto LAB_1492d5ce1;
      }
      FVar3.Data = FVar3.Data + 0x18;
    } while (FVar3.Data != pFVar1);
  }
  iVar5 = -1;
  iVar2 = -1;
  if (FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data != pFVar1) {
LAB_1492d5ce1:
    iVar5 = iVar2;
    FVar3.Data = FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data;
    do {
      if (((*(UObject **)FVar3.Data == (param_2->ClassStructOrEnum).field0_0x0.DebugPtr) &&
          (*(ushort *)(FVar3.Data + 8) == param_2->UnderlyingType)) &&
         (FVar3.Data[10] == (FScriptContainerElement)param_2->Flags)) {
        return iVar5 < (int)(((longlong)FVar3.Data -
                             (longlong)
                             FNiagaraTypeDefinition::OrderedNumericTypes.AllocatorInstance.Data) /
                            0x18);
      }
      FVar3.Data = FVar3.Data + 0x18;
    } while (FVar3.Data != pFVar1);
  }
  return iVar5 < -1;
}

// AppendCompileHash @ 1492db220

bool __thiscall
FNiagaraTypeDefinition::AppendCompileHash
          (FNiagaraTypeDefinition *this,FNiagaraCompileHashVisitor *param_1)

{
  return false;
}

// GeneratePathNameHash @ 1492ec400

void __thiscall FNiagaraTypeDefinition::GeneratePathNameHash(FNiagaraTypeDefinition *this)

{
  UObjectBaseUtility *this_00;
  ForAnyElementType FVar1;
  uint uVar2;
  int iVar3;
  FString local_18;
  
  this_00 = (UObjectBaseUtility *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
  if ((this_00 == (UObjectBaseUtility *)0x0) || (*(longlong *)&this_00->field_0x10 == 0)) {
    ::FString::FString(&local_18,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName(this_00,&local_18,(UObject *)0x0,None);
  }
  iVar3 = local_18.Data.ArrayNum + -1;
  FVar1.Data = local_18.Data.AllocatorInstance.Data;
  if (local_18.Data.ArrayNum == 0) {
    iVar3 = 0;
    FVar1.Data = (FScriptContainerElement *)L"";
  }
  uVar2 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar3,(wchar_t *)FVar1.Data);
  this->UnderlyingTypePathNameHash = uVar2;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetEnum @ 1492ee770

UEnum * __thiscall FNiagaraTypeDefinition::GetEnum(FNiagaraTypeDefinition *this)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  UEnum *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if (this->UnderlyingType == 3) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
      pFVar3 = GetTypeName<UEnum>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar2 = Z_Construct_UClass_UEnum_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (UEnum *)(this->ClassStructOrEnum).field0_0x0.DebugPtr, pUVar4 == (UEnum *)0x0)) {
      pFVar3 = GetTypeName<UEnum>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UObject>
                         (&local_18,(this->ClassStructOrEnum).field0_0x0.DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  else {
    pUVar4 = (UEnum *)0x0;
  }
  return pUVar4;
}

// GetNumericOutputType @ 1492f0660

FNiagaraTypeDefinition * __cdecl
FNiagaraTypeDefinition::GetNumericOutputType
          (FNiagaraTypeDefinition *__return_storage_ptr__,
          TArrayView<FNiagaraTypeDefinition_const_,int> *param_1,
          ENiagaraNumericOutputTypeSelectionMode param_2)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UClass *pUVar7;
  FNiagaraTypeDefinition *pFVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  TObjectPtr<UObject>_u_0 *pTVar12;
  ForAnyElementType FVar13;
  FNiagaraTypeDefinition *this;
  UScriptStruct *pUVar14;
  UScriptStruct *pUVar15;
  ENiagaraNumericOutputTypeSelectionMode local_res18 [8];
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  
  pUVar14 = (UScriptStruct *)0x0;
  local_res18[0] = param_2;
  if (param_2 == None) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SelectionMode != ENiagaraNumericOutputTypeSelectionMode::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                       ,0x5d8,L"Can not get numeric output type with selection mode none.");
    if (bVar5) {
code_r0x0001492f06ea:
      pcVar2 = (code *)swi(3);
      pFVar8 = (FNiagaraTypeDefinition *)(*pcVar2)();
      return pFVar8;
    }
  }
  else if (param_2 == Custom) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SelectionMode != ENiagaraNumericOutputTypeSelectionMode::Custom",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                       ,0x5d9,L"Can not get numeric output type with selection mode custom.");
    if (bVar5) goto code_r0x0001492f06ea;
  }
  else if (param_2 == Scalar) {
    this = param_1->DataPtr;
    bVar5 = false;
    bVar3 = false;
    bVar4 = false;
    pFVar8 = this + param_1->ArrayNum;
    if (this != pFVar8) {
      do {
        pUVar15 = IntStruct;
        if ((this->UnderlyingType != 3) &&
           (pUVar15 = pUVar14, (this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
          pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this,pUVar7);
          if (bVar6) {
            pUVar15 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
          }
        }
        uVar9 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar15 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (FloatStructs.Elements._8_4_ != FloatStructs.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)0x154c809f8;
          if (FloatStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = FloatStructs.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar11 +
                                (ulonglong)(FloatStructs.HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) *
                                4); iVar10 != -1;
              iVar10 = *(int *)(FloatStructs.Elements._0_8_ + 8 + (longlong)iVar10 * 0x10)) {
            if (*(UScriptStruct **)(FloatStructs.Elements._0_8_ + (longlong)iVar10 * 0x10) ==
                pUVar15) goto LAB_1492f07e1;
          }
        }
        iVar10 = -1;
LAB_1492f07e1:
        bVar5 = (bool)(bVar5 | iVar10 != -1);
        pUVar15 = IntStruct;
        if ((this->UnderlyingType != 3) &&
           (pUVar15 = pUVar14, (this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
          pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this,pUVar7);
          if (bVar6) {
            pUVar15 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
          }
        }
        uVar9 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar15 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (IntStructs.Elements._8_4_ != IntStructs.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)0x154c80a48;
          if (IntStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = IntStructs.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar11 +
                                (ulonglong)(IntStructs.HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4)
              ; iVar10 != -1;
              iVar10 = *(int *)(IntStructs.Elements._0_8_ + 8 + (longlong)iVar10 * 0x10)) {
            if (*(UScriptStruct **)(IntStructs.Elements._0_8_ + (longlong)iVar10 * 0x10) == pUVar15)
            goto LAB_1492f08a1;
          }
        }
        iVar10 = -1;
LAB_1492f08a1:
        bVar3 = (bool)(bVar3 | iVar10 != -1);
        pUVar15 = IntStruct;
        if ((this->UnderlyingType != 3) &&
           (pUVar15 = pUVar14, (this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
          pUVar7 = Z_Construct_UClass_UStruct_NoRegister();
          bVar6 = FObjectPtr::IsA((FObjectPtr *)this,pUVar7);
          if (bVar6) {
            pUVar15 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
          }
        }
        uVar9 = ((uint)((ulonglong)pUVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar15 >> 4)) *
                -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        if (BoolStructs.Elements._8_4_ != BoolStructs.Elements._52_4_) {
          FVar11 = (ForElementType<FSetElementId>)0x154c80a98;
          if (BoolStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar11 = BoolStructs.Hash.SecondaryData;
          }
          for (iVar10 = *(int *)((longlong)FVar11 +
                                (ulonglong)(BoolStructs.HashSize - 1U & (uVar9 >> 0x10 ^ uVar9)) * 4
                                ); iVar10 != -1;
              iVar10 = *(int *)(BoolStructs.Elements._0_8_ + 8 + (longlong)iVar10 * 0x10)) {
            if (*(UScriptStruct **)(BoolStructs.Elements._0_8_ + (longlong)iVar10 * 0x10) == pUVar15
               ) goto LAB_1492f0961;
          }
        }
        iVar10 = -1;
LAB_1492f0961:
        this = this + 1;
        bVar4 = (bool)(bVar4 | iVar10 != -1);
      } while (this != pFVar8);
      if (bVar5) {
        (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)FloatDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FloatDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FloatDef.ClassStructOrEnum.field0_0x0);
        }
        __return_storage_ptr__->UnderlyingType = FloatDef.UnderlyingType;
        __return_storage_ptr__->Flags = FloatDef.Flags;
        __return_storage_ptr__->Size = FloatDef.Size;
        __return_storage_ptr__->Alignment = FloatDef.Alignment;
        __return_storage_ptr__->RegisteredTypeDefIndex = FloatDef.RegisteredTypeDefIndex;
        __return_storage_ptr__->UnderlyingTypePathNameHash = FloatDef.UnderlyingTypePathNameHash;
        return __return_storage_ptr__;
      }
      if (bVar3) {
        (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)IntDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (IntDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)IntDef.ClassStructOrEnum.field0_0x0);
        }
        __return_storage_ptr__->UnderlyingType = IntDef.UnderlyingType;
        __return_storage_ptr__->Flags = IntDef.Flags;
        __return_storage_ptr__->Size = IntDef.Size;
        __return_storage_ptr__->Alignment = IntDef.Alignment;
        __return_storage_ptr__->RegisteredTypeDefIndex = IntDef.RegisteredTypeDefIndex;
        __return_storage_ptr__->UnderlyingTypePathNameHash = IntDef.UnderlyingTypePathNameHash;
        return __return_storage_ptr__;
      }
      param_2 = local_res18[0];
      if (bVar4) {
        (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)BoolDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (BoolDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)BoolDef.ClassStructOrEnum.field0_0x0);
        }
        __return_storage_ptr__->UnderlyingType = BoolDef.UnderlyingType;
        __return_storage_ptr__->Flags = BoolDef.Flags;
        __return_storage_ptr__->Size = BoolDef.Size;
        __return_storage_ptr__->Alignment = BoolDef.Alignment;
        __return_storage_ptr__->RegisteredTypeDefIndex = BoolDef.RegisteredTypeDefIndex;
        __return_storage_ptr__->UnderlyingTypePathNameHash = BoolDef.UnderlyingTypePathNameHash;
        return __return_storage_ptr__;
      }
    }
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)param_1->DataPtr;
  pTVar12 = pTVar1;
  do {
    if (pTVar12 == pTVar1 + (longlong)param_1->ArrayNum * 3) {
LAB_1492f0b0b:
      iVar10 = param_1->ArrayNum;
      local_38.Data = (FScriptContainerElement *)0x0;
      local_30 = iVar10;
      if (iVar10 == 0) {
        local_2c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,iVar10,0,&local_38,iVar10,&local_2c);
        ConstructItems<FNiagaraTypeDefinition,FNiagaraTypeDefinition,int>
                  (local_38.Data,param_1->DataPtr,iVar10);
      }
      local_res18[0] = 0;
      AlgoImpl::
      IntroSortInternal<FNiagaraTypeDefinition,int,FIdentityFunctor,TDereferenceWrapper<FNiagaraTypeDefinition,_FNiagaraTypeDefinition::GetNumericOutputType_::__l2::<lambda_1>_>_>
                ((FNiagaraTypeDefinition *)local_38.Data,local_30,(FIdentityFunctor)0x0,
                 (<lambda_1> *)local_res18);
      if (param_2 == Largest) {
        uVar9 = 0;
        if ((int)(local_30 - 1U) < local_30) {
          uVar9 = ~(local_30 - 1U) >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraTypeDefinition *)(*pcVar2)();
          return pFVar8;
        }
        FVar13.Data = (FScriptContainerElement *)(local_38.Data + (longlong)(local_30 + -1) * 0x18);
      }
      else {
        FVar13.Data = local_38.Data;
        if ((local_30 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , FVar13.Data = local_38.Data, bVar5)) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FNiagaraTypeDefinition *)(*pcVar2)();
          return pFVar8;
        }
      }
      FNiagaraTypeDefinition(__return_storage_ptr__,(FNiagaraTypeDefinition *)FVar13.Data);
      if ((FNiagaraTypeDefinition *)local_38.Data != (FNiagaraTypeDefinition *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return __return_storage_ptr__;
    }
    if ((((TObjectPtr<UObject>_u_0)pTVar12->DebugPtr == NumericDef.ClassStructOrEnum.field0_0x0) &&
        (*(ushort *)(pTVar12 + 1) == NumericDef.UnderlyingType)) &&
       (*(uchar *)((longlong)pTVar12 + 10) == NumericDef.Flags)) {
      if ((int)(((longlong)pTVar12 - (longlong)pTVar1) / 0x18) != -1) {
        (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.ObjectPtr.field0_0x0 =
             (FObjectPtr_u_0)NumericDef.ClassStructOrEnum.field0_0x0;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (NumericDef.ClassStructOrEnum.field0_0x0 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)NumericDef.ClassStructOrEnum.field0_0x0);
        }
        __return_storage_ptr__->UnderlyingType = NumericDef.UnderlyingType;
        __return_storage_ptr__->Flags = NumericDef.Flags;
        __return_storage_ptr__->Size = NumericDef.Size;
        __return_storage_ptr__->Alignment = NumericDef.Alignment;
        __return_storage_ptr__->RegisteredTypeDefIndex = NumericDef.RegisteredTypeDefIndex;
        __return_storage_ptr__->UnderlyingTypePathNameHash = NumericDef.UnderlyingTypePathNameHash;
        return __return_storage_ptr__;
      }
      goto LAB_1492f0b0b;
    }
    pTVar12 = pTVar12 + 3;
  } while( true );
}

// GetScriptStruct @ 1492f1a50

UScriptStruct * __thiscall FNiagaraTypeDefinition::GetScriptStruct(FNiagaraTypeDefinition *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = IntStruct;
  if (this->UnderlyingType != 3) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar2) {
        pUVar4 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_1492f1a8a;
      }
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
LAB_1492f1a8a:
  if (pUVar4 != (UScriptStruct *)0x0) {
    pUVar3 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar4;
    }
  }
  return (UScriptStruct *)0x0;
}

// ImportTextItem @ 1492f31e0

bool __thiscall
FNiagaraTypeDefinition::ImportTextItem
          (FNiagaraTypeDefinition *this,wchar_t **param_1,int param_2,UObject *param_3,
          FOutputDevice *param_4)

{
  UScriptStruct *this_00;
  UScriptStruct *pUVar1;
  FName local_res10;
  FString local_18;
  
  this_00 = StaticStruct();
  pUVar1 = StaticStruct();
  local_res10 = (FName)pUVar1->_padding_;
  ::FName::ToString(&local_res10,&local_18);
  UScriptStruct::ImportText(this_00,*param_1,this,(UObject *)0x0,0,param_4,&local_18,false);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  GeneratePathNameHash(this);
  return true;
}

// Init @ 1492f4b20

void __cdecl FNiagaraTypeDefinition::Init(void)

{
  TObjectPtr<UObject>_u_0 *pTVar1;
  code *pcVar2;
  UScriptStruct *pUVar3;
  UScriptStruct *pUVar4;
  bool bVar5;
  uint uVar6;
  UClass *pUVar7;
  UPackage *pUVar8;
  longlong lVar9;
  int iVar10;
  ForAnyElementType FVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  UScriptStruct *local_res8;
  UScriptStruct *local_res10;
  UScriptStruct *local_res18;
  UScriptStruct *local_res20;
  TObjectPtr<UObject>_u_0 local_818;
  undefined2 local_810;
  FScriptContainerElement local_80e;
  undefined8 local_80c;
  undefined4 local_804;
  TObjectPtr<UObject>_u_0 local_800;
  undefined2 local_7f8;
  FScriptContainerElement local_7f6;
  undefined8 local_7f4;
  undefined4 local_7ec;
  TObjectPtr<UObject>_u_0 local_7e8;
  undefined2 local_7e0;
  FScriptContainerElement local_7de;
  undefined8 local_7dc;
  undefined4 local_7d4;
  TObjectPtr<UObject>_u_0 local_7d0;
  undefined2 local_7c8;
  FScriptContainerElement local_7c6;
  undefined8 local_7c4;
  undefined4 local_7bc;
  TObjectPtr<UObject>_u_0 local_7b8;
  undefined2 local_7b0;
  FScriptContainerElement local_7ae;
  undefined8 local_7ac;
  undefined4 local_7a4;
  TObjectPtr<UObject>_u_0 local_7a0;
  undefined2 local_798;
  undefined1 local_796;
  undefined8 local_794;
  undefined4 local_78c;
  TObjectPtr<UObject>_u_0 local_788;
  undefined2 local_780;
  undefined1 local_77e;
  undefined8 local_77c;
  undefined4 local_774;
  TObjectPtr<UObject>_u_0 local_770;
  undefined2 local_768;
  undefined1 local_766;
  undefined8 local_764;
  undefined4 local_75c;
  TObjectPtr<UObject>_u_0 local_758;
  undefined2 local_750;
  undefined1 local_74e;
  undefined8 local_74c;
  undefined4 local_744;
  TObjectPtr<UObject>_u_0 local_740;
  undefined2 local_738;
  undefined1 local_736;
  undefined8 local_734;
  undefined4 local_72c;
  UScriptStruct *local_728;
  TObjectPtr<UObject>_u_0 local_720;
  undefined2 local_718;
  undefined1 local_716;
  undefined8 local_714;
  undefined4 local_70c;
  TObjectPtr<UObject>_u_0 local_708;
  undefined2 local_700;
  undefined1 local_6fe;
  undefined8 local_6fc;
  undefined4 local_6f4;
  TObjectPtr<UObject>_u_0 local_6f0;
  undefined2 local_6e8;
  undefined1 local_6e6;
  undefined8 local_6e4;
  undefined4 local_6dc;
  TObjectPtr<UObject>_u_0 local_6d8;
  undefined2 local_6d0;
  undefined1 local_6ce;
  undefined8 local_6cc;
  undefined4 local_6c4;
  TObjectPtr<UObject>_u_0 local_6c0;
  undefined2 local_6b8;
  undefined1 local_6b6;
  undefined8 local_6b4;
  undefined4 local_6ac;
  TObjectPtr<UObject>_u_0 local_6a8;
  undefined2 local_6a0;
  undefined1 local_69e;
  undefined8 local_69c;
  undefined4 local_694;
  TObjectPtr<UObject>_u_0 local_690;
  undefined2 local_688;
  undefined1 local_686;
  undefined8 local_684;
  undefined4 local_67c;
  UScriptStruct *local_678;
  UScriptStruct *local_670;
  UScriptStruct *local_668;
  UScriptStruct *local_660;
  UScriptStruct *local_658;
  UScriptStruct *local_650;
  UScriptStruct *local_648;
  UScriptStruct *local_640;
  UScriptStruct *local_638;
  UScriptStruct *local_630;
  UScriptStruct *local_628;
  UScriptStruct *local_620;
  UScriptStruct *local_618;
  UScriptStruct *local_610;
  UScriptStruct *local_608;
  UScriptStruct *local_600;
  UScriptStruct *local_5f8;
  UScriptStruct *local_5f0;
  UScriptStruct *local_5e8;
  UScriptStruct *local_5e0;
  UScriptStruct *local_5d8;
  UScriptStruct *local_5d0;
  TObjectPtr<UObject>_u_0 local_5c8;
  undefined2 local_5c0;
  undefined1 local_5be;
  undefined8 local_5bc;
  undefined4 local_5b4;
  UScriptStruct *local_5b0;
  UScriptStruct *local_5a8;
  UScriptStruct *local_5a0;
  UScriptStruct *local_598;
  UScriptStruct *local_590;
  TObjectPtr<UObject>_u_0 local_588;
  undefined2 local_580;
  undefined1 local_57e;
  undefined8 local_57c;
  undefined4 local_574;
  TObjectPtr<UObject>_u_0 local_570;
  undefined2 local_568;
  undefined1 local_566;
  undefined8 local_564;
  undefined4 local_55c;
  TObjectPtr<UObject>_u_0 local_558;
  undefined2 local_550;
  undefined1 local_54e;
  undefined8 local_54c;
  undefined4 local_544;
  TObjectPtr<UObject>_u_0 local_540;
  undefined2 local_538;
  undefined1 local_536;
  undefined8 local_534;
  uint local_52c;
  FString local_528;
  FString local_518;
  FString local_508;
  FString local_4f8;
  FString local_4e8;
  FString local_4d8;
  FString local_4c8;
  FString local_4b8;
  FString local_4a8;
  FString local_498;
  FString local_488;
  FString local_478;
  FString local_468;
  undefined1 local_458 [8];
  undefined1 local_450 [8];
  undefined1 local_448 [8];
  UScriptStruct *local_440;
  UScriptStruct **local_438;
  UScriptStruct **local_430;
  UScriptStruct **local_428;
  UScriptStruct **local_420;
  UScriptStruct **local_418;
  UScriptStruct **local_410;
  UScriptStruct **local_408;
  UScriptStruct **local_400;
  UScriptStruct **local_3f8;
  UScriptStruct **local_3f0;
  UScriptStruct **local_3e8;
  UScriptStruct **local_3e0;
  UScriptStruct **local_3d8;
  UScriptStruct **local_3d0;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [8];
  undefined1 local_3b8 [8];
  undefined1 local_3b0 [8];
  UScriptStruct **local_3a8;
  undefined1 local_3a0 [8];
  UStruct *local_398;
  UScriptStruct **local_390;
  UScriptStruct *local_388;
  UScriptStruct **local_380;
  UScriptStruct **local_378;
  UScriptStruct **local_370;
  UScriptStruct **local_368;
  UScriptStruct **local_360;
  UScriptStruct *local_358;
  UScriptStruct *local_350;
  UScriptStruct *local_348;
  UScriptStruct *local_340;
  UScriptStruct *local_338;
  UScriptStruct *local_330;
  UScriptStruct *local_328;
  UScriptStruct *local_320;
  UScriptStruct **local_318;
  UScriptStruct **local_310;
  UScriptStruct **local_308;
  UScriptStruct **local_300;
  UScriptStruct **local_2f8;
  UScriptStruct **local_2f0;
  UScriptStruct **local_2e8 [2];
  wchar_t *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  wchar_t *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  wchar_t *local_2a8;
  int iStack_2a0;
  undefined4 uStack_29c;
  wchar_t *local_298;
  int iStack_290;
  undefined4 uStack_28c;
  wchar_t *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  wchar_t *local_278;
  int iStack_270;
  undefined4 uStack_26c;
  wchar_t *local_268;
  int iStack_260;
  undefined4 uStack_25c;
  wchar_t *local_258;
  int iStack_250;
  undefined4 uStack_24c;
  wchar_t *local_248;
  int iStack_240;
  undefined4 uStack_23c;
  wchar_t *local_238;
  int iStack_230;
  undefined4 uStack_22c;
  wchar_t *local_228;
  int iStack_220;
  undefined4 uStack_21c;
  wchar_t *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  wchar_t *local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  wchar_t *local_1f8;
  int iStack_1f0;
  undefined4 uStack_1ec;
  wchar_t *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  wchar_t *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  wchar_t *local_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  wchar_t *local_1b8;
  int iStack_1b0;
  undefined4 uStack_1ac;
  wchar_t *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  wchar_t *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  TStringView<wchar_t> local_188;
  TStringView<wchar_t> local_178;
  TStringView<wchar_t> local_168;
  TStringView<wchar_t> local_158;
  TStringView<wchar_t> local_148;
  TStringView<wchar_t> local_138;
  TStringView<wchar_t> local_128;
  TStringView<wchar_t> local_118;
  TStringView<wchar_t> local_108;
  TStringView<wchar_t> local_f8;
  TStringView<wchar_t> local_e8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  TStringView<wchar_t> local_88;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  
  piVar12 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar12 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    iStack_190 = 0x13;
    local_198 = L"/Script/CoreUObject";
    pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
    local_58._12_4_ = uStack_18c;
    local_58.Size = iStack_190;
    local_58.DataPtr = local_198;
    CoreUObjectPkg = (UPackage *)StaticFindObjectChecked(pUVar7,(UObject *)0x0,&local_58,None);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*piVar12 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    iStack_2d0 = 0xf;
    local_2d8 = L"/Script/Niagara";
    pUVar7 = Z_Construct_UClass_UPackage_NoRegister();
    local_a8._12_4_ = uStack_2cc;
    local_a8.Size = iStack_2d0;
    local_a8.DataPtr = local_2d8;
    NiagaraPkg = (UPackage *)StaticFindObjectChecked(pUVar7,(UObject *)0x0,&local_a8,None);
    _Init_thread_footer(&::_TSS1);
  }
  pUVar8 = NiagaraPkg;
  local_2c8 = L"NiagaraParameterMap";
  iStack_2c0 = 0x13;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_48._12_4_ = uStack_2bc;
  local_48.Size = iStack_2c0;
  local_48.DataPtr = local_2c8;
  ParameterMapStruct =
       (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_48,None);
  pUVar8 = NiagaraPkg;
  local_2b8 = L"NiagaraID";
  iStack_2b0 = 9;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_188._12_4_ = uStack_2ac;
  local_188.Size = iStack_2b0;
  local_188.DataPtr = local_2b8;
  IDStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_188,None);
  pUVar8 = NiagaraPkg;
  local_2a8 = L"NiagaraRandInfo";
  iStack_2a0 = 0xf;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_178._12_4_ = uStack_29c;
  local_178.Size = iStack_2a0;
  local_178.DataPtr = local_2a8;
  RandInfoStruct =
       (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_178,None);
  pUVar8 = NiagaraPkg;
  local_298 = L"NiagaraNumeric";
  iStack_290 = 0xe;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_168._12_4_ = uStack_28c;
  local_168.Size = iStack_290;
  local_168.DataPtr = local_298;
  NumericStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_168,None)
  ;
  pUVar8 = NiagaraPkg;
  local_288 = L"NiagaraFloat";
  iStack_280 = 0xc;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_158._12_4_ = uStack_27c;
  local_158.Size = iStack_280;
  local_158.DataPtr = local_288;
  FloatStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_158,None);
  pUVar8 = NiagaraPkg;
  local_278 = L"NiagaraBool";
  iStack_270 = 0xb;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_148._12_4_ = uStack_26c;
  local_148.Size = iStack_270;
  local_148.DataPtr = local_278;
  BoolStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_148,None);
  pUVar8 = NiagaraPkg;
  local_268 = L"NiagaraInt32";
  iStack_260 = 0xc;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_138._12_4_ = uStack_25c;
  local_138.Size = iStack_260;
  local_138.DataPtr = local_268;
  IntStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_138,None);
  pUVar8 = NiagaraPkg;
  local_258 = L"NiagaraMatrix";
  iStack_250 = 0xd;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_128._12_4_ = uStack_24c;
  local_128.Size = iStack_250;
  local_128.DataPtr = local_258;
  Matrix4Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_128,None)
  ;
  pUVar8 = NiagaraPkg;
  local_248 = L"NiagaraWildcard";
  iStack_240 = 0xf;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_108._12_4_ = uStack_23c;
  local_108.Size = iStack_240;
  local_108.DataPtr = local_248;
  WildcardStruct =
       (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_108,None);
  pUVar8 = NiagaraPkg;
  local_238 = L"NiagaraPosition";
  iStack_230 = 0xf;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_f8._12_4_ = uStack_22c;
  local_f8.Size = iStack_230;
  local_f8.DataPtr = local_238;
  PositionStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_f8,None)
  ;
  pUVar8 = NiagaraPkg;
  local_228 = L"NiagaraHalf";
  iStack_220 = 0xb;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_e8._12_4_ = uStack_21c;
  local_e8.Size = iStack_220;
  local_e8.DataPtr = local_228;
  HalfStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_e8,None);
  pUVar8 = NiagaraPkg;
  local_218 = L"NiagaraHalfVector2";
  iStack_210 = 0x12;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_d8._12_4_ = uStack_20c;
  local_d8.Size = iStack_210;
  local_d8.DataPtr = local_218;
  HalfVec2Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_d8,None)
  ;
  pUVar8 = NiagaraPkg;
  local_208 = L"NiagaraHalfVector3";
  iStack_200 = 0x12;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_c8._12_4_ = uStack_1fc;
  local_c8.Size = iStack_200;
  local_c8.DataPtr = local_208;
  HalfVec3Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_c8,None)
  ;
  pUVar8 = NiagaraPkg;
  local_1f8 = L"NiagaraHalfVector4";
  iStack_1f0 = 0x12;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_b8._12_4_ = uStack_1ec;
  local_b8.Size = iStack_1f0;
  local_b8.DataPtr = local_1f8;
  HalfVec4Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_b8,None)
  ;
  pUVar8 = CoreUObjectPkg;
  local_1e8 = L"Vector2f";
  iStack_1e0 = 8;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_118._12_4_ = uStack_1dc;
  local_118.Size = iStack_1e0;
  local_118.DataPtr = local_1e8;
  Vec2Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_118,None);
  pUVar8 = CoreUObjectPkg;
  local_1d8 = L"Vector3f";
  iStack_1d0 = 8;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_98._12_4_ = uStack_1cc;
  local_98.Size = iStack_1d0;
  local_98.DataPtr = local_1d8;
  Vec3Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_98,None);
  pUVar8 = CoreUObjectPkg;
  local_1c8 = L"Vector4f";
  iStack_1c0 = 8;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_88._12_4_ = uStack_1bc;
  local_88.Size = iStack_1c0;
  local_88.DataPtr = local_1c8;
  Vec4Struct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_88,None);
  pUVar8 = CoreUObjectPkg;
  local_1b8 = L"LinearColor";
  iStack_1b0 = 0xb;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_78._12_4_ = uStack_1ac;
  local_78.Size = iStack_1b0;
  local_78.DataPtr = local_1b8;
  ColorStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_78,None);
  pUVar8 = CoreUObjectPkg;
  local_1a8 = L"Quat4f";
  iStack_1a0 = 6;
  pUVar7 = Z_Construct_UClass_UScriptStruct_NoRegister();
  local_68._12_4_ = uStack_19c;
  local_68.Size = iStack_1a0;
  local_68.DataPtr = local_1a8;
  QuatStruct = (UScriptStruct *)StaticFindObjectChecked(pUVar7,(UObject *)pUVar8,&local_68,None);
  UObjectClass = Z_Construct_UClass_UObject_NoRegister();
  UMaterialClass = Z_Construct_UClass_UMaterialInterface_NoRegister();
  UTextureClass = Z_Construct_UClass_UTexture_NoRegister();
  UTextureRenderTargetClass = Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  pUVar3 = ParameterMapStruct;
  local_678 = ParameterMapStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (ParameterMapStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)ParameterMapStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_678,UserFacing);
  if (!bVar5) {
    local_438 = &local_678;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_438);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_528,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_528,(UObject *)0x0,None);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_528.Data.ArrayNum != 0) {
    FVar11.Data = local_528.Data.AllocatorInstance.Data;
  }
  iVar14 = 0;
  iVar13 = 0;
  iVar10 = local_528.Data.ArrayNum + -1;
  if (local_528.Data.ArrayNum == 0) {
    iVar10 = iVar13;
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_528.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = IDStruct;
  ParameterMapDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  ParameterMapDef.UnderlyingType = 2;
  local_670 = IDStruct;
  ParameterMapDef.Flags = '\0';
  ParameterMapDef.Size = -1;
  ParameterMapDef.Alignment = -1;
  ParameterMapDef.RegisteredTypeDefIndex = -1;
  ParameterMapDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (IDStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)IDStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_670,UserFacing);
  if (!bVar5) {
    local_430 = &local_670;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_430);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_518,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_518,(UObject *)0x0,None);
  }
  iVar10 = local_518.Data.ArrayNum + -1;
  FVar11.Data = local_518.Data.AllocatorInstance.Data;
  if (local_518.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_518.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = RandInfoStruct;
  IDDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_728 = RandInfoStruct;
  IDDef.UnderlyingType = 2;
  IDDef.Flags = '\0';
  IDDef.Size = -1;
  IDDef.Alignment = -1;
  IDDef.RegisteredTypeDefIndex = -1;
  IDDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (RandInfoStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)RandInfoStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_728,UserFacing);
  if (!bVar5) {
    local_428 = &local_728;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_428);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_4f8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_4f8,(UObject *)0x0,None);
  }
  iVar10 = local_4f8.Data.ArrayNum + -1;
  FVar11.Data = local_4f8.Data.AllocatorInstance.Data;
  if (local_4f8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4f8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = NumericStruct;
  RandInfoDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  local_660 = NumericStruct;
  RandInfoDef.UnderlyingType = 2;
  RandInfoDef.Flags = '\0';
  RandInfoDef.Size = -1;
  RandInfoDef.Alignment = -1;
  RandInfoDef.RegisteredTypeDefIndex = -1;
  RandInfoDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (NumericStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)NumericStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_660,UserFacing);
  if (!bVar5) {
    local_420 = &local_660;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_420);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_4e8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_4e8,(UObject *)0x0,None);
  }
  iVar10 = local_4e8.Data.ArrayNum + -1;
  FVar11.Data = local_4e8.Data.AllocatorInstance.Data;
  if (local_4e8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4e8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = FloatStruct;
  NumericDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_658 = FloatStruct;
  NumericDef.UnderlyingType = 2;
  NumericDef.Flags = '\0';
  NumericDef.Size = -1;
  NumericDef.Alignment = -1;
  NumericDef.RegisteredTypeDefIndex = -1;
  NumericDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FloatStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)FloatStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_658,UserFacing);
  if (!bVar5) {
    local_418 = &local_658;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_418);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_4d8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_4d8,(UObject *)0x0,None);
  }
  iVar10 = local_4d8.Data.ArrayNum + -1;
  FVar11.Data = local_4d8.Data.AllocatorInstance.Data;
  if (local_4d8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4d8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = BoolStruct;
  FloatDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  local_650 = BoolStruct;
  FloatDef.UnderlyingType = 2;
  FloatDef.Flags = '\0';
  FloatDef.Size = -1;
  FloatDef.Alignment = -1;
  FloatDef.RegisteredTypeDefIndex = -1;
  FloatDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (BoolStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)BoolStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_650,UserFacing);
  if (!bVar5) {
    local_410 = &local_650;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_410);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_4c8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_4c8,(UObject *)0x0,None);
  }
  iVar10 = local_4c8.Data.ArrayNum + -1;
  FVar11.Data = local_4c8.Data.AllocatorInstance.Data;
  if (local_4c8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4c8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = IntStruct;
  BoolDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_648 = IntStruct;
  BoolDef.UnderlyingType = 2;
  BoolDef.Flags = '\0';
  BoolDef.Size = -1;
  BoolDef.Alignment = -1;
  BoolDef.RegisteredTypeDefIndex = -1;
  BoolDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (IntStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)IntStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_648,UserFacing);
  if (!bVar5) {
    local_408 = &local_648;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_408);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_4b8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_4b8,(UObject *)0x0,None);
  }
  iVar10 = local_4b8.Data.ArrayNum + -1;
  FVar11.Data = local_4b8.Data.AllocatorInstance.Data;
  if (local_4b8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4b8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = Vec2Struct;
  IntDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  local_640 = Vec2Struct;
  IntDef.UnderlyingType = 2;
  IntDef.Flags = '\0';
  IntDef.Size = -1;
  IntDef.Alignment = -1;
  IntDef.RegisteredTypeDefIndex = -1;
  IntDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec2Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec2Struct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_640,UserFacing);
  if (!bVar5) {
    local_400 = &local_640;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_400);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_4a8,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_4a8,(UObject *)0x0,None);
  }
  iVar10 = local_4a8.Data.ArrayNum + -1;
  FVar11.Data = local_4a8.Data.AllocatorInstance.Data;
  if (local_4a8.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_4a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_4a8.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = Vec3Struct;
  Vec2Def.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_638 = Vec3Struct;
  Vec2Def.UnderlyingType = 2;
  Vec2Def.Flags = '\0';
  Vec2Def.Size = -1;
  Vec2Def.Alignment = -1;
  Vec2Def.RegisteredTypeDefIndex = -1;
  Vec2Def.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec3Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec3Struct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_638,UserFacing);
  if (!bVar5) {
    local_3a8 = &local_638;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3a8);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_498,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_498,(UObject *)0x0,None);
  }
  iVar10 = local_498.Data.ArrayNum + -1;
  FVar11.Data = local_498.Data.AllocatorInstance.Data;
  if (local_498.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_498.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_498.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = Vec4Struct;
  Vec3Def.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  local_630 = Vec4Struct;
  Vec3Def.UnderlyingType = 2;
  Vec3Def.Flags = '\0';
  Vec3Def.Size = -1;
  Vec3Def.Alignment = -1;
  Vec3Def.RegisteredTypeDefIndex = -1;
  Vec3Def.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec4Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec4Struct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_630,UserFacing);
  if (!bVar5) {
    local_3f8 = &local_630;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3f8);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_508,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_508,(UObject *)0x0,None);
  }
  iVar10 = local_508.Data.ArrayNum + -1;
  FVar11.Data = local_508.Data.AllocatorInstance.Data;
  if (local_508.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_508.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_508.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = ColorStruct;
  Vec4Def.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_628 = ColorStruct;
  Vec4Def.UnderlyingType = 2;
  Vec4Def.Flags = '\0';
  Vec4Def.Size = -1;
  Vec4Def.Alignment = -1;
  Vec4Def.RegisteredTypeDefIndex = -1;
  Vec4Def.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (ColorStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)ColorStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_628,UserFacing);
  if (!bVar5) {
    local_3f0 = &local_628;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3f0);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_488,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_488,(UObject *)0x0,None);
  }
  iVar10 = local_488.Data.ArrayNum + -1;
  FVar11.Data = local_488.Data.AllocatorInstance.Data;
  if (local_488.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_488.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_488.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  pUVar4 = PositionStruct;
  ColorDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar3;
  local_620 = PositionStruct;
  ColorDef.UnderlyingType = 2;
  ColorDef.Flags = '\0';
  ColorDef.Size = -1;
  ColorDef.Alignment = -1;
  ColorDef.RegisteredTypeDefIndex = -1;
  ColorDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (PositionStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)PositionStruct);
  }
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_620,UserFacing);
  if (!bVar5) {
    local_3e8 = &local_620;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3e8);
  }
  if ((pUVar4 == (UScriptStruct *)0x0) || (pUVar4->_padding_ == 0)) {
    ::FString::FString(&local_478,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar4,&local_478,(UObject *)0x0,None);
  }
  iVar10 = local_478.Data.ArrayNum + -1;
  FVar11.Data = local_478.Data.AllocatorInstance.Data;
  if (local_478.Data.ArrayNum == 0) {
    iVar10 = iVar13;
    FVar11.Data = (FScriptContainerElement *)L"";
  }
  uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar10,(wchar_t *)FVar11.Data);
  if (local_478.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_478.Data.AllocatorInstance.Data);
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  pUVar3 = QuatStruct;
  PositionDef.ClassStructOrEnum.field0_0x0 = (TObjectPtr<UObject>_u_0)pUVar4;
  local_618 = QuatStruct;
  local_540.DebugPtr = (UObject *)QuatStruct;
  PositionDef.UnderlyingType = 2;
  PositionDef.Flags = '\0';
  PositionDef.Size = -1;
  PositionDef.Alignment = -1;
  PositionDef.RegisteredTypeDefIndex = -1;
  PositionDef.UnderlyingTypePathNameHash = uVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (QuatStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)QuatStruct);
  }
  local_538 = 2;
  local_536 = 0;
  local_534 = 0xffffffffffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_618,UserFacing);
  if (!bVar5) {
    local_3e0 = &local_618;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3e0);
  }
  if ((pUVar3 == (UScriptStruct *)0x0) || (pUVar3->_padding_ == 0)) {
    ::FString::FString(&local_468,L"None");
  }
  else {
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)pUVar3,&local_468,(UObject *)0x0,None);
  }
  FVar11.Data = (FScriptContainerElement *)L"";
  if (local_468.Data.ArrayNum != 0) {
    iVar14 = local_468.Data.ArrayNum + -1;
    FVar11.Data = local_468.Data.AllocatorInstance.Data;
  }
  local_52c = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,(wchar_t *)FVar11.Data);
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  operator=(&QuatDef,(FNiagaraTypeDefinition *)&local_540.ObjectPtr);
  local_610 = Matrix4Struct;
  local_740.DebugPtr = (UObject *)Matrix4Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Matrix4Struct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)Matrix4Struct);
  }
  local_738 = 2;
  local_736 = 0;
  local_734 = 0xffffffffffffffff;
  local_72c = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_610,UserFacing);
  if (!bVar5) {
    local_2e8[0] = &local_610;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(local_2e8);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_740.ObjectPtr);
  operator=(&Matrix4Def,(FNiagaraTypeDefinition *)&local_740.ObjectPtr);
  local_608 = WildcardStruct;
  local_758.DebugPtr = (UObject *)WildcardStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (WildcardStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)WildcardStruct);
  }
  local_750 = 2;
  local_74e = 0;
  local_74c = 0xffffffffffffffff;
  local_744 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_608,UserFacing);
  if (!bVar5) {
    local_2f0 = &local_608;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_2f0);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_758.ObjectPtr);
  operator=(&WildcardDef,(FNiagaraTypeDefinition *)&local_758.ObjectPtr);
  local_600 = HalfStruct;
  local_558.DebugPtr = (UObject *)HalfStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (HalfStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)HalfStruct);
  }
  local_550 = 2;
  local_54e = 0;
  local_54c = 0xffffffffffffffff;
  local_544 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_600,UserFacing);
  if (!bVar5) {
    local_2f8 = &local_600;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_2f8);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_558.ObjectPtr);
  operator=(&HalfDef,(FNiagaraTypeDefinition *)&local_558.ObjectPtr);
  local_5f8 = HalfVec2Struct;
  local_570.DebugPtr = (UObject *)HalfVec2Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (HalfVec2Struct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)HalfVec2Struct);
  }
  local_568 = 2;
  local_566 = 0;
  local_564 = 0xffffffffffffffff;
  local_55c = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5f8,UserFacing);
  if (!bVar5) {
    local_300 = &local_5f8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_300);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_570.ObjectPtr);
  operator=(&HalfVec2Def,(FNiagaraTypeDefinition *)&local_570.ObjectPtr);
  local_5f0 = HalfVec3Struct;
  local_588.DebugPtr = (UObject *)HalfVec3Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (HalfVec3Struct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)HalfVec3Struct);
  }
  local_580 = 2;
  local_57e = 0;
  local_57c = 0xffffffffffffffff;
  local_574 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5f0,UserFacing);
  if (!bVar5) {
    local_308 = &local_5f0;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_308);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_588.ObjectPtr);
  operator=(&HalfVec3Def,(FNiagaraTypeDefinition *)&local_588.ObjectPtr);
  local_5e8 = HalfVec4Struct;
  local_5c8.DebugPtr = (UObject *)HalfVec4Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (HalfVec4Struct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)HalfVec4Struct);
  }
  local_5c0 = 2;
  local_5be = 0;
  local_5bc = 0xffffffffffffffff;
  local_5b4 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5e8,UserFacing);
  if (!bVar5) {
    local_310 = &local_5e8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_310);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_5c8.ObjectPtr);
  operator=(&HalfVec4Def,(FNiagaraTypeDefinition *)&local_5c8.ObjectPtr);
  local_690.DebugPtr = (UObject *)UObjectClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (UObjectClass != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)UObjectClass);
  }
  local_686 = 0;
  local_688 = 1;
  local_684 = 0xffffffffffffffff;
  local_67c = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_690.ObjectPtr);
  operator=(&UObjectDef,(FNiagaraTypeDefinition *)&local_690.ObjectPtr);
  local_6a8.DebugPtr = (UObject *)UMaterialClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (UMaterialClass != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)UMaterialClass);
  }
  local_6a0 = 1;
  local_69e = 0;
  local_69c = 0xffffffffffffffff;
  local_694 = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_6a8.ObjectPtr);
  operator=(&UMaterialDef,(FNiagaraTypeDefinition *)&local_6a8.ObjectPtr);
  local_6c0.DebugPtr = (UObject *)UTextureClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (UTextureClass != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)UTextureClass);
  }
  local_6b8 = 1;
  local_6b6 = 0;
  local_6b4 = 0xffffffffffffffff;
  local_6ac = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_6c0.ObjectPtr);
  operator=(&UTextureDef,(FNiagaraTypeDefinition *)&local_6c0.ObjectPtr);
  local_6d8.DebugPtr = (UObject *)UTextureRenderTargetClass;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (UTextureRenderTargetClass != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)UTextureRenderTargetClass);
  }
  local_6d0 = 1;
  local_6ce = 0;
  local_6cc = 0xffffffffffffffff;
  local_6c4 = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_6d8.ObjectPtr);
  operator=(&UTextureRenderTargetDef,(FNiagaraTypeDefinition *)&local_6d8.ObjectPtr);
  local_6f0.DebugPtr = (UObject *)Z_Construct_UClass_UStaticMesh_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_6f0.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_6f0.DebugPtr);
  }
  local_6e8 = 1;
  local_6e6 = 0;
  local_6e4 = 0xffffffffffffffff;
  local_6dc = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_6f0.ObjectPtr);
  operator=(&UStaticMeshDef,(FNiagaraTypeDefinition *)&local_6f0.ObjectPtr);
  local_708.DebugPtr = (UObject *)Z_Construct_UClass_UNiagaraSimCache_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_708.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_708.DebugPtr);
  }
  local_700 = 1;
  local_6fe = 0;
  local_6fc = 0xffffffffffffffff;
  local_6f4 = 0xffffffff;
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_708.ObjectPtr);
  operator=(&USimCacheClassDef,(FNiagaraTypeDefinition *)&local_708.ObjectPtr);
  if (Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar8 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCollisionEventPayload,(UObject *)pUVar8,
                         L"NiagaraCollisionEventPayload");
  }
  local_720 = (TObjectPtr<UObject>_u_0)
              Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton;
  local_5e0 = Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton !=
      (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable
              ((UObject *)
               Z_Registration_Info_UScriptStruct_FNiagaraCollisionEventPayload.OuterSingleton);
  }
  local_718 = 2;
  local_716 = 0;
  local_714 = 0xffffffffffffffff;
  local_70c = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5e0,UserFacing);
  if (!bVar5) {
    local_318 = &local_5e0;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_318);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_720.ObjectPtr);
  operator=(&CollisionEventDef,(FNiagaraTypeDefinition *)&local_720.ObjectPtr);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,&local_res8,(bool *)&NumericStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,&local_res10,(bool *)&FloatStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,&local_res18,(bool *)&IntStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,&local_res20,(bool *)&Vec2Struct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,&local_440,(bool *)&Vec3Struct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>
            (&NumericStructs,(UScriptStruct **)(local_3c8 + 4),(bool *)&Vec4Struct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,(UScriptStruct **)local_3c0,(bool *)&ColorStruct)
  ;
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>
            (&NumericStructs,(UScriptStruct **)(local_3c0 + 4),(bool *)&PositionStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&NumericStructs,(UScriptStruct **)local_3b8,(bool *)&QuatStruct);
  local_320 = FloatStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)(local_3b8 + 4),(bool *)&local_320);
  local_328 = Vec2Struct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)local_3b0,(bool *)&local_328);
  local_330 = Vec3Struct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)(local_3b0 + 4),(bool *)&local_330);
  local_338 = Vec4Struct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)local_3a0,(bool *)&local_338);
  local_340 = ColorStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)local_3c8,(bool *)&local_340);
  local_388 = PositionStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,(UStruct **)(local_3a0 + 4),(bool *)&local_388);
  local_348 = QuatStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&FloatStructs,&local_398,(bool *)&local_348);
  local_350 = IntStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&IntStructs,(UStruct **)local_458,(bool *)&local_350);
  local_358 = BoolStruct;
  TSet<UStruct_*,DefaultKeyFuncs<UStruct_*,0>,FDefaultSetAllocator>::Emplace<UStruct_*>
            (&BoolStructs,(UStruct **)(local_458 + 4),(bool *)&local_358);
  local_5d8 = IntStruct;
  local_7e8.DebugPtr = (UObject *)IntStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (IntStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)IntStruct);
  }
  local_7e0 = 2;
  local_7de = (FScriptContainerElement)0x0;
  local_7dc = 0xffffffffffffffff;
  local_7d4 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5d8,UserFacing);
  if (!bVar5) {
    local_360 = &local_5d8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_360);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_7e8.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_7e8) &&
      (&local_7e8 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)
           (OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)OrderedNumericTypes.ArrayNum * 0x18);
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  pTVar1->DebugPtr = (UObject *)local_7e8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_7e8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_7e8.DebugPtr);
  }
  *(undefined2 *)(pTVar1 + 1) = local_7e0;
  *(FScriptContainerElement *)((longlong)pTVar1 + 10) = local_7de;
  *(undefined2 *)((longlong)pTVar1 + 0xc) = (undefined2)local_7dc;
  *(undefined2 *)((longlong)pTVar1 + 0xe) = local_7dc._2_2_;
  *(undefined4 *)(pTVar1 + 2) = local_7dc._4_4_;
  *(undefined4 *)((longlong)pTVar1 + 0x14) = local_7d4;
  local_5d0 = FloatStruct;
  local_7d0.DebugPtr = (UObject *)FloatStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (FloatStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)FloatStruct);
  }
  local_7c8 = 2;
  local_7c6 = (FScriptContainerElement)0x0;
  local_7c4 = 0xffffffffffffffff;
  local_7bc = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5d0,UserFacing);
  if (!bVar5) {
    local_368 = &local_5d0;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_368);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_7d0.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_7d0) &&
      (&local_7d0 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)
           (OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)OrderedNumericTypes.ArrayNum * 0x18);
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  pTVar1->DebugPtr = (UObject *)local_7d0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_7d0.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_7d0.DebugPtr);
  }
  *(undefined2 *)(pTVar1 + 1) = local_7c8;
  *(FScriptContainerElement *)((longlong)pTVar1 + 10) = local_7c6;
  *(undefined2 *)((longlong)pTVar1 + 0xc) = (undefined2)local_7c4;
  *(undefined2 *)((longlong)pTVar1 + 0xe) = local_7c4._2_2_;
  *(undefined4 *)(pTVar1 + 2) = local_7c4._4_4_;
  *(undefined4 *)((longlong)pTVar1 + 0x14) = local_7bc;
  local_668 = Vec2Struct;
  local_800.DebugPtr = (UObject *)Vec2Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec2Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec2Struct);
  }
  local_7f8 = 2;
  local_7f6 = (FScriptContainerElement)0x0;
  local_7f4 = 0xffffffffffffffff;
  local_7ec = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_668,UserFacing);
  if (!bVar5) {
    local_370 = &local_668;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_370);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_800.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_800) &&
      (&local_800 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)
           (OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)OrderedNumericTypes.ArrayNum * 0x18);
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  pTVar1->DebugPtr = (UObject *)local_800;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_800.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_800.DebugPtr);
  }
  *(undefined2 *)(pTVar1 + 1) = local_7f8;
  *(FScriptContainerElement *)((longlong)pTVar1 + 10) = local_7f6;
  *(undefined2 *)((longlong)pTVar1 + 0xc) = (undefined2)local_7f4;
  *(undefined2 *)((longlong)pTVar1 + 0xe) = local_7f4._2_2_;
  *(undefined4 *)(pTVar1 + 2) = local_7f4._4_4_;
  *(undefined4 *)((longlong)pTVar1 + 0x14) = local_7ec;
  local_5b0 = Vec3Struct;
  local_7b8.DebugPtr = (UObject *)Vec3Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec3Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec3Struct);
  }
  local_7b0 = 2;
  local_7ae = (FScriptContainerElement)0x0;
  local_7ac = 0xffffffffffffffff;
  local_7a4 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5b0,UserFacing);
  if (!bVar5) {
    local_380 = &local_5b0;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_380);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_7b8.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_7b8) &&
      (&local_7b8 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)
           (OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)OrderedNumericTypes.ArrayNum * 0x18);
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  pTVar1->DebugPtr = (UObject *)local_7b8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_7b8.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_7b8.DebugPtr);
  }
  *(undefined2 *)(pTVar1 + 1) = local_7b0;
  *(FScriptContainerElement *)((longlong)pTVar1 + 10) = local_7ae;
  *(undefined2 *)((longlong)pTVar1 + 0xc) = (undefined2)local_7ac;
  *(undefined2 *)((longlong)pTVar1 + 0xe) = local_7ac._2_2_;
  *(undefined4 *)(pTVar1 + 2) = local_7ac._4_4_;
  *(undefined4 *)((longlong)pTVar1 + 0x14) = local_7a4;
  local_5a8 = Vec4Struct;
  local_818.DebugPtr = (UObject *)Vec4Struct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (Vec4Struct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)Vec4Struct);
  }
  local_810 = 2;
  local_80e = (FScriptContainerElement)0x0;
  local_80c = 0xffffffffffffffff;
  local_804 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5a8,UserFacing);
  if (!bVar5) {
    local_390 = &local_5a8;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_390);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_818.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_818) &&
      (&local_818 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  pTVar1 = (TObjectPtr<UObject>_u_0 *)
           (OrderedNumericTypes.AllocatorInstance.Data +
           (longlong)OrderedNumericTypes.ArrayNum * 0x18);
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  pTVar1->DebugPtr = (UObject *)local_818;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UScriptStruct *)local_818.DebugPtr != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable(local_818.DebugPtr);
  }
  *(undefined2 *)(pTVar1 + 1) = local_810;
  *(FScriptContainerElement *)((longlong)pTVar1 + 10) = local_80e;
  *(undefined2 *)((longlong)pTVar1 + 0xc) = (undefined2)local_80c;
  *(undefined2 *)((longlong)pTVar1 + 0xe) = local_80c._2_2_;
  *(undefined4 *)(pTVar1 + 2) = local_80c._4_4_;
  *(undefined4 *)((longlong)pTVar1 + 0x14) = local_804;
  local_5a0 = ColorStruct;
  local_770.DebugPtr = (UObject *)ColorStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (ColorStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)ColorStruct);
  }
  local_768 = 2;
  local_766 = 0;
  local_764 = 0xffffffffffffffff;
  local_75c = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_5a0,UserFacing);
  if (!bVar5) {
    local_378 = &local_5a0;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_378);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_770.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_770) &&
      (&local_770 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  lVar9 = (longlong)OrderedNumericTypes.ArrayNum;
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  FNiagaraTypeDefinition
            ((FNiagaraTypeDefinition *)(OrderedNumericTypes.AllocatorInstance.Data + lVar9 * 0x18),
             (FNiagaraTypeDefinition *)&local_770.ObjectPtr);
  local_598 = PositionStruct;
  local_788.DebugPtr = (UObject *)PositionStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (PositionStruct != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)PositionStruct);
  }
  local_780 = 2;
  local_77e = 0;
  local_77c = 0xffffffffffffffff;
  local_774 = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_598,UserFacing);
  if (!bVar5) {
    local_3d8 = &local_598;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3d8);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_788.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_788) &&
      (&local_788 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  lVar9 = (longlong)OrderedNumericTypes.ArrayNum;
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  FNiagaraTypeDefinition
            ((FNiagaraTypeDefinition *)(OrderedNumericTypes.AllocatorInstance.Data + lVar9 * 0x18),
             (FNiagaraTypeDefinition *)&local_788.ObjectPtr);
  local_590 = QuatStruct;
  local_7a0.DebugPtr = (UObject *)QuatStruct;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (QuatStruct != (UScriptStruct *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)QuatStruct);
  }
  local_798 = 2;
  local_796 = 0;
  local_794 = 0xffffffffffffffff;
  local_78c = 0xffffffff;
  bVar5 = FNiagaraTypeHelper::IsNiagaraFriendlyTopLevelStruct(local_590,UserFacing);
  if (!bVar5) {
    local_3d0 = &local_590;
    `FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(&local_3d0);
  }
  GeneratePathNameHash((FNiagaraTypeDefinition *)&local_7a0.ObjectPtr);
  if (((OrderedNumericTypes.AllocatorInstance.Data <= &local_7a0) &&
      (&local_7a0 <
       (TObjectPtr<UObject>_u_0 *)
       (OrderedNumericTypes.AllocatorInstance.Data + (longlong)OrderedNumericTypes.ArrayMax * 0x18))
      ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (OrderedNumericTypes.ArrayNum == OrderedNumericTypes.ArrayMax) {
    OrderedNumericTypes.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&OrderedNumericTypes.AllocatorInstance,&OrderedNumericTypes.ArrayMax);
  }
  lVar9 = (longlong)OrderedNumericTypes.ArrayNum;
  OrderedNumericTypes.ArrayNum = OrderedNumericTypes.ArrayNum + 1;
  FNiagaraTypeDefinition
            ((FNiagaraTypeDefinition *)(OrderedNumericTypes.AllocatorInstance.Data + lVar9 * 0x18),
             (FNiagaraTypeDefinition *)&local_7a0.ObjectPtr);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&ScalarStructs,(UScriptStruct **)local_450,(bool *)&BoolStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>
            (&ScalarStructs,(UScriptStruct **)(local_450 + 4),(bool *)&IntStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>(&ScalarStructs,(UScriptStruct **)local_448,(bool *)&FloatStruct);
  TSet<UScriptStruct_*,DefaultKeyFuncs<UScriptStruct_*,0>,FDefaultSetAllocator>::
  Emplace<UScriptStruct_*_const_&>
            (&ScalarStructs,(UScriptStruct **)(local_448 + 4),(bool *)&HalfStruct);
  CoordinateSpaceEnum = StaticEnum<enum_ENiagaraCoordinateSpace>();
  OrientationAxisEnum = StaticEnum<enum_ENiagaraOrientationAxis>();
  ExecutionStateEnum = StaticEnum<enum_ENiagaraExecutionState>();
  ExecutionStateSourceEnum = StaticEnum<enum_ENiagaraExecutionStateSource>();
  SimulationTargetEnum = StaticEnum<enum_ENiagaraSimTarget>();
  ScriptUsageEnum = StaticEnum<enum_ENiagaraCompileUsageStaticSwitch>();
  ScriptContextEnum = StaticEnum<enum_ENiagaraScriptContextStaticSwitch>();
  FunctionDebugStateEnum = StaticEnum<enum_ENiagaraFunctionDebugState>();
  return;
}

// InvalidateCachedIndex @ 1492f8600

void __thiscall
FNiagaraTypeDefinition::InvalidateCachedIndex(FNiagaraTypeDefinition *this,bool param_1)

{
  if (param_1) {
    this->RegisteredTypeDefIndex = -1;
    return;
  }
  this->RegisteredTypeDefIndex = this->RegisteredTypeDefIndex;
  return;
}

// IsDataInterface @ 1492f8620

bool __thiscall FNiagaraTypeDefinition::IsDataInterface(FNiagaraTypeDefinition *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = IntStruct;
  if (this->UnderlyingType != 3) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar2) {
        pUVar4 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_1492f865a;
      }
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
LAB_1492f865a:
  if ((pUVar4 != (UScriptStruct *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UNiagaraDataInterface_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar4->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// IsLossyConversion @ 1492f8800

bool __cdecl
FNiagaraTypeDefinition::IsLossyConversion
          (FNiagaraTypeDefinition *param_1,FNiagaraTypeDefinition *param_2)

{
  ushort *puVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  
  TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
  if (((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != IntDef.ClassStructOrEnum.field0_0x0) ||
       (param_1->UnderlyingType != IntDef.UnderlyingType)) ||
      ((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
       FloatDef.ClassStructOrEnum.field0_0x0)) ||
     (param_2->UnderlyingType != FloatDef.UnderlyingType)) {
    TVar3.ObjectPtr.field0_0x0 = (FObjectPtr)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr;
    puVar1 = &param_2->UnderlyingType;
    if ((((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr != IntDef.ClassStructOrEnum.field0_0x0) ||
          (*puVar1 != IntDef.UnderlyingType)) ||
         (((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != FloatDef.ClassStructOrEnum.field0_0x0 ||
          (param_1->UnderlyingType != FloatDef.UnderlyingType)))) &&
        (((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != BoolDef.ClassStructOrEnum.field0_0x0 ||
           (param_1->UnderlyingType != BoolDef.UnderlyingType)) ||
          (((TObjectPtr<UObject>_u_0)TVar3.DebugPtr != FloatDef.ClassStructOrEnum.field0_0x0 ||
           (*puVar1 != FloatDef.UnderlyingType)))) &&
         (((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr != BoolDef.ClassStructOrEnum.field0_0x0 ||
            (*puVar1 != BoolDef.UnderlyingType)) ||
           ((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != FloatDef.ClassStructOrEnum.field0_0x0)) ||
          (param_1->UnderlyingType != FloatDef.UnderlyingType)))))) &&
       (((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != PositionDef.ClassStructOrEnum.field0_0x0 ||
          (param_1->UnderlyingType != PositionDef.UnderlyingType)) ||
         ((param_1->Flags != PositionDef.Flags ||
          (((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
            Vec3Def.ClassStructOrEnum.field0_0x0 ||
           (param_2->UnderlyingType != Vec3Def.UnderlyingType)))))) ||
        (param_2->Flags != Vec3Def.Flags)))) {
      if ((((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != Vec3Def.ClassStructOrEnum.field0_0x0) ||
            (param_1->UnderlyingType != Vec3Def.UnderlyingType)) ||
           (param_1->Flags != Vec3Def.Flags)) ||
          (((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
            PositionDef.ClassStructOrEnum.field0_0x0 ||
           (param_2->UnderlyingType != PositionDef.UnderlyingType)))) ||
         (param_2->Flags != PositionDef.Flags)) {
        return false;
      }
    }
  }
  return true;
}

// IsScalarDefinition @ 1492f8a40

bool __cdecl FNiagaraTypeDefinition::IsScalarDefinition(FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  UEnum *pUVar3;
  ForElementType<FSetElementId> FVar4;
  uint uVar5;
  
  pUVar2 = GetScriptStruct(param_1);
  uVar5 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (ScalarStructs.Elements._8_4_ != ScalarStructs.Elements._52_4_) {
    FVar4 = (ForElementType<FSetElementId>)0x154c809a8;
    if (ScalarStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar4 = ScalarStructs.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar4 +
                         (ulonglong)(ScalarStructs.HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        iVar1 != -1; iVar1 = *(int *)(ScalarStructs.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(UScriptStruct **)(ScalarStructs.Elements._0_8_ + (longlong)iVar1 * 0x10) == pUVar2) {
        return true;
      }
    }
  }
  pUVar2 = GetScriptStruct(param_1);
  if ((pUVar2 == IntStruct) && (pUVar3 = GetEnum(param_1), pUVar3 != (UEnum *)0x0)) {
    return true;
  }
  return false;
}

// IsValidNumericInput @ 1492f8dd0

bool __cdecl FNiagaraTypeDefinition::IsValidNumericInput(FNiagaraTypeDefinition *param_1)

{
  int iVar1;
  UScriptStruct *pUVar2;
  uint uVar3;
  ForElementType<FSetElementId> FVar4;
  
  pUVar2 = GetScriptStruct(param_1);
  uVar3 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
          -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  if (NumericStructs.Elements._8_4_ != NumericStructs.Elements._52_4_) {
    FVar4 = (ForElementType<FSetElementId>)0x154c80958;
    if (NumericStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FVar4 = NumericStructs.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar4 +
                         (ulonglong)(NumericStructs.HashSize - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        iVar1 != -1; iVar1 = *(int *)(NumericStructs.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
      if (*(UScriptStruct **)(NumericStructs.Elements._0_8_ + (longlong)iVar1 * 0x10) == pUVar2) {
        return true;
      }
    }
  }
  return false;
}

// RemoveStaticDef @ 149303aa0

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::RemoveStaticDef
          (FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  byte bVar3;
  
  pUVar2 = (this->ClassStructOrEnum).field0_0x0.DebugPtr;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  __return_storage_ptr__->UnderlyingType = this->UnderlyingType;
  bVar3 = this->Flags;
  __return_storage_ptr__->Flags = bVar3;
  bVar3 = bVar3 & 0xfe;
  __return_storage_ptr__->Size = this->Size;
  __return_storage_ptr__->Alignment = this->Alignment;
  iVar1 = this->RegisteredTypeDefIndex;
  __return_storage_ptr__->RegisteredTypeDefIndex = iVar1;
  __return_storage_ptr__->UnderlyingTypePathNameHash = this->UnderlyingTypePathNameHash;
  __return_storage_ptr__->Flags = bVar3;
  if (bVar3 != this->Flags) {
    iVar1 = -1;
  }
  __return_storage_ptr__->RegisteredTypeDefIndex = iVar1;
  return __return_storage_ptr__;
}

// Serialize @ 149305060

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FNiagaraTypeDefinition::Serialize(FNiagaraTypeDefinition *this,FArchive *param_1)

{
  UObject *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  UScriptStruct *pUVar4;
  UPackage *pUVar5;
  UPackage *pUVar6;
  UScriptStruct *pUVar7;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar8;
  bool bVar9;
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined8 local_1d0;
  FStructuredArchiveFromArchive local_1b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  pUVar7 = (UScriptStruct *)0x0;
  if ((param_1->field_0x28 & 4) == 0) goto LAB_1493051bc;
  pUVar4 = GetScriptStruct(this);
  if (pUVar4 == (UScriptStruct *)0x0) goto LAB_1493051bc;
  pUVar5 = UObjectBaseUtility::GetOutermost((UObjectBaseUtility *)pUVar4);
  pUVar6 = GetTransientPackage();
  if (pUVar5 != pUVar6) goto LAB_1493051bc;
  this->Flags = this->Flags | 2;
  pUVar7 = FNiagaraTypeHelper::GetLWCStruct(pUVar4);
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar7 == (UScriptStruct *)0x0)) {
    (this->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)pUVar7;
    if (pUVar7 == (UScriptStruct *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ClassStructOrEnum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                         ,0x631,L"");
      if (bVar9) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
    }
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
    (this->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)pUVar7;
  }
  pUVar5 = GetTransientPackage();
  pUVar1 = (this->ClassStructOrEnum).field0_0x0.DebugPtr;
  if (pUVar1 == (UObject *)0x0) {
    pUVar6 = (UPackage *)0x0;
  }
  else {
    pUVar6 = UE::CoreUObject::Private::GetPackage(pUVar1);
  }
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
LAB_1493052c9:
    if (pUVar6 != (UPackage *)0x0) goto LAB_14930518c;
LAB_1493052d2:
    bVar9 = pUVar5 == (UPackage *)0x0;
  }
  else {
    if (pUVar6 != (UPackage *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pUVar6);
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) goto LAB_1493052c9;
    if (pUVar6 == (UPackage *)0x0) goto LAB_1493052d2;
    UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_14930518c:
    bVar9 = pUVar6 == pUVar5;
  }
  pUVar7 = pUVar4;
  if (bVar9) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ClassStructOrEnum.GetPackage() != GetTransientPackage()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraModule.cpp"
                       ,0x632,L"");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return (bool)uVar3;
    }
  }
LAB_1493051bc:
  if (((param_1->field_0x28 & 5) != 0) || ((param_1->field_0x2b & 2) != 0)) {
    pUVar4 = StaticStruct();
    pcVar2 = *(code **)(pUVar4->_padding_ + 0x2e0);
    this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1b8,param_1);
    FVar8 = FStructuredArchiveFromArchive::GetSlot(this_00);
    local_1d0 = 0;
    local_1d8 = 0;
    (*pcVar2)(pUVar4,*(undefined8 *)FVar8,this,pUVar4);
    FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1b8);
  }
  if ((param_1->field_0x28 & 1) != 0) {
    this->RegisteredTypeDefIndex = -1;
    if (this->UnderlyingType != 3) {
      pUVar4 = GetScriptStruct(this);
      if ((pUVar4 != (UScriptStruct *)0x0) && ((this->Flags & 2) != 0)) {
        pUVar4 = FNiagaraTypeHelper::GetSWCStruct(pUVar4);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UScriptStruct *)0x0)
           ) {
          UE::GC::MarkAsReachable((UObject *)pUVar4);
        }
        (this->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)pUVar4;
        this->Flags = this->Flags & 0xfd;
      }
    }
    GeneratePathNameHash(this);
  }
  if (pUVar7 != (UScriptStruct *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->ClassStructOrEnum).field0_0x0.DebugPtr = (UObject *)pUVar7;
    this->Flags = this->Flags & 0xfd;
  }
  return true;
}

// ToStaticDef @ 14930ae60

FNiagaraTypeDefinition * __thiscall
FNiagaraTypeDefinition::ToStaticDef
          (FNiagaraTypeDefinition *this,FNiagaraTypeDefinition *__return_storage_ptr__)

{
  int iVar1;
  UObject *pUVar2;
  byte bVar3;
  
  pUVar2 = (this->ClassStructOrEnum).field0_0x0.DebugPtr;
  (__return_storage_ptr__->ClassStructOrEnum).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar2);
  }
  __return_storage_ptr__->UnderlyingType = this->UnderlyingType;
  bVar3 = this->Flags;
  __return_storage_ptr__->Flags = bVar3;
  bVar3 = bVar3 | 1;
  __return_storage_ptr__->Size = this->Size;
  __return_storage_ptr__->Alignment = this->Alignment;
  iVar1 = this->RegisteredTypeDefIndex;
  __return_storage_ptr__->RegisteredTypeDefIndex = iVar1;
  __return_storage_ptr__->UnderlyingTypePathNameHash = this->UnderlyingTypePathNameHash;
  __return_storage_ptr__->Flags = bVar3;
  if (bVar3 != this->Flags) {
    iVar1 = -1;
  }
  __return_storage_ptr__->RegisteredTypeDefIndex = iVar1;
  return __return_storage_ptr__;
}

// TypesAreAssignable @ 14930b6f0

bool __cdecl
FNiagaraTypeDefinition::TypesAreAssignable
          (FNiagaraTypeDefinition *param_1,FNiagaraTypeDefinition *param_2,bool param_3)

{
  int iVar1;
  TObjectPtr<UObject>_u_0 TVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  byte bVar4;
  bool bVar5;
  UClass *pUVar6;
  UClass *pUVar7;
  UEnum *pUVar8;
  UEnum *pUVar9;
  UStruct *pUVar10;
  UStruct *pUVar11;
  UScriptStruct *pUVar12;
  UScriptStruct *pUVar13;
  uint uVar14;
  ForElementType<FSetElementId> FVar15;
  
  pUVar6 = GetClass(param_1);
  if ((pUVar6 != (UClass *)0x0) && (pUVar7 = GetClass(param_2), pUVar7 != (UClass *)0x0)) {
    return pUVar6 == pUVar7;
  }
  pUVar6 = GetClass(param_2);
  if ((pUVar6 == (UClass *)0x0) && (pUVar6 = GetClass(param_1), pUVar6 == (UClass *)0x0)) {
    if (param_1->UnderlyingType == 3) {
      pUVar8 = GetEnum(param_1);
      pUVar9 = GetEnum(param_2);
      if (pUVar8 != pUVar9) goto LAB_14930bc88;
    }
    if (param_2->UnderlyingType == 3) {
      pUVar8 = GetEnum(param_1);
      pUVar9 = GetEnum(param_2);
      if ((pUVar8 != pUVar9) &&
         ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr !=
            IntDef.ClassStructOrEnum.field0_0x0 ||
           (param_1->UnderlyingType != IntDef.UnderlyingType)) || (param_1->Flags != IntDef.Flags)))
         ) goto LAB_14930bc88;
    }
    bVar4 = param_2->Flags & 1;
    if ((param_1->Flags & 1) == 0) {
      if (bVar4 == 0) goto LAB_14930b812;
LAB_14930b7de:
      pUVar10 = GetStruct(param_1);
      pUVar11 = GetStruct(param_2);
      if (pUVar10 != pUVar11) goto LAB_14930b812;
      pUVar8 = GetEnum(param_1);
      pUVar9 = GetEnum(param_2);
      if (pUVar8 != pUVar9) goto LAB_14930b812;
    }
    else {
      if (bVar4 != 0) goto LAB_14930b7de;
LAB_14930b812:
      if (((param_1->Flags & 1) != 0) || ((param_2->Flags & 1) != 0)) {
        pUVar10 = GetStruct(param_1);
        pUVar11 = GetStruct(param_2);
        if (pUVar10 == pUVar11) {
          pUVar8 = GetEnum(param_1);
          pUVar9 = GetEnum(param_2);
          if (pUVar8 == pUVar9) goto LAB_14930bc88;
        }
      }
      pUVar10 = GetStruct(param_1);
      pUVar11 = GetStruct(param_2);
      if (pUVar10 != pUVar11) {
        bVar5 = IsScalarDefinition(param_1);
        if ((bVar5) && (bVar5 = IsScalarDefinition(param_2), bVar5)) {
          TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
          if (((((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != IntDef.ClassStructOrEnum.field0_0x0)
                 || (param_1->UnderlyingType != IntDef.UnderlyingType)) ||
                (param_1->Flags != IntDef.Flags)) ||
               ((((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
                  FloatDef.ClassStructOrEnum.field0_0x0 ||
                 (param_2->UnderlyingType != FloatDef.UnderlyingType)) ||
                (param_2->Flags != FloatDef.Flags)))) &&
              (((TVar3.ObjectPtr.field0_0x0 =
                      (FObjectPtr)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr,
                (TObjectPtr<UObject>_u_0)TVar3.DebugPtr != IntDef.ClassStructOrEnum.field0_0x0 ||
                (param_2->UnderlyingType != IntDef.UnderlyingType)) ||
               ((param_2->Flags != IntDef.Flags ||
                ((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != FloatDef.ClassStructOrEnum.field0_0x0
                  || (param_1->UnderlyingType != FloatDef.UnderlyingType)) ||
                 (param_1->Flags != FloatDef.Flags)))))))) &&
             ((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != IntDef.ClassStructOrEnum.field0_0x0 ||
               (param_1->UnderlyingType != IntDef.UnderlyingType)) ||
              ((param_1->Flags != IntDef.Flags ||
               ((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr != BoolDef.ClassStructOrEnum.field0_0x0 ||
                 (param_2->UnderlyingType != BoolDef.UnderlyingType)) ||
                (param_2->Flags != BoolDef.Flags)))))))) {
            if (((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr == IntDef.ClassStructOrEnum.field0_0x0)
                 && (param_2->UnderlyingType == IntDef.UnderlyingType)) &&
                (param_2->Flags == IntDef.Flags)) &&
               (((TObjectPtr<UObject>_u_0)TVar2.DebugPtr == BoolDef.ClassStructOrEnum.field0_0x0 &&
                (param_1->UnderlyingType == BoolDef.UnderlyingType)))) {
              bVar5 = param_1->Flags == BoolDef.Flags;
LAB_14930ba71:
              if (bVar5) goto LAB_14930bc84;
            }
LAB_14930ba77:
            if ((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
                  NumericDef.ClassStructOrEnum.field0_0x0) &&
                (param_1->UnderlyingType == NumericDef.UnderlyingType)) &&
               (param_1->Flags == NumericDef.Flags)) {
              pUVar12 = GetScriptStruct(param_2);
              uVar14 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar12 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              if (NumericStructs.Elements._8_4_ != NumericStructs.Elements._52_4_) {
                FVar15 = (ForElementType<FSetElementId>)0x154c80958;
                if (NumericStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = NumericStructs.Hash.SecondaryData;
                }
                for (iVar1 = *(int *)((longlong)FVar15 +
                                     (ulonglong)
                                     (NumericStructs.HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4)
                    ; iVar1 != -1;
                    iVar1 = *(int *)(NumericStructs.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
                  if (*(UScriptStruct **)(NumericStructs.Elements._0_8_ + (longlong)iVar1 * 0x10) ==
                      pUVar12) goto LAB_14930bc84;
                }
              }
            }
            if ((((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr ==
                  NumericDef.ClassStructOrEnum.field0_0x0) &&
                (param_2->UnderlyingType == NumericDef.UnderlyingType)) &&
               (param_2->Flags == NumericDef.Flags)) {
              pUVar12 = GetScriptStruct(param_1);
              uVar14 = ((uint)((ulonglong)pUVar12 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)pUVar12 >> 4)) * -0x7a143595;
              uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
              if (NumericStructs.Elements._8_4_ != NumericStructs.Elements._52_4_) {
                FVar15 = (ForElementType<FSetElementId>)0x154c80958;
                if (NumericStructs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FVar15 = NumericStructs.Hash.SecondaryData;
                }
                for (iVar1 = *(int *)((longlong)FVar15 +
                                     (ulonglong)
                                     (NumericStructs.HashSize - 1U & (uVar14 >> 0x10 ^ uVar14)) * 4)
                    ; iVar1 != -1;
                    iVar1 = *(int *)(NumericStructs.Elements._0_8_ + 8 + (longlong)iVar1 * 0x10)) {
                  if (*(UScriptStruct **)(NumericStructs.Elements._0_8_ + (longlong)iVar1 * 0x10) ==
                      pUVar12) goto LAB_14930bc84;
                }
              }
            }
            pUVar12 = IntStruct;
            if (((((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr !=
                   NumericDef.ClassStructOrEnum.field0_0x0) ||
                 (param_1->UnderlyingType != NumericDef.UnderlyingType)) ||
                ((param_1->Flags != NumericDef.Flags ||
                 ((pUVar13 = (UScriptStruct *)GetStruct(param_2), pUVar13 != pUVar12 ||
                  (pUVar8 = GetEnum(param_2), pUVar8 == (UEnum *)0x0)))))) &&
               ((pUVar12 = IntStruct,
                (TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
                NumericDef.ClassStructOrEnum.field0_0x0 ||
                ((((param_2->UnderlyingType != NumericDef.UnderlyingType ||
                   (param_2->Flags != NumericDef.Flags)) ||
                  (pUVar13 = (UScriptStruct *)GetStruct(param_1), pUVar13 != pUVar12)) ||
                 (pUVar8 = GetEnum(param_1), pUVar8 == (UEnum *)0x0)))))) goto LAB_14930bc88;
          }
        }
        else {
          TVar2.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr;
          if (((((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != ColorDef.ClassStructOrEnum.field0_0x0)
               || (((param_1->UnderlyingType != ColorDef.UnderlyingType ||
                    (param_1->Flags != ColorDef.Flags)) ||
                   ((TObjectPtr<UObject>_u_0)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr !=
                    Vec4Def.ClassStructOrEnum.field0_0x0)))) ||
              ((param_2->UnderlyingType != Vec4Def.UnderlyingType ||
               (param_2->Flags != Vec4Def.Flags)))) &&
             ((TVar3.ObjectPtr.field0_0x0 =
                    (FObjectPtr)(param_2->ClassStructOrEnum).field0_0x0.DebugPtr,
              (TObjectPtr<UObject>_u_0)TVar3.DebugPtr != ColorDef.ClassStructOrEnum.field0_0x0 ||
              (((param_2->UnderlyingType != ColorDef.UnderlyingType ||
                (param_2->Flags != ColorDef.Flags)) ||
               (((TObjectPtr<UObject>_u_0)TVar2.DebugPtr != Vec4Def.ClassStructOrEnum.field0_0x0 ||
                ((param_1->UnderlyingType != Vec4Def.UnderlyingType ||
                 (param_1->Flags != Vec4Def.Flags)))))))))) {
            if (param_3) {
              if ((((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr ==
                      PositionDef.ClassStructOrEnum.field0_0x0) &&
                    (param_2->UnderlyingType == PositionDef.UnderlyingType)) &&
                   (param_2->Flags == PositionDef.Flags)) &&
                  (((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
                    Vec3Def.ClassStructOrEnum.field0_0x0 &&
                   (param_1->UnderlyingType == Vec3Def.UnderlyingType)))) &&
                 (param_1->Flags == Vec3Def.Flags)) goto LAB_14930bc84;
              if ((((TObjectPtr<UObject>_u_0)TVar3.DebugPtr == Vec3Def.ClassStructOrEnum.field0_0x0)
                  && (param_2->UnderlyingType == Vec3Def.UnderlyingType)) &&
                 ((param_2->Flags == Vec3Def.Flags &&
                  (((TObjectPtr<UObject>_u_0)(param_1->ClassStructOrEnum).field0_0x0.DebugPtr ==
                    PositionDef.ClassStructOrEnum.field0_0x0 &&
                   (param_1->UnderlyingType == PositionDef.UnderlyingType)))))) {
                bVar5 = param_1->Flags == PositionDef.Flags;
                goto LAB_14930ba71;
              }
            }
            goto LAB_14930ba77;
          }
        }
      }
    }
LAB_14930bc84:
    bVar5 = true;
  }
  else {
LAB_14930bc88:
    bVar5 = false;
  }
  return bVar5;
}

// IsUObject @ 14935f480

bool __thiscall FNiagaraTypeDefinition::IsUObject(FNiagaraTypeDefinition *this)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  pUVar4 = IntStruct;
  if (this->UnderlyingType != 3) {
    if ((this->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      pUVar3 = Z_Construct_UClass_UStruct_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
      if (bVar2) {
        pUVar4 = (UScriptStruct *)(this->ClassStructOrEnum).field0_0x0.DebugPtr;
        goto LAB_14935f4ba;
      }
    }
    pUVar4 = (UScriptStruct *)0x0;
  }
LAB_14935f4ba:
  if ((pUVar4 != (UScriptStruct *)0x0) &&
     (pUVar3 = Z_Construct_UClass_UObject_NoRegister(), pUVar3 != (UClass *)0x0)) {
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= (int)pUVar4->_padding_) &&
       ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar1 * 8) == &pUVar3->_padding_)
       ) {
      return true;
    }
  }
  return false;
}

// StaticStruct @ 14940dea0

UScriptStruct * __cdecl FNiagaraTypeDefinition::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraTypeDefinition,(UObject *)pUVar1,
                         L"NiagaraTypeDefinition");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraTypeDefinition.OuterSingleton;
}

// operator() @ 15053b570

bool __thiscall
`FNiagaraTypeDefinition::FNiagaraTypeDefinition'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_2309485622517038358>);
  if (bVar2) {
    local_res10[0] = *(FName *)(**(longlong **)this + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2309485622517038358>,
                       &`public:___cdecl_`public:___cdecl_FNiagaraTypeDefinition::FNiagaraTypeDefinition(UScriptStruct*___ptr64,FNiagaraTypeDefinition::EAllowUnfriendlyStruct)___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053b5e8;
    }
  }
  bVar2 = false;
LAB_15053b5e8:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

