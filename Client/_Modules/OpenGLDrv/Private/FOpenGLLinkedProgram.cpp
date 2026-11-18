// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 8

// UpdateShaders<FOpenGLLinkedProgram::FComputeProgram,FOpenGLComputeShader_*_&> @ 145bdf960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOpenGLLinkedProgram::UpdateShaders<FOpenGLLinkedProgram::FComputeProgram,FOpenGLComputeShader_*_&>
          (FOpenGLLinkedProgram *this,FOpenGLComputeShader **param_1)

{
  FOpenGLComputeShader *pFVar1;
  code *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  undefined1 auStackY_c8 [32];
  longlong local_98 [2];
  uint local_88 [21];
  longlong local_34;
  longlong lStack_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  local_88[0] = 0;
  local_88[5] = 0;
  local_88[10] = 0;
  local_88[0xf] = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[4] = 0;
  local_88[6] = 0;
  local_88[7] = 0;
  local_88[8] = 0;
  local_88[9] = 0;
  local_88[0xb] = 0;
  local_88[0xc] = 0;
  local_88[0xd] = 0;
  local_88[0xe] = 0;
  local_88[0x14] = 0;
  pFVar1 = *param_1;
  uVar5 = 0;
  local_88[0x10] = 0;
  local_88[0x11] = 0;
  local_88[0x12] = 0;
  local_88[0x13] = 0;
  local_34 = pFVar1->_padding_;
  lStack_2c = pFVar1->_padding_;
  local_24 = (int)pFVar1->_padding_;
  bVar6 = true;
  do {
    if (!bVar6) goto LAB_145bdfa20;
    lVar3 = *(longlong *)((longlong)&this->_padding_ + uVar5 * 0x14) -
            *(longlong *)((longlong)local_98 + uVar5 * 0x14);
    if ((lVar3 == 0) &&
       (lVar3 = *(longlong *)((longlong)&this->_padding_ + uVar5 * 0x14) -
                *(longlong *)((longlong)local_98 + uVar5 * 0x14 + 8), lVar3 == 0)) {
      lVar3 = (ulonglong)*(uint *)((longlong)&this->_padding_ + uVar5 * 0x14) -
              (ulonglong)local_88[uVar5 * 5];
    }
    bVar6 = lVar3 == 0;
    uVar4 = (int)uVar5 + 1;
    uVar5 = (ulonglong)uVar4;
  } while (uVar4 < 6);
  if (!bVar6) {
LAB_145bdfa20:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProgramKey == LocalKey",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x55e,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar5 = (ulonglong)(this->Config).TypeIndex;
  if (2 < uVar5) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar5) != '\0') {
    bVar6 = VerifyLinkedProgram((uint)this->_padding_);
    if (!bVar6) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8399118768520824164>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x564,"VerifyLinkedProgram(Program)");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    (*glUseProgram)((uint)this->_padding_);
    TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
    ::Emplace<FOpenGLLinkedProgram::FComputeProgram,FOpenGLLinkedProgram_&,FOpenGLComputeShader_*_&>
              (&this->Config,this,param_1);
  }
  return;
}

// UpdateShaders<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&> @ 145bdfb10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FOpenGLLinkedProgram::
UpdateShaders<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
          (FOpenGLLinkedProgram *this,FOpenGLVertexShader **param_1,FOpenGLPixelShader **param_2,
          FOpenGLGeometryShader **param_3)

{
  FOpenGLGeometryShader *pFVar1;
  FOpenGLVertexShader *pFVar2;
  FOpenGLPixelShader *pFVar3;
  code *pcVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStackY_e8 [32];
  longlong local_b8 [2];
  uint local_a8;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pFVar1 = *param_3;
  local_80 = 0;
  local_6c = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_7c = 0;
  uStack_74 = 0;
  local_58 = 0;
  local_44 = 0;
  pFVar2 = *param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_54 = 0;
  uStack_4c = 0;
  local_b8[0] = *(longlong *)&pFVar2->field_0xf0;
  local_b8[1] = *(undefined8 *)&pFVar2->field_0xf8;
  local_a8 = *(uint *)&pFVar2->field_0x100;
  pFVar3 = *param_2;
  local_a4 = *(undefined8 *)&pFVar3->field_0xf0;
  uStack_9c = *(undefined8 *)&pFVar3->field_0xf8;
  local_94 = *(undefined4 *)&pFVar3->field_0x100;
  if (pFVar1 != (FOpenGLGeometryShader *)0x0) {
    local_90 = *(undefined8 *)&pFVar1->field_0xf0;
    uStack_88 = *(undefined8 *)&pFVar1->field_0xf8;
    local_80 = *(undefined4 *)&pFVar1->field_0x100;
  }
  bVar8 = true;
  uVar7 = 0;
  do {
    if (!bVar8) goto LAB_145bdfc0d;
    lVar5 = *(longlong *)((longlong)&this->_padding_ + uVar7 * 0x14) -
            *(longlong *)((longlong)local_b8 + uVar7 * 0x14);
    if ((lVar5 == 0) &&
       (lVar5 = *(longlong *)((longlong)&this->_padding_ + uVar7 * 0x14) -
                *(longlong *)((longlong)local_b8 + uVar7 * 0x14 + 8), lVar5 == 0)) {
      lVar5 = (ulonglong)*(uint *)((longlong)&this->_padding_ + uVar7 * 0x14) -
              (ulonglong)(&local_a8)[uVar7 * 5];
    }
    bVar8 = lVar5 == 0;
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulonglong)uVar6;
  } while (uVar6 < 6);
  if (!bVar8) {
LAB_145bdfc0d:
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ProgramKey == LocalKey",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x55e,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = (ulonglong)(this->Config).TypeIndex;
  if (2 < uVar7) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(bIsSameType)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0x12f,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(char *)((longlong)
                &`public:_static_bool___cdecl_UE::Core::Private::TIsType<FEmptyVariantState,FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::IsSame(unsigned___int64)'
                 ::__l2::bIsSameType + uVar7) != '\0') {
    bVar8 = VerifyLinkedProgram((uint)this->_padding_);
    if (!bVar8) {
      bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8399118768520824164>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x564,"VerifyLinkedProgram(Program)");
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    (*glUseProgram)((uint)this->_padding_);
    TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
    ::
    Emplace<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram_&,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
              (&this->Config,this,param_1,param_2,param_3);
  }
  return;
}

// FOpenGLLinkedProgram @ 145be1660

FOpenGLLinkedProgram * __thiscall
FOpenGLLinkedProgram::FOpenGLLinkedProgram
          (FOpenGLLinkedProgram *this,FOpenGLProgramKey *param_1,uint param_2)

{
  FOpenGLProgramBinary *pFVar1;
  FOpenGLProgramBinary *pFVar2;
  
  FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase
            ((FOpenGLLinkedProgramBase *)this,param_1,param_2);
  (this->Config).TypeIndex = '\0';
  (this->LRUInfo).LRUNode.Index = -1;
  pFVar1 = ::operator_new(0x20);
  pFVar2 = (FOpenGLProgramBinary *)0x0;
  if (pFVar1 != (FOpenGLProgramBinary *)0x0) {
    (pFVar1->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar1->OwnedData).ArrayNum = 0;
    (pFVar1->OwnedData).ArrayMax = 0;
    (pFVar1->DataView).DataPtr = (uchar *)0x0;
    (pFVar1->DataView).ArrayNum = 0;
    pFVar2 = pFVar1;
  }
  (this->LRUInfo).CachedProgramBinary.Obj.Ptr = pFVar2;
  (this->LRUInfo).LastTouchedFrame = 0;
  return this;
}

// FOpenGLLinkedProgram @ 145be16c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLLinkedProgram * __thiscall
FOpenGLLinkedProgram::FOpenGLLinkedProgram(FOpenGLLinkedProgram *this,FOpenGLComputeShader *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FOpenGLProgramBinary *pFVar10;
  FOpenGLProgramBinary *pFVar11;
  FOpenGLLinkedProgram *pFVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime> FVar14;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_00;
  FGLProgramCache *this_01;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FName FVar15;
  FNameEntryId FVar16;
  undefined1 auStackY_198 [32];
  FColor_u_0 local_138 [2];
  FOpenGLComputeShader *local_130;
  FName local_128;
  uint local_120;
  uint uStack_11c;
  FName local_118;
  FName local_108;
  LARGE_INTEGER local_100;
  FStatMessage local_f8;
  FName local_e8;
  FString local_e0;
  FReadAccessScope local_d0;
  FOpenGLProgramKey local_b8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_b8.ShaderHashes[0].Hash[0x10] = '\0';
  local_b8.ShaderHashes[0].Hash[0x11] = '\0';
  local_b8.ShaderHashes[0].Hash[0x12] = '\0';
  local_b8.ShaderHashes[0].Hash[0x13] = '\0';
  local_b8.ShaderHashes[1].Hash[0x10] = '\0';
  local_b8.ShaderHashes[1].Hash[0x11] = '\0';
  local_b8.ShaderHashes[1].Hash[0x12] = '\0';
  local_b8.ShaderHashes[1].Hash[0x13] = '\0';
  local_b8.ShaderHashes[0].Hash[0] = '\0';
  local_b8.ShaderHashes[0].Hash[1] = '\0';
  local_b8.ShaderHashes[0].Hash[2] = '\0';
  local_b8.ShaderHashes[0].Hash[3] = '\0';
  local_b8.ShaderHashes[0].Hash[4] = '\0';
  local_b8.ShaderHashes[0].Hash[5] = '\0';
  local_b8.ShaderHashes[0].Hash[6] = '\0';
  local_b8.ShaderHashes[0].Hash[7] = '\0';
  local_b8.ShaderHashes[0].Hash[8] = '\0';
  local_b8.ShaderHashes[0].Hash[9] = '\0';
  local_b8.ShaderHashes[0].Hash[10] = '\0';
  local_b8.ShaderHashes[0].Hash[0xb] = '\0';
  local_b8.ShaderHashes[0].Hash[0xc] = '\0';
  local_b8.ShaderHashes[0].Hash[0xd] = '\0';
  local_b8.ShaderHashes[0].Hash[0xe] = '\0';
  local_b8.ShaderHashes[0].Hash[0xf] = '\0';
  local_b8.ShaderHashes[2].Hash[0x10] = '\0';
  local_b8.ShaderHashes[2].Hash[0x11] = '\0';
  local_b8.ShaderHashes[2].Hash[0x12] = '\0';
  local_b8.ShaderHashes[2].Hash[0x13] = '\0';
  local_b8.ShaderHashes[1].Hash[0] = '\0';
  local_b8.ShaderHashes[1].Hash[1] = '\0';
  local_b8.ShaderHashes[1].Hash[2] = '\0';
  local_b8.ShaderHashes[1].Hash[3] = '\0';
  local_b8.ShaderHashes[1].Hash[4] = '\0';
  local_b8.ShaderHashes[1].Hash[5] = '\0';
  local_b8.ShaderHashes[1].Hash[6] = '\0';
  local_b8.ShaderHashes[1].Hash[7] = '\0';
  local_b8.ShaderHashes[1].Hash[8] = '\0';
  local_b8.ShaderHashes[1].Hash[9] = '\0';
  local_b8.ShaderHashes[1].Hash[10] = '\0';
  local_b8.ShaderHashes[1].Hash[0xb] = '\0';
  local_b8.ShaderHashes[1].Hash[0xc] = '\0';
  local_b8.ShaderHashes[1].Hash[0xd] = '\0';
  local_b8.ShaderHashes[1].Hash[0xe] = '\0';
  local_b8.ShaderHashes[1].Hash[0xf] = '\0';
  local_b8.ShaderHashes[3].Hash[0x10] = '\0';
  local_b8.ShaderHashes[3].Hash[0x11] = '\0';
  local_b8.ShaderHashes[3].Hash[0x12] = '\0';
  local_b8.ShaderHashes[3].Hash[0x13] = '\0';
  local_b8.ShaderHashes[2].Hash[0] = '\0';
  local_b8.ShaderHashes[2].Hash[1] = '\0';
  local_b8.ShaderHashes[2].Hash[2] = '\0';
  local_b8.ShaderHashes[2].Hash[3] = '\0';
  local_b8.ShaderHashes[2].Hash[4] = '\0';
  local_b8.ShaderHashes[2].Hash[5] = '\0';
  local_b8.ShaderHashes[2].Hash[6] = '\0';
  local_b8.ShaderHashes[2].Hash[7] = '\0';
  local_b8.ShaderHashes[2].Hash[8] = '\0';
  local_b8.ShaderHashes[2].Hash[9] = '\0';
  local_b8.ShaderHashes[2].Hash[10] = '\0';
  local_b8.ShaderHashes[2].Hash[0xb] = '\0';
  local_b8.ShaderHashes[2].Hash[0xc] = '\0';
  local_b8.ShaderHashes[2].Hash[0xd] = '\0';
  local_b8.ShaderHashes[2].Hash[0xe] = '\0';
  local_b8.ShaderHashes[2].Hash[0xf] = '\0';
  local_b8.ShaderHashes[4].Hash[0x10] = '\0';
  local_b8.ShaderHashes[4].Hash[0x11] = '\0';
  local_b8.ShaderHashes[4].Hash[0x12] = '\0';
  local_b8.ShaderHashes[4].Hash[0x13] = '\0';
  local_b8.ShaderHashes[3].Hash[0] = '\0';
  local_b8.ShaderHashes[3].Hash[1] = '\0';
  local_b8.ShaderHashes[3].Hash[2] = '\0';
  local_b8.ShaderHashes[3].Hash[3] = '\0';
  local_b8.ShaderHashes[3].Hash[4] = '\0';
  local_b8.ShaderHashes[3].Hash[5] = '\0';
  local_b8.ShaderHashes[3].Hash[6] = '\0';
  local_b8.ShaderHashes[3].Hash[7] = '\0';
  local_b8.ShaderHashes[3].Hash[8] = '\0';
  local_b8.ShaderHashes[3].Hash[9] = '\0';
  local_b8.ShaderHashes[3].Hash[10] = '\0';
  local_b8.ShaderHashes[3].Hash[0xb] = '\0';
  local_b8.ShaderHashes[3].Hash[0xc] = '\0';
  local_b8.ShaderHashes[3].Hash[0xd] = '\0';
  local_b8.ShaderHashes[3].Hash[0xe] = '\0';
  local_b8.ShaderHashes[3].Hash[0xf] = '\0';
  local_b8.ShaderHashes[4].Hash[0] = '\0';
  local_b8.ShaderHashes[4].Hash[1] = '\0';
  local_b8.ShaderHashes[4].Hash[2] = '\0';
  local_b8.ShaderHashes[4].Hash[3] = '\0';
  local_b8.ShaderHashes[4].Hash[4] = '\0';
  local_b8.ShaderHashes[4].Hash[5] = '\0';
  local_b8.ShaderHashes[4].Hash[6] = '\0';
  local_b8.ShaderHashes[4].Hash[7] = '\0';
  local_b8.ShaderHashes[4].Hash[8] = '\0';
  local_b8.ShaderHashes[4].Hash[9] = '\0';
  local_b8.ShaderHashes[4].Hash[10] = '\0';
  local_b8.ShaderHashes[4].Hash[0xb] = '\0';
  local_b8.ShaderHashes[4].Hash[0xc] = '\0';
  local_b8.ShaderHashes[4].Hash[0xd] = '\0';
  local_b8.ShaderHashes[4].Hash[0xe] = '\0';
  local_b8.ShaderHashes[4].Hash[0xf] = '\0';
  local_b8.ShaderHashes[5].Hash._0_8_ = param_1->_padding_;
  local_b8.ShaderHashes[5].Hash._8_8_ = param_1->_padding_;
  local_b8.ShaderHashes[5].Hash._16_4_ = *(undefined4 *)&param_1->_padding_;
  local_130 = param_1;
  FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase((FOpenGLLinkedProgramBase *)this,&local_b8,0);
  (this->Config).TypeIndex = '\0';
  (this->LRUInfo).LRUNode.Index = -1;
  pFVar10 = ::operator_new(0x20);
  pFVar11 = (FOpenGLProgramBinary *)0x0;
  if (pFVar10 != (FOpenGLProgramBinary *)0x0) {
    (pFVar10->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar10->OwnedData).ArrayNum = 0;
    (pFVar10->OwnedData).ArrayMax = 0;
    (pFVar10->DataView).DataPtr = (uchar *)0x0;
    (pFVar10->DataView).ArrayNum = 0;
    pFVar11 = pFVar10;
  }
  (this->LRUInfo).CachedProgramBinary.Obj.Ptr = pFVar11;
  (this->LRUInfo).LastTouchedFrame = 0;
  if ((param_1->LinkedProgram != (FOpenGLLinkedProgram *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ComputeShader->LinkedProgram",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x9d6,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FOpenGLLinkedProgram *)(*pcVar4)();
    return pFVar12;
  }
  param_1->LinkedProgram = this;
  if ((int)param_1->_padding_ == 0) {
    FOpenGLShader::Compile((FOpenGLShader *)&param_1->_padding_,0x91b9);
  }
  FVar14 = StatPtr_STAT_OpenGLShaderLinkTime;
  if (StatPtr_STAT_OpenGLShaderLinkTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime>)0x0) {
    pFVar13 = ::FName::FName(&local_e8,"STAT_OpenGLShaderLinkTime");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLinkTime,*pFVar13,
                        L"Shader link time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar14;
  bVar7 = false;
  bVar6 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  FVar16 = FVar15.ComparisonIndex.Value;
  uVar9 = FVar15.Number;
  if ((FVar16.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar16.Value;
        local_128.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x9dd);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_120 = FVar16.Value;
      uStack_11c = uVar9;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_145be1903;
    }
  }
  bVar5 = false;
  FVar15 = local_118;
LAB_145be1903:
  plVar2 = &this->_padding_;
  if ((plVar2 == (longlong *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipelines",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x11f,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FOpenGLLinkedProgram *)(*pcVar4)();
    return pFVar12;
  }
  uVar9 = (*glCreateProgram)();
  *(uint *)plVar2 = uVar9;
  if (((int)param_1->_padding_ == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeShader->Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x9e1,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar12 = (FOpenGLLinkedProgram *)(*pcVar4)();
    return pFVar12;
  }
  (*glAttachShader)((uint)*plVar2,(uint)param_1->_padding_);
  if ((FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0) ||
     (bVar8 = FGLProgramCache::IsUsingLRU(), bVar8)) {
    (*glProgramParameteri)((uint)*plVar2,0x8257,1);
  }
  (*glLinkProgram)((uint)*plVar2);
  bVar8 = VerifyLinkedProgram((uint)*plVar2);
  if (!bVar8) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x9f1,L"Compute shader failed to compile & link.");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      pFVar12 = (FOpenGLLinkedProgram *)(*pcVar4)();
      return pFVar12;
    }
    ::FName::FName(&local_108,"FailedComputeProgramLink");
    this_00 = RHIGetPanicDelegate();
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_d0);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar3 = *(longlong **)&this_00->field_0x8, plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x68))(plVar3,&local_108);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d0);
    FOpenGLProgramKey::ToString((FOpenGLProgramKey *)this,&local_e0);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
  }
  SetNewProgramStats((uint)*plVar2);
  (*glUseProgram)((uint)*plVar2);
  TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
  ::Emplace<FOpenGLLinkedProgram::FComputeProgram,FOpenGLLinkedProgram_&,FOpenGLComputeShader_*_&>
            (&this->Config,this,&local_130);
  this_01 = GetOpenGLProgramsCache();
  FGLProgramCache::Add(this_01,(FOpenGLProgramKey *)this,this);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_f8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_f8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_100);
      local_f8.StatData.Pad[4] = '\0';
      local_f8.StatData.Pad[5] = '\0';
      local_f8.StatData.Pad[6] = '\0';
      local_f8.StatData.Pad[7] = '\0';
      local_f8.StatData.Pad[0] = local_100.s.LowPart._0_1_;
      local_f8.StatData.Pad[1] = local_100.s.LowPart._1_1_;
      local_f8.StatData.Pad[2] = local_100.s.LowPart._2_1_;
      local_f8.StatData.Pad[3] = local_100.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_f8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return this;
}

// FOpenGLLinkedProgram @ 145be1ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

FOpenGLLinkedProgram * __thiscall
FOpenGLLinkedProgram::FOpenGLLinkedProgram
          (FOpenGLLinkedProgram *this,FOpenGLVertexShader *param_1,FOpenGLPixelShader *param_2,
          FOpenGLGeometryShader *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName FVar10;
  FName FVar11;
  HGLRC pHVar12;
  FOpenGLBinaryCacheStats *lpCriticalSection;
  FProgramUseTimes *pFVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime> FVar15;
  FOpenGLLinkedProgram *pFVar16;
  TDelegate<void___cdecl(FName_const_&),FDefaultDelegateUserPolicy> *this_00;
  FGLProgramCache *this_01;
  FName FVar17;
  undefined1 auStackY_208 [32];
  FOpenGLGeometryShader *local_198;
  FName local_190;
  FOpenGLPixelShader *local_188;
  FColor_u_0 local_180 [2];
  FOpenGLVertexShader *local_178;
  LARGE_INTEGER local_170;
  FName local_168;
  FName local_160;
  FOpenGLProgramBinary local_150;
  FName local_130;
  FName local_128;
  FString local_120;
  FString local_110;
  FString local_100;
  FReadAccessScope local_f0;
  FOpenGLProgramKey local_d8;
  ulonglong local_60;
  
  local_60 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_d8.ShaderHashes[2].Hash[0x10] = '\0';
  local_d8.ShaderHashes[2].Hash[0x11] = '\0';
  local_d8.ShaderHashes[2].Hash[0x12] = '\0';
  local_d8.ShaderHashes[2].Hash[0x13] = '\0';
  local_d8.ShaderHashes[3].Hash[0x10] = '\0';
  local_d8.ShaderHashes[3].Hash[0x11] = '\0';
  local_d8.ShaderHashes[3].Hash[0x12] = '\0';
  local_d8.ShaderHashes[3].Hash[0x13] = '\0';
  local_d8.ShaderHashes[4].Hash[0x10] = '\0';
  local_d8.ShaderHashes[4].Hash[0x11] = '\0';
  local_d8.ShaderHashes[4].Hash[0x12] = '\0';
  local_d8.ShaderHashes[4].Hash[0x13] = '\0';
  local_d8.ShaderHashes[5].Hash[0x10] = '\0';
  local_d8.ShaderHashes[5].Hash[0x11] = '\0';
  local_d8.ShaderHashes[5].Hash[0x12] = '\0';
  local_d8.ShaderHashes[5].Hash[0x13] = '\0';
  local_d8.ShaderHashes[2].Hash[0] = '\0';
  local_d8.ShaderHashes[2].Hash[1] = '\0';
  local_d8.ShaderHashes[2].Hash[2] = '\0';
  local_d8.ShaderHashes[2].Hash[3] = '\0';
  local_d8.ShaderHashes[2].Hash[4] = '\0';
  local_d8.ShaderHashes[2].Hash[5] = '\0';
  local_d8.ShaderHashes[2].Hash[6] = '\0';
  local_d8.ShaderHashes[2].Hash[7] = '\0';
  local_d8.ShaderHashes[2].Hash[8] = '\0';
  local_d8.ShaderHashes[2].Hash[9] = '\0';
  local_d8.ShaderHashes[2].Hash[10] = '\0';
  local_d8.ShaderHashes[2].Hash[0xb] = '\0';
  local_d8.ShaderHashes[2].Hash[0xc] = '\0';
  local_d8.ShaderHashes[2].Hash[0xd] = '\0';
  local_d8.ShaderHashes[2].Hash[0xe] = '\0';
  local_d8.ShaderHashes[2].Hash[0xf] = '\0';
  local_d8.ShaderHashes[3].Hash[0] = '\0';
  local_d8.ShaderHashes[3].Hash[1] = '\0';
  local_d8.ShaderHashes[3].Hash[2] = '\0';
  local_d8.ShaderHashes[3].Hash[3] = '\0';
  local_d8.ShaderHashes[3].Hash[4] = '\0';
  local_d8.ShaderHashes[3].Hash[5] = '\0';
  local_d8.ShaderHashes[3].Hash[6] = '\0';
  local_d8.ShaderHashes[3].Hash[7] = '\0';
  local_d8.ShaderHashes[3].Hash[8] = '\0';
  local_d8.ShaderHashes[3].Hash[9] = '\0';
  local_d8.ShaderHashes[3].Hash[10] = '\0';
  local_d8.ShaderHashes[3].Hash[0xb] = '\0';
  local_d8.ShaderHashes[3].Hash[0xc] = '\0';
  local_d8.ShaderHashes[3].Hash[0xd] = '\0';
  local_d8.ShaderHashes[3].Hash[0xe] = '\0';
  local_d8.ShaderHashes[3].Hash[0xf] = '\0';
  local_d8.ShaderHashes[4].Hash[0] = '\0';
  local_d8.ShaderHashes[4].Hash[1] = '\0';
  local_d8.ShaderHashes[4].Hash[2] = '\0';
  local_d8.ShaderHashes[4].Hash[3] = '\0';
  local_d8.ShaderHashes[4].Hash[4] = '\0';
  local_d8.ShaderHashes[4].Hash[5] = '\0';
  local_d8.ShaderHashes[4].Hash[6] = '\0';
  local_d8.ShaderHashes[4].Hash[7] = '\0';
  local_d8.ShaderHashes[4].Hash[8] = '\0';
  local_d8.ShaderHashes[4].Hash[9] = '\0';
  local_d8.ShaderHashes[4].Hash[10] = '\0';
  local_d8.ShaderHashes[4].Hash[0xb] = '\0';
  local_d8.ShaderHashes[4].Hash[0xc] = '\0';
  local_d8.ShaderHashes[4].Hash[0xd] = '\0';
  local_d8.ShaderHashes[4].Hash[0xe] = '\0';
  local_d8.ShaderHashes[4].Hash[0xf] = '\0';
  local_d8.ShaderHashes[5].Hash[0] = '\0';
  local_d8.ShaderHashes[5].Hash[1] = '\0';
  local_d8.ShaderHashes[5].Hash[2] = '\0';
  local_d8.ShaderHashes[5].Hash[3] = '\0';
  local_d8.ShaderHashes[5].Hash[4] = '\0';
  local_d8.ShaderHashes[5].Hash[5] = '\0';
  local_d8.ShaderHashes[5].Hash[6] = '\0';
  local_d8.ShaderHashes[5].Hash[7] = '\0';
  local_d8.ShaderHashes[5].Hash[8] = '\0';
  local_d8.ShaderHashes[5].Hash[9] = '\0';
  local_d8.ShaderHashes[5].Hash[10] = '\0';
  local_d8.ShaderHashes[5].Hash[0xb] = '\0';
  local_d8.ShaderHashes[5].Hash[0xc] = '\0';
  local_d8.ShaderHashes[5].Hash[0xd] = '\0';
  local_d8.ShaderHashes[5].Hash[0xe] = '\0';
  local_d8.ShaderHashes[5].Hash[0xf] = '\0';
  local_d8.ShaderHashes[0].Hash[0] = param_1->field_0xf0;
  local_d8.ShaderHashes[0].Hash[1] = param_1->field_0xf1;
  local_d8.ShaderHashes[0].Hash[2] = param_1->field_0xf2;
  local_d8.ShaderHashes[0].Hash[3] = param_1->field_0xf3;
  local_d8.ShaderHashes[0].Hash[4] = param_1->field_0xf4;
  local_d8.ShaderHashes[0].Hash[5] = param_1->field_0xf5;
  local_d8.ShaderHashes[0].Hash[6] = param_1->field_0xf6;
  local_d8.ShaderHashes[0].Hash[7] = param_1->field_0xf7;
  local_d8.ShaderHashes[0].Hash[8] = param_1->field_0xf8;
  local_d8.ShaderHashes[0].Hash[9] = param_1->field_0xf9;
  local_d8.ShaderHashes[0].Hash[10] = param_1->field_0xfa;
  local_d8.ShaderHashes[0].Hash[0xb] = param_1->field_0xfb;
  local_d8.ShaderHashes[0].Hash[0xc] = param_1->field_0xfc;
  local_d8.ShaderHashes[0].Hash[0xd] = param_1->field_0xfd;
  local_d8.ShaderHashes[0].Hash[0xe] = param_1->field_0xfe;
  local_d8.ShaderHashes[0].Hash[0xf] = param_1->field_0xff;
  local_d8.ShaderHashes[0].Hash[0x10] = param_1->field_0x100;
  local_d8.ShaderHashes[0].Hash[0x11] = param_1->field_0x101;
  local_d8.ShaderHashes[0].Hash[0x12] = param_1->field_0x102;
  local_d8.ShaderHashes[0].Hash[0x13] = param_1->field_0x103;
  local_d8.ShaderHashes[1].Hash[0] = param_2->field_0xf0;
  local_d8.ShaderHashes[1].Hash[1] = param_2->field_0xf1;
  local_d8.ShaderHashes[1].Hash[2] = param_2->field_0xf2;
  local_d8.ShaderHashes[1].Hash[3] = param_2->field_0xf3;
  local_d8.ShaderHashes[1].Hash[4] = param_2->field_0xf4;
  local_d8.ShaderHashes[1].Hash[5] = param_2->field_0xf5;
  local_d8.ShaderHashes[1].Hash[6] = param_2->field_0xf6;
  local_d8.ShaderHashes[1].Hash[7] = param_2->field_0xf7;
  local_d8.ShaderHashes[1].Hash[8] = param_2->field_0xf8;
  local_d8.ShaderHashes[1].Hash[9] = param_2->field_0xf9;
  local_d8.ShaderHashes[1].Hash[10] = param_2->field_0xfa;
  local_d8.ShaderHashes[1].Hash[0xb] = param_2->field_0xfb;
  local_d8.ShaderHashes[1].Hash[0xc] = param_2->field_0xfc;
  local_d8.ShaderHashes[1].Hash[0xd] = param_2->field_0xfd;
  local_d8.ShaderHashes[1].Hash[0xe] = param_2->field_0xfe;
  local_d8.ShaderHashes[1].Hash[0xf] = param_2->field_0xff;
  local_d8.ShaderHashes[1].Hash[0x10] = param_2->field_0x100;
  local_d8.ShaderHashes[1].Hash[0x11] = param_2->field_0x101;
  local_d8.ShaderHashes[1].Hash[0x12] = param_2->field_0x102;
  local_d8.ShaderHashes[1].Hash[0x13] = param_2->field_0x103;
  if (param_3 != (FOpenGLGeometryShader *)0x0) {
    local_d8.ShaderHashes[2].Hash[0] = param_3->field_0xf0;
    local_d8.ShaderHashes[2].Hash[1] = param_3->field_0xf1;
    local_d8.ShaderHashes[2].Hash[2] = param_3->field_0xf2;
    local_d8.ShaderHashes[2].Hash[3] = param_3->field_0xf3;
    local_d8.ShaderHashes[2].Hash[4] = param_3->field_0xf4;
    local_d8.ShaderHashes[2].Hash[5] = param_3->field_0xf5;
    local_d8.ShaderHashes[2].Hash[6] = param_3->field_0xf6;
    local_d8.ShaderHashes[2].Hash[7] = param_3->field_0xf7;
    local_d8.ShaderHashes[2].Hash[8] = param_3->field_0xf8;
    local_d8.ShaderHashes[2].Hash[9] = param_3->field_0xf9;
    local_d8.ShaderHashes[2].Hash[10] = param_3->field_0xfa;
    local_d8.ShaderHashes[2].Hash[0xb] = param_3->field_0xfb;
    local_d8.ShaderHashes[2].Hash[0xc] = param_3->field_0xfc;
    local_d8.ShaderHashes[2].Hash[0xd] = param_3->field_0xfd;
    local_d8.ShaderHashes[2].Hash[0xe] = param_3->field_0xfe;
    local_d8.ShaderHashes[2].Hash[0xf] = param_3->field_0xff;
    local_d8.ShaderHashes[2].Hash[0x10] = param_3->field_0x100;
    local_d8.ShaderHashes[2].Hash[0x11] = param_3->field_0x101;
    local_d8.ShaderHashes[2].Hash[0x12] = param_3->field_0x102;
    local_d8.ShaderHashes[2].Hash[0x13] = param_3->field_0x103;
  }
  local_198 = param_3;
  local_188 = param_2;
  local_178 = param_1;
  FOpenGLLinkedProgramBase::FOpenGLLinkedProgramBase((FOpenGLLinkedProgramBase *)this,&local_d8,0);
  (this->Config).TypeIndex = '\0';
  (this->LRUInfo).LRUNode.Index = -1;
  FVar10 = (FName)::operator_new(0x20);
  FVar17.ComparisonIndex.Value = 0;
  FVar17.Number = 0;
  FVar11 = FVar17;
  if (FVar10 != (FName)0x0) {
    *(undefined8 *)FVar10 = 0;
    *(undefined8 *)((longlong)FVar10 + 8) = 0;
    *(undefined8 *)((longlong)FVar10 + 0x10) = 0;
    *(undefined4 *)((longlong)FVar10 + 0x18) = 0;
    FVar11 = FVar10;
  }
  (this->LRUInfo).CachedProgramBinary.Obj.Ptr = (FOpenGLProgramBinary *)FVar11;
  (this->LRUInfo).LastTouchedFrame = 0;
  pHVar12 = wglGetCurrentContext();
  if (pHVar12 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  bVar7 = FOpenGLBinaryCacheStats::IsEnabled();
  if (bVar7) {
    lpCriticalSection = FOpenGLBinaryCacheStats::Get();
    if (lpCriticalSection == (FOpenGLBinaryCacheStats *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar9 = (*FCrc::MemCrc32Func)(this,0x78,0);
    pFVar13 = TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
              ::FindOrAddImpl<FOpenGLProgramKey_const_&>
                        ((TMapBase<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FOpenGLProgramKey,FOpenGLBinaryCacheStats::FProgramUseTimes,0>_>
                          *)&lpCriticalSection->KeyToTimes,uVar9,(FOpenGLProgramKey *)this);
    QueryPerformanceCounter(&local_170);
    dVar4 = (double)local_170.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pFVar13->UsedTime == 0.0) {
      lpCriticalSection->bLogMe = true;
      pFVar13->UsedTime = dVar4;
      if (pFVar13->StartTime == 0.0) {
        lpCriticalSection->TotalMisses = lpCriticalSection->TotalMisses + 1;
        if (4 < (byte)LogRHI._0_1_) {
          FOpenGLProgramKey::ToString((FOpenGLProgramKey *)this,&local_120);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FOpenGLBinaryCacheStats::MarkCacheMissedTime(FOpenGLProgramKey_const&___ptr64,bool)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&LogRHI);
LAB_145be1e75:
          if (local_120.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_120.Data.AllocatorInstance.Data);
          }
        }
      }
      else if (pFVar13->CompileTime == 0.0) {
        lpCriticalSection->TotalEarlyUses = lpCriticalSection->TotalEarlyUses + 1;
        lpCriticalSection->CombinedEarlyTimeToUse =
             (dVar4 - pFVar13->StartTime) + lpCriticalSection->CombinedEarlyTimeToUse;
        if (4 < (byte)LogRHI._0_1_) {
          FOpenGLProgramKey::ToString((FOpenGLProgramKey *)this,&local_110);
          UE::Logging::Private::BasicLog<5>
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_FOpenGLBinaryCacheStats::MarkCacheMissedTime(FOpenGLProgramKey_const&___ptr64,bool)___ptr64'
                      ::__l35::LOG_Static,(FLogCategoryBase *)&LogRHI);
          local_120.Data.AllocatorInstance.Data = local_110.Data.AllocatorInstance.Data;
          goto LAB_145be1e75;
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (*(int *)&param_1->field_0x108 == 0) {
    FOpenGLShader::Compile((FOpenGLShader *)&param_1->field_0x108,0x8b31);
  }
  if (*(int *)&param_2->field_0x108 == 0) {
    FOpenGLShader::Compile((FOpenGLShader *)&param_2->field_0x108,0x8b30);
  }
  if ((param_3 != (FOpenGLGeometryShader *)0x0) && (*(int *)&param_3->field_0x108 == 0)) {
    FOpenGLShader::Compile((FOpenGLShader *)&param_3->field_0x108,0x8dd9);
  }
  FVar15 = StatPtr_STAT_OpenGLShaderLinkTime;
  if (StatPtr_STAT_OpenGLShaderLinkTime ==
      (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime>)0x0) {
    pFVar14 = ::FName::FName(&local_130,"STAT_OpenGLShaderLinkTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_OpenGLShaderLinkTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_OpenGLShaderLinkTime,*pFVar14,
                        L"Shader link time","STATGROUP_OpenGLRHI","STATCAT_Advanced",L"OpenGL RHI",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar15;
  bVar7 = false;
  bVar6 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  if ((FVar11.ComparisonIndex.Value.Value != 0) || (FVar11.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_180[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_180[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.ComparisonIndex.Value = FVar11.ComparisonIndex.Value.Value;
        local_168.Number = FVar11.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_168,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                   ,0x992);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_190 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar5 = true;
      goto LAB_145be1ffb;
    }
  }
  bVar5 = false;
  FVar11 = local_160;
LAB_145be1ffb:
  plVar1 = &this->_padding_;
  if ((plVar1 == (longlong *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipelines",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLBase.h"
                         ,0x11f,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FOpenGLLinkedProgram *)(*pcVar3)();
    return pFVar16;
  }
  uVar9 = (*glCreateProgram)();
  *(uint *)plVar1 = uVar9;
  if ((*(int *)&param_1->field_0x108 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("VertexShader->Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x996,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FOpenGLLinkedProgram *)(*pcVar3)();
    return pFVar16;
  }
  (*glAttachShader)((uint)*plVar1,*(uint *)&param_1->field_0x108);
  if ((*(int *)&param_2->field_0x108 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PixelShader->Resource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                         ,0x999,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    pFVar16 = (FOpenGLLinkedProgram *)(*pcVar3)();
    return pFVar16;
  }
  (*glAttachShader)((uint)*plVar1,*(uint *)&param_2->field_0x108);
  if (param_3 != (FOpenGLGeometryShader *)0x0) {
    if ((*(int *)&param_3->field_0x108 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("GeometryShader->Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                           ,0x99e,L""), bVar8)) {
      pcVar3 = (code *)swi(3);
      pFVar16 = (FOpenGLLinkedProgram *)(*pcVar3)();
      return pFVar16;
    }
    (*glAttachShader)((uint)*plVar1,*(uint *)&param_3->field_0x108);
  }
  if ((FOpenGLProgramBinaryCache::CachePtr != (FOpenGLProgramBinaryCache *)0x0) ||
     (bVar8 = FGLProgramCache::IsUsingLRU(), bVar8)) {
    (*glProgramParameteri)((uint)*plVar1,0x8257,1);
  }
  (*glLinkProgram)((uint)*plVar1);
  bVar8 = VerifyLinkedProgram((uint)*plVar1);
  if (!bVar8) {
    this_00 = RHIGetPanicDelegate();
    local_170 = (LARGE_INTEGER)::FName::FName(&local_128,"FailedProgramLink");
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,&local_f0);
    if ((*(int *)&this_00->field_0x10 != 0) &&
       (plVar2 = *(longlong **)&this_00->field_0x8, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x68))(plVar2,local_170.QuadPart);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_f0);
    FOpenGLProgramKey::ToString((FOpenGLProgramKey *)this,&local_100);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
  }
  SetNewProgramStats((uint)*plVar1);
  (*glUseProgram)((uint)*plVar1);
  TVariant<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>
  ::
  Emplace<FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram_&,FOpenGLVertexShader_*_&,FOpenGLPixelShader_*_&,FOpenGLGeometryShader_*_&>
            (&this->Config,this,&local_178,&local_188,&local_198);
  bVar8 = IsPrecachingEnabled();
  if (((bVar8) && (GCacheAllProgramBinaries != false)) &&
     (bVar8 = FOpenGLProgramBinaryCache::RequiresCaching((FOpenGLProgramKey *)this), bVar8)) {
    UE::OpenGL::GetProgramBinaryFromGLProgram(&local_150,(uint)*plVar1);
    FVar10 = (FName)::operator_new(0x20);
    if (FVar10 != (FName)0x0) {
      *(FScriptContainerElement **)FVar10 = local_150.OwnedData.AllocatorInstance.Data;
      *(int *)((longlong)FVar10 + 8) = local_150.OwnedData.ArrayNum;
      *(int *)((longlong)FVar10 + 0xc) = local_150.OwnedData.ArrayMax;
      *(uchar **)((longlong)FVar10 + 0x10) = local_150.DataView.DataPtr;
      *(undefined8 *)((longlong)FVar10 + 0x18) = local_150.DataView._8_8_;
      local_150.OwnedData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_150.OwnedData.ArrayNum = 0;
      local_150.OwnedData.ArrayMax = 0;
      FVar17 = FVar10;
    }
    local_190 = FVar17;
    FOpenGLProgramBinaryCache::CacheProgramBinary
              ((FOpenGLProgramKey *)this,(TUniqueObj<FOpenGLProgramBinary> *)&local_190);
    FVar17 = local_190;
    if (local_190 != (FName)0x0) {
      FOpenGLProgramBinary::~FOpenGLProgramBinary((FOpenGLProgramBinary *)local_190);
      ::operator_delete((void *)FVar17,0x20);
    }
    FOpenGLProgramBinary::~FOpenGLProgramBinary(&local_150);
  }
  this_01 = GetOpenGLProgramsCache();
  FGLProgramCache::Add(this_01,(FOpenGLProgramKey *)this,this);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return this;
}

// DeleteGLResources @ 145bfab50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FOpenGLLinkedProgram::DeleteGLResources(FOpenGLLinkedProgram *this)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  HGLRC pHVar4;
  ulonglong uVar5;
  
  pHVar4 = wglGetCurrentContext();
  if (pHVar4 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog
              (&`public:_void___cdecl_FOpenGLLinkedProgram::DeleteGLResources(void)___ptr64'::__l6::
                LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  uVar5 = (ulonglong)(this->Config).TypeIndex;
  if (2 < uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FOpenGLLinkedProgram::FGraphicsProgram,FOpenGLLinkedProgram::FComputeProgram>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar5])(&this->Config);
  (this->Config).TypeIndex = '\0';
  uVar1 = (uint)this->_padding_;
  if (uVar1 != 0) {
    SetDeletedProgramStats(uVar1);
    (*glDeleteProgram)((uint)this->_padding_);
    *(undefined4 *)&this->_padding_ = 0;
  }
  return;
}

// GetGraphicsProgram @ 145c020e0

FGraphicsProgram * __thiscall FOpenGLLinkedProgram::GetGraphicsProgram(FOpenGLLinkedProgram *this)

{
  code *pcVar1;
  bool bVar2;
  FGraphicsProgram *pFVar3;
  
  if ((this->Config).TypeIndex != '\x01') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FGraphicsProgram *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FGraphicsProgram *)&this->Config;
}

// GetStage @ 145c04660

/* WARNING: Enum "EShaderStage": Some values do not have unique names */

FShaderStage * __thiscall
FOpenGLLinkedProgram::GetStage(FOpenGLLinkedProgram *this,EShaderStage param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderStage *pFVar3;
  FGraphicsProgram *pFVar4;
  
  if (param_1 != SHADER_STAGE_VERTEX) {
    if (param_1 == SHADER_STAGE_PIXEL) {
      pFVar4 = GetGraphicsProgram(this);
      return &pFVar4->Pixel;
    }
    if (param_1 == SHADER_STAGE_GEOMETRY) {
      pFVar4 = GetGraphicsProgram(this);
      if ((pFVar4->Geometry).bIsSet == false) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          );
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FShaderStage *)(*pcVar1)();
          return pFVar3;
        }
      }
      return &(pFVar4->Geometry).TypedValue;
    }
    if (param_1 == NUM_NON_COMPUTE_SHADER_STAGES) {
      bVar2 = (this->Config).TypeIndex == '\x02';
      goto LAB_145c046ad;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLShaders.cpp"
                       ,0x56f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FShaderStage *)(*pcVar1)();
      return pFVar3;
    }
  }
  bVar2 = (this->Config).TypeIndex == '\x01';
LAB_145c046ad:
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index == TypeIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                       ,0x97,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FShaderStage *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FShaderStage *)&this->Config;
}

