// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNERuntimeORT
// Functions: 12

// FModelInstanceORTDmlRDG @ 14eb058d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FModelInstanceORTDmlRDG * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FModelInstanceORTDmlRDG
          (FModelInstanceORTDmlRDG *this,TSharedRef<UE::NNE::FSharedModelData,1> *param_1,
          FRuntimeConf *param_2,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *param_3)

{
  TSharedPtr<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
  *this_00;
  TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
  *pTVar4;
  FModelInstanceORTDmlRDG *pFVar5;
  FProxy *pFVar6;
  TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *local_38;
  FSharedReferencer<1> FStack_30;
  
  pTVar4 = (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
            *)0x0;
  pTVar1 = &this->Proxy;
  (this->InputTensorShapes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&___7FModelInstanceORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
  (this->InputTensorShapes).ArrayNum = 0;
  (this->InputTensorShapes).ArrayMax = 0;
  (this->InputTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InputTensors).ArrayNum = 0;
  (this->InputTensors).ArrayMax = 0;
  (this->InitialInputSymbolicTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialInputSymbolicTensors).ArrayNum = 0;
  (this->InitialInputSymbolicTensors).ArrayMax = 0;
  (this->InitialOutputSymbolicTensors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InitialOutputSymbolicTensors).ArrayNum = 0;
  (this->InitialOutputSymbolicTensors).ArrayMax = 0;
  pTVar1->Object = (FProxy *)0x0;
  (this->Proxy).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this_00 = ::operator_new(0x148);
  if (this_00 ==
      (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
       *)0x0) {
    local_38 = ___xmm_00000000000000000000000000000010;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    pFVar6 = (FProxy *)&DAT_00000010;
  }
  else {
    pTVar4 = SharedPointerInternals::
             TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
             ::
             TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1><TSharedRef<UE::NNE::FSharedModelData,1>_&,UE::NNERuntimeORT::Private::FRuntimeConf_const_&,TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1>_&>
                       (this_00,param_1,param_2,param_3);
    pFVar6 = (FProxy *)&pTVar4->ObjectStorage;
    if ((pFVar6 == (FProxy *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FModelInstanceORTDmlRDG *)(*pcVar2)();
      return pFVar5;
    }
    local_38 = (TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *)
               pFVar6;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)pTVar4;
    if (pTVar4 != (TIntrusiveReferenceController<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>
                   *)0x0) {
      LOCK();
      *(int *)&pTVar4->_padding_ = (int)pTVar4->_padding_ + 1;
      UNLOCK();
    }
  }
  if (pTVar1 != (TSharedPtr<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1> *)
                &local_38) {
    pTVar1->Object = pFVar6;
    local_38 = (TTypeCompatibleBytes<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy> *)
               0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Proxy).SharedReferenceCount,&FStack_30);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_30.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pTVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_3->SharedReferenceCount).ReferenceController);
  return this;
}

// ~FModelInstanceORTDmlRDG @ 14eb06c90

void __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::~FModelInstanceORTDmlRDG
          (FModelInstanceORTDmlRDG *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FModelInstanceORTDmlRDG_Private_NNERuntimeORT_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Proxy).SharedReferenceCount.ReferenceController);
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InitialOutputSymbolicTensors).AllocatorInstance.Data,
             (this->InitialOutputSymbolicTensors).ArrayNum);
  pFVar1 = (this->InitialOutputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorDesc,int>
            ((FTensorDesc *)(this->InitialInputSymbolicTensors).AllocatorInstance.Data,
             (this->InitialInputSymbolicTensors).ArrayNum);
  pFVar1 = (this->InitialInputSymbolicTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
            ((FTensor *)(this->InputTensors).AllocatorInstance.Data,(this->InputTensors).ArrayNum);
  pFVar1 = (this->InputTensors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data,
             (this->InputTensorShapes).ArrayNum);
  pFVar1 = (this->InputTensorShapes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14eb09fb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong lVar1;
  longlong lVar2;
  FTensorShape *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStackY_b8 [32];
  ForAnyElementType local_68;
  undefined8 local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  iVar6 = (**(code **)(GDynamicRHI->_padding_ + 0x28))();
  if (iVar6 != 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GDynamicRHI->GetInterfaceType() == ERHIInterfaceType::D3D12",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Public\\ID3D12DynamicRHI.h"
                       ,0x53,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar7 = (longlong *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
  pcVar4 = *(code **)(*plVar7 + 0x588);
  lVar1 = *(longlong *)this;
  lVar2 = *(longlong *)((longlong)this + 8);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar6 = *(int *)((longlong)this + 0x18);
  pFVar3 = *(FTensorShape **)((longlong)this + 0x10);
  local_68.Data = (FScriptContainerElement *)0x0;
  local_60 = CONCAT44(local_60._4_4_,iVar6);
  if (iVar6 == 0) {
    local_60 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,iVar6,0,&local_68,iVar6,(int *)((longlong)&local_60 + 4));
    ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>(local_68.Data,pFVar3,iVar6);
  }
  local_58[0] = (code *)0x0;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::`2'::<lambda_1>::operator()'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_30[1] = lVar1;
  local_30[2] = lVar2;
  local_30[3] = 0;
  local_30[3] = (longlong)local_68.Data;
  local_68.Data = (FScriptContainerElement *)0x0;
  *(int *)(local_30 + 4) = (int)local_60;
  *(undefined4 *)((longlong)local_30 + 0x24) = local_60._4_4_;
  if (local_30 + 1 != (longlong *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void,ID3D12CommandQueue_*>
                  ::Call;
  }
  local_60 = 0;
  (*pcVar4)(plVar7,0,local_58,0);
  if (local_58[0] != (code *)0x0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_68.Data,(int)local_60);
  if (local_68.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14eb0a190

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRDGResource *pFVar1;
  FRHIResource *pFVar2;
  FTensor *pFVar3;
  code *pcVar4;
  ForAnyElementType FVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  bool bVar17;
  ForAnyElementType local_88;
  undefined8 local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  undefined8 local_68;
  TReferenceControllerBase<1> *local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  undefined8 local_30;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::EnqueueRDG.AddPass");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1070,"FModelInstanceORTDmlRDG::EnqueueRDG.AddPass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x42e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1070);
  }
  uVar11 = 0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = 0;
  uVar7 = *(uint *)(*(longlong *)((longlong)this + 0x20) + 8);
  if ((int)uVar7 < 1) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar7,&local_78,(int *)&local_70,(int *)((longlong)&local_70 + 4));
  }
  plVar13 = *(longlong **)((longlong)this + 0x20);
  uVar12 = uVar11;
  uVar16 = uVar11;
  if (0 < (int)plVar13[1]) {
    do {
      uVar10 = (uint)uVar11;
      uVar7 = 0;
      if ((int)uVar10 < (int)plVar13[1]) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = *plVar13;
      if ((*(longlong *)(lVar14 + uVar12) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x183,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = *(FRDGResource **)(lVar14 + uVar12);
      FRDGResource::ValidateRHIAccess(pFVar1);
      pFVar2 = pFVar1->ResourceRHI;
      uVar7 = 0;
      if ((int)uVar10 < (int)local_70) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar11 = (ulonglong)(uVar10 + 1);
      *(FRHIResource **)(local_78.Data + uVar16 * 8) = pFVar2;
      plVar13 = *(longlong **)((longlong)this + 0x20);
      uVar12 = uVar12 + 0x10;
      uVar16 = uVar16 + 1;
    } while ((int)(uVar10 + 1) < (int)plVar13[1]);
  }
  uVar12 = 0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  uVar11 = uVar12;
  if (*(longlong *)this == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar11 = local_80 & 0xffffffff;
  }
  uVar7 = *(uint *)(*(longlong *)this + 0x68);
  iVar15 = (int)uVar11;
  if (iVar15 < (int)uVar7) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar7 - iVar15,&local_88,(int *)&local_80,
                       (int *)((longlong)&local_80 + 4));
    memset(local_88.Data + (longlong)iVar8 * 8,0,(longlong)(int)(uVar7 - iVar15) << 3);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar15) {
      uVar10 = iVar15 - uVar7;
      if ((int)(uVar10 | uVar7) < 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar15 = (int)local_80;
      }
      if (uVar10 != 0) {
        iVar8 = (iVar15 - uVar10) - uVar7;
        if (iVar8 != 0) {
          memmove(local_88.Data + (longlong)(int)uVar7 * 8,
                  local_88.Data + (longlong)(int)uVar7 * 8 + (longlong)(int)uVar10 * 8,
                  (longlong)iVar8 << 3);
          iVar15 = (int)local_80;
        }
        local_80 = CONCAT44(local_80._4_4_,iVar15 - uVar10);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&local_88,iVar15 - uVar10,(int *)((longlong)&local_80 + 4));
      }
    }
  }
  lVar14 = *(longlong *)((longlong)this + 0x20);
  uVar11 = uVar12;
  uVar16 = uVar12;
  if (0 < *(int *)(lVar14 + 0x18)) {
    do {
      uVar10 = (uint)uVar12;
      uVar7 = 0;
      if ((int)uVar10 < *(int *)(lVar14 + 0x18)) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = *(longlong *)(lVar14 + 0x10);
      if ((*(longlong *)(lVar14 + uVar11) == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Buffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                             ,0x183,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar1 = *(FRDGResource **)(lVar14 + uVar11);
      FRDGResource::ValidateRHIAccess(pFVar1);
      pFVar2 = pFVar1->ResourceRHI;
      uVar7 = 0;
      if ((int)uVar10 < (int)local_80) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar12 = (ulonglong)(uVar10 + 1);
      *(FRHIResource **)(local_88.Data + uVar16 * 8) = pFVar2;
      lVar14 = *(longlong *)((longlong)this + 0x20);
      uVar11 = uVar11 + 0x10;
      uVar16 = uVar16 + 1;
    } while ((int)(uVar10 + 1) < *(int *)(lVar14 + 0x18));
  }
  FRHICommandListImmediate::ImmediateFlush(param_1,DispatchToRHIThread,None);
  local_68 = *(undefined8 *)this;
  local_60 = *(TReferenceControllerBase<1> **)((longlong)this + 8);
  if (local_60 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_60->SharedReferenceCount = (atomic<int>)((int)local_60->SharedReferenceCount + 1);
    UNLOCK();
  }
  iVar15 = *(int *)((longlong)this + 0x18);
  pFVar3 = *(FTensor **)((longlong)this + 0x10);
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = CONCAT44(local_50._4_4_,iVar15);
  if (iVar15 == 0) {
    local_50 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar15,0,&local_58,iVar15,(int *)((longlong)&local_50 + 4));
    ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int>
              (local_58.Data,pFVar3,iVar15);
  }
  FVar5.Data = local_78.Data;
  lVar14 = (longlong)(int)local_70;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40 = CONCAT44(local_40._4_4_,(int)local_70);
  if ((int)local_70 == 0) {
    local_40 = local_70 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_70,0,&local_48,(int)local_70,(int *)((longlong)&local_40 + 4));
    memcpy(local_48.Data,FVar5.Data,lVar14 << 3);
  }
  FVar5.Data = local_88.Data;
  lVar14 = (longlong)(int)local_80;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = CONCAT44(local_30._4_4_,(int)local_80);
  if ((int)local_80 == 0) {
    local_30 = local_80 & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(int)local_80,0,&local_38,(int)local_80,(int *)((longlong)&local_30 + 4));
    memcpy(local_38.Data,FVar5.Data,lVar14 << 3);
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
     (param_1->field_0x64 == '\0')) {
    puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x58,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar9;
    *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
    *puVar9 = &TRHILambdaCommand<FRHICommandListImmediate,``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::`2'::<lambda_2>::operator()'::`2'::<lambda_1>_>
               ::_vftable_;
    puVar9[1] = 0;
    puVar9[2] = local_68;
    puVar9[3] = local_60;
    local_60 = (TReferenceControllerBase<1> *)0x0;
    local_68 = 0;
    puVar9[4] = 0;
    puVar9[4] = local_58.Data;
    local_58.Data = (FScriptContainerElement *)0x0;
    *(int *)(puVar9 + 5) = (int)local_50;
    *(undefined4 *)((longlong)puVar9 + 0x2c) = local_50._4_4_;
    local_50 = 0;
    puVar9[6] = 0;
    puVar9[6] = local_48.Data;
    local_48.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar9 + 7) = (undefined4)local_40;
    *(undefined4 *)((longlong)puVar9 + 0x3c) = local_40._4_4_;
    local_40 = 0;
    puVar9[8] = 0;
    puVar9[8] = local_38.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar9 + 9) = (undefined4)local_30;
    *(undefined4 *)((longlong)puVar9 + 0x4c) = local_30._4_4_;
    local_30 = 0;
    puVar9[10] = L"TRHILambdaCommand";
  }
  else {
    ``UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l2::<lambda_2>::
    operator()'::__l2::<lambda_1>::operator()(&local_68,param_1);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  DestructItems<UE::NNERuntimeORT::Private::FTensor,int>((FTensor *)local_58.Data,(int)local_50);
  if ((FTensor *)local_58.Data != (FTensor *)0x0) {
    FMemory::Free(local_58.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// EnqueueRDG @ 14eb13960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG
          (FModelInstanceORTDmlRDG *this,FRDGBuilder *param_1,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_2,
          TArrayView<UE::NNE::FTensorBindingRDG_const_,int> *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TRDGResourceAccessArray<FRDGBufferAccess> *pTVar3;
  undefined8 *puVar4;
  char cVar5;
  FRDGBufferAccess *pFVar6;
  FTensor *pFVar7;
  FORTModelInstanceRDGParameters *pFVar8;
  bool bVar9;
  EResultStatus EVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  FTensorBindingRDG *pFVar14;
  FRDGScope *this_00;
  FRDGEventName *pFVar15;
  code *pcVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulonglong uVar21;
  bool bVar22;
  longlong local_f0;
  undefined8 *local_e8;
  FORTModelInstanceRDGParameters *local_e0;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> local_d8;
  <lambda_2> local_c8;
  TRDGEventScopeGuard<FRDGScope_RHI> local_a0;
  undefined1 local_90;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_const_*,std::tuple<>_> local_88;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  FRDGEventName local_58;
  
  puVar19 = (undefined8 *)0x0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FModelInstanceORTDmlRDG::EnqueueRDG");
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1026,"FModelInstanceORTDmlRDG::EnqueueRDG",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x402);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1026);
  }
  if ((this->InputTensorShapes).ArrayNum == 0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      EVar10 = Fail;
      goto LAB_14eb14015;
    }
  }
  else if (param_2->ArrayNum == (this->InitialInputSymbolicTensors).ArrayNum) {
    if ((param_3->ArrayNum == 0) ||
       (param_3->ArrayNum == (this->InitialOutputSymbolicTensors).ArrayNum)) {
      puVar13 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (puVar13 == (undefined8 *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        puVar13 = puVar19;
        if (bVar9) {
          pcVar16 = (code *)swi(3);
          EVar10 = (*pcVar16)();
          return EVar10;
        }
      }
      else {
        puVar13[2] = 0;
        *puVar13 = &___7__TObject_VFORTModelInstanceRDGParameters___FRDGAllocator__6B_;
        puVar13[3] = 0;
        puVar13[4] = 0;
        puVar13[5] = 0;
      }
      local_e8 = puVar13;
      if ((((undefined8 **)param_1->_padding_ <= &local_e8) &&
          (&local_e8 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar9)) {
        pcVar16 = (code *)swi(3);
        EVar10 = (*pcVar16)();
        return EVar10;
      }
      iVar11 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar11 == *piVar1) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      local_e0 = (FORTModelInstanceRDGParameters *)(puVar13 + 2);
      *(int *)&param_1->_padding_ = iVar11 + 1;
      iVar12 = param_2->ArrayNum;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_e8;
      if (0 < iVar12) {
        local_f0 = 0;
        puVar13 = puVar19;
        do {
          uVar18 = (uint)puVar13;
          pFVar14 = TArrayView<UE::NNE::FTensorBindingRDG_const_,int>::operator[](param_2,uVar18);
          if (pFVar14->Buffer == (FRDGBuffer *)0x0) {
            uVar20 = 0;
            if ((int)uVar18 < (this->InputTensors).ArrayNum) {
              uVar20 = ~uVar18 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar16 = (code *)swi(3);
              EVar10 = (*pcVar16)();
              return EVar10;
            }
            if (*(longlong *)((this->InputTensors).AllocatorInstance.Data + local_f0 + 0x30) != 0) {
              if (1 < (byte)LogNNERuntimeORT._0_1_) {
                uVar20 = 0;
                if ((int)uVar18 < (this->InputTensors).ArrayNum) {
                  uVar20 = ~uVar18 >> 0x1f;
                }
                if ((uVar20 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar16 = (code *)swi(3);
                  EVar10 = (*pcVar16)();
                  return EVar10;
                }
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
              }
              goto LAB_14eb13f26;
            }
            iVar12 = param_2->ArrayNum;
          }
          puVar2 = &(local_e0->InputBuffers).field_0xc;
          iVar11 = *(int *)&(local_e0->InputBuffers).field_0x8;
          if (iVar11 == *(int *)puVar2) {
            iVar11 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                               (0x810,(ForElementType<FRDGBufferAccess> *)local_e0,(int *)puVar2);
          }
          local_f0 = local_f0 + 0x38;
          *(int *)&(local_e0->InputBuffers).field_0x8 = iVar11 + 1;
          puVar13 = (undefined8 *)(ulonglong)(uVar18 + 1);
          pFVar6 = *(FRDGBufferAccess **)&local_e0->InputBuffers;
          pFVar6[iVar11].Buffer = pFVar14->Buffer;
          pFVar6[iVar11].Access = CopySrc;
        } while ((int)(uVar18 + 1) < iVar12);
      }
      pFVar8 = local_e0;
      iVar11 = param_3->ArrayNum;
      if (0 < iVar11) {
        pTVar3 = &local_e0->OutputBuffers;
        puVar13 = puVar19;
        do {
          uVar20 = (uint)puVar13;
          uVar18 = 0;
          if ((int)uVar20 < iVar11) {
            uVar18 = ~uVar20 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar9)) {
            pcVar16 = (code *)swi(3);
            EVar10 = (*pcVar16)();
            return EVar10;
          }
          pFVar14 = param_3->DataPtr;
          iVar12 = *(int *)&(pFVar8->OutputBuffers).field_0x8;
          if (iVar12 == *(int *)&(pFVar8->OutputBuffers).field_0xc) {
            iVar12 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                               (0x810,(ForElementType<FRDGBufferAccess> *)pTVar3,
                                (int *)&(pFVar8->OutputBuffers).field_0xc);
          }
          *(int *)&(pFVar8->OutputBuffers).field_0x8 = iVar12 + 1;
          puVar13 = (undefined8 *)(ulonglong)(uVar20 + 1);
          puVar4 = (undefined8 *)((longlong)&pFVar14->Buffer + (longlong)puVar19);
          puVar19 = puVar19 + 1;
          puVar17 = (undefined8 *)(*(longlong *)pTVar3 + (longlong)iVar12 * 0x10);
          *puVar17 = *puVar4;
          *(undefined4 *)(puVar17 + 1) = 0x2000;
        } while ((int)(uVar20 + 1) < iVar11);
      }
      bVar9 = false;
      local_90 = 0;
      cVar5 = *(char *)((longlong)&param_1->_padding_ + 6);
      if ((cVar5 != '\0') && ((cVar5 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
          ::Desc._padding_._0_4_ = 0x428;
          local_68 = 0x54dc5980;
          uStack_64 = 1;
          ::Desc._padding_._0_4_ = 0x54dc5980;
          ::Desc._padding_._4_4_ = uStack_6c;
          ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          ::Desc._padding_._4_4_ = 1;
          ::Desc._padding_ = (longlong)u_FModelInstanceO;
          ::Desc._padding_ = (longlong)u_FModelInstanceO;
          InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
          ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          ::Desc.TraceGpuSpecId = 0;
          ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG'::__l95::Desc::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&::_TSS0);
        }
        local_88._Myfirst._Val = &::Desc;
        local_a0.State = (FRDGScopeState *)param_1;
        this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)this_00;
        uVar21 = (ulonglong)(this_00->Impl).Impl.TypeIndex;
        local_a0.Scope = this_00;
        if ((3 < uVar21) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar9)) {
          pcVar16 = (code *)swi(3);
          EVar10 = (*pcVar16)();
          return EVar10;
        }
        (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
          ::__l2::Destructors[uVar21])(&this_00->Impl);
        FRDGScope_RHI::FRDGScope_RHI<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<36>_>
                  ((FRDGScope_RHI *)&this_00->Impl,(FRDGScopeState *)param_1,&local_88);
        (this_00->Impl).Impl.TypeIndex = '\x02';
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
        }
        bVar9 = true;
        local_90 = 1;
      }
      local_c8.Proxy.Object = (this->Proxy).Object;
      local_c8.Proxy.SharedReferenceCount.ReferenceController =
           (this->Proxy).SharedReferenceCount.ReferenceController;
      if (local_c8.Proxy.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.Proxy.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
             1);
        UNLOCK();
      }
      iVar11 = (this->InputTensors).ArrayNum;
      pFVar7 = (FTensor *)(this->InputTensors).AllocatorInstance.Data;
      local_c8.InputTensors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_c8.InputTensors.ArrayNum = iVar11;
      if (iVar11 == 0) {
        local_c8.InputTensors.ArrayMax = 0;
      }
      else {
        Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,iVar11,0,&local_c8.InputTensors.AllocatorInstance,iVar11,
                   &local_c8.InputTensors.ArrayMax);
        ConstructItems<UE::NNERuntimeORT::Private::FTensor,UE::NNERuntimeORT::Private::FTensor,int>
                  (local_c8.InputTensors.AllocatorInstance.Data,pFVar7,iVar11);
      }
      pFVar8 = local_e0;
      local_c8.PassParameters = local_e0;
      pFVar15 = FRDGEventName::FRDGEventName
                          (&local_58,1,L"FModelInstanceORTDmlRDG::EnqueueRDG.AddPass");
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
                               ::__l2::_thread_safe_static_guard_0__),
         `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        pcVar16 = FORTModelInstanceRDGParameters::zzAppendMemberGetPrev;
        local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.ArrayNum = 0;
        local_d8.ArrayMax = 0;
        do {
          pcVar16 = (code *)(*pcVar16)((ulonglong)this & 0xff,&local_d8);
        } while (pcVar16 != (code *)0x0);
        AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                  ((FMember *)local_d8.AllocatorInstance.Data,local_d8.ArrayNum);
        FShaderParametersMetadata::FShaderParametersMetadata
                  (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
                    ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                   L"FORTModelInstanceRDGParameters",L"FORTModelInstanceRDGParameters",
                   (wchar_t *)0x0,(wchar_t *)0x0,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                   ,0x1b,0x20,&local_d8,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
        if ((FMember *)local_d8.AllocatorInstance.Data != (FMember *)0x0) {
          FMemory::Free(local_d8.AllocatorInstance.Data);
        }
        atexit(`FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata'::__l2::
               _dynamic_atexit_destructor_for__StaticStructMetadata__);
        _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FRDGBuilder::
      AddPassInternal<FORTModelInstanceRDGParameters,_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::EnqueueRDG_::__l2::<lambda_2>_>
                (param_1,pFVar15,
                 &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FORTModelInstanceRDGParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,pFVar8,Readback,&local_c8);
      if (local_58.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_58.FormattedEventName.Data.AllocatorInstance.Data);
      }
      DestructItems<UE::NNERuntimeORT::Private::FTensor,int>
                ((FTensor *)local_c8.InputTensors.AllocatorInstance.Data,
                 local_c8.InputTensors.ArrayNum);
      if ((FTensor *)local_c8.InputTensors.AllocatorInstance.Data != (FTensor *)0x0) {
        FMemory::Free(local_c8.InputTensors.AllocatorInstance.Data);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.Proxy.SharedReferenceCount.ReferenceController);
      EVar10 = Ok;
      if (bVar9) {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_a0);
      }
      goto LAB_14eb14015;
    }
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      EVar10 = Fail;
      goto LAB_14eb14015;
    }
  }
  else if (1 < (byte)LogNNERuntimeORT._0_1_) {
    Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
    EVar10 = Fail;
    goto LAB_14eb14015;
  }
LAB_14eb13f26:
  EVar10 = Fail;
LAB_14eb14015:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar10;
}

// GetInputTensorDescs @ 14eb154c0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::GetInputTensorDescs
          (FModelInstanceORTDmlRDG *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->InitialInputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->InitialInputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetInputTensorShapes @ 14eb15680

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::GetInputTensorShapes
          (FModelInstanceORTDmlRDG *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar4;
  
  iVar1 = (this->InputTensorShapes).ArrayNum;
  __return_storage_ptr__->DataPtr = (FTensorShape *)(this->InputTensorShapes).AllocatorInstance.Data
  ;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorDescs @ 14eb15db0

TArrayView<UE::NNE::FTensorDesc_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::GetOutputTensorDescs
          (FModelInstanceORTDmlRDG *this,
          TArrayView<UE::NNE::FTensorDesc_const_,int> *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<UE::NNE::FTensorDesc_const_,int> *pTVar4;
  
  iVar1 = (this->InitialOutputSymbolicTensors).ArrayNum;
  __return_storage_ptr__->DataPtr =
       (FTensorDesc *)(this->InitialOutputSymbolicTensors).AllocatorInstance.Data;
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<UE::NNE::FTensorDesc_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// GetOutputTensorShapes @ 14eb15f70

TArrayView<UE::NNE::FTensorShape_const_,int> * __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::GetOutputTensorShapes
          (FModelInstanceORTDmlRDG *this,
          TArrayView<UE::NNE::FTensorShape_const_,int> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  FProxy *pFVar2;
  code *pcVar3;
  bool bVar4;
  TArrayView<UE::NNE::FTensorShape_const_,int> *pTVar5;
  
  if ((this->Proxy).Object == (FProxy *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pFVar2 = (this->Proxy).Object;
  lpCriticalSection = &pFVar2->CriticalSection;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar1 = (pFVar2->OutputTensorShapes).ArrayNum;
    __return_storage_ptr__->DataPtr =
         (FTensorShape *)(pFVar2->OutputTensorShapes).AllocatorInstance.Data;
    if (iVar1 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar5 = (TArrayView<UE::NNE::FTensorShape_const_,int> *)(*pcVar3)();
        return pTVar5;
      }
    }
    __return_storage_ptr__->ArrayNum = iVar1;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
                    /* WARNING: Subroutine does not return */
  Core::Private::ReportNotNullPtr();
}

// Init @ 14eb16e00

/* WARNING: Enum "OrtMemType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::Init(FModelInstanceORTDmlRDG *this)

{
  AllocatorWithDefaultOptions *pAVar1;
  SessionOptions *pSVar2;
  FProxy *pFVar3;
  FProxy *pFVar4;
  FEnvironment *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  AllocatorWithDefaultOptions *pAVar9;
  OrtStatus *pOVar10;
  TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
  *pTVar11;
  TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> TVar12;
  TArrayView<unsigned_char_const_,__int64> *pTVar13;
  FProxy *pFVar14;
  TUniquePtr<Ort::SessionOptions,TDefaultDelete<Ort::SessionOptions>_> *pTVar15;
  FEnvironment *local_res8;
  undefined8 local_48 [2];
  TArrayView<unsigned_char_const_,__int64> local_38;
  TArrayView<unsigned_char_const_,__int64> local_28;
  
  pAVar9 = ::operator_new(8);
  if (pAVar9 == (AllocatorWithDefaultOptions *)0x0) {
    pAVar9 = (AllocatorWithDefaultOptions *)0x0;
  }
  else {
    *pAVar9 = (AllocatorWithDefaultOptions)0x0;
    pOVar10 = (*Ort::Global<void>::api_->GetAllocatorWithDefaultOptions)((OrtAllocator **)pAVar9);
    Ort::ThrowOnError(pOVar10);
  }
  if ((this->Proxy).Object == (FProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pTVar11 = &((this->Proxy).Object)->Allocator;
  if (pTVar11 !=
      (TUniquePtr<Ort::AllocatorWithDefaultOptions,TDefaultDelete<Ort::AllocatorWithDefaultOptions>_>
       *)local_48) {
    pAVar1 = pTVar11->Ptr;
    pTVar11->Ptr = pAVar9;
    pAVar9 = (AllocatorWithDefaultOptions *)0x0;
    ::operator_delete(pAVar1,8);
  }
  ::operator_delete(pAVar9,8);
  if ((this->Proxy).Object == (FProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  TVar12 = CreateSessionOptionsForDirectML
                     ((TSharedRef<UE::NNERuntimeORT::Private::FEnvironment,1> *)&local_res8,
                      (bool)((char)(this->Proxy).Object + '('));
  if ((this->Proxy).Object == (FProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pTVar15 = &((this->Proxy).Object)->SessionOptions;
  if ((SessionOptions *)pTVar15 != TVar12.Ptr) {
    pSVar2 = pTVar15->Ptr;
    pTVar15->Ptr = (SessionOptions *)*TVar12.Ptr;
    *TVar12.Ptr = (SessionOptions)0x0;
    if (pSVar2 != (SessionOptions *)0x0) {
      (*Ort::Global<void>::api_->ReleaseSessionOptions)((OrtSessionOptions *)*pSVar2);
      ::operator_delete(pSVar2,8);
    }
  }
  if (local_res8 != (FEnvironment *)0x0) {
    (*Ort::Global<void>::api_->ReleaseSessionOptions)(*(OrtSessionOptions **)&local_res8->Config);
    ::operator_delete(local_res8,8);
  }
  if ((this->Proxy).Object == (FProxy *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
  }
  pFVar14 = (this->Proxy).Object;
  if ((pFVar14->SessionOptions).Ptr == (SessionOptions *)0x0) {
    if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  else {
    if (pFVar14 == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pOVar10 = (*Ort::Global<void>::api_->SetSessionGraphOptimizationLevel)
                        ((OrtSessionOptions *)*(((this->Proxy).Object)->SessionOptions).Ptr,
                         ORT_ENABLE_ALL);
    Ort::ThrowOnError(pOVar10);
    if ((this->Proxy).Object == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar14 = (this->Proxy).Object;
    if (pFVar14 == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar3 = (this->Proxy).Object;
    if (pFVar3 == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar4 = (this->Proxy).Object;
    pFVar5 = (pFVar4->Environment).Object;
    if (pFVar4 == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pFVar4 = (this->Proxy).Object;
    pSVar2 = (pFVar4->SessionOptions).Ptr;
    if (pFVar4 == (FProxy *)0x0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        uVar8 = (*pcVar6)();
        return (bool)uVar8;
      }
    }
    pTVar13 = NNE::FSharedModelData::GetView((((this->Proxy).Object)->ModelData).Object,&local_28);
    local_38.DataPtr = pTVar13->DataPtr;
    local_38.ArrayNum = pTVar13->ArrayNum;
    bVar7 = Detail::CreateSession
                      (&local_38,pSVar2,pFVar5,&pFVar3->Session,
                       &pFVar14->TempDirForModelWithExternalData);
    if (bVar7) {
      if ((this->Proxy).Object == (FProxy *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
      }
      bVar7 = FProxy::ConfigureTensors((this->Proxy).Object,true);
      if (bVar7) {
        pFVar14 = TSharedPtr<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
                  operator->(&this->Proxy);
        bVar7 = FProxy::ConfigureTensors(pFVar14,false);
        if (bVar7) {
          pFVar14 = TSharedPtr<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
                    operator->(&this->Proxy);
          TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_>::operator=
                    (&this->InitialInputSymbolicTensors,&pFVar14->InputSymbolicTensors);
          pFVar14 = TSharedPtr<UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::FProxy,1>::
                    operator->(&this->Proxy);
          TArray<UE::NNE::FTensorDesc,TSizedDefaultAllocator<32>_>::operator=
                    (&this->InitialOutputSymbolicTensors,&pFVar14->OutputSymbolicTensors);
          return true;
        }
        if (1 < (byte)LogNNERuntimeORT._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        }
      }
      else if (1 < (byte)LogNNERuntimeORT._0_1_) {
        Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
        return false;
      }
    }
    else if (1 < (byte)LogNNERuntimeORT._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNNERuntimeORT);
      return false;
    }
  }
  return false;
}

// SetInputTensorShapes @ 14eb1d680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes
          (FModelInstanceORTDmlRDG *this,TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  EResultStatus EVar3;
  FEvent *pFVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  code **ppcVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_e8 [32];
  FModelInstanceORTDmlRDG *local_c8;
  FTensorShape *pFStack_c0;
  code *pcStack_b8;
  FEvent *pFStack_b0;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_a8;
  code *local_98 [2];
  code *local_88 [3];
  code **local_70;
  undefined1 local_68 [40];
  code **local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::SetInputTensorShapes");
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId802,"FModelInstanceORTDmlRDG::SetInputTensorShapes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x322);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId802);
  }
  bVar2 = IsInRenderingThread();
  if (bVar2) {
    local_a8.DataPtr = param_1->DataPtr;
    local_a8.ArrayNum = param_1->ArrayNum;
    local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
    EVar3 = SetInputTensorShapes_RenderThread(this,&local_a8);
  }
  else {
    bVar2 = IsInGameThread();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInGameThread()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                           ,0x32a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(false);
    pFStack_c0 = param_1->DataPtr;
    pcStack_b8 = *(code **)&param_1->ArrayNum;
    local_98[0] = (code *)0x0;
    local_c8 = this;
    pFStack_b0 = pFVar4;
    local_70 = FMemory::Malloc(0x28,8);
    *local_70 = (code *)&Core::Private::Function::
                         TFunction_OwnedObject<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::`7'::<lambda_1>,1,1>
                         ::_vftable_;
    local_70[1] = (code *)local_c8;
    local_70[2] = (code *)pFStack_c0;
    local_70[3] = pcStack_b8;
    local_70[4] = (code *)pFStack_b0;
    if (local_70 + 1 != (code **)0x0) {
      local_98[0] = Core::Private::Function::
                    TFunctionRefCaller<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_::__l7::TSTR_FModelInstanceORTDmlRDG_SetInputTensorShapes814>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_68._0_8_ = local_98[0];
      local_40 = local_70;
      local_70 = (code **)0x0;
      local_68._16_8_ = local_88[0];
      local_68._24_8_ = local_88[1];
      local_68._32_8_ = local_88[2];
      local_98[0] = (code *)0x0;
      local_38 = 2;
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes'::__l7::TSTR_FModelInstanceORTDmlRDG_SetInputTensorShapes814>
               ::Get();
      RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_68,pFVar5);
      uVar7 = (ulonglong)local_38;
      if ((2 < uVar7) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        EVar3 = (*pcVar1)();
        return EVar3;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7] ==
          Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_68._0_8_ != (code *)0x0) {
          ppcVar6 = (code **)(local_68 + 0x10);
          if (local_40 != (code **)0x0) {
            ppcVar6 = local_40;
          }
          (**(code **)(*ppcVar6 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar7])(local_68);
      }
    }
    if (local_98[0] != (code *)0x0) {
      ppcVar6 = local_98 + 2;
      if (local_70 != (code **)0x0) {
        ppcVar6 = local_70;
      }
      (**(code **)(*ppcVar6 + 0x10))();
    }
    (**(code **)(pFVar4->_padding_ + 0x20))(pFVar4,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(pFVar4);
    EVar3 = Ok;
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar3;
}

// SetInputTensorShapes_RenderThread @ 14eb1d920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EResultStatus __thiscall
UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread
          (FModelInstanceORTDmlRDG *this,TArrayView<UE::NNE::FTensorShape_const_,int> *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement FVar2;
  FProxy *pFVar3;
  FTensor *pFVar4;
  code *pcVar5;
  bool bVar6;
  EResultStatus EVar7;
  uint uVar8;
  int iVar9;
  ulong64 uVar10;
  FRHICommandListImmediate *this_00;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  TArray<UE::NNE::FTensorShape,TSizedDefaultAllocator<32>_> *pTVar14;
  FScriptContainerElement *pFVar15;
  ulonglong uVar16;
  bool bVar17;
  undefined1 auStackY_118 [32];
  FProxy *local_d0;
  TReferenceControllerBase<1> *local_c8;
  ForAnyElementType local_c0;
  undefined8 local_b8;
  FTensorDesc *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  TArrayView<UE::NNE::FTensorDesc_const_,int> local_98;
  TArrayView<UE::NNE::FTensorShape_const_,int> local_88;
  FTensorShape local_78;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Magenta,"FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread");
  bVar17 = -1 < CpuChannel->Enabled;
  if (bVar17) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId839,
               "FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
               ,0x347);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId839);
  }
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTModel.cpp"
                         ,0x349,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  if (((this->Proxy).Object == (FProxy *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  pFVar3 = (this->Proxy).Object;
  lpCriticalSection = &pFVar3->CriticalSection;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar14 = &pFVar3->OutputTensorShapes;
  DestructItems<UE::NNE::FTensorShape,int>
            ((FTensorShape *)(pTVar14->AllocatorInstance).Data,(pFVar3->OutputTensorShapes).ArrayNum
            );
  iVar9 = (pFVar3->OutputTensorShapes).ArrayMax;
  piVar1 = &(pFVar3->OutputTensorShapes).ArrayMax;
  uVar13 = 0;
  (pFVar3->OutputTensorShapes).ArrayNum = 0;
  if (iVar9 == 0) {
    *piVar1 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,iVar9,&pTVar14->AllocatorInstance,0,piVar1);
    ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
              ((pTVar14->AllocatorInstance).Data,(FTensorShape *)0x0,0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_a8 = (FTensorDesc *)(this->InitialInputSymbolicTensors).AllocatorInstance.Data;
  iStack_a0 = (this->InitialInputSymbolicTensors).ArrayNum;
  if ((iStack_a0 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    EVar7 = (*pcVar5)();
    return EVar7;
  }
  local_88.DataPtr = param_1->DataPtr;
  local_88.ArrayNum = param_1->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iStack_a0;
  local_98.DataPtr = local_a8;
  bVar6 = Detail::SetInputTensorShapes(&local_88,&local_98,&this->InputTensorShapes);
  if (bVar6) {
    piVar1 = &(this->InputTensors).ArrayMax;
    pFVar4 = (FTensor *)(this->InputTensors).AllocatorInstance.Data;
    iVar9 = (this->InputTensors).ArrayNum;
    if (*piVar1 < 0) {
      DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar9);
      (this->InputTensors).ArrayNum = 0;
      if (*piVar1 != 0) {
        Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&(this->InputTensors).AllocatorInstance,0,piVar1);
      }
    }
    else {
      DestructItems<UE::NNERuntimeORT::Private::FTensor,int>(pFVar4,iVar9);
      (this->InputTensors).ArrayNum = 0;
    }
    uVar16 = uVar13;
    if (0 < (this->InitialInputSymbolicTensors).ArrayNum) {
      do {
        uVar12 = (uint)uVar13;
        uVar8 = 0;
        if ((int)uVar12 < (this->InitialInputSymbolicTensors).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
        FVar2 = (this->InitialInputSymbolicTensors).AllocatorInstance.Data[uVar16 + 0x10];
        uVar8 = 0;
        if ((int)uVar12 < (this->InputTensorShapes).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
        pFVar15 = (this->InputTensorShapes).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x30;
        uVar10 = NNE::FTensorShape::Volume((FTensorShape *)pFVar15);
        if ((0xffffffff < uVar10) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InShape.Volume() <= TNumericLimits<uint32>::Max()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\NNE\\NNERuntimeORT\\Source\\NNERuntimeORT\\Private\\NNERuntimeORTTensor.h"
                               ,0x1e,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          EVar7 = (*pcVar5)();
          return EVar7;
        }
        local_78.Data.ArrayMax = 8;
        local_78.Data.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
        local_78.Data.ArrayNum = 0;
        local_48 = 0;
        NNE::FTensorShape::operator=(&local_78,(FTensorShape *)pFVar15);
        iVar9 = NNE::GetTensorDataTypeSizeInBytes((ENNETensorDataType)FVar2);
        uVar10 = NNE::FTensorShape::Volume((FTensorShape *)pFVar15);
        local_48 = uVar10 * (longlong)iVar9;
        iVar9 = (this->InputTensors).ArrayNum;
        if (iVar9 == (this->InputTensors).ArrayMax) {
          iVar9 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x838,&(this->InputTensors).AllocatorInstance,
                             &(this->InputTensors).ArrayMax);
        }
        (this->InputTensors).ArrayNum = iVar9 + 1;
        pFVar15 = (this->InputTensors).AllocatorInstance.Data + (longlong)iVar9 * 0x38;
        NNE::FTensorShape::FTensorShape((FTensorShape *)pFVar15,&local_78);
        *(longlong *)&pFVar15[0x30].field_0x0 = local_48;
        if (local_78.Data.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FMemory::Free((void *)local_78.Data.AllocatorInstance.SecondaryData);
        }
        uVar13 = (ulonglong)(uVar12 + 1);
        uVar16 = uVar16 + 0x48;
      } while ((int)(uVar12 + 1) < (this->InitialInputSymbolicTensors).ArrayNum);
    }
    this_00 = GetImmediateCommandList_ForRenderCommand();
    local_d0 = (this->Proxy).Object;
    local_c8 = (this->Proxy).SharedReferenceCount.ReferenceController;
    if (local_c8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_c8->SharedReferenceCount = (atomic<int>)((int)local_c8->SharedReferenceCount + 1);
      UNLOCK();
    }
    iVar9 = (this->InputTensorShapes).ArrayNum;
    pFVar15 = (this->InputTensorShapes).AllocatorInstance.Data;
    local_c0.Data = (FScriptContainerElement *)0x0;
    local_b8 = CONCAT44(local_b8._4_4_,iVar9);
    if (iVar9 == 0) {
      local_b8 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,iVar9,0,&local_c0,iVar9,(int *)((longlong)&local_b8 + 4));
      ConstructItems<UE::NNE::FTensorShape,UE::NNE::FTensorShape,int>
                (local_c0.Data,(FTensorShape *)pFVar15,iVar9);
    }
    if (((GRHICommandList.bLatchedBypass == false) || ((this_00->field_0x29b & 0x20) == 0)) &&
       (this_00->field_0x64 == '\0')) {
      puVar11 = FMemStackBase::Alloc((FMemStackBase *)this_00,0x38,8);
      *(int *)&this_00->field_0x60 = *(int *)&this_00->field_0x60 + 1;
      **(undefined8 **)&this_00->field_0x30 = puVar11;
      *(undefined8 **)&this_00->field_0x30 = puVar11 + 1;
      *puVar11 = &TRHILambdaCommand<FRHICommandListImmediate,`UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::`2'::<lambda_1>_>
                  ::_vftable_;
      puVar11[1] = 0;
      puVar11[2] = local_d0;
      puVar11[3] = local_c8;
      local_c8 = (TReferenceControllerBase<1> *)0x0;
      local_d0 = (FProxy *)0x0;
      puVar11[4] = 0;
      puVar11[4] = local_c0.Data;
      local_c0.Data = (FScriptContainerElement *)0x0;
      *(int *)(puVar11 + 5) = (int)local_b8;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = local_b8._4_4_;
      local_b8 = 0;
      puVar11[6] = L"TRHILambdaCommand";
    }
    else {
      `UE::NNERuntimeORT::Private::FModelInstanceORTDmlRDG::SetInputTensorShapes_RenderThread'::__l2
      ::<lambda_1>::operator()(&local_d0,this_00);
    }
    DestructItems<UE::NNE::FTensorShape,int>((FTensorShape *)local_c0.Data,(int)local_b8);
    if (local_c0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_c8);
    EVar7 = Ok;
  }
  else {
    EVar7 = Fail;
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return EVar7;
}

