// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 31

// GetFieldSize @ 141f81c30

ulong64 __thiscall FEnumProperty::GetFieldSize(FEnumProperty *this)

{
  return 0x80;
}

// HasIntrusiveUnsetOptionalState @ 141f8b5e0

bool __thiscall FEnumProperty::HasIntrusiveUnsetOptionalState(FEnumProperty *this)

{
  return false;
}

// FEnumProperty @ 141fbd6a0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

FEnumProperty * __thiscall
FEnumProperty::FEnumProperty(FEnumProperty *this,FFieldVariant param_1,FEnumPropertyParams *param_2)

{
  UEnum *pUVar1;
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty
            ((FProperty *)this,(FFieldVariant)&local_res8,(FPropertyParamsBaseWithOffset *)param_2,
             CPF_HasGetValueTypeHash);
  this->_padding_ = (longlong)&___7FEnumProperty__6B_;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  if (param_2->EnumFunc == (_func___cdecl_UEnum_ptr *)0x0) {
    pUVar1 = (UEnum *)0x0;
  }
  else {
    pUVar1 = (*param_2->EnumFunc)();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->Enum).field0_0x0.DebugPtr = pUVar1;
  this->UnderlyingProp = (FNumericProperty *)0x0;
  return this;
}

// FEnumProperty @ 141fbd750

FEnumProperty * __thiscall
FEnumProperty::FEnumProperty
          (FEnumProperty *this,FFieldVariant param_1,FName *param_2,EObjectFlags param_3)

{
  ulonglong local_res8;
  
  local_res8 = *(ulonglong *)param_1.Container;
  if ((((local_res8 & 1) != 0) && ((UObject *)(local_res8 & 0xfffffffffffffffe) != (UObject *)0x0))
     && (UE::GC::GIsIncrementalReachabilityPending)) {
    UE::GC::MarkAsReachable((UObject *)(local_res8 & 0xfffffffffffffffe));
  }
  FProperty::FProperty((FProperty *)this,(FFieldVariant)&local_res8,param_2,param_3);
  this->_padding_ = (longlong)&___7FEnumProperty__6B_;
  this->UnderlyingProp = (FNumericProperty *)0x0;
  (this->Enum).field0_0x0.DebugPtr = (UEnum *)0x0;
  return this;
}

// ~FEnumProperty @ 141fbfc40

void __thiscall FEnumProperty::~FEnumProperty(FEnumProperty *this)

{
  FNumericProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FEnumProperty__6B_;
  pFVar1 = this->UnderlyingProp;
  if (pFVar1 != (FNumericProperty *)0x0) {
    (**(code **)(*(longlong *)pFVar1 + 8))(pFVar1,1);
  }
  this->UnderlyingProp = (FNumericProperty *)0x0;
  this->_padding_ = (longlong)&___7FField__6B_;
  return;
}

// AddCppProperty @ 141fc3c60

void __thiscall FEnumProperty::AddCppProperty(FEnumProperty *this,FProperty *param_1)

{
  longlong lVar1;
  FFieldClass *pFVar2;
  code *pcVar3;
  bool bVar4;
  FFieldClass *pFVar5;
  FEnumProperty *pFVar6;
  
  if ((this->UnderlyingProp != (FNumericProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!UnderlyingProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x10e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar6 = (FEnumProperty *)0x0;
  if (((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x18 & 1) == 0))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("CastResult",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                            ,0x472,L"CastFieldChecked failed with 0x%016llx"),
        param_1 = (FProperty *)pFVar6, bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->UnderlyingProp = (FNumericProperty *)param_1;
  pFVar5 = StaticClass();
  if (((((FEnumProperty *)param_1)->_padding_ & 1) == 0) &&
     (lVar1 = ((FEnumProperty *)param_1)->_padding_, lVar1 != 0)) {
    if ((pFVar5 == (FFieldClass *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("FieldType",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                           ,0x2dd,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar2 = *(FFieldClass **)(lVar1 + 8);
    if (pFVar5->Id == CASTCLASS_None) {
      for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
        if (pFVar2 == pFVar5) {
          bVar4 = true;
          goto LAB_141fc3d66;
        }
      }
      bVar4 = false;
    }
    else {
      bVar4 = (pFVar2->CastFlags & pFVar5->Id) != CASTCLASS_None;
    }
LAB_141fc3d66:
    if (bVar4) {
      pFVar6 = (FEnumProperty *)((FEnumProperty *)param_1)->_padding_;
    }
  }
  if ((pFVar6 != this) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingProp->GetOwner<FEnumProperty>() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x110,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(ulonglong *)&this->UnderlyingProp->field_0x38 & 0x8000000000000) != 0) {
    this->_padding_ = this->_padding_ | 0x8000000000000;
  }
  return;
}

// AddReferencedObjects @ 141fc5150

void __thiscall
FEnumProperty::AddReferencedObjects(FEnumProperty *this,FReferenceCollector *param_1)

{
  UObject *local_res8;
  
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->Enum,0,0);
  if ((this->_padding_ & 1) == 0) {
    local_res8 = (UObject *)0x0;
  }
  else {
    local_res8 = (UObject *)(this->_padding_ & 0xfffffffffffffffe);
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (local_res8 == (UObject *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable(local_res8);
  }
  if ((local_res8 != (UObject *)0x0) &&
     ((**(code **)(param_1->_padding_ + 0x88))(param_1,&local_res8,0,0),
     local_res8 == (UObject *)0x0)) {
    this->_padding_ = 0;
  }
  return;
}

// CanSerializeFromTypeName @ 141fc68a0

bool __thiscall
FEnumProperty::CanSerializeFromTypeName(FEnumProperty *this,FPropertyTypeName param_1)

{
  UEnum *pUVar1;
  bool bVar2;
  FPropertyTypeName FVar3;
  undefined4 extraout_var;
  FPropertyTypeName local_res10 [2];
  undefined1 local_res18 [8];
  longlong local_res20;
  
  local_res10[0].Index = param_1.Index;
  bVar2 = FProperty::CanSerializeFromTypeName((FProperty *)this,param_1);
  if ((bVar2) && (pUVar1 = (this->Enum).field0_0x0.DebugPtr, pUVar1 != (UEnum *)0x0)) {
    FVar3 = UE::FPropertyTypeName::GetParameter(local_res10,(int)local_res18);
    UE::FPropertyTypeName::GetName((FPropertyTypeName *)CONCAT44(extraout_var,FVar3.Index));
    return local_res20 == pUVar1->_padding_;
  }
  return false;
}

// Construct @ 141fc73c0

FField * __cdecl
FEnumProperty::Construct(FFieldVariant *param_1,FName *param_2,EObjectFlags param_3)

{
  FProperty *this;
  FFieldClass *pFVar1;
  ulonglong local_res20;
  
  this = FMemory::Malloc(0x80,0);
  if (this == (FProperty *)0x0) {
    this = (FProperty *)0x0;
  }
  else {
    pFVar1 = StaticClass();
    this->_padding_ = (longlong)pFVar1;
    this->_padding_ = 0;
    this->_padding_ = 0;
    this->_padding_ = 0;
    *(undefined4 *)&this->_padding_ = 0;
    this->PropertyLinkNext = (FProperty *)0x0;
    this->NextRef = (FProperty *)0x0;
    this->DestructorLinkNext = (FProperty *)0x0;
    this->PostConstructLinkNext = (FProperty *)0x0;
    (this->RepNotifyFunc).ComparisonIndex = 0;
    (this->RepNotifyFunc).Number = 0;
    this->_padding_ = (longlong)&___7FEnumProperty__6B_;
    this[1]._padding_ = 0;
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
    this->_padding_ = (longlong)&___7FEnumProperty__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
  }
  return (FField *)this;
}

// ConvertFromType @ 141fc7af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EConvertFromTypeResult __thiscall
FEnumProperty::ConvertFromType
          (FEnumProperty *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2,uchar *param_3,
          UStruct *param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  FFieldClass *pFVar4;
  uchar *puVar5;
  TObjectPtr<UEnum>_u_0 this_00;
  schar *psVar6;
  ulong64 *puVar7;
  UEnum *pUVar8;
  FNumericProperty *pFVar9;
  FArchive *pFVar10;
  ushort *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  bool bVar15;
  int iVar16;
  FPropertyTypeName FVar17;
  EConvertFromTypeResult EVar18;
  EName *pEVar19;
  FFieldClass *pFVar20;
  FArchiveState *pFVar21;
  undefined4 extraout_var;
  long64 lVar22;
  void *pvVar23;
  FString *pFVar24;
  size_t sVar25;
  FSlotBase local_res18 [2];
  undefined1 auStackY_298 [32];
  uchar local_268;
  char local_267;
  schar local_266 [2];
  ushort local_264 [2];
  ushort local_260 [2];
  uint local_25c;
  uint local_258 [2];
  FName local_250;
  FPropertyTypeName local_248 [2];
  ulong64 local_240;
  wchar_t *local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  long64 local_228 [2];
  FScriptContainerElement *local_218;
  int iStack_210;
  undefined4 uStack_20c;
  code *local_208;
  TObjectPtr<UEnum>_u_0 *local_200;
  TObjectPtr<UEnum>_u_0 local_1f8;
  char *local_1f0;
  long64 *local_1e8;
  undefined4 local_1e0;
  TStringView<wchar_t> local_1d8;
  TStringView<wchar_t> local_1c8;
  FString local_1b8;
  FPropertyTag local_1a8;
  FPropertyTypeNameBuilder local_128;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_298;
  local_res18[0].StructuredArchive = (FStructuredArchive *)param_2;
  pEVar19 = ::FName::ToEName(&param_1->Type);
  if ((((pEVar19 == (EName *)0x0) || ((param_1->Type).Number != 0)) || (*pEVar19 == EnumProperty))
     || (((this->Enum).field0_0x0.DebugPtr == (UEnum *)0x0 ||
         (this->UnderlyingProp == (FNumericProperty *)0x0)))) {
switchD_141fc7b93_caseD_4:
    EVar18 = UseSerializeItem;
  }
  else {
    switch(*pEVar19) {
    case ByteProperty:
      local_248[0].Index = (param_1->TypeName).Index;
      iVar16 = UE::FPropertyTypeName::GetParameterCount(local_248);
      if (iVar16 == 0) {
        pFVar20 = FProperty::StaticClass();
        if (((this->_padding_ & 1) == 0) && (lVar3 = this->_padding_, lVar3 != 0)) {
          if ((pFVar20 == (FFieldClass *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("FieldType",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                  ,0x2dd,L""), bVar15)) {
            pcVar14 = (code *)swi(3);
            EVar18 = (*pcVar14)();
            return EVar18;
          }
          pFVar4 = *(FFieldClass **)(lVar3 + 8);
          if (pFVar20->Id == CASTCLASS_None) {
            for (; pFVar4 != (FFieldClass *)0x0; pFVar4 = pFVar4->SuperClass) {
              if (pFVar4 == pFVar20) {
                bVar15 = true;
                goto LAB_141fc7c34;
              }
            }
            bVar15 = false;
          }
          else {
            bVar15 = (pFVar4->CastFlags & pFVar20->Id) != CASTCLASS_None;
          }
LAB_141fc7c34:
          if (((bVar15) && (this->_padding_ != 0)) &&
             (pFVar21 = UE::StructuredArchive::Private::FSlotBase::GetArchiveState(local_res18),
             (pFVar21->ArUEVer).FileVersionUE5 < 0x3f4)) {
            local_128.Nodes.AllocatorInstance.SecondaryData =
                 (ForElementType<UE::FPropertyTypeNameNode>)0x0;
            local_128.ActiveIndex = -1;
            local_128.Nodes.ArrayNum = 0;
            local_128.Nodes.ArrayMax = 10;
            local_128.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
            local_128.OuterNodeIndex.ArrayNum = 0;
            local_128.OuterNodeIndex.ArrayMax = 10;
            UE::FPropertyTypeNameBuilder::AddName(&local_128,param_1->Type);
            UE::FPropertyTypeNameBuilder::BeginParameters(&local_128);
            UE::FPropertyTypeNameBuilder::AddPath
                      (&local_128,(UField *)(this->Enum).field0_0x0.DebugPtr);
            UE::FPropertyTypeNameBuilder::EndParameters(&local_128);
            FPropertyTag::FPropertyTag(&local_1a8);
            FVar17 = UE::FPropertyTypeNameBuilder::Build(&local_128);
            FPropertyTag::SetType
                      (&local_1a8,(FPropertyTypeName)*(int *)CONCAT44(extraout_var,FVar17.Index));
            local_1a8.Name = param_1->Name;
            local_1a8.ArrayIndex = 0;
            lVar22 = FNumericProperty::ReadEnumAsInt64
                               ((FStructuredArchiveSlot)local_res18[0].StructuredArchive,param_4,
                                &local_1a8);
            pFVar9 = this->UnderlyingProp;
            pcVar14 = *(code **)(*(longlong *)pFVar9 + 0x1e8);
            pvVar23 = FProperty::ContainerVoidPtrToValuePtrInternal
                                ((FProperty *)this,param_3,param_1->ArrayIndex);
            (*pcVar14)(pFVar9,pvVar23,lVar22);
            if (local_128.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0
               ) {
              FMemory::Free((void *)local_128.OuterNodeIndex.AllocatorInstance.SecondaryData);
            }
            if (local_128.Nodes.AllocatorInstance.SecondaryData !=
                (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
              FMemory::Free((void *)local_128.Nodes.AllocatorInstance.SecondaryData);
              return Converted;
            }
            goto LAB_141fc7feb;
          }
        }
        pvVar23 = FProperty::ContainerVoidPtrToValuePtrInternal
                            ((FProperty *)this,param_3,param_1->ArrayIndex);
        pUVar8 = (this->Enum).field0_0x0.DebugPtr;
        pFVar9 = this->UnderlyingProp;
        pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
        puVar5 = (uchar *)**(undefined8 **)&pFVar10->field_0x8;
        if ((uchar *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar5 + 1) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,&local_268,1);
        }
        else {
          local_268 = *puVar5;
          **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 1;
        }
        UE::CoreUObject::Private::ConvertIntValueToEnumProperty<unsigned_char>
                  (local_268,this,pFVar9,pUVar8,pvVar23);
        EVar18 = Converted;
      }
      else {
        this_00 = (TObjectPtr<UEnum>_u_0)(this->Enum).field0_0x0.DebugPtr;
        lVar22 = 0;
        local_250.ComparisonIndex.Value = 0;
        local_250.Number = 0;
        UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res18);
        pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar10 + 0x178))(pFVar10,&local_250);
        if (this_00.DebugPtr != (UEnum *)0x0) {
          UObject::ConditionalPreload((UObject *)this_00.DebugPtr);
          if (((this_00.DebugPtr)->EnumFlags & Flags) == None) {
            iVar16 = UEnum::GetIndexByName(this_00.DebugPtr,local_250,ErrorIfNotFound);
            if (iVar16 == -1) {
              lVar22 = UE::GetMaxEnumValue<UEnum::FNameData>
                                 (&(this_00.DebugPtr)->Names,(this_00.DebugPtr)->EnumFlags);
            }
            else {
              lVar22 = UEnum::GetValueByIndex(this_00.DebugPtr,iVar16);
            }
          }
          else if (local_250 != (FName)0x0) {
            pFVar24 = ::FName::ToString(&local_250,&local_1b8);
            iStack_210 = 0;
            if ((pFVar24->Data).ArrayNum == 0) {
              local_218 = (FScriptContainerElement *)0x15060d16c;
LAB_141fc7e7b:
              sVar25 = wcslen((wchar_t *)local_218);
              iStack_210 = (int)sVar25;
            }
            else {
              local_218 = (pFVar24->Data).AllocatorInstance.Data;
              if (local_218 != (FScriptContainerElement *)0x0) goto LAB_141fc7e7b;
            }
            local_1c8._12_4_ = uStack_20c;
            local_1c8.Size = iStack_210;
            local_1f0 = &local_267;
            local_1e8 = local_228;
            uStack_230 = 1;
            local_200 = &local_1f8;
            local_267 = '\x01';
            local_228[0] = 0;
            local_208 = UE::Core::Private::Function::
                        TFunctionRefCaller<`UEnum::GetValueOrBitfieldFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
                        ::Call;
            local_238 = L"|";
            local_1d8._12_4_ = uStack_22c;
            local_1d8.Size = 1;
            local_1d8.DataPtr = L"|";
            local_1e0 = 0;
            local_1c8.DataPtr = (wchar_t *)local_218;
            local_1f8 = this_00;
            UE::String::ParseTokens
                      (&local_1c8,&local_1d8,
                       (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_208,Trim|SkipEmpty
                      );
            lVar22 = -1;
            if (local_267 != '\0') {
              lVar22 = local_228[0];
            }
            if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
            }
          }
        }
        pFVar9 = this->UnderlyingProp;
        iVar16 = param_1->ArrayIndex;
        pcVar14 = *(code **)(*(longlong *)pFVar9 + 0x1e8);
        if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
           bVar15)) {
          pcVar14 = (code *)swi(3);
          EVar18 = (*pcVar14)();
          return EVar18;
        }
        if ((param_3 == (uchar *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("ContainerPtr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2de,L""), bVar15)) {
          pcVar14 = (code *)swi(3);
          EVar18 = (*pcVar14)();
          return EVar18;
        }
        (*pcVar14)(pFVar9,param_3 + (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                                    (longlong)iVar16 *
                                    (longlong)*(int *)((longlong)&this->_padding_ + 4),lVar22);
LAB_141fc7feb:
        EVar18 = Converted;
      }
      break;
    case IntProperty:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar12 = (uint *)**(undefined8 **)&pFVar10->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar12 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,&local_25c,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,&local_25c);
        }
      }
      else {
        local_25c = *puVar12;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 4;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<int>
                (local_25c,this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case BoolProperty:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<unsigned_char>
                (param_1->BoolVal,this,this->UnderlyingProp,(this->Enum).field0_0x0.DebugPtr,
                 param_3 + (longlong)*(int *)((longlong)&this->_padding_ + 4) +
                           (longlong)iVar16 * (longlong)*(int *)((longlong)&this->_padding_ + 4));
      EVar18 = Converted;
      break;
    default:
      goto switchD_141fc7b93_caseD_4;
    case Int64Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar7 = (ulong64 *)**(longlong **)&pFVar10->field_0x8;
      if ((ulong64 *)(*(longlong **)&pFVar10->field_0x8)[1] < puVar7 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,&local_240,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,&local_240);
        }
      }
      else {
        local_240 = *puVar7;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 8;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<__int64>
                (local_240,this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case Int16Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar11 = (ushort *)**(undefined8 **)&pFVar10->field_0x8;
      if ((ushort *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar11 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,local_264,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,local_264);
        }
      }
      else {
        local_264[0] = *puVar11;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 2;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<short>
                (local_264[0],this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case Int8Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      psVar6 = (schar *)**(undefined8 **)&pFVar10->field_0x8;
      if ((schar *)(*(undefined8 **)&pFVar10->field_0x8)[1] < psVar6 + 1) {
        (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,local_266,1);
      }
      else {
        local_266[0] = *psVar6;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 1;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<signed_char>
                (local_266[0],this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case UInt64Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar13 = (undefined8 *)**(longlong **)&pFVar10->field_0x8;
      if ((undefined8 *)(*(longlong **)&pFVar10->field_0x8)[1] < puVar13 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,&local_238,8);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,(ulong64 *)&local_238);
        }
      }
      else {
        local_238 = (wchar_t *)*puVar13;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 8;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<unsigned___int64>
                ((ulong64)local_238,this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case UInt32Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar12 = (uint *)**(undefined8 **)&pFVar10->field_0x8;
      if ((uint *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar12 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,local_258,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,local_258);
        }
      }
      else {
        local_258[0] = *puVar12;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 4;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<unsigned_int>
                (local_258[0],this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
      break;
    case UInt16Property:
      iVar16 = param_1->ArrayIndex;
      if (((iVar16 < 0) || ((int)this->_padding_ <= iVar16)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      if ((param_3 == (uchar *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("ContainerPtr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                              ,0x2de,L""), bVar15)) {
        pcVar14 = (code *)swi(3);
        EVar18 = (*pcVar14)();
        return EVar18;
      }
      iVar1 = *(int *)((longlong)&this->_padding_ + 4);
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      pUVar8 = (this->Enum).field0_0x0.DebugPtr;
      pFVar9 = this->UnderlyingProp;
      pFVar10 = (local_res18[0].StructuredArchive)->Formatter->Inner;
      puVar11 = (ushort *)**(undefined8 **)&pFVar10->field_0x8;
      if ((ushort *)(*(undefined8 **)&pFVar10->field_0x8)[1] < puVar11 + 1) {
        if ((pFVar10->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar10 + 0x188))(pFVar10,local_260,2);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar10,local_260);
        }
      }
      else {
        local_260[0] = *puVar11;
        **(longlong **)&pFVar10->field_0x8 = **(longlong **)&pFVar10->field_0x8 + 2;
      }
      UE::CoreUObject::Private::ConvertIntValueToEnumProperty<unsigned_short>
                (local_260[0],this,pFVar9,pUVar8,
                 param_3 + (longlong)iVar2 + (longlong)iVar16 * (longlong)iVar1);
      EVar18 = Converted;
    }
  }
  return EVar18;
}

// ExportText_Internal @ 141fca920

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FEnumProperty::ExportText_Internal
          (FEnumProperty *this,FString *param_1,void *param_2,EPropertyPointerType param_3,
          void *param_4,UObject *param_5,int param_6,UObject *param_7)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FString *pFVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  if ((this->Enum).field0_0x0.DebugPtr == (UEnum *)0x0) {
    if (2 < (byte)LogClass._0_1_) {
      ::FName::ToString((FName *)this->_padding_,&local_28);
      ::FString::AppendChars(&local_28,L" ",1);
      pFVar4 = FField::GetPathName((FField *)this,&local_18,(UObject *)0x0);
      iVar1 = (pFVar4->Data).ArrayNum;
      iVar5 = iVar1 + -1;
      if (iVar1 == 0) {
        iVar5 = 0;
      }
      ::FString::AppendChars(&local_28,(wchar_t *)(pFVar4->Data).AllocatorInstance.Data,iVar5);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    if ((this->UnderlyingProp == (FNumericProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LocalUnderlyingProp",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                           ,0x1ac,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    UE::CoreUObject::Private::ExportEnumToBuffer
              ((this->Enum).field0_0x0.DebugPtr,(FProperty *)this,this->UnderlyingProp,param_1,
               param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// GetCPPMacroType @ 141fcdc50

FString * __thiscall
FEnumProperty::GetCPPMacroType(FEnumProperty *this,FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FName local_res8;
  FString local_18;
  
  local_res8 = (FName)((this->Enum).field0_0x0.DebugPtr)->_padding_;
  ::FName::ToString(&local_res8,&local_18);
  if (param_1 != &local_18) {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    (param_1->Data).ArrayNum = local_18.Data.ArrayNum;
    (param_1->Data).ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::FString(__return_storage_ptr__,L"ENUM");
  return __return_storage_ptr__;
}

// GetCPPType @ 141fcde40

FString * __thiscall
FEnumProperty::GetCPPType
          (FEnumProperty *this,FString *__return_storage_ptr__,FString *param_1,uint param_2)

{
  UClass *pUVar1;
  UEnum *pUVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  FString *pFVar6;
  UClass *pUVar7;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  if ((this->Enum).field0_0x0.DebugPtr == (UEnum *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Enum",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                       ,0x186,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  if (this->UnderlyingProp == (FNumericProperty *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnderlyingProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                       ,0x187,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar3)();
      return pFVar6;
    }
  }
  pUVar1 = (UClass *)((this->Enum).field0_0x0.DebugPtr)->_padding_;
  pUVar7 = Z_Construct_UClass_UEnum_NoRegister();
  pUVar2 = (this->Enum).field0_0x0.DebugPtr;
  if ((pUVar2->CppType).Data.ArrayNum < 2) {
    local_res8 = (FName)pUVar2->_padding_;
    ::FName::ToString(&local_res8,&local_28);
    if (((char)param_2 < '\0') && (pUVar1 != pUVar7)) {
      if (1 < (((this->Enum).field0_0x0.DebugPtr)->CppType).Data.ArrayNum) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<2220627954663162262>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                           ,0x196,"Enum->CppType.IsEmpty()");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar3)();
          return pFVar6;
        }
      }
      UnicodeToCPPIdentifier(&local_38,&local_28,false,L"E__");
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_38.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
      iVar4 = local_38.Data.ArrayMax;
      local_38.Data.ArrayNum = 0;
      local_38.Data.ArrayMax = 0;
      local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayMax = iVar4;
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    else {
      (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
      (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    }
  }
  else {
    ::FString::FString(__return_storage_ptr__,&pUVar2->CppType);
  }
  return __return_storage_ptr__;
}

// GetInnerFieldByName @ 141fd0820

FField * __thiscall FEnumProperty::GetInnerFieldByName(FEnumProperty *this,FName *param_1)

{
  FNumericProperty *pFVar1;
  bool bVar2;
  FName FVar3;
  
  pFVar1 = this->UnderlyingProp;
  if (pFVar1 != (FNumericProperty *)0x0) {
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    if (bVar2) {
      FVar3.ComparisonIndex.Value = *(uint *)&pFVar1->field_0x20;
      FVar3.Number = *(uint *)&pFVar1->field_0x24;
    }
    else {
      FVar3.ComparisonIndex.Value = 0;
      FVar3.Number = 0;
    }
    if (FVar3 == *param_1) {
      return (FField *)this->UnderlyingProp;
    }
  }
  return (FField *)0x0;
}

// GetInnerFields @ 141fd0890

void __thiscall
FEnumProperty::GetInnerFields
          (FEnumProperty *this,TArray<FField_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNumericProperty *local_18 [2];
  
  local_18[0] = this->UnderlyingProp;
  if (local_18[0] != (FNumericProperty *)0x0) {
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
    *(FNumericProperty **)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
    (**(code **)(*(longlong *)this->UnderlyingProp + 0x58))(this->UnderlyingProp,param_1);
  }
  return;
}

// GetMaxNetSerializeBits @ 141fd1680

ulong64 __thiscall FEnumProperty::GetMaxNetSerializeBits(FEnumProperty *this)

{
  UEnum *pUVar1;
  long64 lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  uVar6 = (ulonglong)(*(int *)((longlong)&this->_padding_ + 4) << 3);
  lVar2 = UE::GetMaxEnumValue<UEnum::FNameData>(&pUVar1->Names,pUVar1->EnumFlags);
  lVar3 = 1;
  if (lVar2 + 1 != 0) {
    lVar3 = lVar2 + 1;
  }
  uVar4 = lVar3 - 1;
  lVar3 = 0x3f;
  if (uVar4 != 0) {
    for (; uVar4 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar5 = (int)lVar3;
  if (uVar4 == 0) {
    iVar5 = -1;
  }
  uVar4 = 0x40 - (ulonglong)(0x3f - iVar5);
  if (uVar4 < uVar6) {
    uVar6 = uVar4;
  }
  return uVar6;
}

// GetMinAlignment @ 141fd1700

int __thiscall FEnumProperty::GetMinAlignment(FEnumProperty *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141fd1707. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)(*(longlong *)this->UnderlyingProp + 0x168))();
  return iVar1;
}

// GetPreloadDependencies @ 141fd2680

void __thiscall
FEnumProperty::GetPreloadDependencies
          (FEnumProperty *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  TObjectPtr<UEnum>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UEnum>_u_0 local_18 [2];
  
  local_18[0] = (this->Enum).field0_0x0;
  pTVar1 = (TObjectPtr<UEnum>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
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
  *(TObjectPtr<UEnum>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) = local_18[0];
  return;
}

// GetValueTypeHashInternal @ 141fd3cc0

uint __thiscall FEnumProperty::GetValueTypeHashInternal(FEnumProperty *this,void *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  if (this->UnderlyingProp == (FNumericProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnderlyingProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                       ,0x25c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  uVar3 = FProperty::GetValueTypeHash((FProperty *)this->UnderlyingProp,param_1);
  return uVar3;
}

// Identical @ 141fd41d0

bool __thiscall
FEnumProperty::Identical(FEnumProperty *this,void *param_1,void *param_2,uint param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141fd41d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(longlong *)this->UnderlyingProp + 0xb8))();
  return (bool)uVar1;
}

// ImportText_Internal @ 141fd4680

wchar_t * __thiscall
FEnumProperty::ImportText_Internal
          (FEnumProperty *this,wchar_t *param_1,void *param_2,EPropertyPointerType param_3,
          UObject *param_4,int param_5,FOutputDevice *param_6)

{
  FNumericProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  wchar_t *pwVar4;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar5;
  
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (((this->Enum).field0_0x0.DebugPtr == (UEnum *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Enum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x1b3,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pwVar4 = (wchar_t *)(*pcVar2)();
    return pwVar4;
  }
  if ((this->UnderlyingProp == (FNumericProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x1b4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pwVar4 = (wchar_t *)(*pcVar2)();
    return pwVar4;
  }
  pFVar1 = this->UnderlyingProp;
  if (((uint)param_5 >> 0x1a & 1) == 0) {
    pwVar4 = UE::CoreUObject::Private::ImportEnumFromBuffer
                       ((this->Enum).field0_0x0.DebugPtr,(FProperty *)this,pFVar1,L"FEnumProperty",
                        param_1,param_2,param_3,param_6);
  }
  else {
    if (param_3 == Container) {
      param_2 = (void *)((longlong)*(int *)((longlong)&this->_padding_ + 4) + (longlong)param_2);
    }
    pwVar4 = (wchar_t *)
             (**(code **)(*(longlong *)pFVar1 + 0xe8))
                       (pFVar1,param_1,param_2,0,param_4,CONCAT44(uVar5,param_5),param_6);
  }
  return pwVar4;
}

// LinkInternal @ 141fd6650

void __thiscall FEnumProperty::LinkInternal(FEnumProperty *this,FArchive *param_1)

{
  FProperty *this_00;
  code *pcVar1;
  bool bVar2;
  
  if (this->UnderlyingProp == (FNumericProperty *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UnderlyingProp",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                       ,0x1cf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_00 = (FProperty *)this->UnderlyingProp;
  (**(code **)(this_00->_padding_ + 0xa8))(this_00,param_1);
  FProperty::SetupOffset(this_00);
  FProperty::SetElementSize((FProperty *)this,*(int *)&this->UnderlyingProp->field_0x34);
  this->_padding_ = this->_padding_ | 0x1040000200;
  this->_padding_ =
       this->_padding_ | *(ulonglong *)&this->UnderlyingProp->field_0x38 & 0x8000000000000;
  return;
}

// LoadTypeName @ 141fd6700

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FEnumProperty::LoadTypeName(FEnumProperty *this,FPropertyTypeName param_1,FPropertyTag *param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  UClass *pUVar6;
  UEnum *pUVar7;
  FName FVar8;
  TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
  *this_00;
  TTuple<FName,FFieldClass_*> *pTVar9;
  longlong *plVar10;
  long64 lVar11;
  FName *this_01;
  FPropertyTypeName local_res10 [4];
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  FPropertyTypeName local_1d8;
  FPropertyTypeName local_1d4;
  longlong local_1d0;
  FName local_1c8;
  FEnumProperty *local_1c0;
  FName local_1b8 [2];
  undefined1 local_1a8 [16];
  TStringBuilderBase<wchar_t> local_198;
  wchar_t local_178 [32];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [32];
  TStringBuilderBase<wchar_t> local_d8;
  wchar_t local_b8 [64];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_208;
  local_res10[0].Index = param_1.Index;
  bVar3 = FProperty::LoadTypeName((FProperty *)this,param_1,param_2);
  if (!bVar3) {
    return false;
  }
  UE::FPropertyTypeName::GetParameter(local_res10,(int)&local_1d4);
  pUVar6 = Z_Construct_UClass_UEnum_NoRegister();
  pUVar7 = (UEnum *)UE::FindObjectByTypePath(pUVar6,local_1d4);
  if (pUVar7 == (UEnum *)0x0) {
    return false;
  }
  UE::FPropertyTypeName::GetParameter(local_res10,(int)&local_1d8);
  bVar3 = IsThisNotNull(this,"FField::GetFName");
  if (bVar3) {
    local_1d0 = this->_padding_;
  }
  else {
    local_1d0 = 0;
  }
  local_1c0 = this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    uVar4 = (*pcVar1)();
    return (bool)uVar4;
  }
  FVar8 = UE::FPropertyTypeName::GetName(&local_1d8);
  this_00 = (TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
             *)FFieldClass::GetNameToFieldClassMap();
  pTVar9 = TSet<TTuple<FName,FFieldClass_*>,TDefaultMapHashableKeyFuncs<FName,FFieldClass_*,0>,FDefaultSetAllocator>
           ::Find(this_00,*(FName *)FVar8);
  if ((pTVar9 == (TTuple<FName,FFieldClass_*> *)0x0) || (*(longlong *)&pTVar9->field_0x8 == 0)) {
    plVar10 = (longlong *)0x0;
  }
  else {
    plVar10 = (longlong *)
              (**(code **)(*(longlong *)&pTVar9->field_0x8 + 0x30))(&local_1c0,&local_1d0,0);
    if ((plVar10 != (longlong *)0x0) && ((*(uint *)(plVar10[1] + 0x18) >> 0x18 & 1) != 0)) {
      cVar5 = (**(code **)(*plVar10 + 0x188))(plVar10,local_1d8.Index,param_2);
      if (cVar5 != '\0') {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        (this->Enum).field0_0x0.DebugPtr = pUVar7;
        if (2 < (byte)LogClass._0_1_) {
          lVar11 = UE::GetMaxEnumValue<UEnum::FNameData>(&pUVar7->Names,pUVar7->EnumFlags);
          cVar5 = (**(code **)(*plVar10 + 0x250))(plVar10,lVar11);
          if (cVar5 == '\0') {
            bVar3 = IsThisNotNull(this,"FField::GetFName");
            if (bVar3) {
              local_1c8 = (FName)this->_padding_;
            }
            else {
              local_1c8.ComparisonIndex.Value = 0;
              local_1c8.Number = 0;
            }
            local_138.Base = local_118;
            local_138.bIsDynamic = false;
            local_138.bIsExternal = false;
            local_138.CurPos = local_118;
            local_138.End = (wchar_t *)&local_d8;
            ::FName::AppendString(&local_1c8,&local_138);
            if (local_138.End < (TStringBuilderBase<wchar_t> *)(local_138.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_138,1);
            }
            pwVar2 = local_138.Base;
            *local_138.CurPos = L'\0';
            this_01 = (FName *)(**(code **)(*plVar10 + 0x158))(plVar10,local_1a8);
            local_198.Base = local_178;
            local_198.bIsDynamic = false;
            local_198.bIsExternal = false;
            local_198.CurPos = local_178;
            local_198.End = (wchar_t *)&local_138;
            ::FName::AppendString(this_01,&local_198);
            if (local_198.End < (TStringBuilderBase<wchar_t> *)(local_198.CurPos + 1)) {
              TStringBuilderBase<wchar_t>::Extend(&local_198,1);
            }
            *local_198.CurPos = L'\0';
            local_1b8[0] = (FName)((this->Enum).field0_0x0.DebugPtr)->_padding_;
            local_d8.Base = local_b8;
            local_d8.CurPos = local_b8;
            local_d8.End = (wchar_t *)local_38;
            local_d8.bIsDynamic = false;
            local_d8.bIsExternal = false;
            ::FName::AppendString(local_1b8,&local_d8);
            if (local_d8.End < local_d8.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_d8,1);
            }
            *local_d8.CurPos = L'\0';
            local_1e8 = pwVar2;
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogClass);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_d8);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_198);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
          }
        }
        (**(code **)(this->_padding_ + 0x38))(this,plVar10);
        return true;
      }
      goto LAB_141fd6a47;
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return false;
  }
LAB_141fd6a47:
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return false;
}

// NetSerializeItem @ 141fd8820

bool __thiscall
FEnumProperty::NetSerializeItem
          (FEnumProperty *this,FArchive *param_1,UPackageMap *param_2,void *param_3,
          TArray<unsigned_char,TSizedDefaultAllocator<32>_> *param_4)

{
  FNameData *pFVar1;
  EEnumFlags EVar2;
  UEnum *pUVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  long64 lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FEngineNetworkCustomVersion::Guid);
  uVar5 = (**(code **)(*(longlong *)param_1 + 0x48))(param_1);
  pUVar3 = (this->Enum).field0_0x0.DebugPtr;
  pFVar1 = &pUVar3->Names;
  EVar2 = pUVar3->EnumFlags;
  pcVar4 = *(code **)(*(longlong *)param_1 + 400);
  if (uVar5 < 0xc) {
    lVar7 = UE::GetMaxEnumValue<UEnum::FNameData>(pFVar1,EVar2);
    lVar10 = 1;
    if (lVar7 != 0) {
      lVar10 = lVar7;
    }
    uVar8 = lVar10 - 1;
    lVar10 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (int)lVar10;
    if (uVar8 == 0) {
      iVar6 = -1;
    }
    (*pcVar4)(param_1,param_3,0x40 - (ulonglong)(0x3f - iVar6));
  }
  else {
    uVar8 = (ulonglong)(*(int *)((longlong)&this->_padding_ + 4) << 3);
    lVar7 = UE::GetMaxEnumValue<UEnum::FNameData>(pFVar1,EVar2);
    lVar10 = 1;
    if (lVar7 + 1 != 0) {
      lVar10 = lVar7 + 1;
    }
    uVar9 = lVar10 - 1;
    lVar10 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (int)lVar10;
    if (uVar9 == 0) {
      iVar6 = -1;
    }
    uVar9 = 0x40 - (ulonglong)(0x3f - iVar6);
    if (uVar9 < uVar8) {
      uVar8 = uVar9;
    }
    (*pcVar4)(param_1,param_3,uVar8);
  }
  return true;
}

// PostDuplicate @ 141fd90c0

void __thiscall FEnumProperty::PostDuplicate(FEnumProperty *this,FField *param_1)

{
  EObjectFlags EVar1;
  FField *pFVar2;
  FFieldClass *pFVar3;
  code *pcVar4;
  bool bVar5;
  FNumericProperty *pFVar6;
  FName *pFVar7;
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FFieldObjectUnion local_res20;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1[2].Next != (FField *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1[2].Next);
  }
  (this->Enum).field0_0x0 = (TObjectPtr<UEnum>_u_0)param_1[2].Next;
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  local_res20 = (FFieldObjectUnion)this;
  if ((((ulonglong)this & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsUObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x180,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_1[2].Owner.Container.Field;
  if ((pFVar2 == (FField *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InField",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Field.cpp"
                         ,0x350,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = pFVar2->ClassPrivate;
  EVar1 = pFVar2->FlagsPrivate;
  if (local_res10 == (FName)0x0) {
    bVar5 = IsThisNotNull(pFVar2,"FField::GetFName");
    if (bVar5) {
      local_res8 = pFVar2->NamePrivate;
      pFVar7 = &local_res8;
    }
    else {
      local_res8.ComparisonIndex.Value = 0;
      local_res8.Number = 0;
      pFVar7 = &local_res8;
    }
  }
  else {
    local_res18 = local_res10;
    pFVar7 = &local_res18;
  }
  pFVar6 = (FNumericProperty *)(*pFVar3->ConstructFn)((FFieldVariant *)&local_res20,pFVar7,EVar1);
  (**(code **)(*(longlong *)pFVar6 + 0x48))(pFVar6,pFVar2);
  if ((((uint)(int)(*(FFieldClass **)&pFVar6->field_0x8)->CastFlags >> 0x18 & 1) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CastResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x472,L"CastFieldChecked failed with 0x%016llx"),
     pFVar6 = (FNumericProperty *)0x0, bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->UnderlyingProp = pFVar6;
  FProperty::PostDuplicate((FProperty *)this,param_1);
  return;
}

// SameType @ 141fe7ee0

bool __thiscall FEnumProperty::SameType(FEnumProperty *this,FProperty *param_1)

{
  bool bVar1;
  
  bVar1 = FProperty::SameType((FProperty *)this,param_1);
  if ((bVar1) && ((UEnum *)param_1[1]._padding_ == (this->Enum).field0_0x0.DebugPtr)) {
    return true;
  }
  return false;
}

// SaveTypeName @ 141fe7f30

void __thiscall FEnumProperty::SaveTypeName(FEnumProperty *this,FPropertyTypeNameBuilder *param_1)

{
  UEnum *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  FProperty::SaveTypeName((FProperty *)this,param_1);
  pUVar1 = (this->Enum).field0_0x0.DebugPtr;
  if (pUVar1 != (UEnum *)0x0) {
    if (this->UnderlyingProp == (FNumericProperty *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x2a3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    UE::FPropertyTypeNameBuilder::BeginParameters(param_1);
    UE::FPropertyTypeNameBuilder::AddPath(param_1,(UField *)pUVar1);
    (**(code **)(*(longlong *)this->UnderlyingProp + 400))(this->UnderlyingProp,param_1);
    UE::FPropertyTypeNameBuilder::EndParameters(param_1);
  }
  return;
}

// Serialize @ 141fe7fd0

void __thiscall FEnumProperty::Serialize(FEnumProperty *this,FArchive *param_1)

{
  code *pcVar1;
  bool bVar2;
  FEnumProperty *local_res8;
  
  FProperty::Serialize((FProperty *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->Enum);
  if ((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) {
    (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
  }
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
  SerializeSingleField<FNumericProperty>(param_1,&this->UnderlyingProp,(FFieldVariant)&local_res8);
  return;
}

// SerializeItem @ 141fe89b0

void __thiscall
FEnumProperty::SerializeItem
          (FEnumProperty *this,FStructuredArchiveSlot param_1,void *param_2,void *param_3)

{
  UEnum *pUVar1;
  TObjectPtr<UEnum>_u_0 this_00;
  FNumericProperty *pFVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  FArchive *pFVar7;
  undefined8 uVar8;
  FString *pFVar9;
  size_t sVar10;
  long64 lVar11;
  longlong lVar12;
  FName FVar13;
  FName FVar14;
  wchar_t *pwVar15;
  char local_res8 [8];
  FSlotBase local_res10;
  FName local_e8;
  FName local_e0;
  long64 local_d8 [2];
  FName local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  FScriptContainerElement *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  code *local_a8;
  TObjectPtr<UEnum>_u_0 *local_a0;
  TObjectPtr<UEnum>_u_0 local_98;
  char *local_90;
  long64 *local_88;
  undefined4 local_80;
  TStringView<wchar_t> local_78;
  TStringView<wchar_t> local_68;
  FString local_58;
  FString local_48;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar7 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  pwVar15 = L"";
  if ((this->UnderlyingProp == (FNumericProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingProp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\EnumProperty.cpp"
                         ,0x11b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) &&
     (cVar5 = (**(code **)(*(longlong *)pFVar7 + 0x90))(pFVar7), cVar5 != '\0')) {
    uVar8 = (**(code **)(*(longlong *)this->UnderlyingProp + 0x210))(this->UnderlyingProp,param_2);
    pUVar1 = (this->Enum).field0_0x0.DebugPtr;
    uVar8 = (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,pFVar7,uVar8);
    (**(code **)(*(longlong *)this->UnderlyingProp + 0x1e8))(this->UnderlyingProp,param_2,uVar8);
    return;
  }
  if ((pFVar7->field_0x28 & 1) == 0) {
    if ((pFVar7->field_0x28 & 4) == 0) {
      pFVar2 = this->UnderlyingProp;
      (**(code **)(*(longlong *)pFVar2 + 0xc0))
                (pFVar2,local_res10.StructuredArchive,param_2,param_3);
      return;
    }
    FVar14.ComparisonIndex.Value = 0;
    FVar14.Number = 0;
    local_e0.ComparisonIndex.Value = 0;
    local_e0.Number = 0;
    if ((this->Enum).field0_0x0.DebugPtr != (UEnum *)0x0) {
      pFVar2 = this->UnderlyingProp;
      lVar12 = (**(code **)(*(longlong *)pFVar2 + 0x210))(pFVar2,param_2);
      pUVar1 = (this->Enum).field0_0x0.DebugPtr;
      if ((pUVar1->EnumFlags & Flags) == None) {
        bVar4 = UEnum::IsValidEnumValue(pUVar1,lVar12);
        if (bVar4) {
          pUVar1 = (this->Enum).field0_0x0.DebugPtr;
          iVar6 = (pUVar1->Names).NumValues;
          FVar13 = FVar14;
          local_e0 = FVar14;
          if (0 < iVar6) {
            do {
              local_e0 = *(FName *)(((pUVar1->Names).TaggedNames & 0xfffffffffffffffe) +
                                   (longlong)FVar13 * 8);
              if (*(longlong *)
                   (((pUVar1->Names).TaggedValues & 0xfffffffffffffffe) + (longlong)FVar13 * 8) ==
                  lVar12) break;
              FVar13.ComparisonIndex.Value = FVar13.ComparisonIndex.Value.Value + 1;
              FVar13.Number = 0;
              local_e0 = FVar14;
            } while ((int)FVar13.ComparisonIndex.Value < iVar6);
          }
        }
      }
      else if (lVar12 != 0) {
        pFVar9 = UEnum::GetValueOrBitfieldAsString(pUVar1,&local_48,lVar12);
        if ((pFVar9->Data).ArrayNum != 0) {
          pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
        }
        ::FName::FName(&local_c8,pwVar15);
        local_e0 = local_c8;
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
      }
    }
    pFVar7 = (local_res10.StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar7 + 0x178))(pFVar7,&local_e0);
    return;
  }
  this_00 = (TObjectPtr<UEnum>_u_0)(this->Enum).field0_0x0.DebugPtr;
  lVar11 = 0;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  pFVar7 = (local_res10.StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar7 + 0x178))(pFVar7,&local_e8);
  if (this_00.DebugPtr == (UEnum *)0x0) goto LAB_141fe8bcb;
  UObject::ConditionalPreload((UObject *)this_00.DebugPtr);
  if (((this_00.DebugPtr)->EnumFlags & Flags) == None) {
    iVar6 = UEnum::GetIndexByName(this_00.DebugPtr,local_e8,ErrorIfNotFound);
    if (iVar6 == -1) {
      lVar11 = UE::GetMaxEnumValue<UEnum::FNameData>
                         (&(this_00.DebugPtr)->Names,(this_00.DebugPtr)->EnumFlags);
    }
    else {
      lVar11 = UEnum::GetValueByIndex(this_00.DebugPtr,iVar6);
    }
    goto LAB_141fe8bcb;
  }
  if (local_e8 == (FName)0x0) goto LAB_141fe8bcb;
  pFVar9 = ::FName::ToString(&local_e8,&local_58);
  iStack_b0 = 0;
  if ((pFVar9->Data).ArrayNum == 0) {
    local_b8 = (FScriptContainerElement *)0x15060d16c;
LAB_141fe8afe:
    sVar10 = wcslen((wchar_t *)local_b8);
    iStack_b0 = (int)sVar10;
  }
  else {
    local_b8 = (pFVar9->Data).AllocatorInstance.Data;
    if (local_b8 != (FScriptContainerElement *)0x0) goto LAB_141fe8afe;
  }
  local_68._12_4_ = uStack_ac;
  local_68.Size = iStack_b0;
  local_90 = local_res8;
  local_88 = local_d8;
  uStack_c0 = 1;
  local_a0 = &local_98;
  local_res8[0] = '\x01';
  local_d8[0] = 0;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`UEnum::GetValueOrBitfieldFromString'::__l2::<lambda_1>,void,TStringView<wchar_t>_>
             ::Call;
  local_c8 = (FName)0x150628d84;
  local_78._12_4_ = uStack_bc;
  local_78.Size = 1;
  local_78.DataPtr = L"|";
  local_80 = 0;
  local_68.DataPtr = (wchar_t *)local_b8;
  local_98 = this_00;
  UE::String::ParseTokens
            (&local_68,&local_78,(TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_a8,
             Trim|SkipEmpty);
  lVar11 = -1;
  if (local_res8[0] != '\0') {
    lVar11 = local_d8[0];
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_141fe8bcb:
  (**(code **)(*(longlong *)this->UnderlyingProp + 0x1e8))(this->UnderlyingProp,param_2,lVar11);
  return;
}

// StaticClass @ 141fe9770

FFieldClass * __cdecl FEnumProperty::StaticClass(void)

{
  FFieldClass *pFVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pFVar1 = FProperty::StaticClass();
      FFieldClass::FFieldClass
                (&::StaticFieldClass,L"FEnumProperty",0x1000000000000,
                 CASTCLASS_FEnumProperty|CASTCLASS_FProperty|CASTCLASS_UField,pFVar1,Construct);
      atexit(`FEnumProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__)
      ;
      _Init_thread_footer(&::_TSS0);
      return &::StaticFieldClass;
    }
  }
  return &::StaticFieldClass;
}

// operator_new @ 142259b30

void * __cdecl FEnumProperty::operator_new(ulong64 param_1)

{
  FField *this;
  FFieldClass *pFVar1;
  
  this = FMemory::Malloc(param_1,0);
  if (this != (FField *)0x0) {
    pFVar1 = StaticClass();
    FField::FField(this,EC_InternalUseOnlyConstructor,pFVar1);
    this->_padding_ = (longlong)&___7FEnumProperty__6B_;
    this[1].Next = (FField *)0x0;
    this[1].NamePrivate.ComparisonIndex = 0;
    this[1].NamePrivate.Number = 0;
    *(undefined8 *)&this[1].FlagsPrivate = 0;
    this[2]._padding_ = 0;
    this[2].ClassPrivate = (FFieldClass *)0x0;
    this[2].Next = (FField *)0x0;
  }
  return this;
}

