// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// Create<FSkeletalMeshObjectGPUSkin> @ 1485e9670

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdateHandle * __thiscall
FSkeletalMeshUpdater::Create<FSkeletalMeshObjectGPUSkin>
          (FSkeletalMeshUpdater *this,FSkeletalMeshUpdateHandle *__return_storage_ptr__,
          FSkeletalMeshObjectGPUSkin *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkeletalMeshUpdateHandle *pFVar5;
  
  if (FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Instance ==
      (TBackend<FSkeletalMeshUpdatePacketGPUSkin> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                       ,0x260,L"Skeletal mesh backend instance was not instantiated.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkeletalMeshUpdateHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(uint *)&FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketGPUSkin>::Instance
                    ->field_0x18;
  uVar4 = 0;
  if ((int)uVar1 < (this->Channels).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkeletalMeshUpdateHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  FSkeletalMeshUpdateChannel::Create
            ((FSkeletalMeshUpdateChannel *)
             ((this->Channels).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88),
             __return_storage_ptr__,(FSkeletalMeshObject *)param_1);
  return __return_storage_ptr__;
}

// FSkeletalMeshUpdater @ 148623b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdater * __thiscall
FSkeletalMeshUpdater::FSkeletalMeshUpdater
          (FSkeletalMeshUpdater *this,FSceneInterface *param_1,FGPUSkinCache *param_2)

{
  int *piVar1;
  uint uVar2;
  FBackend *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGlobalList *pFVar7;
  FSkeletalMeshUpdater *pFVar8;
  TMulticastDelegate<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
  *this_00;
  FDelegateHandle FVar9;
  FBackend *pFVar10;
  FBackend *pFVar11;
  <lambda_1> local_res10;
  
  pFVar10 = (FBackend *)0x0;
  this->Scene = param_1;
  (this->DelegateHandle).ID = 0;
  this->GPUSkinCache = param_2;
  pFVar7 = FSkeletalMeshUpdateChannel::FBackend::GetGlobalList();
  (this->Channels).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Channels).ArrayMax;
  (this->Channels).ArrayNum = 0;
  *piVar1 = 0;
  uVar2 = pFVar7->Num;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (0 < (int)uVar2) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x88,8,uVar2,&(this->Channels).AllocatorInstance,0,piVar1);
  }
  pFVar3 = (pFVar7->List).Sentinel.Next;
  pFVar11 = (FBackend *)&pFVar7[-1].Num;
  if (pFVar7 == (FGlobalList *)0x0) {
    pFVar11 = pFVar10;
  }
  while( true ) {
    if (pFVar3 == pFVar11) {
      (this->PushCommandsTask).Pimpl.Reference = (FTaskBase *)0x0;
      this->bSubmitting = false;
      this->bInAsyncPushCommandsRegion = false;
      this_00 = UE::RenderCommandPipe::GetStopRecordingDelegate();
      FVar9 = TMulticastDelegateRegistration<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
              ::AddLambda<_FSkeletalMeshUpdater::FSkeletalMeshUpdater_::__l2::<lambda_1>_>
                        ((TMulticastDelegateRegistration<void___cdecl(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const_&),FDefaultDelegateUserPolicy>
                          *)this_00,&local_res10);
                    /* WARNING: Load size is inaccurate */
      (this->DelegateHandle).ID = *FVar9.ID;
      return this;
    }
    iVar6 = (int)pFVar10;
    pFVar10 = (FBackend *)(ulonglong)(iVar6 + 1);
    if ((iVar6 != pFVar3->GlobalListIndex) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ChannelIndex++ == Backend.GlobalListIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                           ,0xb4,L""), bVar5)) break;
    iVar6 = (this->Channels).ArrayNum;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&(this->Channels).AllocatorInstance,piVar1);
    }
    (this->Channels).ArrayNum = iVar6 + 1;
    FSkeletalMeshUpdateChannel::FSkeletalMeshUpdateChannel
              ((FSkeletalMeshUpdateChannel *)
               ((this->Channels).AllocatorInstance.Data + (longlong)iVar6 * 0x88),pFVar3);
    pFVar3 = (FBackend *)pFVar3->_padding_;
  }
  pcVar4 = (code *)swi(3);
  pFVar8 = (FSkeletalMeshUpdater *)(*pcVar4)();
  return pFVar8;
}

// operator() @ 1486275b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001486276ec) */
/* WARNING: Removing unreachable block (ram,0x0001486276f5) */
/* WARNING: Removing unreachable block (ram,0x000148627700) */
/* WARNING: Removing unreachable block (ram,0x000148627715) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshUpdater::FSkeletalMeshUpdater'::__l2::<lambda_1>::operator()
          (void *this,
          TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          *param_1)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  FSkeletalMeshUpdateChannel *pFVar5;
  bool bVar6;
  int iVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  ulonglong uVar9;
  code **ppcVar10;
  int iVar11;
  int iVar12;
  FSkeletalMeshUpdateChannel *this_02;
  ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
  FVar14;
  undefined1 auStackY_118 [32];
  undefined1 local_e8 [8];
  ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
  local_e0;
  undefined8 local_d8;
  uint local_d0;
  longlong local_c8;
  FSkeletalMeshUpdateChannel *local_c0;
  longlong *local_b8;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
  *pTVar13;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (*(char *)(*(longlong *)this + 0x31) == '\0') {
    uVar1 = *(uint *)(*(longlong *)this + 0x20);
    local_d8._0_4_ = 0;
    local_d8._4_4_ = 0;
    local_e0.Data =
         (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
          *)0x0;
    local_d8 = 0;
    local_b8 = this;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar1);
    }
    if (0 < (int)uVar1) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>_>
                (0x10,8,uVar1,&local_e0,0,(int *)((longlong)&local_d8 + 4));
    }
    lVar2 = *(longlong *)this;
    local_d0 = *(uint *)(lVar2 + 0x20);
    uVar9 = (ulonglong)(int)local_d0;
    this_02 = *(FSkeletalMeshUpdateChannel **)(lVar2 + 0x18);
    local_c0 = this_02 + uVar9;
    FVar14.Data = local_e0.Data;
    iVar11 = local_d8._4_4_;
    iVar7 = (int)local_d8;
    while( true ) {
      pFVar5 = local_c0;
      if (*(int *)(lVar2 + 0x20) != (int)uVar9) {
        local_e8[0] = 0;
        `TCheckedPointerIterator<FSkeletalMeshUpdateChannel,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_e8);
      }
      if (this_02 == pFVar5) break;
      FSkeletalMeshUpdateChannel::PopFromQueue(this_02);
      lVar4 = local_c8;
      if (local_c8 != 0) {
        if (iVar7 == iVar11) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>_>
                            (0x810,&local_e0,(int *)((longlong)&local_d8 + 4));
          FVar14.Data = local_e0.Data;
          iVar11 = local_d8._4_4_;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar7 + 1);
        *(FSkeletalMeshUpdateChannel **)(FVar14.Data + iVar7) = this_02;
        *(longlong *)&FVar14.Data[iVar7].field_0x8 = lVar4;
        local_c8 = 0;
        iVar7 = iVar7 + 1;
      }
      this_02 = this_02 + 1;
      uVar9 = (ulonglong)local_d0;
    }
    pcVar3 = (code *)*local_b8;
    pTVar13 = FVar14.Data;
    iVar12 = iVar7;
    if (*(int *)(pcVar3 + 0x20) != 0) {
      pTVar13 = (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
                 *)0x0;
      iVar12 = 0;
      local_e0.Data =
           (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
            *)0x0;
      local_d8 = 0;
      local_a8[0] = (code *)0x0;
      local_80 = FMemory::Malloc(0x20,8);
      local_80[1] = pcVar3;
      local_80[2] = (code *)FVar14.Data;
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<``FSkeletalMeshUpdater::FSkeletalMeshUpdater'::`2'::<lambda_1>::operator()'::`16'::<lambda_1>,1,1>
                           ::_vftable_;
      *(int *)(local_80 + 3) = iVar7;
      *(int *)((longlong)local_80 + 0x1c) = iVar11;
      if (local_80 != (code **)&DAT_fffffffffffffff8) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<``FSkeletalMeshUpdater::FSkeletalMeshUpdater'::__l2::<lambda_1>::operator()'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<__FSkeletalMeshUpdater::FSkeletalMeshUpdater_::__l2::<lambda_1>::operator()_::__l16::TSTR_FSkeletalMeshUpdater_PopFromQueues336>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78[0] = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_68[0] = local_98[0];
        local_68[1] = local_98[1];
        local_68[2] = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar8 = (FRenderCommandTag *)
                 TRenderCommandTag<``FSkeletalMeshUpdater::FSkeletalMeshUpdater'::__l2::<lambda_1>::operator()'::__l16::TSTR_FSkeletalMeshUpdater_PopFromQueues336>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar8);
        uVar9 = (ulonglong)local_48;
        if ((2 < uVar9) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if (local_78[0] != (code *)0x0) {
            ppcVar10 = local_78 + 2;
            if (local_50 != (code **)0x0) {
              ppcVar10 = local_50;
            }
            (**(code **)(*ppcVar10 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar9])();
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar10 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar10 = local_80;
        }
        (**(code **)(*ppcVar10 + 0x10))();
      }
      DestructItems<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>,int>
                ((TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
                  *)0x0,0);
    }
    DestructItems<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>,int>
              (pTVar13,iVar12);
    if (pTVar13 !=
        (TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
         *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar13);
    }
  }
  return;
}

// operator() @ 148627920

/* WARNING: Removing unreachable block (ram,0x000148627a21) */
/* WARNING: Removing unreachable block (ram,0x000148627a2a) */
/* WARNING: Removing unreachable block (ram,0x000148627a32) */
/* WARNING: Removing unreachable block (ram,0x000148627a47) */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
  *pFVar4;
  longlong lVar5;
  TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
  *pTVar6;
  longlong lVar7;
  int iVar8;
  FSkeletalMeshUpdateChannel *this_00;
  FSkeletalMeshUpdateChannel *pFVar9;
  undefined1 local_res8 [8];
  longlong local_res10;
  FTaskTagScope local_38;
  
  FTaskTagScope::FTaskTagScope(&local_38,EParallelGameThread);
  pFVar4 = *(ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
             **)((longlong)this + 8);
  uVar2 = *(uint *)(*(longlong *)this + 0x20);
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>_>
              (0x10,8,uVar2,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
  }
  lVar5 = *(longlong *)this;
  iVar3 = *(int *)(lVar5 + 0x20);
  this_00 = *(FSkeletalMeshUpdateChannel **)(lVar5 + 0x18);
  pFVar9 = this_00 + iVar3;
  while( true ) {
    if (*(int *)(lVar5 + 0x20) != iVar3) {
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (this_00 == pFVar9) break;
    FSkeletalMeshUpdateChannel::PopFromQueue(this_00);
    lVar7 = local_res10;
    if (local_res10 != 0) {
      pFVar4 = *(ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>
                 **)((longlong)this + 8);
      piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
      iVar8 = *(int *)&pFVar4[1].Data;
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>_>_>
                          (0x810,pFVar4,piVar1);
      }
      *(int *)&pFVar4[1].Data = iVar8 + 1;
      pTVar6 = pFVar4->Data;
      *(FSkeletalMeshUpdateChannel **)(pTVar6 + iVar8) = this_00;
      *(longlong *)&pTVar6[iVar8].field_0x8 = lVar7;
      local_res10 = 0;
    }
    this_00 = this_00 + 1;
  }
  FTaskTagScope::~FTaskTagScope(&local_38);
  return;
}

// operator() @ 148628220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall `FSkeletalMeshUpdater::Submit'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  FRHICommandListScopedFence *this_00;
  ERHIPipeline EVar2;
  uint uVar3;
  int iVar4;
  ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
  *pFVar5;
  FRHICommandListBase *pFVar6;
  longlong lVar7;
  FGPUSkinCache *pFVar8;
  FSceneInterface *pFVar9;
  undefined8 uVar10;
  code *pcVar11;
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> TVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> local_res10;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  
  pFVar5 = *(ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
             **)((longlong)this + 8);
  uVar3 = *(uint *)(*(longlong *)this + 0x20);
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
  }
  piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
  if (*piVar1 < (int)uVar3) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>_>
              (8,8,uVar3,pFVar5,*(int *)&pFVar5[1].Data,piVar1);
  }
  if (*(char *)((longlong)&pFVar5[7].Data + 1) != '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)pFVar5[6].Data,Graphics);
  }
  this_00 = (FRHICommandListScopedFence *)(pFVar5 + 2);
  pFVar6 = (FRHICommandListBase *)pFVar5[6].Data;
  if (*(char *)&pFVar5[5].Data != '\0') {
    FRHICommandListScopedFence::~FRHICommandListScopedFence(this_00);
  }
  this_00->RHICmdList = pFVar6;
  pFVar5[3].Data =
       (TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *)
       (pFVar6->PersistentState).CurrentFenceScope;
  *(undefined1 *)&pFVar5[4].Data = 0;
  (pFVar6->PersistentState).CurrentFenceScope = this_00;
  *(undefined1 *)&pFVar5[5].Data = 1;
  lVar7 = *(longlong *)this;
  iVar4 = *(int *)(lVar7 + 0x20);
  lVar15 = *(longlong *)(lVar7 + 0x18);
  lVar16 = (longlong)iVar4 * 0x88 + lVar15;
  do {
    if (*(int *)(lVar7 + 0x20) != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (lVar15 == lVar16) {
      FSkeletalMeshUpdater::FTaskData::ProcessForeground(*(FTaskData **)((longlong)this + 8));
      return;
    }
    if (*(longlong *)(lVar15 + 0x78) == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Backend",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                          ,0x28d,L"Backend was released but the channel is still being used.");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    (**(code **)(**(longlong **)(lVar15 + 0x78) + 8))(*(longlong **)(lVar15 + 0x78),&local_res10);
    TVar12.Ptr = local_res10.Ptr;
    local_48 = *(undefined4 *)(lVar15 + 0x38);
    local_44 = *(undefined4 *)(lVar15 + 0x3c);
    local_40 = *(undefined4 *)(lVar15 + 0x40);
    local_3c = 1;
    EVar2 = *(ERHIPipeline *)(*(longlong *)((longlong)this + 8) + 0x38);
    pFVar8 = (FGPUSkinCache *)(*(undefined8 **)this)[1];
    pFVar9 = (FSceneInterface *)**(undefined8 **)this;
    (local_res10.Ptr)->GPUSkinCache = pFVar8;
    (local_res10.Ptr)->GPUSkinCachePipeline = EVar2;
    (local_res10.Ptr)->Scene = pFVar9;
    if ((pFVar8 == (FGPUSkinCache *)0x0) || (GEnableGPUSkinCache == 0)) {
LAB_14862839e:
      bVar13 = false;
    }
    else {
      bVar13 = FGPUSkinCache::IsGPUSkinCacheRayTracingSupported();
      if (!bVar13) goto LAB_14862839e;
      bVar13 = true;
    }
    (TVar12.Ptr)->bSkinCacheForRayTracingSupported = bVar13;
    (**(code **)((TVar12.Ptr)->_padding_ + 8))(TVar12.Ptr,&local_48);
    TVar12.Ptr = local_res10.Ptr;
    uVar10 = *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0x30);
    if (*(longlong *)(lVar15 + 0x78) == 0) {
      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Backend",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                          ,0x293,L"Backend was released but the channel is still being used.");
      if (bVar13) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    (**(code **)(**(longlong **)(lVar15 + 0x78) + 0x10))
              (*(longlong **)(lVar15 + 0x78),uVar10,lVar15,TVar12.Ptr);
    if ((local_res10.Ptr)->bInvalidatePathTracedOutput != false) {
      (**(code **)((local_res10.Ptr)->Scene->_padding_ + 0x240))((local_res10.Ptr)->Scene,1);
    }
    pFVar5 = *(ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
               **)((longlong)this + 8);
    piVar1 = (int *)((longlong)&pFVar5[1].Data + 4);
    iVar14 = *(int *)&pFVar5[1].Data;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>_>
                         (0x808,pFVar5,piVar1);
    }
    *(int *)&pFVar5[1].Data = iVar14 + 1;
    lVar15 = lVar15 + 0x88;
    pFVar5->Data[iVar14].Ptr = local_res10.Ptr;
    local_res10.Ptr = (FSkeletalMeshUpdatePacket *)0x0;
  } while( true );
}

// operator() @ 1486298e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandList *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 local_res8 [8];
  
  if (*(FTaskBase **)((longlong)this + 0x10) != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0x10));
  }
  plVar1 = *(longlong **)((longlong)this + 8);
  lVar2 = plVar1[1];
  puVar3 = (undefined8 *)*plVar1;
  puVar4 = puVar3 + (longlong)(int)lVar2 * 2;
  while( true ) {
    if ((int)plVar1[1] != (int)lVar2) {
      `TCheckedPointerIterator<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar3 == puVar4) break;
    FSkeletalMeshUpdateChannel::PushToStream
              ((FSkeletalMeshUpdateChannel *)*puVar3,
               (TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>
                *)(puVar3 + 1));
    puVar3 = puVar3 + 2;
  }
  puVar3 = *(undefined8 **)((longlong)this + 8);
  if (puVar3 != (undefined8 *)0x0) {
    DestructItems<TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>,int>
              ((TTuple<FSkeletalMeshUpdateChannel_*,TUniquePtr<FSkeletalMeshUpdateChannel::FOpQueue,TDefaultDelete<FSkeletalMeshUpdateChannel::FOpQueue>_>_>
                *)*puVar3,*(int *)(puVar3 + 1));
    if ((void *)*puVar3 != (void *)0x0) {
      TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free((void *)*puVar3);
    }
    ::operator_delete(puVar3,0x10);
  }
  return;
}

// operator() @ 148629990

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall `FSkeletalMeshUpdater::Submit'::__l2::<lambda_2>::operator()(void *this)

{
  int *piVar1;
  undefined8 *puVar2;
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *pTVar3;
  int iVar4;
  longlong *plVar5;
  ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
  *pFVar6;
  longlong lVar7;
  TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_> *pTVar8;
  undefined8 *puVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  
  plVar5 = *(longlong **)((longlong)this + 8);
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessUpload(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId477,"FSkeletalMeshUpdater::ProcessUpload",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x1dd);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::ProcessUpload(void)___ptr64'::
               __l2::__CpuProfilerEventSpecId477);
  }
  puVar9 = (undefined8 *)*plVar5;
  lVar7 = plVar5[1];
  puVar2 = puVar9 + (int)lVar7;
  while( true ) {
    if ((int)plVar5[1] != (int)lVar7) {
      `TCheckedPointerIterator<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (puVar9 == puVar2) break;
    (**(code **)(*(longlong *)*puVar9 + 0x28))((longlong *)*puVar9,plVar5[6]);
    puVar9 = puVar9 + 1;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar6 = *(ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>
             **)((longlong)this + 8);
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::End(void)___ptr64'::__l2::
                __CpuProfilerEventSpecId428,"Cleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x1ac);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FSkeletalMeshUpdater::FTaskData::End(void)___ptr64'::__l2::
               __CpuProfilerEventSpecId428);
  }
  if (*(char *)&pFVar6[5].Data != '\0') {
    FRHICommandListScopedFence::~FRHICommandListScopedFence
              ((FRHICommandListScopedFence *)(pFVar6 + 2));
    *(undefined1 *)&pFVar6[5].Data = 0;
  }
  if (*(char *)((longlong)&pFVar6[7].Data + 1) != '\0') {
    FRHICommandListBase::FinishRecording((FRHICommandListBase *)pFVar6[6].Data);
  }
  pTVar8 = pFVar6->Data;
  iVar4 = *(int *)&pFVar6[1].Data;
  pTVar3 = pTVar8 + iVar4;
  while( true ) {
    if (*(int *)&pFVar6[1].Data != iVar4) {
      `TCheckedPointerIterator<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pTVar8 == pTVar3) break;
    (**(code **)(pTVar8->Ptr->_padding_ + 0x30))();
    pTVar8 = pTVar8 + 1;
  }
  DestructItems<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,int>
            (pFVar6->Data,*(int *)&pFVar6[1].Data);
  piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
  *(undefined4 *)&pFVar6[1].Data = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>_>_>
              (8,8,0,pFVar6,0,piVar1);
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  *(undefined1 *)(*(longlong *)this + 0x30) = 0;
  return;
}

// AddPushCommandsTask @ 14862d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FTaskHandle __thiscall
FSkeletalMeshUpdater::AddPushCommandsTask(FSkeletalMeshUpdater *this,FTaskHandle *param_1)

{
  FTaskHandle *pFVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  FTaskHandle FVar8;
  FTaskBase *pFVar9;
  undefined8 *puVar10;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar11;
  FTaskBase *pFVar12;
  code **ppcVar13;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *pTVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *in_R8;
  FTaskBase *pFVar17;
  undefined1 auStackY_118 [32];
  FTaskHandle local_e8;
  longlong local_e0;
  TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> local_d8;
  longlong local_c8 [2];
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if ((this->bInAsyncPushCommandsRegion == false) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("bInAsyncPushCommandsRegion",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                         ,0x167,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    FVar8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar6)();
    return (FTaskHandle)FVar8.Pimpl.Reference;
  }
  pFVar9 = ::operator_new(0x10);
  pFVar12 = (FTaskBase *)0x0;
  pFVar17 = pFVar12;
  if (pFVar9 != (FTaskBase *)0x0) {
    pFVar9->_padding_ = 0;
    pFVar9->_padding_ = 0;
    pFVar17 = pFVar9;
  }
  local_e8.Pimpl.Reference =
       (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(this->PushCommandsTask).Pimpl.Reference;
  pFVar1 = &this->PushCommandsTask;
  if (local_e8.Pimpl.Reference != (FTaskBase *)0x0) {
    LOCK();
    ((FTaskBase *)local_e8.Pimpl.Reference)->RefCount =
         (atomic<unsigned_int>)((int)((FTaskBase *)local_e8.Pimpl.Reference)->RefCount + 1);
    UNLOCK();
  }
  local_e0 = *in_R8;
  if (local_e0 != 0) {
    LOCK();
    *(int *)(local_e0 + 0x30) = *(int *)(local_e0 + 0x30) + 1;
    UNLOCK();
  }
  local_d8.DataPtr = &local_e8;
  lVar16 = 2;
  local_d8.ArrayNum = 2;
  pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
           ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                       *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar9 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,2,true);
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FSkeletalMeshUpdater::AddPushCommandsTask'::`2'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar9,
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp(365)"
               ,Default,Inline,None);
    pFVar9[1]._padding_ = (longlong)this;
    pFVar9[1]._padding_ = (longlong)pFVar17;
    pFVar9->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FSkeletalMeshUpdater::AddPushCommandsTask'::`2'::<lambda_1>_>::_vftable_;
    pFVar12 = pFVar9;
  }
  UE::Tasks::Private::FTaskBase::
  AddPrerequisites<TArrayView<UE::Tasks::Private::FTaskHandle_const_,int>,0>(pFVar12,&local_d8,true)
  ;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar12,0x100);
  if (pFVar1 == (FTaskHandle *)local_c8) {
    if (pFVar12 == (FTaskBase *)0x0) goto LAB_14862da0e;
    LOCK();
    paVar2 = &pFVar12->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_14862da0e;
    puVar10 = (undefined8 *)pFVar12->_padding_;
  }
  else {
    pFVar9 = (pFVar1->Pimpl).Reference;
    (pFVar1->Pimpl).Reference = pFVar12;
    if (pFVar9 == (FTaskBase *)0x0) goto LAB_14862da0e;
    LOCK();
    paVar2 = &pFVar9->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_14862da0e;
    puVar10 = (undefined8 *)pFVar9->_padding_;
    pFVar12 = pFVar9;
  }
  (*(code *)*puVar10)(pFVar12,1);
LAB_14862da0e:
  pTVar14 = &local_d8;
  do {
    puVar10 = *(undefined8 **)&pTVar14[-1].ArrayNum;
    pTVar14 = (TArrayView<UE::Tasks::Private::FTaskHandle_const_,int> *)&pTVar14[-1].ArrayNum;
    lVar16 = lVar16 + -1;
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(puVar10 + 6);
      iVar5 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
  } while (lVar16 != 0);
  pFVar12 = (pFVar1->Pimpl).Reference;
  if (pFVar12 != (FTaskBase *)0x0) {
    LOCK();
    pFVar12->RefCount = (atomic<unsigned_int>)((int)pFVar12->RefCount + 1);
    UNLOCK();
  }
  local_b8[0] = (code *)0x0;
  local_90 = FMemory::Malloc(0x20,8);
  local_90[1] = (code *)this;
  local_90[2] = (code *)pFVar17;
  *local_90 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<`FSkeletalMeshUpdater::AddPushCommandsTask'::`2'::<lambda_2>,1,1>
                       ::_vftable_;
  local_90[3] = (code *)pFVar12;
  if (local_90 != (code **)&DAT_fffffffffffffff8) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkeletalMeshUpdater::AddPushCommandsTask_::__l2::TSTR_FSkeletalMeshUpdater_PopFromQueues380>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_88._0_8_ = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_88._16_8_ = local_a8[0];
    local_88._24_8_ = local_a8[1];
    local_88._32_8_ = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar11 = (FRenderCommandTag *)
              TRenderCommandTag<`FSkeletalMeshUpdater::AddPushCommandsTask'::__l2::TSTR_FSkeletalMeshUpdater_PopFromQueues380>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar11);
    uVar15 = (ulonglong)local_58;
    if ((2 < uVar15) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      FVar8.Pimpl.Reference = (TRefCountPtr<UE::Tasks::Private::FTaskBase>)(*pcVar6)();
      return (FTaskHandle)FVar8.Pimpl.Reference;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_88._0_8_ != (code *)0x0) {
        ppcVar13 = (code **)(local_88 + 0x10);
        if (local_60 != (code **)0x0) {
          ppcVar13 = local_60;
        }
        (**(code **)(*ppcVar13 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar15])(local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar13 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar13 = local_90;
    }
    (**(code **)(*ppcVar13 + 0x10))();
  }
  (param_1->Pimpl).Reference = (FTaskBase *)0x0;
  pFVar12 = (pFVar1->Pimpl).Reference;
  (param_1->Pimpl).Reference = pFVar12;
  if (pFVar12 != (FTaskBase *)0x0) {
    LOCK();
    pFVar12->RefCount = (atomic<unsigned_int>)((int)pFVar12->RefCount + 1);
    UNLOCK();
  }
  return (FTaskHandle)(TRefCountPtr<UE::Tasks::Private::FTaskBase>)param_1;
}

// IsEnabled @ 148659950

bool __cdecl FSkeletalMeshUpdater::IsEnabled(void)

{
  return GUseSkeletalMeshUpdater;
}

// Shutdown @ 1486684e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FSkeletalMeshUpdater::Shutdown(FSkeletalMeshUpdater *this)

{
  int iVar1;
  ulong64 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  bool bVar7;
  uint uVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *this_00;
  ulong64 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  ulonglong uVar14;
  undefined1 local_res8 [16];
  FDestructionSentinel local_48;
  
  this_00 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
            UE::RenderCommandPipe::GetStopRecordingDelegate();
  uVar2 = (this->DelegateHandle).ID;
  uVar11 = 0;
  if (uVar2 != 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this_00,
               (FWriteAccessScope *)&local_48);
    uVar14 = uVar11;
    if (0 < (this_00->InvocationList).ArrayNum) {
      do {
        uVar10 = (uint)uVar11;
        uVar8 = 0;
        if ((int)uVar10 < (this_00->InvocationList).ArrayNum) {
          uVar8 = ~uVar10 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar13 = (this_00->InvocationList).AllocatorInstance.Data + uVar14;
        if (((*(int *)&pFVar13[8].field_0x0 != 0) &&
            (*(longlong **)&pFVar13->field_0x0 != (longlong *)0x0)) &&
           (puVar9 = (ulong64 *)(**(code **)(**(longlong **)&pFVar13->field_0x0 + 0x40))(),
           *puVar9 == uVar2)) {
          if ((*(int *)&pFVar13[8].field_0x0 != 0) &&
             (*(undefined8 **)&pFVar13->field_0x0 != (undefined8 *)0x0)) {
            (**(code **)**(undefined8 **)&pFVar13->field_0x0)();
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                      ((ForAnyElementType *)pFVar13,0,0,0x10);
            *(undefined4 *)&pFVar13[8].field_0x0 = 0;
          }
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList(this_00,false);
          break;
        }
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar14 = uVar14 + 0x10;
      } while ((int)(uVar10 + 1) < (this_00->InvocationList).ArrayNum);
    }
    if (local_48.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
    }
  }
  iVar1 = (this->Channels).ArrayNum;
  pFVar13 = (this->Channels).AllocatorInstance.Data;
  pFVar12 = pFVar13 + (longlong)iVar1 * 0x88;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar13 == pFVar12) break;
    puVar3 = *(undefined8 **)(pFVar13 + 0x20);
    *(undefined8 *)(pFVar13 + 0x20) = 0;
    if (puVar3 != (undefined8 *)0x0) {
      if (puVar3[3] != 0) {
        puVar6 = (undefined8 *)*puVar3;
        while (puVar6 != (undefined8 *)0x0) {
          puVar4 = (undefined8 *)*puVar6;
          ::operator_delete(puVar6,0x18);
          puVar6 = puVar4;
        }
      }
      ::operator_delete(puVar3,0x30);
    }
    pFVar13 = pFVar13 + 0x88;
  }
  return;
}

// Submit @ 148668b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FSubmitTasks * __thiscall
FSkeletalMeshUpdater::Submit
          (FSkeletalMeshUpdater *this,FSubmitTasks *__return_storage_ptr__,FRDGBuilder *param_1,
          ERHIPipeline param_2)

{
  FRHICommandList **ppFVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  FTaskData *pFVar7;
  bool bVar8;
  FSubmitTasks *pFVar9;
  atomic<unsigned___int64> aVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  ERHIPipeline local_res20 [8];
  undefined1 local_88 [16];
  FTaskData *local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  FSharedReferencer<1> local_50;
  FSubmitTasks local_48;
  
  iVar4 = (this->Channels).ArrayNum;
  pFVar11 = (this->Channels).AllocatorInstance.Data;
  pFVar12 = pFVar11 + (longlong)iVar4 * 0x88;
  local_res20[0] = param_2;
  while( true ) {
    if ((this->Channels).ArrayNum != iVar4) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FSkeletalMeshUpdateChannel,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    if (0 < *(int *)(pFVar11 + 0x44)) {
      if ((this->bSubmitting != false) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bSubmitting",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                             ,0x207,
                             L"Submit was called twice on the same RDG builder. This is not allowed."
                            ), bVar8)) {
        pcVar6 = (code *)swi(3);
        pFVar9 = (FSubmitTasks *)(*pcVar6)();
        return pFVar9;
      }
      this->bSubmitting = true;
      aVar10 = (atomic<unsigned___int64>)
               FRDGAllocator::
               Alloc<FSkeletalMeshUpdater::FTaskData,FRDGBuilder_&,enum_ERHIPipeline_&>
                         ((FRDGAllocator *)&param_1->_padding_,param_1,local_res20);
      local_78 = (FTaskData *)0x0;
      local_70 = 0;
      local_68._0_8_ = this;
      local_68._8_8_ = aVar10;
      FRDGBuilder::
      AddSetupTask<_FSkeletalMeshUpdater::Submit_::__l2::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                (param_1,(<lambda_1> *)local_88,(FPipe *)local_68,
                 (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                 (ETaskPriority)&local_78,false,Execute);
      pFVar7 = local_78;
      DestructItems<UE::Tasks::Private::FTaskHandle,int>((FTaskHandle *)local_78,(int)local_70);
      if (pFVar7 != (FTaskData *)0x0) {
        FMemory::Free(pFVar7);
      }
      local_68._16_8_ = this;
      local_50.ReferenceController = (TReferenceControllerBase<1> *)aVar10;
      FRDGBuilder::
      AddSetupTask<_FSkeletalMeshUpdater::Submit_::__l2::<lambda_2>,UE::Tasks::Private::FTaskHandle_&>
                (param_1,(<lambda_2> *)(local_88 + 8),(FPipe *)(local_68 + 0x10),(FTaskHandle *)0x0,
                 (ETaskPriority)local_88,true,Execute);
      if ((FTaskData *)local_88._8_8_ != (FTaskData *)0x0) {
        LOCK();
        ppFVar1 = (FRHICommandList **)(local_88._8_8_ + 0x30);
        iVar4 = *(int *)ppFVar1;
        *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)((((TArray<TUniquePtr<FSkeletalMeshUpdatePacket,TDefaultDelete<FSkeletalMeshUpdatePacket>_>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
                        *)local_88._8_8_)->AllocatorInstance).Data)->Ptr)(local_88._8_8_,1);
        }
      }
      local_48.Filter.Pimpl.Reference =
           *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)
            &((<unnamed_type_Tasks> *)((longlong)aVar10 + 0x40))->Filter;
      if (local_48.Filter.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        ((FTaskBase *)local_48.Filter.Pimpl.Reference)->RefCount =
             (atomic<unsigned_int>)
             ((int)((FTaskBase *)local_48.Filter.Pimpl.Reference)->RefCount + 1);
        UNLOCK();
      }
      local_48.Inline.Pimpl.Reference =
           *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)((longlong)aVar10 + 0x48);
      if (local_48.Inline.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        ((FTaskBase *)local_48.Inline.Pimpl.Reference)->RefCount =
             (atomic<unsigned_int>)
             ((int)((FTaskBase *)local_48.Inline.Pimpl.Reference)->RefCount + 1);
        UNLOCK();
      }
      local_48.MeshDeformer.Pimpl.Reference =
           *(TRefCountPtr<UE::Tasks::Private::FTaskBase> *)((longlong)aVar10 + 0x50);
      if (local_48.MeshDeformer.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        ((FTaskBase *)local_48.MeshDeformer.Pimpl.Reference)->RefCount =
             (atomic<unsigned_int>)
             ((int)((FTaskBase *)local_48.MeshDeformer.Pimpl.Reference)->RefCount + 1);
        UNLOCK();
      }
      local_48.SkinCache.Pimpl.Reference =
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)
           (TRefCountPtr<UE::Tasks::Private::FTaskBase>)local_88._0_8_;
      pFVar9 = FRDGBlackboard::
               Create<FSkeletalMeshUpdater::FSubmitTasks,FSkeletalMeshUpdater::FSubmitTasks>
                         (&param_1->Blackboard,&local_48);
      (__return_storage_ptr__->Filter).Pimpl.Reference = (FTaskBase *)0x0;
      pFVar5 = (pFVar9->Filter).Pimpl.Reference;
      (__return_storage_ptr__->Filter).Pimpl.Reference = pFVar5;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
        UNLOCK();
      }
      (__return_storage_ptr__->Inline).Pimpl.Reference = (FTaskBase *)0x0;
      pFVar5 = (pFVar9->Inline).Pimpl.Reference;
      (__return_storage_ptr__->Inline).Pimpl.Reference = pFVar5;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
        UNLOCK();
      }
      (__return_storage_ptr__->MeshDeformer).Pimpl.Reference = (FTaskBase *)0x0;
      pFVar5 = (pFVar9->MeshDeformer).Pimpl.Reference;
      (__return_storage_ptr__->MeshDeformer).Pimpl.Reference = pFVar5;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
        UNLOCK();
      }
      (__return_storage_ptr__->SkinCache).Pimpl.Reference = (FTaskBase *)0x0;
      pFVar5 = (pFVar9->SkinCache).Pimpl.Reference;
      (__return_storage_ptr__->SkinCache).Pimpl.Reference = pFVar5;
      if (pFVar5 != (FTaskBase *)0x0) {
        LOCK();
        pFVar5->RefCount = (atomic<unsigned_int>)((int)pFVar5->RefCount + 1);
        UNLOCK();
      }
      if (local_48.SkinCache.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_48.SkinCache.Pimpl.Reference + 0x30);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_48.SkinCache.Pimpl.Reference)
                    (local_48.SkinCache.Pimpl.Reference,1);
        }
      }
      if (local_48.MeshDeformer.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_48.MeshDeformer.Pimpl.Reference + 0x30);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_48.MeshDeformer.Pimpl.Reference)
                    (local_48.MeshDeformer.Pimpl.Reference,1);
        }
      }
      if (local_48.Inline.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_48.Inline.Pimpl.Reference + 0x30);
        iVar4 = *(int *)&paVar2->field_0x0;
        *(int *)&paVar2->field_0x0 = *(int *)&paVar2->field_0x0 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**(undefined8 **)local_48.Inline.Pimpl.Reference)
                    (local_48.Inline.Pimpl.Reference,1);
        }
      }
      if (local_48.Filter.Pimpl.Reference != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = (atomic<unsigned_int> *)((longlong)local_48.Filter.Pimpl.Reference + 0x30);
        aVar3 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (*(code *)**(undefined8 **)local_48.Filter.Pimpl.Reference)
                    (local_48.Filter.Pimpl.Reference,1);
        }
      }
      return __return_storage_ptr__;
    }
    pFVar11 = pFVar11 + 0x88;
  }
  (__return_storage_ptr__->Filter).Pimpl.Reference = (FTaskBase *)0x0;
  (__return_storage_ptr__->Inline).Pimpl.Reference = (FTaskBase *)0x0;
  (__return_storage_ptr__->MeshDeformer).Pimpl.Reference = (FTaskBase *)0x0;
  (__return_storage_ptr__->SkinCache).Pimpl.Reference = (FTaskBase *)0x0;
  return __return_storage_ptr__;
}

// WaitForStage @ 1486740c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FSkeletalMeshUpdater::WaitForStage(FRDGBuilder *param_1,ESkeletalMeshUpdateStage param_2)

{
  int *piVar1;
  int iVar2;
  FStruct FVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  FStruct *pFVar7;
  FStruct *pFVar8;
  FStruct local_38;
  FStruct local_30;
  FStruct local_28;
  FStruct local_20;
  FString local_18;
  
  if (`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
      ::__l2::Index == 0xffffffff) {
    FRDGBlackboard::GetTypeName
              (&local_18,L"FSkeletalMeshUpdater::FSubmitTasks",
               L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
               ,0x189);
    `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
    ::__l2::Index = FRDGBlackboard::AllocateIndex(&local_18);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  uVar5 = `private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
          ::__l2::Index;
  if ((param_1->Blackboard).Blackboard.ArrayNum <=
      (int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
           ::__l2::Index) {
    return;
  }
  if (((int)`private:_static_unsigned_int___cdecl_FRDGBlackboard::GetStructIndex<FSkeletalMeshUpdater::FSubmitTasks>(void)'
            ::__l2::Index < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar7 = (param_1->Blackboard).Blackboard.AllocatorInstance.Data[(int)uVar5];
  if (pFVar7 == (FStruct *)0x0) {
    return;
  }
  pFVar8 = pFVar7 + 1;
  if (pFVar8 == (FStruct *)0x0) {
    return;
  }
  if (param_2 != Filter) {
    if (param_2 == Inline) {
      pFVar8 = pFVar7 + 2;
      if (pFVar7[2] != (FStruct)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pFVar7[2]);
      }
      pFVar7 = &local_28;
      goto LAB_1486741e9;
    }
    if (param_2 == MeshDeformer) {
      pFVar8 = pFVar7 + 3;
      if (pFVar7[3] != (FStruct)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pFVar7[3]);
      }
      pFVar7 = &local_30;
      goto LAB_1486741e9;
    }
    if (param_2 == SkinCache) {
      pFVar8 = pFVar7 + 4;
      if (pFVar7[4] != (FStruct)0x0) {
        UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)pFVar7[4]);
      }
      pFVar7 = &local_38;
      goto LAB_1486741e9;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshUpdater.cpp"
                       ,0x237,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*pFVar8 != (FStruct)0x0) {
    UE::Tasks::Private::FTaskBase::Wait((FTaskBase *)*pFVar8);
  }
  pFVar7 = &local_20;
LAB_1486741e9:
  if (pFVar8 != pFVar7) {
    FVar3 = *pFVar8;
    *pFVar8 = (FStruct)0x0;
    if (FVar3 != (FStruct)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)FVar3 + 0x30);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (*(code *)**(undefined8 **)FVar3)(FVar3,1);
      }
    }
  }
  return;
}

// Create<FSkeletalMeshObjectNanite> @ 14867f580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSkeletalMeshUpdateHandle * __thiscall
FSkeletalMeshUpdater::Create<FSkeletalMeshObjectNanite>
          (FSkeletalMeshUpdater *this,FSkeletalMeshUpdateHandle *__return_storage_ptr__,
          FSkeletalMeshObjectNanite *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FSkeletalMeshUpdateHandle *pFVar5;
  
  if (FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance ==
      (TBackend<FSkeletalMeshUpdatePacketNanite> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\SkeletalMeshUpdater.h"
                       ,0x260,L"Skeletal mesh backend instance was not instantiated.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkeletalMeshUpdateHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  uVar1 = *(uint *)&FSkeletalMeshUpdateChannel::TBackend<FSkeletalMeshUpdatePacketNanite>::Instance
                    ->field_0x18;
  uVar4 = 0;
  if ((int)uVar1 < (this->Channels).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSkeletalMeshUpdateHandle *)(*pcVar2)();
      return pFVar5;
    }
  }
  FSkeletalMeshUpdateChannel::Create
            ((FSkeletalMeshUpdateChannel *)
             ((this->Channels).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x88),
             __return_storage_ptr__,(FSkeletalMeshObject *)param_1);
  return __return_storage_ptr__;
}

