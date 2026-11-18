// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 44

// ContainsObjectReference @ 142024870

bool __thiscall
FOptionalProperty::ContainsObjectReference
          (FOptionalProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1,
          EPropertyObjectReferenceType param_2)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000142024877. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)&this->field_0x70 + 0x170))();
  return (bool)uVar1;
}

// EmitReferenceInfo @ 14203e2d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOptionalProperty::EmitReferenceInfo
          (FOptionalProperty *this,FSchemaBuilder *param_1,int param_2,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_3,
          FPropertyStack *param_4)

{
  longlong *plVar1;
  char cVar2;
  FSchemaView FVar3;
  FMemberDeclaration *pFVar4;
  undefined1 auStackY_258 [32];
  initializer_list<UE::GC::FMemberDeclaration> local_228;
  FMemberDeclaration local_218;
  FMemberDeclaration local_1f8;
  FSchemaBuilder local_1e0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_258;
  cVar2 = (**(code **)(**(longlong **)&this->field_0x70 + 0x170))
                    (*(longlong **)&this->field_0x70,param_3,1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(**(longlong **)&this->field_0x70 + 0x1a8))();
    plVar1 = *(longlong **)&this->field_0x70;
    if (cVar2 == '\0') {
      local_228._First = (FMemberDeclaration *)0x0;
      local_228._Last = (FMemberDeclaration *)0x0;
      UE::GC::FSchemaBuilder::FSchemaBuilder
                (&local_1e0,*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6],&local_228);
      UE::GC::FPropertyStackScope::FPropertyStackScope
                ((FPropertyStackScope *)&local_228,param_4,*(FProperty **)&this->field_0x70);
      (**(code **)(**(longlong **)&this->field_0x70 + 0x178))
                (*(longlong **)&this->field_0x70,&local_1e0,0,param_3);
      UE::GC::FPropertyStackScope::~FPropertyStackScope((FPropertyStackScope *)&local_228);
      FVar3 = UE::GC::FSchemaBuilder::Build
                        (&local_1e0,
                         (_func___cdecl_void_UObject_ptr_FReferenceCollector_ptr *)&local_228);
                    /* WARNING: Load size is inaccurate */
      pFVar4 = UE::GC::DeclareMember<UE::GC::FPropertyStack_&,UE::GC::FSchemaView>
                         (&local_1f8,param_4,*(int *)&this->field_0x44 + param_2,Optional,
                          (FSchemaView)*FVar3.Handle);
      local_218.DebugName = pFVar4->DebugName;
      local_218.Offset = pFVar4->Offset;
      local_218.Type = pFVar4->Type;
      local_218._13_3_ = *(undefined3 *)&pFVar4->field_0xd;
      local_218.ExtraWord = pFVar4->ExtraWord;
      UE::GC::FSchemaBuilder::Add(param_1,&local_218);
      UE::GC::FSchemaBuilder::~FSchemaBuilder(&local_1e0);
    }
    else {
      (**(code **)(*plVar1 + 0x1c8))(plVar1,param_1,*(int *)&this->field_0x44 + param_2,param_3);
    }
  }
  return;
}

// FOptionalProperty @ 142161e30

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FOptionalProperty * __thiscall
FOptionalProperty::FOptionalProperty
          (FOptionalProperty *this,FFieldVariant param_1,FGenericPropertyParams *param_2)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_None);
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FOptionalProperty__6B_;
  return this;
}

// FOptionalProperty @ 142161ea0

FOptionalProperty * __thiscall
FOptionalProperty::FOptionalProperty
          (FOptionalProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  *(undefined ***)this = &___7FOptionalProperty__6B_;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// ~FOptionalProperty @ 142163610

void __thiscall FOptionalProperty::~FOptionalProperty(FOptionalProperty *this)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FOptionalProperty__6B_;
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    *(undefined8 *)&this->field_0x70 = 0;
  }
  FField::~FField((FField *)this);
  return;
}

// AddCppProperty @ 142166190

void __thiscall FOptionalProperty::AddCppProperty(FOptionalProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->field_0x70 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FProperty **)&this->field_0x70 = param_1;
  return;
}

// AddReferencedObjects @ 142166c60

void __thiscall
FOptionalProperty::AddReferencedObjects(FOptionalProperty *this,FReferenceCollector *param_1)

{
  longlong *plVar1;
  
  FField::AddReferencedObjects((FField *)this,param_1);
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,param_1);
  }
  return;
}

// CanSerializeFromTypeName @ 1421693d0

bool __thiscall
FOptionalProperty::CanSerializeFromTypeName(FOptionalProperty *this,FPropertyTypeName param_1)

{
  longlong *plVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  undefined1 uVar5;
  
  bVar4 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if (!bVar4) {
    return false;
  }
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 == (longlong *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x2b2,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
  }
  iVar3 = 0;
  if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8 +
                  (ulonglong)(param_1.Index & 0x1fff) * 0xc)) {
    iVar3 = param_1.Index + 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000142169467. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (**(code **)(*plVar1 + 0x198))
                    (plVar1,iVar3,UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd],
                     *(code **)(*plVar1 + 0x198));
  return (bool)uVar5;
}

// ClearValueInternal @ 142169fb0

void __thiscall FOptionalProperty::ClearValueInternal(FOptionalProperty *this,void *param_1)

{
  FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)&this->field_0x70,param_1);
  return;
}

// Construct @ 14216c190

FField * __cdecl
FOptionalProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x78,0);
  if (this == (FProperty *)0x0) {
    this = (FProperty *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        pFVar1 = FProperty::StaticClass();
        FFieldClass::FFieldClass
                  (&::StaticFieldClass,L"FOptionalProperty",0x100000000000000,
                   CASTCLASS_FOptionalProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct
                  );
        atexit(`FOptionalProperty::StaticClass'::__l2::
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
    this[1]._padding_ = 0;
    this->_padding_ = (longlong)&___7FOptionalProperty__6B_;
    local_res20 = (param_1->Container).Unknown;
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    if ((((local_res20 & 1) != 0) &&
        ((UObject *)(local_res20 & 0xfffffffffffffffe) != (UObject *)0x0)) &&
       (UE::GC::GIsIncrementalReachabilityPending != false)) {
      UE::GC::MarkAsReachable((UObject *)(local_res20 & 0xfffffffffffffffe));
    }
    FProperty::FProperty(this,(FFieldVariant)&local_res20,param_2,param_3);
    this->_padding_ = (longlong)&___7FOptionalProperty__6B_;
    this[1]._padding_ = 0;
  }
  return (FField *)this;
}

// ContainsClearOnFinishDestroyInternal @ 14216cea0

bool __thiscall
FOptionalProperty::ContainsClearOnFinishDestroyInternal
          (FOptionalProperty *this,
          TArray<FStructProperty_const_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (*(longlong *)&this->field_0x70 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x1cb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  plVar1 = *(longlong **)&this->field_0x70;
  if ((plVar1[7] & 0x1040000000U) != 0) {
    return false;
  }
                    /* WARNING: Could not recover jumptable at 0x00014216cf0e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x140))(plVar1,param_1);
  return (bool)uVar4;
}

// ConvertFromType @ 142170ac0

/* WARNING: Type propagation algorithm not settling */

EConvertFromTypeResult __thiscall
FOptionalProperty::ConvertFromType
          (FOptionalProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,
          uchar *param_3,UStruct *param_4,uchar *param_5)

{
  undefined1 *this_00;
  uint *puVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  ulonglong uVar5;
  longlong lVar6;
  FFastPathLoadBuffer *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  FSlotBase FVar12;
  UObject *pUVar13;
  char cVar14;
  bool bVar15;
  bool bVar16;
  FNameEntryId FVar17;
  EConvertFromTypeResult EVar18;
  int iVar19;
  FArchiveState *pFVar20;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  void *pvVar21;
  FProperty *pFVar22;
  longlong *plVar23;
  FFieldClass *pFVar24;
  FFieldClass *pFVar25;
  FArchive *pFVar26;
  FName FVar27;
  FPropertyTypeName FVar28;
  uchar *puVar29;
  FObjectProperty *pFVar30;
  FObjectProperty *pFVar31;
  FSlotBase local_res18;
  uint local_128;
  FArchiveFieldName local_124;
  uint local_120 [2];
  uchar *local_118;
  int *local_110;
  int local_108;
  undefined4 local_104;
  UObject *local_100;
  UObject *local_f8;
  UObject *local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  FString local_e0;
  undefined1 local_d0 [8];
  void *local_c8 [2];
  FString local_b8;
  FPropertyTag local_a8;
  
  pFVar30 = (FObjectProperty *)0x0;
  local_104 = 0;
  local_res18.StructuredArchive = (FStructuredArchive *)param_2;
  pFVar20 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res18);
  if (0x3f3 < (pFVar20->ArUEVer).FileVersionUE5) {
    cVar14 = (**(code **)(*(longlong *)this + 0x198))(this,(param_1->TypeName).Index);
    if (cVar14 != '\0') {
      return UseSerializeItem;
    }
    local_a8.Prop = param_1->Prop;
    uVar9 = param_1->TypeName;
    uVar10 = (param_1->Type).ComparisonIndex;
    FVar4 = param_1->Type;
    uVar11 = *(undefined8 *)&(param_1->Type).Number;
    local_a8._24_8_ = *(undefined8 *)&(param_1->Name).Number;
    local_a8._32_8_ = *(undefined8 *)&(param_1->StructName).Number;
    local_a8._40_8_ = *(undefined8 *)&(param_1->EnumName).Number;
    local_a8.Type.Number = (uint)uVar11;
    local_a8.Name.ComparisonIndex.Value = (uint)((ulonglong)uVar11 >> 0x20);
    local_a8._48_8_ = *(undefined8 *)&(param_1->InnerType).Number;
    local_a8._56_8_ = *(undefined8 *)&(param_1->ValueType).Number;
    local_a8.ArrayIndex = param_1->ArrayIndex;
    local_a8._68_4_ = *(undefined4 *)&param_1->field_0x44;
    local_a8.SizeOffset = param_1->SizeOffset;
    local_a8.StructGuid.A = (param_1->StructGuid).A;
    local_a8.StructGuid.B = (param_1->StructGuid).B;
    local_a8.StructGuid.C = (param_1->StructGuid).C;
    local_a8.StructGuid.D = (param_1->StructGuid).D;
    local_a8.PropertyGuid.A = (param_1->PropertyGuid).A;
    local_a8.PropertyGuid.B = (param_1->PropertyGuid).B;
    local_a8.PropertyGuid.C = (param_1->PropertyGuid).C;
    local_a8.PropertyGuid.D = (param_1->PropertyGuid).D;
    local_a8.HasPropertyGuid = param_1->HasPropertyGuid;
    local_a8.BoolVal = param_1->BoolVal;
    local_a8.SerializeType = param_1->SerializeType;
    local_a8.OverrideOperation = param_1->OverrideOperation;
    local_a8.bExperimentalOverridableLogic = param_1->bExperimentalOverridableLogic;
    local_a8._117_3_ = *(undefined3 *)&param_1->field_0x75;
    local_a8.TypeName.Index = uVar9;
    local_a8.Type.ComparisonIndex.Value = uVar10;
    FVar17 = FNameEntryId::FromValidEName((EName)local_e8);
    FVar12.StructuredArchive = local_res18.StructuredArchive;
    FVar27.Number = 0;
    FVar27.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar17.Value);
    if (FVar4 != FVar27) {
LAB_142170c40:
      this_00 = &this->field_0x70;
      if ((*(int *)&this->field_0x30 < 1) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        EVar18 = (*pcVar8)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        EVar18 = (*pcVar8)();
        return EVar18;
      }
      pvVar21 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          ((FOptionalPropertyLayout *)this_00,param_3 + *(int *)&this->field_0x44);
      pFVar22 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
      iVar19 = (**(code **)(pFVar22->_padding_ + 0xb0))
                         (pFVar22,&local_a8,FVar12.StructuredArchive,pvVar21,0,0);
      if (iVar19 == 0) {
        pFVar22 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
        plVar23 = (longlong *)(**(code **)(pFVar22->_padding_ + 0x158))(pFVar22,local_d0);
        if (CONCAT44(local_a8.Type.Number,local_a8.Type.ComparisonIndex.Value) == *plVar23) {
          pFVar22 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
          (**(code **)(pFVar22->_padding_ + 0xc0))(pFVar22,FVar12.StructuredArchive,pvVar21,0);
          return Serialized;
        }
        return CannotConvert;
      }
      if (iVar19 == 1) {
        return Serialized;
      }
      if (iVar19 == 2) {
        return CannotConvert;
      }
      if (iVar19 == 3) {
        return Converted;
      }
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                          ,0x217,L"");
      if (!bVar15) {
        return CannotConvert;
      }
      pcVar8 = (code *)swi(3);
      EVar18 = (*pcVar8)();
      return EVar18;
    }
    bVar15 = FBinaryArchiveFormatter::TryEnterField
                       ((local_res18.StructuredArchive)->Formatter,local_124,false);
    if (bVar15) {
      local_a8.Prop =
           FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)&this->field_0x70);
      uVar2 = (param_1->TypeName).Index;
      FVar28.Index = 0;
      if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar2 >> 0xd] + 8
                      + (ulonglong)(uVar2 & 0x1fff) * 0xc)) {
        FVar28.Index = uVar2 + 1;
      }
      FPropertyTag::SetType(&local_a8,FVar28);
      uVar5 = CONCAT44(local_a8.Type.Number,local_a8.Type.ComparisonIndex.Value);
      FVar17 = FNameEntryId::FromValidEName((EName)local_e4);
      if (uVar5 == *(uint *)CONCAT44(extraout_var_00,FVar17.Value)) {
        pFVar26 = (FVar12.StructuredArchive)->Formatter->Inner;
        puVar29 = (uchar *)**(undefined8 **)&pFVar26->field_0x8;
        if ((uchar *)(*(undefined8 **)&pFVar26->field_0x8)[1] < puVar29 + 1) {
          (**(code **)(*(longlong *)pFVar26 + 0x188))(pFVar26,&local_a8.BoolVal,1);
        }
        else {
          local_a8.BoolVal = *puVar29;
          **(longlong **)&pFVar26->field_0x8 = **(longlong **)&pFVar26->field_0x8 + 1;
        }
      }
      goto LAB_142170c40;
    }
    if ((*(int *)&this->field_0x30 < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
       bVar15)) {
      pcVar8 = (code *)swi(3);
      EVar18 = (*pcVar8)();
      return EVar18;
    }
    if ((param_3 == (uchar *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ContainerPtr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                            ,0x2de,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      EVar18 = (*pcVar8)();
      return EVar18;
    }
    puVar29 = param_3 + *(int *)&this->field_0x44;
    goto LAB_1421712d6;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&NAME_OptionProperty,"OptionProperty");
    _Init_thread_footer(&::_TSS0);
  }
  if (param_1->Type != NAME_OptionProperty) {
    return UseSerializeItem;
  }
  pFVar20 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res18);
  local_108 = FArchiveState::CustomVer(pFVar20,&LegacyFOptionPropertyCustomVersion.GUID);
  iVar19 = param_1->ArrayIndex;
  local_110 = (int *)&this->field_0x30;
  local_118 = (uchar *)CONCAT44(local_118._4_4_,iVar19);
  if (((iVar19 < 0) || (*local_110 <= iVar19)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar15)
     ) {
    pcVar8 = (code *)swi(3);
    EVar18 = (*pcVar8)();
    return EVar18;
  }
  if ((param_3 == (uchar *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("ContainerPtr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                          ,0x2de,L""), bVar15)) {
    pcVar8 = (code *)swi(3);
    EVar18 = (*pcVar8)();
    return EVar18;
  }
  iVar19 = *(int *)&this->field_0x34;
  local_118 = param_3 + (longlong)*(int *)&this->field_0x44 +
                        (longlong)(int)local_118 * (longlong)iVar19;
  pFVar31 = pFVar30;
  if (param_4 != (UStruct *)0x0) {
    iVar3 = param_1->ArrayIndex;
    if ((param_5 != (uchar *)0x0) &&
       (*local_110 * iVar19 + *(int *)&this->field_0x44 <= param_4->PropertiesSize)) {
      if (((iVar3 < 0) || (*local_110 <= iVar3)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar8 = (code *)swi(3);
        EVar18 = (*pcVar8)();
        return EVar18;
      }
      pFVar31 = (FObjectProperty *)
                (param_5 +
                (longlong)*(int *)&this->field_0x44 +
                (longlong)iVar3 * (longlong)*(int *)&this->field_0x34);
    }
  }
  puVar29 = local_118;
  FVar12.StructuredArchive = local_res18.StructuredArchive;
  if (local_108 < 3) {
    uVar5 = *(ulonglong *)(*(longlong *)(*(longlong *)&this->field_0x70 + 8) + 0x18);
    if ((uVar5 >> 10 & 1) == 0) {
      if ((uVar5 >> 0x10 & 1) == 0) goto LAB_142170fe2;
      goto LAB_142170fea;
    }
  }
  else {
LAB_142170fe2:
    if ((*(uint *)(*(longlong *)&this->field_0x70 + 0x38) >> 0xc & 1) != 0) {
LAB_142170fea:
      if (local_108 < 2) {
        pFVar20 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res18);
        if (pFVar20->ArIsObjectReferenceCollector != 0) {
          pFVar20 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res18);
          (**(code **)(pFVar20->_padding_ + 0x18))(pFVar20,local_c8);
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Slot.GetArchiveState().IsObjectReferenceCollector()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                              ,0x23b,
                              L"Reference collector archive (%s) serializing with an old FLegacyFOptionPropertyCustomVersion (%d)"
                             );
          if (local_c8[0] != (void *)0x0) {
            FMemory::Free(local_c8[0]);
          }
          if (bVar15) {
            pcVar8 = (code *)swi(3);
            EVar18 = (*pcVar8)();
            return EVar18;
          }
        }
        pFVar31 = pFVar30;
        if (*(longlong *)&this->field_0x70 != 0) {
          pFVar25 = *(FFieldClass **)(*(longlong *)&this->field_0x70 + 8);
          pFVar24 = FObjectProperty::StaticClass();
          if (pFVar25 == pFVar24) goto LAB_142171135;
          pFVar25 = FClassProperty::StaticClass();
          lVar6 = *(longlong *)&this->field_0x70;
          if (*(FFieldClass **)(lVar6 + 8) == pFVar25) goto LAB_142171135;
          if (lVar6 != 0) {
            ::FName::ToString(*(FName **)(lVar6 + 8),&local_e0);
            pFVar31 = (FObjectProperty *)&DAT_00000001;
          }
        }
        FField::GetFullName((FField *)this,&local_b8);
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ValueProperty && (ValueProperty->GetClass() == FObjectProperty::StaticClass() || ValueProperty->GetClass() == FClassProperty::StaticClass())"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                            ,0x241,
                            L"Unexpected value property type when deserializing optional non-nullable property %s: %s"
                           );
        if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8.Data.AllocatorInstance.Data);
        }
        if ((pFVar31 != (FObjectProperty *)0x0) &&
           (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_e0.Data.AllocatorInstance.Data);
        }
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
LAB_142171135:
        pFVar31 = *(FObjectProperty **)&this->field_0x70;
        if (((pFVar31 == (FObjectProperty *)0x0) ||
            ((*(uint *)(*(longlong *)&pFVar31->field_0x8 + 0x18) >> 0x10 & 1) == 0)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("CastResult",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                ,0x472,L"CastFieldChecked failed with 0x%016llx"), pFVar31 = pFVar30
           , bVar15)) {
          pcVar8 = (code *)swi(3);
          EVar18 = (*pcVar8)();
          return EVar18;
        }
        (**(code **)(*(longlong *)pFVar31 + 0x200))(pFVar31,&local_100,puVar29);
        local_f0 = local_100;
        pFVar26 = (local_res18.StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar26 + 0x168))(pFVar26,&local_f0);
        (**(code **)(*(longlong *)pFVar31 + 0x200))(pFVar31,&local_f8,puVar29);
        pUVar13 = local_f0;
        pFVar26 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res18);
        FObjectProperty::PostSerializeObjectItem
                  (pFVar31,pFVar26,puVar29,local_f8,pUVar13,AllowNullValuesOnNonNullableProperty,
                   (void *)0x0);
        return Converted;
      }
    }
  }
  if (0 < local_108) {
    bVar15 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,local_118);
    pFVar20 = (FArchiveState *)(FVar12.StructuredArchive)->Formatter->Inner;
    pFVar7 = pFVar20->ActiveFPLB;
    puVar1 = (uint *)((longlong)pFVar7->StartFastPathLoadBuffer + 4);
    if (pFVar7->EndFastPathLoadBuffer < puVar1) {
      local_128 = 0;
      if (pFVar20->ArIsLoading == 0) {
        local_128 = (uint)bVar15;
      }
      (**(code **)(pFVar20->_padding_ + 0x188))(pFVar20,&local_128,4);
      if (1 < local_128) {
        FArchiveState::SetError(pFVar20);
      }
      uVar2 = local_128;
      if (pFVar20->ArIsLoading != 0) goto LAB_142171375;
    }
    else {
      uVar2 = *(uint *)pFVar7->StartFastPathLoadBuffer;
      pFVar7->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_142171375:
      bVar15 = uVar2 != 0;
    }
    if (bVar15 != false) {
      pvVar21 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          ((FOptionalPropertyLayout *)&this->field_0x70,puVar29);
      plVar23 = *(longlong **)&this->field_0x70;
      pcVar8 = *(code **)(*plVar23 + 0xc0);
      if ((pFVar31 != (FObjectProperty *)0x0) &&
         (bVar15 = FOptionalPropertyLayout::IsSet
                             ((FOptionalPropertyLayout *)&this->field_0x70,pFVar31), bVar15)) {
        pFVar30 = pFVar31;
      }
      (*pcVar8)(plVar23,FVar12.StructuredArchive,pvVar21,pFVar30);
      return Converted;
    }
    goto LAB_1421712d6;
  }
  bVar15 = false;
  pFVar20 = (FArchiveState *)(local_res18.StructuredArchive)->Formatter->Inner;
  pFVar7 = pFVar20->ActiveFPLB;
  puVar1 = (uint *)((longlong)pFVar7->StartFastPathLoadBuffer + 4);
  if (pFVar7->EndFastPathLoadBuffer < puVar1) {
    local_120[0] = 0;
    (**(code **)(pFVar20->_padding_ + 0x188))(pFVar20,local_120,4);
    if (1 < local_120[0]) {
      FArchiveState::SetError(pFVar20);
    }
    uVar2 = local_120[0];
    if (pFVar20->ArIsLoading != 0) goto LAB_142171276;
  }
  else {
    uVar2 = *(uint *)pFVar7->StartFastPathLoadBuffer;
    pFVar7->StartFastPathLoadBuffer = (uchar *)puVar1;
LAB_142171276:
    bVar15 = uVar2 != 0;
  }
  local_f8 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                       ((FOptionalPropertyLayout *)&this->field_0x70,puVar29);
  plVar23 = *(longlong **)&this->field_0x70;
  local_100 = *(UObject **)(*plVar23 + 0xc0);
  if ((pFVar31 != (FObjectProperty *)0x0) &&
     (bVar16 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,pFVar31),
     bVar16)) {
    pFVar30 = pFVar31;
  }
  (*(code *)local_100)(plVar23,FVar12.StructuredArchive,local_f8,pFVar30);
  if (bVar15) {
    return Converted;
  }
LAB_1421712d6:
  FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)&this->field_0x70,puVar29);
  return Converted;
}

// CopyValuesInternal @ 142174c00

void __thiscall
FOptionalProperty::CopyValuesInternal
          (FOptionalProperty *this,void *param_1,void *param_2,int param_3)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  char cVar4;
  void *_Src;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (0 < param_3) {
    this_00 = &this->field_0x70;
    lVar7 = (longlong)(*(int *)&this->field_0x34 * *(int *)&this->field_0x30);
    uVar6 = (ulonglong)(uint)param_3;
    do {
      bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_2);
      _Src = (void *)0x0;
      if (bVar3) {
        _Src = param_2;
      }
      cVar4 = (**(code **)(**(longlong **)this_00 + 0x1a8))();
      if (_Src == (void *)0x0) {
        lVar5 = **(longlong **)this_00;
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(lVar5 + 0x1a8))();
          if ((cVar4 != '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                 ,0xa0,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)this_00;
          lVar5 = (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]);
          if (*(char *)(lVar5 + (longlong)param_1) != '\0') {
            if ((plVar1[7] & 0x1000000000U) == 0) {
              (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
            }
            *(undefined1 *)(lVar5 + (longlong)param_1) = 0;
          }
        }
        else {
          (**(code **)(lVar5 + 0x1c0))(*(longlong **)this_00,param_1);
        }
      }
      else {
        if (cVar4 == '\0') {
          cVar4 = (**(code **)(**(longlong **)this_00 + 0x1a8))();
          if ((cVar4 != '\0') &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                                 ,0xa0,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          plVar1 = *(longlong **)this_00;
          lVar5 = (longlong)(*(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6]);
          if (*(char *)(lVar5 + (longlong)param_1) == '\0') {
            if (((uint)plVar1[7] >> 9 & 1) == 0) {
              (**(code **)(*plVar1 + 0x150))(plVar1,param_1);
            }
            else {
              memset(param_1,0,
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
            }
            *(undefined1 *)(lVar5 + (longlong)param_1) = 1;
          }
        }
        else {
          bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_1);
          if (!bVar3) {
            if (((*(longlong **)this_00)[7] & 0x1000000000U) == 0) {
              (**(code **)(**(longlong **)this_00 + 0x138))();
            }
            plVar1 = *(longlong **)this_00;
            if (((uint)plVar1[7] >> 9 & 1) == 0) {
              (**(code **)(*plVar1 + 0x150))(plVar1,param_1);
            }
            else {
              memset(param_1,0,
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
            }
          }
        }
        plVar1 = *(longlong **)this_00;
        if (param_1 != _Src) {
          if (((uint)plVar1[7] >> 0x1e & 1) == 0) {
            (**(code **)(*plVar1 + 0xf0))(plVar1,param_1,_Src,1);
          }
          else {
            memcpy(param_1,_Src,(longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      param_1 = (void *)((longlong)param_1 + lVar7);
      param_2 = (void *)((longlong)param_2 + lVar7);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}

// DestroyValueInternal @ 142175660

void __thiscall FOptionalProperty::DestroyValueInternal(FOptionalProperty *this,void *param_1)

{
  undefined1 *this_00;
  longlong *plVar1;
  char cVar2;
  
  this_00 = &this->field_0x70;
  FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)this_00,param_1);
  cVar2 = (**(code **)(**(longlong **)this_00 + 0x1a8))();
  if ((cVar2 != '\0') && (plVar1 = *(longlong **)this_00, (plVar1[7] & 0x1000000000U) == 0)) {
    (**(code **)(*plVar1 + 0x138))(plVar1,param_1);
  }
  return;
}

// ExportText_Internal @ 142176d80

void __thiscall
FOptionalProperty::ExportText_Internal
          (FOptionalProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  int *piVar1;
  longlong *plVar2;
  ForAnyElementType _Src;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  wchar_t *pwVar6;
  void *pvVar7;
  
  if (param_3 == Container) {
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  ::FString::AppendChars(param_1,L"(",1);
  bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,param_2);
  pvVar7 = (void *)0x0;
  if (bVar3) {
    pvVar7 = param_2;
  }
  if (pvVar7 != (void *)0x0) {
    plVar2 = *(longlong **)&this->field_0x70;
    if (param_4 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,param_4);
      pvVar5 = (void *)0x0;
      if (bVar3) {
        pvVar5 = param_4;
      }
    }
    (**(code **)(*plVar2 + 0xe0))(plVar2,param_1,pvVar7,0,pvVar5,param_5,param_6,param_7);
    if ((param_1->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp(pwVar6,L"(");
    _Src = InitString.Data.AllocatorInstance;
    if (iVar4 == 0) {
      if (param_1 == &InitString) {
        return;
      }
      piVar1 = &(param_1->Data).ArrayMax;
      iVar4 = InitString.Data.ArrayNum;
      (param_1->Data).ArrayNum = iVar4;
      if ((iVar4 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
        return;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar4,*piVar1,(ForAnyElementType *)param_1,iVar4,piVar1);
      if (iVar4 == 0) {
        return;
      }
      memcpy((param_1->Data).AllocatorInstance.Data,_Src.Data,(longlong)iVar4 * 2);
      return;
    }
  }
  ::FString::AppendChars(param_1,L")",1);
  return;
}

// FinishDestroyInternal @ 142178780

void __thiscall FOptionalProperty::FinishDestroyInternal(FOptionalProperty *this,void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (*(longlong *)&this->field_0x70 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x1d1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,param_1);
  pvVar4 = (void *)0x0;
  if (bVar3) {
    pvVar4 = param_1;
  }
  if ((pvVar4 != (void *)0x0) &&
     (plVar1 = *(longlong **)&this->field_0x70, (plVar1[7] & 0x1040000000U) == 0)) {
    (**(code **)(*plVar1 + 0x148))();
  }
  return;
}

// GetCPPMacroType @ 142179950

FString * __thiscall
FOptionalProperty::GetCPPMacroType
          (FOptionalProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  void *local_18 [2];
  
  pFVar2 = (FString *)
           (**(code **)(**(longlong **)&this->field_0x70 + 0x68))
                     (*(longlong **)&this->field_0x70,local_18,0,0);
  if (param_1 != pFVar2) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (param_1->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  ::FString::FString(__return_storage_ptr__,L"TOPTIONAL");
  return __return_storage_ptr__;
}

// GetCPPType @ 14217b180

FString * __thiscall
FOptionalProperty::GetCPPType
          (FOptionalProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  FScriptContainerElement *pFVar1;
  FString local_38;
  void *local_28;
  undefined8 local_20;
  void *local_18 [2];
  
  if (param_1 != (FString *)0x0) {
    local_28 = (void *)0x0;
    local_20 = 0;
    (**(code **)(**(longlong **)&this->field_0x70 + 0x68))
              (*(longlong **)&this->field_0x70,local_18,&local_28,param_2 & 0xfffffffd);
    ::FString::PrintfImpl(&local_38,L"<%s%s>");
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
    if (local_18[0] != (void *)0x0) {
      FMemory::Free(local_18[0]);
    }
    if (local_28 != (void *)0x0) {
      FMemory::Free(local_28);
    }
  }
  ::FString::FString(__return_storage_ptr__,L"TOptional");
  return __return_storage_ptr__;
}

// GetFieldSize @ 14217bcb0

ulong64 __thiscall FOptionalProperty::GetFieldSize(FOptionalProperty *this)

{
  return 0x78;
}

// GetInnerFieldByName @ 14217bf20

FField * __thiscall FOptionalProperty::GetInnerFieldByName(FOptionalProperty *this,FName *param_1)

{
  void *pvVar1;
  bool bVar2;
  FName FVar3;
  
  pvVar1 = *(void **)&this->field_0x70;
  bVar2 = IsThisNotNull(pvVar1,"FField::GetFName");
  if (bVar2) {
    FVar3 = *(FName *)((longlong)pvVar1 + 0x20);
  }
  else {
    FVar3.ComparisonIndex.Value = 0;
    FVar3.Number = 0;
  }
  if (FVar3 == *param_1) {
    return *(FField **)&this->field_0x70;
  }
  return (FField *)0x0;
}

// GetInnerFields @ 14217c1d0

void __thiscall
FOptionalProperty::GetInnerFields
          (FOptionalProperty *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_18 [2];
  
  local_18[0] = *(undefined8 *)&this->field_0x70;
  pFVar1 = (param_1->AllocatorInstance).Data;
  if ((pFVar1 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar1 + (longlong)param_1->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
                    /* WARNING: Could not recover jumptable at 0x00014217c28f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x70 + 0x58))(*(longlong **)&this->field_0x70,param_1);
  return;
}

// GetMinAlignment @ 14217c590

int __thiscall FOptionalProperty::GetMinAlignment(FOptionalProperty *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014217c597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(**(longlong **)&this->field_0x70 + 0x168))();
  return iVar1;
}

// GetPreloadDependencies @ 14217d4e0

void __thiscall
FOptionalProperty::GetPreloadDependencies
          (FOptionalProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FField::GetPreloadDependencies((FField *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014217d509. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)&this->field_0x70 + 0x20))(*(longlong **)&this->field_0x70,param_1);
  return;
}

// GetValueTypeHashInternal @ 14217deb0

uint __thiscall FOptionalProperty::GetValueTypeHashInternal(FOptionalProperty *this,void *param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  
  bVar1 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,param_1);
  pvVar3 = (void *)0x0;
  if (bVar1) {
    pvVar3 = param_1;
  }
  if (pvVar3 != (void *)0x0) {
    uVar2 = FProperty::GetValueTypeHash(*(FProperty **)&this->field_0x70,pvVar3);
    return uVar2;
  }
  return 0;
}

// HasIntrusiveUnsetOptionalState @ 14217e010

bool __thiscall FOptionalProperty::HasIntrusiveUnsetOptionalState(FOptionalProperty *this)

{
  return false;
}

// Identical @ 14217ead0

bool __thiscall
FOptionalProperty::Identical(FOptionalProperty *this,void *param_1,void *param_2,uint param_3)

{
  undefined1 *this_00;
  bool bVar1;
  undefined1 uVar2;
  bool bVar3;
  
  this_00 = &this->field_0x70;
  if (param_2 == (void *)0x0) {
    bVar1 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_1);
    uVar2 = !bVar1;
  }
  else {
    bVar1 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_1);
    bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_2);
    if (bVar1 == bVar3) {
      if (bVar1) {
        uVar2 = (**(code **)(**(longlong **)this_00 + 0xb8))
                          (*(longlong **)this_00,param_1,param_2,param_3);
      }
      else {
        uVar2 = 1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return (bool)uVar2;
}

// ImportText_Internal @ 142181860

wchar_t * __thiscall
FOptionalProperty::ImportText_Internal
          (FOptionalProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  wchar_t *pwVar1;
  int iVar2;
  FString *pFVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  bool bVar6;
  FString local_18;
  
  if (param_3 == Container) {
    param_2 = (void *)((longlong)*(int *)&this->field_0x44 + (longlong)param_2);
  }
  if (param_1 != (wchar_t *)0x0) {
    pFVar3 = ::FString::FString(&local_18,param_1);
    iVar2 = (pFVar3->Data).ArrayNum;
    if (iVar2 == InitString.Data.ArrayNum) {
      if (iVar2 < 2) {
        bVar6 = true;
      }
      else {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar3->Data).AllocatorInstance.Data,
                           (wchar_t *)InitString.Data.AllocatorInstance.Data);
        bVar6 = iVar2 == 0;
      }
    }
    else {
      bVar6 = InitString.Data.ArrayNum + iVar2 == 1;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)&this->field_0x70,param_2);
      FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                ((FOptionalPropertyLayout *)&this->field_0x70,param_2);
      return param_1;
    }
    pwVar5 = param_1 + 1;
    if (*param_1 == L'(') {
      iVar2 = iswspace(*pwVar5);
      while (iVar2 != 0) {
        pwVar1 = pwVar5 + 1;
        pwVar5 = pwVar5 + 1;
        iVar2 = iswspace(*pwVar1);
      }
      if (*pwVar5 == L')') {
        FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)&this->field_0x70,param_2);
      }
      else {
        pvVar4 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                           ((FOptionalPropertyLayout *)&this->field_0x70,param_2);
        pwVar5 = FProperty::ImportText_Direct
                           (*(FProperty **)&this->field_0x70,pwVar5,pvVar4,param_4,param_5,param_6);
        if (pwVar5 == (wchar_t *)0x0) {
          FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)&this->field_0x70,param_2);
          return (wchar_t *)0x0;
        }
      }
      iVar2 = iswspace(*pwVar5);
      while (iVar2 != 0) {
        pwVar1 = pwVar5 + 1;
        pwVar5 = pwVar5 + 1;
        iVar2 = iswspace(*pwVar1);
      }
      if (*pwVar5 != L')') {
        InitString.Data.ArrayNum = InitString.Data.ArrayNum;
        InitString.Data.ArrayMax = InitString.Data.ArrayMax;
        return (wchar_t *)0x0;
      }
      InitString.Data.ArrayNum = InitString.Data.ArrayNum;
      InitString.Data.ArrayMax = InitString.Data.ArrayMax;
      return pwVar5 + 1;
    }
  }
  return (wchar_t *)0x0;
}

// InitializeValueInternal @ 142182bc0

void __thiscall FOptionalProperty::InitializeValueInternal(FOptionalProperty *this,void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = (**(code **)(**(longlong **)&this->field_0x70 + 0x1a8))();
  lVar1 = **(longlong **)&this->field_0x70;
  if (cVar3 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142182bf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x1b0))(*(longlong **)&this->field_0x70,param_1);
    return;
  }
  cVar3 = (**(code **)(lVar1 + 0x1a8))();
  if (cVar3 != '\0') {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                       ,0xa0,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)
   ((longlong)
    (*(int *)(*(longlong *)&this->field_0x70 + 0x34) *
    *(int *)(*(longlong *)&this->field_0x70 + 0x30)) + (longlong)param_1) = 0;
  return;
}

// InstanceSubobjects @ 1421838e0

void __thiscall
FOptionalProperty::InstanceSubobjects
          (FOptionalProperty *this,void *param_1,void *param_2,TNotNull<UObject_*> param_3,
          FObjectInstancingGraph *param_4)

{
  undefined1 *this_00;
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  if (param_1 != (void *)0x0) {
    this_00 = &this->field_0x70;
    bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_1);
    if ((bVar3) &&
       ((plVar1 = *(longlong **)this_00, (plVar1[7] & 0x8000080000U) != 0 ||
        (*(char *)(*(longlong *)&(param_3.Val)->field_0x10 + 0x128) != '\0')))) {
      pcVar2 = *(code **)(*plVar1 + 0x160);
      if (param_2 == (void *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        bVar3 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_2);
        pvVar4 = (void *)0x0;
        if (bVar3) {
          pvVar4 = param_2;
        }
      }
      (*pcVar2)(plVar1,param_1,pvVar4,param_3.Val,param_4);
    }
  }
  return;
}

// LinkInternal @ 142185140

void __thiscall FOptionalProperty::LinkInternal(FOptionalProperty *this,FArchive *param_1)

{
  FProperty *this_00;
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  
  this_00 = *(FProperty **)&this->field_0x70;
  (**(code **)(this_00->_padding_ + 0xa8))(this_00);
  FProperty::SetupOffset(this_00);
  cVar4 = (**(code **)(**(longlong **)&this->field_0x70 + 0x1a8))();
  plVar1 = *(longlong **)&this->field_0x70;
  if (cVar4 == '\0') {
    iVar6 = (**(code **)(*plVar1 + 0x168))();
    cVar4 = (**(code **)(**(longlong **)&this->field_0x70 + 0x1a8))();
    if (cVar4 != '\0') {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ValueProperty->HasIntrusiveUnsetOptionalState()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                         ,0xa0,L"");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = *(int *)(*(longlong *)&this->field_0x70 + 0x34) *
            *(int *)(*(longlong *)&this->field_0x70 + 0x30) + iVar6 & -iVar6;
  }
  else {
    uVar8 = *(int *)((longlong)plVar1 + 0x34) * (int)plVar1[6];
  }
  FProperty::SetElementSize((FProperty *)this,uVar8);
  cVar4 = (**(code **)(**(longlong **)&this->field_0x70 + 0x1a8))();
  if (cVar4 == '\0') {
    *(ulonglong *)&this->field_0x38 = *(ulonglong *)&this->field_0x38 | 0x200;
  }
  lVar2 = *(longlong *)&this->field_0x70;
  uVar7 = *(ulonglong *)(lVar2 + 0x38) & 0x8001040000000 | *(ulonglong *)&this->field_0x38;
  *(ulonglong *)&this->field_0x38 = uVar7;
  if ((*(ulonglong *)(lVar2 + 0x38) & 0x8000080000) != 0) {
    *(ulonglong *)&this->field_0x38 = uVar7 | 0x8000000000;
  }
  return;
}

// LoadTypeName @ 1421864d0

bool __thiscall
FOptionalProperty::LoadTypeName
          (FOptionalProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  FField *pFVar6;
  FName local_res20;
  FFieldObjectUnion local_28;
  FName local_20;
  
  bVar2 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (bVar2) {
    uVar5 = 0;
    if (0 < *(int *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1.Index >> 0xd] + 8
                    + (ulonglong)(param_1.Index & 0x1fff) * 0xc)) {
      uVar5 = param_1.Index + 1;
    }
    bVar2 = IsThisNotNull(this,"FField::GetFName");
    if (bVar2) {
      local_res20.ComparisonIndex.Value = *(uint *)&this->field_0x20;
      local_res20.Number = *(uint *)&this->field_0x24;
    }
    else {
      local_res20.ComparisonIndex.Value = 0;
      local_res20.Number = 0;
    }
    local_28 = (FFieldObjectUnion)this;
    if (((ulonglong)this & 1) != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    local_20 = *(FName *)((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)(int)uVar5 >> 0xd] +
                         (ulonglong)(uVar5 & 0x1fff) * 0xc);
    pFVar6 = FField::TryConstruct(&local_20,(FFieldVariant *)&local_28,&local_res20,RF_NoFlags);
    if (pFVar6 != (FField *)0x0) {
      if (((uint)(int)pFVar6->ClassPrivate->CastFlags >> 0xf & 1) != 0) {
        cVar4 = (**(code **)(pFVar6->_padding_ + 0x188))(pFVar6,uVar5,param_2);
        if (cVar4 != '\0') {
          *(FField **)&this->field_0x70 = pFVar6;
          return true;
        }
      }
      (**(code **)(pFVar6->_padding_ + 8))(pFVar6,1);
    }
  }
  return false;
}

// NetSerializeItem @ 142186d10

bool __thiscall
FOptionalProperty::NetSerializeItem
          (FOptionalProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  undefined1 *this_00;
  char cVar1;
  void *pvVar2;
  byte bVar3;
  char local_res8 [8];
  
  this_00 = &this->field_0x70;
  cVar1 = '\x01';
  bVar3 = param_1->field_0x28 & 1;
  local_res8[0] = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_3);
  (**(code **)(*(longlong *)param_1 + 400))(param_1,local_res8,1);
  if (local_res8[0] != '\0') {
    pvVar2 = param_3;
    if (bVar3 != 0) {
      pvVar2 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                         ((FOptionalPropertyLayout *)this_00,param_3);
    }
    cVar1 = (**(code **)(**(longlong **)this_00 + 200))
                      (*(longlong **)this_00,param_1,param_2,pvVar2,param_4);
  }
  if ((bVar3 != 0) && ((cVar1 == '\0' || (local_res8[0] == '\0')))) {
    FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)this_00,param_3);
  }
  return (bool)cVar1;
}

// PostDuplicate @ 142187340

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall FOptionalProperty::PostDuplicate(FOptionalProperty *this,FField *param_1)

{
  code *pcVar1;
  bool bVar2;
  FField *pFVar3;
  FOptionalProperty *local_res10;
  
  local_res10 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pFVar3 = FField::Duplicate(param_1[2].Owner.Container.Field,(FFieldVariant)&local_res10,(FName)0x0
                             ,RF_AllocatedInSharedPage|RF_MirroredGarbage|RF_MigratingAsset|
                              RF_HasExternalPackage|RF_WillBeLoaded|RF_ImmutableDefaultObject|
                              RF_NonPIEDuplicateTransient|RF_StrongRefOnFrame|RF_DuplicateTransient|
                              RF_InheritableComponentTemplate|RF_LoadCompleted|
                              RF_TextExportTransient|RF_WasLoaded|RF_DefaultSubObject|
                              RF_BeingRegenerated|RF_FinishDestroyed|RF_BeginDestroyed|
                              RF_NewerVersionExists|RF_NeedPostLoadSubobjects|RF_NeedPostLoad|
                              RF_KeepForCooker|RF_NeedLoad|RF_NeedInitialization|RF_TagGarbageTemp|
                              RF_MarkAsRootSet|RF_Transient|RF_ArchetypeObject|RF_ClassDefaultObject
                              |RF_Transactional|RF_MarkAsNative|RF_Standalone|RF_Public,
                             PendingConstruction|RootSet|Unreachable|AsyncLoadingPhase2|Async|Native
                             |ClusterRoot|ReachableInCluster|AsyncLoadingPhase1|Garbage|LoaderImport
                             |AutoRTFMConstructionAborted|ReachabilityFlag2|ReachabilityFlag1|
                             ReachabilityFlag0);
  if (((pFVar3 == (FField *)0x0) || (((uint)(int)pFVar3->ClassPrivate->CastFlags >> 0xf & 1) == 0))
     && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"),
        pFVar3 = (FField *)0x0, bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(FField **)&this->field_0x70 = pFVar3;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// ResolveVisitedPathInfo @ 142189780

void * __thiscall
FOptionalProperty::ResolveVisitedPathInfo
          (FOptionalProperty *this,void *param_1,FPropertyVisitorInfo *param_2)

{
  bool bVar1;
  void *pvVar2;
  
  if (param_2->Property == *(FProperty **)&this->field_0x70) {
    bVar1 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)&this->field_0x70,param_1);
    pvVar2 = (void *)0x0;
    if (bVar1) {
      pvVar2 = param_1;
    }
    return pvVar2;
  }
  return (void *)0x0;
}

// SameType @ 1421899c0

bool __thiscall FOptionalProperty::SameType(FOptionalProperty *this,FProperty *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  
  bVar3 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar3) && (plVar1 = *(longlong **)&this->field_0x70, plVar1 != (longlong *)0x0)) {
    pcVar2 = *(code **)(*plVar1 + 0x1a0);
    if ((param_1 == (FProperty *)0x0) ||
       ((*(ulonglong *)(param_1->_padding_ + 0x18) & 0x100000000000000) == 0)) {
      param_1 = (FProperty *)0x0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x480,L"CastFieldChecked failed with 0x%016llx");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    cVar5 = (*pcVar2)(plVar1,param_1[1]._padding_);
    if (cVar5 != '\0') {
      return true;
    }
  }
  return false;
}

// SaveTypeName @ 142189cf0

void __thiscall
FOptionalProperty::SaveTypeName(FOptionalProperty *this,FPropertyTypeNameBuilder *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x2a4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1->Nodes).ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Nodes.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                       ,0x1ca,L"A type name must be added prior to setting type parameters.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  param_1->ActiveIndex = (param_1->Nodes).ArrayNum + -1;
  (**(code **)(*plVar1 + 400))(plVar1,param_1);
  UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  return;
}

// Serialize @ 14218a680

void __thiscall FOptionalProperty::Serialize(FOptionalProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FOptionalProperty *local_res8;
  
  FProperty::Serialize((FProperty *)this,param_1);
  local_res8 = this;
  if (((ulonglong)this & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsUObject()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                       ,0x180,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SerializeSingleField<FProperty>
            (param_1,(FProperty **)&this->field_0x70,(FFieldVariant)&local_res8);
  return;
}

// SerializeItem @ 14218e810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOptionalProperty::SerializeItem
          (FOptionalProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  undefined1 *this_00;
  FArchive *pFVar1;
  int *piVar2;
  byte *pbVar3;
  code *pcVar4;
  ulonglong uVar5;
  FSlotBase FVar6;
  uchar *puVar7;
  bool bVar8;
  char cVar9;
  EPropertyTagExtension EVar10;
  FNameEntryId FVar11;
  FPropertyTypeName FVar12;
  int iVar13;
  FArchive *this_01;
  FArchiveState *pFVar14;
  FArchive *pFVar15;
  undefined4 extraout_var;
  FProperty *pFVar16;
  longlong lVar17;
  longlong *plVar18;
  FPropertyTypeName *pFVar19;
  undefined4 extraout_var_00;
  longlong lVar20;
  ForElementType<UE::FPropertyTypeNameNode> FVar21;
  byte bVar22;
  FSlotBase local_res10 [3];
  undefined1 auStackY_2f8 [32];
  byte local_2b8;
  byte local_2b7;
  bool local_2b6 [6];
  FSlotBase local_2b0;
  FSlotBase local_2a8;
  FArchiveFieldName local_2a0;
  uchar *local_298;
  uchar *local_290;
  undefined8 local_288;
  FPropertyTag local_278;
  FPropertyTag local_1f8;
  undefined8 local_178;
  uchar *local_170;
  undefined1 local_168 [4];
  FPropertyTypeName local_164;
  undefined1 local_160 [4];
  FName local_15c;
  undefined1 local_154 [12];
  FString local_148;
  FString local_138;
  FPropertyTypeNameBuilder local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  local_290 = param_2;
  local_178 = this;
  this_01 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  FVar6.StructuredArchive = local_res10[0].StructuredArchive;
  this_00 = &this->field_0x70;
  bVar22 = this_01->field_0x28 & 1;
  bVar8 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_2);
  bVar8 = FBinaryArchiveFormatter::TryEnterField
                    ((FVar6.StructuredArchive)->Formatter,local_2a0,bVar8);
  if (bVar8) {
    if (param_3 == (void *)0x0) {
      local_298 = (uchar *)0x0;
    }
    else {
      bVar8 = FOptionalPropertyLayout::IsSet((FOptionalPropertyLayout *)this_00,param_3);
      local_298 = (uchar *)0x0;
      if (bVar8) {
        local_298 = param_3;
      }
    }
    puVar7 = local_298;
    FVar12.Index = 0;
    pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res10);
    if ((pFVar14->ArUseUnversionedPropertySerialization != '\0') ||
       (0x3f3 < (int)((ulonglong)*(undefined8 *)&this_01->field_0x40 >> 0x20))) {
      if (bVar22 != 0) {
        param_2 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                            ((FOptionalPropertyLayout *)this_00,param_2);
      }
      if ((*(longlong *)this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (**(code **)(**(longlong **)this_00 + 0xc0))
                (*(longlong **)this_00,FVar6.StructuredArchive,param_2,puVar7);
      return;
    }
    if (bVar22 == 0) {
      if ((*(longlong *)this_00 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\PropertyOptional.h"
                             ,0x18,L"Expected ValueProperty to be initialized"), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = *(FProperty **)this_00;
      local_1f8.TypeName.Index = 0;
      local_1f8.Type.ComparisonIndex.Value = 0;
      local_1f8.Type.Number = 0;
      local_1f8.Prop = pFVar16;
      bVar8 = IsThisNotNull(pFVar16,"FField::GetFName");
      if (bVar8) {
        local_1f8.Name = (FName)pFVar16->_padding_;
      }
      else {
        local_1f8.Name.ComparisonIndex.Value = 0;
        local_1f8.Name.Number = 0;
      }
      local_1f8.StructName.ComparisonIndex.Value = 0;
      local_1f8.StructName.Number = 0;
      local_1f8.EnumName.ComparisonIndex.Value = 0;
      local_1f8.EnumName.Number = 0;
      local_1f8.InnerType.ComparisonIndex.Value = 0;
      local_1f8.InnerType.Number = 0;
      local_1f8.ValueType.ComparisonIndex.Value = 0;
      local_1f8.ValueType.Number = 0;
      local_1f8.Size = 0;
      local_1f8.ArrayIndex = 0;
      local_1f8.SizeOffset = -1;
      local_1f8.StructGuid.A = 0;
      local_1f8.StructGuid.B = 0;
      local_1f8.StructGuid.C = 0;
      local_1f8.StructGuid.D = 0;
      local_1f8.PropertyGuid.A = 0;
      local_1f8.PropertyGuid.B = 0;
      local_1f8.PropertyGuid.C = 0;
      local_1f8.PropertyGuid.D = 0;
      local_1f8.HasPropertyGuid = '\0';
      local_1f8.BoolVal = '\0';
      local_1f8.SerializeType = Unknown;
      local_1f8.OverrideOperation = None;
      local_1f8.bExperimentalOverridableLogic = false;
      pFVar19 = UE::FPropertyTypeName::FPropertyTypeName(&local_164,pFVar16);
      FPropertyTag::SetType(&local_1f8,(FPropertyTypeName)pFVar19->Index);
      if ((pFVar16 != (FProperty *)0x0) && ((*(uint *)(pFVar16->_padding_ + 0x18) >> 0x11 & 1) != 0)
         ) {
        if (((char)pFVar16[1]._padding_ == '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("FieldSize != 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                               ,0xa4b,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_1f8.BoolVal =
             (*(byte *)((longlong)&pFVar16[1]._padding_ + 3) &
             local_290[*(byte *)((longlong)&pFVar16[1]._padding_ + 1)]) != 0;
      }
      local_2a8.StructuredArchive = FVar6.StructuredArchive;
      pFVar15 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_2a8);
      local_178 = *(FOptionalProperty **)&pFVar15->field_0x40;
      if (((pFVar15->field_0x28 & 0x40) != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnderlyingArchive.GetArchiveState().UseUnversionedPropertySerialization()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                             ,0x1ba,L""), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((((pFVar15->field_0x28 & 4) != 0) && (local_1f8.Prop == (FProperty *)0x0)) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!UnderlyingArchive.IsSaving() || Tag.GetProperty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                             ,0x1bb,
                             L"FPropertyTag must be constructed with a valid property when used for saving data!"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_178._4_4_ < 0x3f4) {
        LoadPropertyTagNoFullType((FStructuredArchiveSlot)local_2a8.StructuredArchive,&local_1f8);
      }
      else {
        if (((pFVar15->field_0x28 & 4) != 0) && (local_1f8.SerializeType != Skipped)) {
          cVar9 = (**(code **)((local_1f8.Prop)->_padding_ + 0x180))(local_1f8.Prop,pFVar15);
          local_1f8.SerializeType = (cVar9 != '\0') + Property;
        }
        pFVar1 = (local_2a8.StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&local_1f8.Name);
        if (local_1f8.Name != (FName)0x0) {
          UE::operator<<((FStructuredArchiveSlot)local_2a8.StructuredArchive,&local_1f8.TypeName);
          if ((pFVar15->field_0x28 & 1) != 0) {
            FPropertyTag::SetType(&local_1f8,local_1f8.TypeName);
          }
          if ((pFVar15->field_0x28 & 4) != 0) {
            local_1f8.SizeOffset = (**(code **)(*(longlong *)pFVar15 + 0x28))(pFVar15);
          }
          pFVar1 = (local_2a8.StructuredArchive)->Formatter->Inner;
          piVar2 = (int *)**(undefined8 **)&pFVar1->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar2 + 1) {
            if ((pFVar1->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_1f8.Size,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)&local_1f8.Size);
            }
          }
          else {
            local_1f8.Size = *piVar2;
            **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
          }
          local_2b7 = 0;
          EVar10 = CalculatePropertyExtensionFlags(pFVar15,&local_1f8);
          if ((pFVar15->field_0x28 & 4) != 0) {
            if (local_1f8.ArrayIndex != 0) {
              local_2b7 = local_2b7 | 1;
            }
            if (local_1f8.HasPropertyGuid != '\0') {
              local_2b7 = 2;
            }
            if (EVar10 != NoExtension) {
              local_2b7 = local_2b7 | 4;
            }
            if (local_1f8.SerializeType == BinaryOrNative) {
              local_2b7 = local_2b7 | 8;
            }
            else if (local_1f8.SerializeType == Skipped) {
              local_2b7 = local_2b7 | 0x20;
            }
            if ((local_1f8.BoolVal != '\0') &&
               (uVar5 = CONCAT44(local_1f8.Type.Number,local_1f8.Type.ComparisonIndex.Value),
               FVar11 = FNameEntryId::FromValidEName((EName)local_160),
               uVar5 == *(uint *)CONCAT44(extraout_var_00,FVar11.Value))) {
              local_2b7 = local_2b7 | 0x10;
            }
          }
          pFVar1 = (local_2a8.StructuredArchive)->Formatter->Inner;
          pbVar3 = (byte *)**(undefined8 **)&pFVar1->field_0x8;
          if ((byte *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pbVar3 + 1) {
            (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_2b7,1);
          }
          else {
            local_2b7 = *pbVar3;
            **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
          }
          if ((pFVar15->field_0x28 & 1) != 0) {
            local_1f8._112_4_ = CONCAT31(local_1f8._113_3_,local_2b7 >> 1) & 0xffffff01;
            if ((local_2b7 & 0x20) == 0) {
              local_1f8._112_4_ =
                   CONCAT13(local_1f8.OverrideOperation,CONCAT12(local_2b7 >> 3,local_1f8._112_2_))
                   & 0xff01ffff | 0x20000;
            }
            else {
              local_1f8.SerializeType = Skipped;
            }
            local_1f8._112_4_ =
                 CONCAT22(local_1f8._114_2_,CONCAT11(local_2b7 >> 4,local_1f8.HasPropertyGuid)) &
                 0xffff01ff;
          }
          if ((local_2b7 & 1) == 0) {
            local_1f8.ArrayIndex = 0;
          }
          else {
            pFVar15 = (local_2a8.StructuredArchive)->Formatter->Inner;
            piVar2 = (int *)**(undefined8 **)&pFVar15->field_0x8;
            if ((int *)(*(undefined8 **)&pFVar15->field_0x8)[1] < piVar2 + 1) {
              if ((pFVar15->field_0x2a & 1) == 0) {
                (**(code **)(*(longlong *)pFVar15 + 0x188))(pFVar15,&local_1f8.ArrayIndex,4);
              }
              else {
                FArchive::SerializeByteOrderSwapped(pFVar15,(uint *)&local_1f8.ArrayIndex);
              }
            }
            else {
              local_1f8.ArrayIndex = *piVar2;
              **(longlong **)&pFVar15->field_0x8 = **(longlong **)&pFVar15->field_0x8 + 4;
            }
          }
          if ((local_2b7 & 2) != 0) {
            ::operator<<((FStructuredArchiveSlot)local_2a8.StructuredArchive,&local_1f8.PropertyGuid
                        );
          }
          if ((local_2b7 & 4) != 0) {
            SerializePropertyExtensions
                      ((FStructuredArchiveSlot)local_2a8.StructuredArchive,EVar10,&local_1f8);
          }
        }
      }
      lVar17 = (**(code **)(*(longlong *)this_01 + 0x28))(this_01);
      pFVar16 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
      FPropertyTag::SerializeTaggedProperty
                (&local_1f8,(FStructuredArchiveSlot)FVar6.StructuredArchive,pFVar16,local_290,
                 local_298);
      lVar20 = (**(code **)(*(longlong *)this_01 + 0x28))(this_01);
      iVar13 = (int)(lVar20 - lVar17);
      if ((lVar20 - lVar17 != (longlong)iVar13) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar8
         )) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (iVar13 < 1) {
        return;
      }
      local_1f8.Size = iVar13;
      (**(code **)(*(longlong *)this_01 + 0x1b8))(this_01,local_1f8.SizeOffset);
      plVar18 = *(longlong **)&this_01->field_0x8;
      if ((int *)*plVar18 + 1 <= (int *)plVar18[1]) {
        local_1f8.Size = *(int *)*plVar18;
        *plVar18 = *plVar18 + 4;
        (**(code **)(*(longlong *)this_01 + 0x1b8))(this_01,lVar20);
        return;
      }
      if ((this_01->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_01 + 0x188))(this_01,&local_1f8.Size,4);
        (**(code **)(*(longlong *)this_01 + 0x1b8))(this_01,lVar20);
        return;
      }
      FArchive::SerializeByteOrderSwapped(this_01,(uint *)&local_1f8.Size);
      (**(code **)(*(longlong *)this_01 + 0x1b8))(this_01,lVar20);
      return;
    }
    local_278.Prop = (FProperty *)0x0;
    local_278.TypeName.Index = 0;
    local_278.Type.ComparisonIndex.Value = 0;
    local_278.Type.Number = 0;
    local_278.Name.ComparisonIndex.Value = 0;
    local_278.Name.Number = 0;
    local_278.StructName.ComparisonIndex.Value = 0;
    local_278.StructName.Number = 0;
    local_278.EnumName.ComparisonIndex.Value = 0;
    local_278.EnumName.Number = 0;
    local_278.InnerType.ComparisonIndex.Value = 0;
    local_278.InnerType.Number = 0;
    local_278.ValueType.ComparisonIndex.Value = 0;
    local_278.ValueType.Number = 0;
    local_278.Size = 0;
    local_278.SizeOffset = -1;
    local_278.StructGuid.A = 0;
    local_278.StructGuid.B = 0;
    local_278.StructGuid.C = 0;
    local_278.StructGuid.D = 0;
    local_278.PropertyGuid.A = 0;
    local_278.PropertyGuid.B = 0;
    local_278.PropertyGuid.C = 0;
    local_278.PropertyGuid.D = 0;
    local_278.HasPropertyGuid = '\0';
    local_278.BoolVal = '\0';
    local_278.SerializeType = Unknown;
    local_278.OverrideOperation = None;
    local_278.bExperimentalOverridableLogic = false;
    local_278.ArrayIndex = 0;
    local_2b0.StructuredArchive = FVar6.StructuredArchive;
    pFVar15 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_2b0);
    local_288 = *(longlong *)&pFVar15->field_0x40;
    if (((pFVar15->field_0x28 & 0x40) != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!UnderlyingArchive.GetArchiveState().UseUnversionedPropertySerialization()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                           ,0x1ba,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((((pFVar15->field_0x28 & 4) != 0) && (local_278.Prop == (FProperty *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!UnderlyingArchive.IsSaving() || Tag.GetProperty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                           ,0x1bb,
                           L"FPropertyTag must be constructed with a valid property when used for saving data!"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (local_288._4_4_ < 0x3f4) {
      LoadPropertyTagNoFullType((FStructuredArchiveSlot)local_2b0.StructuredArchive,&local_278);
    }
    else {
      if (((pFVar15->field_0x28 & 4) != 0) && (local_278.SerializeType != Skipped)) {
        cVar9 = (**(code **)((local_278.Prop)->_padding_ + 0x180))(local_278.Prop,pFVar15);
        local_278.SerializeType = (cVar9 != '\0') + Property;
      }
      pFVar1 = (local_2b0.StructuredArchive)->Formatter->Inner;
      (**(code **)(*(longlong *)pFVar1 + 0x178))(pFVar1,&local_278.Name);
      if (CONCAT44(local_278.Name.Number,local_278.Name.ComparisonIndex.Value) != 0) {
        UE::operator<<((FStructuredArchiveSlot)local_2b0.StructuredArchive,&local_278.TypeName);
        if ((pFVar15->field_0x28 & 1) != 0) {
          FPropertyTag::SetType(&local_278,local_278.TypeName);
        }
        if ((pFVar15->field_0x28 & 4) != 0) {
          local_278.SizeOffset = (**(code **)(*(longlong *)pFVar15 + 0x28))(pFVar15);
        }
        pFVar1 = (local_2b0.StructuredArchive)->Formatter->Inner;
        piVar2 = (int *)**(undefined8 **)&pFVar1->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar1->field_0x8)[1] < piVar2 + 1) {
          if ((pFVar1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_278.Size,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar1,(uint *)&local_278.Size);
          }
        }
        else {
          local_278.Size = *piVar2;
          **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 4;
        }
        local_2b8 = 0;
        local_2b6[0] = (bool)CalculatePropertyExtensionFlags(pFVar15,&local_278);
        if ((pFVar15->field_0x28 & 4) != 0) {
          if (local_278.ArrayIndex != 0) {
            local_2b8 = local_2b8 | 1;
          }
          if (local_278.HasPropertyGuid != '\0') {
            local_2b8 = 2;
          }
          if (local_2b6[0] != false) {
            local_2b8 = local_2b8 | 4;
          }
          if (local_278.SerializeType == BinaryOrNative) {
            local_2b8 = local_2b8 | 8;
          }
          else if (local_278.SerializeType == Skipped) {
            local_2b8 = local_2b8 | 0x20;
          }
          if ((local_278.BoolVal != '\0') &&
             (uVar5 = CONCAT44(local_278.Type.Number,local_278.Type.ComparisonIndex.Value),
             FVar11 = FNameEntryId::FromValidEName((EName)local_168),
             uVar5 == *(uint *)CONCAT44(extraout_var,FVar11.Value))) {
            local_2b8 = local_2b8 | 0x10;
          }
        }
        bVar8 = local_2b6[0];
        pFVar1 = (local_2b0.StructuredArchive)->Formatter->Inner;
        pbVar3 = (byte *)**(undefined8 **)&pFVar1->field_0x8;
        if ((byte *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pbVar3 + 1) {
          (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&local_2b8,1);
        }
        else {
          local_2b8 = *pbVar3;
          **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
        }
        if ((pFVar15->field_0x28 & 1) != 0) {
          local_278._112_4_ = CONCAT31(local_278._113_3_,local_2b8 >> 1) & 0xffffff01;
          if ((local_2b8 & 0x20) == 0) {
            local_278._112_4_ =
                 CONCAT13(local_278.OverrideOperation,CONCAT12(local_2b8 >> 3,local_278._112_2_)) &
                 0xff01ffff | 0x20000;
          }
          else {
            local_278.SerializeType = Skipped;
          }
          local_278._112_4_ =
               CONCAT22(local_278._114_2_,CONCAT11(local_2b8 >> 4,local_278.HasPropertyGuid)) &
               0xffff01ff;
        }
        if ((local_2b8 & 1) == 0) {
          local_278.ArrayIndex = 0;
        }
        else {
          pFVar15 = (local_2b0.StructuredArchive)->Formatter->Inner;
          piVar2 = (int *)**(undefined8 **)&pFVar15->field_0x8;
          if ((int *)(*(undefined8 **)&pFVar15->field_0x8)[1] < piVar2 + 1) {
            if ((pFVar15->field_0x2a & 1) == 0) {
              (**(code **)(*(longlong *)pFVar15 + 0x188))(pFVar15,&local_278.ArrayIndex,4);
            }
            else {
              FArchive::SerializeByteOrderSwapped(pFVar15,(uint *)&local_278.ArrayIndex);
            }
          }
          else {
            local_278.ArrayIndex = *piVar2;
            **(longlong **)&pFVar15->field_0x8 = **(longlong **)&pFVar15->field_0x8 + 4;
          }
        }
        if ((local_2b8 & 2) != 0) {
          ::operator<<((FStructuredArchiveSlot)local_2b0.StructuredArchive,&local_278.PropertyGuid);
        }
        if ((local_2b8 & 4) != 0) {
          SerializePropertyExtensions
                    ((FStructuredArchiveSlot)local_2b0.StructuredArchive,bVar8,&local_278);
        }
      }
    }
    local_2b6[0] = false;
    local_128.Nodes.AllocatorInstance.SecondaryData = (ForElementType<UE::FPropertyTypeNameNode>)0x0
    ;
    local_128.Nodes.ArrayNum = 0;
    local_128.Nodes.ArrayMax = 10;
    local_128.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_128.OuterNodeIndex.ArrayNum = 0;
    local_128.OuterNodeIndex.ArrayMax = 10;
    local_128.ActiveIndex = -1;
    UE::BuildNewNameForPropertyType(local_278.TypeName,&local_128,*(FProperty **)this_00,local_2b6);
    if ((local_2b6[0] != false) && (local_128.Nodes.ArrayNum != 0)) {
      FVar21 = (ForElementType<UE::FPropertyTypeNameNode>)&local_128;
      if (local_128.Nodes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
        FVar21 = local_128.Nodes.AllocatorInstance.SecondaryData;
      }
      FVar12.Index = UE::FPropertyTypeNameTable::FindOrAddByName
                               (&UE::GPropertyTypeNameTable,(FPropertyTypeNameNode *)FVar21);
    }
    if (local_128.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_128.OuterNodeIndex.AllocatorInstance.SecondaryData);
    }
    if (local_128.Nodes.AllocatorInstance.SecondaryData !=
        (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
      FMemory::Free((void *)local_128.Nodes.AllocatorInstance.SecondaryData);
    }
    if (FVar12.Index != 0) {
      FPropertyTag::SetType(&local_278,FVar12);
    }
    local_170 = FOptionalPropertyLayout::MarkSetAndGetInitializedValuePointerToReplace
                          ((FOptionalPropertyLayout *)this_00,local_290);
    local_288 = (**(code **)(*(longlong *)this_01 + 0x28))(this_01);
    bVar22 = 0;
    pFVar16 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
    pcVar4 = *(code **)(pFVar16->_padding_ + 0xb0);
    FField::GetOwnerStruct((FField *)local_178);
    iVar13 = (*pcVar4)(pFVar16,&local_278,FVar6.StructuredArchive,local_170);
    if (iVar13 == 0) {
      pFVar16 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
      plVar18 = (longlong *)(**(code **)(pFVar16->_padding_ + 0x158))(pFVar16,local_154);
      if (CONCAT44(local_278.Type.Number,local_278.Type.ComparisonIndex.Value) == *plVar18) {
        pFVar16 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
        FPropertyTag::SerializeTaggedProperty
                  (&local_278,(FStructuredArchiveSlot)FVar6.StructuredArchive,pFVar16,local_170,
                   local_298);
        bVar22 = ~((byte)this_01->field_0x29 >> 2) & 1;
      }
LAB_14218ee9a:
      lVar17 = *(longlong *)this_01;
      if (bVar22 == 0) {
LAB_14218eea6:
        (**(code **)(lVar17 + 0x1b8))(this_01,local_278.Size + local_288);
        param_2 = local_290;
        goto LAB_14218f4e2;
      }
    }
    else {
      if (iVar13 != 1) {
        if (iVar13 == 2) {
          lVar17 = *(longlong *)this_01;
          goto LAB_14218eea6;
        }
        if (iVar13 != 3) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                             ,0xff,L"");
          if (bVar8) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          goto LAB_14218ee9a;
        }
      }
      lVar17 = *(longlong *)this_01;
    }
    lVar17 = (**(code **)(lVar17 + 0x28))(this_01);
    if ((longlong)local_278.Size != lVar17 - local_288) {
      pFVar16 = FOptionalPropertyLayout::GetValueProperty((FOptionalPropertyLayout *)this_00);
      local_15c = *(FName *)pFVar16->_padding_;
      ::FName::ToString(&local_15c,&local_138);
      ::FName::ToString(&local_278.Type,&local_148);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ValueTag.Size == NumLoadedBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                         ,0x112,
                         L"Value tagged with ID %s was saved as %i bytes, but loading it as a %s loaded lld bytes."
                        );
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  else {
    if (bVar22 == 0) {
      return;
    }
LAB_14218f4e2:
    FOptionalPropertyLayout::MarkUnset((FOptionalPropertyLayout *)this_00,param_2);
  }
  return;
}

// SetValueProperty @ 142192ec0

void __thiscall FOptionalProperty::SetValueProperty(FOptionalProperty *this,FProperty *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(longlong *)&this->field_0x70 != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x3f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_1 == (FProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x40,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FProperty **)&this->field_0x70 = param_1;
  return;
}

// StaticClass @ 142193cd0

FFieldClass * __cdecl FOptionalProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FOptionalProperty",0x100000000000000,
                 CASTCLASS_FOptionalProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FOptionalProperty::StaticClass'::__l2::
             _dynamic_atexit_destructor_for__StaticFieldClass__);
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// SupportsNetSharedSerialization @ 1421943b0

bool __thiscall FOptionalProperty::SupportsNetSharedSerialization(FOptionalProperty *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001421943b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(longlong **)&this->field_0x70 + 0xd0))();
  return (bool)uVar1;
}

// UseBinaryOrNativeSerialization @ 1421964a0

bool __thiscall
FOptionalProperty::UseBinaryOrNativeSerialization(FOptionalProperty *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  bVar3 = FProperty::UseBinaryOrNativeSerialization((FProperty *)this,param_1);
  if (bVar3) {
    return true;
  }
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LocalValueProperty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                       ,0x289,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142196508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (**(code **)(*plVar1 + 0x180))(plVar1,param_1);
  return (bool)uVar4;
}

// Visit @ 142196b30

EPropertyVisitorControlFlow __thiscall
FOptionalProperty::Visit
          (FOptionalProperty *this,FPropertyVisitorContext *param_1,
          TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)>
          *param_2)

{
  code *pcVar1;
  bool bVar2;
  EPropertyVisitorControlFlow EVar3;
  FPropertyVisitorInfo *pFVar4;
  FPropertyVisitorScope local_res8;
  TFunctionRef<EPropertyVisitorControlFlow___cdecl(FPropertyVisitorContext_const_&)> local_58;
  undefined8 local_48;
  undefined8 local_40;
  FPropertyVisitorInfo local_38;
  
  bVar2 = FOptionalPropertyLayout::IsSet
                    ((FOptionalPropertyLayout *)&this->field_0x70,(param_1->Data).PropertyData);
  pFVar4 = FPropertyVisitorPath::Top(param_1->Path);
  pFVar4->bContainsInnerProperties = bVar2;
  local_58._0_8_ = *(undefined8 *)param_2;
  local_58._8_8_ = *(undefined8 *)&param_2->field_0x8;
  EVar3 = FProperty::Visit((FProperty *)this,param_1,&local_58);
  if ((EVar3 == StepInto) &&
     (bVar2 = FOptionalPropertyLayout::IsSet
                        ((FOptionalPropertyLayout *)&this->field_0x70,(param_1->Data).PropertyData),
     bVar2)) {
    bVar2 = FOptionalPropertyLayout::IsSet
                      ((FOptionalPropertyLayout *)&this->field_0x70,(param_1->Data).PropertyData);
    if (bVar2) {
      if ((*(longlong *)&this->field_0x70 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("ValueProperty",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyOptional.cpp"
                             ,0x2c4,L"Expecting a valid property value"), bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      local_38.Property = *(FProperty **)&this->field_0x70;
      local_38.ParentStructType = (UStruct *)0x0;
      local_38.Index = -1;
      local_38.PropertyInfo = None;
      local_38.bContainsInnerProperties = false;
      FPropertyVisitorScope::FPropertyVisitorScope(&local_res8,param_1->Path,&local_38);
      local_48 = *(undefined8 *)param_2;
      local_40 = *(undefined8 *)&param_2->field_0x8;
      EVar3 = (**(code **)(**(longlong **)&this->field_0x70 + 0x98))
                        (*(longlong **)&this->field_0x70,param_1,&local_48);
      FPropertyVisitorScope::~FPropertyVisitorScope(&local_res8);
    }
    else {
      EVar3 = StepOver;
    }
  }
  return EVar3;
}

// operator_new @ 142259d70

void * __cdecl FOptionalProperty::operator_new(ulong64 param_1)

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
    this->_padding_ = (longlong)&___7FOptionalProperty__6B_;
  }
  return this;
}

