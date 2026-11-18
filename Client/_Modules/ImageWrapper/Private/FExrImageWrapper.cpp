// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 7

// FExrImageWrapper @ 142664b70

FExrImageWrapper * __thiscall FExrImageWrapper::FExrImageWrapper(FExrImageWrapper *this)

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
  this->_padding_ = (longlong)&___7FExrImageWrapper__6B_;
  (this->FileChannelNames).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FileChannelNames).ArrayNum = 0;
  (this->FileChannelNames).ArrayMax = 0;
  return this;
}

// ~FExrImageWrapper @ 14266a150

void __thiscall FExrImageWrapper::~FExrImageWrapper(FExrImageWrapper *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<TUniquePtr<char_[0],TDefaultDelete<char_[0]>_>,int>
            ((TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)
             (this->FileChannelNames).AllocatorInstance.Data,(this->FileChannelNames).ArrayNum);
  pFVar1 = (this->FileChannelNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
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

// CanSetRawFormat @ 142682360

bool __thiscall
FExrImageWrapper::CanSetRawFormat(FExrImageWrapper *this,ERGBFormat param_1,int param_2)

{
  if (((param_1 - RGBAF & 0xfd) == 0) && ((param_2 - 0x10U & 0xffffffef) == 0)) {
    return true;
  }
  return false;
}

// Compress @ 1426850a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FExrImageWrapper::Compress(FExrImageWrapper *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  FScriptContainerElement FVar3;
  char cVar4;
  ForAnyElementType FVar5;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var6;
  code *pcVar7;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var8;
  float fVar9;
  ForAnyElementType FVar10;
  FExrImageWrapper *pFVar11;
  long64 lVar12;
  bool bVar13;
  uint uVar14;
  Compression CVar15;
  ChannelList *this_00;
  Channel *pCVar16;
  Slice *pSVar17;
  FColorSpace *pFVar18;
  ulonglong uVar19;
  ulong64 uVar20;
  longlong lVar21;
  __uint64 _Var22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  PixelType PVar27;
  ulonglong uVar28;
  FScriptContainerElement *pFVar29;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *pTVar30;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  undefined1 auStackY_268 [32];
  ushort local_218 [2];
  PixelType local_214;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_> local_210;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> *local_200;
  char **local_1f8;
  FExrImageWrapper *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> local_1d8;
  uint local_1c8;
  int local_1c4;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  Vec2<float> local_1a8;
  Vec2<float> local_1a0;
  Vec2<float> local_198;
  Vec2<float> local_190;
  Vec2<float> local_188;
  longlong local_180;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  OutputFile local_168;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_158;
  Header local_140;
  Channel local_128;
  Chromaticities local_118;
  Slice local_f8;
  OStream local_b8;
  long64 local_90;
  void *local_88;
  longlong lStack_80;
  longlong local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1f0 = this;
  local_1c4 = param_1;
  if ((this->_padding_ == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("RawData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0x147,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (this->_padding_ != 0) {
    return;
  }
  QueryPerformanceCounter(&local_178);
  local_158.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.ArrayNum = 0;
  uVar26 = 0;
  local_158.ArrayMax = 0;
  iVar25 = *(int *)((longlong)&this->_padding_ + 4);
  lVar21 = this->_padding_;
  uVar32 = 0;
  if (iVar25 == 8) {
    TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
              (&local_158,lVar21 * 2,Default);
    FVar5.Data = local_158.AllocatorInstance.Data;
    fVar9 = __real_3b808081;
    lVar21 = this->_padding_;
    uVar19 = uVar26;
    if (0 < lVar21) {
      do {
        uVar31 = uVar32;
        if ((longlong)uVar19 < this->_padding_) {
          uVar31 = (uint)(uVar19 >> 0x3f) ^ 1;
        }
        if ((uVar31 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_218[0] = 0;
        FGenericPlatformMath::StoreHalf
                  (local_218,(float)*(byte *)(this->_padding_ + uVar19) * fVar9);
        *(ushort *)(FVar5.Data + uVar19 * 2) = local_218[0];
        uVar19 = uVar19 + 1;
        lVar21 = this->_padding_;
      } while ((longlong)uVar19 < lVar21);
    }
    PVar27 = HALF;
    local_200 = &local_158;
  }
  else {
    local_200 = (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&this->_padding_;
    PVar27 = (iVar25 != 0x10) + HALF;
  }
  cVar4 = (char)this->_padding_;
  lVar24 = 4;
  if (cVar4 == '\0') {
LAB_14268527b:
    local_1f8 = cChannelNamesRGBA;
  }
  else {
    if (cVar4 != '\x01') {
      if (cVar4 != '\x02') {
        if (cVar4 == '\x03') goto LAB_14268527b;
        if (cVar4 != '\x05') {
          local_1f8 = (char **)0x0;
          goto LAB_142685289;
        }
      }
      local_1f8 = cChannelNamesGray;
      uVar32 = 1;
      goto LAB_142685289;
    }
    local_1f8 = cChannelNamesBGRA;
  }
  uVar32 = 4;
LAB_142685289:
  uVar19 = (ulonglong)uVar32;
  local_214 = PVar27;
  local_1c0 = uVar19;
  if (((longlong)*(int *)((longlong)&this->_padding_ + 4) * this->_padding_ * this->_padding_ *
       uVar19 + lVar21 * -8 != 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(int64)ChannelCount * Width * Height * BitDepth == RawData.Num() * 8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0x16c,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_210.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_210.ArrayNum = 0;
  local_210.ArrayMax = 0;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_210,uVar32,Default);
  if (uVar32 == 0) {
    local_1e8 = 4;
    if (PVar27 == HALF) {
      local_1e8 = 2;
    }
  }
  else {
    uVar28 = uVar26;
    uVar33 = uVar26;
    local_1e8 = lVar24;
    if (PVar27 == HALF) {
      lVar24 = 2;
      local_1e8 = lVar24;
    }
    do {
      uVar31 = (uint)uVar33;
      uVar32 = 0;
      if ((int)uVar31 < local_210.ArrayNum) {
        uVar32 = ~uVar31 >> 0x1f;
      }
      if ((uVar32 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar29 = local_210.AllocatorInstance.Data + uVar28;
      uVar20 = lVar24 * this->_padding_ * this->_padding_;
      pFVar1 = pFVar29 + 8;
                    /* WARNING: Load size is inaccurate */
      FVar5.Data = *pFVar1;
      if (uVar20 - (longlong)FVar5.Data == 0 || (longlong)uVar20 < (longlong)FVar5.Data) {
        if ((longlong)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar20);
        }
        if ((longlong)uVar20 < (longlong)FVar5.Data) {
          lVar21 = (longlong)FVar5.Data - uVar20;
          if (((((uint)(uVar20 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar21 >> 0x3f) ^ 1)) == 0) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar13)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar24 = local_1e8;
          if (lVar21 != 0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
            if (*pFVar1 + (-uVar20 - lVar21) != (FScriptContainerElement *)0x0) {
              memmove(*pFVar29 + uVar20,*pFVar29 + uVar20 + lVar21,
                      (size_t)(*pFVar1 + (-uVar20 - lVar21)));
            }
                    /* WARNING: Load size is inaccurate */
            *(FScriptContainerElement **)pFVar1 = *pFVar1 + -lVar21;
                    /* WARNING: Load size is inaccurate */
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                      (1,1,(ForAnyElementType *)pFVar29,(long64)*pFVar1,(long64 *)(pFVar29 + 0x10));
            lVar24 = local_1e8;
          }
        }
      }
      else {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,uVar20 - (longlong)FVar5.Data,(ForAnyElementType *)pFVar29,(long64 *)pFVar1,
                   (long64 *)(pFVar29 + 0x10));
      }
      uVar26 = uVar26 + 1;
      this = local_1f0;
      uVar19 = local_1c0;
      uVar28 = uVar28 + 0x18;
      uVar33 = (ulonglong)(uVar31 + 1);
      PVar27 = local_214;
    } while ((longlong)uVar26 < (longlong)local_1c0);
  }
  lVar21 = 0;
  local_1e0 = 0;
  if (0 < local_200->ArrayNum) {
    lVar24 = 4;
    if (PVar27 == HALF) {
      lVar24 = 2;
    }
    local_1b8 = 0;
    pTVar30 = local_200;
    local_180 = lVar24;
    do {
      uVar32 = 0;
      if (uVar19 != 0) {
        lVar24 = 0;
        local_1b0 = uVar19;
        do {
          iVar25 = 0;
          local_1c8 = ~uVar32 >> 0x1f;
          lVar23 = local_1e0 - lVar21;
          do {
            uVar31 = local_1c8;
            uVar14 = 0;
            if (lVar21 < pTVar30->ArrayNum) {
              uVar14 = (uint)((ulonglong)lVar21 >> 0x3f) ^ 1;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar3 = (pTVar30->AllocatorInstance).Data[lVar21];
            uVar14 = 0;
            if ((int)uVar32 < local_210.ArrayNum) {
              uVar14 = uVar31;
            }
            if ((uVar14 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            FVar10.Data = local_210.AllocatorInstance.Data;
            uVar31 = 0;
            if (iVar25 + local_1e0 < *(longlong *)(local_210.AllocatorInstance.Data + lVar24 + 8)) {
              uVar31 = (uint)((ulonglong)(iVar25 + local_1e0) >> 0x3f) ^ 1;
            }
            if ((uVar31 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(FScriptContainerElement *)(*(longlong *)(FVar10.Data + lVar24) + lVar23 + lVar21) =
                 FVar3;
            iVar25 = iVar25 + 1;
            lVar21 = lVar21 + 1;
            pTVar30 = local_200;
          } while (local_1b8 + lVar23 + lVar21 < local_1e8);
          uVar32 = uVar32 + 1;
          lVar24 = lVar24 + 0x18;
          local_1b0 = local_1b0 - 1;
        } while (local_1b0 != 0);
        local_1b0 = 0;
        lVar24 = local_180;
        uVar19 = local_1c0;
      }
      local_1e0 = local_1e0 + lVar24;
      local_1b8 = local_1b8 - lVar24;
    } while (lVar21 < pTVar30->ArrayNum);
  }
  pFVar11 = local_1f0;
  local_1a8.x = 0.0;
  local_1a8.y = 0.0;
  lVar21 = 0;
  CVar15 = ZIP_COMPRESSION;
  if (local_1c4 == 1) {
    CVar15 = NO_COMPRESSION;
  }
  Imf_3_3::Header::Header
            (&local_140,(int)local_1f0->_padding_,(int)local_1f0->_padding_,__real_3f800000,
             &local_1a8,__real_3f800000,INCREASING_Y,CVar15);
  local_1d8._Myhead = (_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *)0x0;
  local_1d8._Mysize = 0;
  local_1d8._Myhead = ::operator_new(0x158);
  PVar27 = local_214;
  (local_1d8._Myhead)->_Left = local_1d8._Myhead;
  (local_1d8._Myhead)->_Parent = local_1d8._Myhead;
  (local_1d8._Myhead)->_Right = local_1d8._Myhead;
  (local_1d8._Myhead)->_Color = '\x01';
  (local_1d8._Myhead)->_Isnil = '\x01';
  uVar32 = 0;
  if (uVar19 != 0) {
    lVar24 = 0;
    local_1f0 = (FExrImageWrapper *)&DAT_00000004;
    if (local_214 == HALF) {
      local_1f0 = (FExrImageWrapper *)&DAT_00000002;
    }
    do {
      this_00 = Imf_3_3::Header::channels(&local_140);
      pCVar16 = (Channel *)Imf_3_3::Channel::Channel(&local_128,PVar27,1,1,false);
      Imf_3_3::ChannelList::insert(this_00,local_1f8[lVar24],pCVar16);
      _Var22 = (longlong)local_1f0 * pFVar11->_padding_;
      uVar31 = 0;
      if ((int)uVar32 < local_210.ArrayNum) {
        uVar31 = ~uVar32 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pSVar17 = (Slice *)Imf_3_3::Slice::Slice
                                   (&local_f8,PVar27,
                                    *(char **)(local_210.AllocatorInstance.Data + lVar21),
                                    (__uint64)local_1f0,_Var22,1,1,0.0,false,false);
      Imf_3_3::FrameBuffer::insert((FrameBuffer *)&local_1d8,local_1f8[lVar24],pSVar17);
      uVar32 = uVar32 + 1;
      lVar24 = lVar24 + 1;
      lVar21 = lVar21 + 0x18;
    } while (lVar24 < (longlong)uVar19);
  }
  pFVar18 = UE::Color::FColorSpace::GetWorking();
  local_188.x = (float)(pFVar18->Chromaticities).Elements[0].field0_0x0._s_0.X;
  local_188.y = (float)(pFVar18->Chromaticities).Elements[0].field0_0x0._s_0.Y;
  local_190.x = (float)(pFVar18->Chromaticities).Elements[1].field0_0x0._s_0.X;
  local_190.y = (float)(pFVar18->Chromaticities).Elements[1].field0_0x0._s_0.Y;
  local_198.x = (float)(pFVar18->Chromaticities).Elements[2].field0_0x0._s_0.X;
  local_198.y = (float)(pFVar18->Chromaticities).Elements[2].field0_0x0._s_0.Y;
  local_1a0.x = (float)(pFVar18->Chromaticities).Elements[3].field0_0x0._s_0.X;
  local_1a0.y = (float)(pFVar18->Chromaticities).Elements[3].field0_0x0._s_0.Y;
  Imf_3_3::Chromaticities::Chromaticities(&local_118,&local_188,&local_190,&local_198,&local_1a0);
  Imf_3_3::addChromaticities(&local_140,&local_118);
  Imf_3_3::OStream::OStream(&local_b8,"");
  local_b8._padding_ = (longlong)&___7FMemFileOut__6B_;
  local_90 = 0;
  local_88 = (void *)0x0;
  lStack_80 = 0;
  local_78 = 0;
  iVar25 = FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  Imf_3_3::OutputFile::OutputFile(&local_168,&local_b8,&local_140,iVar25);
  Imf_3_3::OutputFile::setFrameBuffer(&local_168,(FrameBuffer *)&local_1d8);
  Imf_3_3::OutputFile::writePixels(&local_168,(int)pFVar11->_padding_);
  lVar12 = local_90;
  Imf_3_3::OutputFile::~OutputFile(&local_168);
  plVar2 = &pFVar11->_padding_;
  if ((void **)plVar2 != &local_88) {
    if ((void *)*plVar2 != (void *)0x0) {
      FMemory::Free((void *)*plVar2);
    }
    *plVar2 = (longlong)local_88;
    local_88 = (void *)0x0;
    pFVar11->_padding_ = lStack_80;
    pFVar11->_padding_ = local_78;
    lStack_80 = 0;
    local_78 = 0;
  }
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNum
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&pFVar11->_padding_,lVar12,Default
            );
  QueryPerformanceCounter(&local_170);
  if (5 < (byte)LogImageWrapper._0_1_) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
  }
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  Imf_3_3::OStream::~OStream(&local_b8);
  cVar4 = (local_1d8._Myhead)->_Parent->_Isnil;
  p_Var8 = (local_1d8._Myhead)->_Parent;
  while (cVar4 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
              (&local_1d8,
               (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_> *
               )&local_1d8,p_Var8->_Right);
    p_Var6 = p_Var8->_Left;
    ::operator_delete(p_Var8,0x158);
    p_Var8 = p_Var6;
    cVar4 = p_Var6->_Isnil;
  }
  ::operator_delete(local_1d8._Myhead,0x158);
  Imf_3_3::Header::~Header(&local_140);
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_210.AllocatorInstance.Data,
             local_210.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_210.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    FMemory::Free(local_210.AllocatorInstance.Data);
  }
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  return;
}

// GetSupportedRawFormat @ 14268be50

Type __thiscall FExrImageWrapper::GetSupportedRawFormat(FExrImageWrapper *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  Type TVar3;
  
  switch(param_1) {
  case G8:
    return R16F;
  case BGRA8:
  case BGRE8:
    return RGBA16F;
  case RGBA16:
  case G16:
    return RGBA32F;
  case RGBA16F:
  case RGBA32F:
  case R16F:
  case R32F:
    return param_1;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                     ,0xf1,L"");
  if (!bVar2) {
    return BGRA8;
  }
  pcVar1 = (code *)swi(3);
  TVar3 = (*pcVar1)();
  return TVar3;
}

// SetCompressed @ 14268dab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall FExrImageWrapper::SetCompressed(FExrImageWrapper *this,void *param_1,long64 param_2)

{
  char *_Str;
  ulong64 _Size;
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*> *p_Var9;
  longlong *plVar10;
  bool bVar11;
  undefined1 uVar12;
  bool bVar13;
  int iVar14;
  undefined4 uVar15;
  Header *pHVar16;
  ChannelList *pCVar17;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*> *p_Var18;
  Box<Imath_3_1::Vec2<int>_> *pBVar19;
  Iterator IVar20;
  size_t sVar21;
  void *_Dst;
  int iVar22;
  undefined1 auStackY_298 [32];
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_> local_248;
  uint local_238;
  void *local_230;
  longlong *local_228;
  FExrImageWrapper *local_220;
  Header local_218;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_> *local_200;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_> *local_1f8;
  undefined1 local_1f0 [24];
  longlong *local_1d8;
  exception local_1c0;
  IStream local_1a8;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_298;
  iVar22 = 0;
  local_238 = 0;
  local_220 = this;
  if ((param_1 == (void *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCompressedData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0xf8,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  if ((param_2 < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCompressedSize > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0xf9,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    uVar12 = (*pcVar8)();
    return (bool)uVar12;
  }
  DestructItems<TUniquePtr<char_[0],TDefaultDelete<char_[0]>_>,int>
            ((TUniquePtr<char_[0],TDefaultDelete<char_[0]>_> *)
             (this->FileChannelNames).AllocatorInstance.Data,(this->FileChannelNames).ArrayNum);
  (this->FileChannelNames).ArrayNum = 0;
  piVar1 = &(this->FileChannelNames).ArrayMax;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FileChannelNames).AllocatorInstance,0,piVar1);
  }
  if (((3 < (ulonglong)param_2) && (*(int *)param_1 == 0x1312f76)) &&
     (bVar11 = FImageWrapperBase::SetCompressed((FImageWrapperBase *)this,param_1,param_2), bVar11))
  {
    lVar4 = this->_padding_;
    lVar5 = this->_padding_;
    Imf_3_3::IStream::IStream(&local_1a8,"");
    local_1a8._padding_ = (longlong)&___7FMemFileIn__6B_;
    local_170 = 0;
    local_180 = lVar5;
    if (lVar4 < 0) {
      local_178 = 0;
      std::exception::exception(&local_1c0);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_1c0,(ThrowInfo *)&_TI1_AVexception_std__);
    }
    local_178 = lVar4;
    iVar14 = Imf_3_3::globalThreadCount();
    Imf_3_3::InputFile::InputFile((InputFile *)local_1f0,&local_1a8,iVar14);
    pHVar16 = Imf_3_3::InputFile::header((InputFile *)local_1f0);
    Imf_3_3::Header::Header(&local_218,pHVar16);
    pCVar17 = Imf_3_3::Header::channels(&local_218);
    local_248._Myhead = (_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*> *)0x0;
    local_248._Mysize = 0;
    local_200 = &local_248;
    local_1f8 = &local_248;
    local_248._Myhead = ::operator_new(0x130);
    (local_248._Myhead)->_Left = local_248._Myhead;
    (local_248._Myhead)->_Parent = local_248._Myhead;
    (local_248._Myhead)->_Right = local_248._Myhead;
    (local_248._Myhead)->_Color = '\x01';
    (local_248._Myhead)->_Isnil = '\x01';
    p_Var18 = std::
              _Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Channel,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>,0>_>
              ::_Copy_nodes<0>((_Tree<std::_Tmap_traits<Imf_3_3::Name,Imf_3_3::Channel,std::less<Imf_3_3::Name>,std::allocator<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>,0>_>
                                *)&local_248,
                               *(_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*>
                                 **)(*(longlong *)&pCVar17->_map + 8),local_248._Myhead);
    (local_248._Myhead)->_Parent = p_Var18;
    local_248._Mysize = *(ulong64 *)&(pCVar17->_map).field_0x8;
    p_Var18 = (local_248._Myhead)->_Parent;
    if (p_Var18->_Isnil == '\0') {
      cVar2 = p_Var18->_Left->_Isnil;
      p_Var9 = p_Var18->_Left;
      while (cVar2 == '\0') {
        cVar2 = p_Var9->_Left->_Isnil;
        p_Var18 = p_Var9;
        p_Var9 = p_Var9->_Left;
      }
      (local_248._Myhead)->_Left = p_Var18;
      p_Var18 = (local_248._Myhead)->_Parent->_Right;
      cVar2 = p_Var18->_Isnil;
      p_Var9 = (local_248._Myhead)->_Parent;
      while (cVar2 == '\0') {
        cVar2 = p_Var18->_Right->_Isnil;
        p_Var9 = p_Var18;
        p_Var18 = p_Var18->_Right;
      }
      (local_248._Myhead)->_Right = p_Var9;
    }
    else {
      (local_248._Myhead)->_Left = local_248._Myhead;
      (local_248._Myhead)->_Right = local_248._Myhead;
    }
    local_1f8 = (_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_>
                 *)0x0;
    pBVar19 = Imf_3_3::Header::dataWindow(&local_218);
    iVar14 = (pBVar19->min).y;
    iVar3 = (pBVar19->max).y;
    this->_padding_ = (longlong)(((pBVar19->max).x - (pBVar19->min).x) + 1);
    this->_padding_ = (longlong)((iVar3 - iVar14) + 1);
    bVar11 = true;
    Imf_3_3::ChannelList::begin((ChannelList *)&local_248);
    while (IVar20 = Imf_3_3::ChannelList::end((ChannelList *)&local_248),
          local_228 != *(longlong **)IVar20._i) {
      iVar22 = iVar22 + 1;
      if ((bVar11) && (*(int *)((longlong)local_228 + 0x11c) == 1)) {
        bVar11 = true;
      }
      else {
        bVar11 = false;
      }
      _Str = (char *)((longlong)local_228 + 0x1c);
      sVar21 = strlen(_Str);
      _Size = sVar21 + 1;
      _Dst = operator_new__(_Size);
      if (_Dst == (void *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        memset(_Dst,0,_Size);
      }
      local_238 = local_238 | 3;
      local_230 = _Dst;
      memcpy(_Dst,_Str,_Size);
      pFVar6 = (this->FileChannelNames).AllocatorInstance.Data;
      piVar1 = &(this->FileChannelNames).ArrayMax;
      if (((pFVar6 <= (FScriptContainerElement *)&local_230) &&
          ((FScriptContainerElement *)&local_230 < pFVar6 + (longlong)*piVar1 * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      iVar14 = (this->FileChannelNames).ArrayNum;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(this->FileChannelNames).AllocatorInstance,piVar1);
      }
      (this->FileChannelNames).ArrayNum = iVar14 + 1;
      *(void **)((this->FileChannelNames).AllocatorInstance.Data + (longlong)iVar14 * 8) = local_230
      ;
      local_230 = (void *)0x0;
      operator_delete__((void *)0x0);
      plVar7 = (longlong *)local_228[2];
      if (*(char *)((longlong)plVar7 + 0x19) == '\0') {
        cVar2 = *(char *)(*plVar7 + 0x19);
        local_228 = plVar7;
        plVar7 = (longlong *)*plVar7;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*plVar7 + 0x19);
          local_228 = plVar7;
          plVar7 = (longlong *)*plVar7;
        }
      }
      else {
        cVar2 = *(char *)(local_228[1] + 0x19);
        plVar10 = (longlong *)local_228[1];
        plVar7 = local_228;
        while ((local_228 = plVar10, cVar2 == '\0' && (plVar7 == (longlong *)local_228[2]))) {
          cVar2 = *(char *)(local_228[1] + 0x19);
          plVar10 = (longlong *)local_228[1];
          plVar7 = local_228;
        }
      }
    }
    if (iVar22 == 0) {
      ::FString::operator=((FString *)&this->_padding_,L"EXR has no channels");
      std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_>::
      _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*>_>_>
                (&local_248,
                 (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*>_>
                  *)&local_248);
      Imf_3_3::Header::~Header(&local_218);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_1d8 + 1;
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_1d8)(local_1d8);
          LOCK();
          piVar1 = (int *)((longlong)local_1d8 + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*local_1d8 + 8))(local_1d8);
          }
        }
      }
      if ((longlong *)local_1f0._8_8_ != (longlong *)0x0) {
        LOCK();
        plVar7 = (longlong *)(local_1f0._8_8_ + 8);
        lVar4 = *plVar7;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (*(code *)**(undefined8 **)local_1f0._8_8_)(local_1f0._8_8_);
          LOCK();
          piVar1 = (int *)(local_1f0._8_8_ + 0xc);
          iVar22 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar22 == 1) {
            (**(code **)(*(longlong *)local_1f0._8_8_ + 8))(local_1f0._8_8_);
          }
        }
      }
      Imf_3_3::IStream::~IStream(&local_1a8);
      return false;
    }
    uVar15 = 0x10;
    if (!bVar11) {
      uVar15 = 0x20;
    }
    *(undefined4 *)((longlong)&this->_padding_ + 4) = uVar15;
    uVar12 = 5;
    if (iVar22 != 1) {
      uVar12 = 3;
    }
    *(undefined1 *)&this->_padding_ = uVar12;
    std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>_>_>::
    _Erase_head<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*>_>_>
              (&local_248,
               (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Channel>,void_*>_>
                *)&local_248);
    Imf_3_3::Header::~Header(&local_218);
    if (local_1d8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1d8 + 1;
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_1d8)(local_1d8);
        LOCK();
        piVar1 = (int *)((longlong)local_1d8 + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*local_1d8 + 8))(local_1d8);
        }
      }
    }
    if ((longlong *)local_1f0._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar7 = (longlong *)(local_1f0._8_8_ + 8);
      lVar4 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (*(code *)**(undefined8 **)local_1f0._8_8_)(local_1f0._8_8_);
        LOCK();
        piVar1 = (int *)(local_1f0._8_8_ + 0xc);
        iVar22 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar22 == 1) {
          (**(code **)(*(longlong *)local_1f0._8_8_ + 8))(local_1f0._8_8_);
        }
      }
    }
    Imf_3_3::IStream::~IStream(&local_1a8);
    bVar11 = FImageCoreUtils::IsImageImportPossible(this->_padding_,this->_padding_);
    if (bVar11) {
      return true;
    }
    ::FString::operator=((FString *)&this->_padding_,L"Image dimensions are not possible to import")
    ;
  }
  return false;
}

// Uncompress @ 14268f0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FExrImageWrapper::Uncompress(FExrImageWrapper *this,ERGBFormat param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  float fVar4;
  char cVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  ForAnyElementType FVar10;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var11;
  code *pcVar12;
  _Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *p_Var13;
  float fVar14;
  float fVar15;
  FExrImageWrapper *pFVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  Header *pHVar20;
  Box<Imath_3_1::Vec2<int>_> *pBVar21;
  size_t sVar22;
  Slice *pSVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  longlong lVar26;
  float *pfVar27;
  uint uVar28;
  ulong64 uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  longlong lVar32;
  ushort *puVar33;
  longlong lVar34;
  ushort uVar35;
  ForAnyElementType FVar36;
  __uint64 _Var37;
  longlong lVar38;
  uint uVar39;
  float fVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined1 auStackY_808 [32];
  ForAnyElementType local_7b8;
  int local_7b0;
  int local_7ac;
  ERGBFormat local_7a8;
  int local_7a4;
  char *local_7a0;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_> local_798;
  FString local_788;
  int local_778;
  int local_774;
  uint local_770;
  PixelType local_76c;
  _Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_> local_768;
  int local_758;
  FExrImageWrapper *local_750;
  FString local_748;
  int local_738;
  FExrImageWrapper *local_730;
  undefined1 local_728 [24];
  longlong *local_710;
  Header local_700;
  exception local_6e8;
  Slice local_6d0;
  IStream local_698;
  longlong local_670;
  longlong local_668;
  undefined8 local_660;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_538;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_418;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_2f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  char *local_b8 [4];
  longlong alStack_98 [12];
  
  alStack_98[4] = __security_cookie.value ^ (ulonglong)auStackY_808;
  local_7a8 = param_1;
  local_7a4 = param_2;
  local_750 = this;
  local_730 = this;
  if ((this->_padding_ == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CompressedData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0x1ae,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if (((this->_padding_ != 0) && (param_1 == (ERGBFormat)this->_padding_)) &&
     (local_7a4 == *(int *)((longlong)&this->_padding_ + 4))) {
    return;
  }
  uVar31 = 0;
  local_788.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_788.Data.ArrayNum = 0;
  local_788.Data.ArrayMax = 0;
  if (local_7a4 == 0x10) {
    if ((param_1 & ~Gray) == RGBA) {
      ::FString::PrintfImpl
                (&local_748,
                 L"Usage of 16-bit ERGBFormat::%s raw format for decompressing float EXR channels is deprecated, please use ERGBFormat::%sF instead."
                );
      if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_788.Data.AllocatorInstance.Data);
      }
      local_788.Data.AllocatorInstance.Data = local_748.Data.AllocatorInstance.Data;
      local_748.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_788.Data.ArrayNum = local_748.Data.ArrayNum;
      local_788.Data.ArrayMax = local_748.Data.ArrayMax;
      local_748.Data.ArrayNum = 0;
      local_748.Data.ArrayMax = 0;
      goto LAB_14268f20a;
    }
LAB_14268f1ef:
    if ((param_1 - RGBAF & 0xfd) != 0) {
      pwVar25 = L"Unsupported RGB format, expected ERGBFormat::RGBAF or ERGBFormat::GrayF.";
      goto LAB_14268f1fd;
    }
  }
  else {
    if (local_7a4 == 0x20) goto LAB_14268f1ef;
    pwVar25 = L"Unsupported bit depth, expected 16 or 32.";
LAB_14268f1fd:
    ::FString::operator=(&local_788,pwVar25);
LAB_14268f20a:
    if (1 < local_788.Data.ArrayNum) {
      if (1 < (byte)LogImageWrapper._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      }
      FVar36.Data = (FScriptContainerElement *)L"";
      if (local_788.Data.ArrayNum != 0) {
        FVar36.Data = local_788.Data.AllocatorInstance.Data;
      }
      ::FString::operator=((FString *)&this->_padding_,(wchar_t *)FVar36.Data);
      goto LAB_142690255;
    }
  }
  local_b8[0] = (char *)0x0;
  local_b8[1] = (char *)0x0;
  local_b8[2] = (char *)0x0;
  local_b8[3] = (char *)0x0;
  iVar18 = (this->FileChannelNames).ArrayNum;
  if (param_1 == GrayF) {
    if ((iVar18 != 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("FileChannelNames.Num() == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                            ,0x1d8,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (((this->FileChannelNames).ArrayNum < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    local_b8[0] = *(char **)(this->FileChannelNames).AllocatorInstance.Data;
    uVar28 = 1;
  }
  else {
    local_7b8.Data = (FScriptContainerElement *)0x0;
    local_7b0 = 0;
    local_7ac = 0;
    uVar30 = uVar31;
    uVar24 = uVar31;
    if (0 < iVar18) {
      do {
        uVar39 = (uint)uVar24;
        uVar28 = 0;
        if ((int)uVar39 < (this->FileChannelNames).ArrayNum) {
          uVar28 = ~uVar39 >> 0x1f;
        }
        if ((uVar28 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        local_7a0 = *(char **)((this->FileChannelNames).AllocatorInstance.Data + uVar30);
        if (((local_7a0 == (char *)0x0) || (*local_7a0 == '\0')) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Str && *Str",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                                ,0x1e9,L""), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar6 = local_7a0;
        sVar22 = strlen(local_7a0);
        iVar18 = toupper((int)pcVar6[sVar22 - 1]);
        uVar24 = uVar31;
        do {
          if (((char)iVar18 == (&s_RGBA)[uVar24]) && (local_b8[uVar24] == (char *)0x0)) {
            local_b8[uVar24] = local_7a0;
            local_7a0 = (char *)0x0;
            goto LAB_14268f494;
          }
          uVar24 = uVar24 + 1;
        } while ((longlong)uVar24 < 4);
        if (local_7a0 != (char *)0x0) {
          if (((local_7b8.Data <= (FScriptContainerElement *)&local_7a0) &&
              ((FScriptContainerElement *)&local_7a0 < local_7b8.Data + (longlong)local_7ac * 8)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          if (local_7b0 == local_7ac) {
            local_7b0 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,&local_7b8,&local_7ac);
          }
          *(char **)(local_7b8.Data + (longlong)local_7b0 * 8) = local_7a0;
          local_7b0 = local_7b0 + 1;
        }
LAB_14268f494:
        uVar30 = uVar30 + 8;
        uVar24 = (ulonglong)(uVar39 + 1);
      } while ((int)(uVar39 + 1) < (this->FileChannelNames).ArrayNum);
    }
    if (local_b8[0] == (char *)0x0) {
      if (local_7b0 == 0) {
        local_b8[0] = "default.R";
      }
      else {
        if ((local_7b0 < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar6 = *(char **)(local_7b8.Data + (longlong)local_7b0 * 8 + -8);
        iVar18 = (local_7b0 - (local_7b0 + -1)) + -1;
        if (iVar18 != 0) {
          memmove(local_7b8.Data + (longlong)(local_7b0 + -1) * 8,
                  local_7b8.Data + (longlong)(local_7b0 + -1) * 8 + 8,(longlong)iVar18 << 3);
        }
        local_7b0 = local_7b0 + -1;
        local_b8[0] = pcVar6;
      }
    }
    pcVar6 = local_b8[0];
    if (local_b8[1] == (char *)0x0) {
      if (local_7b0 == 0) {
        local_b8[1] = "default.G";
      }
      else {
        if ((local_7b0 < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar7 = *(char **)(local_7b8.Data + (longlong)local_7b0 * 8 + -8);
        iVar18 = (local_7b0 - (local_7b0 + -1)) + -1;
        if (iVar18 != 0) {
          memmove(local_7b8.Data + (longlong)(local_7b0 + -1) * 8,
                  local_7b8.Data + (longlong)(local_7b0 + -1) * 8 + 8,(longlong)iVar18 << 3);
        }
        local_7b0 = local_7b0 + -1;
        local_b8[1] = pcVar7;
      }
    }
    pcVar7 = local_b8[1];
    if (local_b8[2] == (char *)0x0) {
      if (local_7b0 == 0) {
        local_b8[2] = "default.B";
      }
      else {
        if ((local_7b0 < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar8 = *(char **)(local_7b8.Data + (longlong)local_7b0 * 8 + -8);
        iVar18 = (local_7b0 - (local_7b0 + -1)) + -1;
        if (iVar18 != 0) {
          memmove(local_7b8.Data + (longlong)(local_7b0 + -1) * 8,
                  local_7b8.Data + (longlong)(local_7b0 + -1) * 8 + 8,(longlong)iVar18 << 3);
        }
        local_7b0 = local_7b0 + -1;
        local_b8[2] = pcVar8;
      }
    }
    pcVar8 = local_b8[2];
    if (local_b8[3] == (char *)0x0) {
      if (local_7b0 == 0) {
        local_b8[3] = "default.A";
      }
      else {
        if ((local_7b0 < 1) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        pcVar9 = *(char **)(local_7b8.Data + (longlong)local_7b0 * 8 + -8);
        iVar18 = (local_7b0 - (local_7b0 + -1)) + -1;
        if (iVar18 != 0) {
          memmove(local_7b8.Data + (longlong)(local_7b0 + -1) * 8,
                  local_7b8.Data + (longlong)(local_7b0 + -1) * 8 + 8,(longlong)iVar18 << 3);
        }
        local_7b0 = local_7b0 + -1;
        local_b8[3] = pcVar9;
      }
    }
    pcVar9 = local_b8[3];
    if (5 < (byte)LogImageWrapper._0_1_) {
      local_1d8._padding_ = 0;
      if (local_b8[3] == (char *)0x0) {
        local_1d8.Ptr = (wchar_t *)0x0;
        local_1d8.StringLength = 0;
      }
      else {
        sVar22 = strlen(local_b8[3]);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_1d8,pcVar9,(int)sVar22,Yes)
        ;
      }
      local_2f8._padding_ = 0;
      if (pcVar8 == (char *)0x0) {
        local_2f8.Ptr = (wchar_t *)0x0;
        local_2f8.StringLength = 0;
      }
      else {
        sVar22 = strlen(pcVar8);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_2f8,pcVar8,(int)sVar22,Yes)
        ;
      }
      local_418._padding_ = 0;
      if (pcVar7 == (char *)0x0) {
        local_418.Ptr = (wchar_t *)0x0;
        local_418.StringLength = 0;
      }
      else {
        sVar22 = strlen(pcVar7);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_418,pcVar7,(int)sVar22,Yes)
        ;
      }
      local_538._padding_ = 0;
      if (pcVar6 == (char *)0x0) {
        local_538.Ptr = (wchar_t *)0x0;
        local_538.StringLength = 0;
      }
      else {
        sVar22 = strlen(pcVar6);
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_538,pcVar6,(int)sVar22,Yes)
        ;
      }
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImageWrapper);
      if ((void *)local_538._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_538._padding_);
      }
      if ((void *)local_418._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_418._padding_);
      }
      if ((void *)local_2f8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_2f8._padding_);
      }
      if ((void *)local_1d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_1d8._padding_);
      }
    }
    if (local_7b8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7b8.Data);
    }
    uVar28 = 4;
  }
  uVar39 = 0;
  local_798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_798.ArrayNum = 0;
  local_798.ArrayMax = 0;
  local_770 = uVar28;
  TArray<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,TSizedDefaultAllocator<32>_>::SetNum
            (&local_798,uVar28,Default);
  local_76c = (local_7a4 != 0x10) + HALF;
  local_768._Myhead = (_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*> *)0x0;
  local_768._Mysize = 0;
  local_768._Myhead = ::operator_new(0x158);
  (local_768._Myhead)->_Left = local_768._Myhead;
  (local_768._Myhead)->_Parent = local_768._Myhead;
  (local_768._Myhead)->_Right = local_768._Myhead;
  (local_768._Myhead)->_Color = '\x01';
  (local_768._Myhead)->_Isnil = '\x01';
  lVar32 = this->_padding_;
  lVar26 = this->_padding_;
  Imf_3_3::IStream::IStream(&local_698,"");
  local_698._padding_ = (longlong)&___7FMemFileIn__6B_;
  local_660 = 0;
  local_670 = lVar26;
  if (lVar32 < 0) {
    local_668 = 0;
    std::exception::exception(&local_6e8);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(&local_6e8,(ThrowInfo *)&_TI1_AVexception_std__);
  }
  local_668 = lVar32;
  iVar18 = Imf_3_3::globalThreadCount();
  Imf_3_3::InputFile::InputFile((InputFile *)local_728,&local_698,iVar18);
  pHVar20 = Imf_3_3::InputFile::header((InputFile *)local_728);
  Imf_3_3::Header::Header(&local_700,pHVar20);
  pBVar21 = Imf_3_3::Header::dataWindow(&local_700);
  local_758 = (pBVar21->min).x;
  iVar18 = (pBVar21->min).y;
  local_738 = (pBVar21->max).x;
  iVar19 = (pBVar21->max).y;
  uVar43 = (undefined4)__real_3ff0000000000000;
  uVar31 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  local_778 = iVar18;
  local_774 = iVar19;
  for (; _Var37 = 4, (int)uVar39 < (int)uVar28; uVar39 = uVar39 + 1) {
    uVar28 = 0;
    if ((int)uVar39 < local_798.ArrayNum) {
      uVar28 = ~uVar39 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar3 = local_798.AllocatorInstance.Data + (longlong)(int)uVar39 * 0x18;
    if (local_7a4 == 0x10) {
      _Var37 = 2;
    }
    uVar29 = local_750->_padding_ * local_750->_padding_ * _Var37;
                    /* WARNING: Load size is inaccurate */
    FVar10.Data = pFVar3[8];
    if (uVar29 - (longlong)FVar10.Data == 0 || (longlong)uVar29 < (longlong)FVar10.Data) {
      if ((longlong)uVar29 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar29);
      }
      if ((longlong)uVar29 < (longlong)FVar10.Data) {
        lVar32 = (longlong)FVar10.Data - uVar29;
        if (((((uint)(uVar29 >> 0x3f) ^ 1) & ((uint)((ulonglong)lVar32 >> 0x3f) ^ 1)) == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
        iVar18 = local_778;
        if (lVar32 != 0) {
                    /* WARNING: Load size is inaccurate */
          if (pFVar3[8] + (-uVar29 - lVar32) != (FScriptContainerElement *)0x0) {
            memmove(*(FScriptContainerElement **)&pFVar3->field_0x0 + uVar29,
                    *(FScriptContainerElement **)&pFVar3->field_0x0 + uVar29 + lVar32,
                    (size_t)(pFVar3[8] + (-uVar29 - lVar32)));
          }
                    /* WARNING: Load size is inaccurate */
          FVar10.Data = pFVar3[8];
          *(FScriptContainerElement **)(pFVar3 + 8) = FVar10.Data + -lVar32;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                    (1,1,(ForAnyElementType *)pFVar3,(long64)(FVar10.Data + -lVar32),
                     (long64 *)(pFVar3 + 0x10));
          iVar18 = local_778;
        }
      }
    }
    else {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar29 - (longlong)FVar10.Data,(ForAnyElementType *)pFVar3,
                 (long64 *)(pFVar3 + 8),(long64 *)(pFVar3 + 0x10));
    }
    pcVar6 = local_b8[3];
    if (uVar39 == 3) {
      sVar22 = strlen(local_b8[3]);
      iVar19 = toupper((int)pcVar6[sVar22 - 1]);
      uVar41 = uVar43;
      uVar42 = (int)uVar31;
      if (iVar19 != 0x41) goto LAB_14268fc14;
    }
    else {
LAB_14268fc14:
      uVar41 = 0;
      uVar42 = 0;
    }
    pFVar16 = local_750;
    lVar32 = local_750->_padding_;
    lVar26 = (longlong)local_758;
    if (((longlong)((local_738 - local_758) + 1) != local_750->_padding_) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ImfDataWindow.max.x - ImfDataWindow.min.x + 1) == Width",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                            ,0x241,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar19 = local_774;
    if (((longlong)((local_774 - iVar18) + 1) != pFVar16->_padding_) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(ImfDataWindow.max.y - ImfDataWindow.min.y + 1) == Height",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                            ,0x242,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar28 = 0;
    if ((int)uVar39 < local_798.ArrayNum) {
      uVar28 = ~uVar39 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pSVar23 = (Slice *)Imf_3_3::Slice::Slice
                                 (&local_6d0,local_76c,
                                  (char *)(*(longlong *)
                                            &local_798.AllocatorInstance.Data
                                             [(longlong)(int)uVar39 * 0x18].field_0x0 -
                                          (iVar18 * lVar32 + lVar26) * _Var37),_Var37,
                                  _Var37 * pFVar16->_padding_,1,1,(double)CONCAT44(uVar42,uVar41),
                                  false,false);
    Imf_3_3::FrameBuffer::insert((FrameBuffer *)&local_768,local_b8[(int)uVar39],pSVar23);
    uVar28 = local_770;
  }
  Imf_3_3::InputFile::setFrameBuffer((InputFile *)local_728,(FrameBuffer *)&local_768);
  Imf_3_3::InputFile::readPixels((InputFile *)local_728,iVar18,iVar19);
  Imf_3_3::Header::~Header(&local_700);
  if (local_710 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_710 + 1;
    lVar32 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (**(code **)*local_710)(local_710);
      LOCK();
      piVar2 = (int *)((longlong)local_710 + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*local_710 + 8))(local_710);
      }
    }
  }
  if ((longlong *)local_728._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_728._8_8_ + 8);
    lVar32 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar32 == 1) {
      (*(code *)**(undefined8 **)local_728._8_8_)(local_728._8_8_);
      LOCK();
      piVar2 = (int *)(local_728._8_8_ + 0xc);
      iVar18 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar18 == 1) {
        (**(code **)(*(longlong *)local_728._8_8_ + 8))(local_728._8_8_);
      }
    }
  }
  Imf_3_3::IStream::~IStream(&local_698);
  cVar5 = (local_768._Myhead)->_Parent->_Isnil;
  p_Var13 = (local_768._Myhead)->_Parent;
  while (cVar5 == '\0') {
    std::_Tree_val<std::_Tree_simple_types<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>_>_>::
    _Erase_tree<std::allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_>_>
              (&local_768,
               (allocator<std::_Tree_node<std::pair<Imf_3_3::Name_const_,Imf_3_3::Slice>,void_*>_> *
               )&local_768,p_Var13->_Right);
    p_Var11 = p_Var13->_Left;
    ::operator_delete(p_Var13,0x158);
    p_Var13 = p_Var11;
    cVar5 = p_Var11->_Isnil;
  }
  ::operator_delete(local_768._Myhead,0x158);
  pFVar16 = local_750;
  if (local_7a4 == 0x10) {
    _Var37 = 2;
  }
  lVar32 = _Var37 * local_750->_padding_ * local_750->_padding_;
  uVar31 = (ulonglong)uVar28;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)&local_750->_padding_,
             lVar32 * uVar31,Default);
  if (((uVar28 != 1) && (uVar28 != 4)) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("ChannelCount == 1 || ChannelCount == 4",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                          ,0x259,L""), bVar17)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar28 = 0;
  lVar26 = 0;
  lVar38 = 0;
  do {
    uVar39 = 0;
    if ((int)uVar28 < local_798.ArrayNum) {
      uVar39 = ~uVar28 >> 0x1f;
    }
    if ((uVar39 == 0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    iVar18 = local_7a4;
    alStack_98[lVar26] = *(longlong *)(local_798.AllocatorInstance.Data + lVar38);
    uVar28 = uVar28 + 1;
    lVar26 = lVar26 + 1;
    lVar38 = lVar38 + 0x18;
  } while (lVar26 < (longlong)uVar31);
  if (local_7a4 == 0x10) {
    lVar26 = 0;
    if ((pFVar16->_padding_ < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    puVar33 = (ushort *)pFVar16->_padding_;
    lVar38 = lVar26;
    lVar34 = lVar26;
    if (0 < lVar32) {
      do {
        uVar35 = *(ushort *)(lVar34 + alStack_98[lVar38]);
        if ((uVar35 & 0x7c00) == 0x7c00) {
          if (uVar35 == 0x7c00) {
            uVar35 = 0x7bff;
          }
          else if (uVar35 == 0xfc00) {
            uVar35 = 0xfbff;
          }
          else {
            uVar35 = 0;
          }
        }
        *puVar33 = uVar35;
        puVar33 = puVar33 + 1;
        lVar38 = lVar38 + 1;
      } while ((lVar38 < (longlong)uVar31) ||
              (lVar34 = lVar34 + 2, lVar38 = lVar26, lVar34 < lVar32));
    }
  }
  else {
    if ((local_7a4 != 0x20) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("InBitDepth == 32",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageWrapper\\Private\\Formats\\ExrImageWrapper.cpp"
                            ,0x274,L""), bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((pFVar16->_padding_ < 1) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar17)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    fVar15 = __real_7f7fffff;
    fVar14 = __real_ff7fffff;
    pfVar27 = (float *)pFVar16->_padding_;
    lVar26 = 0;
    if (0 < lVar32) {
      do {
        lVar38 = 0;
        if (3 < uVar31) {
          do {
            fVar4 = *(float *)(lVar26 + alStack_98[lVar38]);
            if ((((fVar4 < fVar14) || (fVar40 = fVar4, fVar15 < fVar4)) &&
                (fVar40 = fVar15, fVar4 <= fVar15)) && (fVar40 = fVar14, fVar14 <= fVar4)) {
              fVar40 = 0.0;
            }
            *pfVar27 = fVar40;
            fVar4 = *(float *)(lVar26 + alStack_98[lVar38 + 1]);
            if (((fVar4 < fVar14) || (fVar40 = fVar4, fVar15 < fVar4)) &&
               ((fVar40 = fVar15, fVar4 <= fVar15 && (fVar40 = fVar14, fVar14 <= fVar4)))) {
              fVar40 = 0.0;
            }
            pfVar27[1] = fVar40;
            fVar4 = *(float *)(lVar26 + alStack_98[lVar38 + 2]);
            if (((fVar4 < fVar14) || (fVar40 = fVar4, fVar15 < fVar4)) &&
               ((fVar40 = fVar15, fVar4 <= fVar15 && (fVar40 = fVar14, fVar14 <= fVar4)))) {
              fVar40 = 0.0;
            }
            pfVar27[2] = fVar40;
            fVar4 = *(float *)(lVar26 + alStack_98[lVar38 + 3]);
            if ((((fVar4 < fVar14) || (fVar40 = fVar4, fVar15 < fVar4)) &&
                (fVar40 = fVar15, fVar4 <= fVar15)) && (fVar40 = fVar14, fVar14 <= fVar4)) {
              fVar40 = 0.0;
            }
            pfVar27[3] = fVar40;
            pfVar27 = pfVar27 + 4;
            lVar38 = lVar38 + 4;
          } while (lVar38 < (longlong)(uVar31 - 3));
        }
        for (; lVar38 < (longlong)uVar31; lVar38 = lVar38 + 1) {
          fVar4 = *(float *)(lVar26 + alStack_98[lVar38]);
          fVar40 = fVar14;
          if ((fVar14 <= fVar4) && (fVar40 = fVar4, fVar15 < fVar4)) {
            fVar40 = fVar15;
          }
          *pfVar27 = fVar40;
          pfVar27 = pfVar27 + 1;
        }
        lVar26 = lVar26 + 4;
      } while (lVar26 < lVar32);
    }
  }
  *(ERGBFormat *)&pFVar16->_padding_ = local_7a8;
  *(int *)((longlong)&pFVar16->_padding_ + 4) = iVar18;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<64>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_798.AllocatorInstance.Data,
             local_798.ArrayNum);
  if ((TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)local_798.AllocatorInstance.Data !=
      (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
    FMemory::Free(local_798.AllocatorInstance.Data);
  }
LAB_142690255:
  if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_788.Data.AllocatorInstance.Data);
  }
  return;
}

