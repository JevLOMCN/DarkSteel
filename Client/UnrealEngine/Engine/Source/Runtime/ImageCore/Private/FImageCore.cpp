// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageCore
// Functions: 36

// my_filter_mitchell_B<4> @ 1423518c0

float __cdecl FImageCore::my_filter_mitchell_B<4>(float param_1,float param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = pulse_cubic_mitchell_B(param_1,__real_3e800000);
  return fVar1;
}

// my_filter_mitchell_B<6> @ 1423518e0

float __cdecl FImageCore::my_filter_mitchell_B<6>(float param_1,float param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = pulse_cubic_mitchell_B(param_1,__real_3e2aaaab);
  return fVar1;
}

// operator() @ 142351a10

void __thiscall
`FImageCore::
ImageParallelFor<`FImageCore::SanitizeFloat16AndSetAlphaOpaqueForBC6H'::__l2::<lambda_1>_>'::__l2::
<lambda_1>::operator()(void *this,long64 param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort uVar4;
  longlong lVar5;
  FImageView local_28;
  
  local_28._padding_ = 0;
  local_28._padding_._0_4_ = 0;
  local_28.RawData = (void *)0x0;
  FImageCore::ImageParallelForMakePart(&local_28,this,param_1,*(long64 *)((longlong)this + 0x18));
  lVar5 = (longlong)local_28._padding_._4_4_ * (longlong)(int)local_28._padding_ *
          (longlong)(int)local_28._padding_;
  if (0 < lVar5) {
    puVar3 = (ushort *)((longlong)local_28.RawData + 4);
    do {
      uVar1 = puVar3[-2];
      uVar4 = 0;
      uVar2 = uVar1;
      if ((0x7bff < uVar1) && (uVar2 = uVar4, uVar1 == 0x7c00)) {
        uVar2 = 0x7bff;
      }
      puVar3[-2] = uVar2;
      uVar1 = puVar3[-1];
      uVar2 = uVar1;
      if ((0x7bff < uVar1) && (uVar2 = uVar4, uVar1 == 0x7c00)) {
        uVar2 = 0x7bff;
      }
      puVar3[-1] = uVar2;
      uVar1 = *puVar3;
      uVar2 = uVar1;
      if ((0x7bff < uVar1) && (uVar2 = uVar4, uVar1 == 0x7c00)) {
        uVar2 = 0x7bff;
      }
      *puVar3 = uVar2;
      puVar3[1] = 0x3c00;
      puVar3 = puVar3 + 4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

// operator() @ 142351ad0

void __thiscall
`FImageCore::ImageParallelFor<`FImageCore::SetAlphaOpaque'::__l2::<lambda_1>_>'::__l2::<lambda_1>::
operator()(void *this,long64 param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  void *pvVar6;
  longlong lVar7;
  longlong lVar8;
  void *pvVar9;
  ushort local_res8 [4];
  FImageView local_38;
  
  local_38._padding_ = 0;
  local_38._padding_._0_4_ = 0;
  local_38._padding_._4_2_ = 0x201;
  local_38.RawData = (void *)0x0;
  FImageCore::ImageParallelForMakePart(&local_38,this,param_1,*(long64 *)((longlong)this + 0x18));
  pvVar6 = local_38.RawData;
  iVar4 = (int)local_38._padding_;
  iVar2 = (int)local_38._padding_;
  iVar3 = local_38._padding_._4_4_;
  lVar7 = (longlong)(int)local_38._padding_ * (longlong)(int)local_38._padding_ *
          (longlong)local_38._padding_._4_4_;
  if (local_38._padding_._4_1_ != 1) {
    if (local_38._padding_._4_1_ == 5) {
      if ((local_38._padding_._5_1_ != '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("GammaSpace == EGammaSpace::Linear",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                             ,0x18b,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar6 = local_38.RawData;
      lVar8 = (longlong)iVar2 * (longlong)iVar4 * (longlong)iVar3;
      if ((lVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((lVar8 - lVar7 != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("SrcColorArray.Num() == NumPixels",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x690,L""), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if ((lVar8 < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pvVar9 = (void *)(lVar8 * 0x10 + (longlong)pvVar6);
      for (; pvVar6 < pvVar9; pvVar6 = (void *)((longlong)pvVar6 + 0x10)) {
        *(undefined4 *)((longlong)pvVar6 + 0xc) = 0x3f800000;
      }
      return;
    }
    if (local_38._padding_._4_1_ != 3) {
      if (local_38._padding_._4_1_ != 4) {
        if ((local_38._padding_._4_1_ < 9) &&
           ((0x1c5U >> (local_38._padding_._4_1_ & 0x1f) & 1) != 0)) {
          return;
        }
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                           ,0x6c1,L"");
        if (!bVar5) {
          return;
        }
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (lVar7 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar5) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      else if (0 < lVar7) goto LAB_142351de0;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
LAB_142351de0:
      pvVar9 = (void *)((longlong)pvVar6 + lVar7 * 8);
      local_res8[0] = 0;
      FGenericPlatformMath::StoreHalf(local_res8,__real_3f800000);
      for (; pvVar6 < pvVar9; pvVar6 = (void *)((longlong)pvVar6 + 8)) {
        *(ushort *)((longlong)pvVar6 + 6) = local_res8[0];
      }
      return;
    }
    if (lVar7 * 4 < 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ArrayNum >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xfe,L"");
      if (bVar5) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (0 < lVar7 * 4) goto LAB_142351d49;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
LAB_142351d49:
    pvVar9 = (void *)((longlong)pvVar6 + lVar7 * 8);
    for (; pvVar6 < pvVar9; pvVar6 = (void *)((longlong)pvVar6 + 8)) {
      *(undefined2 *)((longlong)pvVar6 + 6) = 0xffff;
    }
    return;
  }
  if (lVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else if (0 < lVar7) goto LAB_142351b9b;
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
  if (bVar5) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
LAB_142351b9b:
  pvVar9 = (void *)((longlong)pvVar6 + lVar7 * 4);
  for (; pvVar6 < pvVar9; pvVar6 = (void *)((longlong)pvVar6 + 4)) {
    *(undefined1 *)((longlong)pvVar6 + 3) = 0xff;
  }
  return;
}

// operator() @ 142352820

void __thiscall
`FImageCore::ComputeChannelLinearMinMax'::__l2::<lambda_1>::operator()(void *this,long64 param_1)

{
  SixteenBytes *pSVar1;
  ulonglong uVar2;
  code *pcVar3;
  bool bVar4;
  ulonglong uVar5;
  uchar *puVar6;
  SixteenBytes *pSVar7;
  ulonglong uVar8;
  
  uVar2 = **(ulonglong **)this;
  uVar8 = uVar2 * param_1;
  uVar5 = **(longlong **)((longlong)this + 8) - uVar8;
  if ((longlong)uVar2 < (longlong)uVar5) {
    uVar5 = uVar2;
  }
  if ((longlong)uVar5 < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("JobNumBytes > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1cc,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uVar8 & 0xf) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(JobStartBytes & 0xF) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1cd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uVar5 & 0xf) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(JobNumBytes & 0xF) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1ce,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar6 = (uchar *)(**(longlong **)((longlong)this + 0x10) + uVar8);
  if ((**(longlong **)((longlong)this + 0x18) != 1) && (**(longlong **)((longlong)this + 0x18) != 2)
     ) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PixelBytesPerChannel == 1 || PixelBytesPerChannel == 2",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1d3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pSVar7 = (SixteenBytes *)(**(longlong **)((longlong)this + 0x20) + param_1 * 0x10);
  pSVar1 = (SixteenBytes *)(param_1 * 0x10 + **(longlong **)((longlong)this + 0x28));
  if (**(longlong **)((longlong)this + 0x18) == 1) {
    ::`anonymous_namespace'::ComputeChannelLinearMinMax_Part_U8
              (puVar6,(longlong)uVar5 >> 4,pSVar7,pSVar1);
  }
  else {
    ::`anonymous_namespace'::ComputeChannelLinearMinMax_Part_U16
              (puVar6,(longlong)uVar5 >> 4,pSVar7,pSVar1);
  }
  return;
}

// operator() @ 142355230

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __thiscall `FImageCore::ResizeImage'::__l25::<lambda_1>::operator()(void *this,long64 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  ulonglong uVar4;
  Type TVar5;
  bool bVar6;
  long64 lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  FImageView local_48;
  FImageView local_30;
  
  plVar1 = *(longlong **)this;
  iVar9 = (int)param_1;
  if ((iVar9 < 0) || ((int)plVar1[1] <= iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex >= 0 && SliceIndex < NumSlices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x427,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_48._padding_ = *plVar1;
  local_48.RawData = (void *)plVar1[2];
  local_48._padding_._4_1_ = (Type)((ulonglong)plVar1[1] >> 0x20);
  TVar5 = local_48._padding_._4_1_;
  lVar10 = (longlong)(int)local_48._padding_;
  uVar4 = (ulonglong)local_48._padding_ >> 0x20;
  local_48._padding_ = CONCAT44((int)((ulonglong)plVar1[1] >> 0x20),1);
  lVar7 = ERawImageFormat::GetBytesPerPixel(TVar5);
  plVar2 = *(longlong **)((longlong)this + 8);
  local_48.RawData = (void *)(lVar7 * iVar9 * lVar10 * (longlong)(int)uVar4 + plVar1[2]);
  if ((iVar9 < 0) || ((int)plVar2[1] <= iVar9)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SliceIndex >= 0 && SliceIndex < NumSlices",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x427,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_30._padding_ = *plVar2;
  local_30.RawData = (void *)plVar2[2];
  uVar4 = (ulonglong)local_30._padding_ >> 0x20;
  iVar8 = (int)local_30._padding_;
  local_30._padding_._4_1_ = (Type)((ulonglong)plVar2[1] >> 0x20);
  TVar5 = local_30._padding_._4_1_;
  local_30._padding_ = CONCAT44((int)((ulonglong)plVar2[1] >> 0x20),1);
  lVar7 = ERawImageFormat::GetBytesPerPixel(TVar5);
  local_30.RawData =
       (void *)(lVar7 * (longlong)(int)uVar4 * (longlong)iVar8 * (longlong)iVar9 + plVar2[2]);
  FImageCore::ResizeImage(&local_48,&local_30,**(EResizeImageFilter **)((longlong)this + 0x10));
  return;
}

// operator() @ 142355390

void __thiscall
`FImageCore::CopyImage'::__l193::<lambda_30>::operator()
          (void *this,FImageView *param_1,long64 param_2)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  long64 lVar5;
  ulong64 uVar6;
  longlong lVar7;
  undefined2 uStack_9a;
  ForAnyElementType local_98;
  long64 local_90;
  ulong64 local_88;
  FImageView local_80;
  FImageView local_68;
  FImageView local_50;
  FImageView local_38;
  
  iVar1 = **(int **)this;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_88 = 0;
  if ((iVar1 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Image.IsImageInfoValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x31,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar5 = ERawImageFormat::GetBytesPerPixel(RGBA32F);
  uVar6 = lVar5 * iVar1;
  if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  local_90 = 0;
  if (local_88 != uVar6) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar6,&local_98,0,(long64 *)&local_88);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
            (1,1,uVar6,&local_98,&local_90,(long64 *)&local_88);
  lVar7 = *(int *)((longlong)&param_1->_padding_ + 4) + param_2;
  while( true ) {
    if (lVar7 <= param_2) {
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_98.Data);
      }
      return;
    }
    piVar2 = *(int **)this;
    if (((param_2 < 0) || ((longlong)piVar2[2] * (longlong)piVar2[1] <= param_2)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Y >= 0 && Y < ImageParallelForComputeNumRows(Image)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageParallelFor.h"
                           ,0x2c,L""), bVar4)) break;
    local_80.RawData = *(void **)(piVar2 + 4);
    local_80._padding_ = CONCAT44(1,(int)*(undefined8 *)piVar2);
    local_80._padding_ = CONCAT44((int)((ulonglong)*(undefined8 *)(piVar2 + 2) >> 0x20),1);
    lVar5 = ERawImageFormat::GetBytesPerPixel(*(Type *)(piVar2 + 3));
    local_80.RawData = (void *)(*piVar2 * lVar5 * param_2 + *(longlong *)(piVar2 + 4));
    piVar2 = *(int **)((longlong)this + 8);
    if (((param_2 < 0) || ((longlong)piVar2[2] * (longlong)piVar2[1] <= param_2)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Y >= 0 && Y < ImageParallelForComputeNumRows(Image)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageParallelFor.h"
                           ,0x2c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_68.RawData = *(void **)(piVar2 + 4);
    local_68._padding_ = CONCAT44(1,(int)*(undefined8 *)piVar2);
    local_68._padding_ = CONCAT44((int)((ulonglong)*(undefined8 *)(piVar2 + 2) >> 0x20),1);
    lVar5 = ERawImageFormat::GetBytesPerPixel(*(Type *)(piVar2 + 3));
    local_50._padding_ = CONCAT44(1,iVar1);
    local_50._padding_ = CONCAT26(uStack_9a,0x500000001);
    local_50.RawData = local_98.Data;
    local_68.RawData = (void *)(*piVar2 * lVar5 * param_2 + *(longlong *)(piVar2 + 4));
    FImageCore::CopyImage(&local_80,&local_50);
    local_38._padding_ = CONCAT44(1,iVar1);
    local_38._padding_ = CONCAT26(uStack_9a,0x500000001);
    local_38.RawData = local_98.Data;
    FImageCore::CopyImage(&local_38,&local_68);
    param_2 = param_2 + 1;
  }
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

// ChangeToAlphaWeighted @ 142357040

/* WARNING: Enum "stbir_pixel_layout": Some values do not have unique names */

stbir_pixel_layout __cdecl FImageCore::ChangeToAlphaWeighted(stbir_pixel_layout param_1)

{
  code *pcVar1;
  bool bVar2;
  stbir_pixel_layout sVar3;
  
  if (param_1 == STBIR_RGBA_NO_AW) {
    return STBIR_RGBA;
  }
  if (param_1 != STBIR_BGRA_NO_AW) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x780,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
    return param_1;
  }
  return STBIR_BGRA;
}

// ComputeChannelLinearMinMax @ 1423570a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __cdecl
FImageCore::ComputeChannelLinearMinMax
          (FImageView *param_1,FLinearColor *param_2,FLinearColor *param_3)

{
  Type TVar1;
  code *pcVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong _Size;
  ulonglong uVar7;
  long64 lVar8;
  int iVar9;
  longlong lVar10;
  void *_Src;
  uchar *_Dst;
  size_t _Size_00;
  ulonglong uVar11;
  undefined1 auStackY_178 [32];
  <lambda_1> local_138;
  ForAnyElementType local_130;
  long64 alStack_128 [2];
  longlong local_118;
  long64 local_110;
  ulonglong local_108;
  void *local_100;
  FScriptContainerElement *local_f8;
  FScriptContainerElement *local_f0;
  FImageView local_e8;
  ulonglong local_d0;
  ulonglong local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  ulonglong **local_a8;
  ulonglong *local_a0;
  ulonglong *local_98;
  void **local_90;
  longlong *local_88;
  FScriptContainerElement **local_80;
  FScriptContainerElement **local_78;
  SixteenBytes local_70;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  lVar10 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4)
           * (longlong)(int)param_1->_padding_;
  if (lVar10 == 0) {
    *(undefined8 *)&param_3->field0_0x0 = 0;
    *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = 0;
    *(undefined8 *)&param_2->field0_0x0 = 0;
    *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = 0;
    return;
  }
  TVar1 = *(Type *)((longlong)&param_1->_padding_ + 4);
  local_118 = 0;
  switch(TVar1) {
  case G8:
  case BGRA8:
    local_118 = 1;
    break;
  case BGRE8:
  case RGBA16F:
  case RGBA32F:
  case R16F:
  case R32F:
    goto switchD_14235711b_caseD_2;
  case RGBA16:
  case G16:
    local_118 = 2;
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x183,L"ComputeChannelLinearMinMax Invalid pixel format");
    if (!bVar4) {
      *(undefined8 *)&param_3->field0_0x0 = 0;
      *(undefined8 *)((longlong)&param_3->field0_0x0 + 8) = 0;
      *(undefined8 *)&param_2->field0_0x0 = 0;
      *(undefined8 *)((longlong)&param_2->field0_0x0 + 8) = 0;
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (lVar10 < 0x10) {
switchD_14235711b_caseD_2:
    ComputeChannelLinearMinMax_Generic(param_1,param_2,param_3);
    return;
  }
  _Size = ERawImageFormat::GetBytesPerPixel(TVar1);
  if (((0x10 / (_Size & 0xffffffff)) * _Size != 0x10) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PixelsPer16 * BytesPerPixel) == 16",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                         ,0x1ab,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar7 = FImageInfo::GetImageSizeBytes((FImageInfo *)param_1);
  if ((_Size * lVar10 - uVar7 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(BytesPerPixel * NumPixels) == ImageSizeBytes",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                         ,0x1ae,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_110 = 0;
  uVar11 = uVar7 & 0xfffffffffffffff0;
  local_108 = uVar11;
  local_c8 = uVar11;
  iVar5 = ImageParallelForComputeNumJobsForPixels(&local_110,lVar10);
  local_130.Data = (FScriptContainerElement *)0x0;
  alStack_128[0] = 0;
  alStack_128[1] = 0;
  local_d0 = local_110 * _Size + 0xf & 0xfffffffffffffff0;
  iVar9 = (uint)(uVar7 != uVar11) + iVar5;
  lVar10 = (longlong)iVar9;
  uVar3 = lVar10 * 2;
  if ((longlong)uVar3 < 1) {
    if ((longlong)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar3);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (0x10,2,uVar3,&local_130,alStack_128,alStack_128 + 1);
    if (0 < alStack_128[0]) goto LAB_1423572b5;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("(Index >= 0) & (Index < ArrayNum)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                     ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
  if (bVar4) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1423572b5:
  local_f8 = local_130.Data;
  uVar6 = 0;
  if (lVar10 < alStack_128[0]) {
    uVar6 = (uint)(iVar9 >> 0x1f) >> 0x1f ^ 1;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_f0 = local_130.Data + lVar10 * 0x10;
  local_100 = param_1->RawData;
  local_a0 = &local_d0;
  local_98 = &local_108;
  local_90 = &local_100;
  local_88 = &local_118;
  local_80 = &local_f8;
  local_78 = &local_f0;
  local_c0.DataPtr = (void **)0x0;
  local_c0.ArrayNum = 0;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCore::ComputeChannelLinearMinMax'::__l2::<lambda_1>,void,int>
             ::Call;
  local_a8 = &local_a0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"PF.ComputeChannelLinearMinMax",iVar5,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,
             local_138,Unbalanced,&local_c0);
  if (uVar7 != local_c8) {
    if ((lVar10 != iVar5 + 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumSixteens == NumJobs + 1",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                           ,0x1e4,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    _Src = (void *)((longlong)local_100 + local_108);
    _Size_00 = uVar7 - local_108;
    if ((((longlong)_Size_00 < 1) || (0xf < (longlong)_Size_00)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailSize > 0 && TailSize < 16",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                           ,0x1e8,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    memcpy(&local_70,_Src,_Size_00);
    _Dst = local_70.Bytes + _Size_00;
    if (_Dst < local_60) {
      do {
        memcpy(_Dst,&local_70,_Size);
        _Dst = _Dst + _Size;
      } while (_Dst < local_60);
    }
    if ((_Dst != local_60) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TailPtr == TailEnd",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                           ,500,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    *(undefined8 *)(local_f8 + (longlong)iVar5 * 0x10) = local_70._0_8_;
    *(undefined8 *)(local_f8 + (longlong)iVar5 * 0x10 + 8) = local_70._8_8_;
    *(undefined8 *)(local_f0 + (longlong)iVar5 * 0x10) = local_70._0_8_;
    *(undefined8 *)(local_f0 + (longlong)iVar5 * 0x10 + 8) = local_70._8_8_;
  }
  if (local_118 == 1) {
    if ((alStack_128[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::`anonymous_namespace'::ComputeChannelLinearMinMax_Part_U8
              ((uchar *)local_130.Data,uVar3,(SixteenBytes *)local_60,(SixteenBytes *)local_50);
  }
  else {
    if ((alStack_128[0] < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    ::`anonymous_namespace'::ComputeChannelLinearMinMax_Part_U16
              ((uchar *)local_130.Data,uVar3,(SixteenBytes *)local_60,(SixteenBytes *)local_50);
  }
  local_e8.RawData = local_60;
  local_e8._padding_._4_1_ = (Type)((ulonglong)param_1->_padding_ >> 0x20);
  TVar1 = local_e8._padding_._4_1_;
  local_e8._padding_ = CONCAT44((int)((ulonglong)param_1->_padding_ >> 0x20),1);
  iVar5 = (int)(0x20 / (_Size & 0xffffffff));
  local_e8._padding_ = CONCAT44(1,iVar5);
  lVar8 = ERawImageFormat::GetBytesPerPixel(TVar1);
  if ((lVar8 * iVar5 != 0x20) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccumView.GetImageSizeBytes() == 32",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                         ,0x213,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  ComputeChannelLinearMinMax_Generic(&local_e8,param_2,param_3);
  if (local_130.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_130.Data);
  }
  return;
}

// ComputeImageLinearAverage @ 142357c30

FLinearColor * __cdecl
FImageCore::ComputeImageLinearAverage(FLinearColor *__return_storage_ptr__,FImageView *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  FLinearColor *pFVar5;
  FScriptContainerElement *pFVar6;
  ForAnyElementType FVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  <lambda_1> local_res10 [8];
  ForAnyElementType local_78;
  int local_70 [2];
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  void *local_38;
  ForAnyElementType *local_28;
  
  uVar3 = *(int *)((longlong)&param_1->_padding_ + 4) * (int)param_1->_padding_;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70[0] = 0;
  local_70[1] = 0;
  if ((int)uVar3 < 1) {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,uVar3,&local_78,local_70,local_70 + 1);
  }
  iVar4 = ImageParallelForComputeNumJobs(param_1,(long64 *)local_res10);
  local_48 = param_1->_padding_;
  lStack_40 = param_1->_padding_;
  local_38 = param_1->RawData;
  local_28 = &local_78;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::ImageParallelProcessLinearPixels<`FImageCore::ComputeImageLinearAverage'::__l2::<lambda_1>_>'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_48;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"PF.ComputeImageLinearAverage",iVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             local_res10[0],Unbalanced,&local_68);
  FVar7.Data = local_78.Data;
  lVar8 = (longlong)local_70[0];
  if ((local_70[0] < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FLinearColor *)(*pcVar1)();
    return pFVar5;
  }
  fVar9 = __real_3f800000;
  fVar10 = 0.0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  fVar13 = 0.0;
  pFVar6 = FVar7.Data + lVar8 * 0x10;
  for (; FVar7.Data != pFVar6; FVar7.Data = FVar7.Data + 0x10) {
    fVar10 = fVar10 + *(float *)FVar7.Data;
    fVar11 = fVar11 + *(float *)(FVar7.Data + 4);
    fVar12 = fVar12 + *(float *)(FVar7.Data + 8);
    fVar13 = fVar13 + *(float *)(FVar7.Data + 0xc);
  }
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar13;
  fVar9 = fVar9 / (float)((longlong)(int)param_1->_padding_ *
                          (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
                         (longlong)(int)param_1->_padding_);
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar9 * fVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar9 * fVar11;
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar9 * fVar12;
  (__return_storage_ptr__->field0_0x0)._s_0.A = fVar9 * fVar13;
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  return __return_storage_ptr__;
}

// CopyImage @ 142358470

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FImageCore::CopyImage(FImageView *param_1,FImageView *param_2)

{
  float fVar1;
  ulonglong uVar2;
  Type TVar3;
  byte bVar4;
  char cVar5;
  Type TVar6;
  <lambda_1> <Var7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  void *pvVar11;
  void *pvVar12;
  code *pcVar13;
  undefined1 auVar14 [14];
  undefined1 auVar15 [14];
  uint uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [14];
  bool bVar19;
  FLinearColor_u_0 *pFVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  float fVar40;
  undefined4 uVar41;
  bool bVar42;
  bool bVar43;
  int iVar44;
  FColor FVar45;
  int iVar46;
  long64 lVar47;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  FLinearColor *pFVar48;
  TArrayView<std::nullptr_t,int> *pTVar49;
  longlong lVar50;
  FLinearColor *pFVar51;
  float *pfVar52;
  ulonglong *puVar53;
  undefined1 *puVar54;
  byte *pbVar55;
  ushort *puVar56;
  longlong lVar57;
  size_t _Size;
  longlong lVar58;
  int iVar59;
  TFunctionRef<void___cdecl(int)> *pTVar60;
  ulong64 uVar61;
  FColor *pFVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [12];
  uint uVar68;
  uint uVar69;
  uint uVar71;
  uint uVar72;
  ushort local_res18 [4];
  FColor_u_0 local_res20 [2];
  long64 local_778;
  undefined4 local_770;
  undefined4 local_76c;
  int local_768;
  int iStack_764;
  int iStack_760;
  Type TStack_75c;
  undefined1 uStack_75b;
  undefined2 uStack_75a;
  ForAnyElementType local_758;
  long64 local_750;
  ulong64 local_748 [2];
  long64 local_738;
  code *local_730;
  long64 *local_728;
  TArrayView<std::nullptr_t,int> local_720;
  code *local_710;
  long64 *local_708;
  <lambda_3> local_700;
  TArrayView<std::nullptr_t,int> local_6f0;
  code *local_6e0;
  void **local_6d8;
  TArrayView<std::nullptr_t,int> local_6d0;
  code *local_6c0;
  long64 *local_6b8;
  TArrayView<std::nullptr_t,int> local_6b0;
  code *local_6a0;
  long64 *local_698;
  <lambda_8> local_690;
  <lambda_9> local_680;
  TArrayView<std::nullptr_t,int> local_670;
  code *local_660;
  long64 *local_658;
  TArrayView<std::nullptr_t,int> local_650;
  code *local_640;
  long64 *local_638;
  TArrayView<std::nullptr_t,int> local_630;
  code *local_620;
  long64 *local_618;
  TArrayView<std::nullptr_t,int> local_610;
  code *local_600;
  long64 *local_5f8;
  TArrayView<std::nullptr_t,int> local_5f0;
  code *local_5e0;
  long64 *local_5d8;
  TArrayView<std::nullptr_t,int> local_5d0;
  code *local_5c0;
  long64 *local_5b8;
  <lambda_18> local_5b0;
  TArrayView<std::nullptr_t,int> local_5a0;
  code *local_590;
  long64 *local_588;
  TArrayView<std::nullptr_t,int> local_580;
  code *local_570;
  long64 *local_568;
  TArrayView<std::nullptr_t,int> local_560;
  code *local_550;
  long64 *local_548;
  <lambda_21> local_540;
  TArrayView<std::nullptr_t,int> local_530;
  code *local_520;
  long64 *local_518;
  TArrayView<std::nullptr_t,int> local_510;
  code *local_500;
  long64 *local_4f8;
  TArrayView<std::nullptr_t,int> local_4f0;
  code *local_4e0;
  long64 *local_4d8;
  TArrayView<std::nullptr_t,int> local_4d0;
  code *local_4c0;
  long64 *local_4b8;
  TArrayView<std::nullptr_t,int> local_4b0;
  code *local_4a0;
  long64 *local_498;
  TArrayView<std::nullptr_t,int> local_490;
  code *local_480;
  long64 *local_478;
  TArrayView<std::nullptr_t,int> local_470;
  code *local_460;
  long64 *local_458;
  TArrayView<std::nullptr_t,int> local_450;
  code *local_440;
  longlong *local_438;
  TArrayView<std::nullptr_t,int> local_430;
  FImageView local_420;
  FImageView local_408;
  long64 local_3f0;
  longlong local_3e8;
  void *local_3e0;
  FLinearColor *local_3d8;
  long64 local_3d0;
  longlong local_3c8;
  void *local_3c0;
  FLinearColor *local_3b8;
  void *local_3b0;
  FLinearColor *local_3a8;
  long64 local_3a0;
  longlong local_398;
  long64 local_390;
  longlong local_388;
  void *local_380;
  FLinearColor *local_378;
  long64 local_370;
  longlong local_368;
  void *local_360;
  FLinearColor *local_358;
  long64 local_350;
  longlong local_348;
  void *local_340;
  FLinearColor *local_338;
  long64 local_330;
  longlong local_328;
  FLinearColor *local_320;
  void *local_318;
  long64 local_310;
  longlong local_308;
  FLinearColor *local_300;
  void *local_2f8;
  long64 local_2f0;
  longlong local_2e8;
  FLinearColor *local_2e0;
  void *local_2d8;
  long64 local_2d0;
  longlong local_2c8;
  FLinearColor *local_2c0;
  void *local_2b8;
  long64 local_2b0;
  longlong local_2a8;
  FLinearColor *local_2a0;
  FColor *local_298;
  long64 local_290;
  longlong local_288;
  FLinearColor *local_280;
  void *local_278;
  long64 local_270;
  longlong local_268;
  FLinearColor *local_260;
  ulonglong *local_258;
  long64 local_250;
  longlong local_248;
  FLinearColor *local_240;
  ushort *local_238;
  long64 local_230;
  longlong local_228;
  FLinearColor *local_220;
  void *local_218;
  long64 local_210;
  longlong local_208;
  void *local_200;
  void *local_1f8;
  long64 local_1f0;
  longlong local_1e8;
  void *local_1e0;
  void *local_1d8;
  long64 local_1d0;
  longlong local_1c8;
  void *local_1c0;
  void *local_1b8;
  long64 local_1b0;
  longlong local_1a8;
  void *local_1a0;
  FLinearColor *local_198;
  void *local_190;
  FLinearColor *local_188;
  long64 local_180;
  longlong local_178;
  FLinearColor *local_170;
  FColor *local_168;
  FLinearColor *local_160;
  FColor *local_158;
  long64 local_150;
  longlong local_148;
  void *local_140;
  void *local_138;
  void *local_130;
  void *local_128;
  FImageView local_120;
  FImageView local_108;
  longlong local_f0;
  longlong lStack_e8;
  void *local_e0;
  long64 local_d8;
  FImageView *local_d0;
  FImageView *local_c8;
  FLinearColor local_c0;
  FLinearColor local_b0;
  FLinearColor local_a0 [6];
  uint uVar70;
  
  if (((*(char *)((longlong)&param_1->_padding_ + 5) != '\0') &&
      (TVar3 = *(Type *)((longlong)&param_1->_padding_ + 4), TVar3 != G8)) && (TVar3 != BGRA8)) {
    if (2 < (byte)LogImageCore._0_1_) {
      ERawImageFormat::GetName(TVar3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    local_420._padding_ = param_1->_padding_;
    local_420.RawData = param_1->RawData;
    local_420._padding_._6_2_ = (undefined2)((ulonglong)param_1->_padding_ >> 0x30);
    local_420._padding_._0_6_ = (uint6)(uint5)param_1->_padding_;
    CopyImage(&local_420,param_2);
    return;
  }
  if (((*(char *)((longlong)&param_2->_padding_ + 5) != '\0') &&
      (TVar3 = *(Type *)((longlong)&param_2->_padding_ + 4), TVar3 != G8)) && (TVar3 != BGRA8)) {
    if (2 < (byte)LogImageCore._0_1_) {
      ERawImageFormat::GetName(TVar3);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    local_408._padding_ = param_2->_padding_;
    local_408.RawData = param_2->RawData;
    local_408._padding_._6_2_ = (undefined2)((ulonglong)param_2->_padding_ >> 0x30);
    local_408._padding_._0_6_ = (uint6)(uint5)param_2->_padding_;
    CopyImage(param_1,&local_408);
    return;
  }
  iVar46 = *(int *)((longlong)&param_1->_padding_ + 4);
  iVar59 = (int)param_1->_padding_;
  if ((longlong)iVar46 * (longlong)iVar59 * (longlong)(int)param_1->_padding_ < 0x4001) {
LAB_142358671:
    bVar19 = false;
  }
  else {
    if (CpuChannel->Enabled < 0) {
      iVar46 = *(int *)((longlong)&param_1->_padding_ + 4);
      iVar59 = (int)param_1->_padding_;
      goto LAB_142358671;
    }
    bVar19 = true;
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ("Texture.CopyImage",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,400);
    iVar46 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar59 = (int)param_1->_padding_;
  }
  if ((((((int)param_1->_padding_ < 0) || (iVar46 < 0)) ||
       ((iVar59 < 0 ||
        ((bVar4 = *(byte *)((longlong)&param_1->_padding_ + 4), bVar4 == 0xff ||
         (cVar5 = *(char *)((longlong)&param_1->_padding_ + 5), cVar5 == '\x03')))))) ||
      ((1 < bVar4 && (cVar5 != '\0')))) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcImage.IsImageInfoValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0x192,L""), bVar42)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((((((int)param_2->_padding_ < 0) || (*(int *)((longlong)&param_2->_padding_ + 4) < 0)) ||
        ((int)param_2->_padding_ < 0)) ||
       ((bVar4 = *(byte *)((longlong)&param_2->_padding_ + 4), bVar4 == 0xff ||
        (cVar5 = *(char *)((longlong)&param_2->_padding_ + 5), cVar5 == '\x03')))) ||
      ((1 < bVar4 && (cVar5 != '\0')))) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestImage.IsImageInfoValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0x193,L""), bVar42)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (((longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
       (longlong)(int)param_1->_padding_ -
       (longlong)(int)param_2->_padding_ * (longlong)(int)param_2->_padding_ *
       (longlong)*(int *)((longlong)&param_2->_padding_ + 4) != 0) &&
     (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcImage.GetNumPixels() == DestImage.GetNumPixels()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0x194,L""), bVar42)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  TVar3 = *(Type *)((longlong)&param_2->_padding_ + 4);
  TVar6 = *(Type *)((longlong)&param_1->_padding_ + 4);
  if ((TVar6 == TVar3) &&
     (*(char *)((longlong)&param_1->_padding_ + 5) == *(char *)((longlong)&param_2->_padding_ + 5)))
  {
    iVar46 = *(int *)((longlong)&param_1->_padding_ + 4);
    lVar57 = param_1->_padding_;
    lVar50 = param_1->_padding_;
    lVar47 = ERawImageFormat::GetBytesPerPixel(TVar6);
    lVar58 = param_2->_padding_;
    _Size = lVar47 * (longlong)(int)lVar57 * (longlong)iVar46 * (longlong)(int)lVar50;
    iVar46 = *(int *)((longlong)&param_2->_padding_ + 4);
    lVar57 = param_2->_padding_;
    lVar47 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_2->_padding_ + 4));
    if ((lVar47 * (longlong)iVar46 * (longlong)(int)lVar58 * (longlong)(int)lVar57 - _Size != 0) &&
       (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                           ("DestImage.GetImageSizeBytes() == Bytes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                            ,0x19d,L""), bVar42)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    memcpy(param_2->RawData,param_1->RawData,_Size);
    goto LAB_142359f0c;
  }
  if (5 < (byte)LogImageCore._0_1_) {
    ERawImageFormat::GetName(TVar3);
    ERawImageFormat::GetName(*(Type *)((longlong)&param_1->_padding_ + 4));
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
  }
  <Var7 = *(<lambda_1> *)((longlong)&param_2->_padding_ + 5);
  lVar57 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4)
           * (longlong)(int)param_1->_padding_;
  iVar44 = ImageParallelForComputeNumJobsForPixels(&local_778,lVar57);
  fVar40 = __real_37800080;
  uVar39 = _UNK_1506896ec;
  uVar38 = _UNK_1506896e8;
  uVar37 = _UNK_1506896e4;
  uVar36 = __xmm_7f8000007f8000007f8000007f800000;
  fVar35 = _UNK_1506896dc;
  fVar1 = _UNK_1506896d8;
  fVar21 = _UNK_1506896d4;
  fVar63 = ___xmm_77800000778000007780000077800000;
  uVar34 = _UNK_1506895bc;
  uVar33 = _UNK_1506895b8;
  uVar32 = _UNK_1506895b4;
  uVar31 = ___xmm_00400000004000000040000000400000;
  uVar30 = _UNK_1506895ac;
  uVar29 = _UNK_1506895a8;
  uVar28 = _UNK_1506895a4;
  uVar27 = ___xmm_00007fff00007fff00007fff00007fff;
  iVar26 = _UNK_15068959c;
  iVar25 = _UNK_150689598;
  iVar24 = _UNK_150689594;
  iVar23 = ___xmm_00007c0000007c0000007c0000007c00;
  iVar22 = _UNK_15068958c;
  iVar10 = _UNK_150689588;
  iVar59 = _UNK_150689584;
  iVar46 = ___xmm_00007bff00007bff00007bff00007bff;
  fVar64 = __real_3b808081;
  cVar5 = *(char *)((longlong)&param_1->_padding_ + 4);
  if (cVar5 != '\x05') {
    cVar8 = *(char *)((longlong)&param_2->_padding_ + 4);
    if (cVar8 != '\x05') {
      if (cVar5 == '\x01') {
        if (cVar8 == '\x03') {
          if (*(char *)((longlong)&param_1->_padding_ + 5) != '\0') {
LAB_142359cb1:
            bVar42 = -1 < CpuChannel->Enabled;
            if (bVar42) {
              FCpuProfilerTrace::GetOrCreateSpecId
                        (&__CpuProfilerEventSpecId877,"Texture.CopyImage.TempLinear",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x36d);
              FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId877);
            }
            iVar46 = (int)param_1->_padding_;
            iVar59 = *(int *)((longlong)&param_1->_padding_ + 4);
            iVar10 = (int)param_1->_padding_;
            if ((longlong)iVar46 * (longlong)iVar59 * (longlong)iVar10 * 0x10 < 0x10000) {
              TStack_75c = RGBA32F;
              uStack_75b = 0;
              local_758.Data = (FScriptContainerElement *)0x0;
              local_748[0] = 0;
              local_768 = iVar46;
              iStack_764 = iVar59;
              iStack_760 = iVar10;
              if ((((iVar46 < 0) || (iVar59 < 0)) || (iVar10 < 0)) &&
                 (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Image.IsImageInfoValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                                      ,0x31,L""), bVar43)) {
                pcVar13 = (code *)swi(3);
                (*pcVar13)();
                return;
              }
              lVar57 = (longlong)iStack_764;
              lVar58 = (longlong)iStack_760;
              lVar50 = (longlong)local_768;
              lVar47 = ERawImageFormat::GetBytesPerPixel(TStack_75c);
              uVar61 = lVar47 * lVar58 * lVar57 * lVar50;
              if ((longlong)uVar61 < 0) {
                    /* WARNING: Subroutine does not return */
                UE::Core::Private::OnInvalidArrayNum(uVar61);
              }
              local_750 = 0;
              if (local_748[0] != uVar61) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                          (1,1,uVar61,&local_758,0,(long64 *)local_748);
              }
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                        (1,1,uVar61,&local_758,&local_750,(long64 *)local_748);
              local_120._padding_ = CONCAT44(iStack_764,local_768);
              local_120._padding_ =
                   CONCAT26(uStack_75a,CONCAT15(uStack_75b,CONCAT14(TStack_75c,iStack_760)));
              local_120.RawData = local_758.Data;
              CopyImage(param_1,&local_120);
              local_108._padding_ = CONCAT44(iStack_764,local_768);
              local_108._padding_ =
                   CONCAT26(uStack_75a,CONCAT15(uStack_75b,CONCAT14(TStack_75c,iStack_760)));
              local_108.RawData = local_758.Data;
              CopyImage(&local_108,param_2);
              if (local_758.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_758.Data);
              }
            }
            else {
              iVar46 = ImageParallelForComputeNumJobs(param_1,&local_738);
              local_f0 = param_1->_padding_;
              lStack_e8 = param_1->_padding_;
              local_e0 = param_1->RawData;
              local_d8 = local_738;
              local_440 = UE::Core::Private::Function::
                          TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::CopyImage'::__l193::<lambda_30>_>'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_438 = &local_f0;
              local_450.DataPtr = (void **)0x0;
              local_450.ArrayNum = 0;
              local_d0 = param_1;
              local_c8 = param_2;
              ParallelForImpl::
              ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                        (L"PF.CopyImage.TempLinear",iVar46,1,
                         (TFunctionRef<void___cdecl(int)> *)&local_440,<Var7,Unbalanced,&local_450);
            }
            if (bVar42) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            goto LAB_142359f0c;
          }
          pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_4c0;
          local_138 = param_1->RawData;
          local_140 = param_2->RawData;
          local_150 = local_778;
          local_4c0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'::__l174::<lambda_25>,`FImageCore::CopyImage'::__l174::<lambda_26>_>'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_4b8 = &local_150;
          pTVar49 = &local_4d0;
          local_4d0.DataPtr = (void **)0x0;
          local_4d0.ArrayNum = 0;
          local_148 = lVar57;
          local_130 = local_140;
          local_128 = local_138;
        }
        else {
          if ((cVar8 != '\0') ||
             (*(char *)((longlong)&param_1->_padding_ + 5) !=
              *(char *)((longlong)&param_2->_padding_ + 5))) goto LAB_142359cb1;
          pvVar11 = param_2->RawData;
          lVar50 = 0;
          pvVar12 = param_1->RawData;
          if (iVar44 < 2) {
            if (0 < lVar57) {
              do {
                *(undefined1 *)((longlong)pvVar11 + lVar50) =
                     *(undefined1 *)((longlong)pvVar12 + lVar50 * 4 + 2);
                lVar50 = lVar50 + 1;
              } while (lVar50 < lVar57);
            }
            goto LAB_142359f0c;
          }
          pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_4a0;
          local_210 = local_778;
          local_4a0 = UE::Core::Private::Function::
                      TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l182::<lambda_28>_>'::__l9::<lambda_1>,void,int>
                      ::Call;
          local_498 = &local_210;
          pTVar49 = &local_4b0;
          local_4b0.DataPtr = (void **)0x0;
          local_4b0.ArrayNum = 0;
          local_208 = lVar57;
          local_200 = pvVar11;
          local_1f8 = pvVar12;
        }
      }
      else if (cVar5 == '\x03') {
        if ((cVar8 != '\x01') || (*(char *)((longlong)&param_2->_padding_ + 5) != '\0'))
        goto LAB_142359cb1;
        pvVar11 = param_2->RawData;
        lVar50 = 0;
        if (iVar44 < 2) {
          if (0 < lVar57) {
            puVar56 = (ushort *)((longlong)param_1->RawData + 2);
            do {
              local_770 = CONCAT13((char)((puVar56[2] + 0x81) * 0xff >> 0x10),
                                   CONCAT12((char)((puVar56[-1] + 0x81) * 0xff >> 0x10),
                                            CONCAT11((char)((*puVar56 + 0x81) * 0xff >> 0x10),
                                                     (char)((puVar56[1] + 0x81) * 0xff >> 0x10))));
              *(undefined4 *)((longlong)pvVar11 + lVar50 * 4) = local_770;
              lVar50 = lVar50 + 1;
              puVar56 = puVar56 + 4;
            } while (lVar50 < lVar57);
          }
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_480;
        local_1f0 = local_778;
        local_480 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l178::<lambda_27>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_478 = &local_1f0;
        pTVar49 = &local_490;
        local_490.DataPtr = (void **)0x0;
        local_490.ArrayNum = 0;
        local_1e8 = lVar57;
        local_1e0 = pvVar11;
        local_1d8 = param_1->RawData;
      }
      else {
        if (((cVar5 != '\0') || (cVar8 != '\x01')) ||
           (*(char *)((longlong)&param_1->_padding_ + 5) !=
            *(char *)((longlong)&param_2->_padding_ + 5))) goto LAB_142359cb1;
        pvVar11 = param_1->RawData;
        lVar50 = 0;
        pvVar12 = param_2->RawData;
        if (iVar44 < 2) {
          if (0 < lVar57) {
            local_76c = 0xff000000;
            do {
              uVar41 = local_76c;
              uVar9 = *(undefined1 *)((longlong)pvVar11 + lVar50);
              local_76c._3_1_ = SUB41(uVar41,3);
              local_76c._0_3_ = CONCAT12(uVar9,CONCAT11(uVar9,uVar9));
              *(undefined4 *)((longlong)pvVar12 + lVar50 * 4) = local_76c;
              lVar50 = lVar50 + 1;
            } while (lVar50 < lVar57);
          }
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_460;
        local_1d0 = local_778;
        local_460 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l186::<lambda_29>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_458 = &local_1d0;
        pTVar49 = &local_470;
        local_470.DataPtr = (void **)0x0;
        local_470.ArrayNum = 0;
        local_1c8 = lVar57;
        local_1c0 = pvVar11;
        local_1b8 = pvVar12;
      }
      goto LAB_142359c88;
    }
    pFVar51 = param_2->RawData;
    switch(cVar5) {
    case '\0':
      cVar5 = *(char *)((longlong)&param_1->_padding_ + 5);
      pvVar11 = param_1->RawData;
      if (cVar5 == '\0') {
        lVar50 = 0;
        if (iVar44 < 2) {
          if (3 < lVar57) {
            lVar58 = (lVar57 - 4U >> 2) + 1;
            lVar50 = lVar58 * 4;
            pfVar52 = &pFVar51[1].field0_0x0._s_0.B;
            pbVar55 = (byte *)((longlong)pvVar11 + 2);
            do {
              fVar63 = (float)pbVar55[-2] * fVar64;
              pfVar52[-6] = fVar63;
              pfVar52[-5] = fVar63;
              pfVar52[-4] = fVar63;
              pfVar52[-3] = 1.0;
              fVar63 = (float)pbVar55[-1] * fVar64;
              ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar63;
              pfVar52[-1] = fVar63;
              *pfVar52 = fVar63;
              pfVar52[1] = 1.0;
              fVar63 = (float)*pbVar55 * fVar64;
              pfVar52[2] = fVar63;
              pfVar52[3] = fVar63;
              pfVar52[4] = fVar63;
              pfVar52[5] = 1.0;
              fVar63 = (float)pbVar55[1] * fVar64;
              pfVar52[6] = fVar63;
              pfVar52[7] = fVar63;
              pfVar52[8] = fVar63;
              pfVar52[9] = 1.0;
              lVar58 = lVar58 + -1;
              pfVar52 = pfVar52 + 0x10;
              pbVar55 = pbVar55 + 4;
            } while (lVar58 != 0);
          }
          if (lVar50 < lVar57) {
            pfVar52 = &pFVar51[lVar50].field0_0x0._s_0.B;
            do {
              pbVar55 = (byte *)(lVar50 + (longlong)pvVar11);
              lVar50 = lVar50 + 1;
              fVar63 = (float)*pbVar55 * fVar64;
              ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar63;
              pfVar52[-1] = fVar63;
              *pfVar52 = fVar63;
              pfVar52[1] = 1.0;
              pfVar52 = pfVar52 + 4;
            } while (lVar50 < lVar57);
          }
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_5e0;
        local_2f0 = local_778;
        local_5e0 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_12>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_5d8 = &local_2f0;
        pTVar49 = &local_5f0;
        local_5f0.DataPtr = (void **)0x0;
        local_5f0.ArrayNum = 0;
        local_2e8 = lVar57;
        local_2e0 = pFVar51;
        local_2d8 = pvVar11;
      }
      else if (cVar5 == '\x01') {
        lVar50 = 0;
        if (iVar44 < 2) {
          if (0 < lVar57) {
            do {
              local_res20[0]._0_1_ = *(uchar *)(lVar50 + (longlong)pvVar11);
              local_res20[0]._s_0.A = 0xff;
              local_res20[0]._1_1_ = local_res20[0]._0_1_;
              local_res20[0]._2_1_ = local_res20[0]._0_1_;
              pFVar48 = FLinearColor::FromPow22Color(local_a0,(FColor *)&local_res20[0]._s_0);
              lVar50 = lVar50 + 1;
              uVar17 = *(undefined8 *)((longlong)&pFVar48->field0_0x0 + 8);
              *(undefined8 *)&pFVar51->field0_0x0 = *(undefined8 *)&pFVar48->field0_0x0;
              *(undefined8 *)((longlong)&pFVar51->field0_0x0 + 8) = uVar17;
              pFVar51 = pFVar51 + 1;
            } while (lVar50 < lVar57);
          }
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_600;
        local_310 = local_778;
        local_600 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_14>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_5f8 = &local_310;
        pTVar49 = &local_610;
        local_610.DataPtr = (void **)0x0;
        local_610.ArrayNum = 0;
        local_308 = lVar57;
        local_300 = pFVar51;
        local_2f8 = pvVar11;
      }
      else {
        if (cVar5 != '\x02') goto LAB_142359f0c;
        lVar50 = 0;
        if (iVar44 < 2) {
          if (lVar57 < 4) {
            if (lVar57 < 1) goto LAB_142359f0c;
          }
          else {
            lVar58 = (lVar57 - 4U >> 2) + 1;
            lVar50 = lVar58 * 4;
            pfVar52 = &pFVar51[1].field0_0x0._s_0.B;
            pbVar55 = (byte *)((longlong)pvVar11 + 2);
            do {
              fVar64 = FLinearColor::sRGBToLinearTable[pbVar55[-2]];
              pfVar52[-6] = fVar64;
              pfVar52[-5] = fVar64;
              pfVar52[-4] = fVar64;
              pfVar52[-3] = 1.0;
              fVar64 = FLinearColor::sRGBToLinearTable[pbVar55[-1]];
              ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar64;
              pfVar52[-1] = fVar64;
              *pfVar52 = fVar64;
              pfVar52[1] = 1.0;
              fVar64 = FLinearColor::sRGBToLinearTable[*pbVar55];
              pfVar52[2] = fVar64;
              pfVar52[3] = fVar64;
              pfVar52[4] = fVar64;
              pfVar52[5] = 1.0;
              fVar64 = FLinearColor::sRGBToLinearTable[pbVar55[1]];
              pfVar52[6] = fVar64;
              pfVar52[7] = fVar64;
              pfVar52[8] = fVar64;
              pfVar52[9] = 1.0;
              lVar58 = lVar58 + -1;
              pfVar52 = pfVar52 + 0x10;
              pbVar55 = pbVar55 + 4;
            } while (lVar58 != 0);
            if (lVar57 <= lVar50) goto LAB_142359f0c;
          }
          pfVar52 = &pFVar51[lVar50].field0_0x0._s_0.B;
          do {
            pbVar55 = (byte *)(lVar50 + (longlong)pvVar11);
            lVar50 = lVar50 + 1;
            fVar64 = FLinearColor::sRGBToLinearTable[*pbVar55];
            ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar64;
            pfVar52[-1] = fVar64;
            *pfVar52 = fVar64;
            pfVar52[1] = 1.0;
            pfVar52 = pfVar52 + 4;
          } while (lVar50 < lVar57);
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_620;
        local_330 = local_778;
        local_620 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l154::<lambda_13>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_618 = &local_330;
        pTVar49 = &local_630;
        local_630.DataPtr = (void **)0x0;
        local_630.ArrayNum = 0;
        local_328 = lVar57;
        local_320 = pFVar51;
        local_318 = pvVar11;
      }
      break;
    case '\x01':
      cVar5 = *(char *)((longlong)&param_1->_padding_ + 5);
      pFVar62 = param_1->RawData;
      if (cVar5 == '\0') {
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_570;
        local_180 = local_778;
        local_570 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'::__l158::<lambda_16>,`FImageCore::CopyImage'::__l158::<lambda_17>_>'::__l2::<lambda_1>,void,int>
                    ::Call;
        local_568 = &local_180;
        pTVar49 = &local_580;
        local_580.DataPtr = (void **)0x0;
        local_580.ArrayNum = 0;
        local_178 = lVar57;
        local_170 = pFVar51;
        local_168 = pFVar62;
        local_160 = pFVar51;
        local_158 = pFVar62;
      }
      else {
        if (cVar5 != '\x01') {
          if (cVar5 == '\x02') {
            local_5b0.DestColors = pFVar51;
            local_5b0.SrcColors = pFVar62;
            ParallelLoop<_FImageCore::CopyImage_::__l158::<lambda_18>_>
                      (L"Texture.CopyImage.PF",iVar44,local_778,lVar57,&local_5b0);
          }
          goto LAB_142359f0c;
        }
        if (iVar44 < 2) {
          if (0 < lVar57) {
            do {
              pFVar48 = FLinearColor::FromPow22Color(&local_c0,pFVar62);
              pFVar62 = pFVar62 + 1;
              uVar17 = *(undefined8 *)((longlong)&pFVar48->field0_0x0 + 8);
              *(undefined8 *)&pFVar51->field0_0x0 = *(undefined8 *)&pFVar48->field0_0x0;
              *(undefined8 *)((longlong)&pFVar51->field0_0x0 + 8) = uVar17;
              lVar57 = lVar57 + -1;
              pFVar51 = pFVar51 + 1;
            } while (lVar57 != 0);
          }
          goto LAB_142359f0c;
        }
        pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_590;
        local_2b0 = local_778;
        local_590 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l158::<lambda_19>_>'::__l9::<lambda_1>,void,int>
                    ::Call;
        local_588 = &local_2b0;
        pTVar49 = &local_5a0;
        local_5a0.DataPtr = (void **)0x0;
        local_5a0.ArrayNum = 0;
        local_2a8 = lVar57;
        local_2a0 = pFVar51;
        local_298 = pFVar62;
      }
      break;
    case '\x02':
      pvVar11 = param_1->RawData;
      lVar50 = 0;
      if (iVar44 < 2) {
        if (0 < lVar57) {
          do {
            pFVar48 = FColor::FromRGBE((FColor *)((longlong)pvVar11 + lVar50 * 4),&local_b0);
            lVar50 = lVar50 + 1;
            uVar17 = *(undefined8 *)((longlong)&pFVar48->field0_0x0 + 8);
            *(undefined8 *)&pFVar51->field0_0x0 = *(undefined8 *)&pFVar48->field0_0x0;
            *(undefined8 *)((longlong)&pFVar51->field0_0x0 + 8) = uVar17;
            pFVar51 = pFVar51 + 1;
          } while (lVar50 < lVar57);
        }
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_550;
      local_290 = local_778;
      local_550 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l159::<lambda_20>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_548 = &local_290;
      pTVar49 = &local_560;
      local_560.DataPtr = (void **)0x0;
      local_560.ArrayNum = 0;
      local_288 = lVar57;
      local_280 = pFVar51;
      local_278 = pvVar11;
      break;
    case '\x03':
      local_540.SrcColors = param_1->RawData;
      local_540.DestColors = pFVar51;
      ParallelLoop<_FImageCore::CopyImage_::__l160::<lambda_21>_>
                (L"Texture.CopyImage.PF",iVar44,local_778,lVar57,&local_540);
      goto LAB_142359f0c;
    case '\x04':
      puVar53 = param_1->RawData;
      if (iVar44 < 2) {
        if (0 < lVar57) {
          do {
            uVar2 = *puVar53;
            auVar14._8_4_ = 0;
            auVar14._0_8_ = uVar2;
            auVar14._12_2_ = (short)(uVar2 >> 0x30);
            auVar15._8_2_ = (short)(uVar2 >> 0x20);
            auVar15._0_8_ = uVar2;
            auVar15._10_4_ = auVar14._10_4_;
            auVar18._6_8_ = 0;
            auVar18._0_6_ = auVar15._8_6_;
            puVar53 = puVar53 + 1;
            uVar68 = (ushort)uVar2 & uVar27;
            uVar70 = (uint)CONCAT82(SUB148(auVar18 << 0x40,6),(short)(uVar2 >> 0x10));
            uVar69 = uVar70 & uVar28;
            uVar16 = auVar14._10_4_ >> 0x10;
            uVar71 = auVar15._8_4_ & uVar29;
            uVar72 = uVar16 & uVar30;
            (pFVar51->field0_0x0)._s_0.R =
                 (float)(-(uint)(iVar23 < (int)uVar68) & uVar31 |
                         -(uint)(iVar46 < (int)uVar68) & uVar36 | ((ushort)uVar2 ^ uVar68) << 0x10 |
                        (uint)((float)(uVar68 << 0xd) * fVar63));
            (pFVar51->field0_0x0)._s_0.G =
                 (float)(-(uint)(iVar24 < (int)uVar69) & uVar32 |
                         -(uint)(iVar59 < (int)uVar69) & uVar37 | (uVar70 ^ uVar69) << 0x10 |
                        (uint)((float)(uVar69 << 0xd) * fVar21));
            (pFVar51->field0_0x0)._s_0.B =
                 (float)(-(uint)(iVar25 < (int)uVar71) & uVar33 |
                         -(uint)(iVar10 < (int)uVar71) & uVar38 | (auVar15._8_4_ ^ uVar71) << 0x10 |
                        (uint)((float)(uVar71 << 0xd) * fVar1));
            (pFVar51->field0_0x0)._s_0.A =
                 (float)(-(uint)(iVar26 < (int)uVar72) & uVar34 |
                         -(uint)(iVar22 < (int)uVar72) & uVar39 | (uVar16 ^ uVar72) << 0x10 |
                        (uint)((float)(uVar72 << 0xd) * fVar35));
            lVar57 = lVar57 + -1;
            pFVar51 = pFVar51 + 1;
          } while (lVar57 != 0);
        }
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_520;
      local_270 = local_778;
      local_520 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l161::<lambda_22>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_518 = &local_270;
      pTVar49 = &local_530;
      local_530.DataPtr = (void **)0x0;
      local_530.ArrayNum = 0;
      local_268 = lVar57;
      local_260 = pFVar51;
      local_258 = puVar53;
      break;
    default:
      bVar42 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0x315,L"");
      if (bVar42) goto code_r0x000142359973;
      goto LAB_142359f0c;
    case '\x06':
      pvVar11 = param_1->RawData;
      lVar50 = 0;
      if (iVar44 < 2) {
        if (0 < lVar57) {
          pfVar52 = &(pFVar51->field0_0x0)._s_0.B;
          do {
            lVar58 = lVar50 * 2;
            lVar50 = lVar50 + 1;
            fVar64 = (float)*(ushort *)((longlong)pvVar11 + lVar58) * fVar40;
            ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar64;
            pfVar52[-1] = fVar64;
            *pfVar52 = fVar64;
            pfVar52[1] = 1.0;
            pfVar52 = pfVar52 + 4;
          } while (lVar50 < lVar57);
        }
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_5c0;
      local_2d0 = local_778;
      local_5c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l155::<lambda_15>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_5b8 = &local_2d0;
      pTVar49 = &local_5d0;
      local_5d0.DataPtr = (void **)0x0;
      local_5d0.ArrayNum = 0;
      local_2c8 = lVar57;
      local_2c0 = pFVar51;
      local_2b8 = pvVar11;
      break;
    case '\a':
      puVar56 = param_1->RawData;
      if (iVar44 < 2) {
        if (0 < lVar57) {
          pfVar52 = &(pFVar51->field0_0x0)._s_0.B;
          do {
            fVar64 = FGenericPlatformMath::LoadHalf(puVar56);
            ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R = fVar64;
            puVar56 = puVar56 + 1;
            *(undefined8 *)(pfVar52 + -1) = 0;
            pfVar52[1] = 1.0;
            pfVar52 = pfVar52 + 4;
            lVar57 = lVar57 + -1;
          } while (lVar57 != 0);
        }
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_500;
      local_250 = local_778;
      local_500 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l162::<lambda_23>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_4f8 = &local_250;
      pTVar49 = &local_510;
      local_510.DataPtr = (void **)0x0;
      local_510.ArrayNum = 0;
      local_248 = lVar57;
      local_240 = pFVar51;
      local_238 = puVar56;
      break;
    case '\b':
      pvVar11 = param_1->RawData;
      lVar50 = 0;
      if (iVar44 < 2) {
        if (lVar57 < 4) {
          if (lVar57 < 1) goto LAB_142359f0c;
        }
        else {
          pfVar52 = &pFVar51[1].field0_0x0._s_0.B;
          do {
            pfVar52[-6] = (float)*(undefined4 *)((longlong)pvVar11 + lVar50 * 4);
            *(undefined8 *)(pfVar52 + -5) = 0;
            pfVar52[-3] = 1.0;
            ((FLinearColor_u_0_s_0 *)(pfVar52 + -2))->R =
                 *(float *)((longlong)pvVar11 + lVar50 * 4 + 4);
            *(undefined8 *)(pfVar52 + -1) = 0;
            pfVar52[1] = 1.0;
            pfVar52[2] = (float)*(undefined4 *)((longlong)pvVar11 + lVar50 * 4 + 8);
            *(undefined8 *)(pfVar52 + 3) = 0;
            pfVar52[5] = 1.0;
            lVar58 = lVar50 * 4;
            lVar50 = lVar50 + 4;
            pfVar52[6] = (float)*(undefined4 *)((longlong)pvVar11 + lVar58 + 0xc);
            *(undefined8 *)(pfVar52 + 7) = 0;
            pfVar52[9] = 1.0;
            pfVar52 = pfVar52 + 0x10;
          } while (lVar50 < lVar57 + -3);
          if (lVar57 <= lVar50) goto LAB_142359f0c;
        }
        pfVar52 = pFVar51[lVar50].field0_0x0.RGBA + 2;
        do {
          lVar58 = lVar50 * 4;
          lVar50 = lVar50 + 1;
          pfVar52[-2] = *(float *)((longlong)pvVar11 + lVar58);
          pfVar52[-1] = 0.0;
          pfVar52[0] = 0.0;
          pfVar52[1] = 1.0;
          pfVar52 = pfVar52 + 4;
        } while (lVar50 < lVar57);
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_4e0;
      local_230 = local_778;
      local_4e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l163::<lambda_24>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_4d8 = &local_230;
      pTVar49 = &local_4f0;
      local_4f0.DataPtr = (void **)0x0;
      local_4f0.ArrayNum = 0;
      local_228 = lVar57;
      local_220 = pFVar51;
      local_218 = pvVar11;
    }
    goto LAB_142359c88;
  }
  pFVar51 = param_1->RawData;
  if ((*(char *)((longlong)&param_2->_padding_ + 5) == '\x01') && (2 < (byte)LogImageCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
  }
  fVar21 = __real_437f0000;
  fVar63 = __real_3f000000;
  fVar64 = __real_3f800000;
  switch(*(undefined1 *)((longlong)&param_2->_padding_ + 4)) {
  case 0:
    pvVar11 = param_2->RawData;
    lVar50 = 0;
    if (<Var7 == (<lambda_1>)0x0) {
      if (iVar44 < 2) {
        if (lVar57 < 4) {
          if (lVar57 < 1) goto LAB_142359f0c;
        }
        else {
          puVar54 = (undefined1 *)((longlong)pvVar11 + 2);
          lVar58 = (lVar57 - 4U >> 2) + 1;
          pFVar48 = pFVar51 + 2;
          lVar50 = lVar58 * 4;
          do {
            fVar1 = pFVar48[-2].field0_0x0._s_0.R;
            auVar65._4_8_ = 0;
            auVar65._0_4_ = fVar1;
            if (fVar1 <= 0.0) {
              auVar65 = ZEXT812(0) << 0x20;
            }
            if (fVar64 <= auVar65._0_4_) {
              auVar65._4_8_ = auVar65._4_8_;
              auVar65._0_4_ = fVar64;
            }
            puVar54[-2] = (char)(int)(auVar65._0_4_ * fVar21 + fVar63);
            fVar1 = pFVar48[-1].field0_0x0._s_0.R;
            auVar67._4_8_ = 0;
            auVar67._0_4_ = fVar1;
            if (fVar1 <= 0.0) {
              auVar67 = ZEXT812(0) << 0x20;
            }
            if (fVar64 <= auVar67._0_4_) {
              auVar67._4_8_ = auVar67._4_8_;
              auVar67._0_4_ = fVar64;
            }
            puVar54[-1] = (char)(int)(auVar67._0_4_ * fVar21 + fVar63);
            fVar1 = (pFVar48->field0_0x0)._s_0.R;
            if (fVar1 <= 0.0) {
              fVar1 = 0.0;
            }
            if (fVar64 <= fVar1) {
              fVar1 = fVar64;
            }
            *puVar54 = (char)(int)(fVar1 * fVar21 + fVar63);
            fVar1 = pFVar48[1].field0_0x0._s_0.R;
            pFVar48 = pFVar48 + 4;
            if (fVar1 <= 0.0) {
              fVar1 = 0.0;
            }
            if (fVar64 <= fVar1) {
              fVar1 = fVar64;
            }
            puVar54[1] = (char)(int)(fVar1 * fVar21 + fVar63);
            puVar54 = puVar54 + 4;
            lVar58 = lVar58 + -1;
          } while (lVar58 != 0);
          if (lVar57 <= lVar50) goto LAB_142359f0c;
        }
        pFVar51 = pFVar51 + lVar50;
        do {
          fVar1 = (pFVar51->field0_0x0)._s_0.R;
          auVar66._4_8_ = 0;
          auVar66._0_4_ = fVar1;
          pFVar51 = pFVar51 + 1;
          if (fVar1 <= 0.0) {
            auVar66 = ZEXT812(0) << 0x20;
          }
          if (fVar64 <= auVar66._0_4_) {
            auVar66._4_8_ = auVar66._4_8_;
            auVar66._0_4_ = fVar64;
          }
          *(char *)(lVar50 + (longlong)pvVar11) = (char)(int)(auVar66._0_4_ * fVar21 + fVar63);
          lVar50 = lVar50 + 1;
        } while (lVar50 < lVar57);
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_710;
      local_3d0 = local_778;
      local_710 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l126::<lambda_2>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_708 = &local_3d0;
      pTVar49 = &local_720;
      local_720.DataPtr = (void **)0x0;
      local_720.ArrayNum = 0;
      local_3c8 = lVar57;
      local_3c0 = pvVar11;
      local_3b8 = pFVar51;
    }
    else {
      if (iVar44 < 2) {
        if (0 < lVar57) {
          do {
            FVar45 = FLinearColor::ToFColorSRGB(pFVar51);
            pFVar51 = pFVar51 + 1;
            *(undefined1 *)(lVar50 + (longlong)pvVar11) =
                 *(undefined1 *)(CONCAT44(extraout_var,FVar45.field0_0x0) + 2);
            lVar50 = lVar50 + 1;
          } while (lVar50 < lVar57);
        }
        goto LAB_142359f0c;
      }
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_730;
      local_3f0 = local_778;
      local_730 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'::__l124::<lambda_1>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_728 = &local_3f0;
      pTVar49 = &local_430;
      local_430.DataPtr = (void **)0x0;
      local_430.ArrayNum = 0;
      local_3e8 = lVar57;
      local_3e0 = pvVar11;
      local_3d8 = pFVar51;
    }
    break;
  case 1:
    pvVar11 = param_2->RawData;
    if (<Var7 == (<lambda_1>)0x0) {
      local_1b0 = local_778;
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_6c0;
      local_6c0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<4,`FImageCore::CopyImage'[::F]::<lambda_5>,`CopyImage::F'[::F]::<lambda_6>_>'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_6b8 = &local_1b0;
      pTVar49 = &local_6d0;
      local_6d0.DataPtr = (void **)0x0;
      local_6d0.ArrayNum = 0;
      local_1a8 = lVar57;
      local_1a0 = pvVar11;
      local_198 = pFVar51;
      local_190 = pvVar11;
      local_188 = pFVar51;
    }
    else {
      local_3a0 = local_778;
      pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_6e0;
      local_6e0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FImageCore::CopyImage'[::D]::<lambda_4>,void,int>::Call;
      local_6d8 = &local_3b0;
      pTVar49 = &local_6f0;
      local_6f0.DataPtr = (void **)0x0;
      local_6f0.ArrayNum = 0;
      local_3b0 = pvVar11;
      local_3a8 = pFVar51;
      local_398 = lVar57;
    }
    break;
  case 2:
    pvVar11 = param_2->RawData;
    lVar50 = 0;
    if (iVar44 < 2) {
      if (0 < lVar57) {
        do {
          FVar45 = FLinearColor::ToRGBE(pFVar51);
          pFVar51 = pFVar51 + 1;
          *(undefined4 *)((longlong)pvVar11 + lVar50 * 4) =
               *(undefined4 *)CONCAT44(extraout_var_00,FVar45.field0_0x0);
          lVar50 = lVar50 + 1;
        } while (lVar50 < lVar57);
      }
      goto LAB_142359f0c;
    }
    pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_6a0;
    local_390 = local_778;
    local_6a0 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::G]::<lambda_7>_>'::__l9::<lambda_1>,void,int>
                ::Call;
    local_698 = &local_390;
    pTVar49 = &local_6b0;
    local_6b0.DataPtr = (void **)0x0;
    local_6b0.ArrayNum = 0;
    local_388 = lVar57;
    local_380 = pvVar11;
    local_378 = pFVar51;
    break;
  case 3:
    local_690.DestColors = param_2->RawData;
    local_690.SrcColors = pFVar51;
    ParallelLoop<_FImageCore::CopyImage_[::H]::<lambda_8>_>
              (L"Texture.CopyImage.PF",iVar44,local_778,lVar57,&local_690);
    goto LAB_142359f0c;
  case 4:
    local_680.DestColors = param_2->RawData;
    local_680.SrcColors = pFVar51;
    ParallelLoop<_FImageCore::CopyImage_[::I]::<lambda_9>_>
              (L"Texture.CopyImage.PF",iVar44,local_778,lVar57,&local_680);
    goto LAB_142359f0c;
  default:
    bVar42 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                        ,0x264,L"");
    if (bVar42) {
code_r0x000142359973:
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    goto LAB_142359f0c;
  case 6:
    local_700.DestLum = param_2->RawData;
    local_700.SrcColors = pFVar51;
    ParallelLoop<_FImageCore::CopyImage_::__l127::<lambda_3>_>
              (L"Texture.CopyImage.PF",iVar44,local_778,lVar57,&local_700);
    goto LAB_142359f0c;
  case 7:
    pvVar11 = param_2->RawData;
    lVar50 = 0;
    if (iVar44 < 2) {
      if (0 < lVar57) {
        do {
          local_res18[0] = 0;
          FGenericPlatformMath::StoreHalf(local_res18,(pFVar51->field0_0x0)._s_0.R);
          pFVar51 = pFVar51 + 1;
          *(ushort *)((longlong)pvVar11 + lVar50 * 2) = local_res18[0];
          lVar50 = lVar50 + 1;
        } while (lVar50 < lVar57);
      }
      goto LAB_142359f0c;
    }
    pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_660;
    local_370 = local_778;
    local_660 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::J]::<lambda_10>_>'::__l9::<lambda_1>,void,int>
                ::Call;
    local_658 = &local_370;
    pTVar49 = &local_670;
    local_670.DataPtr = (void **)0x0;
    local_670.ArrayNum = 0;
    local_368 = lVar57;
    local_360 = pvVar11;
    local_358 = pFVar51;
    break;
  case 8:
    pvVar11 = param_2->RawData;
    lVar50 = 0;
    if (iVar44 < 2) {
      if (lVar57 < 4) {
        if (lVar57 < 1) goto LAB_142359f0c;
      }
      else {
        pFVar48 = pFVar51 + 2;
        do {
          *(float *)((longlong)pvVar11 + lVar50 * 4) = pFVar48[-2].field0_0x0._s_0.R;
          *(float *)((longlong)pvVar11 + lVar50 * 4 + 4) = pFVar48[-1].field0_0x0._s_0.R;
          *(float *)((longlong)pvVar11 + lVar50 * 4 + 8) = (pFVar48->field0_0x0)._s_0.R;
          *(float *)((longlong)pvVar11 + lVar50 * 4 + 0xc) = pFVar48[1].field0_0x0._s_0.R;
          lVar50 = lVar50 + 4;
          pFVar48 = pFVar48 + 4;
        } while (lVar50 < lVar57 + -3);
        if (lVar57 <= lVar50) goto LAB_142359f0c;
      }
      pFVar51 = pFVar51 + lVar50;
      do {
        pFVar20 = &pFVar51->field0_0x0;
        pFVar51 = pFVar51 + 1;
        *(float *)((longlong)pvVar11 + lVar50 * 4) = (pFVar20->_s_0).R;
        lVar50 = lVar50 + 1;
      } while (lVar50 < lVar57);
      goto LAB_142359f0c;
    }
    pTVar60 = (TFunctionRef<void___cdecl(int)> *)&local_640;
    local_350 = local_778;
    local_640 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImage'[::K]::<lambda_11>_>'::__l9::<lambda_1>,void,int>
                ::Call;
    local_638 = &local_350;
    pTVar49 = &local_650;
    local_650.DataPtr = (void **)0x0;
    local_650.ArrayNum = 0;
    local_348 = lVar57;
    local_340 = pvVar11;
    local_338 = pFVar51;
  }
LAB_142359c88:
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"Texture.CopyImage.PF",iVar44,1,pTVar60,<Var7,Unbalanced,pTVar49);
LAB_142359f0c:
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// CopyImageRGBABGRA @ 142359fa0

void __cdecl FImageCore::CopyImageRGBABGRA(FImageView *param_1,FImageView *param_2)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  char cVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined1 *puVar8;
  code *pcVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  long64 lVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  undefined2 *puVar16;
  undefined1 *puVar17;
  
  if (((longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
       (longlong)(int)param_1->_padding_ -
       (longlong)(int)param_2->_padding_ * (longlong)*(int *)((longlong)&param_2->_padding_ + 4) *
       (longlong)(int)param_2->_padding_ != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcImage.GetNumPixels() == DestImage.GetNumPixels()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0x139,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((*(char *)((longlong)&param_1->_padding_ + 4) != *(char *)((longlong)&param_2->_padding_ + 4))
     && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                            ("SrcImage.Format == DestImage.Format",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x13a,L""), bVar12)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  cVar4 = *(char *)((longlong)&param_1->_padding_ + 4);
  if (cVar4 == '\x01') {
    lVar10 = param_1->_padding_;
    iVar7 = *(int *)((longlong)&param_1->_padding_ + 4);
    puVar8 = param_1->RawData;
    lVar11 = param_1->_padding_;
    lVar13 = ERawImageFormat::GetBytesPerPixel(BGRA8);
    if (puVar8 < puVar8 + lVar13 * (longlong)iVar7 * (longlong)(int)lVar10 * (longlong)(int)lVar11)
    {
      puVar15 = puVar8 + 1;
      puVar17 = param_2->RawData;
      do {
        uVar5 = puVar15[-1];
        *puVar17 = puVar15[1];
        puVar17[1] = *puVar15;
        puVar17[2] = uVar5;
        puVar17[3] = puVar15[2];
        puVar1 = puVar15 + 3;
        puVar15 = puVar15 + 4;
        puVar17 = puVar17 + 4;
      } while (puVar1 < puVar8 + lVar13 * (longlong)iVar7 * (longlong)(int)lVar10 *
                                          (longlong)(int)lVar11);
    }
  }
  else if (cVar4 == '\x03') {
    lVar10 = param_1->_padding_;
    iVar7 = *(int *)((longlong)&param_1->_padding_ + 4);
    puVar14 = param_1->RawData;
    lVar11 = param_1->_padding_;
    lVar13 = ERawImageFormat::GetBytesPerPixel(RGBA16);
    puVar3 = (undefined2 *)
             ((longlong)puVar14 +
             (lVar13 * (longlong)iVar7 * (longlong)(int)lVar10 * (longlong)(int)lVar11 &
             0xfffffffffffffffeU));
    if (puVar14 < puVar3) {
      puVar14 = puVar14 + 1;
      puVar16 = param_2->RawData;
      do {
        uVar6 = puVar14[-1];
        *puVar16 = puVar14[1];
        puVar16[1] = *puVar14;
        puVar16[2] = uVar6;
        puVar16[3] = puVar14[2];
        puVar2 = puVar14 + 3;
        puVar14 = puVar14 + 4;
        puVar16 = puVar16 + 4;
      } while (puVar2 < puVar3);
    }
  }
  else {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                        ,0x161,L"");
    if (bVar12) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}

// CopyImageTo2U16 @ 14235a180

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FImageCore::CopyImageTo2U16(FImageView *param_1,FImageView *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  void *pvVar7;
  code *pcVar8;
  ushort uVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  long64 lVar14;
  longlong lVar15;
  ushort *puVar16;
  ulong64 uVar17;
  bool bVar18;
  <lambda_1> local_res8;
  long64 local_res10;
  undefined2 uStack_da;
  ForAnyElementType local_d8;
  long64 local_d0;
  ulong64 local_c8;
  <lambda_1> local_c0;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  long64 *local_98;
  long64 local_90;
  longlong local_88;
  ushort *local_80;
  void *local_78;
  FImageView local_70;
  FImageView local_58;
  
  if (((longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
       (longlong)(int)param_1->_padding_ -
       (longlong)(int)param_2->_padding_ * (longlong)(int)param_2->_padding_ *
       (longlong)*(int *)((longlong)&param_2->_padding_ + 4) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcImage.GetNumPixels() == DestImage.GetNumPixels()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0xfb,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((*(char *)((longlong)&param_2->_padding_ + 4) != '\x01') &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestImage.Format == ERawImageFormat::BGRA8",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0xfc,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((((int)param_1->_padding_ < 0) || (*(int *)((longlong)&param_1->_padding_ + 4) < 0)) ||
       ((int)param_1->_padding_ < 0)) ||
      (((bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4), bVar1 == 0xff ||
        (cVar2 = *(char *)((longlong)&param_1->_padding_ + 5), cVar2 == '\x03')) ||
       ((1 < bVar1 && (cVar2 != '\0')))))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SrcImage.IsImageInfoValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0xfd,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if ((((((int)param_2->_padding_ < 0) || (*(int *)((longlong)&param_2->_padding_ + 4) < 0)) ||
       (((int)param_2->_padding_ < 0 ||
        ((bVar1 = *(byte *)((longlong)&param_2->_padding_ + 4), bVar1 == 0xff ||
         (cVar2 = *(char *)((longlong)&param_2->_padding_ + 5), cVar2 == '\x03')))))) ||
      ((1 < bVar1 && (cVar2 != '\0')))) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestImage.IsImageInfoValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                          ,0xfe,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId256,"Texture.CopyImageTo2U16",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x100);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId256);
  }
  if (5 < (byte)LogImageCore._0_1_) {
    local_res8 = SUB41((int)param_1->_padding_,0);
    ERawImageFormat::GetName(*(Type *)((longlong)&param_2->_padding_ + 4));
    ERawImageFormat::GetName(*(Type *)((longlong)&param_1->_padding_ + 4));
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
  }
  lVar15 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4)
           * (longlong)(int)param_1->_padding_;
  iVar13 = ImageParallelForComputeNumJobsForPixels(&local_res10,lVar15);
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 4);
  if (cVar2 == '\x05') {
    local_c0.DestColors = param_2->RawData;
    local_c0.SrcColors = param_1->RawData;
    ParallelLoop<_FImageCore::CopyImageTo2U16_::__l51::<lambda_1>_>
              (L"Texture.CopyImageTo2U16.PF",iVar13,local_res10,lVar15,&local_c0);
  }
  else if ((cVar2 == '\x01') && (*(char *)((longlong)&param_1->_padding_ + 5) == '\0')) {
    puVar6 = param_2->RawData;
    pvVar7 = param_1->RawData;
    if (iVar13 < 2) {
      puVar16 = puVar6;
      if (0 < lVar15) {
        do {
          uVar3 = *(undefined4 *)
                   ((longlong)pvVar7 + (-4 - (longlong)puVar6) + (longlong)(puVar16 + 2));
          uVar9 = (ushort)((uint)uVar3 >> 0x10);
          *puVar16 = uVar9 << 8 | uVar9 & 0xff;
          uVar9 = (ushort)((uint)uVar3 >> 8);
          puVar16[1] = uVar9 << 8 | uVar9 & 0xff;
          lVar15 = lVar15 + -1;
          puVar16 = puVar16 + 2;
        } while (lVar15 != 0);
      }
    }
    else {
      local_90 = local_res10;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`ParallelLoop<`FImageCore::CopyImageTo2U16'::__l55::<lambda_2>_>'::__l9::<lambda_1>,void,int>
                 ::Call;
      local_98 = &local_90;
      local_b0.DataPtr = (void **)0x0;
      local_b0.ArrayNum = 0;
      local_88 = lVar15;
      local_80 = puVar6;
      local_78 = pvVar7;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"Texture.CopyImageTo2U16.PF",iVar13,1,(TFunctionRef<void___cdecl(int)> *)&local_a0
                 ,local_res8,Unbalanced,&local_b0);
    }
  }
  else {
    bVar18 = -1 < CpuChannel->Enabled;
    if (bVar18) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId298,"Texture.CopyImageTo2U16.TempLinear",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                 ,0x12a);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId298);
    }
    iVar13 = (int)param_1->_padding_;
    iVar4 = *(int *)((longlong)&param_1->_padding_ + 4);
    lVar10 = param_1->_padding_;
    lVar15 = param_1->_padding_;
    iVar5 = (int)param_1->_padding_;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_c8 = 0;
    if ((((iVar13 < 0) || (iVar4 < 0)) || (iVar5 < 0)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Image.IsImageInfoValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                            ,0x31,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar14 = ERawImageFormat::GetBytesPerPixel(RGBA32F);
    uVar17 = lVar14 * (longlong)iVar5 * (longlong)iVar4 * (longlong)iVar13;
    if ((longlong)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar17);
    }
    local_d0 = 0;
    if (local_c8 != uVar17) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar17,&local_d8,0,(long64 *)&local_c8);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (1,1,uVar17,&local_d8,&local_d0,(long64 *)&local_c8);
    local_70._padding_ = CONCAT26(uStack_da,(uint6)CONCAT14(5,iVar5));
    local_70.RawData = local_d8.Data;
    local_70._padding_ = lVar15;
    CopyImage(param_1,&local_70);
    local_58._padding_ = CONCAT26(uStack_da,(uint6)CONCAT14(5,iVar5));
    local_58.RawData = local_d8.Data;
    local_58._padding_ = lVar10;
    CopyImageTo2U16(&local_58,param_2);
    if (local_d8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d8.Data);
    }
    if (bVar18) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// DetectAlphaChannel @ 14235b600

bool __cdecl FImageCore::DetectAlphaChannel(FImageView *param_1)

{
  char cVar1;
  longlong lVar2;
  FColor *pFVar3;
  FLinearColor *pFVar4;
  ushort *puVar5;
  FFloat16Color *pFVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 uVar9;
  int iVar10;
  TArrayView<FColor,__int64> *pTVar11;
  TArrayView<FLinearColor,__int64> *pTVar12;
  TArrayView<unsigned_short,__int64> *pTVar13;
  TArrayView<FFloat16Color,__int64> *pTVar14;
  longlong lVar15;
  <lambda_1> <Var16;
  bool bVar17;
  <lambda_1> local_res8 [8];
  <lambda_1> local_res10 [8];
  <lambda_1> local_res18 [8];
  <lambda_1> local_res20 [8];
  undefined4 local_218 [2];
  long64 local_210;
  FColor *local_208;
  long64 local_200;
  longlong local_1f8;
  FColor **local_1f0;
  FLinearColor *local_1e8;
  long64 local_1e0;
  longlong local_1d8;
  ushort *local_1d0;
  long64 local_1c8;
  longlong local_1c0;
  ushort **local_1b8;
  FFloat16Color *local_1b0;
  long64 local_1a8;
  longlong local_1a0;
  TArrayView<std::nullptr_t,int> local_198;
  code *local_188;
  long64 **local_180;
  FLinearColor **local_178;
  undefined4 *local_170;
  TArrayView<std::nullptr_t,int> local_168;
  code *local_158;
  long64 **local_150;
  TArrayView<std::nullptr_t,int> local_148;
  code *local_138;
  long64 **local_130;
  FFloat16Color **local_128;
  undefined4 *local_120;
  TArrayView<std::nullptr_t,int> local_118;
  code *local_108;
  long64 **local_100;
  long64 *local_f8;
  longlong *local_f0;
  undefined8 **local_e8;
  <lambda_1> *local_e0;
  long64 *local_d8;
  longlong *local_d0;
  undefined8 **local_c8;
  <lambda_1> *local_c0;
  long64 *local_b8;
  longlong *local_b0;
  undefined8 **local_a8;
  <lambda_1> *local_a0;
  long64 *local_98;
  longlong *local_90;
  undefined8 **local_88;
  <lambda_1> *local_80;
  TArrayView<FColor,__int64> local_78;
  TArrayView<FLinearColor,__int64> local_68;
  TArrayView<unsigned_short,__int64> local_58;
  TArrayView<FFloat16Color,__int64> local_48;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if ((cVar1 != '\x01') && (2 < (byte)(cVar1 - 3U))) {
    return false;
  }
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1588,"Texture.DetectAlphaChannel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x634);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1588);
  }
  lVar15 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4)
           * (longlong)(int)param_1->_padding_;
  local_218[0] = 0x3f7f7f7f;
  iVar10 = ImageParallelForComputeNumJobsForPixels(&local_210,lVar15);
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if (cVar1 == '\x01') {
    pTVar11 = FImageView::AsBGRA8(param_1,&local_78);
    lVar2 = pTVar11->ArrayNum;
    pFVar3 = pTVar11->DataPtr;
    if ((lVar2 != lVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcColorArray.Num() == NumTexels",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                           ,0x641,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((lVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_1f0 = &local_208;
    local_res8[0] = (<lambda_1>)0x0;
    local_200 = local_210;
    local_f8 = &local_200;
    local_f0 = &local_1f8;
    local_e8 = &local_1f0;
    local_e0 = local_res8;
    local_188 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l8::<lambda_1>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_180 = &local_f8;
    local_198.DataPtr = (void **)0x0;
    local_198.ArrayNum = 0;
    local_208 = pFVar3;
    local_1f8 = lVar15;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"Texture.DetectAlphaChannel.PF",iVar10,1,
               (TFunctionRef<void___cdecl(int)> *)&local_188,(<lambda_1>)0x0,Unbalanced,&local_198);
    <Var16 = local_res8[0];
  }
  else if (cVar1 == '\x05') {
    pTVar12 = FImageView::AsRGBA32F(param_1,&local_68);
    lVar2 = pTVar12->ArrayNum;
    pFVar4 = pTVar12->DataPtr;
    if ((lVar2 != lVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcColorArray.Num() == NumTexels",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                           ,0x64d,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((lVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_178 = &local_1e8;
    local_170 = local_218;
    local_1e0 = local_210;
    local_d8 = &local_1e0;
    local_res10[0] = (<lambda_1>)0x0;
    local_d0 = &local_1d8;
    local_c8 = &local_178;
    local_c0 = local_res10;
    local_158 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l19::<lambda_2>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_150 = &local_d8;
    local_168.DataPtr = (void **)0x0;
    local_168.ArrayNum = 0;
    local_1e8 = pFVar4;
    local_1d8 = lVar15;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"Texture.DetectAlphaChannel.PF",iVar10,1,
               (TFunctionRef<void___cdecl(int)> *)&local_158,local_res8[0],Unbalanced,&local_168);
    <Var16 = local_res10[0];
  }
  else if (cVar1 == '\x03') {
    pTVar13 = FImageView::AsRGBA16(param_1,&local_58);
    lVar2 = pTVar13->ArrayNum;
    puVar5 = pTVar13->DataPtr;
    if ((lVar2 != lVar15 * 4) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcChannelArray.Num() == NumTexels * 4",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                           ,0x659,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((lVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_1b8 = &local_1d0;
    local_1c8 = local_210;
    local_b8 = &local_1c8;
    local_b0 = &local_1c0;
    local_res18[0] = (<lambda_1>)0x0;
    local_a8 = &local_1b8;
    local_a0 = local_res18;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l30::<lambda_3>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_130 = &local_b8;
    local_148.DataPtr = (void **)0x0;
    local_148.ArrayNum = 0;
    local_1d0 = puVar5;
    local_1c0 = lVar15;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"Texture.DetectAlphaChannel.PF",iVar10,1,
               (TFunctionRef<void___cdecl(int)> *)&local_138,local_res8[0],Unbalanced,&local_148);
    <Var16 = local_res18[0];
  }
  else if (cVar1 == '\x04') {
    pTVar14 = FImageView::AsRGBA16F(param_1,&local_48);
    lVar2 = pTVar14->ArrayNum;
    pFVar6 = pTVar14->DataPtr;
    if ((lVar2 != lVar15) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("SrcColorArray.Num() == NumTexels",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                           ,0x665,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    if ((lVar2 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    local_128 = &local_1b0;
    local_120 = local_218;
    local_1a8 = local_210;
    local_98 = &local_1a8;
    local_res20[0] = (<lambda_1>)0x0;
    local_90 = &local_1a0;
    local_88 = &local_128;
    local_80 = local_res20;
    local_108 = UE::Core::Private::Function::
                TFunctionRefCaller<`ParallelOr<`FImageCore::DetectAlphaChannel'::__l41::<lambda_4>_>'::__l2::<lambda_1>,void,int>
                ::Call;
    local_100 = &local_98;
    local_118.DataPtr = (void **)0x0;
    local_118.ArrayNum = 0;
    local_1b0 = pFVar6;
    local_1a0 = lVar15;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"Texture.DetectAlphaChannel.PF",iVar10,1,
               (TFunctionRef<void___cdecl(int)> *)&local_108,local_res8[0],Unbalanced,&local_118);
    <Var16 = local_res20[0];
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x676,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      uVar9 = (*pcVar7)();
      return (bool)uVar9;
    }
    <Var16 = (<lambda_1>)0x0;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (bool)<Var16;
}

// FilterIsNopWhenSameSize @ 14235c0c0

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

bool __cdecl FImageCore::FilterIsNopWhenSameSize(EResizeImageFilter param_1)

{
  code *pcVar1;
  bool bVar2;
  
  switch(param_1 & WithoutFlagsMask) {
  case Default:
  case PointSample:
  case Box:
  case Bilinear:
  case AdaptiveSharp:
  case AdaptiveSmooth:
    return true;
  case CubicGaussian:
  case CubicSharp:
  case CubicMitchell:
  case MitchellOneQuarter:
  case MitchellOneSixth:
  case MitchellNegOneSixth:
  case MitchellNegOneThird:
  case Lanczos4:
  case Lanczos5:
    goto switchD_14235c0dd_caseD_4;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x79f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
switchD_14235c0dd_caseD_4:
    return false;
  }
}

// GetFormatSTBIR @ 14235c700

/* WARNING: Enum "stbir_pixel_layout": Some values do not have unique names */

bool __cdecl
FImageCore::GetFormatSTBIR
          (Type param_1,EGammaSpace param_2,int *param_3,stbir_datatype *param_4,
          stbir_pixel_layout *param_5)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  switch(param_1) {
  case G8:
    *param_3 = 1;
    *param_4 = (uint)(param_2 != Linear);
    *param_5 = STBIR_1CHANNEL;
    return true;
  case BGRA8:
    *param_3 = 4;
    *param_4 = (uint)(param_2 != Linear);
    *param_5 = STBIR_BGRA_NO_AW;
    return true;
  case BGRE8:
    goto switchD_14235c74b_caseD_2;
  case RGBA16:
    *param_3 = 4;
    *param_4 = STBIR_TYPE_UINT16;
    *param_5 = STBIR_RGBA_NO_AW;
    return true;
  case RGBA16F:
    *param_3 = 4;
    *param_4 = STBIR_TYPE_HALF_FLOAT;
    *param_5 = STBIR_RGBA_NO_AW;
    return true;
  case RGBA32F:
    *param_3 = 4;
    *param_4 = STBIR_TYPE_FLOAT;
    *param_5 = STBIR_RGBA_NO_AW;
    return true;
  case G16:
    *param_3 = 1;
    *param_4 = STBIR_TYPE_UINT16;
    *param_5 = STBIR_1CHANNEL;
    return true;
  case R16F:
    *param_3 = 1;
    *param_4 = STBIR_TYPE_HALF_FLOAT;
    *param_5 = STBIR_1CHANNEL;
    return true;
  case R32F:
    *param_3 = 1;
    *param_4 = STBIR_TYPE_FLOAT;
    *param_5 = STBIR_1CHANNEL;
    return true;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Format < ERawImageFormat::MAX",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x733,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
switchD_14235c74b_caseD_2:
    return false;
  }
}

// ImageParallelForComputeNumJobs @ 14235e970

int __cdecl FImageCore::ImageParallelForComputeNumJobs(FImageView *param_1,long64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  long64 local_res8;
  
  lVar5 = (longlong)(int)param_1->_padding_;
  lVar6 = (longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((lVar5 < 1) || (lVar6 < 1)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SizeX > 0 && SizeY > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x92,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = ParallelForComputeNumJobs(&local_res8,lVar6 * lVar5,0x4000,0x4840);
  lVar5 = (lVar6 + -1 + (longlong)iVar3) / (longlong)iVar3;
  lVar4 = (lVar6 + -1 + lVar5) / lVar5;
  if (lVar4 * lVar5 < lVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutNumItemsPerJob64*NumJobs >= SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x9c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (lVar6 <= (lVar4 + -1) * lVar5) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutNumItemsPerJob64*(NumJobs-1) < SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x9d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  lVar7 = (longlong)(int)lVar5;
  if (lVar5 != lVar7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = (int)lVar4;
  if (lVar4 != iVar3) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (iVar3 * lVar7 < lVar6) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int64)NumJobs * RowsPerJob >= SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  if (lVar6 <= (iVar3 + -1) * lVar7) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(int64)(NumJobs-1) * RowsPerJob < SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x1b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  *param_2 = lVar7;
  return iVar3;
}

// ImageParallelForMakePart @ 14235edd0

long64 __cdecl
FImageCore::ImageParallelForMakePart
          (FImageView *param_1,FImageView *param_2,long64 param_3,long64 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  long64 lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar3 = param_2->_padding_;
  lVar6 = (longlong)(int)param_2->_padding_ * (longlong)*(int *)((longlong)&param_2->_padding_ + 4);
  lVar7 = param_3 * param_4;
  if (lVar6 <= lVar7) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("StartY < SizeY",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageParallelFor.cpp"
                       ,0x27,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      lVar5 = (*pcVar1)();
      return lVar5;
    }
  }
  lVar2 = param_2->_padding_;
  param_1->_padding_ = param_2->_padding_;
  param_1->_padding_ = lVar2;
  if (lVar7 + param_4 < lVar6) {
    lVar6 = lVar7 + param_4;
  }
  param_1->RawData = param_2->RawData;
  *(int *)((longlong)&param_1->_padding_ + 4) = (int)lVar6 - (int)lVar7;
  *(undefined4 *)&param_1->_padding_ = 1;
  lVar5 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_2->_padding_ + 4));
  param_1->RawData = (void *)(lVar5 * lVar7 * (longlong)(int)lVar3 + (longlong)param_2->RawData);
  return lVar7;
}

// MapFilterToStb @ 142360830

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

stbir_filter __cdecl
FImageCore::MapFilterToStb
          (EResizeImageFilter param_1,long64 param_2,long64 param_3,uint param_4,stbir_edge *param_5
          ,stbir_kernel_and_support *param_6)

{
  code *pcVar1;
  bool bVar2;
  stbir_filter sVar3;
  
  if ((param_2 == param_3) && (bVar2 = FilterIsNopWhenSameSize(param_1), bVar2)) {
    *param_5 = STBIR_EDGE_CLAMP;
switchD_14236089b_caseD_1:
    return STBIR_FILTER_POINT_SAMPLE;
  }
  *param_5 = -(uint)(param_4 != 0) & STBIR_EDGE_WRAP;
  switch(param_1 & WithoutFlagsMask) {
  case Default:
  case AdaptiveSharp:
    return (param_3 <= param_2) + STBIR_FILTER_CATMULLROM;
  case PointSample:
    goto switchD_14236089b_caseD_1;
  case Box:
    return STBIR_FILTER_BOX;
  case Bilinear:
    return STBIR_FILTER_TRIANGLE;
  case CubicGaussian:
    return STBIR_FILTER_CUBICBSPLINE;
  case CubicSharp:
    return STBIR_FILTER_CATMULLROM;
  case CubicMitchell:
    return STBIR_FILTER_MITCHELL;
  case AdaptiveSmooth:
    if (param_3 <= param_2) {
      return STBIR_FILTER_CUBICBSPLINE;
    }
    return STBIR_FILTER_MITCHELL;
  case MitchellOneQuarter:
    *param_6 = c_my_ks_mitchell_onequarter;
    break;
  case MitchellOneSixth:
    *param_6 = c_my_ks_mitchell_onesixth;
    break;
  case MitchellNegOneSixth:
    *param_6 = c_my_ks_mitchell_negonesixth;
    break;
  case MitchellNegOneThird:
    *param_6 = c_my_ks_mitchell_negonethird;
    break;
  case Lanczos4:
    *param_6 = c_my_ks_lanczos4;
    break;
  case Lanczos5:
    *param_6 = c_my_ks_lanczos5;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x833,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      sVar3 = (*pcVar1)();
      return sVar3;
    }
  }
  return STBIR_FILTER_DEFAULT;
}

// ResizeImage @ 142360da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */
/* WARNING: Enum "stbir_pixel_layout": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FImageCore::ResizeImage(FImageView *param_1,FImageView *param_2,EResizeImageFilter param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  EGammaSpace EVar8;
  bool bVar9;
  stbir_pixel_layout sVar10;
  stbir_filter sVar11;
  int iVar12;
  long64 lVar13;
  long64 lVar14;
  FTaskGraphInterface *pFVar15;
  longlong lVar16;
  int iVar17;
  ForAnyElementType FVar18;
  longlong lVar19;
  ulong64 uVar20;
  longlong lVar21;
  stbir_pixel_layout local_res8 [2];
  int local_res10 [2];
  EResizeImageFilter local_res18 [2];
  stbir_pixel_layout local_res20 [2];
  undefined2 uStack_25a;
  ForAnyElementType local_258;
  long64 lStack_250;
  ulong64 local_248;
  undefined8 local_240;
  int iStack_238;
  Type TStack_234;
  undefined1 uStack_233;
  undefined2 uStack_232;
  ForAnyElementType local_230;
  long64 lStack_228;
  ulong64 local_220;
  int local_218;
  stbir_datatype local_214;
  stbir_datatype local_210;
  stbir_edge local_20c;
  stbir_edge local_208 [4];
  STBIR_RESIZE local_1f8;
  stbir_kernel_and_support local_128;
  stbir_kernel_and_support local_118;
  FImageView local_108;
  STBIR_RESIZE *local_f0;
  FImageView local_e8;
  TArrayView<std::nullptr_t,int> local_d0;
  code *local_c0;
  STBIR_RESIZE **local_b8;
  TArrayView<std::nullptr_t,int> local_b0;
  code *local_a0;
  FImageView **local_98;
  FImageView *local_90;
  FImageView *local_88;
  EResizeImageFilter *local_80;
  FScriptContainerElement *local_68;
  FImageView local_60;
  
  local_res18[0] = param_3;
  if (((((((int)param_1->_padding_ < 0) || (*(int *)((longlong)&param_1->_padding_ + 4) < 0)) ||
        ((int)param_1->_padding_ < 0)) ||
       ((bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4), bVar1 == 0xff ||
        (cVar2 = *(char *)((longlong)&param_1->_padding_ + 5), cVar2 == '\x03')))) ||
      ((1 < bVar1 && (cVar2 != '\0')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceImage.IsImageInfoValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x83c,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((((((int)param_2->_padding_ < 0) || (*(int *)((longlong)&param_2->_padding_ + 4) < 0)) ||
       (((int)param_2->_padding_ < 0 ||
        ((bVar1 = *(byte *)((longlong)&param_2->_padding_ + 4), bVar1 == 0xff ||
         (cVar2 = *(char *)((longlong)&param_2->_padding_ + 5), cVar2 == '\x03')))))) ||
      ((1 < bVar1 && (cVar2 != '\0')))) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestImage.IsImageInfoValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x83d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar12 = (int)param_2->_padding_;
  iVar17 = *(int *)((longlong)&param_2->_padding_ + 4);
  iVar3 = (int)param_2->_padding_;
  lVar21 = (longlong)iVar12 * (longlong)iVar17 * (longlong)iVar3;
  if (lVar21 == 0) {
    return;
  }
  iVar4 = (int)param_1->_padding_;
  if (iVar4 != 1) {
    if (iVar4 == iVar12) {
      local_80 = local_res18;
      local_b0.DataPtr = (void **)0x0;
      local_a0 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FImageCore::ResizeImage'::__l25::<lambda_1>,void,int>::Call;
      local_98 = &local_90;
      local_b0.ArrayNum = 0;
      local_90 = param_1;
      local_88 = param_2;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ResizeImage.Slices",iVar4,1,(TFunctionRef<void___cdecl(int)> *)&local_a0,
                 (<lambda_1>)(undefined1)local_res8[0],Unbalanced,&local_b0);
      return;
    }
LAB_142361710:
    if (1 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
    return;
  }
  if (iVar12 != 1) goto LAB_142361710;
  if ((((int)param_1->_padding_ == iVar3) && (*(int *)((longlong)&param_1->_padding_ + 4) == iVar17)
      ) && (bVar7 = FilterIsNopWhenSameSize(local_res18[0]), bVar7)) {
    CopyImage(param_1,param_2);
    return;
  }
  EVar8 = FImageInfo::GetGammaSpace((FImageInfo *)param_2);
  if ((EVar8 == Pow22) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestImage.GetGammaSpace() != EGammaSpace::Pow22",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x86d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  EVar8 = FImageInfo::GetGammaSpace((FImageInfo *)param_1);
  bVar7 = GetFormatSTBIR(*(Type *)((longlong)&param_1->_padding_ + 4),EVar8,local_res10,&local_214,
                         local_res20);
  EVar8 = FImageInfo::GetGammaSpace((FImageInfo *)param_2);
  bVar9 = GetFormatSTBIR(*(Type *)((longlong)&param_2->_padding_ + 4),EVar8,&local_218,&local_210,
                         local_res8);
  if (((!bVar7) || (!bVar9)) || (local_res10[0] != local_218)) {
    local_e8.RawData = param_1->RawData;
    local_e8._padding_ = param_1->_padding_;
    local_e8._padding_ = param_1->_padding_;
    local_248 = 0;
    local_258.Data = (FScriptContainerElement *)0x0;
    lStack_250 = 0;
    if ((char)((ulonglong)param_1->_padding_ >> 0x20) != '\x05') {
      iVar12 = (int)param_1->_padding_;
      iVar17 = *(int *)((longlong)&param_1->_padding_ + 4);
      lVar21 = param_1->_padding_;
      iVar3 = (int)param_1->_padding_;
      if ((((iVar12 < 0) || (iVar17 < 0)) || (iVar3 < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Image.IsImageInfoValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x31,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = ERawImageFormat::GetBytesPerPixel(RGBA32F);
      uVar20 = lVar13 * (longlong)iVar17 * (longlong)iVar3 * (longlong)iVar12;
      if ((longlong)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar20);
      }
      if (local_248 != uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,uVar20,&local_258,0,(long64 *)&local_248);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar20,&local_258,&lStack_250,(long64 *)&local_248);
      local_60._padding_ = CONCAT26(uStack_25a,(uint6)CONCAT14(5,iVar3));
      local_60.RawData = local_258.Data;
      local_60._padding_ = lVar21;
      CopyImage(param_1,&local_60);
      local_e8._padding_ = CONCAT26(uStack_25a,(uint6)CONCAT14(5,iVar3));
      local_68 = local_258.Data;
      local_e8.RawData = local_258.Data;
      local_e8._padding_ = lVar21;
    }
    local_108.RawData = param_2->RawData;
    local_108._padding_ = param_2->_padding_;
    local_108._padding_ = param_2->_padding_;
    local_240 = 0;
    iStack_238 = 0;
    TStack_234 = BGRA8;
    uStack_233 = 2;
    local_220 = 0;
    local_230.Data = (FScriptContainerElement *)0x0;
    lStack_228 = 0;
    if ((char)((ulonglong)param_2->_padding_ >> 0x20) != '\x05') {
      local_240 = param_2->_padding_;
      iStack_238 = 1;
      TStack_234 = RGBA32F;
      uStack_233 = 0;
      if ((((int)param_2->_padding_ < 0) || (*(int *)((longlong)&param_2->_padding_ + 4) < 0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Image.IsImageInfoValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x31,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar21 = (longlong)local_240._4_4_;
      lVar19 = (longlong)iStack_238;
      lVar16 = (longlong)(int)local_240;
      lVar13 = ERawImageFormat::GetBytesPerPixel(TStack_234);
      uVar20 = lVar13 * lVar19 * lVar21 * lVar16;
      if ((longlong)uVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar20);
      }
      if (local_220 != uVar20) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (1,1,uVar20,&local_230,0,(long64 *)&local_220);
      }
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (1,1,uVar20,&local_230,&lStack_228,(long64 *)&local_220);
      local_108._padding_ =
           CONCAT26(uStack_232,CONCAT15(uStack_233,CONCAT14(TStack_234,iStack_238)));
      local_68 = local_230.Data;
      local_108._padding_ = local_240;
      local_108.RawData = local_230.Data;
    }
    ResizeImage(&local_e8,&local_108,local_res18[0]);
    if (local_108.RawData != param_2->RawData) {
      CopyImage(&local_108,param_2);
    }
    if (local_230.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_230.Data);
    }
    FVar18.Data = local_258.Data;
    if (local_258.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    goto LAB_1423612f6;
  }
  lVar13 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_2->_padding_ + 4));
  iVar12 = (int)param_2->_padding_;
  iVar17 = *(int *)((longlong)&param_2->_padding_ + 4);
  pvVar5 = param_2->RawData;
  lVar14 = ERawImageFormat::GetBytesPerPixel(*(Type *)((longlong)&param_1->_padding_ + 4));
  local_1f8.input_w = (int)param_1->_padding_;
  local_1f8.input_pixels = param_1->RawData;
  local_1f8.output_stride_in_bytes = (int)lVar13 * iVar12;
  local_1f8.input_stride_in_bytes = (int)lVar14 * local_1f8.input_w;
  local_1f8.input_h = *(int *)((longlong)&param_1->_padding_ + 4);
  local_1f8.input_s0 = 0.0;
  local_1f8.user_data = &local_1f8;
  local_1f8.input_t1 = __real_3ff0000000000000;
  local_1f8.fast_alpha = 0;
  local_1f8.input_cb = (_func___cdecl_void_ptr_void_ptr_void_ptr_int_int_int_void_ptr *)0x0;
  local_1f8.output_cb = (_func___cdecl_void_void_ptr_int_int_void_ptr *)0x0;
  local_1f8.samplers = (stbir__info *)0x0;
  local_1f8.needs_rebuild = 1;
  local_1f8.called_alloc = 0;
  local_1f8.horizontal_filter = STBIR_FILTER_DEFAULT;
  local_1f8.vertical_filter = STBIR_FILTER_DEFAULT;
  local_1f8.horizontal_filter_kernel = (_func___cdecl_float_float_float_void_ptr *)0x0;
  local_1f8.horizontal_filter_support = (_func___cdecl_float_float_void_ptr *)0x0;
  local_1f8.vertical_filter_kernel = (_func___cdecl_float_float_float_void_ptr *)0x0;
  local_1f8.vertical_filter_support = (_func___cdecl_float_float_void_ptr *)0x0;
  local_1f8.horizontal_edge = STBIR_EDGE_CLAMP;
  local_1f8.vertical_edge = STBIR_EDGE_CLAMP;
  local_1f8.input_t0 = ___xmm_3ff00000000000000000000000000000;
  local_1f8.input_s1 = _UNK_15061cbc8;
  local_1f8.output_subx = 0;
  local_1f8.output_suby = 0;
  local_1f8.input_data_type = local_214;
  local_1f8.output_data_type = local_214;
  local_1f8.input_pixel_layout_public = local_res20[0];
  local_1f8.output_pixel_layout_public = local_res20[0];
  local_1f8.output_pixels = pvVar5;
  local_1f8.output_w = iVar12;
  local_1f8.output_h = iVar17;
  local_1f8.output_subw = iVar12;
  local_1f8.output_subh = iVar17;
  if (((local_res18[0] >> 8 & 1) != 0) && (local_res10[0] == 4)) {
    sVar10 = ChangeToAlphaWeighted(local_res20[0]);
    local_res20[0] = sVar10;
    local_res8[0] = ChangeToAlphaWeighted(local_res8[0]);
    local_1f8.input_pixel_layout_public = sVar10;
  }
  local_1f8.output_data_type = local_210;
  local_1f8.needs_rebuild = 1;
  local_1f8.input_data_type = local_214;
  local_128.kernel = (_func___cdecl_float_float_float_void_ptr *)0x0;
  local_128.support = (_func___cdecl_float_float_void_ptr *)0x0;
  local_118.kernel = (_func___cdecl_float_float_float_void_ptr *)0x0;
  local_118.support = (_func___cdecl_float_float_void_ptr *)0x0;
  local_1f8.output_pixel_layout_public = local_res8[0];
  sVar11 = MapFilterToStb(local_res18[0],(longlong)(int)param_1->_padding_,
                          (longlong)(int)param_2->_padding_,local_res18[0] & Flag_WrapX,&local_20c,
                          &local_128);
  local_1f8.vertical_filter =
       MapFilterToStb(local_res18[0],(longlong)*(int *)((longlong)&param_1->_padding_ + 4),
                      (longlong)*(int *)((longlong)&param_2->_padding_ + 4),
                      local_res18[0] & Flag_WrapY,local_208,&local_118);
  local_1f8.horizontal_filter_kernel = local_128.kernel;
  local_1f8.horizontal_filter_support = local_128.support;
  local_1f8.vertical_filter_kernel = local_118.kernel;
  local_1f8.vertical_filter_support = local_118.support;
  local_1f8.horizontal_filter = sVar11;
  local_1f8.needs_rebuild = 1;
  pFVar15 = FTaskGraphInterface::Get();
  iVar12 = (**(code **)((longlong)*pFVar15 + 0x20))(pFVar15);
  iVar12 = iVar12 * 2 + -1;
  if (lVar21 < (longlong)iVar12 * 0x4000) {
    iVar12 = (int)((longlong)((ulonglong)((uint)(lVar21 >> 0x3f) & 0x3fff) + lVar21) >> 0xe);
  }
  if (iVar12 < 2) {
    iVar12 = stbir_resize_extended(&local_1f8);
    if (iVar12 != 0) {
      return;
    }
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ok",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x8cb,L"");
    if (!bVar7) {
      return;
    }
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (local_1f8.samplers == (stbir__info *)0x0) {
LAB_14236122a:
    local_1f8.called_alloc = 1;
    iVar12 = stbir__perform_build(&local_1f8,iVar12);
    if (iVar12 < 1) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSplits > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x8d3,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (iVar12 == 1) {
      iVar17 = local_1f8.needs_rebuild;
      goto LAB_142361332;
    }
    local_f0 = &local_1f8;
    local_d0.DataPtr = (void **)0x0;
    local_d0.ArrayNum = 0;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FImageCore::ResizeImage'::__l109::<lambda_2>,void,int>::Call;
    local_b8 = &local_f0;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ResizeImage",iVar12,1,(TFunctionRef<void___cdecl(int)> *)&local_c0,
               (<lambda_1>)(undefined1)local_res8[0],Unbalanced,&local_d0);
  }
  else {
    iVar17 = 0;
    if (local_1f8.needs_rebuild != 0) {
      pvVar5 = (local_1f8.samplers)->alloced_mem;
      if (pvVar5 != (void *)0x0) {
        (local_1f8.samplers)->alloced_mem = (void *)0x0;
        FMemory::Free(pvVar5);
      }
      local_1f8.samplers = (stbir__info *)0x0;
      goto LAB_14236122a;
    }
LAB_142361332:
    if (local_1f8.splits == 1) {
      stbir_resize_extended(&local_1f8);
    }
    else {
      if (local_1f8.samplers == (stbir__info *)0x0) {
        return;
      }
      if ((iVar17 == 0) && (0 < local_1f8.splits)) {
        if (((local_1f8.samplers)->vertical).is_gather == 0) {
          stbir__vertical_scatter_loop(local_1f8.samplers,(local_1f8.samplers)->split_info,1);
        }
        else {
          stbir__vertical_gather_loop(local_1f8.samplers,(local_1f8.samplers)->split_info,1);
        }
      }
    }
  }
  if (local_1f8.samplers == (stbir__info *)0x0) {
    return;
  }
  FVar18.Data = (local_1f8.samplers)->alloced_mem;
  if (FVar18.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  (local_1f8.samplers)->alloced_mem = (void *)0x0;
LAB_1423612f6:
  FMemory::Free(FVar18.Data);
  return;
}

// ResizeImageAllocDest @ 142361750

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageCore::ResizeImageAllocDest
          (FImageView *param_1,FImage *param_2,int param_3,int param_4,EResizeImageFilter param_5)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  EGammaSpace EVar4;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if ((((cVar1 != '\0') && (cVar1 != '\x01')) &&
      (*(char *)((longlong)&param_1->_padding_ + 5) != '\0')) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetFormatNeedsGammaSpace(Format) || GammaSpace == EGammaSpace::Linear",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                         ,0xe4,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar4 = *(EGammaSpace *)((longlong)&param_1->_padding_ + 5);
  if (EVar4 == Pow22) {
    EVar4 = sRGB;
  }
  ResizeImageAllocDest
            (param_1,param_2,param_3,param_4,*(Type *)((longlong)&param_1->_padding_ + 4),EVar4,
             param_5);
  return;
}

// ResizeImageAllocDest @ 142361820

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageCore::ResizeImageAllocDest
          (FImageView *param_1,FImage *param_2,int param_3,int param_4,Type param_5,
          EGammaSpace param_6,EResizeImageFilter param_7)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  FImageView local_28;
  
  if ((param_2->RawData).ArrayNum != 0) {
    pvVar1 = param_1->RawData;
    pvVar4 = FImage::GetPixelPointer(param_2,0,0,0);
    if (pvVar1 == pvVar4) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestImage.RawData.Num() == 0 || SourceImage.RawData != DestImage.GetPixelPointer(0,0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x8e6,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if (param_6 == Pow22) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestGammaSpace != EGammaSpace::Pow22",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                       ,0x8e9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)&param_2->_padding_ = (int)param_1->_padding_;
  *(Type *)((longlong)&param_2->_padding_ + 4) = param_5;
  *(int *)&param_2->_padding_ = param_3;
  *(int *)((longlong)&param_2->_padding_ + 4) = param_4;
  *(EGammaSpace *)((longlong)&param_2->_padding_ + 5) = param_6;
  InitImageStorage(param_2);
  local_28._padding_ = param_2->_padding_;
  local_28._padding_ = param_2->_padding_;
  local_28.RawData = (param_2->RawData).AllocatorInstance.Data;
  ResizeImage(param_1,&local_28,param_7);
  return;
}

// ResizeImageInPlace @ 142361930

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageCore::ResizeImageInPlace(FImage *param_1,int param_2,int param_3,EResizeImageFilter param_4)

{
  char cVar1;
  undefined1 uVar2;
  code *pcVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  EGammaSpace EVar6;
  FScriptContainerElement *pFVar7;
  EGammaSpace EVar8;
  EGammaSpace *pEVar9;
  FImageView local_88;
  FImageView local_70;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if ((((cVar1 != '\0') && (cVar1 != '\x01')) &&
      (*(char *)((longlong)&param_1->_padding_ + 5) != '\0')) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetFormatNeedsGammaSpace(Format) || GammaSpace == EGammaSpace::Linear",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Public\\ImageCore.h"
                         ,0xe4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pEVar9 = (EGammaSpace *)((longlong)&param_1->_padding_ + 5);
  EVar8 = *pEVar9;
  uVar2 = *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  if (((param_2 != (int)param_1->_padding_) ||
      (param_3 != *(int *)((longlong)&param_1->_padding_ + 4))) ||
     ((EVar6 = FImageInfo::GetGammaSpace((FImageInfo *)param_1), EVar8 != EVar6 ||
      (bVar5 = FilterIsNopWhenSameSize(param_4), !bVar5)))) {
    pFVar4 = (param_1->RawData).AllocatorInstance.Data;
    (param_1->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->RawData).ArrayNum = 0;
    uStack_4c = 0x201;
    if (EVar8 == Pow22) {
      EVar8 = sRGB;
    }
    local_38 = 0;
    (param_1->RawData).ArrayMax = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_88._padding_ = param_1->_padding_;
    local_88._padding_ = param_1->_padding_;
    param_1->_padding_ = 0;
    param_1->_padding_ = CONCAT26(uStack_4a,0x20100000000);
    local_88.RawData = pFVar4;
    if ((param_1->RawData).ArrayNum != 0) {
      pFVar7 = FImage::GetPixelPointer(param_1,0,0,0);
      if ((local_88.RawData == pFVar7) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestImage.RawData.Num() == 0 || SourceImage.RawData != DestImage.GetPixelPointer(0,0)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x8e6,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((EVar8 == Pow22) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("DestGammaSpace != EGammaSpace::Pow22",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                             ,0x8e9,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(undefined4 *)&param_1->_padding_ = (undefined4)local_88._padding_;
    *(int *)&param_1->_padding_ = param_2;
    *(int *)((longlong)&param_1->_padding_ + 4) = param_3;
    *(undefined1 *)((longlong)&param_1->_padding_ + 4) = uVar2;
    *pEVar9 = EVar8;
    InitImageStorage(param_1);
    local_70._padding_ = param_1->_padding_;
    local_70._padding_ = param_1->_padding_;
    local_70.RawData = (param_1->RawData).AllocatorInstance.Data;
    ResizeImage(&local_88,&local_70,param_4);
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
  }
  return;
}

// ResizeImageInPlace @ 142361b30

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageCore::ResizeImageInPlace
          (FImage *param_1,int param_2,int param_3,Type param_4,EGammaSpace param_5,
          EResizeImageFilter param_6)

{
  FScriptContainerElement *pFVar1;
  EGammaSpace EVar2;
  bool bVar3;
  FImageView local_58;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined2 uStack_34;
  undefined2 uStack_32;
  undefined8 local_20;
  
  if ((((param_2 != (int)param_1->_padding_) ||
       (param_3 != *(int *)((longlong)&param_1->_padding_ + 4))) ||
      (param_4 != *(Type *)((longlong)&param_1->_padding_ + 4))) ||
     ((EVar2 = FImageInfo::GetGammaSpace((FImageInfo *)param_1), param_5 != EVar2 ||
      (bVar3 = FilterIsNopWhenSameSize(param_6), !bVar3)))) {
    pFVar1 = (param_1->RawData).AllocatorInstance.Data;
    (param_1->RawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (param_1->RawData).ArrayNum = 0;
    local_20 = 0;
    (param_1->RawData).ArrayMax = 0;
    local_58._padding_ = param_1->_padding_;
    local_58._padding_ = param_1->_padding_;
    local_40 = 0;
    uStack_38 = 0;
    EVar2 = sRGB;
    if (param_5 != Pow22) {
      EVar2 = param_5;
    }
    uStack_34 = 0x201;
    param_1->_padding_ = 0;
    param_1->_padding_ = CONCAT26(uStack_32,0x20100000000);
    local_58.RawData = pFVar1;
    ResizeImageAllocDest(&local_58,param_1,param_2,param_3,param_4,EVar2,param_6);
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  }
  return;
}

// ResizeTo @ 142361ca0

/* WARNING: Enum "EResizeImageFilter": Some values do not have unique names */

void __cdecl
FImageCore::ResizeTo
          (FImageView *param_1,FImage *param_2,int param_3,int param_4,Type param_5,
          EGammaSpace param_6)

{
  ResizeImageAllocDest(param_1,param_2,param_3,param_4,param_5,param_6,Default);
  return;
}

// SanitizeFloat16AndSetAlphaOpaqueForBC6H @ 142361cd0

void __cdecl FImageCore::SanitizeFloat16AndSetAlphaOpaqueForBC6H(FImageView *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  <lambda_1> local_res8 [8];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  longlong *local_40;
  longlong local_38;
  longlong lStack_30;
  void *local_28;
  
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1561,"Texture.SanitizeFloat16AndSetAlphaOpaqueForBC6H",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x619);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1561);
  }
  if ((*(char *)((longlong)&param_1->_padding_ + 4) != '\x04') &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOutImageWhole.Format == ERawImageFormat::RGBA16F",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x61a,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar3 = ImageParallelForComputeNumJobs(param_1,(long64 *)local_res8);
  local_38 = param_1->_padding_;
  lStack_30 = param_1->_padding_;
  local_28 = param_1->RawData;
  local_58.DataPtr = (void **)0x0;
  local_58.ArrayNum = 0;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::SanitizeFloat16AndSetAlphaOpaqueForBC6H'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_40 = &local_38;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"PF.SanitizeFloat16AndSetAlphaOpaqueForBC6H",iVar3,1,
             (TFunctionRef<void___cdecl(int)> *)&local_48,local_res8[0],Unbalanced,&local_58);
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ScaleChannelsSoMinMaxIsInZeroToOne @ 142361e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FImageCore::ScaleChannelsSoMinMaxIsInZeroToOne(FImageView *param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  <lambda_1> local_res8 [8];
  FLinearColor_u_0 local_78;
  FLinearColor_u_0 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  longlong local_38;
  longlong lStack_30;
  void *local_28;
  undefined1 *local_18;
  undefined1 *local_10;
  
  if (((longlong)(int)param_1->_padding_ * (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
       (longlong)(int)param_1->_padding_ != 0) &&
     ((bVar1 = *(byte *)((longlong)&param_1->_padding_ + 4), bVar1 == 4 ||
      ((bVar1 < 9 && ((0x1a4U >> (bVar1 & 0x1f) & 1) != 0)))))) {
    ComputeChannelLinearMinMax
              (param_1,(FLinearColor *)&local_78._s_0,(FLinearColor *)&local_68._s_0);
    if ((local_78._s_0.R < 0.0) ||
       ((((local_78._s_0.G < 0.0 || (local_78._s_0.B < 0.0)) || (local_78._s_0.A < 0.0)) ||
        (((__real_3f800000 < local_68._s_0.R || (__real_3f800000 < local_68._s_0.G)) ||
         ((__real_3f800000 < local_68._s_0.B || (__real_3f800000 < local_68._s_0.A)))))))) {
      auVar3._4_4_ = local_68._s_0.G;
      auVar3._0_4_ = local_68._s_0.R;
      auVar3._8_4_ = local_68._s_0.B;
      auVar3._12_4_ = local_68._s_0.A;
      auVar5._4_4_ = local_78._s_0.G;
      auVar5._0_4_ = local_78._s_0.R;
      auVar5._8_4_ = local_78._s_0.B;
      auVar5._12_4_ = local_78._s_0.A;
      auVar3 = maxps(auVar3,___xmm_3f8000003f8000003f8000003f800000);
      local_58 = minps(auVar5,ZEXT816(0));
      auVar4._0_4_ = auVar3._0_4_ - local_58._0_4_;
      auVar4._4_4_ = auVar3._4_4_ - local_58._4_4_;
      auVar4._8_4_ = auVar3._8_4_ - local_58._8_4_;
      auVar4._12_4_ = auVar3._12_4_ - local_58._12_4_;
      auVar5 = maxps(auVar4,___xmm_00800000008000000080000000800000);
      local_48 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar5);
      iVar2 = ImageParallelForComputeNumJobs(param_1,(long64 *)local_res8);
      local_38 = param_1->_padding_;
      lStack_30 = param_1->_padding_;
      local_28 = param_1->RawData;
      local_18 = local_58;
      local_10 = local_48;
      local_68._s_0.R = 0.0;
      local_68._s_0.G = 0.0;
      local_68._s_0.B = 0.0;
      local_78._s_0.R = 45.347595;
      local_78._s_0.G = 1.4013e-45;
      local_78._8_8_ = &local_38;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"PF.ScaleChannelsSoMinMaxIsInZeroToOne",iVar2,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_78._s_0,local_res8[0],Unbalanced,
                 (TArrayView<std::nullptr_t,int> *)&local_68._s_0);
      return true;
    }
  }
  return false;
}

// SetAlphaOpaque @ 142361fa0

void __cdecl FImageCore::SetAlphaOpaque(FImageView *param_1)

{
  char cVar1;
  int iVar2;
  <lambda_1> local_res8 [32];
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong lStack_30;
  void *local_28;
  
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if ((cVar1 == '\x01') || ((byte)(cVar1 - 3U) < 3)) {
    iVar2 = ImageParallelForComputeNumJobs(param_1,(long64 *)local_res8);
    local_38 = param_1->_padding_;
    lStack_30 = param_1->_padding_;
    local_28 = param_1->RawData;
    local_58.DataPtr = (void **)0x0;
    local_58.ArrayNum = 0;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FImageCore::ImageParallelFor<`FImageCore::SetAlphaOpaque'::__l2::<lambda_1>_>'::__l2::<lambda_1>,void,int>
               ::Call;
    local_40 = &local_38;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"PF.SetAlphaOpaque",iVar2,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
               local_res8[0],Unbalanced,&local_58);
  }
  return;
}

// TransformToWorkingColorSpace @ 142362300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FImageCore::TransformToWorkingColorSpace
          (FImageView *param_1,TVector2<double> *param_2,TVector2<double> *param_3,
          TVector2<double> *param_4,TVector2<double> *param_5,EChromaticAdaptationMethod param_6,
          double param_7)

{
  undefined8 *puVar1;
  float *pfVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  FColorSpace *pFVar9;
  TArrayView<FLinearColor,__int64> *pTVar10;
  FLinearColor *pFVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_418 [32];
  <lambda_1> local_3d8;
  long64 local_3d0 [2];
  FLinearColor_u_0 local_3c0;
  TArrayView<std::nullptr_t,int> local_3b0;
  code *local_3a0;
  long64 *local_398;
  TArrayView<FLinearColor,__int64> local_390;
  FLinearColor local_380;
  FColorSpaceTransform local_368;
  FLinearColor *local_2e8;
  undefined8 uStack_2e0;
  long64 local_2d8;
  longlong local_2d0;
  FColorSpaceTransform local_2c8;
  FLinearColor *local_248;
  undefined8 uStack_240;
  FColorSpaceTransform local_238;
  FColorSpace local_1b8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_418;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1747,"Texture.TransformToWorkingColorSpace",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
               ,0x6d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1747);
  }
  if ((*(char *)((longlong)&param_1->_padding_ + 5) != '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLinearImage.GammaSpace == EGammaSpace::Linear",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\ImageCore\\Private\\ImageCore.cpp"
                         ,0x6d5,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  UE::Color::FColorSpace::FColorSpace(&local_1b8,param_2,param_3,param_4,param_5);
  pFVar9 = UE::Color::FColorSpace::GetWorking();
  bVar7 = UE::Color::FColorSpace::Equals(&local_1b8,pFVar9,param_7);
  if (bVar7) {
    if (6 < (byte)LogImageCore._0_1_) {
      UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogImageCore);
    }
  }
  else {
    UE::Color::FColorSpaceTransform::FColorSpaceTransform(&local_238,&local_1b8,pFVar9,param_6);
    pTVar10 = FImageView::AsRGBA32F(param_1,&local_390);
    pFVar11 = pTVar10->DataPtr;
    lVar13 = (longlong)(int)param_1->_padding_ *
             (longlong)*(int *)((longlong)&param_1->_padding_ + 4) *
             (longlong)(int)param_1->_padding_;
    iVar8 = ImageParallelForComputeNumJobsForPixels(local_3d0,lVar13);
    fVar6 = __real_c77fe000;
    fVar5 = __real_477fe000;
    local_368._0_8_ = local_238._0_8_;
    local_368._8_8_ = local_238._8_8_;
    local_368._16_8_ = local_238._16_8_;
    local_368._24_8_ = local_238._24_8_;
    local_368._32_8_ = local_238._32_8_;
    local_368._40_8_ = local_238._40_8_;
    local_368._48_8_ = local_238._48_8_;
    local_368._56_8_ = local_238._56_8_;
    local_368._64_8_ = local_238._64_8_;
    local_368._72_8_ = local_238._72_8_;
    local_368._80_8_ = local_238._80_8_;
    local_368._88_8_ = local_238._88_8_;
    local_368._96_8_ = local_238._96_8_;
    local_368._104_8_ = local_238._104_8_;
    local_368._112_8_ = local_238._112_8_;
    local_368._120_8_ = local_238._120_8_;
    local_2e8 = pFVar11;
    if (iVar8 < 2) {
      if (0 < lVar13) {
        lVar12 = 0;
        do {
          puVar1 = (undefined8 *)((longlong)&local_2e8->field0_0x0 + lVar12);
          local_3c0._0_8_ = *puVar1;
          local_3c0._8_8_ = puVar1[1];
          pFVar11 = UE::Color::FColorSpaceTransform::Apply
                              (&local_368,&local_380,(FLinearColor *)&local_3c0._s_0);
          fVar17 = (pFVar11->field0_0x0)._s_0.R;
          fVar16 = (pFVar11->field0_0x0)._s_0.G;
          local_3c0._0_8_ = *(undefined8 *)&pFVar11->field0_0x0;
          fVar15 = (pFVar11->field0_0x0)._s_0.B;
          fVar4 = (pFVar11->field0_0x0)._s_0.A;
          local_3c0._8_4_ = *(float *)((longlong)&pFVar11->field0_0x0 + 8);
          local_3c0._12_4_ = *(float *)((longlong)&pFVar11->field0_0x0 + 0xc);
          if (fVar5 <= fVar17) {
            fVar17 = fVar5;
          }
          if (fVar5 <= fVar16) {
            fVar16 = fVar5;
          }
          if (fVar5 <= fVar15) {
            fVar15 = fVar5;
          }
          if (fVar17 <= fVar6) {
            fVar17 = fVar6;
          }
          if (fVar16 <= fVar6) {
            fVar16 = fVar6;
          }
          if (fVar15 <= fVar6) {
            fVar15 = fVar6;
          }
          pfVar2 = (float *)((longlong)&local_2e8->field0_0x0 + lVar12);
          *pfVar2 = fVar17;
          pfVar2[1] = fVar16;
          pfVar2[2] = fVar15;
          pfVar2[3] = fVar4;
          lVar13 = lVar13 + -1;
          lVar12 = lVar12 + 0x10;
        } while (lVar13 != 0);
      }
    }
    else {
      local_2d8 = local_3d0[0];
      local_2c8._0_8_ = local_238._0_8_;
      local_2c8._8_8_ = local_238._8_8_;
      local_3a0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`ParallelLoop<`FImageCore::TransformToWorkingColorSpace'::__l2::<lambda_1>_>'::__l9::<lambda_1>,void,int>
                  ::Call;
      local_398 = &local_2d8;
      local_2c8._16_8_ = local_238._16_8_;
      local_2c8._24_8_ = local_238._24_8_;
      local_2c8._32_8_ = local_238._32_8_;
      local_2c8._40_8_ = local_238._40_8_;
      local_2c8._48_8_ = local_238._48_8_;
      local_2c8._56_8_ = local_238._56_8_;
      local_2c8._64_8_ = local_238._64_8_;
      local_2c8._72_8_ = local_238._72_8_;
      local_2c8._80_8_ = local_238._80_8_;
      local_2c8._88_8_ = local_238._88_8_;
      local_2c8._96_8_ = local_238._96_8_;
      local_2c8._104_8_ = local_238._104_8_;
      local_2c8._112_8_ = local_238._112_8_;
      local_2c8._120_8_ = local_238._120_8_;
      uStack_240 = uStack_2e0;
      local_3b0.DataPtr = (void **)0x0;
      local_3b0.ArrayNum = 0;
      local_2d0 = lVar13;
      local_248 = pFVar11;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"Texture.TransformToWorkingColorSpace.PF",iVar8,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_3a0,local_3d8,Unbalanced,&local_3b0);
    }
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// TransposeImageRGBABGRA @ 142362690

void __cdecl FImageCore::TransposeImageRGBABGRA(FImageView *param_1)

{
  CopyImageRGBABGRA(param_1,param_1);
  return;
}

// my_filter_lanczos4 @ 142363960

float __cdecl FImageCore::my_filter_lanczos4(float param_1,float param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = my_filter_lanczos(param_1,__real_40000000);
  return fVar1;
}

// my_filter_lanczos5 @ 142363980

float __cdecl FImageCore::my_filter_lanczos5(float param_1,float param_2,void *param_3)

{
  float fVar1;
  
  fVar1 = my_filter_lanczos(param_1,__real_40200000);
  return fVar1;
}

// my_filter_lanczos @ 1423639a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl FImageCore::my_filter_lanczos(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float _X;
  
  fVar1 = __real_3f800000;
  if (param_2 <= (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    return 0.0;
  }
  fVar3 = param_1 * __real_40490fdb;
  if (__real_38d1b717 <= (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = sinf(fVar3);
    fVar2 = fVar2 / fVar3;
  }
  else {
    fVar2 = __real_3f800000 - param_1 * param_1 * ___real_3fd28d34;
  }
  fVar3 = param_1 / param_2;
  _X = fVar3 * __real_40490fdb;
  if (__real_38d1b717 <= (float)((uint)_X & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar1 = sinf(_X);
    fVar1 = fVar1 / _X;
  }
  else {
    fVar1 = fVar1 - fVar3 * fVar3 * ___real_3fd28d34;
  }
  return fVar1 * fVar2;
}

// my_filter_support_two @ 142363ac0

float __cdecl FImageCore::my_filter_support_two(float param_1,void *param_2)

{
  return __real_40000000;
}

// my_filter_support_twoandhalf @ 142363ad0

float __cdecl FImageCore::my_filter_support_twoandhalf(float param_1,void *param_2)

{
  return __real_40200000;
}

// pulse_cubic_mitchell_B @ 142363ae0

float __cdecl FImageCore::pulse_cubic_mitchell_B(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)((uint)param_1 & __xmm_7fffffff7fffffff7fffffff7fffffff);
  if (fVar1 < __real_3f800000) {
    return (((__real_3fc00000 - param_2) * fVar1 + param_2 * __real_3fc00000) - __real_40200000) *
           fVar1 * fVar1 + (__real_3f800000 - param_2 * __real_3eaaaaab);
  }
  if (fVar1 < __real_40000000) {
    return ((__real_40200000 - param_2 * __real_3fc00000) +
           (param_2 * __real_3eaaaaab - __real_3f000000) * fVar1) * fVar1 * fVar1 +
           ((param_2 + param_2) - __real_40800000) * fVar1 +
           (__real_40000000 - param_2 * __real_3f2aaaab);
  }
  return 0.0;
}

