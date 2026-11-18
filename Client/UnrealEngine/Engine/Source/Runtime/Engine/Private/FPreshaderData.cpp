// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 16

// AppendHash @ 1485ab0e0

void __thiscall
UE::Shader::FPreshaderData::AppendHash(FPreshaderData *this,FXxHash64Builder *param_1)

{
  ForAnyElementType FVar1;
  
  FVar1 = (this->Names).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->Names).AllocatorInstance.field_0x0 + ((longlong)FVar1 >> 0x18));
  }
  FXxHash64Builder::Update(param_1,(void *)FVar1,(ulonglong)(uint)((this->Names).ArrayNum * 0xc));
  FVar1 = (this->StructTypes).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->StructTypes).AllocatorInstance.field_0x0 + ((longlong)FVar1 >> 0x18))
    ;
  }
  FXxHash64Builder::Update
            (param_1,(void *)FVar1,(ulonglong)(uint)((this->StructTypes).ArrayNum << 4));
  FVar1 = (this->StructComponentTypes).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->StructComponentTypes).AllocatorInstance.field_0x0 +
            ((longlong)FVar1 >> 0x18));
  }
  FXxHash64Builder::Update
            (param_1,(void *)FVar1,(ulonglong)(uint)(this->StructComponentTypes).ArrayNum);
  FVar1 = (this->Data).AllocatorInstance;
  if (((ulonglong)FVar1 & 1) != 0) {
    FVar1 = (ForAnyElementType)
            ((longlong)&(this->Data).AllocatorInstance.field_0x0 + ((longlong)FVar1 >> 0x18));
  }
  FXxHash64Builder::Update(param_1,(void *)FVar1,(ulonglong)(uint)(this->Data).ArrayNum);
  return;
}

// Evaluate @ 1485b5190

FPreshaderValue * __thiscall
UE::Shader::FPreshaderData::Evaluate
          (FPreshaderData *this,FPreshaderValue *__return_storage_ptr__,
          FUniformExpressionSet *param_1,FMaterialRenderContext *param_2,FPreshaderStack *param_3)

{
  EValueComponentType *pEVar1;
  FValueComponent *pFVar2;
  int iVar3;
  undefined4 uVar4;
  EValueType EVar5;
  undefined7 uVar6;
  int iVar7;
  undefined4 uVar8;
  FPreshaderValue *pFVar9;
  FPreshaderValue local_78;
  FPreshaderDataContext local_48;
  
  FPreshaderDataContext::FPreshaderDataContext(&local_48,this);
  pFVar9 = EvaluatePreshader(&local_78,param_1,param_2,param_3,&local_48);
  pEVar1 = (pFVar9->Type).StructComponentTypes.DataPtr;
  iVar3 = (pFVar9->Type).StructComponentTypes.ArrayNum;
  uVar4 = *(undefined4 *)&(pFVar9->Type).StructComponentTypes.field_0xc;
  EVar5 = (pFVar9->Type).ValueType;
  uVar6 = *(undefined7 *)&(pFVar9->Type).field_0x19;
  (__return_storage_ptr__->Type).StructTypeHash = (pFVar9->Type).StructTypeHash;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = pEVar1;
  pFVar2 = (pFVar9->Component).DataPtr;
  iVar7 = (pFVar9->Component).ArrayNum;
  uVar8 = *(undefined4 *)&(pFVar9->Component).field_0xc;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = iVar3;
  *(undefined4 *)&(__return_storage_ptr__->Type).StructComponentTypes.field_0xc = uVar4;
  (__return_storage_ptr__->Type).ValueType = EVar5;
  *(undefined7 *)&(__return_storage_ptr__->Type).field_0x19 = uVar6;
  (__return_storage_ptr__->Component).DataPtr = pFVar2;
  (__return_storage_ptr__->Component).ArrayNum = iVar7;
  *(undefined4 *)&(__return_storage_ptr__->Component).field_0xc = uVar8;
  return __return_storage_ptr__;
}

// EvaluateConstant @ 1485b6060

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FPreshaderValue * __thiscall
UE::Shader::FPreshaderData::EvaluateConstant
          (FPreshaderData *this,FPreshaderValue *__return_storage_ptr__,FMaterial *param_1,
          FPreshaderStack *param_2)

{
  EValueComponentType *pEVar1;
  FValueComponent *pFVar2;
  int iVar3;
  undefined4 uVar4;
  EValueType EVar5;
  undefined7 uVar6;
  int iVar7;
  undefined4 uVar8;
  FMaterialRenderContext *pFVar9;
  FPreshaderValue *pFVar10;
  FMaterialRenderContext local_98;
  FPreshaderDataContext local_78;
  FPreshaderValue local_38;
  
  FPreshaderDataContext::FPreshaderDataContext(&local_78,this);
  pFVar9 = FMaterialRenderContext::FMaterialRenderContext
                     (&local_98,(FMaterialRenderProxy *)0x0,param_1,(FSceneView *)0x0);
  pFVar10 = EvaluatePreshader(&local_38,(FUniformExpressionSet *)0x0,pFVar9,param_2,&local_78);
  pEVar1 = (pFVar10->Type).StructComponentTypes.DataPtr;
  iVar3 = (pFVar10->Type).StructComponentTypes.ArrayNum;
  uVar4 = *(undefined4 *)&(pFVar10->Type).StructComponentTypes.field_0xc;
  EVar5 = (pFVar10->Type).ValueType;
  uVar6 = *(undefined7 *)&(pFVar10->Type).field_0x19;
  (__return_storage_ptr__->Type).StructTypeHash = (pFVar10->Type).StructTypeHash;
  (__return_storage_ptr__->Type).StructComponentTypes.DataPtr = pEVar1;
  pFVar2 = (pFVar10->Component).DataPtr;
  iVar7 = (pFVar10->Component).ArrayNum;
  uVar8 = *(undefined4 *)&(pFVar10->Component).field_0xc;
  (__return_storage_ptr__->Type).StructComponentTypes.ArrayNum = iVar3;
  *(undefined4 *)&(__return_storage_ptr__->Type).StructComponentTypes.field_0xc = uVar4;
  (__return_storage_ptr__->Type).ValueType = EVar5;
  *(undefined7 *)&(__return_storage_ptr__->Type).field_0x19 = uVar6;
  (__return_storage_ptr__->Component).DataPtr = pFVar2;
  (__return_storage_ptr__->Component).ArrayNum = iVar7;
  *(undefined4 *)&(__return_storage_ptr__->Component).field_0xc = uVar8;
  return __return_storage_ptr__;
}

// GetLabel @ 1485c5800

FPreshaderLabel __thiscall UE::Shader::FPreshaderData::GetLabel(FPreshaderData *this)

{
  int *in_RDX;
  
  *in_RDX = (this->Data).ArrayNum;
  return (FPreshaderLabel)(int)in_RDX;
}

// GetTypeLayout @ 1485cbb90

FTypeLayoutDesc * __thiscall UE::Shader::FPreshaderData::GetTypeLayout(FPreshaderData *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '@';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_UE__Shader__FPr;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<UE::Shader::FPreshaderData,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Initialize @ 1485cd240

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl UE::Shader::FPreshaderData::InternalLinkType<1>::Initialize(FTypeLayoutDesc *param_1)

{
  `public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "D";
  DAT_155243132 = Freeze::FindFieldNameLength(L"D");
  _DAT_155243110 = StaticGetTypeLayoutDesc<TArray<unsigned_char,TMemoryImageAllocator<0>_>_>();
  _DAT_155243128 = 0x30;
  _DAT_155243120 = Freeze::DefaultWriteMemoryImageField;
  _DAT_15524312c = 1;
  _DAT_155243130 = 0;
  _DAT_155243118 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<4>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StructComponentTypes";
  DAT_155243102 = Freeze::FindFieldNameLength(L"StructComponentTypes");
  if ((DAT_15524319f & 2) == 0) {
    DAT_15524319f = DAT_15524319f | 3;
    _DAT_155243140 = L"(TArray<T, AllocatorType>)";
    _DAT_155243158 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_155243160 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_155243168 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_155243170 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_155243178 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_155243150 =
         TStaticGetTypeLayoutHelper<TArray<enum_UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_155243190 = 0x10;
    _DAT_155243198 = 8;
    DAT_15524319c = 0;
    _DAT_155243194 = 0x10;
  }
  _DAT_1552430f0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552430e0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552430f8 = 0x20;
  _DAT_1552430fc = 1;
  _DAT_155243100 = 0;
  _DAT_1552430e8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "StructTypes";
  DAT_1552430d2 = Freeze::FindFieldNameLength(L"StructTypes");
  if ((DAT_155243207 & 2) == 0) {
    DAT_155243207 = DAT_155243207 | 3;
    _DAT_1552431a8 = L"(TArray<T, AllocatorType>)";
    _DAT_1552431c0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallWriteMemoryImage;
    _DAT_1552431c8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallUnfrozenCopy;
    _DAT_1552431d0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallAppendHash;
    _DAT_1552431d8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallGetTargetAlignment;
    _DAT_1552431e0 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallToString;
    _DAT_1552431b8 =
         TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>
         ::CallDestroy;
    _DAT_1552431f8 = 0x10;
    _DAT_155243200 = 8;
    DAT_155243204 = 0;
    _DAT_1552431fc = 0x10;
  }
  _DAT_1552430c0 = Freeze::DefaultWriteMemoryImageField;
  _DAT_1552430b0 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_1552430c8 = 0x10;
  _DAT_1552430cc = 1;
  _DAT_1552430d0 = 0;
  _DAT_1552430b8 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  `public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
  ::__l2::FieldBuffer = "Names";
  DAT_1552430a2 = Freeze::FindFieldNameLength(L"Names");
  if ((DAT_15521714f & 2) == 0) {
    DAT_15521714f = DAT_15521714f | 3;
    _DAT_1552170f0 = L"(TArray<T, AllocatorType>)";
    _DAT_155217108 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallWriteMemoryImage;
    _DAT_155217110 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallUnfrozenCopy;
    _DAT_155217118 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallAppendHash;
    _DAT_155217120 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::
         CallGetTargetAlignment;
    _DAT_155217128 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallToString;
    _DAT_155217100 =
         TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::CallDestroy;
    _DAT_155217140 = 0x10;
    _DAT_155217148 = 8;
    DAT_15521714c = 0;
    _DAT_155217144 = 0x10;
  }
  _DAT_155243080 =
       &`public:_static_struct_FTypeLayoutDesc_const&___ptr64___cdecl_TStaticGetTypeLayoutHelper<TArray<FScriptName,TMemoryImageAllocator<0>_>_>::Do(void)'
        ::__l2::TypeBuffer;
  _DAT_155243090 = Freeze::DefaultWriteMemoryImageField;
  _DAT_155243098 = 0;
  _DAT_15524309c = 1;
  _DAT_1552430a0 = 0;
  _DAT_155243088 = param_1->Fields;
  param_1->Fields =
       (FFieldLayoutDesc *)
       &`public:_static_void___cdecl_UE::Shader::FPreshaderData::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
        ::__l2::FieldBuffer;
  return;
}

// InternalDestroy @ 1485cdb70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Shader::FPreshaderData::InternalDestroy
          (void *param_1,FTypeLayoutDesc *param_2,FPointerTableBase *param_3,bool param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (!param_4) {
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x30));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x20));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
              ((FMemoryImageAllocatorBase *)((longlong)param_1 + 0x10));
    FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase(param_1);
  }
  uVar2 = _UNK_1506d61e8;
  uVar1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)param_1 = ___xmm_fefefefefefefefefefefefefefefefe;
  *(undefined8 *)((longlong)param_1 + 8) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
  return;
}

// SetLabel @ 1485d8950

void __thiscall UE::Shader::FPreshaderData::SetLabel(FPreshaderData *this,FPreshaderLabel param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ForAnyElementType FVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = ((this->Data).ArrayNum - param_1.Offset) + -4;
  if (iVar6 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("JumpOffset >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                       ,0x136,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar3 = 0;
  if (param_1.Offset < (this->Data).ArrayNum) {
    uVar3 = (uint)~param_1.Offset >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVar4 = (this->Data).AllocatorInstance;
  if (((ulonglong)FVar4 & 1) != 0) {
    FVar4 = (ForAnyElementType)
            ((longlong)&(this->Data).AllocatorInstance.field_0x0 + ((longlong)FVar4 >> 0x18));
  }
  piVar5 = (int *)((longlong)param_1.Offset + (longlong)FVar4);
  if (((((char)*piVar5 != -1) || (*(char *)((longlong)piVar5 + 1) != -1)) ||
      (*(char *)((longlong)piVar5 + 2) != -1)) || (*(char *)((longlong)piVar5 + 3) != -1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dst[0] == 0xff && Dst[1] == 0xff && Dst[2] == 0xff && Dst[3] == 0xff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                       ,0x139,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *piVar5 = iVar6;
  return;
}

// StaticGetTypeLayout @ 1485dc6e0

FTypeLayoutDesc * __cdecl UE::Shader::FPreshaderData::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = '@';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_UE__Shader__FPr;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<UE::Shader::FPreshaderData,0>::Do;
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    InternalLinkType<1>::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// WriteData @ 1485df970

void __thiscall
UE::Shader::FPreshaderData::WriteData(FPreshaderData *this,void *param_1,uint param_2)

{
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType FVar5;
  
  pTVar1 = &this->Data;
  if ((param_1 == (void *)0x0) && (param_2 != 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ptr != nullptr || Count == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9c1,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,param_2,&pTVar1->AllocatorInstance,&(this->Data).ArrayNum,
                     &(this->Data).ArrayMax);
  FVar5 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar5 & 1) != 0) {
    FVar5 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar5 >> 0x18));
  }
  if (param_2 != 0) {
    memcpy((void *)((longlong)iVar4 + (longlong)FVar5),param_1,(longlong)(int)param_2);
  }
  return;
}

// WriteJump @ 1485dfa20

FPreshaderLabel __thiscall
UE::Shader::FPreshaderData::WriteJump(FPreshaderData *this,EPreshaderOpcode param_1)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  undefined7 in_register_00000011;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar4;
  EPreshaderOpcode in_R8B;
  
  WriteOpcode(this,in_R8B);
  iVar1 = (this->Data).ArrayNum;
  pTVar4 = &this->Data;
  iVar2 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,4,&pTVar4->AllocatorInstance,&(this->Data).ArrayNum,&(this->Data).ArrayMax)
  ;
  FVar3 = pTVar4->AllocatorInstance;
  if (((ulonglong)FVar3 & 1) != 0) {
    FVar3 = (ForAnyElementType)
            ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar3 >> 0x18));
  }
  *(int *)CONCAT71(in_register_00000011,param_1) = iVar1;
  *(undefined4 *)((longlong)iVar2 + (longlong)FVar3) = 0xffffffff;
  return (FPreshaderLabel)(int)(int *)CONCAT71(in_register_00000011,param_1);
}

// WriteJump @ 1485dfaa0

void __thiscall
UE::Shader::FPreshaderData::WriteJump
          (FPreshaderData *this,EPreshaderOpcode param_1,FPreshaderLabel param_2)

{
  int iVar1;
  int iVar2;
  ForAnyElementType FVar3;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar4;
  
  WriteOpcode(this,param_1);
  iVar1 = (this->Data).ArrayNum;
  pTVar4 = &this->Data;
  iVar2 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,4,&pTVar4->AllocatorInstance,&(this->Data).ArrayNum,&(this->Data).ArrayMax)
  ;
  FVar3 = pTVar4->AllocatorInstance;
  if (((ulonglong)FVar3 & 1) != 0) {
    FVar3 = (ForAnyElementType)
            ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar3 >> 0x18));
  }
  *(int *)((longlong)iVar2 + (longlong)FVar3) = (param_2.Offset - iVar1) + -4;
  return;
}

// WriteName @ 1485dfb10

void __thiscall UE::Shader::FPreshaderData::WriteName(FPreshaderData *this,FScriptName *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ForAnyElementType FVar7;
  ForAnyElementType FVar8;
  ForAnyElementType FVar9;
  longlong lVar10;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar11;
  ForAnyElementType FVar12;
  int local_18;
  
  FVar9 = (this->Names).AllocatorInstance;
  FVar7 = (ForAnyElementType)
          ((longlong)&(this->Names).AllocatorInstance.field_0x0 + ((longlong)FVar9 >> 0x18));
  if (((ulonglong)FVar9 & 1) == 0) {
    FVar7 = FVar9;
  }
  FVar12 = (ForAnyElementType)((longlong)FVar7 + (longlong)(this->Names).ArrayNum * 0xc);
  if (FVar7 != FVar12) {
    uVar2 = param_1->ComparisonIndex;
    FVar8 = FVar7;
    do {
      if ((*(int *)FVar8 == uVar2) && (*(int *)((longlong)FVar8 + 8) == param_1->Number)) {
        lVar10 = ((longlong)FVar8 - (longlong)FVar7) / 6 +
                 ((longlong)FVar8 - (longlong)FVar7 >> 0x3f);
        uVar5 = (int)(lVar10 >> 1) - (int)(lVar10 >> 0x3f);
        if (uVar5 != 0xffffffff) goto LAB_1485dfc76;
        break;
      }
      FVar8 = (ForAnyElementType)((longlong)FVar8 + 0xc);
    } while (FVar8 != FVar12);
  }
  FVar12 = (ForAnyElementType)
           ((longlong)&(this->Names).AllocatorInstance.field_0x0 + ((longlong)FVar9 >> 0x18));
  FVar7 = FVar9;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar7 = FVar12;
  }
  if ((ulonglong)FVar7 <= param_1) {
    if (((ulonglong)FVar9 & 1) != 0) {
      FVar9 = FVar12;
    }
    if ((param_1 < (FScriptName *)((longlong)FVar9 + (longlong)(this->Names).ArrayMax * 0xc)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (this->Names).ArrayNum;
  piVar1 = &(this->Names).ArrayMax;
  if (uVar5 == *piVar1) {
    uVar5 = Core::Private::ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                      (0x40c,(ForAnyElementType *)this,piVar1);
  }
  (this->Names).ArrayNum = uVar5 + 1;
  FVar9 = (this->Names).AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(this->Names).AllocatorInstance.field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  *(undefined8 *)((longlong)FVar9 + (longlong)(int)uVar5 * 0xc) = *(undefined8 *)param_1;
  *(uint *)((longlong)FVar9 + 8U + (longlong)(int)uVar5 * 0xc) = param_1->Number;
LAB_1485dfc76:
  if ((0xffff < uVar5) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0 && Index <= 0xffff",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                         ,0xef,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar11 = &this->Data;
  iVar6 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,2,&pTVar11->AllocatorInstance,&(this->Data).ArrayNum,&(this->Data).ArrayMax
                    );
  FVar9 = pTVar11->AllocatorInstance;
  if (((ulonglong)FVar9 & 1) != 0) {
    FVar9 = (ForAnyElementType)
            ((longlong)&(pTVar11->AllocatorInstance).field_0x0 + ((longlong)FVar9 >> 0x18));
  }
  *(short *)((longlong)iVar6 + (longlong)FVar9) = (short)uVar5;
  return;
}

// WriteOpcode @ 1485dff90

FPreshaderData * __thiscall
UE::Shader::FPreshaderData::WriteOpcode(FPreshaderData *this,EPreshaderOpcode param_1)

{
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FPreshaderData *pFVar5;
  ForAnyElementType FVar6;
  
  if (param_1 == Nop) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3015873761204240532>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Shader\\Preshader.h"
                       ,0x94,"Op != EPreshaderOpcode::Nop");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FPreshaderData *)(*pcVar2)();
      return pFVar5;
    }
  }
  pTVar1 = &this->Data;
  iVar4 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                    (1,1,1,&pTVar1->AllocatorInstance,&(this->Data).ArrayNum,&(this->Data).ArrayMax)
  ;
  FVar6 = pTVar1->AllocatorInstance;
  if (((ulonglong)FVar6 & 1) != 0) {
    FVar6 = (ForAnyElementType)
            ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar6 >> 0x18));
  }
  *(EPreshaderOpcode *)((longlong)iVar4 + (longlong)FVar6) = param_1;
  return this;
}

// WriteType @ 1485e0030

void __thiscall UE::Shader::FPreshaderData::WriteType(FPreshaderData *this,FType *param_1)

{
  EValueType *pEVar1;
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  TArray<UE::Shader::FPreshaderStructType,TMemoryImageAllocator<0>_> *pTVar5;
  int *piVar6;
  TArray<UE::Shader::EValueComponentType,TMemoryImageAllocator<0>_> *pTVar7;
  ulong64 uVar8;
  EValueComponentType *_Src;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ForAnyElementType FVar14;
  uint uVar15;
  longlong lVar16;
  ulong64 *puVar17;
  
  pEVar1 = &param_1->ValueType;
  pTVar2 = &this->Data;
  if ((pEVar1 == (EValueType *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Ptr != nullptr || Count == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x9c1,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  piVar3 = &(this->Data).ArrayMax;
  piVar4 = &(this->Data).ArrayNum;
  iVar11 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                     (1,1,1,&pTVar2->AllocatorInstance,piVar4,piVar3);
  FVar14 = pTVar2->AllocatorInstance;
  if (((ulonglong)FVar14 & 1) != 0) {
    FVar14 = (ForAnyElementType)
             ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
  }
  *(EValueType *)((longlong)iVar11 + (longlong)FVar14) = *pEVar1;
  if (*pEVar1 == Struct) {
    uVar15 = 0;
    iVar11 = (this->StructTypes).ArrayNum;
    uVar8 = param_1->StructType->Hash;
    if (0 < iVar11) {
      lVar16 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar15 < iVar11) {
          uVar12 = ~uVar15 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar14 = (this->StructTypes).AllocatorInstance;
        if (((ulonglong)FVar14 & 1) != 0) {
          FVar14 = (ForAnyElementType)
                   ((longlong)&(this->StructTypes).AllocatorInstance.field_0x0 +
                   ((longlong)FVar14 >> 0x18));
        }
        if (*(ulong64 *)(lVar16 + (longlong)FVar14) == uVar8) {
          if (uVar15 != 0xffffffff) goto LAB_1485e0235;
          break;
        }
        iVar11 = (this->StructTypes).ArrayNum;
        uVar15 = uVar15 + 1;
        lVar16 = lVar16 + 0x10;
      } while ((int)uVar15 < iVar11);
    }
    uVar15 = (this->StructTypes).ArrayNum;
    pTVar5 = &this->StructTypes;
    piVar6 = &(this->StructTypes).ArrayMax;
    uVar12 = uVar15;
    if (uVar15 == *piVar6) {
      uVar12 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<1,TMemoryImageAllocator<0>::ForAnyElementType>
                         (0x810,&pTVar5->AllocatorInstance,piVar6);
      (this->StructTypes).ArrayNum = uVar12;
    }
    (this->StructTypes).ArrayNum = uVar12 + 1;
    FVar14 = pTVar5->AllocatorInstance;
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(pTVar5->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    }
    pTVar7 = &this->StructComponentTypes;
    puVar17 = (ulong64 *)((longlong)(int)uVar12 * 0x10 + (longlong)FVar14);
    *puVar17 = uVar8;
    piVar6 = &(this->StructComponentTypes).ArrayNum;
    *(int *)(puVar17 + 1) = *piVar6;
    *(int *)((longlong)puVar17 + 0xc) = (param_1->StructType->ComponentTypes).ArrayNum;
    _Src = (param_1->StructType->ComponentTypes).DataPtr;
    iVar11 = (param_1->StructType->ComponentTypes).ArrayNum;
    if (((_Src == (EValueComponentType *)0x0) && (iVar11 != 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x9c1,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar13 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                       (1,1,iVar11,&pTVar7->AllocatorInstance,piVar6,
                        &(this->StructComponentTypes).ArrayMax);
    FVar14 = pTVar7->AllocatorInstance;
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(pTVar7->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    }
    if (iVar11 != 0) {
      memcpy((void *)((longlong)iVar13 + (longlong)FVar14),_Src,(longlong)iVar11);
    }
LAB_1485e0235:
    if ((0xffff < uVar15) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index >= 0 && Index <= 0xffff",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                            ,0x10c,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pTVar2 = &this->Data;
    iVar11 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                       (1,1,2,&pTVar2->AllocatorInstance,piVar4,piVar3);
    FVar14 = pTVar2->AllocatorInstance;
    if (((ulonglong)FVar14 & 1) != 0) {
      FVar14 = (ForAnyElementType)
               ((longlong)&(pTVar2->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
    }
    *(short *)((longlong)iVar11 + (longlong)FVar14) = (short)uVar15;
  }
  return;
}

// WriteValue @ 1485e02c0

void __thiscall UE::Shader::FPreshaderData::WriteValue(FPreshaderData *this,FValue *param_1)

{
  TArray<unsigned_char,TMemoryImageAllocator<0>_> *pTVar1;
  EValueType EVar2;
  FStructType *pFVar3;
  ForElementType<UE::Shader::FValueComponent> FVar4;
  code *pcVar5;
  bool bVar6;
  EValueComponentType EVar7;
  uint uVar8;
  int iVar9;
  EValueComponentType *pEVar10;
  FValueTypeDescription *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ForAnyElementType FVar14;
  int iVar15;
  ForElementType<UE::Shader::FValueComponent> FVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 local_res10;
  longlong local_res18;
  
  EVar2 = (param_1->Type).ValueType;
  if (EVar2 == Struct) {
    iVar15 = (((param_1->Type).StructType)->ComponentTypes).ArrayNum;
  }
  else if (EVar2 == Object) {
    iVar15 = 1;
  }
  else {
    pFVar11 = GetValueTypeDescription(EVar2);
    iVar15 = (int)pFVar11->NumComponents;
  }
  if (((param_1->Type).ValueType == Object) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Value.Type.IsObject()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\Preshader.cpp"
                         ,0x115,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  WriteType(this,&param_1->Type);
  uVar17 = 0;
  local_res18 = (longlong)iVar15;
  if (0 < iVar15) {
    lVar18 = 0;
    pTVar1 = &this->Data;
    do {
      if ((int)uVar17 < 0) {
LAB_1485e04ab:
        EVar7 = Void;
LAB_1485e04ad:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(EVar7) {
        case Void:
          goto LAB_1485e0414;
        case Float:
          iVar15 = 4;
          break;
        case Double:
          iVar15 = 8;
          break;
        case Int:
          iVar15 = 4;
          break;
        case Bool:
          iVar15 = 1;
          break;
        case Numeric:
          iVar15 = 8;
        }
      }
      else {
        EVar2 = (param_1->Type).ValueType;
        if (EVar2 != Struct) {
          if ((EVar2 != Object) && (bVar6 = IsNumericType(EVar2), bVar6)) {
            pFVar11 = GetValueTypeDescription((param_1->Type).ValueType);
            if (((pFVar11->NumComponents == '\x01') && ((int)uVar17 < 4)) ||
               ((int)uVar17 < (int)pFVar11->NumComponents)) {
              EVar7 = pFVar11->ComponentType;
              goto LAB_1485e03d9;
            }
          }
          goto LAB_1485e04ab;
        }
        pFVar3 = (param_1->Type).StructType;
        if ((pFVar3->ComponentTypes).ArrayNum <= (int)uVar17) goto LAB_1485e04ab;
        pEVar10 = TArrayView<enum_UE::Shader::EValueComponentType_const_,int>::operator[]
                            (&pFVar3->ComponentTypes,uVar17);
        EVar7 = *pEVar10;
LAB_1485e03d9:
        if (EVar7 < Num) goto LAB_1485e04ad;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                           ,0x20e,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_1485e0414:
        iVar15 = 0;
      }
      EVar2 = (param_1->Type).ValueType;
      if ((EVar2 == Struct) || (EVar2 == Object)) {
LAB_1485e054c:
        lVar19 = lVar18;
        uVar13 = uVar17;
        if (-1 < (int)uVar17) goto LAB_1485e0555;
LAB_1485e05c2:
        local_res10 = 0;
      }
      else {
        if ((Any < EVar2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(uint32)Type < NumValueTypes",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Shader\\ShaderValue.cpp"
                               ,0x45,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar12 = 0x1c;
        if (EVar2 < Num) {
          uVar12 = (ulonglong)EVar2;
        }
        if (((GValueTypeDescriptions[uVar12].ComponentType == Void) ||
            (GValueTypeDescriptions[uVar12].NumComponents != '\x01')) || (3 < uVar17))
        goto LAB_1485e054c;
        lVar19 = 0;
        uVar13 = 0;
LAB_1485e0555:
        if ((param_1->Component).ArrayNum <= (int)uVar13) goto LAB_1485e05c2;
        uVar8 = 0;
        if ((int)uVar13 < (param_1->Component).ArrayNum) {
          uVar8 = ~uVar13 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (param_1->Component).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<UE::Shader::FValueComponent>)&param_1->Component;
        if (FVar4 != (ForElementType<UE::Shader::FValueComponent>)0x0) {
          FVar16 = FVar4;
        }
        local_res10 = *(undefined8 *)((longlong)FVar16 + lVar19 * 8);
      }
      iVar9 = Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                        (1,1,iVar15,&pTVar1->AllocatorInstance,&(this->Data).ArrayNum,
                         &(this->Data).ArrayMax);
      FVar14 = pTVar1->AllocatorInstance;
      if (((ulonglong)FVar14 & 1) != 0) {
        FVar14 = (ForAnyElementType)
                 ((longlong)&(pTVar1->AllocatorInstance).field_0x0 + ((longlong)FVar14 >> 0x18));
      }
      if (iVar15 != 0) {
        memcpy((void *)((longlong)iVar9 + (longlong)FVar14),&local_res10,(longlong)iVar15);
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 1;
    } while (lVar18 < local_res18);
  }
  return;
}

