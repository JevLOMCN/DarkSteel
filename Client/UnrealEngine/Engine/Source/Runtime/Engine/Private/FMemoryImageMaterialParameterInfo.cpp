// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// GetTypeLayout @ 147f7cd70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FMemoryImageMaterialParameterInfo::GetTypeLayout(FMemoryImageMaterialParameterInfo *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x14';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHashedMaterial;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMemoryImageMaterialParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Association";
    DAT_155215be2 = Freeze::FindFieldNameLength(L"Association");
    if ((DAT_1552171b7 & 2) == 0) {
      DAT_1552171b7 = DAT_1552171b7 | 3;
      _DAT_1552171a8 = 1;
      _DAT_155217158 = L"TEnumAsByte<T>";
      _DAT_155217170 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallWriteMemoryImage;
      _DAT_155217178 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallUnfrozenCopy;
      _DAT_155217180 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallAppendHash;
      _DAT_155217188 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallGetTargetAlignment;
      _DAT_155217190 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallToString;
      _DAT_155217168 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallDestroy
      ;
      _DAT_1552171b0 = 1;
      DAT_1552171b4 = 0;
      _DAT_1552171ac = 1;
    }
    _DAT_155215bd8 = 0x10;
    _DAT_155215bc0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TEnumAsByte<EMaterialParameterAssociation>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155215bc8 = ::TypeBuffer[0x10];
    DAT_155215bc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215bc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215bc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215bc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215bc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215bc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215bc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215bd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215bdc = 1;
    _DAT_155215be0 = 0;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Index";
    DAT_155215bb2 = Freeze::FindFieldNameLength(L"Index");
    _DAT_155215b90 = StaticGetTypeLayoutDesc<int>();
    DAT_155215b98 = ::TypeBuffer[0x10];
    DAT_155215b98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215b98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215b98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215b98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215b98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215b98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215b98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ba0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215ba8 = 0xc;
    _DAT_155215bac = 1;
    _DAT_155215bb0 = 0;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Name";
    DAT_155215b82 = Freeze::FindFieldNameLength(L"Name");
    _DAT_155215b60 = StaticGetTypeLayoutDesc<FScriptName>();
    _DAT_155215b70 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215b68 = ::TypeBuffer[0x10];
    DAT_155215b68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215b68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215b68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215b68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215b68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215b68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215b68_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215b78 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215b7c = 1;
    _DAT_155215b80 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 147f7f860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FMemoryImageMaterialParameterInfo::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = _UNK_1506d61ec;
  uVar3 = _UNK_1506d61e8;
  uVar2 = _UNK_1506d61e4;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined4 *)((longlong)param_1 + 4) = uVar2;
  *(undefined4 *)((longlong)param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// RemapLayerIndex @ 147f84e60

bool __thiscall
FMemoryImageMaterialParameterInfo::RemapLayerIndex
          (FMemoryImageMaterialParameterInfo *this,TArrayView<int_const_,int> *param_1,
          FMemoryImageMaterialParameterInfo *param_2)

{
  uchar uVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  FNameEntryId FVar7;
  undefined3 uVar8;
  bool bVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  
  piVar6 = param_1->DataPtr;
  piVar5 = param_1->DataPtr;
  iVar2 = param_1->ArrayNum;
  uVar1 = (this->Association).Value;
  if (uVar1 == '\0') {
    uVar12 = this->Index;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar2)) {
      uVar11 = 0;
      if ((int)uVar12 < iVar2) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      iVar2 = piVar6[(int)uVar12];
      if (iVar2 != -1) {
        FVar7.Value = (this->Name).DisplayIndex.Value;
        uVar4 = *(undefined8 *)&(this->Name).Number;
        (param_2->Name).ComparisonIndex = (FNameEntryId)(this->Name).ComparisonIndex.Value;
        (param_2->Name).DisplayIndex = (FNameEntryId)FVar7.Value;
        *(undefined8 *)&(param_2->Name).Number = uVar4;
        uVar8 = *(undefined3 *)&this->field_0x11;
        param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)(this->Association).Value
        ;
        *(undefined3 *)&param_2->field_0x11 = uVar8;
        param_2->Index = iVar2;
        return true;
      }
    }
  }
  else if (uVar1 == '\x01') {
    uVar12 = this->Index + 1;
    if ((-1 < (int)uVar12) && ((int)uVar12 < iVar2)) {
      uVar11 = 0;
      if ((int)uVar12 < iVar2) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if (uVar11 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar9) {
          pcVar3 = (code *)swi(3);
          uVar10 = (*pcVar3)();
          return (bool)uVar10;
        }
      }
      iVar2 = piVar5[(int)uVar12];
      if (iVar2 != -1) {
        if (iVar2 < 1) {
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("NewIndex > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                             ,0x164a,L"");
          if (bVar9) {
            pcVar3 = (code *)swi(3);
            uVar10 = (*pcVar3)();
            return (bool)uVar10;
          }
        }
        FVar7.Value = (this->Name).DisplayIndex.Value;
        uVar4 = *(undefined8 *)&(this->Name).Number;
        (param_2->Name).ComparisonIndex = (FNameEntryId)(this->Name).ComparisonIndex.Value;
        (param_2->Name).DisplayIndex = (FNameEntryId)FVar7.Value;
        *(undefined8 *)&(param_2->Name).Number = uVar4;
        uVar8 = *(undefined3 *)&this->field_0x11;
        param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)(this->Association).Value
        ;
        *(undefined3 *)&param_2->field_0x11 = uVar8;
        param_2->Index = iVar2 + -1;
        return true;
      }
    }
  }
  else {
    if (uVar1 == '\x02') {
      FVar7.Value = (this->Name).DisplayIndex.Value;
      uVar4 = *(undefined8 *)&(this->Name).Number;
      (param_2->Name).ComparisonIndex = (FNameEntryId)(this->Name).ComparisonIndex.Value;
      (param_2->Name).DisplayIndex = (FNameEntryId)FVar7.Value;
      *(undefined8 *)&(param_2->Name).Number = uVar4;
      uVar8 = *(undefined3 *)&this->field_0x11;
      param_2->Association = (TEnumAsByte<EMaterialParameterAssociation>)(this->Association).Value;
      *(undefined3 *)&param_2->field_0x11 = uVar8;
      return true;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShared.cpp"
                       ,0x1652,L"");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      uVar10 = (*pcVar3)();
      return (bool)uVar10;
    }
  }
  return false;
}

// StaticGetTypeLayout @ 147f8b510

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FMemoryImageMaterialParameterInfo::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x14';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\x04';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FHashedMaterial;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMemoryImageMaterialParameterInfo,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Association";
    DAT_155215be2 = Freeze::FindFieldNameLength(L"Association");
    if ((DAT_1552171b7 & 2) == 0) {
      DAT_1552171b7 = DAT_1552171b7 | 3;
      _DAT_1552171a8 = 1;
      _DAT_155217158 = L"TEnumAsByte<T>";
      _DAT_155217170 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallWriteMemoryImage;
      _DAT_155217178 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallUnfrozenCopy;
      _DAT_155217180 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallAppendHash;
      _DAT_155217188 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallGetTargetAlignment;
      _DAT_155217190 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::
           CallToString;
      _DAT_155217168 =
           TStaticGetTypeLayoutHelper<TEnumAsByte<enum_EMaterialParameterAssociation>_>::CallDestroy
      ;
      _DAT_1552171b0 = 1;
      DAT_1552171b4 = 0;
      _DAT_1552171ac = 1;
    }
    _DAT_155215bd8 = 0x10;
    _DAT_155215bc0 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TEnumAsByte<EMaterialParameterAssociation>_>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155215bc8 = ::TypeBuffer[0x10];
    DAT_155215bc8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215bc8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215bc8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215bc8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215bc8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215bc8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215bc8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215bd0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215bdc = 1;
    _DAT_155215be0 = 0;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Index";
    DAT_155215bb2 = Freeze::FindFieldNameLength(L"Index");
    _DAT_155215b90 = StaticGetTypeLayoutDesc<int>();
    DAT_155215b98 = ::TypeBuffer[0x10];
    DAT_155215b98_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215b98_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215b98_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215b98_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215b98_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215b98_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215b98_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215ba0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155215ba8 = 0xc;
    _DAT_155215bac = 1;
    _DAT_155215bb0 = 0;
    `public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Name";
    DAT_155215b82 = Freeze::FindFieldNameLength(L"Name");
    _DAT_155215b60 = StaticGetTypeLayoutDesc<FScriptName>();
    _DAT_155215b70 = Freeze::DefaultWriteMemoryImageField;
    DAT_155215b68 = ::TypeBuffer[0x10];
    DAT_155215b68_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155215b68_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155215b68_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155215b68_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155215b68_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155215b68_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155215b68_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_155215b78 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FMemoryImageMaterialParameterInfo::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155215b7c = 1;
    _DAT_155215b80 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

