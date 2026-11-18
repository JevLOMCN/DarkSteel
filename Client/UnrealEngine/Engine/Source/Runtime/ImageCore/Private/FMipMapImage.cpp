// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 5

// ChangeFormat @ 142356e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FMipMapImage::ChangeFormat(FMipMapImage *this,Type param_1,EGammaSpace param_2)

{
  int iVar1;
  code *pcVar2;
  long64 lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  long64 lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  <lambda_1> local_res10;
  FMipMapImage *local_78;
  FMipMapImage *local_70;
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FMipMapImage **local_50;
  FMipMapImage local_48;
  
  if ((this->Format != param_1) || ((this->GammaSpace != param_2 && (this->Format < BGRE8)))) {
    local_48.Format = BGRA8;
    local_48.GammaSpace = sRGB;
    local_48.SubImages.ArrayNum = 0;
    local_48.SubImages.ArrayMax = 0;
    local_48.RawData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.RawData.ArrayNum = 0;
    local_48.RawData.ArrayMax = 0;
    local_48.SubImages.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if ((param_2 == Pow22) && (this->GammaSpace != Pow22)) {
      if (2 < (byte)LogImageCore._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
      }
      param_2 = sRGB;
    }
    if (0 < (this->SubImages).ArrayNum) {
      iVar1 = *(int *)(this->SubImages).AllocatorInstance.Data;
      if ((this->SubImages).ArrayNum < 1) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      Init(&local_48,iVar1,*(int *)((this->SubImages).AllocatorInstance.Data + 4),
           (this->SubImages).ArrayNum,param_1,param_2);
      local_70 = &local_48;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMipMapImage::CopyTo'::__l26::<lambda_1>,void,int>::Call;
      local_50 = &local_78;
      local_68.DataPtr = (void **)0x0;
      local_68.ArrayNum = 0;
      local_78 = this;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(this->SubImages).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_58,local_res10,None,&local_68);
    }
    lVar3 = (this->RawData).ArrayMax;
    pFVar4 = (this->SubImages).AllocatorInstance.Data;
    pFVar5 = (this->RawData).AllocatorInstance.Data;
    lVar6 = (this->RawData).ArrayNum;
    uVar7._0_4_ = (this->SubImages).ArrayNum;
    uVar7._4_4_ = (this->SubImages).ArrayMax;
    uVar8._0_1_ = this->Format;
    uVar8._1_1_ = this->GammaSpace;
    uVar8._2_6_ = *(undefined6 *)&this->field_0x2a;
    (this->RawData).AllocatorInstance.Data = local_48.RawData.AllocatorInstance.Data;
    (this->RawData).ArrayNum = local_48.RawData.ArrayNum;
    (this->RawData).ArrayMax = local_48.RawData.ArrayMax;
    (this->SubImages).AllocatorInstance.Data = local_48.SubImages.AllocatorInstance.Data;
    (this->SubImages).ArrayNum = local_48.SubImages.ArrayNum;
    (this->SubImages).ArrayMax = local_48.SubImages.ArrayMax;
    this->Format = local_48.Format;
    this->GammaSpace = local_48.GammaSpace;
    *(undefined6 *)&this->field_0x2a = local_48._42_6_;
    local_48.RawData.AllocatorInstance.Data = pFVar5;
    local_48.RawData.ArrayNum = lVar6;
    local_48.RawData.ArrayMax = lVar3;
    local_48.SubImages.AllocatorInstance.Data = pFVar4;
    local_48.SubImages._8_8_ = uVar7;
    local_48._40_8_ = uVar8;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    if (local_48.RawData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.RawData.AllocatorInstance.Data);
    }
  }
  return;
}

// CopyTo @ 14235a840

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMipMapImage::CopyTo(FMipMapImage *this,FMipMapImage *param_1,Type param_2,EGammaSpace param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  <lambda_1> local_res20;
  FMipMapImage *local_48;
  FMipMapImage *local_40;
  TArrayView<std::nullptr_t,int> local_38;
  code *local_28;
  FMipMapImage **local_20;
  
  if ((param_3 == Pow22) && (this->GammaSpace != Pow22)) {
    if (2 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    param_3 = sRGB;
  }
  if (0 < (this->SubImages).ArrayNum) {
    iVar1 = *(int *)(this->SubImages).AllocatorInstance.Data;
    if ((this->SubImages).ArrayNum < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    Init(param_1,iVar1,*(int *)((this->SubImages).AllocatorInstance.Data + 4),
         (this->SubImages).ArrayNum,param_2,param_3);
    local_28 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMipMapImage::CopyTo'::__l26::<lambda_1>,void,int>::Call;
    local_20 = &local_48;
    local_38.DataPtr = (void **)0x0;
    local_38.ArrayNum = 0;
    local_48 = this;
    local_40 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->SubImages).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_28,local_res20,None,&local_38);
  }
  return;
}

// GetMipImage @ 14235cee0

FImageView * __thiscall
FMipMapImage::GetMipImage(FMipMapImage *this,FImageView *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  EGammaSpace EVar2;
  Type TVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FImageView *pFVar10;
  uint uVar11;
  
  if ((param_1 < 0) || ((this->SubImages).ArrayNum <= param_1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubImages.IsValidIndex(MipLevel)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                       ,0x359,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FImageView *)(*pcVar7)();
      return pFVar10;
    }
  }
  EVar2 = this->GammaSpace;
  TVar3 = this->Format;
  uVar11 = (uint)~param_1 >> 0x1f;
  uVar9 = 0;
  if (param_1 < (this->SubImages).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FImageView *)(*pcVar7)();
      return pFVar10;
    }
  }
  lVar1 = (longlong)param_1 * 0x18;
  uVar4 = *(undefined4 *)((this->SubImages).AllocatorInstance.Data + lVar1 + 4);
  uVar9 = 0;
  if (param_1 < (this->SubImages).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FImageView *)(*pcVar7)();
      return pFVar10;
    }
  }
  uVar5 = *(undefined4 *)((this->SubImages).AllocatorInstance.Data + lVar1);
  uVar9 = 0;
  if (param_1 < (this->SubImages).ArrayNum) {
    uVar9 = uVar11;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FImageView *)(*pcVar7)();
      return pFVar10;
    }
  }
  *(undefined4 *)((longlong)&__return_storage_ptr__->_padding_ + 4) = uVar4;
  *(Type *)((longlong)&__return_storage_ptr__->_padding_ + 4) = TVar3;
  *(EGammaSpace *)((longlong)&__return_storage_ptr__->_padding_ + 5) = EVar2;
  pFVar6 = (this->SubImages).AllocatorInstance.Data;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = uVar5;
  *(undefined4 *)&__return_storage_ptr__->_padding_ = 1;
  __return_storage_ptr__->RawData =
       (this->RawData).AllocatorInstance.Data + *(longlong *)(pFVar6 + lVar1 + 8);
  return __return_storage_ptr__;
}

// Init @ 14235ef20

void __thiscall
FMipMapImage::Init(FMipMapImage *this,int param_1,int param_2,int param_3,Type param_4,
                  EGammaSpace param_5)

{
  TArray<FMipMapImage::FMipInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  long64 *plVar3;
  long64 *plVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  long64 lVar10;
  ulong64 uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  int local_40;
  int iStack_3c;
  ulong64 uStack_38;
  longlong local_30;
  
  uVar14 = (ulonglong)(uint)param_3;
  this->Format = param_4;
  this->GammaSpace = param_5;
  lVar10 = ERawImageFormat::GetBytesPerPixel(param_4);
  pTVar1 = &this->SubImages;
  uVar11 = 0;
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar14);
  }
  piVar2 = &(this->SubImages).ArrayMax;
  (this->SubImages).ArrayNum = 0;
  if (*piVar2 != param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,param_3,&pTVar1->AllocatorInstance,0,piVar2);
  }
  do {
    pFVar5 = (pTVar1->AllocatorInstance).Data;
    lVar12 = (longlong)(param_2 * param_1 * (int)lVar10);
    local_40 = param_1;
    iStack_3c = param_2;
    uStack_38 = uVar11;
    local_30 = lVar12;
    if (((pFVar5 <= (FScriptContainerElement *)&local_40) &&
        ((FScriptContainerElement *)&local_40 < pFVar5 + (longlong)*piVar2 * 0x18)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (this->SubImages).ArrayNum;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x818,&pTVar1->AllocatorInstance,piVar2);
    }
    param_1 = param_1 >> 1;
    (this->SubImages).ArrayNum = iVar9 + 1;
    uVar11 = uVar11 + lVar12;
    uVar13 = (int)uVar14 - 1;
    uVar14 = (ulonglong)uVar13;
    param_2 = param_2 >> 1;
    pFVar6 = (pTVar1->AllocatorInstance).Data;
    pFVar5 = pFVar6 + (longlong)iVar9 * 0x18;
    *(ulonglong *)pFVar5 = CONCAT44(iStack_3c,local_40);
    *(ulong64 *)(pFVar5 + 8) = uStack_38;
    *(longlong *)(pFVar6 + (longlong)iVar9 * 0x18 + 0x10) = local_30;
  } while (((0 < (int)uVar13) && (0 < param_1)) && (0 < param_2));
  if ((longlong)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar11);
  }
  plVar3 = &(this->RawData).ArrayMax;
  plVar4 = &(this->RawData).ArrayNum;
  *plVar4 = 0;
  if (*plVar3 != uVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar11,(ForAnyElementType *)this,0,plVar3);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,uVar11,(ForAnyElementType *)this,plVar4,plVar3);
  return;
}

// Init @ 14235f140

void __thiscall FMipMapImage::Init(FMipMapImage *this,Type param_1,EGammaSpace param_2)

{
  int *piVar1;
  long64 *plVar2;
  
  this->Format = param_1;
  this->GammaSpace = param_2;
  piVar1 = &(this->SubImages).ArrayMax;
  (this->SubImages).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->SubImages).AllocatorInstance,0,piVar1);
  }
  plVar2 = &(this->RawData).ArrayMax;
  (this->RawData).ArrayNum = 0;
  if (*plVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)this,0,plVar2);
  }
  return;
}

