// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 4

// FSlateAtlasedTextureResource @ 145fe5ce0

FSlateAtlasedTextureResource * __thiscall
FSlateAtlasedTextureResource::FSlateAtlasedTextureResource
          (FSlateAtlasedTextureResource *this,UTexture *param_1)

{
  FSlateBaseUTextureResource::FSlateBaseUTextureResource((FSlateBaseUTextureResource *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7FSlateAtlasedTextureResource__6B_;
  *(undefined8 *)&this->ProxyMap = 0;
  *(undefined8 *)&(this->ProxyMap).field_0x8 = 0;
  *(undefined8 *)&(this->ProxyMap).field_0x20 = 0;
  *(undefined4 *)&(this->ProxyMap).field_0x28 = 0;
  *(undefined4 *)&(this->ProxyMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ProxyMap).field_0x34 = 0;
  *(undefined4 *)&(this->ProxyMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ProxyMap).field_0x40 = 0;
  *(undefined4 *)&(this->ProxyMap).field_0x48 = 0;
  return this;
}

// ~FSlateAtlasedTextureResource @ 145fe9e80

void __thiscall
FSlateAtlasedTextureResource::~FSlateAtlasedTextureResource(FSlateAtlasedTextureResource *this)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>_>
  *this_00;
  void *pvVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  this_00 = &this->ProxyMap;
  this->_padding_ = (longlong)&___7FSlateAtlasedTextureResource__6B_;
  TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
              *)this_00);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar4 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
              *)this_00;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      pvVar1 = *(void **)(*local_48 + 8 + (longlong)(int)uVar4 * 0x18);
      if (pvVar1 != (void *)0x0) {
        if (*(undefined8 **)((longlong)pvVar1 + 0x20) != (undefined8 *)0x0) {
          **(undefined8 **)((longlong)pvVar1 + 0x20) = 0;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (*(TReferenceControllerBase<1> **)((longlong)pvVar1 + 0x28));
        ::operator_delete(pvVar1,0x30);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar4 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar5 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar5 < 4) {
        iVar3 = 1;
      }
      else {
        uVar4 = (ulonglong)((uVar5 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar3 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar5) && (local_18->HashSize < iVar3)) || (iVar3 < local_18->HashSize)) {
        local_18->HashSize = iVar3;
        TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
  *(undefined4 *)&(this->ProxyMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ProxyMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
  *(undefined1 *)&this->_padding_ = 0x84;
  this->_padding_ = (longlong)&___7FSlateShaderResource__6B_;
  return;
}

// FindOrCreateAtlasedProxy @ 146008790

FSlateShaderResourceProxy * __thiscall
FSlateAtlasedTextureResource::FindOrCreateAtlasedProxy
          (FSlateAtlasedTextureResource *this,UObject *param_1,FSlateAtlasData *param_2)

{
  TMap<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>_>
  *this_00;
  double dVar1;
  double dVar2;
  code *pcVar3;
  TIntPoint<int>_u_0 TVar4;
  TVector2<float>_u_0 TVar5;
  TVector2<float>_u_0 TVar6;
  bool bVar7;
  int iVar8;
  FSlateShaderResourceProxy *pFVar9;
  FSlateShaderResourceProxy *pFVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FSlateShaderResourceProxy_*_const_&>
  local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_c8;
  int local_c0;
  int iStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  UObject *local_a8;
  FWeakObjectPtr local_a0;
  UObject *local_98;
  FWeakObjectPtr *local_90;
  FSlateShaderResourceProxy ***local_88;
  
  this_00 = &this->ProxyMap;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  pFVar10 = (FSlateShaderResourceProxy *)0x0;
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_a8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_a8);
  local_a0 = local_res20;
  iVar8 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UObject_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                      *)this_00,local_res20.ObjectSerialNumber ^ local_res20.ObjectIndex,
                     (TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)&local_a0);
  if (((iVar8 == -1) ||
      (lVar12 = *(longlong *)&this_00->field_0x0 + (longlong)iVar8 * 0x18, lVar12 == 0)) ||
     (local_res8.Value = *(FSlateShaderResourceProxy ***)(lVar12 + 8),
     (FSlateShaderResourceProxy *)local_res8.Value == (FSlateShaderResourceProxy *)0x0)) {
    fVar14 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x370))();
    dVar1 = (param_2->SizeUV).field0_0x0._s_0.Y;
    fVar15 = (float)(**(code **)(*(longlong *)this->_padding_ + 0x368))();
    dVar2 = (param_2->SizeUV).field0_0x0._s_0.X;
    pFVar9 = ::operator_new(0x30);
    if (pFVar9 != (FSlateShaderResourceProxy *)0x0) {
      (pFVar9->StartUV).field0_0x0 = (TVector2<float>_u_0)0x0;
      (pFVar9->SizeUV).field0_0x0._s_0.X = 1.0;
      (pFVar9->SizeUV).field0_0x0._s_0.Y = 1.0;
      (pFVar9->ActualSize).field0_0x0 = (TIntPoint<int>_u_0)0x0;
      (pFVar9->HandleData).Object = (FSlateSharedHandleData *)0x0;
      (pFVar9->HandleData).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar10 = pFVar9;
    }
    pFVar10->Resource = (FSlateShaderResource *)this;
    lVar13 = (longlong)ROUND((dVar2 + dVar2) * (double)fVar15 + __real_3fe0000000000000) >> 1;
    iVar8 = (int)lVar13;
    lVar12 = (longlong)ROUND((dVar1 + dVar1) * (double)fVar14 + __real_3fe0000000000000) >> 1;
    local_res8.Value = (FSlateShaderResourceProxy **)pFVar10;
    if ((lVar13 != iVar8) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateShaderResourceProxy *)(*pcVar3)();
      return pFVar10;
    }
    iVar11 = (int)lVar12;
    local_c0 = iVar8;
    if ((lVar12 != iVar11) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IntFitsIn<OutType>(In)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                           ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar7))
    {
      pcVar3 = (code *)swi(3);
      pFVar10 = (FSlateShaderResourceProxy *)(*pcVar3)();
      return pFVar10;
    }
    TVar4._s_0.Y = iVar11;
    TVar4._s_0.X = local_c0;
    ((TIntPoint<int> *)((longlong)local_res8.Value + 0x18))->field0_0x0 = TVar4;
    local_b8 = (float)(param_2->StartUV).field0_0x0._s_0.X;
    fStack_b4 = (float)(param_2->StartUV).field0_0x0._s_0.Y;
    TVar5._s_0.Y = fStack_b4;
    TVar5._s_0.X = local_b8;
    ((TVector2<float> *)local_res8.Value)->field0_0x0 = TVar5;
    local_b0 = (float)(param_2->SizeUV).field0_0x0._s_0.X;
    fStack_ac = (float)(param_2->SizeUV).field0_0x0._s_0.Y;
    TVar6._s_0.Y = fStack_ac;
    TVar6._s_0.X = local_b0;
    ((TVector2<float> *)((longlong)local_res8.Value + 8))->field0_0x0 = TVar6;
    iStack_bc = iVar11;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_98 = param_1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(param_1);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_98);
    local_90 = &local_c8;
    local_88 = &local_res8.Value;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TWeakObjectPtr<UObject,FWeakObjectPtr>_&&,FSlateShaderResourceProxy_*_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,FSlateShaderResourceProxy_*,0>,FDefaultSetAllocator>
                *)this_00,&local_res8,(bool *)&local_90);
  }
  return (FSlateShaderResourceProxy *)local_res8.Value;
}

// IsResourceValid @ 14601b710

bool __thiscall FSlateAtlasedTextureResource::IsResourceValid(FSlateAtlasedTextureResource *this)

{
  bool bVar1;
  
  if ((UObjectBase *)this->_padding_ != (UObjectBase *)0x0) {
    bVar1 = UObjectBase::IsValidLowLevel((UObjectBase *)this->_padding_);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

