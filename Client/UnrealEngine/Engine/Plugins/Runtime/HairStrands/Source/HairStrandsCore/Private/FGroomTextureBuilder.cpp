// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 4

// operator() @ 14e0807e0

void __thiscall
`FGroomTextureBuilder::BuildFollicleTexture'::__l29::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  int iVar1;
  void *_Src;
  TNode **ppTVar2;
  FTextureResource *pFVar3;
  TNode *pTVar4;
  ForAnyElementType local_38;
  undefined8 local_30;
  TIntPoint<int>_u_0 local_28;
  uint local_20;
  EPixelFormat local_1c;
  UTexture2D *local_18;
  
  pFVar3 = UTexture::GetResource(*(UTexture **)((longlong)this + 0x20));
  if (pFVar3 != (FTextureResource *)0x0) {
    _Src = *(void **)((longlong)this + 0x10);
    iVar1 = *(int *)((longlong)this + 0x18);
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = CONCAT44(local_30._4_4_,iVar1);
    if (iVar1 == 0) {
      local_30 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar1,0,&local_38,iVar1,(int *)((longlong)&local_30 + 4));
      memcpy(local_38.Data,_Src,(longlong)iVar1 * 0x18);
    }
    local_28 = *(TIntPoint<int>_u_0 *)this;
    local_20 = *(uint *)((longlong)this + 8);
    local_1c = *(EPixelFormat *)((longlong)this + 0xc);
    local_18 = *(UTexture2D **)((longlong)this + 0x20);
    pTVar4 = ::operator_new(0x30);
    if (pTVar4 != (TNode *)0x0) {
      pTVar4->NextNode = (TNode *)0x0;
      (pTVar4->Item).Infos.AllocatorInstance.Data = local_38.Data;
      local_38.Data = (FScriptContainerElement *)0x0;
      (pTVar4->Item).Infos.ArrayNum = (int)local_30;
      (pTVar4->Item).Infos.ArrayMax = local_30._4_4_;
      local_30 = 0;
      (pTVar4->Item).Resolution.field0_0x0 = local_28;
      (pTVar4->Item).MipCount = local_20;
      (pTVar4->Item).Format = local_1c;
      (pTVar4->Item).OutTexture = local_18;
      ppTVar2 = &(GFollicleQueries.Head)->NextNode;
      GFollicleQueries.Head = pTVar4;
      *ppTVar2 = pTVar4;
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return;
}

// AllocateFollicleTextureResources @ 14e08b670

void __cdecl FGroomTextureBuilder::AllocateFollicleTextureResources(UTexture2D *param_1)

{
  int iVar1;
  FTexturePlatformData *this;
  FTexturePlatformData *pFVar2;
  
  if (param_1 != (UTexture2D *)0x0) {
    UTexture2D::GetNumMips(param_1);
    iVar1 = UTexture2D::GetSizeX(param_1);
    *(undefined1 *)((longlong)&param_1->_padding_ + 7) = 0xe;
    this = ::operator_new(0x38);
    pFVar2 = (FTexturePlatformData *)0x0;
    if (this != (FTexturePlatformData *)0x0) {
      pFVar2 = FTexturePlatformData::FTexturePlatformData(this);
    }
    UTexture2D::SetPlatformData(param_1,pFVar2);
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->SizeX = iVar1;
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->SizeY = iVar1;
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->PixelFormat = PF_B8G8R8A8;
  }
  return;
}

// AllocateFollicleTextureResources @ 14e08b6f0

void __cdecl
FGroomTextureBuilder::AllocateFollicleTextureResources
          (UTexture2D *param_1,TIntPoint<int> *param_2,uint param_3)

{
  int iVar1;
  FTexturePlatformData *this;
  FTexturePlatformData *pFVar2;
  
  if (param_1 != (UTexture2D *)0x0) {
    *(undefined1 *)((longlong)&param_1->_padding_ + 7) = 0xe;
    this = ::operator_new(0x38);
    pFVar2 = (FTexturePlatformData *)0x0;
    if (this != (FTexturePlatformData *)0x0) {
      pFVar2 = FTexturePlatformData::FTexturePlatformData(this);
    }
    UTexture2D::SetPlatformData(param_1,pFVar2);
    iVar1 = (param_2->field0_0x0)._s_0.X;
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->SizeX = iVar1;
    iVar1 = (param_2->field0_0x0)._s_0.Y;
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->SizeY = iVar1;
    pFVar2 = UTexture2D::GetPlatformData(param_1);
    pFVar2->PixelFormat = PF_B8G8R8A8;
  }
  return;
}

// BuildFollicleTexture @ 14e08b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FGroomTextureBuilder::BuildFollicleTexture
          (TArray<FFollicleInfo,TSizedDefaultAllocator<32>_> *param_1,UTexture2D *param_2,
          bool param_3)

{
  code *pcVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  FHairStrandsDatas *pFVar6;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar7;
  code **ppcVar8;
  FScriptContainerElement *pFVar9;
  longlong lVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  undefined1 auStackY_2d8 [32];
  undefined1 local_298 [8];
  ForAnyElementType local_290;
  undefined8 local_288;
  code *local_280;
  int local_278;
  EPixelFormat local_274;
  ForAnyElementType local_270;
  undefined8 local_268;
  UTexture2D *local_260;
  int local_258;
  int local_250;
  int iStack_24c;
  FScriptContainerElement *local_248;
  code *local_238 [2];
  code *local_228 [3];
  code **local_210;
  undefined1 local_208 [40];
  code **local_1e0;
  byte local_1d8;
  undefined1 local_1c8 [400];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if ((param_2 == (UTexture2D *)0x0) || (param_1->ArrayNum == 0)) {
    if (2 < (byte)LogGroomTextureBuilder._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGroomTextureBuilder);
    }
  }
  else if (param_3) {
    iVar3 = UTexture2D::GetSizeY(param_2);
    iVar4 = UTexture2D::GetSizeX(param_2);
    local_250 = iVar4;
    iStack_24c = iVar3;
    local_258 = UTexture2D::GetNumMips(param_2);
    if (((local_258 != 0) && (0 < iVar4)) && (0 < iVar3)) {
      iVar3 = param_1->ArrayNum;
      pFVar12 = (param_1->AllocatorInstance).Data;
      local_290.Data = (FScriptContainerElement *)0x0;
      local_288 = 0;
      local_248 = pFVar12 + (longlong)iVar3 * 0x18;
      pFVar9 = local_248;
      while( true ) {
        if (param_1->ArrayNum != iVar3) {
          local_298[0] = 0;
          `TCheckedPointerIterator<FFollicleInfo_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_298);
        }
        if (pFVar12 == pFVar9) break;
        if ((*(UGroomAsset **)pFVar12 == (UGroomAsset *)0x0) ||
           (iVar4 = UGroomAsset::GetNumHairGroups(*(UGroomAsset **)pFVar12), iVar4 == 0)) {
          if (2 < (byte)LogHairStrands._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogHairStrands);
          }
LAB_14e08b997:
          pFVar12 = pFVar12 + 0x18;
        }
        else {
          uVar5 = UGroomAsset::GetNumHairGroups(*(UGroomAsset **)pFVar12);
          if (uVar5 == 0) goto LAB_14e08b997;
          uVar11 = (ulonglong)uVar5;
          do {
            pFVar6 = ::operator_new(400);
            if (pFVar6 == (FHairStrandsDatas *)0x0) {
              pFVar6 = (FHairStrandsDatas *)0x0;
            }
            else {
              memset(pFVar6,0,400);
              pFVar6 = FHairStrandsDatas::FHairStrandsDatas(pFVar6);
            }
            FHairStrandsDatas::FHairStrandsDatas((FHairStrandsDatas *)local_1c8);
            if ((int)pFVar6->_padding_ == 0) {
              if (pFVar6 != (FHairStrandsDatas *)0x0) {
                FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)&pFVar6->_padding_);
                FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)pFVar6);
                ::operator_delete(pFVar6,400);
              }
            }
            else {
              iVar4 = (int)local_288;
              if ((int)local_288 == local_288._4_4_) {
                iVar4 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x818,&local_290,(int *)((longlong)&local_288 + 4));
              }
              local_288 = CONCAT44(local_288._4_4_,iVar4 + 1);
              pFVar9 = local_290.Data + (longlong)iVar4 * 0x18;
              DefaultConstructItems<FFollicleInfoGPU,int>(pFVar9,1);
              *(undefined4 *)(pFVar9 + 8) = *(undefined4 *)(pFVar12 + 8);
              *(undefined4 *)(pFVar9 + 0xc) = *(undefined4 *)(pFVar12 + 0xc);
              *(FHairStrandsDatas **)pFVar9 = pFVar6;
              pFVar9[0x10] = pFVar12[0x10];
            }
            FHairStrandsCurves::~FHairStrandsCurves((FHairStrandsCurves *)(local_1c8 + 0x78));
            FHairStrandsPoints::~FHairStrandsPoints((FHairStrandsPoints *)local_1c8);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
          pFVar12 = pFVar12 + 0x18;
          pFVar9 = local_248;
        }
      }
      local_280 = (code *)CONCAT44(iStack_24c,local_250);
      local_278 = local_258;
      local_274 = UTexture2D::GetPixelFormat(param_2,0);
      _Src.Data = local_290.Data;
      lVar10 = (longlong)(int)local_288;
      local_270.Data = (FScriptContainerElement *)0x0;
      local_268 = CONCAT44(local_268._4_4_,(int)local_288);
      if ((int)local_288 == 0) {
        local_268 = local_288 & 0xffffffff;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,(int)local_288,0,&local_270,(int)local_288,
                   (int *)((longlong)&local_268 + 4));
        memcpy(local_270.Data,_Src.Data,lVar10 * 0x18);
      }
      local_238[0] = (code *)0x0;
      local_260 = param_2;
      local_210 = FMemory::Malloc(0x30,8);
      *local_210 = (code *)&UE::Core::Private::Function::
                            TFunction_OwnedObject<`FGroomTextureBuilder::BuildFollicleTexture'::`29'::<lambda_1>,1,1>
                            ::_vftable_;
      local_210[1] = local_280;
      *(int *)(local_210 + 2) = local_278;
      local_210[3] = (code *)0x0;
      *(EPixelFormat *)((longlong)local_210 + 0x14) = local_274;
      local_210[3] = (code *)local_270.Data;
      local_270.Data = (FScriptContainerElement *)0x0;
      *(undefined4 *)(local_210 + 4) = (undefined4)local_268;
      *(undefined4 *)((longlong)local_210 + 0x24) = local_268._4_4_;
      local_268 = 0;
      local_210[5] = (code *)local_260;
      if (local_210 + 1 != (code **)0x0) {
        local_238[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`FGroomTextureBuilder::BuildFollicleTexture'::__l29::<lambda_1>,void,FRHICommandListImmediate_&>
                       ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FGroomTextureBuilder::BuildFollicleTexture_::__l29::TSTR_FFollicleTextureQuery444>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_238);
      }
      else {
        this_00 = FRenderCommandList::GetRenderThread(this);
        local_208._0_8_ = local_238[0];
        local_1e0 = local_210;
        local_210 = (code **)0x0;
        local_208._16_8_ = local_228[0];
        local_208._24_8_ = local_228[1];
        local_208._32_8_ = local_228[2];
        local_238[0] = (code *)0x0;
        local_1d8 = 2;
        pFVar7 = (FRenderCommandTag *)
                 TRenderCommandTag<`FGroomTextureBuilder::BuildFollicleTexture'::__l29::TSTR_FFollicleTextureQuery444>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_208,pFVar7);
        uVar11 = (ulonglong)local_1d8;
        if ((2 < uVar11) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_208._0_8_ != (code *)0x0) {
            ppcVar8 = (code **)(local_208 + 0x10);
            if (local_1e0 != (code **)0x0) {
              ppcVar8 = local_1e0;
            }
            (**(code **)(*ppcVar8 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar11])(local_208);
        }
      }
      if (local_238[0] != (code *)0x0) {
        ppcVar8 = local_238 + 2;
        if (local_210 != (code **)0x0) {
          ppcVar8 = local_210;
        }
        (**(code **)(*ppcVar8 + 0x10))();
      }
      if (local_270.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data);
      }
      if (local_290.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data);
      }
    }
  }
  return;
}

