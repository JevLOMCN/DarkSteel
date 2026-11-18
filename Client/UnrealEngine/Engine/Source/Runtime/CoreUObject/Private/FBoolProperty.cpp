// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 26

// GetFieldSize @ 141f81bf0

ulong64 __thiscall FBoolProperty::GetFieldSize(FBoolProperty *this)

{
  return 0x78;
}

// GetPropertyValue @ 141f86070

bool __thiscall FBoolProperty::GetPropertyValue(FBoolProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xa4b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->FieldMask & *(byte *)((ulonglong)this->ByteOffset + (longlong)param_1)) != 0;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5d0

bool __thiscall FBoolProperty::HasIntrusiveUnsetOptionalState(FBoolProperty *this)

{
  return false;
}

// SetPropertyValue @ 141faab20

void __thiscall FBoolProperty::SetPropertyValue(FBoolProperty *this,void *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  
  if (this->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xa61,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2) {
    bVar3 = this->ByteMask;
  }
  else {
    bVar3 = 0;
  }
  *(byte *)((ulonglong)this->ByteOffset + (longlong)param_1) =
       ~this->FieldMask & *(byte *)((ulonglong)this->ByteOffset + (longlong)param_1) | bVar3;
  return;
}

// FBoolProperty @ 14215f900

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FBoolProperty * __thiscall
FBoolProperty::FBoolProperty(FBoolProperty *this,FFieldVariant param_1,FBoolPropertyParams *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ushort uVar3;
  _func___cdecl_void_void_ptr *p_Var4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  void *_Dst;
  FBoolProperty *pFVar9;
  void *pvVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  ulonglong local_res10;
  
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) != 0) && ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)
      ) && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res10,
             (FPropertyParamsBaseWithoutOffset *)param_2,CPF_HasGetValueTypeHash);
  pvVar10 = (void *)0x0;
  uVar8 = 0;
  this->FieldSize = '\0';
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  this->_padding_ = (longlong)&___7FBoolProperty__6B_;
  p_Var4 = param_2->SetBitFunc;
  uVar11 = uVar8;
  if (p_Var4 != (_func___cdecl_void_void_ptr *)0x0) {
    uVar3 = param_2->SizeOfOuter;
    pvVar13 = (void *)(ulonglong)uVar3;
    _Dst = operator_new__((ulong64)pvVar13);
    pvVar12 = pvVar10;
    if (_Dst != (void *)0x0) {
      memset(_Dst,0,(ulonglong)uVar3);
      pvVar12 = _Dst;
    }
    (*p_Var4)(pvVar12);
    uVar8 = 0;
    uVar11 = 0;
    if (pvVar13 == (void *)0x0) {
LAB_14215fa15:
      operator_delete__(pvVar12);
      if (uVar11 != 0) goto LAB_14215fa52;
    }
    else {
      do {
        bVar2 = *(byte *)((longlong)pvVar10 + (longlong)pvVar12);
        uVar8 = (uint)pvVar10;
        if (bVar2 != 0) {
          uVar11 = (uint)bVar2;
          uVar1 = (ulonglong)(bVar2 - 1) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          if ((1 << ((byte)lVar5 & 0x1f) != uVar11) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("FMath::RoundUpToPowerOfTwo(BitMask) == BitMask",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                                 ,0x71,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            pFVar9 = (FBoolProperty *)(*pcVar6)();
            return pFVar9;
          }
          goto LAB_14215fa15;
        }
        pvVar10 = (void *)(ulonglong)(uVar8 + 1);
      } while (pvVar10 < pvVar13);
      operator_delete__(pvVar12);
      uVar8 = 0;
      uVar11 = 0;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("BitMask",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x25,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FBoolProperty *)(*pcVar6)();
      return pFVar9;
    }
  }
LAB_14215fa52:
  FProperty::SetOffset_Internal((FProperty *)this,uVar8);
  SetBoolSize(this,(uint)param_2->ElementSize,(bool)(param_2->Flags >> 6 & 1),uVar11);
  return this;
}

// FBoolProperty @ 14215fa90

/* WARNING: Heritage AFTER dead removal. Example location: s0x00000008 : 0x00014215fb33 */
/* WARNING: Removing unreachable block (ram,0x00014215fb3f) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

FBoolProperty * __thiscall
FBoolProperty::FBoolProperty
          (FBoolProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  code *pcVar1;
  bool bVar2;
  FBoolProperty *pFVar3;
  ulonglong local_res10;
  
  local_res10 = *(ulonglong *)param_1.Container;
  if ((((local_res10 & 1) != 0) && ((UObject *)(local_res10 & 0xfffffffffffffffe) != (UObject *)0x0)
      ) && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res10 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res10,param_2,param_3);
  this->FieldSize = '\0';
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  this->_padding_ = (longlong)&___7FBoolProperty__6B_;
  this->_padding_ = this->_padding_ & 0xffffffffbffffdff;
  this->_padding_ = this->_padding_ | 0x1000000000;
  FProperty::SetElementSize((FProperty *)this,1);
  this->FieldSize = *(uchar *)((longlong)&this->_padding_ + 4);
  this->ByteOffset = '\0';
  this->ByteMask = '\x01';
  this->FieldMask = '\x01';
  if (((uint)this->FieldSize != *(uint *)((longlong)&this->_padding_ + 4)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(int32)FieldSize == GetElementSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x5c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoolProperty *)(*pcVar1)();
    return pFVar3;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetElementSize() != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x5d,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoolProperty *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->FieldMask == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x5e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoolProperty *)(*pcVar1)();
    return pFVar3;
  }
  if ((this->ByteMask == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ByteMask != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x5f,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FBoolProperty *)(*pcVar1)();
    return pFVar3;
  }
  return this;
}

// ClearValueInternal @ 142169ec0

void __thiscall FBoolProperty::ClearValueInternal(FBoolProperty *this,void *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->FieldSize == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x1c5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((ulonglong)this->ByteOffset + (longlong)param_1);
  *pbVar1 = *pbVar1 & ~this->FieldMask;
  return;
}

// Construct @ 14216a0e0

FField * __cdecl
FBoolProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FBoolProperty *this;
  FFieldClass *pFVar1;
  FBoolProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  pFVar2 = (FBoolProperty *)0x0;
  if (this != (FBoolProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = (longlong)&___7FBoolProperty__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FBoolProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ConvertFromType @ 14216de40

EConvertFromTypeResult __thiscall
FBoolProperty::ConvertFromType
          (FBoolProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  uint uVar1;
  FName FVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  FProperty *pFVar4;
  FArchiveState *pFVar5;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FName FVar9;
  FName FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  undefined1 local_res10 [8];
  FSlotBase local_res18 [2];
  
  FVar2 = param_1->Type;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar13.Number = 0;
  FVar13.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  if (FVar2 == FVar13) {
    LoadFromType<int>(this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3)
    ;
    return Converted;
  }
  FVar2 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_00,FVar3.Value);
  if (FVar2 == FVar6) {
    LoadFromType<signed_char>
              (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
    return Converted;
  }
  FVar2 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar7.Number = 0;
  FVar7.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_01,FVar3.Value);
  if (FVar2 == FVar7) {
    LoadFromType<short>(this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,
                        param_3);
    return Converted;
  }
  FVar2 = param_1->Type;
  FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
  FVar8.Number = 0;
  FVar8.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_02,FVar3.Value);
  if (FVar2 != FVar8) {
    FVar2 = param_1->Type;
    FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
    FVar9.Number = 0;
    FVar9.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_03,FVar3.Value);
    if (FVar2 == FVar9) {
      uVar1 = (param_1->TypeName).Index;
      if (*(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar1 >> 0xd] + 8 +
                  (ulonglong)(uVar1 & 0x1fff) * 0xc) < 1) {
        pFVar4 = FField::GetOwner<FProperty>((FField *)this);
        if ((pFVar4 != (FProperty *)0x0) &&
           (pFVar5 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res18),
           (pFVar5->ArUEVer).FileVersionUE5 < 0x3f4)) {
          return UseSerializeItem;
        }
        LoadFromType<unsigned_char>
                  (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
        return Converted;
      }
    }
    else {
      FVar2 = param_1->Type;
      FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar10.Number = 0;
      FVar10.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_04,FVar3.Value);
      if (FVar2 == FVar10) {
        LoadFromType<unsigned_short>
                  (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
        return Converted;
      }
      FVar2 = param_1->Type;
      FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar11.Number = 0;
      FVar11.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_05,FVar3.Value);
      if (FVar2 == FVar11) {
        LoadFromType<unsigned_int>
                  (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
        return Converted;
      }
      FVar2 = param_1->Type;
      FVar3 = FNameEntryId::FromValidEName((EName)local_res10);
      FVar12.Number = 0;
      FVar12.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var_06,FVar3.Value);
      if (FVar2 == FVar12) {
        LoadFromType<unsigned___int64>
                  (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
        return Converted;
      }
    }
    return UseSerializeItem;
  }
  LoadFromType<__int64>
            (this,param_1,(FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_3);
  return Converted;
}

// CopyValuesInternal @ 142174630

void __thiscall
FBoolProperty::CopyValuesInternal(FBoolProperty *this,void *param_1,void *param_2,int param_3)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if (((this->FieldSize == '\0') || (this->FieldMask == 0xff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0 && !IsNativeBool()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x1bb,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar6 = 0;
  if (0 < param_3) {
    do {
      bVar1 = this->FieldMask;
      iVar4 = iVar6 * *(int *)((longlong)&this->_padding_ + 4);
      iVar6 = iVar6 + 1;
      lVar5 = (longlong)iVar4 + (ulonglong)this->ByteOffset;
      *(byte *)(lVar5 + (longlong)param_1) =
           *(byte *)(lVar5 + (longlong)param_2) & bVar1 |
           ~bVar1 & *(byte *)(lVar5 + (longlong)param_1);
    } while (iVar6 < param_3);
  }
  return;
}

// DetermineBitfieldOffsetAndMask @ 142175820

void __thiscall
FBoolProperty::DetermineBitfieldOffsetAndMask
          (FBoolProperty *this,uint *param_1,uint *param_2,_func___cdecl_void_void_ptr *param_3,
          ulong64 param_4)

{
  ulonglong uVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  void *_Dst;
  void *pvVar6;
  void *pvVar7;
  
  _Dst = operator_new__(param_4);
  pvVar6 = (void *)0x0;
  pvVar7 = pvVar6;
  if (_Dst != (void *)0x0) {
    memset(_Dst,0,param_4);
    pvVar7 = _Dst;
  }
  (*param_3)(pvVar7);
  if (param_4 != 0) {
    do {
      bVar2 = *(byte *)((longlong)pvVar6 + (longlong)pvVar7);
      if (bVar2 != 0) {
        *param_1 = (uint)pvVar6;
        *param_2 = (uint)bVar2;
        uVar1 = (ulonglong)(bVar2 - 1) * 2 + 1;
        lVar3 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
          }
        }
        if ((1 << ((byte)lVar3 & 0x1f) != (uint)bVar2) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("FMath::RoundUpToPowerOfTwo(BitMask) == BitMask",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                               ,0x71,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      pvVar6 = (void *)(ulonglong)((uint)pvVar6 + 1);
    } while (pvVar6 < param_4);
  }
  operator_delete__(pvVar7);
  return;
}

// ExportText_Internal @ 142175d10

void __thiscall
FBoolProperty::ExportText_Internal
          (FBoolProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char local_res20 [8];
  FString local_18;
  
  if ((this->FieldSize == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x15e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_res20[0] = '\0';
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
    if (cVar3 != '\0') {
      FProperty::GetValue_InContainer((FProperty *)this,param_2,local_res20);
      goto LAB_142175da8;
    }
    param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
  }
  local_res20[0] =
       (this->FieldMask & *(byte *)((ulonglong)this->ByteOffset + (longlong)param_2)) != 0;
LAB_142175da8:
  ::FString::PrintfImpl(&local_18,L"%s");
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AppendChars(param_1,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// GetCPPMacroType @ 1421791c0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FBoolProperty::GetCPPMacroType(FBoolProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  if ((this->FieldSize == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0xe5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if (this->FieldMask == 0xff) {
    ::FString::FString(__return_storage_ptr__,L"UBOOL");
    return __return_storage_ptr__;
  }
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar1 == 1) {
    pwVar5 = L"UBOOL8";
  }
  else if (iVar1 == 2) {
    pwVar5 = L"UBOOL16";
  }
  else {
    if (iVar1 != 4) {
      if (iVar1 == 8) {
        pwVar5 = L"UBOOL64";
        goto LAB_1421792db;
      }
      bVar3 = IsThisNotNull(this,"FField::GetName");
      if (bVar3) {
        ::FName::ToString((FName *)&this->_padding_,&local_18);
      }
      else {
        ::FString::FString(&local_18,L"None");
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    pwVar5 = L"UBOOL32";
  }
LAB_1421792db:
  ::FString::FString(__return_storage_ptr__,pwVar5);
  return __return_storage_ptr__;
}

// GetCPPType @ 14217a000

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
FBoolProperty::GetCPPType
          (FBoolProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  wchar_t *pwVar5;
  FString local_18;
  
  if ((this->FieldSize == '\0') &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0xc5,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FString *)(*pcVar2)();
    return pFVar4;
  }
  if ((this->FieldMask == 0xff) || ((param_2 & 0x80) != 0 || ((byte)param_2 & 6) == 6)) {
    pwVar5 = L"bool";
  }
  else {
    iVar1 = *(int *)((longlong)&this->_padding_ + 4);
    if (iVar1 == 1) {
      pwVar5 = L"uint8";
    }
    else if (iVar1 == 2) {
      pwVar5 = L"uint16";
    }
    else {
      if (iVar1 != 4) {
        if (iVar1 == 8) {
          pwVar5 = L"uint64";
          goto LAB_14217a122;
        }
        bVar3 = IsThisNotNull(this,"FField::GetName");
        if (bVar3) {
          ::FName::ToString((FName *)&this->_padding_,&local_18);
        }
        else {
          ::FString::FString(&local_18,L"None");
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
      }
      pwVar5 = L"uint32";
    }
  }
LAB_14217a122:
  ::FString::FString(__return_storage_ptr__,pwVar5);
  return __return_storage_ptr__;
}

// GetMinAlignment @ 14217c4a0

/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall FBoolProperty::GetMinAlignment(FBoolProperty *this)

{
  int iVar1;
  bool bVar2;
  FString local_18;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar1 == 1) {
    return 1;
  }
  if (iVar1 == 2) {
    return 2;
  }
  if (iVar1 == 4) {
    return 4;
  }
  if (iVar1 != 8) {
    bVar2 = IsThisNotNull(this,"FField::GetName");
    if (bVar2) {
      ::FName::ToString((FName *)&this->_padding_,&local_18);
    }
    else {
      ::FString::FString(&local_18,L"None");
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return 0;
  }
  return 8;
}

// GetValueTypeHashInternal @ 14217ddf0

uint __thiscall FBoolProperty::GetValueTypeHashInternal(FBoolProperty *this,void *param_1)

{
  return (uint)(*(byte *)((ulonglong)this->ByteOffset + (longlong)param_1) & this->FieldMask);
}

// Identical @ 14217e0c0

bool __thiscall
FBoolProperty::Identical(FBoolProperty *this,void *param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  
  if (this->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x1a1,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (param_2 == (void *)0x0) {
    bVar4 = 0;
  }
  else {
    bVar4 = *(byte *)((ulonglong)this->ByteOffset + (longlong)param_2);
  }
  return (this->FieldMask & (*(byte *)((ulonglong)this->ByteOffset + (longlong)param_1) ^ bVar4)) ==
         0;
}

// ImportText_Internal @ 14217faf0

wchar_t * __thiscall
FBoolProperty::ImportText_Internal
          (FBoolProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  wchar_t *pwVar5;
  FCoreTexts *pFVar6;
  FString *pFVar7;
  ForAnyElementType FVar8;
  wchar_t *pwVar9;
  byte bVar10;
  void *pvVar11;
  char local_res10 [8];
  undefined1 local_48 [8];
  FString local_40;
  
  local_40.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.Data.ArrayNum = 0;
  local_40.Data.ArrayMax = 0;
  pwVar5 = FPropertyHelpers::ReadToken(param_1,&local_40,false);
  if (pwVar5 == (wchar_t *)0x0) {
LAB_14217fd90:
    pwVar5 = (wchar_t *)0x0;
    goto LAB_14217fd93;
  }
  if ((this->FieldSize == '\0') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                         ,0x176,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pwVar5 = (wchar_t *)(*pcVar1)();
    return pwVar5;
  }
  pvVar11 = param_2;
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x78))(this);
    if (cVar3 == '\0') {
      pvVar11 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
      goto LAB_14217fbb8;
    }
    local_res10[0] = '\0';
    FProperty::GetValue_InContainer((FProperty *)this,param_2,local_res10);
    if (local_res10[0] == '\0') {
      bVar10 = 0;
    }
    else {
      bVar10 = this->FieldMask;
    }
  }
  else {
LAB_14217fbb8:
    bVar10 = *(byte *)((ulonglong)this->ByteOffset + (longlong)pvVar11);
  }
  pFVar6 = FCoreTexts::Get();
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_40.Data.ArrayNum != 0) {
    FVar8.Data = local_40.Data.AllocatorInstance.Data;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"1");
  if (iVar4 == 0) {
LAB_14217fd42:
    bVar10 = bVar10 | this->ByteMask;
  }
  else {
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar8.Data = local_40.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"True");
    if (iVar4 == 0) goto LAB_14217fd42;
    pFVar7 = FText::ToString(pFVar6->True);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar8.Data = local_40.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar9);
    if (iVar4 == 0) goto LAB_14217fd42;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar8.Data = local_40.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"Yes");
    if (iVar4 == 0) goto LAB_14217fd42;
    pFVar7 = FText::ToString(pFVar6->Yes);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar8.Data = local_40.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar9);
    if (iVar4 == 0) goto LAB_14217fd42;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_40.Data.ArrayNum != 0) {
      FVar8.Data = local_40.Data.AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"0");
    if (iVar4 != 0) {
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_40.Data.ArrayNum != 0) {
        FVar8.Data = local_40.Data.AllocatorInstance.Data;
      }
      iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"False");
      if (iVar4 != 0) {
        pFVar7 = FText::ToString(pFVar6->False);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar9 = L"";
        }
        else {
          pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
        FVar8.Data = (FScriptContainerElement *)L"";
        if (local_40.Data.ArrayNum != 0) {
          FVar8.Data = local_40.Data.AllocatorInstance.Data;
        }
        iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar9);
        if (iVar4 != 0) {
          FVar8.Data = (FScriptContainerElement *)L"";
          if (local_40.Data.ArrayNum != 0) {
            FVar8.Data = local_40.Data.AllocatorInstance.Data;
          }
          iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,L"No");
          if (iVar4 != 0) {
            pFVar7 = FText::ToString(pFVar6->No);
            if ((pFVar7->Data).ArrayNum == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
            }
            FVar8.Data = (FScriptContainerElement *)L"";
            if (local_40.Data.ArrayNum != 0) {
              FVar8.Data = local_40.Data.AllocatorInstance.Data;
            }
            iVar4 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar8.Data,pwVar9);
            if (iVar4 != 0) goto LAB_14217fd90;
          }
        }
      }
    }
    bVar10 = bVar10 & ~this->FieldMask;
  }
  if (param_3 == Container) {
    cVar3 = (**(code **)(this->_padding_ + 0x70))(this);
    if (cVar3 == '\0') {
      *(byte *)((longlong)param_2 +
               (ulonglong)this->ByteOffset + (longlong)*(int *)((longlong)&this->_padding_ + 4)) =
           bVar10;
    }
    else {
      local_48[0] = (this->FieldMask & bVar10) != 0;
      FProperty::SetValue_InContainer((FProperty *)this,param_2,local_48);
    }
  }
  else {
    *(byte *)((ulonglong)this->ByteOffset + (longlong)param_2) = bVar10;
  }
LAB_14217fd93:
  if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data.AllocatorInstance.Data);
  }
  return pwVar5;
}

// InitializeValueInternal @ 142182a70

void __thiscall FBoolProperty::InitializeValueInternal(FBoolProperty *this,void *param_1)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  
  if (this->FieldSize == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x1cc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pbVar1 = (byte *)((ulonglong)this->ByteOffset + (longlong)param_1);
  *pbVar1 = *pbVar1 & ~this->FieldMask;
  return;
}

// LinkInternal @ 142184ed0

void __thiscall FBoolProperty::LinkInternal(FBoolProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  ulonglong uVar3;
  
  if (this->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x9e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FProperty::SetElementSize((FProperty *)this,(uint)this->FieldSize);
  uVar3 = this->_padding_ & 0xffffffffbffffdffU | 0x1000000000;
  if (this->FieldMask == 0xff) {
    uVar3 = this->_padding_ | 0x1040000200;
  }
  this->_padding_ = uVar3 | 0x8000000000000;
  return;
}

// NetSerializeItem @ 142186a40

bool __thiscall
FBoolProperty::NetSerializeItem
          (FBoolProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  byte bVar4;
  byte *pbVar5;
  char local_res8 [8];
  
  if (this->FieldSize == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x1b2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  pbVar5 = (byte *)((longlong)param_3 + (ulonglong)this->ByteOffset);
  local_res8[0] = (*pbVar5 & this->FieldMask) != 0;
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
  if (local_res8[0] == '\0') {
    bVar4 = 0;
  }
  else {
    bVar4 = this->ByteMask;
  }
  *pbVar5 = ~this->FieldMask & *pbVar5 | bVar4;
  return true;
}

// PostDuplicate @ 142186ff0

void __thiscall FBoolProperty::PostDuplicate(FBoolProperty *this,FField *param_1)

{
  this->FieldSize = *(uchar *)&param_1[2].Owner.Container;
  this->ByteOffset = *(uchar *)((longlong)&param_1[2].Owner.Container + 1);
  this->ByteMask = *(uchar *)((longlong)&param_1[2].Owner.Container + 2);
  this->FieldMask = *(uchar *)((longlong)&param_1[2].Owner.Container + 3);
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// Serialize @ 142189f30

void __thiscall FBoolProperty::Serialize(FBoolProperty *this,FArchive *param_1)

{
  uchar *puVar1;
  longlong *plVar2;
  char local_res8 [8];
  byte local_res10 [8];
  
  FProperty::Serialize((FProperty *)this,param_1);
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->FieldSize,1);
  }
  else {
    this->FieldSize = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ByteOffset,1);
  }
  else {
    this->ByteOffset = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->ByteMask,1);
  }
  else {
    this->ByteMask = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  puVar1 = (uchar *)**(undefined8 **)&param_1->field_0x8;
  if ((uchar *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,&this->FieldMask,1);
  }
  else {
    this->FieldMask = *puVar1;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 1;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  local_res10[0] = *(byte *)((longlong)&this->_padding_ + 4);
  if ((byte *)plVar2[1] < (byte *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,1);
  }
  else {
    local_res10[0] = *(byte *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  local_res8[0] = '\0';
  if ((param_1->field_0x28 & 1) != 0) {
    plVar2 = *(longlong **)&param_1->field_0x8;
    if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar2;
      *plVar2 = *plVar2 + 1;
    }
    SetBoolSize(this,(uint)local_res10[0],local_res8[0] != '\0',0);
    return;
  }
  if ((param_1->field_0x28 & 4) == 0) {
    local_res8[0] = false;
  }
  else {
    local_res8[0] = this->FieldMask == 0xff;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if (*plVar2 + 1U <= (ulonglong)plVar2[1]) {
    *plVar2 = *plVar2 + 1;
    return;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  return;
}

// SerializeItem @ 14218b4a0

void __thiscall
FBoolProperty::SerializeItem
          (FBoolProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  longlong *plVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  byte *pbVar6;
  char local_res8 [8];
  
  if (this->FieldSize == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldSize != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x1a9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar6 = (byte *)((longlong)param_2 + (ulonglong)this->ByteOffset);
  local_res8[0] = (*pbVar6 & this->FieldMask) != 0;
  plVar1 = *(longlong **)(*(longlong *)param_1 + 8);
  pcVar2 = *(char **)plVar1[1];
  if ((char *)((undefined8 *)plVar1[1])[1] < pcVar2 + 1) {
    (**(code **)(*plVar1 + 0x188))(plVar1,local_res8,1);
  }
  else {
    local_res8[0] = *pcVar2;
    *(longlong *)plVar1[1] = *(longlong *)plVar1[1] + 1;
  }
  if (local_res8[0] == '\0') {
    bVar5 = 0;
  }
  else {
    bVar5 = this->ByteMask;
  }
  *pbVar6 = ~this->FieldMask & *pbVar6 | bVar5;
  return;
}

// SetBoolSize @ 1421913a0

void __thiscall
FBoolProperty::SetBoolSize(FBoolProperty *this,uint param_1,bool param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  uchar uVar3;
  bool bVar4;
  ulonglong uVar5;
  uint local_res18 [4];
  
  uVar5 = this->_padding_ & 0xffffffffbffffdffU | 0x1000000000;
  if (param_2) {
    uVar5 = this->_padding_ | 0x1040000200;
  }
  this->_padding_ = uVar5;
  local_res18[0] = 1;
  if (param_3 != 0) {
    local_res18[0] = param_3;
  }
  FProperty::SetElementSize((FProperty *)this,param_1);
  this->FieldSize = *(uchar *)((longlong)&this->_padding_ + 4);
  this->ByteOffset = '\0';
  if (param_2) {
    this->ByteMask = '\x01';
    uVar3 = 0xff;
  }
  else {
    if (param_1 != 0) {
      bVar2 = 0;
      do {
        uVar3 = *(uchar *)((longlong)local_res18 + (ulonglong)bVar2);
        this->ByteMask = uVar3;
        if (uVar3 != '\0') break;
        bVar2 = bVar2 + 1;
        this->ByteOffset = bVar2;
      } while (bVar2 < param_1);
    }
    uVar3 = this->ByteMask;
  }
  this->FieldMask = uVar3;
  if ((uint)this->FieldSize != *(uint *)((longlong)&this->_padding_ + 4)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int32)FieldSize == GetElementSize()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x5c,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetElementSize() != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x5d,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->FieldMask == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("FieldMask != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x5e,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ByteMask == '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ByteMask != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyBool.cpp"
                       ,0x5f,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// StaticClass @ 142192f80

FFieldClass * __cdecl FBoolProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FBoolProperty",0x20000,
                 CASTCLASS_FBoolProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FBoolProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

