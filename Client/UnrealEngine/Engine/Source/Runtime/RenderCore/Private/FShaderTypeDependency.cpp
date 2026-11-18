// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 4

// GetTypeLayout @ 145e15730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __thiscall FShaderTypeDependency::GetTypeLayout(FShaderTypeDependency *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderTypeDepe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderTypeDependency,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceHash";
    DAT_15518db92 = Freeze::FindFieldNameLength(L"SourceHash");
    if ((DAT_15518cf37 & 2) == 0) {
      DAT_15518cf37 = DAT_15518cf37 | 3;
      _DAT_15518cf28 = 0x14;
      _DAT_15518ced8 = L"FSHAHash";
      _DAT_15518cef0 = TStaticGetTypeLayoutHelper<FSHAHash>::CallWriteMemoryImage;
      _DAT_15518cef8 = TStaticGetTypeLayoutHelper<FSHAHash>::CallUnfrozenCopy;
      _DAT_15518cf00 = TStaticGetTypeLayoutHelper<FSHAHash>::CallAppendHash;
      _DAT_15518cf08 = TStaticGetTypeLayoutHelper<FSHAHash>::CallGetTargetAlignment;
      _DAT_15518cf10 = TStaticGetTypeLayoutHelper<FSHAHash>::CallToString;
      _DAT_15518cee8 = TStaticGetTypeLayoutHelper<FSHAHash>::CallDestroy;
      _DAT_15518cf30 = 4;
      DAT_15518cf34 = 0;
      _DAT_15518cf2c = 0x14;
    }
    _DAT_15518db88 = 0xc;
    _DAT_15518db70 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FSHAHash>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518db78 = ::TypeBuffer[0x10];
    DAT_15518db78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518db8c = 1;
    _DAT_15518db90 = 0;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PermutationId";
    DAT_15518db62 = Freeze::FindFieldNameLength(L"PermutationId");
    _DAT_15518db40 = StaticGetTypeLayoutDesc<int>();
    DAT_15518db48 = ::TypeBuffer[0x10];
    DAT_15518db48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518db58 = 8;
    _DAT_15518db5c = 1;
    _DAT_15518db60 = 0;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypeName";
    DAT_15518db32 = Freeze::FindFieldNameLength(L"ShaderTypeName");
    _DAT_15518db10 = FHashedName::StaticGetTypeLayout();
    _DAT_15518db20 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518db18 = ::TypeBuffer[0x10];
    DAT_15518db18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db18_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518db28 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db2c = 1;
    _DAT_15518db30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145e18900

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderTypeDependency::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  return;
}

// RefreshCachedSourceHash @ 145e203d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FShaderTypeDependency::RefreshCachedSourceHash(FShaderTypeDependency *this,EShaderPlatform param_1)

{
  undefined8 uVar1;
  TMap<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
  *this_00;
  FShaderType **ppFVar2;
  FSHAHash *pFVar3;
  FShaderType *pFVar4;
  
  this_00 = FShaderType::GetNameToTypeMap();
  ppFVar2 = TMapBase<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
            ::Find((TMapBase<FHashedName,FShaderType_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FHashedName,FShaderType_*,0>_>
                    *)this_00,&this->ShaderTypeName);
  if (ppFVar2 == (FShaderType **)0x0) {
    pFVar4 = (FShaderType *)0x0;
  }
  else {
    pFVar4 = *ppFVar2;
  }
  if (pFVar4 == (FShaderType *)0x0) {
    (this->SourceHash).Hash[0] = '\0';
    (this->SourceHash).Hash[1] = '\0';
    (this->SourceHash).Hash[2] = '\0';
    (this->SourceHash).Hash[3] = '\0';
    (this->SourceHash).Hash[4] = '\0';
    (this->SourceHash).Hash[5] = '\0';
    (this->SourceHash).Hash[6] = '\0';
    (this->SourceHash).Hash[7] = '\0';
    (this->SourceHash).Hash[8] = '\0';
    (this->SourceHash).Hash[9] = '\0';
    (this->SourceHash).Hash[10] = '\0';
    (this->SourceHash).Hash[0xb] = '\0';
    (this->SourceHash).Hash[0xc] = '\0';
    (this->SourceHash).Hash[0xd] = '\0';
    (this->SourceHash).Hash[0xe] = '\0';
    (this->SourceHash).Hash[0xf] = '\0';
    (this->SourceHash).Hash[0x10] = '\0';
    (this->SourceHash).Hash[0x11] = '\0';
    (this->SourceHash).Hash[0x12] = '\0';
    (this->SourceHash).Hash[0x13] = '\0';
    return;
  }
  pFVar3 = GetShaderFileHash(pFVar4->SourceFilename,param_1);
  uVar1 = *(undefined8 *)(pFVar3->Hash + 8);
  *(undefined8 *)(this->SourceHash).Hash = *(undefined8 *)pFVar3->Hash;
  *(undefined8 *)((this->SourceHash).Hash + 8) = uVar1;
  *(undefined4 *)((this->SourceHash).Hash + 0x10) = *(undefined4 *)(pFVar3->Hash + 0x10);
  return;
}

// StaticGetTypeLayout @ 145e31570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderTypeDependency::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = ' ';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderTypeDepe;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderTypeDependency,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "SourceHash";
    DAT_15518db92 = Freeze::FindFieldNameLength(L"SourceHash");
    if ((DAT_15518cf37 & 2) == 0) {
      DAT_15518cf37 = DAT_15518cf37 | 3;
      _DAT_15518cf28 = 0x14;
      _DAT_15518ced8 = L"FSHAHash";
      _DAT_15518cef0 = TStaticGetTypeLayoutHelper<FSHAHash>::CallWriteMemoryImage;
      _DAT_15518cef8 = TStaticGetTypeLayoutHelper<FSHAHash>::CallUnfrozenCopy;
      _DAT_15518cf00 = TStaticGetTypeLayoutHelper<FSHAHash>::CallAppendHash;
      _DAT_15518cf08 = TStaticGetTypeLayoutHelper<FSHAHash>::CallGetTargetAlignment;
      _DAT_15518cf10 = TStaticGetTypeLayoutHelper<FSHAHash>::CallToString;
      _DAT_15518cee8 = TStaticGetTypeLayoutHelper<FSHAHash>::CallDestroy;
      _DAT_15518cf30 = 4;
      DAT_15518cf34 = 0;
      _DAT_15518cf2c = 0x14;
    }
    _DAT_15518db88 = 0xc;
    _DAT_15518db70 =
         &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FSHAHash>::Do(void)'
          ::__l2::TypeBuffer;
    DAT_15518db78 = ::TypeBuffer[0x10];
    DAT_15518db78_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db78_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db78_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db78_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db78_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db78_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db78_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db80 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518db8c = 1;
    _DAT_15518db90 = 0;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PermutationId";
    DAT_15518db62 = Freeze::FindFieldNameLength(L"PermutationId");
    _DAT_15518db40 = StaticGetTypeLayoutDesc<int>();
    DAT_15518db48 = ::TypeBuffer[0x10];
    DAT_15518db48_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db48_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db48_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db48_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db48_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db48_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db48_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db50 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518db58 = 8;
    _DAT_15518db5c = 1;
    _DAT_15518db60 = 0;
    `public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "ShaderTypeName";
    DAT_15518db32 = Freeze::FindFieldNameLength(L"ShaderTypeName");
    _DAT_15518db10 = FHashedName::StaticGetTypeLayout();
    _DAT_15518db20 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518db18 = ::TypeBuffer[0x10];
    DAT_15518db18_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518db18_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518db18_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518db18_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518db18_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518db18_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518db18_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518db28 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderTypeDependency::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518db2c = 1;
    _DAT_15518db30 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

