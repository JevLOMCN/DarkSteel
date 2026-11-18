// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 5

// CallWriteFrozenField @ 148df6c00

void __cdecl
FNiagaraDataInterfaceParamRef::InternalLinkType<3>::CallWriteFrozenField
          (FMemoryImageWriter *param_1,void *param_2,void *param_3,FTypeLayoutDesc *param_4,
          FTypeLayoutDesc *param_5)

{
  code *pcVar1;
  bool bVar2;
  FPointerTableBase *pFVar3;
  FTypeLayoutDesc *pFVar4;
  longlong *plVar5;
  FTypeLayoutDesc *pFVar6;
  void *pvVar7;
  FMemoryImageWriter local_res18 [2];
  
  pFVar3 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((*(byte *)((longlong)param_2 + 8) & 1) == 0) {
    plVar5 = *(longlong **)((longlong)param_2 + 8);
  }
  else {
    if (pFVar3 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
             ::Do();
    plVar5 = (longlong *)
             (**(code **)((longlong)*pFVar3 + 0x10))
                       (pFVar3,pFVar4,*(ulonglong *)((longlong)param_2 + 8) >> 1);
  }
  pFVar4 = (FTypeLayoutDesc *)(**(code **)(*plVar5 + 0x2c0))();
  pvVar7 = *(void **)param_3;
  if (((ulonglong)pvVar7 & 1) != 0) {
    pvVar7 = (void *)(((longlong)pvVar7 >> 0x18) + (longlong)param_3);
  }
  if (pvVar7 != (void *)0x0) {
    if (pFVar4 == (FTypeLayoutDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DerivedTypeDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x1ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)local_res18,pFVar6,(uint *)pFVar4);
    FMemoryImageWriter::WriteObject(local_res18,pvVar7,pFVar4);
    FMemoryImageWriter::~FMemoryImageWriter(local_res18);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

// GetTypeLayout @ 148e07df0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall
FNiagaraDataInterfaceParamRef::GetTypeLayout(FNiagaraDataInterfaceParamRef *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraDataInterfaceParamRef,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15526677a = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_15526b7d7 & 2) == 0) {
      DAT_15526b7d7 = DAT_15526b7d7 | 3;
      _DAT_15526b7c8 = 8;
      _DAT_15526b778 = L"TMemoryImagePtr<T>";
      _DAT_15526b790 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallWriteMemoryImage;
      _DAT_15526b798 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallUnfrozenCopy;
      _DAT_15526b7a0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallAppendHash;
      _DAT_15526b7a8 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallGetTargetAlignment;
      _DAT_15526b7b0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallToString;
      _DAT_15526b788 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallDestroy;
      _DAT_15526b7d0 = 8;
      DAT_15526b7d4 = 0;
      _DAT_15526b7cc = 8;
    }
    _DAT_155266770 = 0x10;
    _DAT_155266758 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_155266774 = 1;
    _DAT_155266768 = InternalLinkType<3>::CallWriteFrozenField;
    DAT_155266760 = ::TypeBuffer[0x10];
    DAT_155266760_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266760_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266760_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266760_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266760_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266760_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266760_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155266778 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DIType";
    DAT_15526674a = Freeze::FindFieldNameLength(L"DIType");
    _DAT_155266728 =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::Do();
    DAT_155266730 = ::TypeBuffer[0x10];
    DAT_155266730_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266730_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266730_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266730_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266730_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266730_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266730_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266738 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266740 = 8;
    _DAT_155266744 = 1;
    _DAT_155266748 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParametersOffset";
    DAT_15526671a = Freeze::FindFieldNameLength(L"ShaderParametersOffset");
    if ((DAT_154f11547 & 2) == 0) {
      DAT_154f11547 = DAT_154f11547 | 3;
      _DAT_154f11538 = 4;
      _DAT_154f114e8 = L"unsigned int";
      _DAT_154f11500 = TStaticGetTypeLayoutHelper<unsigned_int>::CallWriteMemoryImage;
      _DAT_154f11508 = TStaticGetTypeLayoutHelper<unsigned_int>::CallUnfrozenCopy;
      _DAT_154f11510 = TStaticGetTypeLayoutHelper<unsigned_int>::CallAppendHash;
      _DAT_154f11518 = TStaticGetTypeLayoutHelper<unsigned_int>::CallGetTargetAlignment;
      _DAT_154f11520 = TStaticGetTypeLayoutHelper<unsigned_int>::CallToString;
      _DAT_154f114f8 = TStaticGetTypeLayoutHelper<unsigned_int>::CallDestroy;
      _DAT_154f11540 = 4;
      DAT_154f11544 = 0;
      _DAT_154f1153c = 4;
    }
    _DAT_155266708 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552666f8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_int>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155266700 = ::TypeBuffer[0x10];
    DAT_155266700_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266700_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266700_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266700_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266700_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266700_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266700_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266710 = 0;
    _DAT_155266714 = 1;
    _DAT_155266718 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 148e087c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraDataInterfaceParamRef::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  FTypeLayoutDesc *pFVar3;
  byte bVar4;
  FNiagaraDataInterfaceParametersCS *this;
  
  if (!param_4) {
    this = *(FNiagaraDataInterfaceParametersCS **)((longlong)param_1 + 0x10);
    bVar4 = (byte)this;
    if (((ulonglong)this & 1) != 0) {
      this = (FNiagaraDataInterfaceParametersCS *)
             (((longlong)this >> 0x18) + 0x10 + (longlong)param_1);
    }
    if (this != (FNiagaraDataInterfaceParametersCS *)0x0) {
      pFVar3 = FNiagaraDataInterfaceParametersCS::GetTypeLayout(this);
      InternalDeleteObjectFromLayout(this,pFVar3,(FPointerTableBase *)0x0,(bool)(bVar4 & 1));
    }
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  return;
}

// StaticGetTypeLayout @ 148e0f6d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FNiagaraDataInterfaceParamRef::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '\x18';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FNiagaraDataInt;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FNiagaraDataInterfaceParamRef,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Parameters";
    DAT_15526677a = Freeze::FindFieldNameLength(L"Parameters");
    if ((DAT_15526b7d7 & 2) == 0) {
      DAT_15526b7d7 = DAT_15526b7d7 | 3;
      _DAT_15526b7c8 = 8;
      _DAT_15526b778 = L"TMemoryImagePtr<T>";
      _DAT_15526b790 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallWriteMemoryImage;
      _DAT_15526b798 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallUnfrozenCopy;
      _DAT_15526b7a0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallAppendHash;
      _DAT_15526b7a8 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallGetTargetAlignment;
      _DAT_15526b7b0 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallToString;
      _DAT_15526b788 =
           TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::
           CallDestroy;
      _DAT_15526b7d0 = 8;
      DAT_15526b7d4 = 0;
      _DAT_15526b7cc = 8;
    }
    _DAT_155266770 = 0x10;
    _DAT_155266758 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TMemoryImagePtr<FNiagaraDataInterfaceParametersCS>_>::Do(void)'
          ::__l2::TypeBuffer;
    _DAT_155266774 = 1;
    _DAT_155266768 = InternalLinkType<3>::CallWriteFrozenField;
    DAT_155266760 = ::TypeBuffer[0x10];
    DAT_155266760_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266760_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266760_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266760_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266760_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266760_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266760_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    DAT_155266778 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "DIType";
    DAT_15526674a = Freeze::FindFieldNameLength(L"DIType");
    _DAT_155266728 =
         TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
         ::Do();
    DAT_155266730 = ::TypeBuffer[0x10];
    DAT_155266730_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266730_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266730_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266730_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266730_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266730_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266730_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266738 = Freeze::DefaultWriteMemoryImageField;
    _DAT_155266740 = 8;
    _DAT_155266744 = 1;
    _DAT_155266748 = 0;
    `public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderParametersOffset";
    DAT_15526671a = Freeze::FindFieldNameLength(L"ShaderParametersOffset");
    if ((DAT_154f11547 & 2) == 0) {
      DAT_154f11547 = DAT_154f11547 | 3;
      _DAT_154f11538 = 4;
      _DAT_154f114e8 = L"unsigned int";
      _DAT_154f11500 = TStaticGetTypeLayoutHelper<unsigned_int>::CallWriteMemoryImage;
      _DAT_154f11508 = TStaticGetTypeLayoutHelper<unsigned_int>::CallUnfrozenCopy;
      _DAT_154f11510 = TStaticGetTypeLayoutHelper<unsigned_int>::CallAppendHash;
      _DAT_154f11518 = TStaticGetTypeLayoutHelper<unsigned_int>::CallGetTargetAlignment;
      _DAT_154f11520 = TStaticGetTypeLayoutHelper<unsigned_int>::CallToString;
      _DAT_154f114f8 = TStaticGetTypeLayoutHelper<unsigned_int>::CallDestroy;
      _DAT_154f11540 = 4;
      DAT_154f11544 = 0;
      _DAT_154f1153c = 4;
    }
    _DAT_155266708 = Freeze::DefaultWriteMemoryImageField;
    _DAT_1552666f8 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<unsigned_int>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_155266700 = ::TypeBuffer[0x10];
    DAT_155266700_1._0_1_ = ::TypeBuffer[0x11];
    DAT_155266700_1._1_1_ = ::TypeBuffer[0x12];
    DAT_155266700_1._2_1_ = ::TypeBuffer[0x13];
    DAT_155266700_1._3_1_ = ::TypeBuffer[0x14];
    DAT_155266700_1._4_1_ = ::TypeBuffer[0x15];
    DAT_155266700_1._5_1_ = ::TypeBuffer[0x16];
    DAT_155266700_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FNiagaraDataInterfaceParamRef::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_155266710 = 0;
    _DAT_155266714 = 1;
    _DAT_155266718 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// WriteFrozenParameters @ 148e13340

void __thiscall
FNiagaraDataInterfaceParamRef::WriteFrozenParameters
          (FNiagaraDataInterfaceParamRef *this,FMemoryImageWriter *param_1,
          TMemoryImagePtr<FNiagaraDataInterfaceParametersCS> *param_2)

{
  code *pcVar1;
  bool bVar2;
  FPointerTableBase *pFVar3;
  FTypeLayoutDesc *pFVar4;
  UNiagaraDataInterfaceBase *pUVar5;
  FTypeLayoutDesc *pFVar6;
  void *pvVar7;
  FMemoryImageWriter local_res18 [2];
  
  pFVar3 = FMemoryImageWriter::TryGetPrevPointerTable(param_1);
  if ((*(byte *)&(this->DIType).field0_0x0 & 1) == 0) {
    pUVar5 = (this->DIType).field0_0x0.Ptr;
  }
  else {
    if (pFVar3 == (FPointerTableBase *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("PtrTable",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x465,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar4 = TStaticGetTypeLayoutHelper<TIndexedPtrBase<UNiagaraDataInterfaceBase,UNiagaraDataInterfaceBase_*>_>
             ::Do();
    pUVar5 = (UNiagaraDataInterfaceBase *)
             (**(code **)((longlong)*pFVar3 + 0x10))
                       (pFVar3,pFVar4,(this->DIType).field0_0x0.PackedIndex >> 1);
  }
  pFVar4 = (FTypeLayoutDesc *)(**(code **)(*(longlong *)pUVar5 + 0x2c0))();
  pvVar7 = (void *)(param_2->field0_0x0).Packed;
  if (((ulonglong)pvVar7 & 1) != 0) {
    pvVar7 = (void *)((longlong)&param_2->field0_0x0 + ((longlong)pvVar7 >> 0x18));
  }
  if (pvVar7 != (void *)0x0) {
    if (pFVar4 == (FTypeLayoutDesc *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("DerivedTypeDesc",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x1ab,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pFVar6 = FNiagaraDataInterfaceParametersCS::StaticGetTypeLayout();
    FMemoryImageWriter::WritePointer(param_1,(FTypeLayoutDesc *)local_res18,pFVar6,(uint *)pFVar4);
    FMemoryImageWriter::WriteObject(local_res18,pvVar7,pFVar4);
    FMemoryImageWriter::~FMemoryImageWriter(local_res18);
    return;
  }
  FMemoryImageWriter::WriteNullPointer(param_1);
  return;
}

