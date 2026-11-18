// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// ~FMaterialShaderMapContent @ 147f68e90

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

void __thiscall
FMaterialShaderMapContent::~FMaterialShaderMapContent(FMaterialShaderMapContent *this)

{
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->MaterialCompilationOutput).UserSceneTextureInputs)
  ;
  FUniformExpressionSet::~FUniformExpressionSet
            (&(this->MaterialCompilationOutput).UniformExpressionSet);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&this->OrderedMeshShaderMaps);
  FShaderMapContent::~FShaderMapContent((FShaderMapContent *)this);
  return;
}

// AcquireMeshShaderMap @ 147f6d560

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMeshMaterialShaderMap * __thiscall
FMaterialShaderMapContent::AcquireMeshShaderMap
          (FMaterialShaderMapContent *this,FHashedName *param_1)

{
  EShaderPlatform EVar1;
  FMeshMaterialShaderMap *this_00;
  
  this_00 = GetMeshShaderMap(this,param_1);
  if (this_00 == (FMeshMaterialShaderMap *)0x0) {
    this_00 = ::operator_new(0x68);
    if (this_00 == (FMeshMaterialShaderMap *)0x0) {
      this_00 = (FMeshMaterialShaderMap *)0x0;
    }
    else {
      EVar1 = FShaderMapContent::GetShaderPlatform((FShaderMapContent *)this);
      FShaderMapContent::FShaderMapContent((FShaderMapContent *)this_00,EVar1);
      FHashedName::FHashedName(&this_00->VertexFactoryTypeName,param_1);
    }
    AddMeshShaderMap(this,param_1,this_00);
  }
  return this_00;
}

// AddMeshShaderMap @ 147f6d720

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

void __thiscall
FMaterialShaderMapContent::AddMeshShaderMap
          (FMaterialShaderMapContent *this,FHashedName *param_1,FMeshMaterialShaderMap *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  ulonglong uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  uint uVar9;
  TMemoryImagePtr<FMeshMaterialShaderMap>_u_0 local_res8;
  
  if (param_1->Hash != (param_2->VertexFactoryTypeName).Hash) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexFactoryTypeName == MeshShaderMap->GetVertexFactoryTypeName()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Materials\\MaterialShader.cpp"
                       ,0xf8b,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FVar7 = (this->OrderedMeshShaderMaps).AllocatorInstance;
  uVar9 = (this->OrderedMeshShaderMaps).ArrayNum;
  if (((ulonglong)FVar7 & 1) != 0) {
    FVar7 = (ForAnyElementType)
            ((longlong)&(this->OrderedMeshShaderMaps).AllocatorInstance.field_0x0 +
            ((longlong)FVar7 >> 0x18));
  }
  iVar8 = 0;
  if (0 < (int)uVar9) {
    do {
      iVar1 = (uVar9 >> 1) + iVar8;
      lVar2 = (longlong)iVar1 * 8;
      uVar6 = *(ulonglong *)(lVar2 + (longlong)FVar7);
      if ((uVar6 & 1) != 0) {
        uVar6 = ((longlong)uVar6 >> 0x18) + lVar2 + (longlong)FVar7;
      }
      if (*(ulonglong *)(uVar6 + 0x60) < param_1->Hash) {
        iVar8 = iVar1 + (uVar9 & 1);
      }
      uVar4 = uVar9 >> 1;
      uVar9 = uVar9 >> 1;
    } while (uVar4 != 0);
  }
  local_res8.UnfrozenPtr = param_2;
  if (((ulonglong)param_2 & 1) != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Frozen.IsFrozen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x185,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>::Insert
            (&this->OrderedMeshShaderMaps,
             (TMemoryImagePtr<FMeshMaterialShaderMap> *)&local_res8.Frozen,iVar8);
  return;
}

// Finalize @ 147f779d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

void __thiscall
FMaterialShaderMapContent::Finalize(FMaterialShaderMapContent *this,FShaderMapResourceCode *param_1)

{
  ForAnyElementType FVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FShaderMapContent *this_00;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  FSHA1 local_c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FSHA1::FSHA1(&local_c8);
  FShaderMapContent::Finalize((FShaderMapContent *)this,param_1);
  FShaderMapContent::UpdateHash((FShaderMapContent *)this,&local_c8);
  FVar3 = (this->OrderedMeshShaderMaps).AllocatorInstance;
  iVar2 = (this->OrderedMeshShaderMaps).ArrayNum;
  if (((ulonglong)FVar3 & 1) != 0) {
    FVar3 = (ForAnyElementType)
            ((longlong)
             ((this->MaterialCompilationOutput).UniformExpressionSet.UniformTextureParameters + -5)
            + ((longlong)FVar3 >> 0x18));
  }
  FVar1 = (ForAnyElementType)((longlong)FVar3 + (longlong)iVar2 * 8);
  while( true ) {
    if ((this->OrderedMeshShaderMaps).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_d8);
    }
    if (FVar3 == FVar1) break;
    this_00 = *(FShaderMapContent **)FVar3;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)FVar3);
    }
    FShaderMapContent::Finalize(this_00,param_1);
    FShaderMapContent::UpdateHash(this_00,&local_c8);
    FVar3 = (ForAnyElementType)((longlong)FVar3 + 8);
  }
  FSHA1::Final(&local_c8);
  FSHA1::GetHash(&local_c8,(this->ShaderContentHash).Hash);
  FSHA1::~FSHA1(&local_c8);
  return;
}

// GetMeshShaderMap @ 147f7a6c0

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FMeshMaterialShaderMap * __thiscall
FMaterialShaderMapContent::GetMeshShaderMap(FMaterialShaderMapContent *this,FHashedName *param_1)

{
  TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FMeshMaterialShaderMap *pFVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  FProjectMeshShaderMapToKey local_res8;
  
  pTVar1 = &this->OrderedMeshShaderMaps;
  uVar4 = Algo::
          BinarySearchBy<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_>
                    (pTVar1,param_1,local_res8,(TLess<void>)local_res8);
  if (uVar4 == 0xffffffff) {
    pFVar5 = (FMeshMaterialShaderMap *)0x0;
  }
  else {
    uVar6 = 0;
    if ((int)uVar4 < (this->OrderedMeshShaderMaps).ArrayNum) {
      uVar6 = ~uVar4 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FMeshMaterialShaderMap *)(*pcVar2)();
        return pFVar5;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    pFVar5 = *(FMeshMaterialShaderMap **)((longlong)FVar7 + (longlong)(int)uVar4 * 8);
    if (((ulonglong)pFVar5 & 1) != 0) {
      return (FMeshMaterialShaderMap *)
             (((longlong)pFVar5 >> 0x18) + (longlong)FVar7 + (longlong)(int)uVar4 * 8);
    }
  }
  return pFVar5;
}

// GetNumShaders @ 147f7a820

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

uint __thiscall FMaterialShaderMapContent::GetNumShaders(FMaterialShaderMapContent *this)

{
  int *piVar1;
  ForAnyElementType FVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ForAnyElementType FVar6;
  FShaderMapContent *this_00;
  undefined1 local_res8 [8];
  
  uVar4 = FShaderMapContent::GetNumShaders((FShaderMapContent *)this);
  FVar6 = (this->OrderedMeshShaderMaps).AllocatorInstance;
  piVar1 = &(this->OrderedMeshShaderMaps).ArrayNum;
  iVar3 = *piVar1;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)
             ((this->MaterialCompilationOutput).UniformExpressionSet.UniformTextureParameters + -5)
            + ((longlong)FVar6 >> 0x18));
  }
  FVar2 = (ForAnyElementType)((longlong)FVar6 + (longlong)iVar3 * 8);
  while( true ) {
    if (*piVar1 != iVar3) {
      `TCheckedPointerIterator<TMemoryImagePtr<FMeshMaterialShaderMap>_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (FVar6 == FVar2) break;
    this_00 = *(FShaderMapContent **)FVar6;
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)FVar6);
    }
    uVar5 = FShaderMapContent::GetNumShaders(this_00);
    uVar4 = uVar4 + uVar5;
    FVar6 = (ForAnyElementType)((longlong)FVar6 + 8);
  }
  return uVar4;
}

// GetTypeLayout @ 147f7cd00

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

FTypeLayoutDesc * __thiscall
FMaterialShaderMapContent::GetTypeLayout(FMaterialShaderMapContent *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa8;
    ::TypeBuffer[0x59] = '\x02';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialShader;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialShaderMapContent,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FShaderMapContent::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 147f7d800

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FMaterialShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ResolutionRelativeToInput";
  DAT_155216bf2 = Freeze::FindFieldNameLength(L"ResolutionRelativeToInput");
  _DAT_155216bd0 = StaticGetTypeLayoutDesc<FScriptName>();
  _DAT_155216be8 = 0x298;
  _DAT_155216be0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216bec = 1;
  _DAT_155216bf0 = 0;
  _DAT_155216bd8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<7>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UserTextureDivisorY";
  DAT_155216bc2 = Freeze::FindFieldNameLength(L"UserTextureDivisorY");
  _DAT_155216ba0 = StaticGetTypeLayoutDesc<int>();
  _DAT_155216bb0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216bb8 = 0x294;
  _DAT_155216bbc = 1;
  _DAT_155216bc0 = 0;
  _DAT_155216ba8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<6>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UserTextureDivisorX";
  DAT_155216b92 = Freeze::FindFieldNameLength(L"UserTextureDivisorX");
  _DAT_155216b70 = StaticGetTypeLayoutDesc<int>();
  _DAT_155216b80 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216b88 = 0x290;
  _DAT_155216b8c = 1;
  _DAT_155216b90 = 0;
  _DAT_155216b78 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<5>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "UserSceneTextureOutput";
  DAT_155216b62 = Freeze::FindFieldNameLength(L"UserSceneTextureOutput");
  _DAT_155216b40 = StaticGetTypeLayoutDesc<FScriptName>();
  _DAT_155216b50 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216b58 = 0x284;
  _DAT_155216b5c = 1;
  _DAT_155216b60 = 0;
  _DAT_155216b48 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "ShaderContentHash";
  DAT_155216b32 = Freeze::FindFieldNameLength(L"ShaderContentHash");
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
  _DAT_155216b20 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216b10 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<FSHAHash>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216b28 = 0x270;
  _DAT_155216b2c = 1;
  _DAT_155216b30 = 0;
  _DAT_155216b18 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "MaterialCompilationOutput";
  DAT_155216b02 = Freeze::FindFieldNameLength(L"MaterialCompilationOutput");
  _DAT_155216ae0 = FMaterialCompilationOutput::StaticGetTypeLayout();
  _DAT_155216af0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216af8 = 0x70;
  _DAT_155216afc = 1;
  _DAT_155216b00 = 0;
  _DAT_155216ae8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "OrderedMeshShaderMaps";
  DAT_155216ad2 = Freeze::FindFieldNameLength(L"OrderedMeshShaderMaps");
  if ((DAT_155216c6f & 2) == 0) {
    DAT_155216c6f = DAT_155216c6f | 3;
    _DAT_155216c60 = 0x10;
    _DAT_155216c10 = L"(TArray<T, AllocatorType>)";
    _DAT_155216c28 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155216c30 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155216c38 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155216c40 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155216c48 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155216c20 =
         TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155216c68 = 8;
    DAT_155216c6c = 0;
    _DAT_155216c64 = 0x10;
  }
  _DAT_155216ac0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155216ab0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155216ac8 = 0x60;
  _DAT_155216acc = 1;
  _DAT_155216ad0 = 0;
  _DAT_155216ab8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_FMaterialShaderMapContent::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 147f7f750

void __cdecl
FMaterialShaderMapContent::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x248));
    FUniformExpressionSet::~FUniformExpressionSet
              ((FUniformExpressionSet *)((longlong)param_1 + 0x70));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x60));
    FShaderMapContent::~FShaderMapContent(param_1);
  }
  memset(param_1,0xfe,0x2a8);
  return;
}

// RemoveMeshShaderMap @ 147f853e0

/* WARNING: Enum "ESubstrateBsdfFeature": Some values do not have unique names */

void __thiscall
FMaterialShaderMapContent::RemoveMeshShaderMap(FMaterialShaderMapContent *this,FHashedName *param_1)

{
  TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_> *pTVar1;
  int *piVar2;
  void *_Dst;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  ForAnyElementType FVar7;
  int iVar8;
  longlong lVar9;
  FShaderMapContent *this_00;
  uint uVar10;
  FProjectMeshShaderMapToKey local_res8;
  
  pTVar1 = &this->OrderedMeshShaderMaps;
  uVar5 = Algo::
          BinarySearchBy<TArray<TMemoryImagePtr<FMeshMaterialShaderMap>,TMemoryImageAllocator<0>_>,FHashedName,FMaterialShaderMapContent::FProjectMeshShaderMapToKey,TLess<void>_>
                    (pTVar1,param_1,local_res8,(TLess<void>)local_res8);
  lVar9 = (longlong)(int)uVar5;
  if (uVar5 != 0xffffffff) {
    uVar10 = ~uVar5 >> 0x1f;
    uVar6 = 0;
    if ((int)uVar5 < (this->OrderedMeshShaderMaps).ArrayNum) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    this_00 = *(FShaderMapContent **)((longlong)FVar7 + lVar9 * 8);
    if (((ulonglong)this_00 & 1) != 0) {
      this_00 = (FShaderMapContent *)(((longlong)this_00 >> 0x18) + (longlong)FVar7 + lVar9 * 8);
    }
    if (this_00 != (FShaderMapContent *)0x0) {
      FShaderMapContent::~FShaderMapContent(this_00);
      ::operator_delete(this_00,0x68);
    }
    uVar6 = 0;
    if ((int)uVar5 < (this->OrderedMeshShaderMaps).ArrayNum) {
      uVar6 = uVar10;
    }
    if (uVar6 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar7 = pTVar1->AllocatorInstance;
    if (((ulonglong)FVar7 & 1) != 0) {
      FVar7 = (ForAnyElementType)
              ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar7 >> 0x18));
    }
    _Dst = (void *)((longlong)FVar7 + lVar9 * 8);
    iVar8 = (this->OrderedMeshShaderMaps).ArrayNum + ~uVar5;
    if (iVar8 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar8 << 3);
    }
    piVar2 = &(this->OrderedMeshShaderMaps).ArrayNum;
    *piVar2 = *piVar2 + -1;
    UE::Core::Private::ReallocShrink<1,TMemoryImageAllocator<0>::ForAnyElementType>
              (8,8,&pTVar1->AllocatorInstance,(this->OrderedMeshShaderMaps).ArrayNum,
               &(this->OrderedMeshShaderMaps).ArrayMax);
  }
  return;
}

// StaticGetTypeLayout @ 147f8a560

FTypeLayoutDesc * __cdecl FMaterialShaderMapContent::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 0xa8;
    ::TypeBuffer[0x59] = '\x02';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FMaterialShader;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FMaterialShaderMapContent,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    ::FieldBuffer[0x2a] = '\x04';
    ::FieldBuffer._0_8_ = u_BASE;
    ::FieldBuffer._8_8_ = FShaderMapContent::StaticGetTypeLayout();
    ::TypeBuffer[0x65] = ::TypeBuffer[0x65] + '\x01';
    ::FieldBuffer._24_8_ = Freeze::DefaultWriteMemoryImageField;
    ::FieldBuffer[0x10] = ::TypeBuffer[0x10];
    ::FieldBuffer[0x11] = ::TypeBuffer[0x11];
    ::FieldBuffer[0x12] = ::TypeBuffer[0x12];
    ::FieldBuffer[0x13] = ::TypeBuffer[0x13];
    ::FieldBuffer[0x14] = ::TypeBuffer[0x14];
    ::FieldBuffer[0x15] = ::TypeBuffer[0x15];
    ::FieldBuffer[0x16] = ::TypeBuffer[0x16];
    ::FieldBuffer[0x17] = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ = ::FieldBuffer;
    ::FieldBuffer[0x20] = '\0';
    ::FieldBuffer[0x21] = '\0';
    ::FieldBuffer[0x22] = '\0';
    ::FieldBuffer[0x23] = '\0';
    ::FieldBuffer[0x24] = '\x01';
    ::FieldBuffer[0x25] = '\0';
    ::FieldBuffer[0x26] = '\0';
    ::FieldBuffer[0x27] = '\0';
    if (((FTypeLayoutDesc *)::FieldBuffer._8_8_)->Interface != NonVirtual) {
      ::TypeBuffer[0x66] = ::TypeBuffer[0x66] + '\x01';
    }
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

