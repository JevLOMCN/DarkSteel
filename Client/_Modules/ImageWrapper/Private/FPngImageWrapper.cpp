// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 21

// FPngImageWrapper @ 142664da0

FPngImageWrapper * __thiscall FPngImageWrapper::FPngImageWrapper(FPngImageWrapper *this)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0xff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FPngImageWrapper__6B_;
  this->ReadOffset = 0;
  this->ColorType = 0;
  this->Channels = '\0';
  *(undefined8 *)&this->TextBlocks = 0;
  *(undefined8 *)&(this->TextBlocks).field_0x8 = 0;
  *(undefined8 *)&(this->TextBlocks).field_0x20 = 0;
  *(undefined4 *)&(this->TextBlocks).field_0x28 = 0;
  *(undefined4 *)&(this->TextBlocks).field_0x2c = 0x80;
  *(undefined4 *)&(this->TextBlocks).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TextBlocks).field_0x34 = 0;
  *(undefined8 *)&(this->TextBlocks).field_0x40 = 0;
  *(undefined4 *)&(this->TextBlocks).field_0x48 = 0;
  return this;
}

// ~FPngImageWrapper @ 14266a310

void __thiscall FPngImageWrapper::~FPngImageWrapper(FPngImageWrapper *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->TextBlocks).field_0x48 = 0;
  pvVar1 = *(void **)&(this->TextBlocks).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TextBlocks);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IImageWrapper__6B_;
  return;
}

// AddMetadata @ 14267dae0

void __thiscall
FPngImageWrapper::AddMetadata(FPngImageWrapper *this,FString *param_1,FString *param_2)

{
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  Emplace<FString_const_&,FString_const_&>
            ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&this->TextBlocks,param_1,param_2);
  return;
}

// CanSetRawFormat @ 1426823c0

bool __thiscall
FPngImageWrapper::CanSetRawFormat(FPngImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if ((param_1 < RGBAF) && ((param_2 - 8U & 0xfffffff7) == 0)) {
    return true;
  }
  return false;
}

// Compress @ 142685bf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FPngImageWrapper::Compress(FPngImageWrapper *this,int param_1)

{
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar1
  ;
  undefined1 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  _SETJMP_FLOAT128 (*pa_Var9) [16];
  byte bVar10;
  longlong lVar11;
  wchar_t *pwVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *puVar19;
  ulonglong uVar20;
  uint *puVar21;
  uint uVar22;
  bool bVar23;
  undefined1 auStackY_298 [32];
  undefined1 local_247 [7];
  png_struct_def_conflict *local_240;
  ForAnyElementType local_238;
  undefined8 local_230;
  ForAnyElementType local_228;
  undefined8 local_220;
  png_struct_def_conflict **local_218;
  png_info_def **local_210;
  uchar **local_208;
  byte local_200;
  byte local_1ff;
  int local_1fc;
  png_info_def *local_1f8;
  int local_1f0;
  uint uStack_1ec;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1e8;
  uint local_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  undefined4 uStack_1d4;
  uint local_1d0;
  int local_1cc;
  uchar **local_1c8;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_1a0;
  uint uStack_198;
  uint uStack_194;
  undefined1 *local_190;
  undefined4 uStack_188;
  uint uStack_184;
  uint local_180;
  undefined4 uStack_17c;
  int iStack_178;
  undefined4 uStack_174;
  int local_170;
  png_text_struct local_168;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_128;
  undefined8 uStack_108;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_100;
  undefined8 uStack_f8;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 uStack_d4;
  FChannel *local_d0;
  int *local_c8;
  int *local_c0;
  uint *local_b8;
  ForAnyElementType *local_b0;
  ForAnyElementType *local_a8;
  ForAnyElementType *local_a0;
  ForAnyElementType *local_98;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_90;
  undefined8 uStack_88;
  TBitArray<FDefaultBitArrayAllocator> *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_44;
  
  local_d0 = CpuChannel;
  local_c8 = &CpuChannel->Enabled;
  local_1c0 = *local_c8;
  local_200 = (byte)((uint)local_1c0 >> 0x1f) ^ 1;
  bVar23 = local_200 != 0;
  local_1ff = local_200;
  local_1bc = local_1c0;
  local_1b8 = local_1c0;
  local_c0 = local_c8;
  if (bVar23) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId158,"FPngImageWrapper::Compress",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
               ,0x9e);
    local_b8 = &::__CpuProfilerEventSpecId158;
    local_1b4 = ::__CpuProfilerEventSpecId158;
    local_1b0 = ::__CpuProfilerEventSpecId158;
    local_1ac = ::__CpuProfilerEventSpecId158;
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId158);
  }
  if (this->_padding_ == 0) {
    if ((this->_padding_ == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("RawData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0xa8,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Width > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0xa9,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((this->_padding_ < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Height > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0xaa,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar13 = 0;
    uVar14 = 0;
    this->ReadOffset = 0;
    local_240 = png_create_write_struct_2
                          ("1.6.44",this,user_error_fn,user_warning_fn,(void *)0x0,user_malloc,
                           user_free);
    if ((local_240 == (png_struct_def_conflict *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("png_ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0xb0,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_1f8 = png_create_info_struct(local_240);
    if ((local_1f8 == (png_info_def *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("info_ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0xb3,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_208 = png_malloc(local_240,this->_padding_ << 3);
    local_b0 = &local_238;
    local_a8 = &local_238;
    local_238.Data = (FScriptContainerElement *)0x0;
    local_230 = 0;
    local_a0 = &local_228;
    local_98 = &local_228;
    local_228.Data = (FScriptContainerElement *)0x0;
    local_220 = 0;
    local_218 = &local_240;
    local_210 = &local_1f8;
    local_1c8 = local_208;
    pa_Var9 = png_set_longjmp_fn(local_240,longjmp,0x100);
    iVar8 = _setjmp(pa_Var9,auStackY_298);
    if (iVar8 == 0) {
      local_1fc = 3;
      iVar8 = local_1fc;
      local_1cc = param_1;
      if (param_1 != 0) {
        if (param_1 == 1) {
          local_1fc = 0;
          iVar8 = local_1fc;
        }
        else {
          iVar8 = -param_1;
          if (((8 < -param_1 - 1U) && (iVar8 = local_1fc, 0x50 < param_1 - 0x14U)) &&
             (2 < (byte)LogImageWrapper._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
            iVar8 = local_1fc;
          }
        }
      }
      local_1fc = iVar8;
      pTVar1 = &this->TextBlocks;
      uVar17 = *(int *)&(this->TextBlocks).field_0x8 - *(int *)&(this->TextBlocks).field_0x34;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if (local_230._4_4_ < (int)uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,uVar17,&local_238,(int)local_230,(int *)((longlong)&local_230 + 4));
      }
      uVar17 = (*(int *)&(this->TextBlocks).field_0x8 - *(int *)&(this->TextBlocks).field_0x34) * 2;
      if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
      }
      if (local_220._4_4_ < (int)uVar17) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar17,&local_228,(int)local_220,(int *)((longlong)&local_220 + 4));
      }
      uVar18 = 0;
      puVar2 = &(this->TextBlocks).field_0x10;
      uVar17 = *(uint *)&(this->TextBlocks).field_0x28;
      uStack_194 = 1;
      uStack_198 = uVar18;
      uStack_184 = uVar18;
      local_180 = uVar18;
      if (uVar17 != 0) {
        puVar21 = *(uint **)&(this->TextBlocks).field_0x20;
        if (puVar21 == (uint *)0x0) {
          puVar21 = (uint *)puVar2;
        }
        uStack_194 = *puVar21;
        uVar16 = uVar13;
        uVar20 = uVar13;
        uStack_198 = uVar14;
        local_180 = uVar14;
        while (uStack_194 == 0) {
          iVar8 = (int)uVar16;
          uStack_198 = iVar8 + 1;
          uVar16 = (ulonglong)uStack_198;
          local_180 = (int)uVar20 + 0x20;
          uVar20 = (ulonglong)local_180;
          uStack_194 = 1;
          uStack_184 = uVar17;
          if ((int)((uVar17 - 1) + ((int)(uVar17 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_198)
          goto LAB_14268606e;
          uStack_194 = puVar21[(longlong)iVar8 + 1];
        }
        uStack_194 = ~(uStack_194 - 1) & uStack_194;
        uVar16 = (ulonglong)uStack_194 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_170 = (int)lVar11;
        uStack_184 = (local_180 - 1) + local_170;
        if ((int)uVar17 < (int)uStack_184) {
          uStack_184 = uVar17;
        }
      }
LAB_14268606e:
      uStack_188 = 0xffffffff;
      uStack_17c = local_44;
      iStack_178 = *(int *)&(this->TextBlocks).field_0x8 - *(int *)&(this->TextBlocks).field_0x34;
      TStack_128._padding_ = CONCAT44(uStack_194,uStack_198);
      TStack_128.CurrentBitIndex = uStack_184;
      TStack_128.UnvisitedBitMask = 0xffffffff;
      TStack_128._28_4_ = local_44;
      TStack_128.BaseBitIndex = local_180;
      uStack_108 = CONCAT44(uStack_174,iStack_178);
      uStack_1dc = *(uint *)&(this->TextBlocks).field_0x28;
      iVar8 = (int)uStack_1dc >> 5;
      bVar10 = (byte)uStack_1dc & 0x1f;
      uStack_1ec = 1 << bVar10;
      uVar22 = -1 << bVar10;
      uVar15 = uStack_1dc & 0xffffffe0;
      local_1f0 = iVar8;
      pTStack_1e8 = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      local_1e0 = uVar22;
      uStack_1d8 = uVar15;
      local_1d0 = uStack_1dc;
      local_1a0 = pTVar1;
      local_190 = puVar2;
      local_130 = pTVar1;
      TStack_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar2;
      if ((((int)uStack_1dc < 0) || ((int)uVar17 < (int)uStack_1dc)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar17 = *(uint *)&(this->TextBlocks).field_0x28;
      if (local_1d0 != uVar17) {
        puVar19 = *(undefined1 **)&(this->TextBlocks).field_0x20;
        if (puVar19 == (undefined1 *)0x0) {
          puVar19 = puVar2;
        }
        uVar22 = uVar22 & *(uint *)(puVar19 + (longlong)iVar8 * 4);
        while (uVar22 == 0) {
          local_1f0 = iVar8 + 1;
          uStack_1d8 = uVar15 + 0x20;
          if ((int)(((int)(uVar17 - 1) >> 0x1f & 0x1fU) + (uVar17 - 1)) >> 5 < local_1f0)
          goto LAB_1426861ac;
          uVar22 = *(uint *)(puVar19 + (longlong)local_1f0 * 4);
          local_1e0 = 0xffffffff;
          iVar8 = local_1f0;
          uVar15 = uStack_1d8;
        }
        uStack_1ec = ~(uVar22 - 1) & uVar22;
        uVar16 = (ulonglong)uStack_1ec * 2 + 1;
        lVar11 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_1a8 = (int)lVar11;
        uStack_1dc = local_1a8 + -1 + uVar15;
        if ((int)uVar17 < (int)uStack_1dc) {
LAB_1426861ac:
          uStack_1dc = uVar17;
        }
      }
      uStack_f8 = CONCAT44(uStack_1ec,local_1f0);
      pTStack_f0 = pTStack_1e8;
      uStack_e8 = CONCAT44(uStack_1dc,local_1e0);
      uStack_e0 = CONCAT44(uStack_1d4,uStack_1d8);
      local_d8 = *(int *)&(this->TextBlocks).field_0x8 - *(int *)&(this->TextBlocks).field_0x34;
      local_80 = pTStack_1e8;
      uStack_68 = CONCAT44(uStack_d4,local_d8);
      local_100 = pTVar1;
      local_90 = pTVar1;
      uStack_88 = uStack_f8;
      uStack_78 = uStack_e8;
      local_70 = uStack_e0;
      while( true ) {
        pTVar1 = local_130;
        if (*(int *)&local_130->field_0x8 - *(int *)&local_130->field_0x34 != (int)uStack_108) {
          local_247[0] = 0;
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_247);
        }
        if (((TStack_128.CurrentBitIndex == uStack_78._4_4_) && (TStack_128.Array == local_80)) &&
           (pTVar1 == local_90)) break;
        puVar3 = (undefined8 *)(*(longlong *)pTVar1 + (longlong)TStack_128.CurrentBitIndex * 0x28);
        local_168.key = (char *)0x0;
        local_168.text = (char *)0x0;
        local_168.text_length = 0;
        local_168.itxt_length = 0;
        local_168.lang = (char *)0x0;
        local_168.lang_key = (char *)0x0;
        local_168.compression = -1;
        local_168._4_4_ = 0;
        if (*(int *)(puVar3 + 1) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)*puVar3;
        }
        iVar8 = (int)local_220;
        if ((int)local_220 == local_220._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_228,(int *)((longlong)&local_220 + 4));
        }
        local_220 = CONCAT44(local_220._4_4_,iVar8 + 1);
        FUtf8String::FUtf8String((FUtf8String *)(local_228.Data + (longlong)iVar8 * 0x10),pwVar12);
        uVar17 = uVar18;
        if ((int)((int)local_220 - 1U) < (int)local_220) {
          uVar17 = ~((int)local_220 - 1U) >> 0x1f;
        }
        iVar8 = (int)local_220;
        if (uVar17 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (int)local_220;
        }
        if (*(int *)(local_228.Data + (longlong)iVar8 * 0x10 + -8) == 0) {
          local_168.key = "";
        }
        else {
          local_168.key = *(char **)(local_228.Data + (longlong)iVar8 * 0x10 + -0x10);
        }
        if (*(int *)(puVar3 + 3) == 0) {
          pwVar12 = L"";
        }
        else {
          pwVar12 = (wchar_t *)puVar3[2];
        }
        if (iVar8 == local_220._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&local_228,(int *)((longlong)&local_220 + 4));
        }
        local_220 = CONCAT44(local_220._4_4_,iVar8 + 1);
        FUtf8String::FUtf8String((FUtf8String *)(local_228.Data + (longlong)iVar8 * 0x10),pwVar12);
        uVar17 = uVar14;
        if ((int)((int)local_220 - 1U) < (int)local_220) {
          uVar17 = ~((int)local_220 - 1U) >> 0x1f;
        }
        if (uVar17 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(int *)(local_228.Data + (longlong)(int)local_220 * 0x10 + -8) == 0) {
          local_168.text = "";
        }
        else {
          local_168.text = *(char **)(local_228.Data + (longlong)(int)local_220 * 0x10 + -0x10);
        }
        if (((local_238.Data <= &local_168) &&
            (&local_168 < (png_text_struct *)(local_238.Data + (longlong)local_230._4_4_ * 0x38)))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (int)local_230;
        if ((int)local_230 == local_230._4_4_) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&local_238,(int *)((longlong)&local_230 + 4));
        }
        local_230 = CONCAT44(local_230._4_4_,iVar8 + 1);
        lVar11 = (longlong)iVar8 * 0x38;
        *(undefined8 *)(local_238.Data + lVar11) = local_168._0_8_;
        *(char **)(local_238.Data + lVar11 + 8) = local_168.key;
        *(char **)(local_238.Data + lVar11 + 0x10) = local_168.text;
        *(ulong64 *)(local_238.Data + lVar11 + 0x10 + 8) = local_168.text_length;
        *(ulong64 *)(local_238.Data + lVar11 + 0x20) = local_168.itxt_length;
        *(char **)(local_238.Data + lVar11 + 0x20 + 8) = local_168.lang;
        *(char **)(local_238.Data + lVar11 + 0x30) = local_168.lang_key;
        TStack_128.UnvisitedBitMask = TStack_128.UnvisitedBitMask & ~TStack_128._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_128);
      }
      png_set_text(local_240,local_1f8,(png_text_struct *)local_238.Data,(int)local_230);
      png_set_compression_level(local_240,local_1fc);
      iVar8 = 6;
      if ((char)this->_padding_ == '\x02') {
        iVar8 = 0;
      }
      png_set_IHDR(local_240,local_1f8,(uint)this->_padding_,(uint)this->_padding_,
                   *(int *)((longlong)&this->_padding_ + 4),iVar8,0,0,0);
      png_set_write_fn(local_240,this,user_write_compressed,user_flush_data);
      if (local_1cc == 1) {
        png_set_filter(local_240,0,0x22);
      }
      lVar11 = 4;
      if ((char)this->_padding_ == '\x02') {
        lVar11 = 1;
      }
      iVar8 = *(int *)((longlong)&this->_padding_ + 4);
      lVar5 = this->_padding_;
      uVar16 = uVar13;
      if (0 < this->_padding_) {
        do {
          uVar17 = uVar14;
          if ((longlong)uVar13 < this->_padding_) {
            uVar17 = (uint)(uVar13 >> 0x3f) ^ 1;
          }
          if ((uVar17 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_1c8[uVar16] = (uchar *)(this->_padding_ + uVar13);
          uVar16 = uVar16 + 1;
          uVar13 = uVar13 + ((ulonglong)(lVar11 * iVar8) >> 3) * lVar5;
        } while ((longlong)uVar16 < this->_padding_);
      }
      png_set_rows(local_240,local_1f8,local_1c8);
      cVar4 = (char)this->_padding_;
      if (cVar4 == '\x01') {
        uVar14 = 0x80;
      }
      if ((*(int *)((longlong)&this->_padding_ + 4) == 0x10) && (uVar14 = 0x200, cVar4 == '\x01')) {
        uVar14 = 0x280;
      }
      png_write_png(local_240,local_1f8,uVar14,(void *)0x0);
      if (local_208 != (uchar **)0x0) {
        png_free(*local_218,local_208);
      }
      png_destroy_write_struct(local_218,local_210);
      DestructItems<FUtf8String,int>((FUtf8String *)local_228.Data,(int)local_220);
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data);
      }
    }
    else {
      this->_padding_ = 0;
      if (this->_padding_ != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
      }
      if (1 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      }
      if (local_208 != (uchar **)0x0) {
        png_free(*local_218,local_208);
      }
      png_destroy_write_struct(local_218,local_210);
      DestructItems<FUtf8String,int>((FUtf8String *)local_228.Data,(int)local_220);
      if (local_228.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data);
      }
    }
    if ((png_text_struct *)local_238.Data != (png_text_struct *)0x0) {
      FMemory::Free(local_238.Data);
    }
  }
  if (bVar23) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// GetMetadata @ 14268b650

void __thiscall
FPngImageWrapper::GetMetadata
          (FPngImageWrapper *this,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_1)

{
  uint uVar1;
  void *_Dst;
  void *_Src;
  uint uVar2;
  
  if (param_1 == &this->TextBlocks) {
    return;
  }
  uVar1 = *(uint *)&(this->TextBlocks).field_0x48;
  uVar2 = uVar1;
  if (uVar1 < 2) {
    if (*(longlong *)&param_1->field_0x40 == 0) goto LAB_14268b6ac;
    uVar2 = 0;
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            ((ForAnyElementType *)&param_1->field_0x40,0,uVar2,4);
LAB_14268b6ac:
  _Src = *(void **)&(this->TextBlocks).field_0x40;
  if (uVar1 != 0) {
    if (_Src == (void *)0x0) {
      _Src = &(this->TextBlocks).field_0x38;
    }
    _Dst = *(void **)&param_1->field_0x40;
    if (*(void **)&param_1->field_0x40 == (void *)0x0) {
      _Dst = &param_1->field_0x38;
    }
    memcpy(_Dst,_Src,(longlong)(int)uVar1 << 2);
  }
  *(uint *)&param_1->field_0x48 = uVar1;
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::operator=((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)param_1,
              (TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)&this->TextBlocks);
  return;
}

// GetSupportedRawFormat @ 14268bfa0

Type __thiscall FPngImageWrapper::GetSupportedRawFormat(FPngImageWrapper *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_1) {
  case G8:
  case BGRA8:
  case RGBA16:
  case G16:
    return param_1;
  case BGRE8:
  case RGBA16F:
  case RGBA32F:
  case R16F:
  case R32F:
    return RGBA16;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                     ,0x97,L"");
  if (!bVar2) {
    return BGRA8;
  }
  pcVar1 = (code *)swi(3);
  TVar3 = (*pcVar1)();
  return TVar3;
}

// IsPNG @ 14268c130

bool __thiscall FPngImageWrapper::IsPNG(FPngImageWrapper *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 local_res8 [4];
  
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CompressedData.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                       ,0x229,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (8 < this->_padding_) {
    local_res8[0] = *(undefined8 *)this->_padding_;
    iVar4 = png_sig_cmp((uchar *)local_res8,0,8);
    return iVar4 == 0;
  }
  return false;
}

// LoadPNGHeader @ 14268ca90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPngImageWrapper::LoadPNGHeader(FPngImageWrapper *this)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  png_struct_def_conflict **pppVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  _SETJMP_FLOAT128 (*pa_Var9) [16];
  undefined1 auStackY_c8 [32];
  png_struct_def_conflict *local_80;
  int local_78 [2];
  png_info_def *local_70;
  png_struct_def_conflict **local_68;
  png_info_def **local_60;
  void *local_58;
  png_text_struct *local_50;
  undefined4 local_48;
  undefined8 local_40;
  FString local_38;
  FString local_28 [2];
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x238,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x229,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return (bool)uVar6;
  }
  local_48 = 8;
  if (this->_padding_ < 9) {
    bVar5 = false;
  }
  else {
    local_40 = *(undefined8 *)this->_padding_;
    iVar7 = png_sig_cmp((uchar *)&local_40,0,8);
    bVar5 = iVar7 == 0;
  }
  if (bVar5) {
    iVar7 = 0;
    local_80 = png_create_read_struct_2
                         ("1.6.44",this,user_error_fn,user_warning_fn,(void *)0x0,user_malloc,
                          user_free);
    if ((local_80 == (png_struct_def_conflict *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("png_ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0x243,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_70 = png_create_info_struct(local_80);
    if ((local_70 == (png_info_def *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("info_ptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                           ,0x246,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return (bool)uVar6;
    }
    local_68 = &local_80;
    local_60 = &local_70;
    local_58 = (void *)0x0;
    pa_Var9 = png_set_longjmp_fn(local_80,longjmp,0x100);
    iVar8 = _setjmp(pa_Var9,auStackY_c8);
    if (iVar8 == 0) {
      png_set_read_fn(local_80,this,user_read_compressed);
      png_read_info(local_80,local_70);
      this->_padding_ = (ulonglong)local_70->width;
      this->_padding_ = (ulonglong)local_70->height;
      bVar1 = local_70->color_type;
      this->ColorType = (uint)bVar1;
      bVar2 = local_70->bit_depth;
      *(uint *)((longlong)&this->_padding_ + 4) = (uint)bVar2;
      this->Channels = local_70->channels;
      if ((local_70->valid & 0x10) == 0) {
        uVar6 = 2;
        if ((bVar1 & 6) != 0) {
          uVar6 = 0;
        }
        *(undefined1 *)&this->_padding_ = uVar6;
      }
      else {
        *(undefined1 *)&this->_padding_ = 0;
      }
      if (((char)this->_padding_ == '\0') && (bVar2 < 9)) {
        *(undefined1 *)&this->_padding_ = 1;
      }
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Reset((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
               *)&this->TextBlocks);
      local_50 = (png_text_struct *)0x0;
      local_78[0] = 0;
      iVar8 = png_get_text(local_80,local_70,&local_50,local_78);
      if (iVar8 != 0) {
        for (; iVar7 < local_78[0]; iVar7 = iVar7 + 1) {
          ::FString::FString(local_28,local_50[iVar7].text);
          ::FString::FString(&local_38,local_50[iVar7].key);
          TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          ::Emplace<FString,FString>
                    ((TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)&this->TextBlocks,&local_38,local_28);
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          }
        }
      }
      pppVar4 = local_68;
      if (local_58 != (void *)0x0) {
        png_free(*local_68,local_58);
      }
      png_destroy_read_struct(pppVar4,local_60,(png_info_def **)0x0);
      return true;
    }
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
    pppVar4 = local_68;
    if (local_58 != (void *)0x0) {
      png_free(*local_68,local_58);
    }
    png_destroy_read_struct(pppVar4,local_60,(png_info_def **)0x0);
  }
  return false;
}

// Reset @ 14268d850

void __thiscall FPngImageWrapper::Reset(FPngImageWrapper *this)

{
  FImageWrapperBase::Reset((FImageWrapperBase *)this);
  this->ReadOffset = 0;
  this->ColorType = 0;
  this->Channels = '\0';
  return;
}

// SetCompressed @ 14268e3a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FPngImageWrapper::SetCompressed(FPngImageWrapper *this,void *param_1,long64 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  
  bVar5 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2);
  if (bVar5) {
    bVar5 = LoadPNGHeader(this);
    if (bVar5) {
      iVar2 = *(int *)((longlong)&this->_padding_ + 4);
      if (((((iVar2 == 1) || ((iVar2 - 2U & 0xfffffffd) == 0)) &&
           (uVar3 = this->ColorType, (uVar3 & 4) == 0)) && ((uVar3 == 3 || (uVar3 == 0)))) &&
         (this->_padding_ == 0)) {
        if (this->_padding_ == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("CompressedData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                             ,0x147,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        UncompressPNGData(this,(ERGBFormat)this->_padding_,8);
      }
      bVar1 = (byte)this->_padding_;
      if (((bVar1 == 1) || ((bVar1 & 0xfd) == 0)) &&
         ((iVar2 = *(int *)((longlong)&this->_padding_ + 4), iVar2 == 8 || (iVar2 == 0x10)))) {
        bVar5 = FImageCoreUtils::IsImageImportPossible(this->_padding_,this->_padding_);
        if (!bVar5) {
          ::FString::operator=
                    ((FString *)&this->_padding_,L"Image dimensions are not possible to import");
          return false;
        }
        return true;
      }
      if (2 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      }
    }
  }
  return false;
}

// SupportsMetadata @ 14268efa0

bool __thiscall FPngImageWrapper::SupportsMetadata(FPngImageWrapper *this)

{
  return true;
}

// Uncompress @ 142690410

void __thiscall FPngImageWrapper::Uncompress(FPngImageWrapper *this,ERGBFormat param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (((this->_padding_ == 0) || (param_1 != (ERGBFormat)this->_padding_)) ||
     (param_2 != *(int *)((longlong)&this->_padding_ + 4))) {
    if (this->_padding_ == 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x16c,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    UncompressPNGData(this,param_1,param_2);
  }
  return;
}

// UncompressPNGData @ 142691540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FPngImageWrapper::UncompressPNGData(FPngImageWrapper *this,ERGBFormat param_1,int param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  uchar **ppuVar3;
  png_struct_def_conflict **pppVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  _SETJMP_FLOAT128 (*pa_Var8) [16];
  ulong64 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStackY_b8 [32];
  png_struct_def_conflict *local_78;
  png_info_def *local_70;
  uchar **local_68;
  longlong *local_60;
  png_struct_def_conflict **local_50;
  png_info_def **local_48;
  uchar **local_40;
  
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CompressedData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x17a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Width > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x17b,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((this->_padding_ < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Height > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x17c,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((Gray < param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InFormat == ERGBFormat::BGRA || InFormat == ERGBFormat::RGBA || InFormat == ERGBFormat::Gray"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x17f,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (((0x10 < (uint)param_2) || ((0x10116U >> (param_2 & 0x1fU) & 1) == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBitDepth == 1 || InBitDepth == 2 || InBitDepth == 4 || InBitDepth == 8 || InBitDepth == 16"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x180,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar11 = 0;
  if (0x1fffffff < (ulonglong)this->_padding_) {
    this->_padding_ = 0;
    if (this->_padding_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
    }
    if ((byte)LogImageWrapper._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    return;
  }
  this->ReadOffset = 0;
  local_78 = png_create_read_struct_2
                       ("1.6.44",this,user_error_fn,user_warning_fn,(void *)0x0,user_malloc,
                        user_free);
  if ((local_78 == (png_struct_def_conflict *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("png_ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x18e,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_70 = png_create_info_struct(local_78);
  if ((local_70 == (png_info_def *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("info_ptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x191,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_68 = png_malloc(local_78,this->_padding_ << 3);
  local_50 = &local_78;
  local_48 = &local_70;
  local_40 = local_68;
  pa_Var8 = png_set_longjmp_fn(local_78,longjmp,0x100);
  iVar6 = _setjmp(pa_Var8,auStackY_b8);
  if (iVar6 != 0) {
    this->_padding_ = 0;
    if (this->_padding_ != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)&this->_padding_,0,&this->_padding_);
    }
    if (1 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
    pppVar4 = local_50;
    if (local_40 != (uchar **)0x0) {
      png_free(*local_50,local_40);
    }
    png_destroy_read_struct(pppVar4,local_48,(png_info_def **)0x0);
    return;
  }
  png_set_read_fn(local_78,this,user_read_compressed);
  png_read_info(local_78,local_70);
  png_set_expand(local_78);
  if (((this->ColorType & 4) == 0) && (param_1 < Gray)) {
    if (param_2 == 8) {
      png_set_add_alpha(local_78,0xff,1);
    }
    else if (param_2 == 0x10) {
      png_set_add_alpha(local_78,0xffff,1);
    }
  }
  lVar12 = 4;
  if (param_1 == Gray) {
    lVar12 = 1;
  }
  uVar13 = (ulonglong)(lVar12 * param_2) >> 3;
  if ((uVar13 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("BytesPerPixel > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                         ,0x1c4,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  lVar12 = uVar13 * this->_padding_;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = SUB168(SEXT816(0x7fffffffffffffff),8);
  if ((SUB168((auVar1 << 0x40 | ZEXT816(0x7fffffffffffffff)) / SEXT816(lVar12),0) < this->_padding_)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Height <= ((int64) 0x7fffffffffffffff) / BytesPerRow",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                            ,0x1c7,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar9 = lVar12 * this->_padding_;
  if ((longlong)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar9);
  }
  this->_padding_ = 0;
  local_60 = &this->_padding_;
  if (*local_60 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar9,(ForAnyElementType *)&this->_padding_,0,local_60);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,uVar9,(ForAnyElementType *)&this->_padding_,&this->_padding_,local_60);
  for (; ppuVar3 = local_68, lVar11 < this->_padding_; lVar11 = lVar11 + 1) {
    lVar10 = lVar11 * lVar12;
    uVar7 = 0;
    if (lVar10 < this->_padding_) {
      uVar7 = (uint)((ulonglong)lVar10 >> 0x3f) ^ 1;
    }
    if ((uVar7 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_68[lVar11] = (uchar *)(this->_padding_ + lVar10);
  }
  png_set_rows(local_78,local_70,local_68);
  if (param_1 == BGRA) {
    png_set_bgr(local_78);
  }
  if (*(int *)((longlong)&this->_padding_ + 4) == 0x10) {
    png_set_swap(local_78);
  }
  if ((this->ColorType & 2) == 0) {
    if (param_1 < Gray) {
      png_set_gray_to_rgb(local_78);
    }
    if ((this->ColorType & 2) != 0) goto LAB_142691a6b;
  }
  else {
LAB_142691a6b:
    if (param_1 != Gray) goto LAB_142691a99;
    png_set_rgb_to_gray_fixed(local_78,2,-1,-1);
  }
  if (param_1 == Gray) {
    png_set_strip_alpha(local_78);
  }
LAB_142691a99:
  if ((*(int *)((longlong)&this->_padding_ + 4) == 0x10) && (param_2 == 8)) {
    png_set_scale_16(local_78);
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) < 9) && (param_2 == 0x10)) {
    png_set_expand_16(local_78);
  }
  png_set_interlace_handling(local_78);
  png_read_update_info(local_78,local_70);
  png_read_image(local_78,ppuVar3);
  png_read_end(local_78,local_70);
  pppVar4 = local_50;
  if (local_40 != (uchar **)0x0) {
    png_free(*local_50,local_40);
  }
  png_destroy_read_struct(pppVar4,local_48,(png_info_def **)0x0);
  *(ERGBFormat *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  return;
}

// user_error_fn @ 1426925f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPngImageWrapper::user_error_fn(png_struct_def *param_1,char *param_2)

{
  int iVar1;
  void *pvVar2;
  size_t sVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  undefined1 auStackY_198 [32];
  FString local_168;
  FString local_158;
  FPNGImageCRCError local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pvVar2 = png_get_error_ptr((png_struct_def_conflict *)param_1);
  local_138._padding_ = 0;
  if (param_2 == (char *)0x0) {
    local_138.Ptr = (wchar_t *)0x0;
    local_138.StringLength = 0;
  }
  else {
    sVar3 = strlen(param_2);
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_2,(int)sVar3,Yes);
  }
  ::FString::FString(&local_168,local_138.Ptr);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_168.Data.ArrayNum != 0) {
    FVar5.Data = local_168.Data.AllocatorInstance.Data;
  }
  ::FString::operator=((FString *)((longlong)pvVar2 + 0x58),(wchar_t *)FVar5.Data);
  if (1 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  iVar1 = ::FString::Find(&local_168,L"CRC error",9,IgnoreCase,FromStart,-1);
  if (iVar1 == -1) {
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    return;
  }
  pFVar4 = ::FString::FString(&local_158,&local_168);
  FPNGImageCRCError::FPNGImageCRCError(&local_148,pFVar4);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(&local_148,(ThrowInfo *)&_TI1_AUFPNGImageCRCError__);
}

// user_flush_data @ 142692780

void __cdecl FPngImageWrapper::user_flush_data(png_struct_def *param_1)

{
  return;
}

// user_free @ 142692790

void __cdecl FPngImageWrapper::user_free(png_struct_def *param_1,void *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_2 == (void *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("struct_ptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                       ,0x307,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FMemory::Free(param_2);
  return;
}

// user_malloc @ 1426927e0

void * __cdecl FPngImageWrapper::user_malloc(png_struct_def *param_1,ulong64 param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if (param_2 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("size > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\PngImageWrapper.cpp"
                       ,0x301,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  pvVar3 = FMemory::Malloc(param_2,0);
  return pvVar3;
}

// user_read_compressed @ 142692830

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FPngImageWrapper::user_read_compressed(png_struct_def *param_1,uchar *param_2,ulong64 param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  pvVar5 = png_get_io_ptr((png_struct_def_conflict *)param_1);
  if ((longlong)param_3 < 0) {
    if (2 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
    ::FString::operator=((FString *)((longlong)pvVar5 + 0x58),L"Invalid length in read_compressed");
    return;
  }
  uVar1 = *(ulonglong *)((longlong)pvVar5 + 0x68);
  uVar7 = uVar1 + param_3;
  bVar8 = -1 < (longlong)((uVar7 ^ uVar1) & (uVar7 ^ param_3));
  uVar6 = 0;
  if (bVar8) {
    uVar6 = uVar7;
  }
  if ((bVar8) && ((longlong)uVar6 <= *(longlong *)((longlong)pvVar5 + 0x30))) {
    uVar4 = 0;
    if ((longlong)uVar1 < *(longlong *)((longlong)pvVar5 + 0x30)) {
      uVar4 = (uint)(uVar1 >> 0x3f) ^ 1;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    memcpy(param_2,(void *)(*(longlong *)((longlong)pvVar5 + 0x28) + uVar1),param_3);
    uVar7 = 0;
    if (bVar8) {
      uVar7 = uVar6;
    }
    *(ulonglong *)((longlong)pvVar5 + 0x68) = uVar7;
  }
  else {
    if (2 < (byte)LogImageWrapper._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
    }
    ::FString::operator=
              ((FString *)((longlong)pvVar5 + 0x58),L"Invalid read position for CompressedData.");
  }
  return;
}

// user_warning_fn @ 1426929b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FPngImageWrapper::user_warning_fn(png_struct_def *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined1 auStack_168 [48];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  png_get_error_ptr((png_struct_def_conflict *)param_1);
  iVar1 = strncmp(param_2,"iCCP:",5);
  if (iVar1 == 0) {
    if ((byte)LogImageWrapper._0_1_ < 6) {
      return;
    }
    local_138._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar2 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_2,(int)sVar2,Yes);
    }
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  else {
    if ((byte)LogImageWrapper._0_1_ < 3) {
      return;
    }
    local_138._padding_ = 0;
    if (param_2 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar2 = strlen(param_2);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,param_2,(int)sVar2,Yes);
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// user_write_compressed @ 142692b30

void __cdecl
FPngImageWrapper::user_write_compressed(png_struct_def *param_1,uchar *param_2,ulong64 param_3)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  long64 lVar4;
  uint uVar5;
  
  pvVar3 = png_get_io_ptr((png_struct_def_conflict *)param_1);
  lVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,param_3,(ForAnyElementType *)((longlong)pvVar3 + 0x28),
                     (long64 *)((longlong)pvVar3 + 0x30),(long64 *)((longlong)pvVar3 + 0x38));
  uVar5 = 0;
  if (lVar4 < *(long64 *)((longlong)pvVar3 + 0x30)) {
    uVar5 = (uint)((ulonglong)lVar4 >> 0x3f) ^ 1;
  }
  if (uVar5 == 0) {
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
  memcpy(((ForAnyElementType *)((longlong)pvVar3 + 0x28))->Data + lVar4,param_2,param_3);
  return;
}

