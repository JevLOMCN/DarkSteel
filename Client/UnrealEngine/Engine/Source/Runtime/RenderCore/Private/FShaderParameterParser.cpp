// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 22

// FShaderParameterParser @ 145e81e00

FShaderParameterParser * __thiscall
FShaderParameterParser::FShaderParameterParser
          (FShaderParameterParser *this,FPlatformConfiguration *param_1)

{
  this->PlatformConfiguration = param_1;
  this->_padding_ = (longlong)&___7FShaderParameterParser__6B_;
  (this->OriginalParsedShader).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OriginalParsedShader).Data.ArrayNum = 0;
  (this->OriginalParsedShader).Data.ArrayMax = 0;
  *(undefined8 *)&this->ParsedParameters = 0;
  *(undefined8 *)&(this->ParsedParameters).field_0x8 = 0;
  *(undefined8 *)&(this->ParsedParameters).field_0x20 = 0;
  *(undefined4 *)&(this->ParsedParameters).field_0x28 = 0;
  *(undefined4 *)&(this->ParsedParameters).field_0x2c = 0x80;
  *(undefined4 *)&(this->ParsedParameters).field_0x34 = 0;
  *(undefined4 *)&(this->ParsedParameters).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ParsedParameters).field_0x40 = 0;
  *(undefined4 *)&(this->ParsedParameters).field_0x48 = 0;
  this->bBindlessEnabled = false;
  this->bNeedToMoveToRootConstantBuffer = false;
  this->bMovedLoosedParametersToRootConstantBuffer = false;
  this->bModifiedShader = false;
  return this;
}

// ~FShaderParameterParser @ 145e84cf0

void __thiscall FShaderParameterParser::~FShaderParameterParser(FShaderParameterParser *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  *(undefined4 *)&(this->ParsedParameters).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FShaderParameterParser__6B_;
  pvVar1 = *(void **)&(this->ParsedParameters).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ParsedParameters);
  pFVar2 = (this->OriginalParsedShader).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 145e87300

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
`FShaderParameterParser::ValidateShaderParameterTypes'::__l2::<lambda_1>::operator()
          (void *this,FShaderParametersMetadata *param_1,FMember *param_2,wchar_t *param_3,
          ushort param_4)

{
  TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
  *this_00;
  FShaderParameterParser *this_01;
  FShaderCompilerOutput *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if ((param_2->BaseType == UBMT_INT32) || ((byte)(param_2->BaseType - UBMT_UINT32) < 2)) {
    lVar7 = *(longlong *)this;
    ::FString::FString(&local_58,param_3);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_58.Data.ArrayNum != 0) {
      FVar8.Data = local_58.Data.AllocatorInstance.Data;
    }
    lVar11 = 0;
    uVar10 = 0;
    uVar4 = local_58.Data.ArrayNum - 1;
    if (local_58.Data.ArrayNum == 0) {
      uVar4 = uVar10;
    }
    uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar4,(wchar_t *)FVar8.Data);
    iVar5 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>
                      ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                        *)(lVar7 + 0x20),uVar4,&local_58);
    lVar9 = lVar11;
    if (((iVar5 == -1) || (lVar9 = (longlong)iVar5 * 0x78 + *(longlong *)(lVar7 + 0x20), lVar9 == 0)
        ) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("Pair != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                 ,0x27b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    this_00 = *(TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
                **)((longlong)this + 8);
    uVar4 = 0;
    if (*(int *)(lVar9 + 0x38) == 0) {
      ::FString::FString(&local_48,param_3);
      uVar10 = local_48.Data.ArrayNum - 1;
      FVar8.Data = local_48.Data.AllocatorInstance.Data;
      if (local_48.Data.ArrayNum == 0) {
        uVar10 = uVar4;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      uVar4 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar10,(wchar_t *)FVar8.Data);
      iVar5 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_00,uVar4,&local_48);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if ((iVar5 != -1) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ParametersFoundByCompiler.Contains(ShaderBindingName)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x5a2,
                             L"Looks like there is a bug in FShaderParameterParser ParameterName=%s DumpDebugInfoPath=%s"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      ::FString::FString(&local_38,param_3);
      uVar6 = local_38.Data.ArrayNum - 1;
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
      if (local_38.Data.ArrayNum == 0) {
        uVar6 = uVar4;
        FVar8.Data = (FScriptContainerElement *)L"";
      }
      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar6,(wchar_t *)FVar8.Data);
      iVar5 = TSet<TTuple<FString,FParameterAllocation>,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>(this_00,uVar6,&local_38);
      lVar7 = lVar11;
      if (iVar5 != -1) {
        lVar7 = (longlong)iVar5 * 0x20 + *(longlong *)&this_00->Elements;
      }
      lVar9 = lVar7 + 0x10;
      if (lVar7 == 0) {
        lVar9 = lVar11;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (lVar9 != 0) {
        uVar10 = (uint)*(ushort *)(lVar9 + 2);
        uVar4 = (uint)*(ushort *)(lVar9 + 4);
      }
      this_01 = *(FShaderParameterParser **)this;
      pFVar1 = *(FShaderCompilerOutput **)((longlong)this + 0x20);
      bVar3 = *(bool *)*(undefined8 *)((longlong)this + 0x18);
      ::FString::FString(&local_28,param_3);
      FShaderParameterParser::ValidateShaderParameterType
                (this_01,*(FShaderCompilerInput **)((longlong)this + 0x10),&local_28,uVar10,uVar4,
                 bVar3,pFVar1);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 145e87580

/* WARNING: Removing unreachable block (ram,0x000145e87645) */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
`FShaderParameterParser::MoveShaderParametersToRootConstantBuffer'::__l5::<lambda_1>::operator()
          (void *this,FShaderParametersMetadata *param_1,FMember *param_2,wchar_t *param_3,
          ushort param_4)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  longlong lVar9;
  FString local_28;
  
  lVar9 = *(longlong *)this;
  ::FString::FString(&local_28,param_3);
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar8.Data = local_28.Data.AllocatorInstance.Data;
  }
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = 0;
  }
  uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar6,(wchar_t *)FVar8.Data);
  iVar6 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                      *)(lVar9 + 0x20),uVar5,&local_28);
  lVar7 = 0;
  if (iVar6 != -1) {
    lVar7 = (longlong)iVar6 * 0x78 + *(longlong *)(lVar9 + 0x20);
  }
  lVar9 = lVar7 + 0x10;
  if (lVar7 == 0) {
    lVar9 = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (((lVar9 != 0) && (*(int *)(lVar9 + 0x28) != 0)) && (*(char *)(lVar9 + 0x55) != '\b')) {
    uVar4 = param_4 & 0xf;
    if ((((param_4 & 0xf) != 0) && (uVar4 != 4)) &&
       ((uVar4 != 8 &&
        ((uVar4 != 0xc &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Unimplemented function called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x452,L""), bVar3)))))) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar1 = *(char *)(lVar9 + 0x55);
    if ((cVar1 == '\x05') || ((byte)(cVar1 - 6U) < 2)) {
      TStringBuilderBase<wchar_t>::AppendfImpl
                (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),
                 L"uint %.*s%.*s : packoffset(c%d%s);\n");
    }
    else if (cVar1 == '\0') {
      if (*(int *)(lVar9 + 0x38) == 0) {
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),
                   L"%.*s %s : packoffset(c%d%s);\n");
      }
      else {
        TStringBuilderBase<wchar_t>::AppendfImpl
                  (*(TStringBuilderBase<wchar_t> **)((longlong)this + 8),
                   L"%.*s %s[%.*s] : packoffset(c%d%s);\n");
      }
    }
  }
  return;
}

// operator() @ 145e877b0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

void __thiscall
`FShaderParameterParser::ParseParameters'::__l5::<lambda_1>::operator()
          (void *this,FShaderParametersMetadata *param_1,FMember *param_2,wchar_t *param_3,
          ushort param_4)

{
  longlong lVar1;
  FString local_78;
  FParsedShaderParameter local_68;
  
  local_68.ConstantBufferOffset = (int)param_4;
  local_68.PrecisionModifier.Value = param_2->Precision;
  local_68.BaseType.Value = param_2->BaseType;
  local_68.NumRows = param_2->NumRows;
  local_68.NumColumns = param_2->NumColumns;
  local_68.ParsedName.DataPtr = (wchar_t *)0x0;
  local_68.ParsedName.Size = 0;
  local_68.ParsedType.DataPtr = (wchar_t *)0x0;
  local_68.ParsedType.Size = 0;
  local_68.ParsedArraySize.DataPtr = (wchar_t *)0x0;
  local_68.ParsedArraySize.Size = 0;
  local_68.ParsedPragmaLineOffset = 0;
  local_68.ParsedLineOffset = 0;
  local_68.ParsedCharOffsetStart = -1;
  local_68.ParsedCharOffsetEnd = -1;
  local_68.BindlessConversionType = None;
  local_68.ConstantBufferParameterType = LooseData;
  local_68.bGloballyCoherent = false;
  local_68.bIsBindable = true;
  local_68.ParsedTypeDecl = Invalid;
  if ((local_68.BaseType.Value == UBMT_INT32) || ((byte)(local_68.BaseType.Value - UBMT_UINT32) < 2)
     ) {
    local_68.MemberSize = local_68.NumColumns * param_2->NumRows * 4;
    if (param_2->NumElements != 0) {
      local_68.MemberSize = (local_68.MemberSize + 0xf & 0xfffffff0) * param_2->NumElements;
    }
  }
  else {
    local_68.MemberSize = 0;
  }
  lVar1 = *(longlong *)this;
  ::FString::FString(&local_78,param_3);
  TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
  ::Emplace<FString,FShaderParameterParser::FParsedShaderParameter_const_&>
            ((TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
              *)(lVar1 + 0x20),&local_78,&local_68);
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145e87930

bool __thiscall
`FShaderParameterParser::ValidateShaderParameterType'::__l32::<lambda_1>::operator()
          (void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(*(longlong *)this + 0x28);
  iVar3 = iVar1;
  if (iVar1 - param_1 < iVar1) {
    iVar3 = iVar1 - param_1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  iVar2 = (int)(*(longlong **)((longlong)this + 8))[1];
  iVar3 = iVar2 + -1;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  iVar2 = iVar3;
  if (iVar3 - param_2 < iVar3) {
    iVar2 = iVar3 - param_2;
  }
  iVar5 = 0;
  if (0 < iVar2) {
    iVar5 = iVar2;
  }
  if ((iVar4 != 0) && (iVar5 != 0)) {
    iVar2 = iVar5;
    if (iVar4 < iVar5) {
      iVar2 = iVar4;
    }
    iVar1 = wcsncmp((wchar_t *)
                    (*(longlong *)(*(longlong *)this + 0x20) +
                    ((longlong)iVar1 - (longlong)iVar4) * 2),
                    (wchar_t *)
                    (**(longlong **)((longlong)this + 8) + ((longlong)iVar3 - (longlong)iVar5) * 2),
                    (longlong)iVar2);
    if (iVar1 != 0) {
      return iVar1 == 0;
    }
  }
  return iVar4 == iVar5;
}

// operator() @ 145e87ea0

void __thiscall
`FShaderParameterParser::ParseParameters'::__l6::<lambda_3>::operator()(void *this,FString *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  ::FString::FString(&local_58,L"");
  ::FString::FString(&local_48,L"");
  ::FString::FString(&local_38,L"");
  ::FString::FString(&local_28,L"");
  ::FString::FString(&local_18,L"");
  if (&local_38 != param_1) {
    iVar5 = (param_1->Data).ArrayNum;
    pFVar6 = (param_1->Data).AllocatorInstance.Data;
    local_38.Data.ArrayNum = iVar5;
    if (((iVar5 != 0) || (local_38.Data.ArrayMax != 0)) &&
       (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,iVar5,local_38.Data.ArrayMax,(ForAnyElementType *)&local_38,iVar5,
                   &local_38.Data.ArrayMax), iVar5 != 0)) {
      memcpy(local_38.Data.AllocatorInstance.Data,pFVar6,(longlong)iVar5 * 2);
    }
  }
  FShaderParameterParser::ExtractFileAndLine
            (*(FShaderParameterParser **)this,**(int **)((longlong)this + 8),
             **(int **)((longlong)this + 0x10),&local_58,&local_48);
  pFVar2 = *(ForAnyElementType **)((longlong)this + 0x18);
  if (((pFVar2->Data <= (FScriptContainerElement *)&local_58) &&
      ((FScriptContainerElement *)&local_58 <
       pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 0x50)) &&
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
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x850,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  pFVar6 = pFVar2->Data + (longlong)iVar5 * 0x50;
  ::FString::FString((FString *)pFVar6,&local_58);
  ::FString::FString((FString *)(pFVar6 + 0x10),&local_48);
  ::FString::FString((FString *)(pFVar6 + 0x20),&local_38);
  ::FString::FString((FString *)(pFVar6 + 0x30),&local_28);
  ::FString::FString((FString *)(pFVar6 + 0x40),&local_18);
  **(undefined1 **)((longlong)this + 0x20) = 0;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145e880f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall `FShaderParameterParser::ParseParameters'::__l8::<lambda_5>::operator()(void *this)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  TStringView<wchar_t> TVar7;
  bool bVar8;
  EShaderParameterType EVar9;
  EShaderParameterType EVar10;
  EShaderCodeResourceBindingType EVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  FString *pFVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  int iVar19;
  wchar_t *pwVar20;
  longlong lVar21;
  EShaderParameterType EVar22;
  FScriptContainerElement *pFVar23;
  wint_t *pwVar24;
  EBindlessConversionType EVar25;
  undefined1 auVar26 [12];
  FString local_198;
  wchar_t *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  undefined1 local_178 [32];
  TStringView<wchar_t> local_158;
  wchar_t *local_148;
  undefined8 uStack_140;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  undefined4 uStack_124;
  EShaderCodeResourceBindingType EStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined1 uStack_11d;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined1 uStack_11a;
  undefined1 uStack_119;
  wchar_t *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  TStringView<wchar_t> local_108;
  wchar_t *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  wchar_t *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  TStringView<wchar_t> local_a8;
  TStringView<wchar_t> local_98;
  FString local_88;
  FString local_78;
  FString local_68 [3];
  
  if ((**(short **)this != 0x3b) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Char == \';\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x179,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((**(int **)((longlong)this + 8) == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeStartPos != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x17a,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((**(int **)((longlong)this + 0x10) == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeEndPos != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x17b,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((**(int **)((longlong)this + 0x18) == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NameStartPos != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x17c,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((**(int **)((longlong)this + 0x20) == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NameEndPos != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x17d,L""), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar12 = (int)(*(longlong **)((longlong)this + 0x28))[1];
  iVar13 = **(int **)((longlong)this + 8);
  lVar3 = **(longlong **)((longlong)this + 0x28);
  iVar17 = **(int **)((longlong)this + 0x10) - iVar13;
  if (iVar13 < 0) {
    iVar17 = **(int **)((longlong)this + 0x10);
  }
  if (iVar13 < 0) {
    iVar13 = 0;
  }
  if (iVar12 < iVar13) {
    iVar13 = iVar12;
  }
  iVar2 = iVar12 - iVar13;
  if (iVar17 + 1 < iVar12 - iVar13) {
    iVar2 = iVar17 + 1;
  }
  lVar15 = (longlong)iVar13;
  iVar13 = 0;
  if (0 < iVar2) {
    iVar13 = iVar2;
  }
  local_118 = (wchar_t *)(lVar3 + lVar15 * 2);
  iVar17 = **(int **)((longlong)this + 0x18);
  iVar2 = **(int **)((longlong)this + 0x20);
  iVar19 = iVar2 - iVar17;
  if (iVar17 < 0) {
    iVar19 = iVar2;
  }
  if (iVar17 < 0) {
    iVar17 = 0;
  }
  if (iVar12 < iVar17) {
    iVar17 = iVar12;
  }
  iVar6 = iVar12 - iVar17;
  if (iVar19 + 1 < iVar12 - iVar17) {
    iVar6 = iVar19 + 1;
  }
  local_108.DataPtr = (wchar_t *)(lVar3 + (longlong)iVar17 * 2);
  local_108.Size = 0;
  if (0 < iVar6) {
    local_108.Size = iVar6;
  }
  iVar19 = iVar2 + 1;
  iVar17 = **(int **)((longlong)this + 0x30) - iVar2;
  if (iVar19 < 0) {
    iVar17 = **(int **)((longlong)this + 0x30) + 1;
  }
  if (iVar19 < 0) {
    iVar19 = 0;
  }
  if (iVar12 < iVar19) {
    iVar19 = iVar12;
  }
  iVar2 = iVar12 - iVar19;
  if (iVar17 + -1 < iVar12 - iVar19) {
    iVar2 = iVar17 + -1;
  }
  iVar12 = 0;
  if (0 < iVar2) {
    iVar12 = iVar2;
  }
  iStack_110 = iVar13;
  EVar9 = FShaderParameterParser::ParseAndRemoveBindlessParameterPrefix(&local_108);
  EVar25 = None;
  auVar26._8_4_ = iStack_110;
  auVar26._0_8_ = local_118;
  TVar7._12_4_ = uStack_10c;
  TVar7.DataPtr = local_118;
  TVar7.Size = iStack_110;
  EVar22 = EVar9;
  if ((((*(FShaderParameterParser **)((longlong)this + 0x38))->bBindlessEnabled != false) &&
      (EVar9 == LooseData)) &&
     (local_d8 = TVar7,
     EVar10 = FShaderParameterParser::ParseParameterType
                        (*(FShaderParameterParser **)((longlong)this + 0x38),&local_d8),
     *(char *)(*(longlong *)((longlong)this + 0x38) + 0x70) != '\0')) {
    if (EVar10 == SRV) {
      EVar25 = SRV;
      EVar22 = BindlessSRV;
    }
    else if (EVar10 == UAV) {
      EVar25 = UAV;
      EVar22 = BindlessUAV;
    }
    else {
      if (EVar10 != Sampler) goto LAB_145e883c9;
      EVar25 = Sampler;
      EVar22 = BindlessSampler;
    }
    uStack_e0 = 8;
    local_e8 = L"register";
    local_c8._12_4_ = uStack_dc;
    local_c8.Size = 8;
    iStack_180 = 0;
    if (0 < iVar12) {
      iStack_180 = iVar12;
    }
    local_c8.DataPtr = L"register";
    local_188 = (wchar_t *)
                (lVar3 + (((longlong)iVar12 - (longlong)iStack_180) + (longlong)iVar19) * 2);
    local_b8._12_4_ = uStack_17c;
    local_b8.Size = iStack_180;
    local_b8.DataPtr = local_188;
    iVar12 = UE::String::FindFirst(&local_b8,&local_c8,CaseSensitive);
    if (iVar12 != -1) {
      EVar25 = None;
      EVar22 = EVar10;
    }
  }
LAB_145e883c9:
  local_f8 = L"<";
  iStack_f0 = 1;
  local_a8._12_4_ = uStack_ec;
  local_a8.Size = 1;
  iStack_180 = 0;
  if (0 < iVar13) {
    iStack_180 = iVar13;
  }
  local_a8.DataPtr = L"<";
  local_188 = (wchar_t *)(lVar3 + (((longlong)iVar13 - (longlong)iStack_180) + lVar15) * 2);
  local_98._12_4_ = uStack_17c;
  local_98.Size = iStack_180;
  local_98.DataPtr = local_188;
  iVar12 = UE::String::FindFirst(&local_98,&local_a8,CaseSensitive);
  if (iVar12 != -1) {
    if (iVar12 < iVar13) {
      iVar13 = iVar12;
    }
    iVar12 = 0;
    if (0 < iVar13) {
      iVar12 = iVar13;
    }
    if (iVar12 != 0) {
      lVar21 = (longlong)iVar12;
      pwVar24 = (wint_t *)(lVar3 + (lVar21 + lVar15) * 2);
      do {
        pwVar24 = pwVar24 + -1;
        iVar13 = iswspace(*pwVar24);
        if (iVar13 == 0) break;
        iVar12 = iVar12 + -1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    local_188 = local_118;
    auVar26._8_4_ = iVar12;
    auVar26._0_8_ = local_118;
    iStack_180 = iVar12;
  }
  pFVar23 = (FScriptContainerElement *)0x0;
  iVar12 = 0;
  pFVar16 = ::FString::ConstructFromPtrSize(&local_88,auVar26._0_8_,auVar26._8_4_);
  if (local_68 != pFVar16) {
    pFVar23 = (pFVar16->Data).AllocatorInstance.Data;
    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = (pFVar16->Data).ArrayNum;
    (pFVar16->Data).ArrayNum = 0;
    (pFVar16->Data).ArrayMax = 0;
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  pFVar18 = (FScriptContainerElement *)L"";
  if (iVar12 != 0) {
    pFVar18 = pFVar23;
  }
  EVar11 = ParseShaderResourceBindingType((wchar_t *)pFVar18);
  local_178._4_4_ = 0;
  local_178._8_4_ = 0;
  local_178._12_4_ = 0;
  local_178._16_8_ = (wchar_t *)0x0;
  local_178._24_8_ = (ulonglong)(uint)local_178._28_4_ << 0x20;
  local_158._0_12_ = ZEXT812(0);
  local_148 = (wchar_t *)0x0;
  uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
  uStack_124 = 0;
  EStack_120 = Invalid;
  EVar10 = Num;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_198.Data.ArrayNum = 0;
  local_198.Data.ArrayMax = 0;
  local_178[0] = '\0';
  local_178[1] = '\x03';
  local_138 = ___xmm_ffffffff000000000000000000000000;
  iStack_134 = _UNK_15076cb14;
  iStack_130 = _UNK_15076cb18;
  iStack_12c = _UNK_15076cb1c;
  local_128 = -1;
  pFVar16 = ::FString::ConstructFromPtrSize(&local_78,local_108.DataPtr,local_108.Size);
  if (&local_198 != pFVar16) {
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    local_198.Data.AllocatorInstance.Data = (pFVar16->Data).AllocatorInstance.Data;
    (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_198.Data.ArrayNum = (pFVar16->Data).ArrayNum;
    local_198.Data.ArrayMax = (pFVar16->Data).ArrayMax;
    (pFVar16->Data).ArrayNum = 0;
    (pFVar16->Data).ArrayMax = 0;
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  lVar3 = *(longlong *)((longlong)this + 0x38);
  if (local_198.Data.ArrayNum == 0) {
    iVar12 = 0;
    pwVar20 = L"";
  }
  else {
    iVar12 = local_198.Data.ArrayNum + -1;
    pwVar20 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
  }
  uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar20);
  iVar12 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FString>
                     ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                       *)(lVar3 + 0x20),uVar14,&local_198);
  if (iVar12 != -1) {
    lVar15 = 0;
    lVar3 = *(longlong *)((longlong)this + 0x38);
    if (local_198.Data.ArrayNum == 0) {
      pwVar20 = L"";
      iVar12 = 0;
    }
    else {
      iVar12 = local_198.Data.ArrayNum + -1;
      pwVar20 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar20);
    iVar12 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                         *)(lVar3 + 0x20),uVar14,&local_198);
    if (((iVar12 == -1) ||
        (lVar15 = (longlong)iVar12 * 0x78 + *(longlong *)(lVar3 + 0x20), lVar15 == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (*(int *)(lVar15 + 0x38) != 0) goto LAB_145e8880d;
    lVar15 = 0;
    lVar3 = *(longlong *)((longlong)this + 0x38);
    if (local_198.Data.ArrayNum == 0) {
      pwVar20 = L"";
      iVar12 = 0;
    }
    else {
      iVar12 = local_198.Data.ArrayNum + -1;
      pwVar20 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
    }
    uVar14 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar12,pwVar20);
    iVar12 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
             ::FindIndexByHash<FString>
                       ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                         *)(lVar3 + 0x20),uVar14,&local_198);
    if (((iVar12 == -1) ||
        (lVar15 = (longlong)iVar12 * 0x78 + *(longlong *)(lVar3 + 0x20), lVar15 == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcVar1 = (char *)(lVar15 + 0x10);
    local_178[0] = pcVar1[0];
    local_178[1] = pcVar1[1];
    local_178[2] = *(undefined1 *)(lVar15 + 0x12);
    local_178[3] = *(undefined1 *)(lVar15 + 0x13);
    local_178._4_8_ = *(undefined8 *)(lVar15 + 0x14);
    local_178._12_4_ = *(uint *)(lVar15 + 0x1c);
    local_148 = *(wchar_t **)(lVar15 + 0x40);
    uStack_140 = *(longlong *)(lVar15 + 0x48);
    _local_138 = *(undefined8 *)(lVar15 + 0x50);
    uStack_11f = *(undefined1 *)(lVar15 + 0x69);
    uStack_11e = *(undefined1 *)(lVar15 + 0x6a);
    uStack_11d = *(undefined1 *)(lVar15 + 0x6b);
    uStack_11c = *(undefined1 *)(lVar15 + 0x6c);
    uStack_11b = *(undefined1 *)(lVar15 + 0x6d);
    uStack_11a = *(undefined1 *)(lVar15 + 0x6e);
    uStack_119 = *(undefined1 *)(lVar15 + 0x6f);
    uStack_124 = (uint)*(byte *)(lVar15 + 0x67) << 0x18;
    if (((*(char *)(*(longlong *)((longlong)this + 0x38) + 0x71) != '\0') &&
        (*(byte *)(lVar15 + 0x67) != 0)) &&
       (((byte)(*pcVar1 - 2U) < 3 || ((EVar9 != LooseData || (EVar25 != None)))))) {
      EVar10 = EVar22;
    }
  }
  iVar12 = uStack_124;
  local_178._24_8_ = CONCAT44(local_108._12_4_,local_108.Size);
  local_178._16_8_ = local_108.DataPtr;
  iStack_134 = **(int **)((longlong)this + 0x40);
  iStack_12c = **(int **)((longlong)this + 0x50);
  if (iStack_12c == -1) {
    iStack_12c = **(int **)((longlong)this + 8);
  }
  iStack_130 = **(int **)((longlong)this + 0x48);
  local_128 = **(int **)((longlong)this + 0x30);
  uStack_124._3_1_ = SUB41(iVar12,3);
  uStack_124._0_3_ = CONCAT12(**(undefined1 **)((longlong)this + 0x58),CONCAT11(EVar10,EVar25));
  iVar12 = **(int **)((longlong)this + 0x60);
  if ((iVar12 != -1) && (iVar13 = **(int **)((longlong)this + 0x68), iVar13 != -1)) {
    iVar17 = iVar12 + 1;
    iVar2 = (int)(*(longlong **)((longlong)this + 0x28))[1];
    iVar12 = iVar13 - iVar12;
    if (iVar17 < 0) {
      iVar12 = iVar13 + 1;
    }
    if (iVar17 < 0) {
      iVar17 = 0;
    }
    if (iVar2 < iVar17) {
      iVar17 = iVar2;
    }
    iVar13 = iVar2 - iVar17;
    if (iVar12 + -1 < iVar2 - iVar17) {
      iVar13 = iVar12 + -1;
    }
    local_148 = (wchar_t *)(**(longlong **)((longlong)this + 0x28) + (longlong)iVar17 * 2);
    iStack_f0 = 0;
    if (0 < iVar13) {
      iStack_f0 = iVar13;
    }
    uStack_140 = CONCAT44(uStack_ec,iStack_f0);
    local_f8 = local_148;
  }
  local_158 = TVar7;
  EStack_120 = EVar11;
  TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
  ::Emplace<FString_const_&,FShaderParameterParser::FParsedShaderParameter_const_&>
            ((TMapBase<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
              *)(*(longlong *)((longlong)this + 0x38) + 0x20),&local_198,
             (FParsedShaderParameter *)local_178);
LAB_145e8880d:
  puVar4 = *(undefined8 **)((longlong)this + 0x70);
  *(undefined4 *)*puVar4 = 0xffffffff;
  *(undefined4 *)puVar4[1] = 0xffffffff;
  *(undefined4 *)puVar4[2] = 0xffffffff;
  *(undefined4 *)puVar4[3] = 0xffffffff;
  *(undefined4 *)puVar4[4] = 0xffffffff;
  *(undefined4 *)puVar4[5] = 0xffffffff;
  *(undefined4 *)puVar4[6] = 0xffffffff;
  *(undefined1 *)puVar4[7] = 0;
  *(undefined4 *)puVar4[8] = 0;
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  if (pFVar23 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar23);
  }
  return;
}

// ApplyBindlessModifications @ 145e8c810

void __thiscall
FShaderParameterParser::ApplyBindlessModifications(FShaderParameterParser *this,FString *param_1)

{
  uint uVar1;
  int iVar2;
  FPlatformConfiguration *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EShaderParameterParserConfigurationFlags EVar7;
  FShaderCodeModifications *pFVar8;
  bool bVar9;
  undefined8 *puVar10;
  wchar_t *pwVar11;
  FString *pFVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  uint uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  int iVar22;
  undefined1 *puVar23;
  uint *puVar24;
  FShaderCodeModifications *pFVar25;
  TBitArray<FDefaultBitArrayAllocator> *pTVar26;
  ulonglong uVar27;
  FIdentityFunctor local_res8;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 local_187 [3];
  EShaderParameterParserConfigurationFlags local_184;
  FShaderCodeModifications local_180;
  FShaderCodeModifications local_168;
  FString local_150;
  FShaderCodeModifications *local_140;
  TBitArray<FDefaultBitArrayAllocator> *local_138;
  TMap<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
  *local_130;
  int iStack_128;
  uint uStack_124;
  undefined1 *local_120;
  undefined4 uStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  int local_100;
  int local_fc;
  FShaderCodeModifications *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  undefined8 uStack_d0;
  undefined8 local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  void *local_b8 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  void *local_88 [2];
  FString local_78;
  FString local_68 [2];
  
  if (this->bBindlessEnabled != false) {
    uVar21 = *(int *)&(this->ParsedParameters).field_0x8 -
             *(int *)&(this->ParsedParameters).field_0x34;
    local_198.Data = (FScriptContainerElement *)0x0;
    local_190 = 0;
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
    }
    iVar22 = 0;
    if (0 < (int)uVar21) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar21,&local_198,0,(int *)((longlong)&local_190 + 4));
    }
    pTVar26 = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ParsedParameters).field_0x10;
    iVar16 = *(int *)&(this->ParsedParameters).field_0x28;
    pFVar25 = (FShaderCodeModifications *)&this->ParsedParameters;
    uStack_124 = 1;
    local_110 = 0;
    local_184 = this->PlatformConfiguration->Flags & ReplaceGlobals;
    iStack_114 = local_110;
    if (iVar16 != 0) {
      puVar24 = *(uint **)&(this->ParsedParameters).field_0x20;
      if (puVar24 == (uint *)0x0) {
        puVar24 = (uint *)pTVar26;
      }
      uVar21 = *puVar24;
      local_110 = 0;
      iVar22 = 0;
      while (uVar21 == 0) {
        lVar13 = (longlong)iVar22;
        local_110 = local_110 + 0x20;
        iVar22 = iVar22 + 1;
        iStack_114 = iVar16;
        if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar22) goto LAB_145e8c92d;
        uVar21 = puVar24[lVar13 + 1];
      }
      uStack_124 = -uVar21 & uVar21;
      uVar14 = (ulonglong)uStack_124 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_100 = (int)lVar13;
      iStack_114 = local_110 + -1 + local_100;
      if (iVar16 < iStack_114) {
        iStack_114 = iVar16;
      }
    }
LAB_145e8c92d:
    uVar21 = *(uint *)&(this->ParsedParameters).field_0x28;
    iStack_108 = *(int *)&(this->ParsedParameters).field_0x8 -
                 *(int *)&(this->ParsedParameters).field_0x34;
    uVar19 = uVar21 & 0xffffffe0;
    uStack_118 = 0xffffffff;
    TStack_f0._padding_ = CONCAT44(uStack_124,iVar22);
    TStack_f0.CurrentBitIndex = iStack_114;
    TStack_f0.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar21 >> 5;
    TStack_f0._28_4_ = iStack_114;
    TStack_f0.BaseBitIndex = local_110;
    uStack_d0 = CONCAT44(uStack_104,iStack_108);
    local_140 = pFVar25;
    local_138 = pTVar26;
    local_130 = (TMap<FString,FShaderParameterParser::FParsedShaderParameter,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>_>
                 *)pFVar25;
    iStack_128 = iVar22;
    local_120 = (undefined1 *)pTVar26;
    iStack_10c = iStack_114;
    local_f8 = pFVar25;
    TStack_f0.Array = pTVar26;
    if ((((int)uVar21 < 0) || (iVar16 < (int)uVar21)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    EVar7 = local_184;
    uVar1 = *(uint *)&(this->ParsedParameters).field_0x28;
    if (uVar21 != uVar1) {
      puVar23 = *(undefined1 **)&(this->ParsedParameters).field_0x20;
      if (puVar23 == (undefined1 *)0x0) {
        puVar23 = (undefined1 *)pTVar26;
      }
      uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar23 + (longlong)iVar15 * 4);
      while (uVar21 == 0) {
        lVar13 = (longlong)iVar15;
        uVar19 = uVar19 + 0x20;
        iVar15 = iVar15 + 1;
        uVar21 = uVar1;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_145e8ca3f;
        uVar21 = *(uint *)(puVar23 + lVar13 * 4 + 4);
      }
      uVar14 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_fc = (int)lVar13;
      uVar21 = (uVar19 - 1) + local_fc;
      if ((int)uVar1 < (int)uVar21) {
        uVar21 = uVar1;
      }
    }
LAB_145e8ca3f:
    while( true ) {
      pFVar8 = local_f8;
      if (*(int *)&(local_f8->Replace).Data.AllocatorInstance.Data - local_f8[2].CharOffsetEnd !=
          (int)uStack_d0) {
        local_res18[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if (((TStack_f0.CurrentBitIndex == uVar21) && (TStack_f0.Array == pTVar26)) &&
         (pFVar8 == pFVar25)) break;
      lVar13 = (longlong)TStack_f0.CurrentBitIndex * 0x78 + *(longlong *)pFVar8;
      if (*(int *)(lVar13 + 0x38) != 0) {
        if (*(char *)(lVar13 + 100) == '\0') {
          if ((EVar7 != None) && (*(char *)(lVar13 + 0x10) == '\0')) {
            iVar22 = *(int *)(lVar13 + 0x28);
            if (0x16 < iVar22) {
              iVar22 = 0x16;
            }
            iVar16 = 0;
            if (0 < iVar22) {
              iVar16 = iVar22;
            }
            if ((iVar16 != 0x16) ||
               (iVar22 = FGenericPlatformStricmp::Strnicmp
                                   (L"SamplerDescriptorHeap_",*(wchar_t **)(lVar13 + 0x20),0x16),
               iVar22 != 0)) {
              iVar22 = *(int *)(lVar13 + 0x28);
              if (0x12 < iVar22) {
                iVar22 = 0x12;
              }
              iVar16 = 0;
              if (0 < iVar22) {
                iVar16 = iVar22;
              }
              if ((iVar16 != 0x12) ||
                 (iVar22 = FGenericPlatformStricmp::Strnicmp
                                     (L"SRVDescriptorHeap_",*(wchar_t **)(lVar13 + 0x20),0x12),
                 iVar22 != 0)) {
                iVar22 = *(int *)(lVar13 + 0x28);
                if (0x12 < iVar22) {
                  iVar22 = 0x12;
                }
                iVar16 = 0;
                if (0 < iVar22) {
                  iVar16 = iVar22;
                }
                if ((iVar16 != 0x12) ||
                   (iVar22 = FGenericPlatformStricmp::Strnicmp
                                       (L"UAVDescriptorHeap_",*(wchar_t **)(lVar13 + 0x20),0x12),
                   iVar22 != 0)) {
                  uVar5 = *(undefined8 *)(lVar13 + 0x20);
                  uVar6 = *(undefined8 *)(lVar13 + 0x28);
                  local_180.Replace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                  iVar16 = *(int *)(lVar13 + 0x60) + 1;
                  pFVar3 = this->PlatformConfiguration;
                  local_180.Replace.Data.ArrayNum = 0;
                  local_180.Replace.Data.ArrayMax = 0;
                  iVar22 = *(int *)(lVar13 + 0x5c);
                  pcVar4 = *(code **)(pFVar3->_padding_ + 0x10);
                  local_180.CharOffsetStart = iVar22;
                  local_180.CharOffsetEnd = iVar16;
                  pwVar11 = ::FString::operator[](&this->OriginalParsedShader,iVar22);
                  iStack_c0 = iVar16 - iVar22;
                  local_c8._0_4_ = SUB84(pwVar11,0);
                  local_c8._4_4_ = (undefined4)((ulonglong)pwVar11 >> 0x20);
                  local_98 = (undefined4)local_c8;
                  uStack_94 = local_c8._4_4_;
                  uStack_8c = uStack_bc;
                  local_c8 = pwVar11;
                  local_a8 = uVar5;
                  uStack_a0 = uVar6;
                  iStack_90 = iStack_c0;
                  puVar10 = (undefined8 *)(*pcVar4)(pFVar3,local_88,&local_98);
                  if (&local_180.Replace != (FString *)puVar10) {
                    if (local_180.Replace.Data.AllocatorInstance.Data !=
                        (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_180.Replace.Data.AllocatorInstance.Data);
                    }
                    local_180.Replace.Data.AllocatorInstance.Data =
                         (FScriptContainerElement *)*puVar10;
                    *puVar10 = 0;
                    local_180.Replace.Data._8_8_ = puVar10[1];
                    puVar10[1] = 0;
                  }
                  if (local_88[0] != (void *)0x0) {
                    FMemory::Free(local_88[0]);
                  }
                  if (((local_198.Data <= &local_180) &&
                      (&local_180 <
                       (FShaderCodeModifications *)
                       (local_198.Data + (longlong)local_190._4_4_ * 0x18))) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar9)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar22 = (EShaderParameterParserConfigurationFlags)local_190;
                  if ((EShaderParameterParserConfigurationFlags)local_190 == local_190._4_4_) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x818,&local_198,(int *)((longlong)&local_190 + 4));
                  }
                  FVar18.Data = local_180.Replace.Data.AllocatorInstance.Data;
                  lVar13 = (longlong)iVar22;
                  local_190 = CONCAT44(local_190._4_4_,iVar22 + 1);
                  *(int *)&local_198.Data[lVar13 * 0x18].field_0x0 = local_180.CharOffsetStart;
                  pFVar20 = local_198.Data + (lVar13 * 3 + 1) * 8;
                  *(int *)(local_198.Data + lVar13 * 0x18 + 4) = local_180.CharOffsetEnd;
                  *(FScriptContainerElement **)pFVar20 = (FScriptContainerElement *)0x0;
                  lVar17 = (longlong)local_180.Replace.Data.ArrayNum;
                  *(int *)(pFVar20 + 8) = local_180.Replace.Data.ArrayNum;
                  if (local_180.Replace.Data.ArrayNum == 0) {
                    *(int *)(local_198.Data + lVar13 * 0x18 + 0x14) = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (2,2,local_180.Replace.Data.ArrayNum,0,(ForAnyElementType *)pFVar20,
                               local_180.Replace.Data.ArrayNum,
                               (int *)(local_198.Data + lVar13 * 0x18 + 0x14));
                    /* WARNING: Load size is inaccurate */
                    memcpy(*pFVar20,FVar18.Data,lVar17 * 2);
                  }
                  pTVar26 = local_138;
                  if (local_180.Replace.Data.AllocatorInstance.Data !=
                      (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_180.Replace.Data.AllocatorInstance.Data);
                    pTVar26 = local_138;
                  }
                }
              }
            }
          }
        }
        else {
          local_168.CharOffsetStart = *(int *)(lVar13 + 0x5c);
          local_168.CharOffsetEnd = *(int *)(lVar13 + 0x60) + 1;
          local_168.Replace.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_168.Replace.Data.ArrayNum = 0;
          local_168.Replace.Data.ArrayMax = 0;
          puVar10 = (undefined8 *)(**(code **)(this->_padding_ + 8))(this,local_b8,lVar13 + 0x10);
          if (&local_168.Replace != (FString *)puVar10) {
            if (local_168.Replace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_168.Replace.Data.AllocatorInstance.Data);
            }
            local_168.Replace.Data.AllocatorInstance.Data = (FScriptContainerElement *)*puVar10;
            *puVar10 = 0;
            local_168.Replace.Data._8_8_ = puVar10[1];
            puVar10[1] = 0;
          }
          if (local_b8[0] != (void *)0x0) {
            FMemory::Free(local_b8[0]);
          }
          if (((local_198.Data <= &local_168) &&
              (&local_168 <
               (FShaderCodeModifications *)(local_198.Data + (longlong)local_190._4_4_ * 0x18))) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar22 = (EShaderParameterParserConfigurationFlags)local_190;
          if ((EShaderParameterParserConfigurationFlags)local_190 == local_190._4_4_) {
            iVar22 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_198,(int *)((longlong)&local_190 + 4));
          }
          local_190 = CONCAT44(local_190._4_4_,iVar22 + 1);
          *(int *)&local_198.Data[(longlong)iVar22 * 0x18].field_0x0 = local_168.CharOffsetStart;
          lVar13 = (longlong)iVar22 * 3 + 1;
          *(int *)(local_198.Data + lVar13 * 8 + -4) = local_168.CharOffsetEnd;
          ::FString::FString((FString *)(local_198.Data + lVar13 * 8),&local_168.Replace);
          if (local_168.Replace.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_168.Replace.Data.AllocatorInstance.Data);
          }
        }
      }
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
      pFVar25 = local_140;
    }
    if (0 < (int)(EShaderParameterParserConfigurationFlags)local_190) {
      local_res8 = SUB81(this,0);
      AlgoImpl::
      IntroSortInternal<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int,FIdentityFunctor,TDereferenceWrapper<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,_FShaderParameterParser::ApplyBindlessModifications_::__l25::<lambda_1>_>_>
                ((FShaderCodeModifications *)local_198.Data,
                 (EShaderParameterParserConfigurationFlags)local_190,local_res8,
                 (<lambda_1> *)local_187);
      iVar16 = (param_1->Data).ArrayNum;
      uVar14 = (ulonglong)(int)(EShaderParameterParserConfigurationFlags)local_190;
      local_184 = (EShaderParameterParserConfigurationFlags)local_190;
      iVar22 = iVar16 + -1;
      if (iVar16 == 0) {
        iVar22 = 0;
      }
      pFVar25 = (FShaderCodeModifications *)(local_198.Data + uVar14 * 0x18);
      pFVar20 = local_198.Data + 4;
      uVar27 = uVar14;
      local_140 = pFVar25;
      while( true ) {
        if ((int)uVar14 != (int)uVar27) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if ((FShaderCodeModifications *)(pFVar20 + -4) == pFVar25) break;
        iVar16 = ::FString::Find((FString *)(pFVar20 + 4),L"\n",1,IgnoreCase,FromStart,-1);
        if ((iVar16 != -1) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Modif.Replace.Contains(L\"\\n\")",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                               ,0x42d,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar16 = ((FShaderCodeModifications *)(pFVar20 + -4))->CharOffsetStart;
        uVar14 = (ulonglong)iVar16;
        iVar15 = *(int *)pFVar20;
        if (iVar16 < iVar15) {
          lVar13 = uVar14 * 2;
          do {
            iVar16 = (int)uVar14;
            if (iVar16 < 0) {
code_r0x000145e8cfc8:
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar9) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            else {
              iVar2 = (param_1->Data).ArrayNum;
              iVar15 = iVar2 + -1;
              if (iVar2 == 0) {
                iVar15 = 0;
              }
              if (iVar15 <= iVar16) goto code_r0x000145e8cfc8;
            }
            if ((*(short *)((param_1->Data).AllocatorInstance.Data + lVar13) == 10) &&
               (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<6193839077058413617>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                                   ,0x431,"PreprocessedShaderSource[CharPos] != \'\\n\'"), bVar9)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar15 = *(int *)pFVar20;
            uVar14 = (ulonglong)(iVar16 + 1U);
            lVar13 = lVar13 + 2;
          } while ((int)(iVar16 + 1U) < iVar15);
          uVar27 = (ulonglong)local_184;
          pFVar25 = local_140;
        }
        iVar15 = ((FShaderCodeModifications *)(pFVar20 + -4))->CharOffsetStart - iVar15;
        iVar16 = *(int *)(pFVar20 + 0xc) + -1 + iVar15;
        if (*(int *)(pFVar20 + 0xc) == 0) {
          iVar16 = iVar15;
        }
        uVar14 = local_190 & 0xffffffff;
        iVar22 = iVar22 + iVar16;
        pFVar20 = pFVar20 + 0x18;
      }
      iVar16 = 0;
      local_150.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.Data.ArrayNum = 0;
      local_150.Data.ArrayMax = 0;
      ::FString::Reserve(&local_150,iVar22);
      iVar22 = (EShaderParameterParserConfigurationFlags)local_190;
      uVar14 = (ulonglong)(int)(EShaderParameterParserConfigurationFlags)local_190;
      pFVar25 = (FShaderCodeModifications *)(local_198.Data + uVar14 * 0x18);
      FVar18.Data = local_198.Data;
      while( true ) {
        if ((int)uVar14 != iVar22) {
          local_188 = 0;
          `TCheckedPointerIterator<`FShaderParameterParser::ApplyBindlessModifications'::__l5::FShaderCodeModifications,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_188);
        }
        if ((FShaderCodeModifications *)FVar18.Data == pFVar25) break;
        if ((((FShaderCodeModifications *)FVar18.Data)->CharOffsetStart < iVar16) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentCodePos <= Modif.CharOffsetStart",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                               ,0x43e,L""), bVar9)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar12 = ::FString::Mid(param_1,&local_78,iVar16,
                                 ((FShaderCodeModifications *)FVar18.Data)->CharOffsetStart - iVar16
                                );
        iVar16 = (pFVar12->Data).ArrayNum;
        iVar15 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar15 = 0;
        }
        ::FString::AppendChars(&local_150,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar15);
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        iVar16 = (((FShaderCodeModifications *)FVar18.Data)->Replace).Data.ArrayNum;
        iVar15 = iVar16 + -1;
        if (iVar16 == 0) {
          iVar15 = 0;
        }
        ::FString::AppendChars
                  (&local_150,
                   (wchar_t *)
                   (((FShaderCodeModifications *)FVar18.Data)->Replace).Data.AllocatorInstance.Data,
                   iVar15);
        iVar16 = ((FShaderCodeModifications *)FVar18.Data)->CharOffsetEnd;
        FVar18.Data = FVar18.Data + 0x18;
        uVar14 = local_190 & 0xffffffff;
      }
      iVar22 = (param_1->Data).ArrayNum;
      iVar15 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar15 = 0;
      }
      if ((iVar15 < iVar16) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentCodePos <= PreprocessedShaderSource.Len()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                             ,0x443,L""), bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar22 = (param_1->Data).ArrayNum;
      iVar15 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar15 = 0;
      }
      pFVar12 = ::FString::Mid(param_1,local_68,iVar16,iVar15 - iVar16);
      iVar22 = (pFVar12->Data).ArrayNum;
      iVar16 = iVar22 + -1;
      if (iVar22 == 0) {
        iVar16 = 0;
      }
      ::FString::AppendChars(&local_150,(wchar_t *)(pFVar12->Data).AllocatorInstance.Data,iVar16);
      if (local_68[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68[0].Data.AllocatorInstance.Data);
      }
      iVar22 = local_150.Data.ArrayNum + -1;
      if (local_150.Data.ArrayNum == 0) {
        iVar22 = 0;
      }
      ::FString::AssignRange(param_1,(wchar_t *)local_150.Data.AllocatorInstance.Data,iVar22);
      this->bModifiedShader = true;
      if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_150.Data.AllocatorInstance.Data);
      }
    }
    DestructItems<_FShaderParameterParser::ApplyBindlessModifications_::__l5::FShaderCodeModifications,int>
              ((FShaderCodeModifications *)local_198.Data,
               (EShaderParameterParserConfigurationFlags)local_190);
    if ((FShaderCodeModifications *)local_198.Data != (FShaderCodeModifications *)0x0) {
      FMemory::Free(local_198.Data);
    }
  }
  return;
}

// ExtractFileAndLine @ 145e99090

void __thiscall
FShaderParameterParser::ExtractFileAndLine
          (FShaderParameterParser *this,int param_1,int param_2,FString *param_3,FString *param_4)

{
  wint_t _C;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  FString *pFVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  ForAnyElementType _Str;
  int iVar13;
  int iVar14;
  longlong lVar15;
  int local_res10;
  int local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == -1) {
    return;
  }
  if ((this->OriginalParsedShader).Data.ArrayNum == 0) {
    pwVar11 = L"";
  }
  else {
    pwVar11 = (wchar_t *)(this->OriginalParsedShader).Data.AllocatorInstance.Data;
  }
  iVar4 = wcsncmp((wchar_t *)((longlong)pwVar11 + (longlong)param_1 * 2),L"#line",5);
  if ((iVar4 != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FCString::Strncmp((*OriginalParsedShader) + PragmaLineOffset, L\"#line\", 5) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x5b9,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = (this->OriginalParsedShader).Data.ArrayNum;
  iVar13 = -1;
  iVar6 = -1;
  local_78 = -1;
  local_res10 = -1;
  iVar8 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar8 = 0;
  }
  iVar14 = -1;
  iVar4 = param_1 + 5;
  if (iVar4 < iVar8) {
    iVar12 = param_1 + 6;
    lVar15 = (longlong)iVar4;
    do {
      if (iVar4 < 0) {
code_r0x000145e99195:
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          );
        iVar6 = local_res10;
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      else {
        iVar10 = (this->OriginalParsedShader).Data.ArrayNum;
        iVar9 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar9 = 0;
        }
        if (iVar9 <= iVar4) goto code_r0x000145e99195;
      }
      _C = *(wint_t *)((this->OriginalParsedShader).Data.AllocatorInstance.Data + lVar15 * 2);
      if (_C == 10) break;
      if (iVar6 == -1) {
        iVar5 = iswdigit(_C);
        iVar9 = iVar4;
        iVar10 = local_res10;
        iVar6 = iVar4;
        if (iVar5 == 0) {
LAB_145e99209:
          iVar6 = iVar10;
          if (iVar13 == -1) {
            iVar9 = local_res10;
            if (_C == 0x22) {
              iVar13 = iVar12;
            }
          }
          else {
            iVar9 = local_res10;
            if (_C == 0x22) {
              local_78 = iVar4 + -1;
              if (local_78 != -1) goto LAB_145e99294;
              goto LAB_145e9926e;
            }
          }
        }
      }
      else {
        iVar10 = iVar6;
        if ((iVar14 != -1) || (iVar6 = iswdigit(_C), iVar10 = local_res10, iVar6 != 0))
        goto LAB_145e99209;
        iVar14 = iVar12 + -2;
        iVar9 = local_res10;
        iVar6 = local_res10;
      }
      local_res10 = iVar9;
      iVar4 = iVar4 + 1;
      iVar12 = iVar12 + 1;
      lVar15 = lVar15 + 1;
    } while (lVar15 < iVar8);
    if (iVar13 != -1) goto LAB_145e9926e;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("StartFilePos != -1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                     ,0x5dd,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145e9926e:
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("EndFilePos != -1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                     ,0x5de,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_145e99294:
  if ((iVar14 == -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EndLinePos != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x5df,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar7 = ::FString::Mid(&this->OriginalParsedShader,&local_48,iVar13,(local_78 - iVar13) + 1);
  if (param_3 != pFVar7) {
    pFVar1 = (param_3->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_3->Data).AllocatorInstance.Data = (pFVar7->Data).AllocatorInstance.Data;
    (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_3->Data).ArrayNum = (pFVar7->Data).ArrayNum;
    (param_3->Data).ArrayMax = (pFVar7->Data).ArrayMax;
    (pFVar7->Data).ArrayNum = 0;
    (pFVar7->Data).ArrayMax = 0;
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Mid(&this->OriginalParsedShader,&local_58,local_res10,(iVar14 - local_res10) + 1);
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  _Str.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    _Str.Data = local_58.Data.AllocatorInstance.Data;
  }
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  iVar4 = _wtoi((wchar_t *)_Str.Data);
  ::FString::AppendInt(&local_68,iVar4 + param_2);
  if (param_4 != &local_68) {
    pFVar1 = (param_4->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_4->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
    (param_4->Data).ArrayNum = local_68.Data.ArrayNum;
    (param_4->Data).ArrayMax = local_68.Data.ArrayMax;
    local_68.Data.ArrayNum = 0;
    local_68.Data.ArrayMax = 0;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// GenerateBindlessParameterDeclaration @ 145e9bd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FShaderParameterParser::GenerateBindlessParameterDeclaration
          (FShaderParameterParser *this,FString *__return_storage_ptr__,
          FParsedShaderParameter *param_1)

{
  EBindlessConversionType EVar1;
  EBindlessConversionType EVar2;
  FScriptContainerElement *pFVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FShaderParameterParser *pFVar6;
  void *pvVar7;
  TStringBuilderBase<wchar_t> *pTVar8;
  size_t sVar9;
  FString *pFVar10;
  ulong64 uVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  int iVar16;
  wchar_t *_Str;
  undefined1 auStack_798 [32];
  TStringBuilderBase<wchar_t> **local_778;
  FShaderParameterParser **local_770;
  int local_768;
  FShaderParameterParser *local_758;
  undefined4 uStack_750;
  undefined4 uStack_74c;
  FString local_748;
  TStringBuilderBase<wchar_t> *local_738;
  undefined4 uStack_730;
  wchar_t *local_728;
  wchar_t *local_720;
  int local_718;
  TStringBuilderBase<wchar_t> local_708;
  TStringBuilderBase<wchar_t> local_6e8 [4];
  TStringBuilderBase<wchar_t> local_668;
  TStringBuilderBase<wchar_t> local_648 [4];
  TStringBuilderBase<wchar_t> local_5c8;
  FShaderParameterParser local_5a8;
  TStringBuilderBase<wchar_t> local_528;
  wchar_t local_508 [64];
  TStringBuilderBase<wchar_t> local_488;
  wchar_t local_468 [512];
  ulonglong local_68 [6];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_798;
  EVar1 = param_1->BindlessConversionType;
  _Str = L"";
  pwVar14 = (param_1->ParsedName).DataPtr;
  uVar4 = *(undefined8 *)&(param_1->ParsedName).Size;
  pwVar15 = (param_1->ParsedType).DataPtr;
  uVar5 = *(undefined8 *)&(param_1->ParsedType).Size;
  if (param_1->bGloballyCoherent != false) {
    _Str = L"globallycoherent ";
  }
  if (EVar1 == SRV) {
    pwVar13 = L"BindlessSRV_";
LAB_145e9bdc0:
    uVar11 = 0xc;
  }
  else {
    if (EVar1 == UAV) {
      pwVar13 = L"BindlessUAV_";
      goto LAB_145e9bdc0;
    }
    if (EVar1 == Sampler) {
      uVar11 = 0x10;
      pwVar13 = L"BindlessSampler_";
    }
    else {
      uVar11 = 0;
      pwVar13 = (wchar_t *)0x0;
    }
  }
  local_5c8.Base = (wchar_t *)&local_5a8;
  local_5c8.End = (wchar_t *)&local_528;
  local_5c8.bIsDynamic = false;
  local_5c8.bIsExternal = false;
  local_5c8.CurPos = (wchar_t *)&local_5a8;
  local_758 = this;
  if (&local_528 < (TStringBuilderBase<wchar_t> *)((longlong)&local_5a8._padding_ + uVar11 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_5c8,uVar11);
  }
  if ((int)uVar11 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_5c8.CurPos,pwVar13,uVar11 * 2);
    local_5c8.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
  }
  iVar12 = (int)uVar4;
  local_768 = iVar12;
  local_728 = pwVar14;
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_5c8,pwVar14,iVar12);
  local_488.Base = local_468;
  local_488.CurPos = local_468;
  local_488.End = (wchar_t *)local_68;
  local_488.bIsDynamic = false;
  local_488.bIsExternal = false;
  if (param_1->ConstantBufferParameterType == Num) {
    pvVar7 = FGenericPlatformString::Memcpy(local_468,L"uint ",10);
    local_488.CurPos = (wchar_t *)((longlong)pvVar7 + 10);
    pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                       (&local_488,local_5c8.Base,
                        (int)((longlong)local_5c8.CurPos - (longlong)local_5c8.Base >> 1));
    TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L"; ",2);
  }
  local_528.Base = local_508;
  local_528.bIsDynamic = false;
  local_528.bIsExternal = false;
  local_528.CurPos = local_508;
  local_528.End = (wchar_t *)&local_488;
  pvVar7 = FGenericPlatformString::Memcpy(local_508,L"SafeType",0x10);
  local_528.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_528,pwVar14,iVar12);
  if (local_488.End < local_488.CurPos + 8) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,8);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_488.CurPos,L"typedef ",0x10);
  local_488.CurPos = (wchar_t *)((longlong)pvVar7 + 0x10);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,pwVar15,(int)uVar5);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L" ",1);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar8,local_528.Base,
                      (int)((longlong)local_528.CurPos - (longlong)local_528.Base >> 1));
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L";",1);
  local_708.Base = (wchar_t *)local_6e8;
  local_708.bIsDynamic = false;
  local_708.bIsExternal = false;
  local_708.End = (wchar_t *)&local_668;
  local_708.CurPos = (wchar_t *)local_6e8;
  sVar9 = wcslen(_Str);
  iVar12 = (int)sVar9;
  uVar11 = (longlong)iVar12 * 2;
  pTVar8 = local_6e8;
  if (&local_668 < (TStringBuilderBase<wchar_t> *)((longlong)&local_6e8[0].Base + uVar11)) {
    TStringBuilderBase<wchar_t>::Extend(&local_708,(longlong)iVar12);
    pTVar8 = (TStringBuilderBase<wchar_t> *)local_708.CurPos;
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(pTVar8,_Str,uVar11);
    local_708.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_708,local_528.Base,
             (int)((longlong)local_528.CurPos - (longlong)local_528.Base >> 1));
  pFVar6 = local_758;
  local_668.End = (wchar_t *)&local_5c8;
  local_668.Base = (wchar_t *)local_648;
  local_668.CurPos = (wchar_t *)local_648;
  local_668.bIsDynamic = false;
  local_668.bIsExternal = false;
  if ((local_758->PlatformConfiguration->Flags & BindlessUsesArrays) == None) goto LAB_145e9c208;
  EVar2 = param_1->BindlessConversionType;
  if (EVar2 == SRV) {
    pwVar14 = L"SRVDescriptorHeap_";
LAB_145e9c106:
    uVar11 = 0x12;
  }
  else {
    if (EVar2 == UAV) {
      pwVar14 = L"UAVDescriptorHeap_";
      goto LAB_145e9c106;
    }
    if (EVar2 == Sampler) {
      uVar11 = 0x16;
      pwVar14 = L"SamplerDescriptorHeap_";
    }
    else {
      uVar11 = 0;
      pwVar14 = (wchar_t *)0x0;
    }
  }
  if (&local_5c8 < (TStringBuilderBase<wchar_t> *)((longlong)&local_648[0].Base + uVar11 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_668,uVar11);
  }
  if ((int)uVar11 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_668.CurPos,pwVar14,uVar11 * 2);
    local_668.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
  }
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            (&local_668,local_528.Base,
             (int)((longlong)local_528.CurPos - (longlong)local_528.Base >> 1));
  pwVar14 = local_708.Base;
  iVar12 = (int)((longlong)local_708.CurPos - (longlong)local_708.Base >> 1);
  uVar11 = (ulong64)iVar12;
  if (local_488.End < local_488.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,uVar11);
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_488.CurPos,pwVar14,uVar11 * 2);
    local_488.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
  }
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L" ",1);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (pTVar8,local_668.Base,
                      (int)((longlong)local_668.CurPos - (longlong)local_668.Base >> 1));
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L"[]; ",4);
LAB_145e9c208:
  _uStack_750 = CONCAT44(uStack_74c,
                         (int)((longlong)local_5c8.CurPos - (longlong)local_5c8.Base >> 1));
  local_770 = &local_758;
  local_778 = &local_738;
  local_748.Data.ArrayNum = (int)((longlong)local_708.CurPos - (longlong)local_708.Base >> 1);
  uStack_730 = (undefined4)((longlong)local_668.CurPos - (longlong)local_668.Base >> 1);
  local_758 = (FShaderParameterParser *)local_5c8.Base;
  local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)local_708.Base;
  local_738 = (TStringBuilderBase<wchar_t> *)local_668.Base;
  (**(code **)(pFVar6->PlatformConfiguration->_padding_ + 8))
            (pFVar6->PlatformConfiguration,&local_720,param_1->BindlessConversionType,&local_748);
  pwVar14 = local_708.Base;
  if (EVar1 == Sampler) {
    pwVar15 = L"GetBindlessSampler";
  }
  else {
    pwVar15 = L"GetBindlessSRV";
    if (EVar1 == UAV) {
      pwVar15 = L"GetBindlessUAV";
    }
  }
  iVar12 = (int)((longlong)local_708.CurPos - (longlong)local_708.Base >> 1);
  uVar11 = (ulong64)iVar12;
  if (local_488.End < local_488.CurPos + uVar11) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,uVar11);
  }
  if (iVar12 != 0) {
    pvVar7 = FGenericPlatformString::Memcpy(local_488.CurPos,pwVar14,uVar11 * 2);
    local_488.CurPos = (wchar_t *)((longlong)pvVar7 + uVar11 * 2);
  }
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_488,L" ",1);
  sVar9 = wcslen(pwVar15);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,pwVar15,(int)sVar9);
  pwVar14 = local_728;
  iVar12 = local_768;
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,local_728,local_768);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L"() { return ",0xc);
  iVar16 = local_718 + -1;
  if (local_718 == 0) {
    iVar16 = 0;
  }
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,local_720,iVar16);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L"; } ",4);
  if (local_488.End < local_488.CurPos + 0xd) {
    TStringBuilderBase<wchar_t>::Extend(&local_488,0xd);
  }
  pvVar7 = FGenericPlatformString::Memcpy(local_488.CurPos,L"static const ",0x1a);
  local_488.CurPos = (wchar_t *)((longlong)pvVar7 + 0x1a);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     (&local_488,local_708.Base,
                      (int)((longlong)local_708.CurPos - (longlong)local_708.Base >> 1));
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L" ",1);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,pwVar14,iVar12);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L" = ",3);
  sVar9 = wcslen(pwVar15);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,pwVar15,(int)sVar9);
  pTVar8 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,pwVar14,iVar12);
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar8,L"();",3);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar10 = ::FString::ConstructFromPtrSize
                      (&local_748,local_488.Base,
                       (int)((longlong)local_488.CurPos - (longlong)local_488.Base >> 1));
  if (__return_storage_ptr__ != pFVar10) {
    pFVar3 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
    (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar10->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar10->Data).ArrayMax;
    (pFVar10->Data).ArrayNum = 0;
    (pFVar10->Data).ArrayMax = 0;
  }
  if ((TStringBuilderBase<wchar_t> *)local_748.Data.AllocatorInstance.Data !=
      (TStringBuilderBase<wchar_t> *)0x0) {
    FMemory::Free(local_748.Data.AllocatorInstance.Data);
  }
  if (local_720 != (wchar_t *)0x0) {
    FMemory::Free(local_720);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_668);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_708);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_528);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_488);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_5c8);
  return __return_storage_ptr__;
}

// GetBindlessParameterPrefix @ 145e9cd60

TStringView<wchar_t> * __cdecl
FShaderParameterParser::GetBindlessParameterPrefix
          (TStringView<wchar_t> *__return_storage_ptr__,EShaderParameterType param_1)

{
  if (param_1 == BindlessSampler) {
    __return_storage_ptr__->Size = 0x10;
    __return_storage_ptr__->DataPtr = L"BindlessSampler_";
    return __return_storage_ptr__;
  }
  if (param_1 != BindlessSRV) {
    if (param_1 != BindlessUAV) {
      *(undefined8 *)&__return_storage_ptr__->Size = 0;
      __return_storage_ptr__->DataPtr = (wchar_t *)0x0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Size = 0xc;
    __return_storage_ptr__->DataPtr = L"BindlessUAV_";
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->Size = 0xc;
  __return_storage_ptr__->DataPtr = L"BindlessSRV_";
  return __return_storage_ptr__;
}

// MoveShaderParametersToRootConstantBuffer @ 145ea6cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall
FShaderParameterParser::MoveShaderParametersToRootConstantBuffer
          (FShaderParameterParser *this,FShaderParametersMetadata *param_1,EShaderFrequency param_2,
          FString *param_3)

{
  wchar_t *_Str;
  FScriptContainerElement *pFVar1;
  EShaderFrequency EVar2;
  size_t sVar3;
  void *pvVar4;
  TStringBuilderBase<wchar_t> *pTVar5;
  undefined8 *puVar6;
  FString *pFVar7;
  ulong64 uVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined1 auStack_938 [32];
  EShaderFrequency local_918;
  TStringBuilderBase<wchar_t> local_910;
  <lambda_1> local_8e8;
  FString local_8d8;
  TStringBuilderBase<wchar_t> local_8c8;
  ulong64 local_8a8;
  FString local_8a0;
  TStringBuilderWithBuffer<wchar_t,1024> local_888;
  ulonglong local_68 [5];
  
  local_68[0] = __security_cookie.value ^ (ulonglong)auStack_938;
  if ((param_1 != (FShaderParametersMetadata *)0x0) &&
     (this->bNeedToMoveToRootConstantBuffer != false)) {
    local_8e8.ConstantBufferMembers = &local_8c8;
    local_888._padding_ = (longlong)local_888.StringBuffer;
    pwVar10 = local_888.StringBuffer;
    local_888._padding_ = (longlong)local_68;
    local_8c8.End = (wchar_t *)0x0;
    local_8c8.bIsDynamic = false;
    local_8c8.bIsExternal = false;
    local_888._padding_._0_2_ = 0;
    local_8c8.Base = (wchar_t *)0x0;
    local_8c8.CurPos = (wchar_t *)0x0;
    local_918 = param_2;
    local_8e8.__this = this;
    local_888._padding_ = (longlong)pwVar10;
    if ((param_1->UseCase == UniformBuffer) || (param_1->UseCase == DataDrivenUniformBuffer)) {
      _Str = param_1->ShaderVariableName;
      iVar9 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar3 = wcslen(_Str);
        iVar9 = (int)sVar3;
      }
      local_8a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)(longlong)iVar9;
      local_8a8 = (longlong)local_8a0.Data.AllocatorInstance.Data * 2;
      if (local_68 < local_888.StringBuffer + (longlong)local_8a0.Data.AllocatorInstance.Data) {
        TStringBuilderBase<wchar_t>::Extend
                  ((TStringBuilderBase<wchar_t> *)&local_888,
                   (ulong64)local_8a0.Data.AllocatorInstance.Data);
        pwVar10 = (wchar_t *)local_888._padding_;
      }
      if (iVar9 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(pwVar10,_Str,local_8a8);
        pwVar10 = (wchar_t *)
                  ((longlong)pvVar4 + (longlong)local_8a0.Data.AllocatorInstance.Data * 2);
        local_888._padding_ = (longlong)pwVar10;
      }
      if ((ulonglong)local_888._padding_ < pwVar10 + 1) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_888,1);
        pwVar10 = (wchar_t *)local_888._padding_;
      }
      pvVar4 = FGenericPlatformString::Memcpy(pwVar10,L"_",2);
      local_888._padding_ = (longlong)pvVar4 + 2;
    }
    EVar2 = local_918;
    IterateShaderParameterMembersInternal<_FShaderParameterParser::MoveShaderParametersToRootConstantBuffer_::__l5::<lambda_1>_>
              (param_1,0,&local_888,&local_8e8);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_888);
    if (0 < (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1)) {
      local_910.Base = (wchar_t *)0x0;
      local_910.CurPos = (wchar_t *)0x0;
      local_910.End = (wchar_t *)0x0;
      local_910.bIsDynamic = false;
      local_910.bIsExternal = false;
      iVar9 = (int)*(undefined8 *)&(this->PlatformConfiguration->StableConstantBufferType).Size;
      pwVar10 = (this->PlatformConfiguration->StableConstantBufferType).DataPtr;
      uVar8 = (longlong)iVar9 * 2;
      if (uVar8 != 0) {
        TStringBuilderBase<wchar_t>::Extend(&local_910,(longlong)iVar9);
      }
      if (iVar9 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(local_910.CurPos,pwVar10,uVar8);
        local_910.CurPos = (wchar_t *)((longlong)pvVar4 + uVar8);
      }
      pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(&local_910,L" ",1);
      pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"_RootShaderParameters",0x15);
      puVar6 = (undefined8 *)
               (**(code **)(this->PlatformConfiguration->_padding_ + 0x18))
                         (this->PlatformConfiguration,&local_8e8,EVar2);
      iVar9 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar9 = 0;
      }
      pTVar5 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,(wchar_t *)*puVar6,iVar9);
      TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar5,L"\n{\n",3);
      if (local_8e8.__this != (FShaderParameterParser *)0x0) {
        FMemory::Free(local_8e8.__this);
      }
      pwVar10 = local_8c8.Base;
      iVar9 = (int)((longlong)local_8c8.CurPos - (longlong)local_8c8.Base >> 1);
      uVar8 = (ulong64)iVar9;
      if (local_910.End < local_910.CurPos + uVar8) {
        TStringBuilderBase<wchar_t>::Extend(&local_910,uVar8);
      }
      if (iVar9 != 0) {
        pvVar4 = FGenericPlatformString::Memcpy(local_910.CurPos,pwVar10,uVar8 * 2);
        local_910.CurPos = (wchar_t *)((longlong)pvVar4 + uVar8 * 2);
      }
      if (local_910.End < local_910.CurPos + 3) {
        TStringBuilderBase<wchar_t>::Extend(&local_910,3);
      }
      pvVar4 = FGenericPlatformString::Memcpy(local_910.CurPos,L"}\n\n",6);
      local_910.CurPos = (wchar_t *)((longlong)pvVar4 + 6);
      if (local_910.End < (wchar_t *)((longlong)pvVar4 + 8U)) {
        TStringBuilderBase<wchar_t>::Extend(&local_910,1);
      }
      *local_910.CurPos = L'\0';
      ::FString::FString((FString *)&local_8e8,local_910.Base);
      pFVar7 = MakeInjectedShaderCodeBlock
                         (&local_8a0,L"MoveShaderParametersToRootConstantBuffer",
                          (FString *)&local_8e8);
      ::FString::ConcatFF(&local_8d8,pFVar7,param_3);
      if (local_8a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8a0.Data.AllocatorInstance.Data);
      }
      if (local_8e8.__this != (FShaderParameterParser *)0x0) {
        FMemory::Free(local_8e8.__this);
      }
      if (param_3 != &local_8d8) {
        pFVar1 = (param_3->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        (param_3->Data).AllocatorInstance.Data = local_8d8.Data.AllocatorInstance.Data;
        (param_3->Data).ArrayNum = local_8d8.Data.ArrayNum;
        (param_3->Data).ArrayMax = local_8d8.Data.ArrayMax;
        local_8d8.Data.ArrayNum = 0;
        local_8d8.Data.ArrayMax = 0;
        local_8d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      this->bMovedLoosedParametersToRootConstantBuffer = true;
      this->bModifiedShader = true;
      if (local_8d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_8d8.Data.AllocatorInstance.Data);
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_910);
    }
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_8c8);
  }
  return true;
}

// ParseAndModify @ 145ea7880

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

bool __thiscall
FShaderParameterParser::ParseAndModify
          (FShaderParameterParser *this,FShaderCompilerInput *param_1,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  bool bVar1;
  EShaderParameterParserConfigurationFlags EVar2;
  int iVar3;
  FShaderParametersMetadata *pFVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  
  bVar1 = param_1->bBindlessEnabled;
  this->bBindlessEnabled = bVar1;
  pFVar4 = param_1->RootParametersStructure;
  EVar2 = this->PlatformConfiguration->Flags;
  if ((EVar2 & UseStableConstantBuffer) != None) {
    bVar5 = FShaderCompilerInput::IsRayTracingShader(param_1);
    if (bVar5) {
LAB_145ea7907:
      bVar5 = true;
      goto LAB_145ea790d;
    }
    switch(*(byte *)&(param_1->Target).field0_0x0 & 0xf) {
    default:
      if (pFVar4 != (FShaderParametersMetadata *)0x0) goto LAB_145ea7907;
      break;
    case 6:
    case 7:
    case 8:
    case 9:
      break;
    }
  }
  bVar5 = false;
LAB_145ea790d:
  if (((EVar2 & SupportsBindless) == None) || (bVar1 == false)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((bVar5 != false) || (bVar1)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (((pFVar4 != (FShaderParametersMetadata *)0x0) || (bVar1)) ||
     ((EVar2 & AlwaysParseParams) != None)) {
    this->bNeedToMoveToRootConstantBuffer = bVar5;
    iVar3 = (param_3->Data).ArrayNum;
    iVar7 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange
              (&this->OriginalParsedShader,(wchar_t *)(param_3->Data).AllocatorInstance.Data,iVar7);
    bVar6 = ParseParameters(this,param_1->RootParametersStructure,param_2);
    bVar5 = false;
    if ((bVar6) && (bVar5 = true, bVar1)) {
      RemoveMovingParametersFromSource(this,param_3);
      if ((EVar2 & SupportsBindless) != None) {
        ApplyBindlessModifications(this,param_3);
      }
      if (this->bNeedToMoveToRootConstantBuffer != false) {
        bVar5 = MoveShaderParametersToRootConstantBuffer
                          (this,param_1->RootParametersStructure,
                           *(EShaderFrequency *)&(param_1->Target).field0_0x0 &
                           (SF_NumFrequencies|SF_Pixel),param_3);
      }
    }
  }
  else {
    bVar5 = true;
  }
  return bVar5;
}

// ParseAndRemoveBindlessParameterPrefix @ 145ea7a20

EShaderParameterType __cdecl
FShaderParameterParser::ParseAndRemoveBindlessParameterPrefix(TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *_Str2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  wchar_t *local_58;
  undefined8 uStack_50;
  
  iVar1 = param_1->Size;
  _Str2 = param_1->DataPtr;
  uVar2 = *(undefined8 *)&param_1->Size;
  iVar4 = iVar1;
  if (0xc < iVar1) {
    iVar4 = 0xc;
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar5 = iVar4;
  }
  local_58 = _Str2;
  uVar3 = uVar2;
  if ((iVar5 == 0xc) && (iVar4 = wcsncmp(L"BindlessSRV_",_Str2,0xc), iVar4 == 0)) {
    iVar4 = iVar1;
    if (iVar1 + -0xc < iVar1) {
      iVar4 = iVar1 + -0xc;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      iVar5 = iVar4;
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar5);
    local_58 = _Str2 + ((longlong)iVar1 - (longlong)iVar5);
    uVar3 = uStack_50;
  }
  uStack_50 = uVar3;
  param_1->DataPtr = local_58;
  *(undefined8 *)&param_1->Size = uStack_50;
  iVar1 = param_1->Size;
  iVar4 = (int)uVar2;
  if (iVar1 == iVar4) {
    if ((iVar1 != 0) && (iVar4 != 0)) {
      iVar5 = iVar4;
      if (iVar1 < iVar4) {
        iVar5 = iVar1;
      }
      iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,_Str2,(longlong)iVar5);
      if (iVar5 != 0) {
        return BindlessSRV;
      }
    }
    if (iVar1 == iVar4) {
      iVar1 = param_1->Size;
      local_58 = param_1->DataPtr;
      uVar2 = *(undefined8 *)&param_1->Size;
      iVar5 = iVar1;
      if (0xc < iVar1) {
        iVar5 = 0xc;
      }
      iVar6 = 0;
      if (0 < iVar5) {
        iVar6 = iVar5;
      }
      if ((iVar6 == 0xc) && (iVar5 = wcsncmp(L"BindlessUAV_",local_58,0xc), iVar5 == 0)) {
        iVar5 = iVar1;
        if (iVar1 + -0xc < iVar1) {
          iVar5 = iVar1 + -0xc;
        }
        iVar6 = 0;
        if (0 < iVar5) {
          iVar6 = iVar5;
        }
        uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
        local_58 = local_58 + ((longlong)iVar1 - (longlong)iVar6);
        uVar2 = uStack_50;
      }
      uStack_50 = uVar2;
      param_1->DataPtr = local_58;
      *(undefined8 *)&param_1->Size = uStack_50;
      iVar1 = param_1->Size;
      if (iVar1 == iVar4) {
        if ((iVar1 != 0) && (iVar4 != 0)) {
          iVar5 = iVar4;
          if (iVar1 < iVar4) {
            iVar5 = iVar1;
          }
          iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,_Str2,(longlong)iVar5);
          if (iVar5 != 0) {
            return BindlessUAV;
          }
        }
        if (iVar1 == iVar4) {
          iVar1 = param_1->Size;
          local_58 = param_1->DataPtr;
          uVar2 = *(undefined8 *)&param_1->Size;
          iVar5 = iVar1;
          if (0x10 < iVar1) {
            iVar5 = 0x10;
          }
          iVar6 = 0;
          if (0 < iVar5) {
            iVar6 = iVar5;
          }
          if ((iVar6 == 0x10) && (iVar5 = wcsncmp(L"BindlessSampler_",local_58,0x10), iVar5 == 0)) {
            iVar5 = iVar1;
            if (iVar1 + -0x10 < iVar1) {
              iVar5 = iVar1 + -0x10;
            }
            iVar6 = 0;
            if (0 < iVar5) {
              iVar6 = iVar5;
            }
            uStack_50 = CONCAT44(uStack_50._4_4_,iVar6);
            local_58 = local_58 + ((longlong)iVar1 - (longlong)iVar6);
            uVar2 = uStack_50;
          }
          uStack_50 = uVar2;
          param_1->DataPtr = local_58;
          *(undefined8 *)&param_1->Size = uStack_50;
          iVar1 = param_1->Size;
          if (iVar1 == iVar4) {
            if ((iVar1 != 0) && (iVar4 != 0)) {
              iVar5 = iVar4;
              if (iVar1 < iVar4) {
                iVar5 = iVar1;
              }
              iVar5 = FGenericPlatformStricmp::Strnicmp(param_1->DataPtr,_Str2,(longlong)iVar5);
              if (iVar5 != 0) {
                return BindlessSampler;
              }
            }
            if (iVar1 == iVar4) {
              return LooseData;
            }
          }
          return BindlessSampler;
        }
      }
      return BindlessUAV;
    }
  }
  return BindlessSRV;
}

// ParseAndRemoveBindlessParameterPrefix @ 145ea7cc0

EShaderParameterType __cdecl
FShaderParameterParser::ParseAndRemoveBindlessParameterPrefix(FString *param_1)

{
  FScriptContainerElement *pFVar1;
  EShaderParameterType EVar2;
  FString *pFVar3;
  FScriptContainerElement *pFVar4;
  int iVar5;
  int iVar6;
  TStringView<wchar_t> local_28;
  FString local_18;
  
  local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  pFVar4 = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->Data).ArrayNum;
  iVar5 = 0;
  local_28.Size = iVar6 + -1;
  if (iVar6 == 0) {
    local_28.Size = iVar5;
  }
  EVar2 = ParseAndRemoveBindlessParameterPrefix(&local_28);
  pFVar3 = ::FString::ConstructFromPtrSize((FString *)&local_28,local_28.DataPtr,local_28.Size);
  iVar6 = iVar5;
  if (&local_18 != pFVar3) {
    pFVar4 = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar5 = (pFVar3->Data).ArrayNum;
    iVar6 = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (param_1 == &local_18) {
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  else {
    pFVar1 = (param_1->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->Data).AllocatorInstance.Data = pFVar4;
    (param_1->Data).ArrayNum = iVar5;
    (param_1->Data).ArrayMax = iVar6;
  }
  return EVar2;
}

// ParseParameterType @ 145ea7da0

EShaderParameterType __thiscall
FShaderParameterParser::ParseParameterType
          (FShaderParameterParser *this,TStringView<wchar_t> *param_1)

{
  int iVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  bool bVar4;
  EShaderParameterType EVar5;
  int iVar6;
  int iVar7;
  TStringView<wchar_t> *pTVar8;
  TStringView<wchar_t> local_28;
  
  local_28.DataPtr = param_1->DataPtr;
  uVar2._0_4_ = param_1->Size;
  uVar2._4_4_ = *(undefined4 *)&param_1->field_0xc;
  pTVar8 = s_AllSamplerTypes;
  local_28._8_8_ = uVar2;
  do {
    iVar1 = pTVar8->Size;
    if (iVar1 == (int)uVar2) {
      if ((iVar1 != 0) && ((int)uVar2 != 0)) {
        iVar6 = (int)uVar2;
        if (iVar1 < (int)uVar2) {
          iVar6 = iVar1;
        }
        iVar6 = FGenericPlatformStricmp::Strnicmp(pTVar8->DataPtr,param_1->DataPtr,(longlong)iVar6);
        if (iVar6 != 0) goto LAB_145ea7e18;
      }
      if (iVar1 == (int)uVar2) {
        return Sampler;
      }
    }
LAB_145ea7e18:
    pTVar8 = pTVar8 + 1;
  } while (pTVar8 != (TStringView<wchar_t> *)
                     L"Note: Only used when threadpool PSO precompiling is active.\nThe number of active PSO precompile jobs in flight before we will submit another batch of jobs. \ni.e. when the number of inflight precompile tasks drops below this threshold we can add the next batch of precompile tasks. \nThis is to prevent bubbles between precompile batches but also to avoid saturating dispatch."
          );
  StripTemplateFromType(&local_28,param_1);
  uVar2 = local_28._8_8_;
  pwVar3 = local_28.DataPtr;
  pTVar8 = s_AllSRVTypes;
  do {
    iVar1 = pTVar8->Size;
    iVar6 = (int)uVar2;
    if (iVar1 == iVar6) {
      if ((iVar1 != 0) && (iVar6 != 0)) {
        iVar7 = iVar6;
        if (iVar1 < iVar6) {
          iVar7 = iVar1;
        }
        iVar7 = FGenericPlatformStricmp::Strnicmp(pTVar8->DataPtr,pwVar3,(longlong)iVar7);
        if (iVar7 != 0) goto LAB_145ea7e78;
      }
      if (iVar1 == iVar6) goto LAB_145ea7efe;
    }
LAB_145ea7e78:
    pTVar8 = pTVar8 + 1;
  } while (pTVar8 != (TStringView<wchar_t> *)L"Texture1D");
  bVar4 = TArrayView<TStringView<wchar_t>_const_,int>::Contains<TStringView<wchar_t>_>
                    (&this->PlatformConfiguration->ExtraSRVTypes,&local_28);
  if (bVar4) {
LAB_145ea7efe:
    EVar5 = SRV;
  }
  else {
    pTVar8 = s_AllUAVTypes;
    do {
      iVar1 = pTVar8->Size;
      if (iVar1 == iVar6) {
        if ((iVar1 != 0) && (iVar6 != 0)) {
          iVar7 = iVar6;
          if (iVar1 < iVar6) {
            iVar7 = iVar1;
          }
          iVar7 = FGenericPlatformStricmp::Strnicmp(pTVar8->DataPtr,pwVar3,(longlong)iVar7);
          if (iVar7 != 0) goto LAB_145ea7ed3;
        }
        if (iVar1 == iVar6) {
          return UAV;
        }
      }
LAB_145ea7ed3:
      pTVar8 = pTVar8 + 1;
    } while (pTVar8 != (TStringView<wchar_t> *)L"AppendStructuredBuffer");
    bVar4 = TArrayView<TStringView<wchar_t>_const_,int>::Contains<TStringView<wchar_t>_>
                      (&this->PlatformConfiguration->ExtraUAVTypes,&local_28);
    EVar5 = -bVar4 & UAV;
  }
  return EVar5;
}

// ParseParameters @ 145ea7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FShaderParameterParser::ParseParameters
          (FShaderParameterParser *this,FShaderParametersMetadata *param_1,
          TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *param_2)

{
  ushort uVar1;
  FScriptContainerElement *_Str1;
  short sVar2;
  wchar_t *_Str;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  ulong64 uVar10;
  wchar_t *pwVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  ushort uVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  undefined1 auStack_a18 [32];
  int local_9f8;
  int local_9f0;
  char local_9e8;
  char local_9e7;
  char local_9e6;
  int local_9e4;
  int local_9e0;
  undefined1 local_9dc;
  undefined1 local_9db [3];
  int local_9d8;
  int local_9d4;
  int local_9d0;
  int local_9cc;
  int local_9c8;
  int local_9c4;
  int local_9c0;
  int local_9bc;
  int local_9b8;
  int local_9b4;
  FScriptContainerElement *local_9b0;
  int local_9a8;
  int *local_998;
  int *local_990;
  int *local_988;
  int *local_980;
  int *local_978;
  int *local_970;
  int *local_968;
  undefined1 *local_960;
  int *local_958;
  FShaderParameterParser *local_948;
  FString local_938;
  FString local_928;
  FShaderParameterParser *local_918;
  int *local_910;
  int *local_908;
  TArray<FShaderCompilerError,TSizedDefaultAllocator<32>_> *local_900;
  undefined1 *local_8f8;
  int *local_8e8;
  int *local_8e0;
  int *local_8d8;
  int *local_8d0;
  int *local_8c8;
  FScriptContainerElement **local_8c0;
  int *local_8b8;
  FShaderParameterParser *local_8b0;
  int *local_8a8;
  int *local_8a0;
  int *local_898;
  undefined1 *local_890;
  int *local_888;
  int *local_880;
  int **local_878;
  TStringBuilderWithBuffer<wchar_t,1024> local_868;
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_a18;
  local_9b0 = (this->OriginalParsedShader).Data.AllocatorInstance.Data;
  iVar13 = (this->OriginalParsedShader).Data.ArrayNum;
  local_9a8 = iVar13 + -1;
  if (iVar13 == 0) {
    local_9a8 = 0;
  }
  local_948 = this;
  if (param_1 != (FShaderParametersMetadata *)0x0) {
    TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
    ::Reserve((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
               *)&this->ParsedParameters,param_1->Size >> 2);
    local_868._padding_ = (longlong)local_868.StringBuffer;
    local_868._padding_ = (longlong)local_48;
    pwVar11 = local_868.StringBuffer;
    local_868._padding_._0_2_ = 0;
    local_868._padding_ = (longlong)pwVar11;
    if ((param_1->UseCase == UniformBuffer) || (param_1->UseCase == DataDrivenUniformBuffer)) {
      _Str = param_1->ShaderVariableName;
      iVar13 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar8 = wcslen(_Str);
        iVar13 = (int)sVar8;
      }
      uVar10 = (ulong64)iVar13;
      if (local_48 < local_868.StringBuffer + uVar10) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_868,uVar10);
        pwVar11 = (wchar_t *)local_868._padding_;
      }
      if (iVar13 != 0) {
        pvVar9 = FGenericPlatformString::Memcpy(pwVar11,_Str,uVar10 * 2);
        pwVar11 = (wchar_t *)((longlong)pvVar9 + uVar10 * 2);
        local_868._padding_ = (longlong)pwVar11;
      }
      if ((ulonglong)local_868._padding_ < pwVar11 + 1) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_868,1);
        pwVar11 = (wchar_t *)local_868._padding_;
      }
      pvVar9 = FGenericPlatformString::Memcpy(pwVar11,L"_",2);
      local_868._padding_ = (longlong)pvVar9 + 2;
      this = local_948;
    }
    IterateShaderParameterMembersInternal<_FShaderParameterParser::ParseParameters_::__l5::<lambda_1>_>
              (param_1,0,&local_868,(<lambda_1>)this);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_868);
  }
  iVar13 = local_9a8;
  cVar17 = '\0';
  local_9cc = local_9a8;
  cVar18 = '\0';
  local_998 = &local_9d8;
  cVar19 = '\0';
  local_990 = &local_9bc;
  local_988 = &local_9c8;
  local_980 = &local_9b8;
  local_978 = &local_9d4;
  local_970 = &local_9c4;
  local_968 = &local_9b4;
  local_960 = &local_9dc;
  local_958 = &local_9e4;
  local_910 = &local_9c0;
  local_908 = &local_9d0;
  local_8f8 = local_9db;
  local_9db[0] = 1;
  iVar20 = 0;
  local_9c0 = -1;
  local_9d0 = 0;
  local_9d8 = -1;
  local_9bc = -1;
  local_9c8 = -1;
  local_9b8 = -1;
  local_9d4 = -1;
  local_9c4 = -1;
  local_9b4 = -1;
  local_9dc = 0;
  local_9e4 = 0;
  local_9e7 = '\0';
  local_9e8 = '\0';
  local_9e6 = '\0';
  local_9e0 = 0;
  local_918 = this;
  local_900 = param_2;
  if (local_9a8 < 1) {
    local_9db[0] = 1;
  }
  else {
    do {
      iVar21 = local_9e0;
      if ((local_9e0 < 0) || (local_9a8 <= local_9e0)) {
        local_9f0 = local_9a8;
        local_9f8 = local_9e0;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index >= 0 && Index < Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StringView.h"
                           ,0x234,
                           L"Index out of bounds on StringView: index %i on a view with a length of %i"
                          );
        cVar18 = local_9e8;
        cVar19 = local_9e6;
        cVar17 = local_9e7;
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
      }
      uVar16 = *(ushort *)(local_9b0 + (longlong)iVar21 * 2);
      local_8e8 = &local_9cc;
      local_8e0 = &local_9bc;
      local_8d8 = &local_9c8;
      local_8d0 = &local_9b8;
      local_8c8 = &local_9d4;
      local_8c0 = &local_9b0;
      local_8b8 = &local_9e0;
      local_8a8 = &local_9c0;
      local_8a0 = &local_9d0;
      local_898 = &local_9d8;
      local_890 = &local_9dc;
      local_888 = &local_9c4;
      local_880 = &local_9b4;
      local_878 = &local_998;
      local_9cc = CONCAT22(local_9cc._2_2_,uVar16);
      if ((uVar16 == 0x20) || (((uVar16 - 9 & 0xfffa) == 0 && (uVar16 != 0xe)))) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if (((uVar16 < 0x61) || (0x7a < uVar16)) && (0x19 < (ushort)(uVar16 - 0x41))) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      uVar1 = uVar16 - 0x30;
      iVar21 = iVar13 - local_9e0;
      _Str1 = local_9b0 + (longlong)local_9e0 * 2;
      local_9d0 = local_9d0 + (uint)(uVar16 == 10);
      local_8b0 = this;
      if (cVar17 == '\0') {
        if (cVar18 == '\0') {
          if (cVar19 == '\0') {
            if (uVar16 == 0x23) {
              if ((6 < iVar21) &&
                 (iVar21 = wcsncmp((wchar_t *)_Str1,L"#line ",6), cVar18 = local_9e8,
                 cVar19 = local_9e6, iVar21 == 0)) {
                local_9c0 = local_9e0;
                local_9d0 = -1;
              }
              local_9e7 = '\x01';
              cVar17 = '\x01';
            }
            else {
              if ((uVar16 == 0x5f) && (7 < iVar21)) {
                iVar7 = wcsncmp((wchar_t *)_Str1,L"_Pragma",7);
                cVar18 = local_9e8;
                cVar17 = local_9e7;
                if (iVar7 == 0) {
                  local_9e6 = '\x01';
                  cVar19 = '\x01';
                  goto LAB_145ea8956;
                }
                cVar19 = local_9e6;
                uVar16 = (ushort)local_9cc;
              }
              uVar12 = 0;
              if (iVar20 < 1) {
                if (uVar16 == 0x7b) {
LAB_145ea88ed:
                  iVar20 = iVar20 + 1;
                }
                else if (local_9e4 == 0) {
                  uVar15 = uVar12;
                  if (bVar4) {
                    do {
                      iVar7 = KeywordTableSize[uVar12];
                      if ((iVar7 < iVar21) &&
                         (((sVar2 = *(short *)(_Str1 + (longlong)iVar7 * 2), sVar2 == 0x20 ||
                           (((sVar2 - 9U & 0xfffa) == 0 && (sVar2 != 0xe)))) &&
                          (iVar7 = wcsncmp((wchar_t *)_Str1,KeywordTable[uVar12],(longlong)iVar7),
                          iVar7 == 0)))) {
                        if (uVar12 != 0xffffffffffffffff) {
                          cVar18 = local_9e8;
                          cVar19 = local_9e6;
                          cVar17 = local_9e7;
                          if (uVar12 == 0) {
                            if (local_9d8 == -1) {
                              local_9d8 = local_9e0;
                            }
                            local_9e0 = local_9e0 + KeywordTableSize[0];
                          }
                          else if (uVar12 == 1) {
                            local_9dc = 1;
                            if (local_9d8 == -1) {
                              local_9d8 = local_9e0;
                            }
                            local_9e0 = local_9e0 + KeywordTableSize[1];
                          }
                          else {
                            local_9e4 = 1;
                          }
                          goto LAB_145ea8956;
                        }
                        break;
                      }
                      uVar14 = (int)uVar15 + 1;
                      uVar12 = uVar12 + 1;
                      uVar15 = (ulonglong)uVar14;
                    } while (uVar14 < 6);
                    local_9bc = local_9e0;
                    local_9e4 = 2;
                    cVar18 = local_9e8;
                    cVar19 = local_9e6;
                    cVar17 = local_9e7;
                  }
                  else if ((!bVar5) && (uVar16 != 0x3b)) {
                    if (uVar16 == 0x2f) {
                      if (*(wchar_t *)(_Str1 + 2) == L'/') {
                        local_9e7 = '\x01';
                        cVar17 = '\x01';
                      }
                      else if (*(wchar_t *)(_Str1 + 2) == L'*') {
                        local_9e8 = '\x01';
                        cVar18 = '\x01';
                      }
                    }
                    else {
LAB_145ea88dc:
                      local_9e4 = 1;
                    }
                  }
                }
                else {
                  if (local_9e4 == 1) {
                    bVar5 = uVar16 == 0x3b;
                    goto LAB_145ea88fd;
                  }
                  if (local_9e4 == 2) {
                    if (((!bVar4) && (9 < uVar1)) && (uVar16 != 0x5f)) {
                      if (uVar16 == 0x3a) {
                        if (*(wchar_t *)(_Str1 + 2) == L':') {
                          local_9e0 = local_9e0 + 1;
                        }
                      }
                      else if (uVar16 == 0x3c) {
                        local_9e4 = 3;
                      }
                      else {
                        if (!bVar5) goto LAB_145ea88dc;
                        local_9c8 = local_9e0 + -1;
                        local_9e4 = 4;
                      }
                    }
                  }
                  else if (local_9e4 == 3) {
                    if (((!bVar4) && (9 < uVar1)) && (uVar16 != 0x5f)) {
                      if (uVar16 == 0x3a) {
                        if (*(wchar_t *)(_Str1 + 2) == L':') {
                          local_9e0 = local_9e0 + 1;
                        }
                      }
                      else if ((!bVar5) && (uVar16 != 0x2c)) {
                        if (uVar16 != 0x3e) goto LAB_145ea88dc;
                        local_9e4 = 4;
                        local_9c8 = local_9e0;
                      }
                    }
                  }
                  else if (local_9e4 == 4) {
                    if (bVar4) {
                      local_9e4 = 5;
                      local_9b8 = local_9e0;
                    }
                    else if (uVar16 == 0x3c) {
                      local_9e4 = 3;
                    }
                    else {
LAB_145ea88d3:
                      if (!bVar5) goto LAB_145ea88dc;
                    }
                  }
                  else if (local_9e4 == 5) {
                    if (((!bVar4) && (9 < uVar1)) && (uVar16 != 0x5f)) {
                      if ((uVar16 == 0x3a) || (uVar16 == 0x3d)) {
                        local_9d4 = local_9e0 + -1;
                        local_9e4 = 9;
                      }
                      else {
                        if (uVar16 == 0x3b) {
                          local_9d4 = local_9e0 + -1;
                          goto LAB_145ea86ef;
                        }
                        if (uVar16 == 0x5b) {
                          local_9d4 = local_9e0 + -1;
                          local_9e4 = 7;
                          local_9c4 = local_9e0;
                        }
                        else {
                          if (!bVar5) goto LAB_145ea88dc;
                          local_9d4 = local_9e0 + -1;
                          local_9e4 = 6;
                        }
                      }
                    }
                  }
                  else if ((local_9e4 - 6U & 0xfffffffd) == 0) {
                    if (uVar16 == 0x3b) {
LAB_145ea86ef:
                      `FShaderParameterParser::ParseParameters'::__l8::<lambda_5>::operator()
                                (&local_8e8);
                      cVar18 = local_9e8;
                      cVar19 = local_9e6;
                      cVar17 = local_9e7;
                    }
                    else if (uVar16 == 0x3a) {
                      local_9e4 = 9;
                    }
                    else if (uVar16 == 0x3d) {
                      local_9e4 = 9;
                    }
                    else {
                      if (uVar16 != 0x5b) goto LAB_145ea88d3;
                      if (local_9e4 == 6) {
                        local_9e4 = 7;
                        local_9c4 = local_9e0;
                      }
                      else {
                        ::FString::FString(&local_928,
                                           L"Shader parameters can only support one dimensional array"
                                          );
                        `FShaderParameterParser::ParseParameters'::__l6::<lambda_3>::operator()
                                  (&local_918,&local_928);
                        cVar18 = local_9e8;
                        cVar19 = local_9e6;
                        cVar17 = local_9e7;
                        if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
                        {
                          FMemory::Free(local_928.Data.AllocatorInstance.Data);
                          cVar18 = local_9e8;
                          cVar19 = local_9e6;
                          cVar17 = local_9e7;
                        }
                      }
                    }
                  }
                  else if (local_9e4 == 7) {
                    if (uVar16 == 0x5d) {
                      local_9e4 = 8;
                      local_9b4 = local_9e0;
                    }
                    else if (uVar16 == 0x3b) {
                      ::FString::FString(&local_938,
                                         L"Unexpected syntax when parsing shader parameters from shader code."
                                        );
                      `FShaderParameterParser::ParseParameters'::__l6::<lambda_3>::operator()
                                (&local_918,&local_938);
                      if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_938.Data.AllocatorInstance.Data);
                      }
                      local_9e4 = 1;
                      cVar18 = local_9e8;
                      cVar19 = local_9e6;
                      cVar17 = local_9e7;
                    }
                  }
                  else if (local_9e4 == 9) {
                    if (uVar16 == 0x3b) goto LAB_145ea86ef;
                  }
                  else {
                    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!\"Unimplemented function called\"",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                                       ,0x374,L"");
                    cVar18 = local_9e8;
                    cVar19 = local_9e6;
                    cVar17 = local_9e7;
                    if (bVar5) {
                      pcVar3 = (code *)swi(3);
                      uVar6 = (*pcVar3)();
                      return (bool)uVar6;
                    }
                  }
                }
              }
              else {
                if (uVar16 == 0x7b) goto LAB_145ea88ed;
                if (uVar16 == 0x7d) {
                  iVar20 = iVar20 + -1;
                  bVar5 = iVar20 == 0;
LAB_145ea88fd:
                  if (bVar5) {
                    *local_998 = -1;
                    *local_990 = -1;
                    *local_988 = -1;
                    *local_980 = -1;
                    *local_978 = -1;
                    *local_970 = -1;
                    *local_968 = -1;
                    *local_960 = 0;
                    *local_958 = 0;
                  }
                }
              }
            }
          }
          else if (uVar16 == 0x29) {
            local_9e0 = local_9e0 + 1;
            local_9e6 = '\0';
            cVar19 = '\0';
          }
        }
        else if ((uVar16 == 0x2a) && (*(wchar_t *)(_Str1 + 2) == L'/')) {
          local_9e0 = local_9e0 + 1;
          local_9e8 = '\0';
          cVar18 = '\0';
        }
      }
      else if (uVar16 == 10) {
        local_9e7 = '\0';
        cVar17 = '\0';
      }
LAB_145ea8956:
      local_9e0 = local_9e0 + 1;
      this = local_948;
    } while (local_9e0 < iVar13);
  }
  return (bool)local_9db[0];
}

// RemoveBindlessParameterPrefix @ 145eaf970

bool __cdecl FShaderParameterParser::RemoveBindlessParameterPrefix(FString *param_1)

{
  bool bVar1;
  
  bVar1 = ::FString::RemoveFromStart(param_1,L"BindlessSRV_",0xc,IgnoreCase);
  if (!bVar1) {
    bVar1 = ::FString::RemoveFromStart(param_1,L"BindlessUAV_",0xc,IgnoreCase);
    if (!bVar1) {
      bVar1 = ::FString::RemoveFromStart(param_1,L"BindlessSampler_",0x10,IgnoreCase);
      if (!bVar1) {
        return false;
      }
    }
  }
  return true;
}

// RemoveMovingParametersFromSource @ 145eaf9f0

void __thiscall
FShaderParameterParser::RemoveMovingParametersFromSource
          (FShaderParameterParser *this,FString *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar7 = *(int *)&(this->ParsedParameters).field_0x28;
  puVar1 = &(this->ParsedParameters).field_0x10;
  iVar11 = 0;
  iVar13 = 0;
  uVar4 = 1;
  iVar5 = 0;
  if (iVar7 != 0) {
    puVar14 = *(uint **)&(this->ParsedParameters).field_0x20;
    if (puVar14 == (uint *)0x0) {
      puVar14 = (uint *)puVar1;
    }
    uVar9 = *puVar14;
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar11;
      iVar13 = iVar13 + 0x20;
      iVar11 = iVar11 + 1;
      iVar5 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145eafa9f;
      uVar9 = puVar14[lVar6 + 1];
    }
    uVar4 = -uVar9 & uVar9;
    uVar8 = (ulonglong)uVar4 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (int)lVar6 + -1 + iVar13;
    if (iVar7 < iVar5) {
      iVar5 = iVar7;
    }
  }
LAB_145eafa9f:
  uVar9 = *(uint *)&(this->ParsedParameters).field_0x28;
  uVar15 = uVar9 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar4,iVar11);
  TStack_60.CurrentBitIndex = iVar5;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar9 >> 5;
  TStack_60._28_4_ = iVar5;
  TStack_60.BaseBitIndex = iVar13;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->ParsedParameters).field_0x8 -
                       *(int *)&(this->ParsedParameters).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar9 < 0) || (iVar7 < (int)uVar9)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar4 = *(uint *)&(this->ParsedParameters).field_0x28;
  if (uVar9 != uVar4) {
    puVar12 = *(undefined1 **)&(this->ParsedParameters).field_0x20;
    if (puVar12 == (undefined1 *)0x0) {
      puVar12 = puVar1;
    }
    uVar9 = -1 << ((byte)uVar9 & 0x1f) & *(uint *)(puVar12 + (longlong)iVar11 * 4);
    while (uVar9 == 0) {
      lVar6 = (longlong)iVar11;
      uVar15 = uVar15 + 0x20;
      iVar11 = iVar11 + 1;
      uVar9 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_145eafba0;
      uVar9 = *(uint *)(puVar12 + lVar6 * 4 + 4);
    }
    uVar8 = (ulonglong)(-uVar9 & uVar9) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar9 = (int)lVar6 + -1 + uVar15;
    if ((int)uVar4 < (int)uVar9) {
      uVar9 = uVar4;
    }
  }
LAB_145eafba0:
  do {
    if (*(int *)&(this->ParsedParameters).field_0x8 - *(int *)&(this->ParsedParameters).field_0x34
        != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar9) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar6 = (longlong)TStack_60.CurrentBitIndex * 0x78 + *(longlong *)&this->ParsedParameters;
    if ((*(char *)(lVar6 + 0x65) != '\b') && (*(char *)(lVar6 + 100) == '\0')) {
      iVar7 = *(int *)(lVar6 + 0x5c);
      uVar8 = (ulonglong)iVar7;
      if ((iVar7 != -1) && (iVar7 <= *(int *)(lVar6 + 0x60))) {
        lVar10 = uVar8 * 2;
        do {
          iVar7 = (int)uVar8;
          if (iVar7 < 0) {
code_r0x000145eafc44:
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x107,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          else {
            iVar13 = (param_1->Data).ArrayNum;
            iVar11 = iVar13 + -1;
            if (iVar13 == 0) {
              iVar11 = 0;
            }
            if (iVar11 <= iVar7) goto code_r0x000145eafc44;
          }
          if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar10) != 0xd) {
            if (iVar7 < 0) {
code_r0x000145eafca0:
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                 ,0x107,
                                 L"String index out of bounds: Index %i from a string with a length of %i"
                                );
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              iVar13 = (param_1->Data).ArrayNum;
              iVar11 = iVar13 + -1;
              if (iVar13 == 0) {
                iVar11 = 0;
              }
              if (iVar11 <= iVar7) goto code_r0x000145eafca0;
            }
            if (*(short *)((param_1->Data).AllocatorInstance.Data + lVar10) != 10) {
              if (iVar7 < 0) {
code_r0x000145eafcf8:
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValidIndex(Index)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                   ,0x107,
                                   L"String index out of bounds: Index %i from a string with a length of %i"
                                  );
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
              }
              else {
                iVar13 = (param_1->Data).ArrayNum;
                iVar11 = iVar13 + -1;
                if (iVar13 == 0) {
                  iVar11 = 0;
                }
                if (iVar11 <= iVar7) goto code_r0x000145eafcf8;
              }
              *(undefined2 *)((param_1->Data).AllocatorInstance.Data + lVar10) = 0x20;
            }
          }
          uVar8 = (ulonglong)(iVar7 + 1U);
          lVar10 = lVar10 + 2;
        } while ((int)(iVar7 + 1U) <= *(int *)(lVar6 + 0x60));
      }
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ValidateShaderParameterType @ 145ebca80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FShaderParameterParser::ValidateShaderParameterType
          (FShaderParameterParser *this,FShaderCompilerInput *param_1,FString *param_2,int param_3,
          int param_4,bool param_5,FShaderCompilerOutput *param_6)

{
  int *piVar1;
  uchar uVar2;
  uchar uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  wchar_t *pwVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  FParsedShaderParameter *pFVar17;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FParsedShaderParameter *local_128;
  FString *local_120;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  wchar_t *local_58;
  undefined8 uStack_50;
  wchar_t *local_48;
  undefined8 uStack_40;
  
  local_198.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar14 = (longlong)local_198.Data.ArrayNum;
  pFVar15 = (param_2->Data).AllocatorInstance.Data;
  local_198.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_198.Data.ArrayNum == 0) {
    local_198.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_198.Data.ArrayNum,0,(ForAnyElementType *)&local_198,local_198.Data.ArrayNum
               ,&local_198.Data.ArrayMax);
    memcpy(local_198.Data.AllocatorInstance.Data,pFVar15,lVar14 * 2);
  }
  bVar6 = ::FString::RemoveFromStart(&local_198,L"BindlessSRV_",0xc,IgnoreCase);
  if (((bVar6) ||
      (bVar6 = ::FString::RemoveFromStart(&local_198,L"BindlessUAV_",0xc,IgnoreCase), bVar6)) ||
     (bVar6 = ::FString::RemoveFromStart(&local_198,L"BindlessSampler_",0x10,IgnoreCase), bVar6)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  pFVar17 = (FParsedShaderParameter *)0x0;
  if (local_198.Data.ArrayNum == 0) {
    pwVar13 = L"";
    iVar9 = 0;
  }
  else {
    iVar9 = local_198.Data.ArrayNum + -1;
    pwVar13 = (wchar_t *)local_198.Data.AllocatorInstance.Data;
  }
  uVar8 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar9,pwVar13);
  iVar9 = TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>
                    ((TSet<TTuple<FString,FShaderParameterParser::FParsedShaderParameter>,TDefaultMapHashableKeyFuncs<FString,FShaderParameterParser::FParsedShaderParameter,0>,FDefaultSetAllocator>
                      *)&this->ParsedParameters,uVar8,&local_198);
  if (iVar9 == -1) {
LAB_145ebcbce:
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderParameter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterParser.h"
                       ,0x9d,L"Missing shader parameter \'%s\'");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    lVar14 = (longlong)iVar9 * 0x78 + *(longlong *)&this->ParsedParameters;
    pFVar17 = (FParsedShaderParameter *)(lVar14 + 0x10);
    if (lVar14 == 0) {
      pFVar17 = (FParsedShaderParameter *)0x0;
    }
    if (pFVar17 == (FParsedShaderParameter *)0x0) goto LAB_145ebcbce;
  }
  if (((pFVar17->ParsedType).Size == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParsedParameter.IsFound()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x501,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_1->RootParametersStructure == (FShaderParametersMetadata *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompilerInput.RootParametersStructure",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x502,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((((0 < param_4) && (this->bMovedLoosedParametersToRootConstantBuffer != false)) &&
      (param_3 != pFVar17->ConstantBufferOffset)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReflectionOffset == ParsedParameter.ConstantBufferOffset",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderParameterParser.cpp"
                         ,0x507,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar6) goto LAB_145ebd556;
  uVar2 = (pFVar17->BaseType).Value;
  iVar9 = 0;
  uVar8 = pFVar17->NumColumns;
  uVar4 = pFVar17->NumRows;
  uVar3 = (pFVar17->PrecisionModifier).Value;
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  if (uVar2 == '\x02') {
    pwVar13 = L"int";
LAB_145ebcd24:
    ::FString::operator=(&local_1a8,pwVar13);
  }
  else {
    if (uVar2 == '\x03') {
      pwVar13 = L"uint";
      goto LAB_145ebcd24;
    }
    if (uVar2 == '\x04') {
      if ((uVar3 == '\0') || (!param_5)) {
        pwVar13 = L"float";
      }
      else if (uVar3 == '\x01') {
        pwVar13 = L"half";
      }
      else {
        if (uVar3 != '\x02') goto LAB_145ebcd2e;
        pwVar13 = L"fixed";
      }
      goto LAB_145ebcd24;
    }
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogShaders);
  }
LAB_145ebcd2e:
  if (uVar4 < 2) {
    if (1 < uVar8) {
      ::FString::PrintfImpl(&local_168,L"%s%u");
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      local_1a8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      iVar11 = local_168.Data.ArrayNum;
      iVar12 = local_168.Data.ArrayMax;
      local_168.Data.ArrayNum = 0;
      local_168.Data.ArrayMax = 0;
      local_168.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      goto LAB_145ebcdd4;
    }
  }
  else {
    ::FString::PrintfImpl(&local_178,L"%s%ux%u");
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    local_1a8.Data.AllocatorInstance.Data = local_178.Data.AllocatorInstance.Data;
    iVar11 = local_178.Data.ArrayNum;
    iVar12 = local_178.Data.ArrayMax;
    local_178.Data.ArrayNum = 0;
    local_178.Data.ArrayMax = 0;
    local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
LAB_145ebcdd4:
    local_1a8.Data.ArrayMax = iVar12;
    local_1a8.Data.ArrayNum = iVar11;
  }
  local_58 = (pFVar17->ParsedType).DataPtr;
  uStack_50 = *(undefined8 *)&(pFVar17->ParsedType).Size;
  uVar2 = (pFVar17->BaseType).Value;
  iVar11 = local_1a8.Data.ArrayNum + -1;
  if (local_1a8.Data.ArrayNum == 0) {
    iVar11 = iVar9;
  }
  iVar12 = (int)*(undefined8 *)&(pFVar17->ParsedType).Size;
  if (iVar12 == iVar11) {
    if ((iVar12 != 0) && (iVar11 != 0)) {
      iVar10 = iVar11;
      if (iVar12 < iVar11) {
        iVar10 = iVar12;
      }
      iVar10 = FGenericPlatformStricmp::Strnicmp
                         (local_58,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,(longlong)iVar10
                         );
      if (iVar10 != 0) goto LAB_145ebce2b;
    }
    if (iVar12 != iVar11) goto LAB_145ebce2b;
  }
  else {
LAB_145ebce2b:
    iVar12 = 4;
    local_120 = &local_1a8;
    iVar11 = (pFVar17->ParsedType).Size;
    if (4 < iVar11) {
      iVar11 = 4;
    }
    iVar10 = iVar9;
    if (0 < iVar11) {
      iVar10 = iVar11;
    }
    local_128 = pFVar17;
    if (((iVar10 == 4) &&
        (iVar11 = FGenericPlatformStricmp::Strnicmp(L"half",(pFVar17->ParsedType).DataPtr,4),
        iVar11 == 0)) && ((pFVar17->BaseType).Value == '\x04')) {
      iVar10 = 5;
LAB_145ebcf86:
      bVar6 = `FShaderParameterParser::ValidateShaderParameterType'::__l32::<lambda_1>::operator()
                        (&local_128,iVar12,iVar10);
      if (bVar6) goto LAB_145ebd30f;
    }
    else {
      iVar11 = (pFVar17->ParsedType).Size;
      iVar10 = 5;
      if (5 < iVar11) {
        iVar11 = 5;
      }
      iVar16 = iVar9;
      if (0 < iVar11) {
        iVar16 = iVar11;
      }
      iVar12 = 5;
      if (((iVar16 == 5) &&
          (iVar11 = FGenericPlatformStricmp::Strnicmp(L"float",(pFVar17->ParsedType).DataPtr,5),
          iVar11 == 0)) && (bVar6 = ::FString::StartsWith(&local_1a8,L"half",4,IgnoreCase), bVar6))
      {
LAB_145ebcf81:
        iVar10 = 4;
        goto LAB_145ebcf86;
      }
      iVar11 = (pFVar17->ParsedType).Size;
      iVar12 = 10;
      if (10 < iVar11) {
        iVar11 = 10;
      }
      if (0 < iVar11) {
        iVar9 = iVar11;
      }
      if (((iVar9 == 10) &&
          (iVar9 = FGenericPlatformStricmp::Strnicmp(L"min16float",(pFVar17->ParsedType).DataPtr,10)
          , iVar9 == 0)) && (bVar6 = ::FString::StartsWith(&local_1a8,L"float",5,IgnoreCase), bVar6)
         ) goto LAB_145ebcf86;
      iVar9 = (pFVar17->ParsedType).Size;
      if (10 < iVar9) {
        iVar9 = 10;
      }
      iVar11 = 0;
      if (0 < iVar9) {
        iVar11 = iVar9;
      }
      if (((iVar11 == 10) &&
          (iVar9 = FGenericPlatformStricmp::Strnicmp(L"min16float",(pFVar17->ParsedType).DataPtr,10)
          , iVar9 == 0)) && (bVar6 = ::FString::StartsWith(&local_1a8,L"half",4,IgnoreCase), bVar6))
      goto LAB_145ebcf81;
    }
    if ((uVar2 == '\x02') || (uVar2 == '\x03')) {
      local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_188.Data.ArrayNum = 0;
      local_188.Data.ArrayMax = 0;
      if (uVar2 == '\x02') {
        ::FString::ConcatCF(&local_158,L"u",&local_1a8);
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        iVar9 = local_158.Data.ArrayNum;
        local_188.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
        local_158.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.Data.ArrayNum = local_158.Data.ArrayNum;
        local_188.Data.ArrayMax = local_158.Data.ArrayMax;
        local_158.Data.ArrayNum = 0;
        local_158.Data.ArrayMax = 0;
      }
      else {
        iVar9 = local_1a8.Data.ArrayNum + -1;
        if (local_1a8.Data.ArrayNum == 0) {
          iVar9 = 0;
        }
        ::FString::AssignRange(&local_188,(wchar_t *)local_1a8.Data.AllocatorInstance.Data,iVar9);
        ::FString::RemoveAt(&local_188,0,Default);
        iVar9 = local_188.Data.ArrayNum;
      }
      local_48 = (pFVar17->ParsedType).DataPtr;
      uStack_40 = *(undefined8 *)&(pFVar17->ParsedType).Size;
      iVar11 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar11 = 0;
      }
      iVar9 = (int)*(undefined8 *)&(pFVar17->ParsedType).Size;
      if (iVar9 == iVar11) {
        if ((iVar9 != 0) && (iVar11 != 0)) {
          iVar12 = iVar11;
          if (iVar9 < iVar11) {
            iVar12 = iVar9;
          }
          iVar12 = FGenericPlatformStricmp::Strnicmp
                             (local_48,(wchar_t *)local_188.Data.AllocatorInstance.Data,
                              (longlong)iVar12);
          if (iVar12 != 0) goto LAB_145ebd08c;
        }
        if (iVar9 != iVar11) goto LAB_145ebd08c;
        bVar6 = true;
      }
      else {
LAB_145ebd08c:
        bVar6 = false;
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (bVar6) goto LAB_145ebd30f;
    }
    FShaderParametersMetadata::GetFullMemberCodeName
              (param_1->RootParametersStructure,&local_78,(ushort)pFVar17->ConstantBufferOffset);
    ::FString::FString(&local_118,L"");
    ::FString::FString(&local_108,L"");
    ::FString::FString(&local_f8,L"");
    ::FString::FString(&local_e8,L"");
    ::FString::FString(&local_d8,L"");
    ::FString::PrintfImpl
              (&local_148,
               L"Error: Type %.*s of shader parameter %s in shader mismatch the shader parameter structure: %s expects a %s"
              );
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    local_f8.Data.AllocatorInstance.Data = local_148.Data.AllocatorInstance.Data;
    local_f8.Data.ArrayNum = local_148.Data.ArrayNum;
    local_f8.Data.ArrayMax = local_148.Data.ArrayMax;
    local_148.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148.Data.ArrayNum = 0;
    local_148.Data.ArrayMax = 0;
    ExtractFileAndLine(this,pFVar17->ParsedPragmaLineOffset,pFVar17->ParsedLineOffset,&local_118,
                       &local_108);
    pFVar15 = (param_6->Errors).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_118) &&
        ((FScriptContainerElement *)&local_118 <
         pFVar15 + (longlong)(param_6->Errors).ArrayMax * 0x50)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (param_6->Errors).ArrayNum;
    piVar1 = &(param_6->Errors).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(param_6->Errors).AllocatorInstance,piVar1);
    }
    pFVar15 = (param_6->Errors).AllocatorInstance.Data;
    (param_6->Errors).ArrayNum = iVar9 + 1;
    pFVar15 = pFVar15 + (longlong)iVar9 * 0x50;
    ::FString::FString((FString *)pFVar15,&local_118);
    ::FString::FString((FString *)(pFVar15 + 0x10),&local_108);
    ::FString::FString((FString *)(pFVar15 + 0x20),&local_f8);
    ::FString::FString((FString *)(pFVar15 + 0x30),&local_e8);
    ::FString::FString((FString *)(pFVar15 + 0x40),&local_d8);
    param_6->bSucceeded = false;
    AddNoteToDisplayShaderParameterMemberOnCppSide(param_1,pFVar17,param_6);
    if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data.AllocatorInstance.Data);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
  }
LAB_145ebd30f:
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if ((int)pFVar17->MemberSize < param_4) {
    FShaderParametersMetadata::GetFullMemberCodeName
              (param_1->RootParametersStructure,&local_68,(ushort)pFVar17->ConstantBufferOffset);
    ::FString::FString(&local_c8,L"");
    ::FString::FString(&local_b8,L"");
    ::FString::FString(&local_a8,L"");
    ::FString::FString(&local_98,L"");
    ::FString::FString(&local_88,L"");
    ::FString::PrintfImpl
              (&local_138,
               L"Error: The size required to bind shader parameter %s is %i bytes, smaller than %s that is %i bytes in the parameter structure."
              );
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    local_a8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
    local_a8.Data.ArrayNum = local_138.Data.ArrayNum;
    local_a8.Data.ArrayMax = local_138.Data.ArrayMax;
    local_138.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_138.Data.ArrayNum = 0;
    local_138.Data.ArrayMax = 0;
    ExtractFileAndLine(this,pFVar17->ParsedPragmaLineOffset,pFVar17->ParsedLineOffset,&local_c8,
                       &local_b8);
    pFVar15 = (param_6->Errors).AllocatorInstance.Data;
    if (((pFVar15 <= (FScriptContainerElement *)&local_c8) &&
        ((FScriptContainerElement *)&local_c8 <
         pFVar15 + (longlong)(param_6->Errors).ArrayMax * 0x50)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar9 = (param_6->Errors).ArrayNum;
    piVar1 = &(param_6->Errors).ArrayMax;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x850,&(param_6->Errors).AllocatorInstance,piVar1);
    }
    pFVar15 = (param_6->Errors).AllocatorInstance.Data;
    (param_6->Errors).ArrayNum = iVar9 + 1;
    pFVar15 = pFVar15 + (longlong)iVar9 * 0x50;
    ::FString::FString((FString *)pFVar15,&local_c8);
    ::FString::FString((FString *)(pFVar15 + 0x10),&local_b8);
    ::FString::FString((FString *)(pFVar15 + 0x20),&local_a8);
    ::FString::FString((FString *)(pFVar15 + 0x30),&local_98);
    ::FString::FString((FString *)(pFVar15 + 0x40),&local_88);
    param_6->bSucceeded = false;
    AddNoteToDisplayShaderParameterMemberOnCppSide(param_1,pFVar17,param_6);
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
LAB_145ebd556:
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  return;
}

// ValidateShaderParameterTypes @ 145ebd590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderParameterParser::ValidateShaderParameterTypes
          (FShaderParameterParser *this,FShaderCompilerInput *param_1,bool param_2,
          FShaderCompilerOutput *param_3)

{
  FShaderParametersMetadata *pFVar1;
  wchar_t *_Str;
  size_t sVar2;
  void *pvVar3;
  ulong64 uVar4;
  wchar_t *pwVar5;
  int iVar6;
  bool local_res18 [16];
  undefined1 auStack_8d8 [32];
  FShaderParameterParser *local_8b8;
  FShaderCompilerOutput *pFStack_8b0;
  FShaderCompilerInput *local_8a8;
  bool *pbStack_8a0;
  FShaderCompilerOutput *local_898;
  <lambda_1> local_888;
  TStringBuilderWithBuffer<wchar_t,1024> local_858;
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_8d8;
  pFVar1 = param_1->RootParametersStructure;
  if ((pFVar1 != (FShaderParametersMetadata *)0x0) && (param_3->bSucceeded != false)) {
    pbStack_8a0 = local_res18;
    local_858._padding_ = (longlong)local_858.StringBuffer;
    local_858._padding_ = (longlong)local_38;
    pwVar5 = local_858.StringBuffer;
    local_858._padding_._0_2_ = 0;
    local_res18[0] = param_2;
    local_8b8 = this;
    pFStack_8b0 = param_3;
    local_8a8 = param_1;
    local_898 = param_3;
    local_858._padding_ = (longlong)pwVar5;
    if ((pFVar1->UseCase == UniformBuffer) || (pFVar1->UseCase == DataDrivenUniformBuffer)) {
      _Str = pFVar1->ShaderVariableName;
      iVar6 = 0;
      if (_Str != (wchar_t *)0x0) {
        sVar2 = wcslen(_Str);
        iVar6 = (int)sVar2;
      }
      uVar4 = (ulong64)iVar6;
      if (local_38 < local_858.StringBuffer + uVar4) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,uVar4);
        pwVar5 = (wchar_t *)local_858._padding_;
      }
      if (iVar6 != 0) {
        pvVar3 = FGenericPlatformString::Memcpy(pwVar5,_Str,uVar4 * 2);
        pwVar5 = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
        local_858._padding_ = (longlong)pwVar5;
      }
      if ((ulonglong)local_858._padding_ < pwVar5 + 1) {
        TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&local_858,1);
        pwVar5 = (wchar_t *)local_858._padding_;
      }
      pvVar3 = FGenericPlatformString::Memcpy(pwVar5,L"_",2);
      local_858._padding_ = (longlong)pvVar3 + 2;
    }
    local_888.__this = local_8b8;
    local_888.ParametersFoundByCompiler =
         (TMap<FString,FParameterAllocation,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FParameterAllocation,0>_>
          *)pFStack_8b0;
    local_888.CompilerOutput = local_898;
    local_888.CompilerInput = local_8a8;
    local_888.bPlatformSupportsPrecisionModifier = pbStack_8a0;
    IterateShaderParameterMembersInternal<_FShaderParameterParser::ValidateShaderParameterTypes_::__l2::<lambda_1>_>
              (pFVar1,0,&local_858,&local_888);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
              ((TStringBuilderBase<wchar_t> *)&local_858);
  }
  return;
}

