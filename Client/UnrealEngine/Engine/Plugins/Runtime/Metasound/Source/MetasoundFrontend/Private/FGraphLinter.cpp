// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 6

// operator() @ 14ae1e190

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
`Metasound::Frontend::FGraphLinter::DoesConnectionCauseLoop'::__l2::<lambda_1>::operator()
          (void *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          INodeController *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  bool *pbVar7;
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *pTVar8;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *pTVar9;
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *pTVar10;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *pTVar11;
  undefined1 local_res8 [16];
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *local_68;
  int local_60;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *local_58;
  int local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [16];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  piVar5 = (int *)(**(code **)(*(longlong *)param_1 + 0x158))(param_1,local_48);
  piVar1 = *(int **)this;
  if (((piVar1[3] == piVar5[3] && piVar1[2] == piVar5[2]) && piVar1[1] == piVar5[1]) &&
      *piVar5 == *piVar1) {
    **(undefined1 **)((longlong)this + 8) = 1;
  }
  if (**(char **)((longlong)this + 8) == '\0') {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)param_1 + 0x80))(param_1,&local_58);
      iVar3 = local_50;
      pTVar9 = local_58 + local_50;
      pTVar11 = local_58;
      while( true ) {
        if (local_50 != iVar3) {
          `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar11 == pTVar9) break;
        (**(code **)(*(longlong *)pTVar11->Object + 0x78))(pTVar11->Object,&local_68);
        iVar2 = local_60;
        pTVar10 = local_68 + local_60;
        pTVar8 = local_68;
        while( true ) {
          if (local_60 != iVar2) {
            `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController_const_,1>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pTVar8 == pTVar10) break;
          puVar6 = (undefined8 *)
                   (**(code **)(*(longlong *)pTVar8->Object + 0x70))(pTVar8->Object,local_48);
          pbVar7 = (bool *)(**(code **)(*(longlong *)*puVar6 + 0x158))((longlong *)*puVar6,local_38)
          ;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid>
                    (__return_storage_ptr__,(FGuid *)(local_res8 + 8),pbVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          pTVar8 = pTVar8 + 1;
        }
        DestructItems<TSharedRef<Metasound::Frontend::IInputController_const_,1>,int>
                  (local_68,local_60);
        if (local_68 != (TSharedRef<Metasound::Frontend::IInputController_const_,1> *)0x0) {
          FMemory::Free(local_68);
        }
        pTVar11 = pTVar11 + 1;
      }
      DestructItems<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,int>
                (local_58,local_50);
      if (local_58 != (TSharedRef<Metasound::Frontend::IOutputController_const_,1> *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  return __return_storage_ptr__;
}

// operator() @ 14ae1e850

TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> * __thiscall
`Metasound::Frontend::FGraphLinter::IsReachableDownstream'::__l2::<lambda_1>::operator()
          (void *this,
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *__return_storage_ptr__,
          INodeController *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  undefined8 *puVar6;
  bool *pbVar7;
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *pTVar8;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *pTVar9;
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *pTVar10;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *pTVar11;
  undefined1 local_res8 [16];
  TSharedRef<Metasound::Frontend::IInputController_const_,1> *local_68;
  int local_60;
  TSharedRef<Metasound::Frontend::IOutputController_const_,1> *local_58;
  int local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [16];
  
  *(undefined8 *)&__return_storage_ptr__->Elements = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x8 = 0;
  *(undefined8 *)&(__return_storage_ptr__->Elements).field_0x20 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x28 = 0;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x2c = 0x80;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x30 = 0xffffffff;
  *(undefined4 *)&(__return_storage_ptr__->Elements).field_0x34 = 0;
  (__return_storage_ptr__->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
  __return_storage_ptr__->HashSize = 0;
  piVar5 = (int *)(**(code **)(*(longlong *)param_1 + 0x158))(param_1,local_48);
  piVar1 = *(int **)this;
  if (((piVar1[3] == piVar5[3] && piVar1[2] == piVar5[2]) && piVar1[1] == piVar5[1]) &&
      *piVar5 == *piVar1) {
    **(undefined1 **)((longlong)this + 8) = 1;
  }
  if (**(char **)((longlong)this + 8) == '\0') {
    cVar4 = (**(code **)(*(longlong *)param_1 + 0x18))(param_1);
    if (cVar4 != '\0') {
      (**(code **)(*(longlong *)param_1 + 0x80))(param_1,&local_58);
      iVar3 = local_50;
      pTVar9 = local_58 + local_50;
      pTVar11 = local_58;
      while( true ) {
        if (local_50 != iVar3) {
          `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if (pTVar11 == pTVar9) break;
        (**(code **)(*(longlong *)pTVar11->Object + 0x78))(pTVar11->Object,&local_68);
        iVar2 = local_60;
        pTVar10 = local_68 + local_60;
        pTVar8 = local_68;
        while( true ) {
          if (local_60 != iVar2) {
            `TCheckedPointerIterator<TSharedRef<Metasound::Frontend::IInputController_const_,1>,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (pTVar8 == pTVar10) break;
          puVar6 = (undefined8 *)
                   (**(code **)(*(longlong *)pTVar8->Object + 0x70))(pTVar8->Object,local_48);
          pbVar7 = (bool *)(**(code **)(*(longlong *)*puVar6 + 0x158))((longlong *)*puVar6,local_38)
          ;
          TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid>
                    (__return_storage_ptr__,(FGuid *)(local_res8 + 8),pbVar7);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_40);
          pTVar8 = pTVar8 + 1;
        }
        DestructItems<TSharedRef<Metasound::Frontend::IInputController_const_,1>,int>
                  (local_68,local_60);
        if (local_68 != (TSharedRef<Metasound::Frontend::IInputController_const_,1> *)0x0) {
          FMemory::Free(local_68);
        }
        pTVar11 = pTVar11 + 1;
      }
      DestructItems<TSharedRef<Metasound::Frontend::IOutputController_const_,1>,int>
                (local_58,local_50);
      if (local_58 != (TSharedRef<Metasound::Frontend::IOutputController_const_,1> *)0x0) {
        FMemory::Free(local_58);
      }
    }
  }
  return __return_storage_ptr__;
}

// DepthFirstTraversal @ 14ae2fac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Metasound::Frontend::FGraphLinter::DepthFirstTraversal
          (INodeController *param_1,
          TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
          *param_2)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  int *_Src;
  uint uVar8;
  bool bVar9;
  undefined1 auStackY_1c8 [32];
  ForAnyElementType local_188;
  int local_180;
  int local_17c;
  ulong64 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
  *local_150;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_148;
  FSparseArrayAllocationInfo local_138;
  undefined8 local_128;
  TReferenceControllerBase<1> *local_120;
  longlong *local_118;
  TReferenceControllerBase<1> *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 local_e8 [32];
  ForElementType<unsigned_int> local_c8;
  int local_c0;
  uint local_bc;
  int local_b8;
  int local_b4;
  undefined1 local_b0 [8];
  ForElementType<FSetElementId> local_a8;
  int local_a0;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_150 = param_2;
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,&local_108);
  local_180 = 1;
  local_188.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,1,0,&local_188,1,&local_17c);
  *(undefined4 *)local_188.Data = local_108;
  *(undefined4 *)(local_188.Data + 4) = uStack_104;
  *(undefined4 *)(local_188.Data + 8) = uStack_100;
  *(undefined4 *)(local_188.Data + 0xc) = uStack_fc;
  local_e8._0_8_ = (FScriptContainerElement *)0x0;
  local_e8._8_8_ = 0;
  local_c8 = (ForElementType<unsigned_int>)0x0;
  local_c0 = 0;
  local_bc = 0x80;
  local_b8 = -1;
  local_b4 = 0;
  local_a8 = (ForElementType<FSetElementId>)0x0;
  local_a0 = 0;
  (**(code **)(*(longlong *)param_1 + 0x170))(param_1);
joined_r0x00014ae2fb95:
  do {
    if (local_180 < 1) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_110)
      ;
      local_a0 = 0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_a8);
      }
      bVar9 = local_e8._12_4_ != 0;
      local_e8._8_8_ = (ulonglong)(uint)local_e8._12_4_ << 0x20;
      if (bVar9) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,4,0,(ForAnyElementType *)local_e8,0,(int *)(local_e8 + 0xc));
      }
      local_b4 = 0;
      local_c0 = 0;
      local_b8 = -1;
      if (0x80 < local_bc) {
        local_bc = 0x80;
        TBitArray<FDefaultBitArrayAllocator>::Realloc
                  ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),0);
      }
      if (local_c8 != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_c8);
      }
      if ((FScriptContainerElement *)local_e8._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_e8._0_8_);
      }
      if (local_188.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data);
      }
      return;
    }
    _Src = (int *)0x0;
    pFVar5 = local_188.Data + (longlong)(local_180 + -1) * 0x10;
    local_168 = *(undefined8 *)pFVar5;
    uStack_160 = *(undefined8 *)(pFVar5 + 8);
    iVar1 = (local_180 - (local_180 + -1)) + -1;
    if (iVar1 != 0) {
      memmove(pFVar5,pFVar5 + 0x10,(longlong)iVar1 << 4);
    }
    local_180 = local_180 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,&local_188,local_180,&local_17c);
    uVar3 = CityHash64((char *)&local_168,0x10);
    if (local_e8._8_4_ != local_b4) {
      FVar7 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = local_a8;
      }
      iVar1 = *(int *)((longlong)FVar7 + ((ulonglong)(local_a0 - 1) & uVar3 & 0xffffffff) * 4);
      while (iVar1 != -1) {
        lVar4 = (longlong)iVar1;
        if (((uStack_160._4_4_ == *(int *)(local_e8._0_8_ + lVar4 * 0x18 + 0xc) &&
             (int)uStack_160 == *(int *)(local_e8._0_8_ + lVar4 * 0x18 + 8)) &&
            local_168._4_4_ == *(int *)(local_e8._0_8_ + lVar4 * 0x18 + 4)) &&
            (int)local_168 == *(int *)(local_e8._0_8_ + lVar4 * 0x18)) goto joined_r0x00014ae2fb95;
        iVar1 = *(int *)(local_e8._0_8_ + lVar4 * 0x18 + 0x10);
      }
    }
    local_f8 = (int)local_168;
    iStack_f4 = local_168._4_4_;
    iStack_f0 = (int)uStack_160;
    iStack_ec = uStack_160._4_4_;
    (**(code **)(*local_118 + 0x68))(local_118,&local_128,&local_f8);
    (**(code **)param_2)(&local_98,*(undefined8 *)&param_2->field_0x8,local_128);
    TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Array(&local_98,&local_148);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
    lVar4 = (longlong)local_148.ArrayNum;
    if (local_148.ArrayNum != 0) {
      iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,4,local_148.ArrayNum,&local_188,&local_180,&local_17c);
      memcpy(local_188.Data + (longlong)iVar1 * 0x10,local_148.AllocatorInstance.Data,lVar4 << 4);
    }
    if (local_b4 == 0) {
      iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x18,4,1,(ForAnyElementType *)local_e8,(int *)(local_e8 + 8),
                         (int *)(local_e8 + 0xc));
      TBitArray<FDefaultBitArrayAllocator>::Add
                ((TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10),false);
      iVar1 = local_b8;
    }
    else {
      local_b4 = local_b4 + -1;
      iVar1 = *(int *)(local_e8._0_8_ + (longlong)local_b8 * 0x18 + 4);
      iVar2 = local_b8;
      if (local_b4 != 0) {
        *(undefined4 *)(local_e8._0_8_ + (longlong)iVar1 * 0x18) = 0xffffffff;
      }
    }
    local_b8 = iVar1;
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::AllocateIndex((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_e8,&local_138,iVar2);
    iVar1 = local_138.Index;
    if (local_138.Pointer != (int *)0x0) {
      *(undefined8 *)local_138.Pointer = local_168;
      *(undefined8 *)((longlong)local_138.Pointer + 8) = uStack_160;
      *(int *)((longlong)local_138.Pointer + 0x10) = -1;
      _Src = local_138.Pointer;
    }
    local_178 = CityHash64((char *)_Src,0x10);
    if ((local_e8._8_4_ - local_b4 != 1) && (local_e8._8_4_ != local_b4)) {
      FVar7 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = local_a8;
      }
      iVar2 = *(int *)((longlong)FVar7 + ((ulonglong)(local_a0 - 1) & local_178 & 0xffffffff) * 4);
      if (iVar2 != -1) {
        do {
          pFVar5 = (FScriptContainerElement *)(local_e8._0_8_ + (longlong)iVar2 * 0x18);
          if (((_Src[3] == *(int *)(pFVar5 + 0xc) &&
               _Src[2] == *(int *)(local_e8._0_8_ + (longlong)iVar2 * 0x18 + 8)) &&
              _Src[1] == *(int *)(pFVar5 + 4)) && *_Src == *(int *)pFVar5) {
            if (iVar2 != -1) {
              memmove((FScriptContainerElement *)(local_e8._0_8_ + (longlong)iVar2 * 0x18),_Src,0x10
                     );
              TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::RemoveAtUninitialized
                        ((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_e8,iVar1,1);
              goto LAB_14ae2ff69;
            }
            break;
          }
          iVar2 = *(int *)(pFVar5 + 0x10);
        } while (iVar2 != -1);
      }
    }
    uVar8 = local_e8._8_4_ - local_b4;
    if (uVar8 < 4) {
      iVar2 = 1;
    }
    else {
      uVar6 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
      lVar4 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      local_158 = (undefined4)lVar4;
      iVar2 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar2 <= local_a0)) {
      uVar8 = local_a0 - 1U & (uint)local_178;
      _Src[5] = uVar8;
      FVar7 = (ForElementType<FSetElementId>)local_b0;
      if (local_a8 != (ForElementType<FSetElementId>)0x0) {
        FVar7 = local_a8;
      }
      uVar6 = (longlong)local_a0 - 1U & (longlong)(int)uVar8;
      _Src[4] = *(int *)((longlong)FVar7 + uVar6 * 4);
      *(int *)((longlong)FVar7 + uVar6 * 4) = iVar1;
    }
    else {
      local_a0 = iVar2;
      TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Rehash
                ((TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)local_e8);
    }
LAB_14ae2ff69:
    if (local_148.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_120);
    param_2 = local_150;
  } while( true );
}

// DoesConnectionCauseLoop @ 14ae309a0

bool __cdecl
Metasound::Frontend::FGraphLinter::DoesConnectionCauseLoop
          (IInputController *param_1,IOutputController *param_2)

{
  undefined1 uVar1;
  undefined1 local_res8 [32];
  INodeController *local_78;
  TReferenceControllerBase<1> *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined1 **local_50;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_2 + 0x48))(param_2,&local_48);
  (**(code **)(*(longlong *)param_1 + 0x70))(param_1,&local_78);
  (**(code **)(*(longlong *)local_78 + 0x158))(local_78,local_28);
  (**(code **)(*local_48 + 0x158))(local_48,local_38);
  (**(code **)(*(longlong *)param_1 + 0x20))(param_1,local_18);
  local_68 = local_38;
  local_60 = local_res8;
  local_50 = &local_68;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphLinter::DoesConnectionCauseLoop'::__l2::<lambda_1>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,Metasound::Frontend::INodeController_const_&>
             ::Call;
  DepthFirstTraversal(local_78,(TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
                                *)&local_58);
  uVar1 = local_res8[0];
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  return (bool)uVar1;
}

// IsReachableDownstream @ 14ae3f3d0

bool __cdecl
Metasound::Frontend::FGraphLinter::IsReachableDownstream
          (INodeController *param_1,INodeController *param_2)

{
  undefined1 local_res10 [24];
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 **local_20;
  undefined1 local_18 [16];
  
  local_res10[0] = 0;
  (**(code **)(*(longlong *)param_2 + 0x158))(param_2,local_18);
  local_38 = local_18;
  local_30 = local_res10;
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphLinter::IsReachableDownstream'::__l2::<lambda_1>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,Metasound::Frontend::INodeController_const_&>
             ::Call;
  DepthFirstTraversal(param_1,(TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
                               *)&local_28);
  return (bool)local_res10[0];
}

// IsReachableUpstream @ 14ae3f440

bool __cdecl
Metasound::Frontend::FGraphLinter::IsReachableUpstream
          (INodeController *param_1,INodeController *param_2)

{
  undefined1 local_res8 [32];
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 **local_20;
  undefined1 local_18 [16];
  
  local_res8[0] = 0;
  (**(code **)(*(longlong *)param_1 + 0x158))(param_1,local_18);
  local_38 = local_18;
  local_30 = local_res8;
  local_20 = &local_38;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`Metasound::Frontend::FGraphLinter::IsReachableDownstream'::__l2::<lambda_1>,TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>,Metasound::Frontend::INodeController_const_&>
             ::Call;
  DepthFirstTraversal(param_2,(TFunctionRef<TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>___cdecl(Metasound::Frontend::INodeController_const_&)>
                               *)&local_28);
  return (bool)local_res8[0];
}

