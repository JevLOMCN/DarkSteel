// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// ~FShaderPipeline @ 145df1c20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipeline::~FShaderPipeline(FShaderPipeline *this)

{
  this->Shaders[0].field0_0x0.Packed = 0;
  this->Shaders[1].field0_0x0 = (TMemoryImagePtr<FShader>_u_0)0x0;
  this->Shaders[2].field0_0x0 = (TMemoryImagePtr<FShader>_u_0)0x0;
  this->Shaders[3].field0_0x0 = (TMemoryImagePtr<FShader>_u_0)0x0;
  this->Shaders[4].field0_0x0 = (TMemoryImagePtr<FShader>_u_0)0x0;
  return;
}

// AddShader @ 145df7d70

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipeline::AddShader(FShaderPipeline *this,FShader *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  
  uVar3 = *(byte *)&(param_1->Target).field0_0x0 & 0xf;
  if (this->Shaders[uVar3].field0_0x0.Packed != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shaders[Frequency].IsNull()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x557,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->Shaders[uVar3].field0_0x0.UnfrozenPtr = param_1;
  if (((ulonglong)param_1 & 1) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Frozen.IsFrozen()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                       ,0x187,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->PermutationIds[uVar3] = param_2;
  return;
}

// Finalize @ 145e09230

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipeline::Finalize(FShaderPipeline *this,FShaderMapResourceCode *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FShader *pFVar4;
  longlong lVar5;
  FShader *pFVar6;
  FString local_28;
  
  lVar5 = 5;
  do {
    pFVar4 = this->Shaders[0].field0_0x0.UnfrozenPtr;
    pFVar6 = pFVar4;
    if (((ulonglong)pFVar4 & 1) != 0) {
      pFVar6 = (FShader *)((longlong)&this->Shaders[0].field0_0x0 + ((longlong)pFVar4 >> 0x18));
    }
    if (pFVar6 != (FShader *)0x0) {
      if (((ulonglong)pFVar4 & 1) != 0) {
        pFVar4 = (FShader *)((longlong)&this->Shaders[0].field0_0x0 + ((longlong)pFVar4 >> 0x18));
      }
      if ((pFVar4 == (FShader *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                             ,0x197,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = FShaderMapResourceCode::FindShaderIndex(param_1,&ShaderSourceDefaultHash);
      if (iVar3 == -1) {
        local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_28.Data.ArrayNum = 0;
        local_28.Data.ArrayMax = 0;
        BytesToHex(ShaderSourceDefaultHash.Hash,0x14,&local_28);
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewResourceIndex != INDEX_NONE",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                           ,0x328,L"Missing shader code %s");
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      pFVar4->ResourceIndex = iVar3;
    }
    lVar5 = lVar5 + -1;
    this = (FShaderPipeline *)this->Shaders;
    if (lVar5 == 0) {
      return;
    }
  } while( true );
}

// FindOrAddShader @ 145e0a060

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShader * __thiscall
FShaderPipeline::FindOrAddShader(FShaderPipeline *this,FShader *param_1,int param_2)

{
  TMemoryImagePtr<FShader> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FShader *pFVar4;
  byte bVar5;
  uint uVar6;
  FShader *pFVar7;
  
  uVar6 = *(byte *)&(param_1->Target).field0_0x0 & 0xf;
  pTVar1 = this->Shaders + uVar6;
  pFVar4 = (pTVar1->field0_0x0).UnfrozenPtr;
  bVar5 = (byte)pFVar4;
  pFVar7 = pFVar4;
  if (((ulonglong)pFVar4 & 1) != 0) {
    pFVar7 = (FShader *)((longlong)&pTVar1->field0_0x0 + ((longlong)pFVar4 >> 0x18));
  }
  if ((pFVar7 == (FShader *)0x0) || (this->PermutationIds[uVar6] != param_2)) {
    if (((ulonglong)pFVar4 & 1) != 0) {
      pFVar4 = (FShader *)((longlong)&pTVar1->field0_0x0 + ((longlong)pFVar4 >> 0x18));
    }
    if (pFVar4 != (FShader *)0x0) {
      DeleteObjectFromLayout<FShader>(pFVar4,(FPointerTableBase *)0x0,(bool)(bVar5 & 1));
    }
    (pTVar1->field0_0x0).UnfrozenPtr = param_1;
    if (((ulonglong)param_1 & 1) != 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Frozen.IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x187,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FShader *)(*pcVar2)();
        return pFVar4;
      }
    }
    this->PermutationIds[uVar6] = param_2;
  }
  else {
    DeleteObjectFromLayout<FShader>(param_1,(FPointerTableBase *)0x0,false);
    param_1 = pFVar7;
  }
  return param_1;
}

// GetTypeLayout @ 145e15710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FTypeLayoutDesc * __thiscall FShaderPipeline::GetTypeLayout(FShaderPipeline *this)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderPipeline;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderPipeline,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PermutationIds";
    DAT_15518dc22 = Freeze::FindFieldNameLength(L"PermutationIds");
    _DAT_15518dc00 = StaticGetTypeLayoutDesc<int>();
    DAT_15518dc08 = ::TypeBuffer[0x10];
    DAT_15518dc08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc18 = 0x30;
    _DAT_15518dc1c = 5;
    _DAT_15518dc20 = 0;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Shaders";
    DAT_15518dbf2 = Freeze::FindFieldNameLength(L"Shaders");
    _DAT_15518dbd0 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShader>_>();
    DAT_15518dbd8 = ::TypeBuffer[0x10];
    DAT_15518dbd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dbd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dbd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dbd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dbd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dbd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dbd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dbe0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dbe8 = 8;
    _DAT_15518dbec = 5;
    _DAT_15518dbf0 = 0;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TypeName";
    DAT_15518dbc2 = Freeze::FindFieldNameLength(L"TypeName");
    _DAT_15518dba0 = FHashedName::StaticGetTypeLayout();
    _DAT_15518dbb0 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518dba8 = ::TypeBuffer[0x10];
    DAT_15518dba8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dba8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dba8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dba8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dba8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dba8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dba8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518dbb8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dbbc = 1;
    _DAT_15518dbc0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// InternalDestroy @ 145e188c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FShaderPipeline::InternalDestroy
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
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x38) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar1;
  return;
}

// StaticGetTypeLayout @ 145e31130

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FTypeLayoutDesc * __cdecl FShaderPipeline::StaticGetTypeLayout(void)

{
  if ((::TypeBuffer[0x67] & 2) == 0) {
    ::TypeBuffer[0x67] = ::TypeBuffer[0x67] | 2;
    ::TypeBuffer[0x58] = 'H';
    ::TypeBuffer[0x59] = '\0';
    ::TypeBuffer[0x5a] = '\0';
    ::TypeBuffer[0x5b] = '\0';
    ::TypeBuffer[0x60] = '\b';
    ::TypeBuffer[0x61] = '\0';
    ::TypeBuffer[0x62] = '\0';
    ::TypeBuffer[99] = '\0';
    ::TypeBuffer._8_8_ = u_FShaderPipeline;
    ::TypeBuffer._32_8_ = Freeze::DefaultWriteMemoryImage;
    ::TypeBuffer._40_8_ = Freeze::DefaultUnfrozenCopy;
    ::TypeBuffer._48_8_ = Freeze::DefaultAppendHash;
    ::TypeBuffer._56_8_ = Freeze::DefaultGetTargetAlignment;
    ::TypeBuffer._64_8_ = Freeze::DefaultToString;
    ::TypeBuffer._24_8_ = InternalDestroy;
    ::TypeBuffer._72_8_ = TGetDefaultObjectHelper<FShaderPipeline,0>::Do;
    ::TypeBuffer[100] = '\0';
    ::TypeBuffer[0x5c] = 0xff;
    ::TypeBuffer[0x5d] = 0xff;
    ::TypeBuffer[0x5e] = 0xff;
    ::TypeBuffer[0x5f] = 0xff;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "PermutationIds";
    DAT_15518dc22 = Freeze::FindFieldNameLength(L"PermutationIds");
    _DAT_15518dc00 = StaticGetTypeLayoutDesc<int>();
    DAT_15518dc08 = ::TypeBuffer[0x10];
    DAT_15518dc08_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dc08_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dc08_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dc08_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dc08_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dc08_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dc08_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<3>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dc10 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dc18 = 0x30;
    _DAT_15518dc1c = 5;
    _DAT_15518dc20 = 0;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "Shaders";
    DAT_15518dbf2 = Freeze::FindFieldNameLength(L"Shaders");
    _DAT_15518dbd0 = StaticGetTypeLayoutDesc<TMemoryImagePtr<FShader>_>();
    DAT_15518dbd8 = ::TypeBuffer[0x10];
    DAT_15518dbd8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dbd8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dbd8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dbd8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dbd8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dbd8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dbd8_1._6_1_ = ::TypeBuffer[0x17];
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<2>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dbe0 = Freeze::DefaultWriteMemoryImageField;
    _DAT_15518dbe8 = 8;
    _DAT_15518dbec = 5;
    _DAT_15518dbf0 = 0;
    `public:_static_void___cdecl_FShaderPipeline::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
    ::__l2::FieldBuffer = "TypeName";
    DAT_15518dbc2 = Freeze::FindFieldNameLength(L"TypeName");
    _DAT_15518dba0 = FHashedName::StaticGetTypeLayout();
    _DAT_15518dbb0 = Freeze::DefaultWriteMemoryImageField;
    DAT_15518dba8 = ::TypeBuffer[0x10];
    DAT_15518dba8_1._0_1_ = ::TypeBuffer[0x11];
    DAT_15518dba8_1._1_1_ = ::TypeBuffer[0x12];
    DAT_15518dba8_1._2_1_ = ::TypeBuffer[0x13];
    DAT_15518dba8_1._3_1_ = ::TypeBuffer[0x14];
    DAT_15518dba8_1._4_1_ = ::TypeBuffer[0x15];
    DAT_15518dba8_1._5_1_ = ::TypeBuffer[0x16];
    DAT_15518dba8_1._6_1_ = ::TypeBuffer[0x17];
    _DAT_15518dbb8 = 0;
    ::TypeBuffer._16_8_ =
         &`public:_static_void___cdecl_FShaderPipeline::InternalLinkType<1>::Initialize(FTypeLayoutDesc&___ptr64)'
          ::__l2::FieldBuffer;
    _DAT_15518dbbc = 1;
    _DAT_15518dbc0 = 0;
    FTypeLayoutDesc::Initialize((FTypeLayoutDesc *)::TypeBuffer);
    return (FTypeLayoutDesc *)::TypeBuffer;
  }
  return (FTypeLayoutDesc *)::TypeBuffer;
}

// Validate @ 145e37960

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FShaderPipeline::Validate(FShaderPipeline *this,FShaderPipelineType *param_1)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  int iVar3;
  FShaderType *pFVar4;
  code *pcVar5;
  bool bVar6;
  TMemoryImagePtr<FShader>_u_0 TVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  if ((param_1->HashedName).Hash != (this->TypeName).Hash) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InPipelineType->GetHashedName() == TypeName",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                       ,0x577,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar8 = (param_1->Stages).AllocatorInstance.Data;
  iVar3 = (param_1->Stages).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((param_1->Stages).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FShaderType_const_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pFVar4 = *(FShaderType **)pFVar8;
    bVar2 = (byte)pFVar4->Frequency;
    if (4 < bVar2) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Frequency < SF_NumGraphicsFrequencies",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                         ,0x8b5,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TVar7 = (TMemoryImagePtr<FShader>_u_0)this->Shaders[bVar2].field0_0x0.UnfrozenPtr;
    if (((ulonglong)TVar7 & 1) != 0) {
      TVar7.UnfrozenPtr =
           (FShader *)((longlong)&this->Shaders[bVar2].field0_0x0 + ((longlong)TVar7 >> 0x18));
    }
    if (TVar7.Packed == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x57b,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((*(byte *)&((TVar7.UnfrozenPtr)->Type).field0_0x0 & 1) != 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsFrozen()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Serialization\\MemoryImage.h"
                         ,0x46c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (((TVar7.UnfrozenPtr)->Type).field0_0x0.Ptr != pFVar4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader->GetTypeUnfrozen() == Stage",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\Shader.cpp"
                         ,0x57c,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar8 = pFVar8 + 8;
  }
  return;
}

