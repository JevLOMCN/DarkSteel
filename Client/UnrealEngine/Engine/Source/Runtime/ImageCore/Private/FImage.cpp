// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 13

// FImage @ 142351940

FImage * __thiscall
FImage::FImage(FImage *this,int param_1,int param_2,int param_3,Type param_4,EGammaSpace param_5)

{
  *(Type *)((longlong)&this->_padding_ + 4) = param_4;
  *(EGammaSpace *)((longlong)&this->_padding_ + 5) = param_5;
  (this->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RawData).ArrayNum = 0;
  (this->RawData).ArrayMax = 0;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  *(int *)&this->_padding_ = param_3;
  InitImageStorage(this);
  return this;
}

// operator() @ 142352980

bool __thiscall `FImage::FreeData'::__l7::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  bool bVar2;
  
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId989,"FImage.FreeData.Task",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x3dd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId989);
  }
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
    ::operator_delete(puVar1,0x18);
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return true;
}

// ChangeFormat @ 142356c70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImage::ChangeFormat(FImage *this,Type param_1,EGammaSpace param_2)

{
  Type TVar1;
  int iVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  long64 lVar8;
  longlong lVar9;
  ulong64 uVar10;
  FImageView local_68;
  FImageView local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  ForAnyElementType local_28;
  long64 lStack_20;
  ulong64 local_18 [2];
  
  TVar1 = *(Type *)((longlong)&this->_padding_ + 4);
  if ((TVar1 != param_1) ||
     ((*(EGammaSpace *)((longlong)&this->_padding_ + 5) != param_2 && (TVar1 < BGRE8)))) {
    local_28.Data = (FScriptContainerElement *)0x0;
    local_18[0] = 0;
    if ((param_2 == Pow22) && (*(char *)((longlong)&this->_padding_ + 5) != '\x01')) {
      if (2 < (byte)LogImageCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
      }
      param_2 = sRGB;
    }
    local_38 = this->_padding_;
    iVar2 = (int)this->_padding_;
    uStack_30._0_6_ = CONCAT15(param_2,CONCAT14(param_1,iVar2));
    if ((((((int)this->_padding_ < 0) || (*(int *)((longlong)&this->_padding_ + 4) < 0)) ||
         (iVar2 < 0)) ||
        (((param_1 == Invalid || (param_2 == Invalid)) || ((BGRA8 < param_1 && (param_2 != Linear)))
         ))) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Image.IsImageInfoValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                                    ,0x31,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    lVar6 = (longlong)(int)local_38;
    lVar9 = (longlong)(int)uStack_30;
    lVar7 = (longlong)local_38._4_4_;
    lVar8 = ERawImageFormat::GetBytesPerPixel(uStack_30._4_1_);
    uVar10 = lVar8 * lVar9 * lVar6 * lVar7;
    if ((longlong)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar10);
    }
    lStack_20 = 0;
    if (local_18[0] != uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar10,&local_28,0,(long64 *)local_18);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar10,&local_28,&lStack_20,(long64 *)local_18);
    local_68.RawData = local_28.Data;
    local_50.RawData = (this->RawData).AllocatorInstance.Data;
    local_68._padding_ = local_38;
    local_68._padding_ = uStack_30;
    local_50._padding_ = this->_padding_;
    local_50._padding_ = this->_padding_;
    FImageCore::CopyImage(&local_50,&local_68);
    pFVar4 = (this->RawData).AllocatorInstance.Data;
    lVar8 = (this->RawData).ArrayNum;
    uVar10 = (this->RawData).ArrayMax;
    (this->RawData).AllocatorInstance.Data = local_28.Data;
    (this->RawData).ArrayNum = lStack_20;
    (this->RawData).ArrayMax = local_18[0];
    lVar6 = this->_padding_;
    lVar7 = this->_padding_;
    this->_padding_ = local_38;
    this->_padding_ = uStack_30;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      local_38 = lVar6;
      uStack_30 = lVar7;
      local_28.Data = pFVar4;
      lStack_20 = lVar8;
      local_18[0] = uVar10;
      FMemory::Free(pFVar4);
    }
  }
  return;
}

// CopyTo @ 14235a6f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImage::CopyTo(FImage *this,FImage *param_1,Type param_2,EGammaSpace param_3)

{
  longlong lVar1;
  longlong lVar2;
  FImageView local_38;
  FImageView local_20;
  
  if ((param_3 == Pow22) && (*(char *)((longlong)&this->_padding_ + 5) != '\x01')) {
    if (2 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    param_3 = sRGB;
  }
  lVar1 = this->_padding_;
  lVar2 = this->_padding_;
  *(undefined4 *)((longlong)&param_1->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&param_1->_padding_ = (int)lVar2;
  *(int *)&param_1->_padding_ = (int)lVar1;
  *(Type *)((longlong)&param_1->_padding_ + 4) = param_2;
  *(EGammaSpace *)((longlong)&param_1->_padding_ + 5) = param_3;
  InitImageStorage(param_1);
  local_38._padding_ = param_1->_padding_;
  local_38._padding_ = param_1->_padding_;
  local_38.RawData = (param_1->RawData).AllocatorInstance.Data;
  local_20.RawData = (this->RawData).AllocatorInstance.Data;
  local_20._padding_ = this->_padding_;
  local_20._padding_ = this->_padding_;
  FImageCore::CopyImage(&local_20,&local_38);
  return;
}

// FreeData @ 14235c160

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall FImage::FreeData(FImage *this,bool param_1)

{
  long64 *plVar1;
  undefined1 *puVar2;
  int iVar3;
  long64 lVar4;
  long64 lVar5;
  FScriptContainerElement *pFVar6;
  long64 lVar7;
  TExecutableTask<_public:_void___cdecl_FImage::FreeData(bool)_::_7_::<lambda_1>_> *this_00;
  <lambda_1> local_res18 [2];
  
  if (param_1) {
    local_res18[0].PtrImageData = ::operator_new(0x18);
    if (local_res18[0].PtrImageData != (TArray<unsigned_char,TSizedDefaultAllocator<64>_> *)0x0) {
      ((local_res18[0].PtrImageData)->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      (local_res18[0].PtrImageData)->ArrayNum = 0;
      (local_res18[0].PtrImageData)->ArrayMax = 0;
    }
    lVar5 = (local_res18[0].PtrImageData)->ArrayNum;
    pFVar6 = (this->RawData).AllocatorInstance.Data;
    lVar7 = (this->RawData).ArrayNum;
    lVar4 = (this->RawData).ArrayMax;
    (this->RawData).AllocatorInstance.Data = ((local_res18[0].PtrImageData)->AllocatorInstance).Data
    ;
    (this->RawData).ArrayNum = lVar5;
    (this->RawData).ArrayMax = (local_res18[0].PtrImageData)->ArrayMax;
    ((local_res18[0].PtrImageData)->AllocatorInstance).Data = pFVar6;
    (local_res18[0].PtrImageData)->ArrayNum = lVar7;
    (local_res18[0].PtrImageData)->ArrayMax = lVar4;
    this_00 = UE::Tasks::Private::TExecutableTask<`FImage::FreeData'::__l7::<lambda_1>_>::Create
                        (L"FImage.FreeData.Task",local_res18,BackgroundHigh,None,None);
    UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0x100);
    if (this_00 !=
        (TExecutableTask<_public:_void___cdecl_FImage::FreeData(bool)_::_7_::<lambda_1>_> *)0x0) {
      LOCK();
      puVar2 = &this_00->field_0x30;
      iVar3 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014235c23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)**(undefined8 **)this_00)(this_00,1);
        return;
      }
    }
  }
  else {
    plVar1 = &(this->RawData).ArrayMax;
    (this->RawData).ArrayNum = 0;
    if (*plVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,0,&(this->RawData).AllocatorInstance,0,plVar1);
      return;
    }
  }
  return;
}

// GetPixelPointer @ 14235d7e0

void * __thiscall FImage::GetPixelPointer(FImage *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  void *pvVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  lVar7 = this->_padding_;
  lVar4 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&this->_padding_ + 4));
  lVar7 = lVar4 * (((longlong)iVar1 * (longlong)param_3 + (longlong)param_2) * (longlong)(int)lVar7
                  + (longlong)param_1);
  uVar6 = 0;
  if (lVar7 < (this->RawData).ArrayNum) {
    uVar6 = (uint)((ulonglong)lVar7 >> 0x3f) ^ 1;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar5 = (void *)(*pcVar2)();
      return pvVar5;
    }
  }
  return (this->RawData).AllocatorInstance.Data + lVar7;
}

// GetSlice @ 14235de70

FImageView * __thiscall
FImage::GetSlice(FImage *this,FImageView *__return_storage_ptr__,int param_1)

{
  Type TVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  FImageView *pFVar6;
  long64 lVar7;
  longlong lVar8;
  
  if ((param_1 < 0) || ((int)this->_padding_ <= param_1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex >= 0 && SliceIndex < NumSlices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x431,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FImageView *)(*pcVar3)();
      return pFVar6;
    }
  }
  lVar8 = this->_padding_;
  lVar4 = this->_padding_;
  __return_storage_ptr__->RawData = (this->RawData).AllocatorInstance.Data;
  __return_storage_ptr__->_padding_ = lVar8;
  __return_storage_ptr__->_padding_ = lVar4;
  iVar2 = *(int *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  lVar8 = __return_storage_ptr__->_padding_;
  TVar1 = *(Type *)((longlong)&__return_storage_ptr__->_padding_ + 4);
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 1;
  lVar7 = ERawImageFormat::GetBytesPerPixel(TVar1);
  lVar8 = lVar7 * (longlong)iVar2 * (longlong)(int)lVar8;
  if ((this->RawData).ArrayNum != (int)this->_padding_ * lVar8) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("RawData.Num() == NumSlices * BytesPerSlice",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x435,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FImageView *)(*pcVar3)();
      return pFVar6;
    }
  }
  __return_storage_ptr__->RawData = (this->RawData).AllocatorInstance.Data + param_1 * lVar8;
  return __return_storage_ptr__;
}

// Init @ 14235eea0

void __thiscall FImage::Init(FImage *this,FImageInfo *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)&param_1->NumSlices;
  this->_padding_ = *(longlong *)param_1;
  this->_padding_ = lVar1;
  InitImageStorage(this);
  return;
}

// Init @ 14235eec0

void __thiscall
FImage::Init(FImage *this,int param_1,int param_2,int param_3,Type param_4,EGammaSpace param_5)

{
  *(Type *)((longlong)&this->_padding_ + 4) = param_4;
  *(EGammaSpace *)((longlong)&this->_padding_ + 5) = param_5;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  *(int *)&this->_padding_ = param_3;
  InitImageStorage(this);
  return;
}

// Init @ 14235eef0

void __thiscall FImage::Init(FImage *this,int param_1,int param_2,Type param_3,EGammaSpace param_4)

{
  *(EGammaSpace *)((longlong)&this->_padding_ + 5) = param_4;
  *(int *)&this->_padding_ = param_1;
  *(int *)((longlong)&this->_padding_ + 4) = param_2;
  *(undefined4 *)&this->_padding_ = 1;
  *(Type *)((longlong)&this->_padding_ + 4) = param_3;
  InitImageStorage(this);
  return;
}

// Linearize @ 14235f780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FImage::Linearize(FImage *this,uchar param_1,FImage *param_2)

{
  char cVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStackY_5c8 [32];
  <lambda_1> local_588;
  long64 local_580;
  float local_578;
  float local_574;
  float local_570;
  float local_56c;
  float local_568 [4];
  FLinearColor_u_0 local_558;
  TArrayView<std::nullptr_t,int> local_548;
  code *local_538;
  long64 *local_530;
  TArrayView<std::nullptr_t,int> local_528;
  code *local_518;
  long64 *local_510;
  TArrayView<std::nullptr_t,int> local_508;
  code *local_4f8;
  long64 *local_4f0;
  FImageView local_4e8;
  FImageView local_4d0;
  FImageView local_4b8;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  FImageView local_478;
  FImageView local_460;
  FImageView local_448;
  FImageView local_430;
  FImageView local_418;
  FImageView local_400;
  FImageView local_3e8;
  code *local_3c8 [2];
  longlong local_3b8 [3];
  longlong *local_3a0;
  FScriptContainerElement *local_398;
  FScriptContainerElement *local_390;
  code *local_388;
  longlong local_378 [3];
  longlong *local_360;
  FScriptContainerElement *local_358;
  FScriptContainerElement *local_350;
  code *local_348;
  longlong local_338 [3];
  longlong *local_320;
  FScriptContainerElement *local_318;
  FScriptContainerElement *local_310;
  code *local_308;
  longlong local_2f8 [3];
  longlong *local_2e0;
  undefined1 local_2d8 [32];
  longlong local_2b8 [3];
  longlong *local_2a0;
  undefined1 local_298 [32];
  longlong local_278 [3];
  longlong *local_260;
  undefined1 local_258 [32];
  longlong local_238 [3];
  longlong *local_220;
  undefined1 local_218 [32];
  longlong local_1f8 [3];
  longlong *local_1e0;
  undefined1 local_1d8 [32];
  longlong local_1b8 [3];
  longlong *local_1a0;
  undefined1 local_198 [32];
  longlong local_178 [3];
  longlong *local_160;
  long64 local_158;
  longlong local_150;
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  code *local_138;
  longlong local_128 [3];
  longlong *local_110;
  long64 local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  code *local_e8;
  longlong local_d8 [3];
  longlong *local_c0;
  long64 local_b8;
  longlong local_b0;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  code *local_98;
  longlong local_88 [3];
  longlong *local_70;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_5c8;
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1084,"Texture.Linearize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x43c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1084);
  }
  *(int *)&param_2->_padding_ = (int)this->_padding_;
  *(undefined4 *)((longlong)&param_2->_padding_ + 4) =
       *(undefined4 *)((longlong)&this->_padding_ + 4);
  *(int *)&param_2->_padding_ = (int)this->_padding_;
  *(undefined2 *)((longlong)&param_2->_padding_ + 4) = 5;
  InitImageStorage(param_2);
  if (((int)this->_padding_ != (int)param_2->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcImage.SizeX == DestImage.SizeX",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x446,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)((longlong)&this->_padding_ + 4) != *(int *)((longlong)&param_2->_padding_ + 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcImage.SizeY == DestImage.SizeY",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x447,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((int)this->_padding_ != (int)param_2->_padding_) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcImage.NumSlices == DestImage.NumSlices",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x448,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1 == '\0') {
    local_478._padding_ = param_2->_padding_;
    local_478._padding_ = param_2->_padding_;
    local_478.RawData = (param_2->RawData).AllocatorInstance.Data;
    local_460.RawData = (this->RawData).AllocatorInstance.Data;
    local_460._padding_ = this->_padding_;
    local_460._padding_ = this->_padding_;
    FImageCore::CopyImage(&local_460,&local_478);
    goto LAB_142360732;
  }
  if (0x10 < param_1) {
    if (2 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    local_448._padding_ = param_2->_padding_;
    local_448._padding_ = param_2->_padding_;
    local_448.RawData = (param_2->RawData).AllocatorInstance.Data;
    local_430.RawData = (this->RawData).AllocatorInstance.Data;
    local_430._padding_ = this->_padding_;
    local_430._padding_ = this->_padding_;
    FImageCore::CopyImage(&local_430,&local_448);
    goto LAB_142360732;
  }
  if (param_1 == '\x02') {
    cVar1 = *(char *)((longlong)&this->_padding_ + 4);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      local_4b8._padding_ = this->_padding_;
      local_4b8.RawData = (this->RawData).AllocatorInstance.Data;
      local_418.RawData = (param_2->RawData).AllocatorInstance.Data;
      local_4b8._padding_._6_2_ = (undefined2)((ulonglong)this->_padding_ >> 0x30);
      local_4b8._padding_._0_6_ = CONCAT15(2,(int5)this->_padding_);
      local_418._padding_ = param_2->_padding_;
      local_418._padding_ = param_2->_padding_;
      FImageCore::CopyImage(&local_4b8,&local_418);
      goto LAB_142360732;
    }
  }
  else if (param_1 == '\x04') {
    cVar1 = *(char *)((longlong)&this->_padding_ + 4);
    if ((cVar1 == '\0') || (cVar1 == '\x01')) {
      local_4e8._padding_ = this->_padding_;
      local_4e8.RawData = (this->RawData).AllocatorInstance.Data;
      local_400.RawData = (param_2->RawData).AllocatorInstance.Data;
      local_4e8._padding_._6_2_ = (undefined2)((ulonglong)this->_padding_ >> 0x30);
      local_4e8._padding_._0_6_ = CONCAT15(1,(int5)this->_padding_);
      local_400._padding_ = param_2->_padding_;
      local_400._padding_ = param_2->_padding_;
      FImageCore::CopyImage(&local_4e8,&local_400);
      goto LAB_142360732;
    }
  }
  else if (param_1 == '\x01') {
    local_4d0._padding_ = this->_padding_;
    local_4d0.RawData = (this->RawData).AllocatorInstance.Data;
    local_3e8.RawData = (param_2->RawData).AllocatorInstance.Data;
    local_4d0._padding_._6_2_ = (undefined2)((ulonglong)this->_padding_ >> 0x30);
    local_4d0._padding_._0_6_ = (uint6)(uint5)this->_padding_;
    local_3e8._padding_ = param_2->_padding_;
    local_3e8._padding_ = param_2->_padding_;
    FImageCore::CopyImage(&local_4d0,&local_3e8);
    goto LAB_142360732;
  }
  lVar13 = (longlong)(int)this->_padding_ * (longlong)(int)this->_padding_ *
           (longlong)*(int *)((longlong)&this->_padding_ + 4);
  iVar8 = ParallelForComputeNumJobs(&local_580,lVar13,0x4000,0x4840);
  UE::Color::GetColorDecodeFunction
            ((TFunction<FLinearColor___cdecl(FLinearColor_const_&)> *)local_3c8,param_1);
  if ((local_3c8[0] == (code *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DecodeFunction != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x483,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(char *)((longlong)&param_2->_padding_ + 4) != '\x05') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format == ERawImageFormat::RGBA32F",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                         ,0x29e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  cVar1 = *(char *)((longlong)&this->_padding_ + 4);
  pFVar2 = (param_2->RawData).AllocatorInstance.Data;
  switch(cVar1) {
  case '\0':
    if ((cVar1 != '\0') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::G8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2b2,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->RawData).AllocatorInstance.Data;
    if (((this->RawData).ArrayNum < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_2d8._8_8_ = pFVar3;
    local_2d8._0_8_ = pFVar2;
    local_2d8._16_8_ = local_3c8[0];
    local_2a0 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_2b8);
    }
    ParallelLoop<_FImage::Linearize_::__l69::<lambda_1>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_1> *)local_2d8);
    if ((code *)local_2d8._16_8_ != (code *)0x0) {
      plVar11 = local_2b8;
      plVar10 = local_2a0;
LAB_1423606e0:
      if (plVar10 != (longlong *)0x0) {
        plVar11 = plVar10;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    break;
  case '\x01':
    if ((cVar1 != '\x01') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::BGRA8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2be,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_258._8_8_ = (this->RawData).AllocatorInstance.Data;
    local_258._0_8_ = pFVar2;
    local_258._16_8_ = local_3c8[0];
    local_220 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_238);
    }
    ParallelLoop<_FImage::Linearize_::__l71::<lambda_3>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_3> *)local_258);
    if ((code *)local_258._16_8_ != (code *)0x0) {
      plVar11 = local_238;
      plVar10 = local_220;
      goto LAB_1423606e0;
    }
    break;
  case '\x02':
    if ((cVar1 != '\x02') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::BGRE8",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2c4,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = 0;
    local_398 = pFVar2;
    local_390 = (this->RawData).AllocatorInstance.Data;
    local_388 = local_3c8[0];
    local_360 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_378);
    }
    fVar6 = __real_c77fe000;
    fVar5 = __real_477fe000;
    if (iVar8 < 2) {
      lVar14 = lVar12;
      if (0 < lVar13) {
        do {
          FColor::FromRGBE((FColor *)(local_390 + lVar12 * 4),(FLinearColor *)&local_558._s_0);
          UE::Core::Private::Function::CheckCallable(local_388);
          pcVar4 = local_388;
          plVar11 = local_378;
          if (local_360 != (longlong *)0x0) {
            plVar11 = local_360;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(&local_498,uVar9,&local_558);
          fVar18 = local_498;
          if (fVar5 <= local_498) {
            fVar18 = fVar5;
          }
          local_558._s_0.R = local_498;
          local_558._s_0.G = fStack_494;
          local_558._s_0.B = fStack_490;
          local_558._s_0.A = fStack_48c;
          lVar12 = lVar12 + 1;
          fVar16 = fStack_494;
          if (fVar5 <= fStack_494) {
            fVar16 = fVar5;
          }
          fVar17 = fStack_490;
          if (fVar5 <= fStack_490) {
            fVar17 = fVar5;
          }
          if (fVar18 <= fVar6) {
            fVar18 = fVar6;
          }
          if (fVar16 <= fVar6) {
            fVar16 = fVar6;
          }
          if (fVar17 <= fVar6) {
            fVar17 = fVar6;
          }
          pFVar2 = local_398 + lVar14;
          *(float *)pFVar2 = fVar18;
          *(float *)(pFVar2 + 4) = fVar16;
          *(float *)(pFVar2 + 8) = fVar17;
          *(float *)(pFVar2 + 0xc) = fStack_48c;
          lVar14 = lVar14 + 0x10;
        } while (lVar12 < lVar13);
      }
    }
    else {
      local_158 = local_580;
      local_150 = lVar13;
      local_148 = local_398;
      local_140 = local_390;
      local_138 = local_388;
      local_110 = (longlong *)0x0;
      if (local_388 != (code *)0x0) {
        plVar11 = local_378;
        if (local_360 != (longlong *)0x0) {
          plVar11 = local_360;
        }
        (**(code **)*plVar11)(plVar11,local_128);
      }
      local_548.DataPtr = (void **)0x0;
      local_538 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l72::<lambda_4>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_530 = &local_158;
      local_548.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"Texture.Linearize.PF",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_538,
                 local_588,Unbalanced,&local_548);
      if (local_138 != (code *)0x0) {
        plVar11 = local_128;
        if (local_110 != (longlong *)0x0) {
          plVar11 = local_110;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    if (local_388 != (code *)0x0) {
      plVar11 = local_378;
      plVar10 = local_360;
      goto LAB_1423606e0;
    }
    break;
  case '\x03':
    if ((cVar1 != '\x03') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::RGBA16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2ca,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_218._8_8_ = (this->RawData).AllocatorInstance.Data;
    local_218._0_8_ = pFVar2;
    local_218._16_8_ = local_3c8[0];
    local_1e0 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_1f8);
    }
    ParallelLoop<_FImage::Linearize_::__l73::<lambda_5>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_5> *)local_218);
    if ((code *)local_218._16_8_ != (code *)0x0) {
      plVar11 = local_1f8;
      plVar10 = local_1e0;
      goto LAB_1423606e0;
    }
    break;
  case '\x04':
    if ((cVar1 != '\x04') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::RGBA16F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2d0,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_1d8._8_8_ = (FFloat16Color *)(this->RawData).AllocatorInstance.Data;
    local_1d8._0_8_ = pFVar2;
    local_1d8._16_8_ = local_3c8[0];
    local_1a0 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_1b8);
    }
    ParallelLoop<_FImage::Linearize_::__l74::<lambda_6>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_6> *)local_1d8);
    if ((code *)local_1d8._16_8_ != (code *)0x0) {
      plVar11 = local_1b8;
      plVar10 = local_1a0;
      goto LAB_1423606e0;
    }
    break;
  case '\x05':
    if ((cVar1 != '\x05') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::RGBA32F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2d6,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_358 = pFVar2;
    local_350 = (this->RawData).AllocatorInstance.Data;
    local_348 = local_3c8[0];
    local_320 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_338);
    }
    fVar6 = __real_c77fe000;
    fVar5 = __real_477fe000;
    if (iVar8 < 2) {
      lVar12 = 0;
      if (0 < lVar13) {
        do {
          pFVar2 = local_350;
          UE::Core::Private::Function::CheckCallable(local_348);
          pcVar4 = local_348;
          plVar11 = local_338;
          if (local_320 != (longlong *)0x0) {
            plVar11 = local_320;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(&local_578,uVar9,pFVar2 + lVar12);
          fVar18 = local_578;
          if (fVar5 <= local_578) {
            fVar18 = fVar5;
          }
          fVar16 = local_574;
          if (fVar5 <= local_574) {
            fVar16 = fVar5;
          }
          fVar17 = local_570;
          if (fVar5 <= local_570) {
            fVar17 = fVar5;
          }
          if (fVar18 <= fVar6) {
            fVar18 = fVar6;
          }
          if (fVar16 <= fVar6) {
            fVar16 = fVar6;
          }
          if (fVar17 <= fVar6) {
            fVar17 = fVar6;
          }
          pFVar2 = local_358 + lVar12;
          *(float *)pFVar2 = fVar18;
          *(float *)(pFVar2 + 4) = fVar16;
          *(float *)(pFVar2 + 8) = fVar17;
          *(float *)(pFVar2 + 0xc) = local_56c;
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + 0x10;
        } while (lVar13 != 0);
      }
    }
    else {
      local_108 = local_580;
      local_100 = lVar13;
      local_f8 = local_358;
      local_f0 = local_350;
      local_e8 = local_348;
      local_c0 = (longlong *)0x0;
      if (local_348 != (code *)0x0) {
        plVar11 = local_338;
        if (local_320 != (longlong *)0x0) {
          plVar11 = local_320;
        }
        (**(code **)*plVar11)(plVar11,local_d8);
      }
      local_528.DataPtr = (void **)0x0;
      local_518 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l75::<lambda_7>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_510 = &local_108;
      local_528.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"Texture.Linearize.PF",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_518,
                 local_588,Unbalanced,&local_528);
      if (local_e8 != (code *)0x0) {
        plVar11 = local_d8;
        if (local_c0 != (longlong *)0x0) {
          plVar11 = local_c0;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    if (local_348 != (code *)0x0) {
      plVar11 = local_338;
      plVar10 = local_320;
      goto LAB_1423606e0;
    }
    break;
  case '\x06':
    if ((cVar1 != '\x06') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::G16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2b8,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_298._8_8_ = (this->RawData).AllocatorInstance.Data;
    local_298._0_8_ = pFVar2;
    local_298._16_8_ = local_3c8[0];
    local_260 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_278);
    }
    ParallelLoop<_FImage::Linearize_::__l70::<lambda_2>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_2> *)local_298);
    if ((code *)local_298._16_8_ != (code *)0x0) {
      plVar11 = local_278;
      plVar10 = local_260;
      goto LAB_1423606e0;
    }
    break;
  case '\a':
    if ((cVar1 != '\a') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::R16F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2dc,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_198._8_8_ = (this->RawData).AllocatorInstance.Data;
    local_198._0_8_ = pFVar2;
    local_198._16_8_ = local_3c8[0];
    local_160 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_178);
    }
    ParallelLoop<_FImage::Linearize_::__l76::<lambda_8>_>
              (L"Texture.Linearize.PF",iVar8,local_580,lVar13,(<lambda_8> *)local_198);
    if ((code *)local_198._16_8_ != (code *)0x0) {
      plVar11 = local_178;
      plVar10 = local_160;
      goto LAB_1423606e0;
    }
    break;
  case '\b':
    if ((cVar1 != '\b') &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Format == ERawImageFormat::R32F",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                           ,0x2e2,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    lVar12 = 0;
    local_318 = pFVar2;
    local_310 = (this->RawData).AllocatorInstance.Data;
    local_308 = local_3c8[0];
    local_2e0 = (longlong *)0x0;
    if (local_3c8[0] != (code *)0x0) {
      plVar11 = local_3b8;
      if (local_3a0 != (longlong *)0x0) {
        plVar11 = local_3a0;
      }
      (**(code **)*plVar11)(plVar11,local_2f8);
    }
    fVar6 = __real_c77fe000;
    fVar5 = __real_477fe000;
    if (iVar8 < 2) {
      lVar14 = lVar12;
      if (0 < lVar13) {
        do {
          local_568[0] = *(float *)(local_310 + lVar12 * 4);
          local_568[1] = 0.0;
          local_568[2] = 0.0;
          local_568[3] = 1.0;
          UE::Core::Private::Function::CheckCallable(local_308);
          pcVar4 = local_308;
          plVar11 = local_2f8;
          if (local_2e0 != (longlong *)0x0) {
            plVar11 = local_2e0;
          }
          uVar9 = (**(code **)(*plVar11 + 8))();
          (*pcVar4)(&local_488,uVar9,local_568);
          fVar18 = local_488;
          if (fVar5 <= local_488) {
            fVar18 = fVar5;
          }
          local_568[0] = local_488;
          local_568[3] = fStack_47c;
          lVar12 = lVar12 + 1;
          fVar16 = fStack_484;
          if (fVar5 <= fStack_484) {
            fVar16 = fVar5;
          }
          fVar17 = fStack_480;
          if (fVar5 <= fStack_480) {
            fVar17 = fVar5;
          }
          if (fVar18 <= fVar6) {
            fVar18 = fVar6;
          }
          if (fVar16 <= fVar6) {
            fVar16 = fVar6;
          }
          if (fVar17 <= fVar6) {
            fVar17 = fVar6;
          }
          pFVar2 = local_318 + lVar14;
          *(float *)pFVar2 = fVar18;
          *(float *)(pFVar2 + 4) = fVar16;
          *(float *)(pFVar2 + 8) = fVar17;
          *(float *)(pFVar2 + 0xc) = fStack_47c;
          lVar14 = lVar14 + 0x10;
        } while (lVar12 < lVar13);
      }
    }
    else {
      local_b8 = local_580;
      local_b0 = lVar13;
      local_a8 = local_318;
      local_a0 = local_310;
      local_98 = local_308;
      local_70 = (longlong *)0x0;
      if (local_308 != (code *)0x0) {
        plVar11 = local_2f8;
        if (local_2e0 != (longlong *)0x0) {
          plVar11 = local_2e0;
        }
        (**(code **)*plVar11)(plVar11,local_88);
      }
      local_508.DataPtr = (void **)0x0;
      local_4f8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImage::Linearize'::__l77::<lambda_9>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_4f0 = &local_b8;
      local_508.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"Texture.Linearize.PF",iVar8,1,(TFunctionRef<void___cdecl(int)> *)&local_4f8,
                 local_588,Unbalanced,&local_508);
      if (local_98 != (code *)0x0) {
        plVar11 = local_88;
        if (local_70 != (longlong *)0x0) {
          plVar11 = local_70;
        }
        (**(code **)(*plVar11 + 0x10))();
      }
    }
    if (local_308 != (code *)0x0) {
      plVar11 = local_2f8;
      plVar10 = local_2e0;
      goto LAB_1423606e0;
    }
  }
  if (local_3c8[0] != (code *)0x0) {
    plVar11 = local_3b8;
    if (local_3a0 != (longlong *)0x0) {
      plVar11 = local_3a0;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_142360732:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ResizeTo @ 142361c50

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __thiscall
FImage::ResizeTo(FImage *this,FImage *param_1,int param_2,int param_3,Type param_4,
                EGammaSpace param_5)

{
  FImageView local_28;
  
  local_28.RawData = (this->RawData).AllocatorInstance.Data;
  local_28._padding_ = this->_padding_;
  local_28._padding_ = this->_padding_;
  FImageCore::ResizeImageAllocDest(&local_28,param_1,param_2,param_3,param_4,param_5,Default);
  return;
}

// TransformToWorkingColorSpace @ 1423622a0

void __thiscall
FImage::TransformToWorkingColorSpace
          (FImage *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4,EChromaticAdaptationMethod param_5,
          double param_6)

{
  FImageView local_28;
  
  local_28.RawData = (this->RawData).AllocatorInstance.Data;
  local_28._padding_ = this->_padding_;
  local_28._padding_ = this->_padding_;
  FImageCore::TransformToWorkingColorSpace
            (&local_28,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

