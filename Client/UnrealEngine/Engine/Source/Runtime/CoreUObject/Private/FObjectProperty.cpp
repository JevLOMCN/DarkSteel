// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 36

// ClearIntrusiveOptionalValue @ 141f72510

void __thiscall FObjectProperty::ClearIntrusiveOptionalValue(FObjectProperty *this,void *param_1)

{
  if ((*(ulonglong *)&this->field_0x38 & 0x1000000200) == 0x1000000200) {
    memset(param_1,0,(longlong)*(int *)&this->field_0x34);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f7253d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x130))(this,param_1);
  return;
}

// GetFieldSize @ 141f81c90

ulong64 __thiscall FObjectProperty::GetFieldSize(FObjectProperty *this)

{
  return 0x78;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5f0

bool __thiscall FObjectProperty::HasIntrusiveUnsetOptionalState(FObjectProperty *this)

{
  return (bool)((byte)(*(uint *)&this->field_0x38 >> 0xc) & 1);
}

// InitializeIntrusiveUnsetOptionalValue @ 141f8e030

void __thiscall
FObjectProperty::InitializeIntrusiveUnsetOptionalValue(FObjectProperty *this,void *param_1)

{
  if ((*(ulonglong *)&this->field_0x38 & 0x1000000200) == 0x1000000200) {
    memset(param_1,0,(longlong)*(int *)&this->field_0x34);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f8e05d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x130))(this,param_1);
  return;
}

// IsIntrusiveOptionalValueSet @ 141f90250

bool __thiscall FObjectProperty::IsIntrusiveOptionalValueSet(FObjectProperty *this,void *param_1)

{
  return *(longlong *)param_1 != 0;
}

// EmitIntrusiveOptionalReferenceInfo @ 14203d810

void __thiscall
FObjectProperty::EmitIntrusiveOptionalReferenceInfo
          (FObjectProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00014203d81a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)this + 0x178))();
  return;
}

// EmitReferenceInfo @ 14203e1b0

void __thiscall
FObjectProperty::EmitReferenceInfo
          (FObjectProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  int iVar1;
  FName FVar2;
  FString *pFVar3;
  FName *pFVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  FName local_res8;
  FString local_78;
  FName local_68;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  FMemberDeclaration local_48;
  
  if (0 < (int)*(uint *)&this->field_0x30) {
    iVar8 = 0;
    uVar7 = (ulonglong)*(uint *)&this->field_0x30;
    do {
      uVar6 = *(int *)&this->field_0x44 + iVar8 + param_2;
      pFVar3 = UE::GC::FPropertyStack::GetPropertyPath(param_4,&local_78);
      iVar1 = (pFVar3->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      pFVar4 = ::FName::FName(&local_res8,iVar5,(wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                              FNAME_Add);
      FVar2 = *pFVar4;
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      uStack_5c = CONCAT31(uStack_5c._1_3_,2);
      local_48._12_4_ = uStack_5c;
      local_48.Offset = uVar6;
      local_58 = 0;
      local_48.ExtraWord.ObjectARO = (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)0x0;
      local_68 = FVar2;
      uStack_60 = uVar6;
      local_48.DebugName = FVar2;
      UE::GC::FSchemaBuilder::Add(param_1,&local_48);
      iVar8 = iVar8 + 8;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}

// FObjectProperty @ 142161c40

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FObjectProperty * __thiscall
FObjectProperty::FObjectProperty
          (FObjectProperty *this,FFieldVariant param_1,FObjectPropertyParams *param_2)

{
  ulonglong uVar1;
  UClass *pUVar2;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,
             CPF_HasGetValueTypeHash|CPF_NoDestructor|CPF_ZeroConstructor);
  *(undefined ***)this = &___7__TProperty_U__TObjectPtr_VUObject____VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7__TFObjectPropertyBase_U__TObjectPtr_VUObject______6B_;
  if (param_2->ClassFunc == (_func___cdecl_UClass_ptr *)0x0) {
    pUVar2 = (UClass *)0x0;
  }
  else {
    pUVar2 = (*param_2->ClassFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UClass *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  *(UClass **)&this->field_0x70 = pUVar2;
  *(undefined ***)this = &___7FObjectProperty__6B_;
  return this;
}

// FObjectProperty @ 142161d50

FObjectProperty * __thiscall
FObjectProperty::FObjectProperty
          (FObjectProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  uVar1 = *(ulonglong *)param_1.Container;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  local_res8 = uVar1;
  if ((((uVar1 & 1) != 0) && ((UObject *)(uVar1 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
     (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)(uVar1 & 0xfffffffffffffffe));
  }
  FObjectPropertyBase::FObjectPropertyBase
            ((FObjectPropertyBase *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7__TProperty_U__TObjectPtr_VUObject____VFObjectPropertyBase____6B_;
  FProperty::SetElementSize((FProperty *)this,8);
  *(undefined ***)this = &___7FObjectProperty__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// AllowCrossLevel @ 142167200

bool __thiscall FObjectProperty::AllowCrossLevel(FObjectProperty *this)

{
  return (bool)((byte)(*(uint *)&this->field_0x38 >> 0x13) & 1);
}

// Construct @ 14216c0d0

FField * __cdecl
FObjectProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FObjectProperty *this;
  FFieldClass *pFVar1;
  FObjectProperty *pFVar2;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  pFVar2 = (FObjectProperty *)0x0;
  if (this != (FObjectProperty *)0x0) {
    pFVar1 = StaticClass();
    FField::FField((FField *)this,EC_InternalUseOnlyConstructor,pFVar1);
    *(undefined8 *)&this->field_0x48 = 0;
    *(undefined8 *)&this->field_0x50 = 0;
    *(undefined8 *)&this->field_0x58 = 0;
    *(undefined8 *)&this->field_0x60 = 0;
    *(undefined8 *)&this->field_0x68 = 0;
    *(undefined8 *)&this->field_0x70 = 0;
    *(undefined ***)this = &___7FObjectProperty__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    pFVar2 = FObjectProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
  }
  return (FField *)pFVar2;
}

// ConvertFromType @ 142170090

/* WARNING: Removing unreachable block (ram,0x000142170905) */
/* WARNING: Enum "Type": Some values do not have unique names */

EConvertFromTypeResult __thiscall
FObjectProperty::ConvertFromType
          (FObjectProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3
          ,UStruct *param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  FName FVar6;
  FName FVar7;
  uchar *puVar8;
  bool bVar9;
  ELoaderType EVar10;
  FNameEntryId FVar11;
  EConvertFromTypeResult EVar12;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FArchive *pFVar13;
  UObject *pUVar14;
  UObject *pUVar15;
  FUObjectItem *pFVar16;
  FObjectPtr_u_0 FVar17;
  undefined1 local_res10 [8];
  FSlotBase local_res18;
  uchar *local_res20;
  FWeakObjectPtr local_118;
  FSoftObjectPath local_110;
  UObject *local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  uint local_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  FString local_d0;
  undefined1 local_c0 [4];
  FName local_bc;
  UObject *local_b0;
  UObject *local_a8;
  UObject *local_a0;
  UObject *local_98;
  UObject *local_90;
  UObject *local_88;
  UObject *local_80;
  FString local_78;
  FString local_68;
  void *local_58 [2];
  void *local_48 [2];
  
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_AssetObjectProperty,"AssetObjectProperty");
    _Init_thread_footer(&::_TSS0);
  }
  FVar4 = param_1->Type;
  FVar11 = FNameEntryId::FromValidEName((EName)local_res10);
  uStack_e4 = 0;
  local_e8 = *(uint *)CONCAT44(extraout_var,FVar11.Value);
  FVar6.Number = 0;
  FVar6.ComparisonIndex.Value = local_e8;
  if ((FVar4 != FVar6) && (FVar4 = param_1->Type, FVar4 != NAME_AssetObjectProperty)) {
    FVar11 = FNameEntryId::FromValidEName((EName)local_c0);
    uStack_dc = 0;
    local_e0 = *(uint *)CONCAT44(extraout_var_00,FVar11.Value);
    FVar7.Number = 0;
    FVar7.ComparisonIndex.Value = local_e0;
    if (FVar4 != FVar7) {
      return UseSerializeItem;
    }
    pFVar13 = (local_res18.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar13 + 0x168))(pFVar13,&local_f0);
    if (local_f0 != (UObject *)0x0) {
      pUVar14 = *(UObject **)&this->field_0x70;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar14);
      }
      if ((*(int *)(*(longlong *)&local_f0->field_0x10 + 0x38) < *(int *)&pUVar14[1].field_0x10) ||
         (*(undefined1 **)
           (*(longlong *)(*(longlong *)&local_f0->field_0x10 + 0x30) +
           (longlong)*(int *)&pUVar14[1].field_0x10 * 8) != &pUVar14[1].field_0x8)) {
        if (2 < (byte)LogClass._0_1_) {
          local_bc = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
          ::FName::ToString(&local_bc,&local_78);
          pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
          (**(code **)(*(longlong *)pFVar13 + 0x18))(pFVar13,local_58);
          bVar9 = IsThisNotNull(this,"FField::GetName");
          if (bVar9) {
            ::FName::ToString((FName *)&this->field_0x20,&local_d0);
          }
          else {
            ::FString::FString(&local_d0,L"None");
          }
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
          if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.Data.AllocatorInstance.Data);
          }
          if (local_58[0] != (void *)0x0) {
            FMemory::Free(local_58[0]);
          }
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        return CannotConvert;
      }
    }
    pUVar14 = local_f0;
    iVar1 = param_1->ArrayIndex;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f0);
    }
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar9)
       ) {
      pcVar5 = (code *)swi(3);
      EVar12 = (*pcVar5)();
      return EVar12;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      EVar12 = (*pcVar5)();
      return EVar12;
    }
    iVar2 = *(int *)&this->field_0x34;
    iVar3 = *(int *)&this->field_0x44;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    *(UObject **)(param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2) = pUVar14;
    local_b0 = local_f0;
    pcVar5 = *(code **)(*(longlong *)this + 0x218);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_f0 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_f0);
    }
    iVar1 = param_1->ArrayIndex;
    if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar9)
       ) {
      pcVar5 = (code *)swi(3);
      EVar12 = (*pcVar5)();
      return EVar12;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      EVar12 = (*pcVar5)();
      return EVar12;
    }
    (*pcVar5)(this,param_3 + (longlong)*(int *)&this->field_0x44 +
                             (longlong)iVar1 * (longlong)*(int *)&this->field_0x34,&local_b0,param_5
             );
    return Converted;
  }
  local_110.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_110.AssetPath.AssetName.Number = 0;
  local_110.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_110.AssetPath.PackageName.Number = 0;
  local_110.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_110.SubPathString.Data.ArrayNum = 0;
  local_110.SubPathString.Data.ArrayMax = 0;
  local_118.ObjectIndex = 0;
  local_118.ObjectSerialNumber = 0;
  local_d8 = 0;
  FUtf8String::Reset(&local_110.SubPathString,0);
  (**(code **)(*(longlong *)(local_res18.StructuredArchive)->Formatter->Inner + 0x148))();
  EVar10 = (*GetLoaderType)();
  bVar9 = IsInGameThread();
  if (!bVar9) {
    pUVar14 = FWeakObjectPtr::Get(&local_118);
    if ((pUVar14 == (UObject *)0x0) && (local_110.AssetPath.PackageName != (FName)0x0)) {
      pUVar15 = FSoftObjectPath::ResolveObject(&local_110);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      bVar9 = (*IsInAsyncLoadingThread)();
      if (((bVar9) && (pUVar15 != (UObject *)0x0)) &&
         (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc),
         ((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_142170511:
        if ((*(uint *)&pUVar15->field_0x8 >> 0x1e & 1) != 0) goto LAB_14217051f;
        bVar9 = true;
      }
      else {
        local_a8 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_a8);
        if (pUVar15 != (UObject *)0x0) goto LAB_142170511;
LAB_14217051f:
        bVar9 = false;
      }
      pUVar14 = (UObject *)0x0;
      if (bVar9) {
        pUVar14 = pUVar15;
      }
    }
    if ((pUVar14 != (UObject *)0x0) || (local_110.AssetPath.PackageName == (FName)0x0))
    goto LAB_1421705df;
    if (EVar10 != ZenLoader) {
      if (1 < (byte)LogClass._0_1_) {
        pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
        (**(code **)(*(longlong *)pFVar13 + 0x18))(pFVar13,local_48);
        ::LexToString(EVar10);
        FSoftObjectPath::ToString(&local_110,&local_68);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        param_3 = local_res20;
        if (local_48[0] != (void *)0x0) {
          FMemory::Free(local_48[0]);
          param_3 = local_res20;
        }
      }
      goto LAB_1421705df;
    }
    pUVar14 = FWeakObjectPtr::Get(&local_118);
    if (pUVar14 != (UObject *)0x0) goto LAB_1421705df;
    if (local_110.AssetPath.PackageName != (FName)0x0) {
      pUVar15 = FSoftObjectPath::ResolveObject(&local_110);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      bVar9 = (*IsInAsyncLoadingThread)();
      if (((bVar9) && (pUVar15 != (UObject *)0x0)) &&
         (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc),
         ((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_14217080d:
        if ((*(uint *)&pUVar15->field_0x8 >> 0x1e & 1) != 0) goto LAB_14217081b;
        bVar9 = true;
      }
      else {
        local_a0 = pUVar15;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar15);
        }
        FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_a0);
        if (pUVar15 != (UObject *)0x0) goto LAB_14217080d;
LAB_14217081b:
        bVar9 = false;
      }
      pUVar14 = (UObject *)0x0;
      if (bVar9) {
        pUVar14 = pUVar15;
      }
    }
    if ((pUVar14 != (UObject *)0x0) || (local_110.AssetPath.PackageName == (FName)0x0))
    goto LAB_1421705df;
    FSoftObjectPath::TryLoad(&local_110,(FUObjectSerializeContext *)0x0);
    pUVar14 = FWeakObjectPtr::Get(&local_118);
    if ((pUVar14 != (UObject *)0x0) || (local_110.AssetPath.PackageName == (FName)0x0))
    goto LAB_1421705df;
    pUVar14 = FSoftObjectPath::ResolveObject(&local_110);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    bVar9 = (*IsInAsyncLoadingThread)();
    if (((!bVar9) || (pUVar14 == (UObject *)0x0)) ||
       (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar14->field_0xc),
       ((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) == 0)) {
      local_98 = pUVar14;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar14);
      }
      FVar17.Handle = (UObject *)&local_98;
      goto LAB_1421708d7;
    }
    goto LAB_1421708e6;
  }
  pUVar14 = FWeakObjectPtr::Get(&local_118);
  if (pUVar14 != (UObject *)0x0) goto LAB_1421705df;
  if (local_110.AssetPath.PackageName != (FName)0x0) {
    pUVar15 = FSoftObjectPath::ResolveObject(&local_110);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar15);
    }
    bVar9 = (*IsInAsyncLoadingThread)();
    if (((bVar9) && (pUVar15 != (UObject *)0x0)) &&
       (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar15->field_0xc),
       ((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421709aa:
      if ((*(uint *)&pUVar15->field_0x8 >> 0x1e & 1) != 0) goto LAB_1421709b8;
      bVar9 = true;
    }
    else {
      local_90 = pUVar15;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar15 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar15);
      }
      FWeakObjectPtr::operator=(&local_118,(FObjectPtr)&local_90);
      if (pUVar15 != (UObject *)0x0) goto LAB_1421709aa;
LAB_1421709b8:
      bVar9 = false;
    }
    pUVar14 = (UObject *)0x0;
    if (bVar9) {
      pUVar14 = pUVar15;
    }
  }
  if ((pUVar14 != (UObject *)0x0) || (local_110.AssetPath.PackageName == (FName)0x0))
  goto LAB_1421705df;
  FSoftObjectPath::TryLoad(&local_110,(FUObjectSerializeContext *)0x0);
  pUVar14 = FWeakObjectPtr::Get(&local_118);
  if ((pUVar14 != (UObject *)0x0) || (local_110.AssetPath.PackageName == (FName)0x0))
  goto LAB_1421705df;
  pUVar14 = FSoftObjectPath::ResolveObject(&local_110);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  bVar9 = (*IsInAsyncLoadingThread)();
  if (((bVar9) && (pUVar14 != (UObject *)0x0)) &&
     (pFVar16 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar14->field_0xc),
     ((pFVar16->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0)) {
LAB_1421708e6:
    if ((*(uint *)&pUVar14->field_0x8 >> 0x1e & 1) == 0) goto LAB_1421705df;
  }
  else {
    local_88 = pUVar14;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar14);
    }
    FVar17.Handle = (UObject *)&local_88;
LAB_1421708d7:
    FWeakObjectPtr::operator=(&local_118,(FObjectPtr)FVar17);
    if (pUVar14 != (UObject *)0x0) goto LAB_1421708e6;
  }
  pUVar14 = (UObject *)0x0;
LAB_1421705df:
  iVar1 = param_1->ArrayIndex;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar9))
  {
    pcVar5 = (code *)swi(3);
    EVar12 = (*pcVar5)();
    return EVar12;
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar12 = (*pcVar5)();
    return EVar12;
  }
  iVar2 = *(int *)&this->field_0x34;
  iVar3 = *(int *)&this->field_0x44;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  *(UObject **)(param_3 + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2) = pUVar14;
  pcVar5 = *(code **)(*(longlong *)this + 0x218);
  local_80 = pUVar14;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar14);
  }
  iVar1 = param_1->ArrayIndex;
  if (((iVar1 < 0) || (*(int *)&this->field_0x30 <= iVar1)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar9))
  {
    pcVar5 = (code *)swi(3);
    EVar12 = (*pcVar5)();
    return EVar12;
  }
  puVar8 = local_res20;
  if ((local_res20 == (uchar *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    EVar12 = (*pcVar5)();
    return EVar12;
  }
  (*pcVar5)(this,puVar8 + (longlong)*(int *)&this->field_0x44 +
                          (longlong)iVar1 * (longlong)*(int *)&this->field_0x34,&local_80,param_5);
  if (local_110.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_110.SubPathString.Data.AllocatorInstance.Data);
  }
  return Converted;
}

// CopyCompleteValueFromScriptVM @ 142173d30

void __thiscall
FObjectProperty::CopyCompleteValueFromScriptVM(FObjectProperty *this,void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)&this->field_0x30;
  uVar5 = 0;
  if (iVar1 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb8a,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (iVar1 == 1) {
    FObjectPropertyBase::SetObjectPropertyValue
              ((FObjectPropertyBase *)this,param_1,*(UObject **)param_2);
    return;
  }
  iVar2 = *(int *)&this->field_0x34;
  uVar6 = uVar5;
  if (iVar1 != 0) {
    do {
      FObjectPropertyBase::SetObjectPropertyValue
                ((FObjectPropertyBase *)this,(void *)((longlong)(int)uVar6 + (longlong)param_1),
                 *(UObject **)((longlong)param_2 + uVar5 * 8));
      uVar5 = uVar5 + 1;
      uVar6 = (ulonglong)(uint)((int)uVar6 + iVar2);
    } while (uVar5 != (longlong)iVar1);
  }
  return;
}

// CopyCompleteValueFromScriptVM_InContainer @ 142173e30

void __thiscall
FObjectProperty::CopyCompleteValueFromScriptVM_InContainer
          (FObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::SetWrappedUObjectPtrValues<FObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,InContainer,param_2,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM @ 142173e90

void __thiscall
FObjectProperty::CopyCompleteValueToScriptVM(FObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,Direct,0,*(int *)&this->field_0x30);
  return;
}

// CopyCompleteValueToScriptVM_InContainer @ 142173ef0

void __thiscall
FObjectProperty::CopyCompleteValueToScriptVM_InContainer
          (FObjectProperty *this,void *param_1,void *param_2)

{
  FObjectPropertyBase::GetWrappedUObjectPtrValues<FObjectPtr,UObject_*>
            ((FObjectPropertyBase *)this,param_1,param_2,InContainer,0,*(int *)&this->field_0x30);
  return;
}

// CopySingleValueFromScriptVM @ 142173f90

void __thiscall
FObjectProperty::CopySingleValueFromScriptVM(FObjectProperty *this,void *param_1,void *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
    *(UObject **)param_1 = pUVar1;
    return;
  }
  *(UObject **)param_1 = pUVar1;
  return;
}

// CopySingleValueToScriptVM @ 142174030

void __thiscall
FObjectProperty::CopySingleValueToScriptVM(FObjectProperty *this,void *param_1,void *param_2)

{
  UObject *pUVar1;
  
  pUVar1 = *(UObject **)param_2;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
    *(UObject **)param_1 = pUVar1;
    return;
  }
  *(UObject **)param_1 = pUVar1;
  return;
}

// CopyValuesInternal @ 142174b80

void __thiscall
FObjectProperty::CopyValuesInternal(FObjectProperty *this,void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < param_3) {
    lVar3 = (longlong)param_3;
    lVar2 = (longlong)param_2 - (longlong)param_1;
    do {
      pUVar1 = *(UObject **)((longlong)param_1 + lVar2);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      *(UObject **)param_1 = pUVar1;
      param_1 = (void *)((longlong)param_1 + 8);
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}

// GetCPPMacroType @ 1421797b0

FString * __thiscall
FObjectProperty::GetCPPMacroType
          (FObjectProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  wchar_t *pwVar2;
  FName local_res8;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
  if ((*(ulonglong *)&this->field_0x38 & 0x100000000000000) == 0) {
    ::FName::ToString(&local_res8,&local_28);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(&local_48,L"%s%s");
    if (param_1 != &local_48) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_48.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_48.Data.ArrayMax;
      local_48.Data.ArrayNum = 0;
      local_48.Data.ArrayMax = 0;
      local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pwVar2 = L"OBJECT";
  }
  else {
    ::FName::ToString(&local_res8,&local_28);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(&local_38,L"TObjectPtr<%s%s>");
    if (param_1 != &local_38) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_38.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    pwVar2 = L"OBJECTPTR";
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b050

FString * __thiscall
FObjectProperty::GetCPPType
          (FObjectProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FName local_res8;
  FName local_38;
  FString local_30;
  FString local_20;
  
  if ((*(longlong *)&this->field_0x70 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PropertyClass",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyObject.cpp"
                         ,0x2a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  if (((*(ulonglong *)&this->field_0x38 & 0x100000000000000) == 0) || ((param_2 >> 8 & 1) != 0)) {
    local_38 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
    ::FName::ToString(&local_38,&local_20);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(__return_storage_ptr__,L"%s%s*");
    local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
  }
  else {
    local_res8 = *(FName *)(*(longlong *)&this->field_0x70 + 0x18);
    ::FName::ToString(&local_res8,&local_30);
    (**(code **)(**(longlong **)&this->field_0x70 + 0x318))();
    ::FString::PrintfImpl(__return_storage_ptr__,L"TObjectPtr<%s%s>");
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetObjectPropertyValue @ 14217c9c0

UObject * __thiscall FObjectProperty::GetObjectPropertyValue(FObjectProperty *this,void *param_1)

{
  return *(UObject **)param_1;
}

// GetObjectPropertyValue_InContainer @ 14217cb40

UObject * __thiscall
FObjectProperty::GetObjectPropertyValue_InContainer(FObjectProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *pUVar5;
  UObject *local_res8;
  
  if ((((param_2 < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < param_2)) || (iVar1 < 1)) ||
     (iVar1 + -1 < param_2)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb50,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar5 = (UObject *)(*pcVar2)();
      return pUVar5;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x78))(this);
  if (cVar4 == '\0') {
    if ((param_2 < 0) || (*(int *)&this->field_0x30 <= param_2)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pUVar5 = (UObject *)(*pcVar2)();
        return pUVar5;
      }
    }
    local_res8 = (UObject *)
                 (**(code **)(*(longlong *)this + 0x1f8))
                           (this,(longlong)param_1 +
                                 (longlong)*(int *)&this->field_0x44 +
                                 (longlong)param_2 * (longlong)*(int *)&this->field_0x34);
  }
  else {
    local_res8 = (UObject *)0x0;
    FProperty::GetValue_InContainer((FProperty *)this,param_1,&local_res8);
  }
  return local_res8;
}

// GetObjectPtrPropertyValue @ 14217cd10

TObjectPtr<UObject> __thiscall
FObjectProperty::GetObjectPtrPropertyValue(FObjectProperty *this,void *param_1)

{
  UObject *pUVar1;
  undefined8 *in_R8;
  
  pUVar1 = (UObject *)*in_R8;
  *(UObject **)param_1 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetObjectPtrPropertyValue_InContainer @ 14217cf10

TObjectPtr<UObject> __thiscall
FObjectProperty::GetObjectPtrPropertyValue_InContainer
          (FObjectProperty *this,void *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  TObjectPtr<UObject> TVar5;
  UObject *pUVar6;
  undefined4 in_register_00000084;
  void *pvVar7;
  int in_R9D;
  UObject *local_res8;
  
  pvVar7 = (void *)CONCAT44(in_register_00000084,param_2);
  *(undefined8 *)param_1 = 0;
  if ((((in_R9D < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < in_R9D)) || (iVar1 < 1)) ||
     (iVar1 + -1 < in_R9D)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb50,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
      return (TObjectPtr<UObject>)TVar5.field0_0x0;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x78))(this);
  if (cVar4 == '\0') {
    if ((in_R9D < 0) || (*(int *)&this->field_0x30 <= in_R9D)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
        return (TObjectPtr<UObject>)TVar5.field0_0x0;
      }
    }
    if (pvVar7 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        TVar5.field0_0x0 = (TObjectPtr<UObject>_u_0)(*pcVar2)();
        return (TObjectPtr<UObject>)TVar5.field0_0x0;
      }
    }
    pUVar6 = (UObject *)
             (**(code **)(*(longlong *)this + 0x1f8))
                       (this,(longlong)pvVar7 +
                             (longlong)*(int *)&this->field_0x44 +
                             (longlong)in_R9D * (longlong)*(int *)&this->field_0x34);
  }
  else {
    local_res8 = (UObject *)0x0;
    FProperty::GetValue_InContainer((FProperty *)this,pvVar7,&local_res8);
    pUVar6 = local_res8;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  *(UObject **)param_1 = pUVar6;
  return (TObjectPtr<UObject>)(TObjectPtr<UObject>_u_0)param_1;
}

// GetValueTypeHashInternal @ 14217de80

uint __thiscall FObjectProperty::GetValueTypeHashInternal(FObjectProperty *this,void *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)(*(ulonglong *)param_1 >> 0x14) & 0xffff ^ (uint)(*(ulonglong *)param_1 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// Identical @ 14217e960

bool __thiscall
FObjectProperty::Identical(FObjectProperty *this,void *param_1,void *param_2,uint param_3)

{
  UClass *pUVar1;
  longlong lVar2;
  bool bVar3;
  UClass *pUVar4;
  FName FVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((param_3 >> 0x16 & 1) == 0) {
    pUVar7 = (UClass *)0x0;
    local_28 = 0;
    plVar9 = &local_28;
    if (param_1 != (void *)0x0) {
      plVar9 = param_1;
    }
    pUVar4 = pUVar7;
    if (param_2 != (void *)0x0) {
      pUVar4 = *(UClass **)param_2;
    }
    pUVar1 = (UClass *)*plVar9;
    plVar8 = &local_28;
    if (param_2 != (void *)0x0) {
      plVar8 = param_2;
    }
    if (pUVar1 == pUVar4) {
      return true;
    }
    if (((pUVar1 != (UClass *)0x0) && (pUVar4 != (UClass *)0x0)) && ((param_3 & 0x300) != 0)) {
      if ((param_3 >> 10 & 1) != 0) {
        pUVar4 = UE::CoreUObject::Private::GetClass((UObject *)pUVar1);
        if (pUVar4 == (UClass *)0x0) {
          return false;
        }
        if (*plVar9 == 0) {
          local_20 = 0;
          FVar5 = (FName)&stack0xffffffffffffffe0;
        }
        else {
          FVar5 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffe0);
        }
        pUVar6 = UClass::GetDefaultSubobjectByName(pUVar4,*(FName *)FVar5);
        if (pUVar6 == (UObject *)0x0) {
          return false;
        }
      }
      pUVar4 = pUVar7;
      if ((UObject *)*plVar9 != (UObject *)0x0) {
        pUVar4 = UE::CoreUObject::Private::GetClass((UObject *)*plVar9);
      }
      if ((UObject *)*plVar8 != (UObject *)0x0) {
        pUVar7 = UE::CoreUObject::Private::GetClass((UObject *)*plVar8);
      }
      if (pUVar4 == pUVar7) {
        if (*plVar8 == 0) {
          local_18 = 0;
          FVar5 = (FName)&stack0xffffffffffffffe8;
        }
        else {
          FVar5 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffe0);
        }
        lVar2 = *(longlong *)FVar5;
        if (*plVar9 == 0) {
          local_10 = 0;
          FVar5 = (FName)&stack0xfffffffffffffff0;
        }
        else {
          FVar5 = UE::CoreUObject::Private::GetFName((UObject *)&stack0xffffffffffffffe0);
        }
        if (*(longlong *)FVar5 == lVar2) {
          bVar3 = FObjectPropertyBase::StaticIdentical
                            ((UObject *)*plVar9,(UObject *)*plVar8,param_3);
          return bVar3;
        }
      }
    }
  }
  return false;
}

// ImportText_Internal @ 1421816e0

wchar_t * __thiscall
FObjectProperty::ImportText_Internal
          (FObjectProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  UClass *pUVar4;
  FObjectPtr_u_0 local_38;
  FObjectPtr_u_0 local_30;
  FObjectProperty *local_28;
  FScopedPlaceholderContainerTracker local_20;
  
  pwVar3 = FObjectPropertyBase::ImportText_Internal
                     ((FObjectPropertyBase *)this,param_1,param_2,param_3,param_4,param_5,param_6);
  if (pwVar3 != (wchar_t *)0x0) {
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
    }
    (**(code **)(*(longlong *)this + 0x200))(this,&local_38,param_2);
    local_30.Handle = local_38.Handle;
    pcVar1 = *(code **)(*(longlong *)this + 0x218);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_38.Handle != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_38.Handle);
    }
    (*pcVar1)(this,param_2,&local_30,0);
    if (local_38.Handle != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
      bVar2 = FObjectPtr::IsA((FObjectPtr *)&local_38,pUVar4);
      if ((bVar2) && (local_38.Handle != (UObject *)0x0)) {
        local_20.bEnabled = GEventDrivenLoaderEnabled == false;
        if (GEventDrivenLoaderEnabled == false) {
          FScopedPlaceholderContainerTracker::Push(&local_20,param_4);
        }
        local_28 = this;
        if ((((ulonglong)this & 1) != 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsUObject()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                               ,0x180,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          pwVar3 = (wchar_t *)(*pcVar1)();
          return pwVar3;
        }
        FLinkerPlaceholderBase::AddReferencingPropertyValue
                  ((FLinkerPlaceholderBase *)(local_38.Handle + 0xd),(FFieldVariant)&local_28,
                   param_2);
        if (local_20.bEnabled != false) {
          FScopedPlaceholderContainerTracker::Pop(&local_20);
        }
      }
    }
  }
  return pwVar3;
}

// PostSerializeObjectItem @ 1421875b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FObjectProperty::PostSerializeObjectItem
          (FObjectProperty *this,FArchive *param_1,void *param_2,UObject *param_3,UObject *param_4,
          EObjectPropertyOptions param_5,void *param_6)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  ENonNullableBehavior EVar4;
  UObject *this_00;
  UClass *pUVar5;
  FLinkerPlaceholderBase *this_01;
  FFieldObjectUnion FVar6;
  void *pvVar7;
  FObjectProperty *local_res20;
  undefined1 local_c8 [16];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  UObject *local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  FString local_40;
  
  pvVar7 = param_6;
  this_00 = param_4;
  if ((((((~(undefined1)param_5 & 1) != 0) && (param_4 == (UObject *)0x0)) &&
       ((*(uint *)&this->field_0x38 >> 0xc & 1) != 0)) &&
      ((*(int *)&param_1->field_0x30 < 1 && ((param_1->field_0x28 & 4) == 0)))) &&
     ((param_1->field_0x2b & 4) == 0)) {
    EVar4 = UE::CoreUObject::Private::GetNonNullableBehavior();
    local_c8._0_8_ = this_00;
    local_c8._8_8_ = this_00;
    if (EVar4 == CreateDefaultObjectIfPossible) {
      this_00 = FObjectPropertyBase::ConstructDefaultObjectValueIfNecessary
                          ((FObjectPropertyBase *)this,param_3,(FString *)local_c8,pvVar7);
      if (1 < (int)local_c8._8_4_) {
        ::FString::FString(&local_70,L" as ");
        ::FString::InsertAt((FString *)local_c8,0,&local_70);
        if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.Data.AllocatorInstance.Data);
        }
      }
      if (this_00 == (UObject *)0x0) {
LAB_14218777e:
        if ((byte)LogProperty._0_1_ < 2) goto LAB_1421878d7;
        if ((param_3 == (UObject *)0x0) || (*(longlong *)&param_3->field_0x10 == 0)) {
          ::FString::FString(&local_88,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_3,&local_88,(UObject *)0x0,None);
        }
        FField::GetFullName((FField *)this,&local_40);
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.Data.AllocatorInstance.Data);
        }
      }
      else {
        if ((byte)LogProperty._0_1_ < 3) goto LAB_1421878d7;
        if (*(longlong *)&this_00->field_0x10 == 0) {
          ::FString::FString(&local_a8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_a8,(UObject *)0x0,None);
        }
        if ((param_3 == (UObject *)0x0) || (*(longlong *)&param_3->field_0x10 == 0)) {
          ::FString::FString(&local_b8,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_3,&local_b8,(UObject *)0x0,None);
        }
        FField::GetFullName((FField *)this,&local_60);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
          local_88.Data.AllocatorInstance.Data = local_a8.Data.AllocatorInstance.Data;
        }
      }
      pvVar7 = param_6;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
        pvVar7 = param_6;
      }
    }
    else {
      if (EVar4 != LogWarning) goto LAB_14218777e;
      if (2 < (byte)LogProperty._0_1_) {
        if ((param_3 == (UObject *)0x0) || (*(longlong *)&param_3->field_0x10 == 0)) {
          ::FString::FString(&local_98,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)param_3,&local_98,(UObject *)0x0,None);
        }
        FField::GetFullName((FField *)this,&local_50);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogProperty);
        if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_50.Data.AllocatorInstance.Data);
        }
        pvVar7 = param_6;
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
          pvVar7 = param_6;
        }
      }
    }
LAB_1421878d7:
    (**(code **)(*(longlong *)this + 0x1d8))(this,param_2,this_00);
    if ((UObject *)local_c8._0_8_ != (UObject *)0x0) {
      FMemory::Free((void *)local_c8._0_8_);
    }
  }
  if (this_00 == param_3) {
    return;
  }
  FObjectPropertyBase::SetObjectPropertyValue((FObjectPropertyBase *)this,param_2,this_00);
  if (this_00 == (UObject *)0x0) goto LAB_1421879d8;
  pUVar5 = Z_Construct_UClass_ULinkerPlaceholderExportObject_NoRegister();
  iVar1 = (int)pUVar5->_padding_;
  if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar5->_padding_)) {
    if (this_00 == (UObject *)0x0) goto LAB_1421879d8;
    pUVar5 = Z_Construct_UClass_ULinkerPlaceholderClass_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((*(int *)(*(longlong *)&this_00->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar5->_padding_)) goto LAB_1421879d8;
    local_res20 = this;
    if ((((ulonglong)this & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6.Field = (FField *)&local_res20;
    this_01 = (FLinkerPlaceholderBase *)(this_00 + 0xd);
  }
  else {
    param_4 = (UObject *)this;
    if ((((ulonglong)this & 1) != 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!IsUObject()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x180,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    FVar6.Field = (FField *)&param_4;
    this_01 = (FLinkerPlaceholderBase *)(this_00 + 1);
  }
  FLinkerPlaceholderBase::AddReferencingPropertyValue(this_01,(FFieldVariant)FVar6,param_2);
LAB_1421879d8:
  if (((param_1->field_0x28 & 4) == 0) && (bVar3 = UE::IsSavingPackage((UObject *)0x0), !bVar3)) {
    pcVar2 = *(code **)(*(longlong *)this + 0x218);
    local_78 = this_00;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(this_00);
    }
    (*pcVar2)(this,param_2,&local_78,pvVar7);
  }
  return;
}

// SerializeItem @ 14218e6b0

void __thiscall
FObjectProperty::SerializeItem
          (FObjectProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  UObject *pUVar1;
  FArchive *pFVar2;
  code *pcVar3;
  FArchive *pFVar4;
  FSlotBase local_res10;
  UObject *local_res18;
  UObject *local_28;
  UObject *local_20;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  if ((pFVar4->field_0x2b & 1) != 0) {
    pUVar1 = *(UObject **)param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    pFVar2 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar2 + 0x150))(pFVar2,param_2);
    if (((pFVar4->field_0x28 & 4) == 0) && ((*(uint *)&pFVar4->field_0x34 & 0x100000) == 0)) {
      pcVar3 = *(code **)(*(longlong *)this + 0x218);
      local_res18 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      (*pcVar3)(this,param_2,&local_res18,param_3);
    }
    return;
  }
  (**(code **)(*(longlong *)this + 0x200))(this,&local_28,param_2);
  local_res18 = local_28;
  pFVar2 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar2 + 0x168))(pFVar2,&local_res18);
  (**(code **)(*(longlong *)this + 0x200))(this,&local_20,param_2);
  PostSerializeObjectItem(this,pFVar4,param_2,local_20,local_res18,None,param_3);
  return;
}

// SetObjectPropertyValueUnchecked @ 142192390

void __thiscall
FObjectProperty::SetObjectPropertyValueUnchecked
          (FObjectProperty *this,void *param_1,UObject *param_2)

{
  if (UE::GC::GIsIncrementalReachabilityPending) {
    if (param_2 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(param_2);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    *(UObject **)param_1 = param_2;
    return;
  }
  *(UObject **)param_1 = param_2;
  return;
}

// SetObjectPropertyValueUnchecked_InContainer @ 1421924e0

void __thiscall
FObjectProperty::SetObjectPropertyValueUnchecked_InContainer
          (FObjectProperty *this,void *param_1,UObject *param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *local_res8;
  
  if ((((param_3 < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < param_3)) || (iVar1 < 1)) ||
     (iVar1 + -1 < param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb8a,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x70))(this);
  if (cVar4 == '\0') {
    if ((param_3 < 0) || (*(int *)&this->field_0x30 <= param_3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FObjectPropertyBase::SetObjectPropertyValue
              ((FObjectPropertyBase *)this,
               (void *)((longlong)param_1 +
                       (longlong)*(int *)&this->field_0x44 +
                       (longlong)param_3 * (longlong)*(int *)&this->field_0x34),param_2);
  }
  else {
    local_res8 = param_2;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_2);
    }
    FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res8);
  }
  return;
}

// SetObjectPtrPropertyValueUnchecked @ 142192720

void __thiscall
FObjectProperty::SetObjectPtrPropertyValueUnchecked
          (FObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2)

{
  if (!UE::GC::GIsIncrementalReachabilityPending) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2.field0_0x0;
    return;
  }
  if (*(UObject **)param_2.field0_0x0 != (UObject *)0x0) {
    UE::GC::MarkAsReachable(*(UObject **)param_2.field0_0x0);
    *(undefined8 *)param_1 = *(undefined8 *)param_2.field0_0x0;
    return;
  }
  *(undefined8 *)param_1 = 0;
  return;
}

// SetObjectPtrPropertyValueUnchecked_InContainer @ 142192880

void __thiscall
FObjectProperty::SetObjectPtrPropertyValueUnchecked_InContainer
          (FObjectProperty *this,void *param_1,TObjectPtr<UObject> param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  UObject *local_res8;
  
  if ((((param_3 < 0) || (iVar1 = *(int *)&this->field_0x30, iVar1 < param_3)) || (iVar1 < 1)) ||
     (iVar1 + -1 < param_3)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex >= 0 && ArrayCount >= 0 && ArrayIndex <= ArrayDim && ArrayCount <= ArrayDim && ArrayIndex <= ArrayDim - ArrayCount"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                       ,0xb8a,
                       L"ArrayIndex (%d) and ArrayCount (%d) is invalid for an array of size %d");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  cVar4 = (**(code **)(*(longlong *)this + 0x70))(this);
  if (cVar4 == '\0') {
    if ((param_3 < 0) || (*(int *)&this->field_0x30 <= param_3)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (param_1 == (void *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FObjectPropertyBase::SetObjectPropertyValue
              ((FObjectPropertyBase *)this,
               (void *)((longlong)param_1 +
                       (longlong)*(int *)&this->field_0x44 +
                       (longlong)param_3 * (longlong)*(int *)&this->field_0x34),
               *(UObject **)param_2.field0_0x0);
  }
  else {
    local_res8 = *(UObject **)param_2.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8);
    }
    FProperty::SetValue_InContainer((FProperty *)this,param_1,&local_res8);
  }
  return;
}

// StaticClass @ 142193c20

FFieldClass * __cdecl FObjectProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FObjectPropertyBase::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FObjectProperty",0x10000,
                 CASTCLASS_FObjectPropertyBase|CASTCLASS_FObjectProperty|CASTCLASS_FProperty|
                 CASTCLASS_UField,pFVar1,Construct);
      atexit(`FObjectProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259d10

void * __cdecl FObjectProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Owner.Container.Field = (FField *)0x0;
    this->_padding_ = (longlong)&___7FObjectProperty__6B_;
  }
  return this;
}

