// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FStaticMeshComponentRecreateRenderStateContext @ 148779750

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FStaticMeshComponentRecreateRenderStateContext * __thiscall
FStaticMeshComponentRecreateRenderStateContext::FStaticMeshComponentRecreateRenderStateContext
          (FStaticMeshComponentRecreateRenderStateContext *this,
          TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  IStaticMeshComponent **ppIVar2;
  ulonglong uVar3;
  IStaticMeshComponent **ppIVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  FObjectCacheContext *this_00;
  longlong *plVar9;
  FStaticMeshComponentRecreateRenderStateContext *pFVar10;
  IStaticMeshComponent *pIVar11;
  UClass *pUVar12;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  IStaticMeshComponent **ppIVar16;
  uint uVar17;
  undefined1 auStack_1f8 [32];
  IStaticMeshComponent **local_1d8;
  IStaticMeshComponent **local_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  FObjectCacheContextScope local_1a8;
  undefined1 local_1a7 [7];
  IStaticMeshComponent *local_1a0;
  IStaticMeshComponent *local_198 [2];
  longlong *local_188;
  undefined1 auStack_180 [16];
  uint uStack_170;
  int iStack_16c;
  longlong local_168;
  TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
  *pTStack_160;
  FStaticMeshComponentRecreateRenderStateContext *local_158;
  undefined2 local_150;
  undefined1 local_148 [8];
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  TObjectCacheIterator<IStaticMeshComponent> local_128;
  undefined1 local_108 [32];
  longlong local_e8;
  TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
  *pTStack_e0;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_d8;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  *(undefined8 *)&this->StaticMeshComponents = 0;
  *(undefined8 *)&(this->StaticMeshComponents).field_0x8 = 0;
  *(undefined8 *)&(this->StaticMeshComponents).field_0x20 = 0;
  *(undefined4 *)&(this->StaticMeshComponents).field_0x28 = 0;
  *(undefined4 *)&(this->StaticMeshComponents).field_0x2c = 0x80;
  *(undefined4 *)&(this->StaticMeshComponents).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->StaticMeshComponents).field_0x34 = 0;
  *(undefined8 *)&(this->StaticMeshComponents).field_0x40 = 0;
  *(undefined4 *)&(this->StaticMeshComponents).field_0x48 = 0;
  this->bUnbuildLighting = param_2;
  this->bRefreshBounds = param_3;
  TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
  ::Reserve((TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
             *)this,param_1->ArrayNum);
  pFVar14 = (param_1->AllocatorInstance).Data;
  iVar8 = param_1->ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar8 * 8;
  while( true ) {
    if (param_1->ArrayNum != iVar8) {
      local_1a7[0] = 0;
      `TCheckedPointerIterator<UStaticMesh_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_1a7);
    }
    if (pFVar14 == pFVar1) break;
    if (*(longlong *)pFVar14 != 0) {
      local_138 = &local_140;
      local_140 = *(longlong *)pFVar14;
      TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<void_*_&&>_>
                ((TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
                  *)this,(TKeyInitializer<void_*_&&> *)local_148,(bool *)&local_138);
    }
    pFVar14 = pFVar14 + 8;
  }
  if (*(int *)&(this->StaticMeshComponents).field_0x8 !=
      *(int *)&(this->StaticMeshComponents).field_0x34) {
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    FObjectCacheContextScope::FObjectCacheContextScope(&local_1a8);
    TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_108,
               (TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
                *)this);
    local_150 = 0;
    stack0xfffffffffffffe88 = local_108._16_16_;
    local_188 = (longlong *)local_108._0_8_;
    auStack_180._0_8_ = local_108._8_8_;
    local_168 = local_e8;
    pTStack_160 = pTStack_e0;
    local_158 = this;
    if (local_108._28_4_ < *(int *)(local_108._16_8_ + 0x18)) {
      do {
        this_00 = FObjectCacheContextScope::GetContext(&local_1a8);
        FObjectCacheContext::GetStaticMeshComponents
                  (this_00,&local_128,*(UStaticMesh **)(*local_188 + (longlong)iStack_16c * 0x30));
        ppIVar2 = local_128.ArrayView.DataPtr + local_128.ArrayView.ArrayNum;
        for (ppIVar16 = local_128.ArrayView.DataPtr; ppIVar16 != ppIVar2; ppIVar16 = ppIVar16 + 1) {
          local_198[0] = *ppIVar16;
          plVar9 = (longlong *)(**(code **)((longlong)*local_198[0] + 8))();
          cVar6 = (**(code **)*plVar9)(plVar9);
          if (cVar6 != '\0') {
            cVar6 = (**(code **)(*plVar9 + 0x18))(plVar9);
            if ((cVar6 == '\0') &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("PrimitiveComponent->IsRegistered()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\StaticMeshResources.cpp"
                                   ,0x2e,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar10 = (FStaticMeshComponentRecreateRenderStateContext *)(*pcVar5)();
              return pFVar10;
            }
            (**(code **)(*plVar9 + 0x50))(plVar9);
            pIVar11 = (IStaticMeshComponent *)(**(code **)(*plVar9 + 0x98))(plVar9);
            if (pIVar11 == (IStaticMeshComponent *)0x0) {
LAB_148779a69:
              local_1a0 = (IStaticMeshComponent *)0x0;
            }
            else {
              pUVar12 = Z_Construct_UClass_UStaticMeshComponent_NoRegister();
              iVar8 = (int)pUVar12->_padding_;
              if ((*(int *)((longlong)pIVar11[2] + 0x38) < iVar8) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)((longlong)pIVar11[2] + 0x30) + (longlong)iVar8 * 8)
                  != &pUVar12->_padding_)) goto LAB_148779a69;
              lVar15 = (longlong)iStack_16c * 0x30 + *local_188;
              ppIVar4 = *(IStaticMeshComponent ***)(lVar15 + 8);
              local_1a0 = pIVar11;
              if ((ppIVar4 <= &local_1a0) && (&local_1a0 < ppIVar4 + *(int *)(lVar15 + 0x14))) {
                local_1c0 = (longlong)*(int *)(lVar15 + 0x10);
                local_1b8 = 8;
                local_1d8 = &local_1a0;
                local_1d0 = ppIVar4;
                local_1c8 = (longlong)*(int *)(lVar15 + 0x14);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar5 = (code *)swi(3);
                  pFVar10 = (FStaticMeshComponentRecreateRenderStateContext *)(*pcVar5)();
                  return pFVar10;
                }
              }
              iVar8 = *(int *)(lVar15 + 0x10);
              if (iVar8 == *(int *)(lVar15 + 0x14)) {
                iVar8 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x808,(ForAnyElementType *)(lVar15 + 8),(int *)(lVar15 + 0x14));
              }
              *(int *)(lVar15 + 0x10) = iVar8 + 1;
              *(IStaticMeshComponent **)(*(longlong *)(lVar15 + 8) + (longlong)iVar8 * 8) =
                   local_1a0;
            }
            lVar15 = (longlong)iStack_16c * 0x30 + *local_188;
            ppIVar4 = *(IStaticMeshComponent ***)(lVar15 + 0x18);
            if ((ppIVar4 <= local_198) && (local_198 < ppIVar4 + *(int *)(lVar15 + 0x24))) {
              local_1c0 = (longlong)*(int *)(lVar15 + 0x20);
              local_1b8 = 8;
              local_1d8 = local_198;
              local_1d0 = ppIVar4;
              local_1c8 = (longlong)*(int *)(lVar15 + 0x24);
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                pFVar10 = (FStaticMeshComponentRecreateRenderStateContext *)(*pcVar5)();
                return pFVar10;
              }
            }
            iVar8 = *(int *)(lVar15 + 0x20);
            if (iVar8 == *(int *)(lVar15 + 0x24)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,(ForAnyElementType *)(lVar15 + 0x18),(int *)(lVar15 + 0x24));
            }
            *(int *)(lVar15 + 0x20) = iVar8 + 1;
            *(IStaticMeshComponent **)(*(longlong *)(lVar15 + 0x18) + (longlong)iVar8 * 8) =
                 local_198[0];
            local_130 = (**(code **)(*plVar9 + 0x30))(plVar9);
            TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
            Emplace<FSceneInterface_*>
                      (&local_88,(FSceneInterface **)(local_148 + 4),(bool *)&local_130);
          }
        }
        if (local_128.OwnedArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_128.OwnedArray.AllocatorInstance.Data);
        }
        uStack_170 = uStack_170 & ~auStack_180._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_180);
      } while (iStack_16c < *(int *)(auStack_180._8_8_ + 0x18));
      if (((char)local_150 != '\0') && (local_150._1_1_ != '\0')) {
        uVar17 = *(int *)&(local_158->StaticMeshComponents).field_0x8 -
                 *(int *)&(local_158->StaticMeshComponents).field_0x34;
        if (uVar17 < 4) {
          iVar8 = 1;
        }
        else {
          uVar3 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
          lVar15 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar15 & 0x1f);
        }
        if (((0 < (int)uVar17) && (*(int *)&(local_158->StaticMeshComponents).field_0x48 < iVar8))
           || (iVar8 < *(int *)&(local_158->StaticMeshComponents).field_0x48)) {
          *(int *)&(local_158->StaticMeshComponents).field_0x48 = iVar8;
          TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
                    *)local_158);
        }
      }
    }
    if (local_88.Elements._8_4_ != local_88.Elements._52_4_) {
      pTVar13 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
                TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                          (&local_d8,&local_88);
      UpdateAllPrimitiveSceneInfosForScenes(pTVar13);
      FlushRenderingCommands();
    }
    FObjectCacheContextScope::~FObjectCacheContextScope(&local_1a8);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  return this;
}

// FStaticMeshComponentRecreateRenderStateContext @ 148779c60

FStaticMeshComponentRecreateRenderStateContext * __thiscall
FStaticMeshComponentRecreateRenderStateContext::FStaticMeshComponentRecreateRenderStateContext
          (FStaticMeshComponentRecreateRenderStateContext *this,UStaticMesh *param_1,bool param_2,
          bool param_3)

{
  TArray<UStaticMesh_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 1;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,1,0,&local_18.AllocatorInstance,1,&local_18.ArrayMax);
  *(UStaticMesh **)local_18.AllocatorInstance.Data = param_1;
  FStaticMeshComponentRecreateRenderStateContext(this,&local_18,param_2,param_3);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return this;
}

// ~FStaticMeshComponentRecreateRenderStateContext @ 14877f540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStaticMeshComponentRecreateRenderStateContext::~FStaticMeshComponentRecreateRenderStateContext
          (FStaticMeshComponentRecreateRenderStateContext *this)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  code *pcVar7;
  FStaticMeshComponentRecreateRenderStateContext *pFVar8;
  bool bVar9;
  char cVar10;
  longlong *plVar11;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> *pTVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  uint *puVar20;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156 [6];
  FStaticMeshComponentRecreateRenderStateContext *local_150;
  int iStack_148;
  uint uStack_144;
  undefined1 *local_140;
  undefined4 uStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  int local_120;
  undefined1 local_11c [12];
  FStaticMeshComponentRecreateRenderStateContext *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_e0;
  TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  iVar14 = *(int *)&(this->StaticMeshComponents).field_0x8 -
           *(int *)&(this->StaticMeshComponents).field_0x34;
  if (iVar14 != 0) {
    uStack_144 = 1;
    local_130 = 0;
    puVar1 = &(this->StaticMeshComponents).field_0x10;
    local_88.Elements._0_8_ = 0;
    local_88.Elements._8_8_ = 0;
    local_88.Elements._32_8_ = 0;
    local_88.Elements._40_4_ = 0;
    local_88.Elements._44_4_ = 0x80;
    local_88.Elements._48_4_ = 0xffffffff;
    local_88.Elements._52_4_ = 0;
    local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_88.HashSize = 0;
    iVar4 = *(int *)&(this->StaticMeshComponents).field_0x28;
    iStack_134 = 0;
    iStack_148 = 0;
    if (iVar4 != 0) {
      puVar20 = *(uint **)&(this->StaticMeshComponents).field_0x20;
      if (puVar20 == (uint *)0x0) {
        puVar20 = (uint *)puVar1;
      }
      uVar17 = *puVar20;
      local_130 = 0;
      while (uVar17 == 0) {
        lVar13 = (longlong)iStack_148;
        local_130 = local_130 + 0x20;
        iStack_148 = iStack_148 + 1;
        iStack_134 = iVar4;
        if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_148) goto LAB_14877f62f;
        uVar17 = puVar20[lVar13 + 1];
      }
      uStack_144 = -uVar17 & uVar17;
      uVar3 = (ulonglong)uStack_144 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_120 = (int)lVar13;
      iStack_134 = local_130 + -1 + local_120;
      if (iVar4 < iStack_134) {
        iStack_134 = iVar4;
      }
    }
LAB_14877f62f:
    uVar17 = *(uint *)&(this->StaticMeshComponents).field_0x28;
    uVar16 = uVar17 & 0xffffffe0;
    uStack_138 = 0xffffffff;
    TStack_108._padding_ = CONCAT44(uStack_144,iStack_148);
    TStack_108.CurrentBitIndex = iStack_134;
    TStack_108.UnvisitedBitMask = 0xffffffff;
    TStack_108._28_4_ = iStack_134;
    TStack_108.BaseBitIndex = local_130;
    uStack_e8 = CONCAT44(uStack_124,iVar14);
    iVar15 = (int)uVar17 >> 5;
    local_150 = this;
    local_140 = puVar1;
    iStack_12c = iStack_134;
    iStack_128 = iVar14;
    local_110 = this;
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
    if ((((int)uVar17 < 0) || (iVar4 < (int)uVar17)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar5 = *(uint *)&(this->StaticMeshComponents).field_0x28;
    if (uVar17 != uVar5) {
      puVar19 = *(undefined1 **)&(this->StaticMeshComponents).field_0x20;
      if (puVar19 == (undefined1 *)0x0) {
        puVar19 = puVar1;
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar15 * 4);
      while (uVar17 == 0) {
        lVar13 = (longlong)iVar15;
        uVar16 = uVar16 + 0x20;
        iVar15 = iVar15 + 1;
        uVar17 = uVar5;
        if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14877f730;
        uVar17 = *(uint *)(puVar19 + lVar13 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar17 = (int)lVar13 + -1 + uVar16;
      if ((int)uVar5 < (int)uVar17) {
        uVar17 = uVar5;
      }
    }
LAB_14877f730:
    while( true ) {
      pFVar8 = local_110;
      if (*(int *)&(local_110->StaticMeshComponents).field_0x8 -
          *(int *)&(local_110->StaticMeshComponents).field_0x34 != (int)uStack_e8) {
        `TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_158);
      }
      if (((TStack_108.CurrentBitIndex == uVar17) &&
          (TStack_108.Array ==
           (TBitArray<FDefaultBitArrayAllocator> *)&(this->StaticMeshComponents).field_0x10)) &&
         (pFVar8 == this)) break;
      lVar13 = (longlong)TStack_108.CurrentBitIndex * 0x30 +
               *(longlong *)&pFVar8->StaticMeshComponents;
      puVar18 = *(undefined8 **)(lVar13 + 8);
      iVar14 = *(int *)(lVar13 + 0x10);
      puVar2 = puVar18 + iVar14;
      while( true ) {
        if (*(int *)(lVar13 + 0x10) != iVar14) {
          `TCheckedPointerIterator<UStaticMeshComponent_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_157);
        }
        if (puVar18 == puVar2) break;
        plVar11 = (longlong *)*puVar18;
        if (this->bUnbuildLighting != false) {
          (**(code **)(*plVar11 + 0x440))(plVar11,1,0);
        }
        if (this->bRefreshBounds != false) {
          (**(code **)(*plVar11 + 0x5b0))(plVar11);
        }
        puVar18 = puVar18 + 1;
      }
      puVar18 = *(undefined8 **)(lVar13 + 0x18);
      iVar14 = *(int *)(lVar13 + 0x20);
      puVar2 = puVar18 + iVar14;
      while( true ) {
        if (*(int *)(lVar13 + 0x20) != iVar14) {
          `TCheckedPointerIterator<IStaticMeshComponent_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_156);
        }
        if (puVar18 == puVar2) break;
        plVar11 = (longlong *)(**(code **)(*(longlong *)*puVar18 + 8))();
        cVar10 = (**(code **)(*plVar11 + 0x18))(plVar11);
        if ((cVar10 != '\0') && (cVar10 = (**(code **)*plVar11)(plVar11), cVar10 == '\0')) {
          (**(code **)(*plVar11 + 0x58))(plVar11,0);
          local_11c._4_8_ = (**(code **)(*plVar11 + 0x30))(plVar11);
          TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
          Emplace<FSceneInterface_*>
                    (&local_88,(FSceneInterface **)local_11c,(bool *)(local_11c + 4));
        }
        puVar18 = puVar18 + 1;
      }
      TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
    }
    pTVar12 = TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>::
              TSet<FSceneInterface_*,DefaultKeyFuncs<FSceneInterface_*,0>,FDefaultSetAllocator>
                        (&local_e0,&local_88);
    UpdateAllPrimitiveSceneInfosForScenes(pTVar12);
    local_88.HashSize = 0;
    if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_88.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FSceneInterface_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_88.Elements);
  }
  *(undefined4 *)&(this->StaticMeshComponents).field_0x48 = 0;
  pvVar6 = *(void **)&(this->StaticMeshComponents).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// GetComponentsUsingMesh @ 14879d550

TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> * __thiscall
FStaticMeshComponentRecreateRenderStateContext::GetComponentsUsingMesh
          (FStaticMeshComponentRecreateRenderStateContext *this,UStaticMesh *param_1)

{
  code *pcVar1;
  bool bVar2;
  TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData> *pTVar3;
  TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *pTVar4;
  
  pTVar3 = TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData>,TDefaultMapHashableKeyFuncs<void_*,FStaticMeshComponentRecreateRenderStateContext::FData,0>,FDefaultSetAllocator>
                   *)this,param_1);
  if (pTVar3 != (TTuple<void_*,FStaticMeshComponentRecreateRenderStateContext::FData> *)0x0) {
    return (TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *)&pTVar3->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *)(*pcVar1)();
    return pTVar4;
  }
  return (TArray<UStaticMeshComponent_*,TSizedDefaultAllocator<32>_> *)&DAT_00000008;
}

