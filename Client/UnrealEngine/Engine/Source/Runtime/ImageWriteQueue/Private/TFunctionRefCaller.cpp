// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 13

// Call @ 1446eb530

EQueuedWorkPriority __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<enum_EQueuedWorkPriority_(__cdecl*)(enum_EQueuedWorkPriority),enum_EQueuedWorkPriority,enum_EQueuedWorkPriority>
::Call(void *param_1,EQueuedWorkPriority *param_2)

{
  EQueuedWorkPriority EVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001446eb536. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar1 = (**(code **)param_1)(*param_2);
  return EVar1;
}

// Call @ 1446eb540

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageWriteTask::AddPreProcessorToSetAlphaOpaque'::__l2::PreProcessorToSetAlphaOpaque,void,FImagePixelData_*>
::Call(void *param_1,FImagePixelData **param_2)

{
  FImageView *pFVar1;
  FImageView local_28;
  
  pFVar1 = FImagePixelData::GetImageView(*param_2,&local_28);
  FImageCore::SetAlphaOpaque(pFVar1);
  return;
}

// Call @ 1446eb570

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,void,bool>::Call
          (void *param_1,bool *param_2)

{
  `UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 1446eb580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  FRHITexture *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  TImagePixelData<FColor> *this;
  FRHITexture *this_00;
  TImagePixelData<FFloat16Color> *this_01;
  undefined8 uVar10;
  TImagePixelData<FLinearColor> *this_02;
  longlong *plVar11;
  ForAnyElementType FVar12;
  FRHITexture *this_03;
  FLLMScope aFStackX_8 [2];
  TIntPoint<int>_u_0 TStackX_18;
  FRHITexture *pFStackX_20;
  ulonglong uVar13;
  int *in_stack_fffffffffffffe40;
  ForAnyElementType FStack_1a8;
  int aiStack_1a0 [2];
  TArray<FColor,TSizedDefaultAllocator<32>_> TStack_198;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> TStack_188;
  TIntPoint<int>_u_0 TStack_178;
  int iStack_170;
  int iStack_16c;
  TIntPoint<int>_u_0 TStack_168;
  FRHITexture *pFStack_160;
  TIntPoint<int>_u_0 TStack_158;
  FRHITexture *pFStack_150;
  undefined8 *puStack_148;
  undefined8 *puStack_140;
  FReadSurfaceDataFlags FStack_138;
  ECubeFace EStack_118;
  ERangeCompressionMode EStack_114;
  uint uStack_110;
  float fStack_10c;
  undefined2 uStack_108;
  undefined2 uStack_106;
  int iStack_104;
  undefined4 uStack_100;
  FMemScope FStack_f8;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> TStack_f0;
  TArray<FColor,TSizedDefaultAllocator<64>_> TStack_d8;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> TStack_c0;
  TIntPoint<int>_u_0 TStack_a8;
  undefined8 uStack_a0;
  TIntRect<int>_u_0 TStack_98;
  TIntRect<int>_u_0 TStack_88;
  FReadSurfaceDataFlags FStack_78;
  FReadSurfaceDataFlags FStack_58;
  
  this_00 = (FRHITexture *)0x0;
  pFVar4 = *(FRHITexture **)(*(longlong *)param_1 + 0x20);
  this_03 = this_00;
  if (pFVar4 != (FRHITexture *)0x0) {
    if ((pFVar4->TextureDesc).Dimension == Texture2D) {
      this_03 = pFVar4;
    }
    if (this_03 != (FRHITexture *)0x0) {
      LOCK();
      plVar11 = &this_03->_padding_;
      lVar9 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + 1;
      UNLOCK();
      if (((int)(uint)lVar9 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(OldPacked & DeletingBit) == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x99,L"Resource is being deleted."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((0x3ffffffe < ((uint)lVar9 & 0x3fffffff) + 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumRefs < NumRefsMask",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                             ,0x9b,L"Reference count has overflowed."), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar9 = (**(code **)(this_03->_padding_ + 0x20))(this_03);
      TStack_178 = (TIntPoint<int>_u_0)0x0;
      iVar2 = *(int *)(lVar9 + 0x28);
      lVar9 = (**(code **)(this_03->_padding_ + 0x20))(this_03);
      iVar3 = *(int *)(lVar9 + 0x24);
      iStack_170 = iVar3;
      iStack_16c = iVar2;
      lVar9 = (**(code **)(this_03->_padding_ + 0x20))(this_03);
      cVar1 = *(char *)(lVar9 + 0x33);
      if (cVar1 == '\x01') {
        EStack_118 = CubeFace_MAX;
        uVar7 = iVar3 * iVar2;
        EStack_114 = RCM_MinMax;
        fStack_10c = 16000.0;
        uStack_108 = 0;
        iStack_104 = 0;
        uStack_100 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        TStack_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_188.ArrayNum = 0;
        TStack_188.ArrayMax = 0;
        if ((int)uVar7 < 1) {
          if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            OnInvalidArrayNum((ulonglong)uVar7);
          }
        }
        else {
          ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar7,&TStack_188.AllocatorInstance,&TStack_188.ArrayNum,
                     &TStack_188.ArrayMax);
        }
        FStack_58.CompressionMode = EStack_114;
        FStack_58.CubeFace = EStack_118;
        FStack_58.MaxDepthRange = fStack_10c;
        FStack_58._8_4_ = uStack_110;
        TStack_88._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_178;
        FStack_58._18_2_ = uStack_106;
        FStack_58.bOutputStencil = (bool)(undefined1)uStack_108;
        FStack_58.MipLevel = uStack_108._1_1_;
        FStack_58.ArrayIndex = iStack_104;
        TStack_88._12_4_ = iStack_16c;
        TStack_88._8_4_ = iStack_170;
        FStack_58.GPUIndex = 0;
        FRHICommandListImmediate::ReadSurfaceData
                  (param_2,this_03,(TIntRect<int> *)&TStack_88._s_0,&TStack_188,&FStack_58);
        FVar12.Data = TStack_188.AllocatorInstance.Data;
        TStack_c0.ArrayNum = (long64)TStack_188.ArrayNum;
        TStack_c0.ArrayMax = (long64)TStack_188.ArrayMax;
        TStack_c0.AllocatorInstance.Data = TStack_188.AllocatorInstance.Data;
        TStack_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TStack_188.ArrayNum = 0;
        TStack_188.ArrayMax = 0;
        TStack_158._s_0.X = iVar3;
        TStack_158._s_0.Y = iVar2;
        this_02 = ::operator_new(0x40);
        if (this_02 != (TImagePixelData<FLinearColor> *)0x0) {
          this_00 = (FRHITexture *)
                    TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                              (this_02,(TIntPoint<int> *)&TStack_158._s_0,&TStack_c0);
          FVar12.Data = TStack_c0.AllocatorInstance.Data;
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_00);
        if (bVar6) {
          pFStack_150 = this_00;
          CheckCallable(*(void **)((longlong)param_1 + 0x10));
          pcVar5 = *(code **)((longlong)param_1 + 0x10);
          plVar11 = (longlong *)((longlong)param_1 + 0x20);
          if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
            plVar11 = *(longlong **)((longlong)param_1 + 0x38);
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          (*pcVar5)(uVar10,&pFStack_150);
          if (pFStack_150 != (FRHITexture *)0x0) {
            (**(code **)pFStack_150->_padding_)(pFStack_150,1);
          }
          if (TStack_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(TStack_188.AllocatorInstance.Data);
          }
          goto LAB_1446ea2a6;
        }
        FVar12.Data = TStack_188.AllocatorInstance.Data;
        if (this_00 != (FRHITexture *)0x0) {
          (**(code **)this_00->_padding_)(this_00,1);
          FVar12.Data = TStack_188.AllocatorInstance.Data;
        }
LAB_1446ea20d:
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
      }
      else {
        if (cVar1 == '\x02') {
LAB_1446e9cec:
          FStack_138.CubeFace = CubeFace_MAX;
          FStack_138.CompressionMode = RCM_UNorm;
          uVar7 = iVar3 * iVar2;
          FStack_138.MaxDepthRange = 16000.0;
          FStack_138.bOutputStencil = false;
          FStack_138.MipLevel = '\0';
          FStack_138.ArrayIndex = 0;
          FStack_138.GPUIndex = 0;
          FStack_138._8_4_ = FStack_138._8_4_ & 0xffffff00;
          TStack_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_198.ArrayNum = 0;
          TStack_198.ArrayMax = 0;
          if ((int)uVar7 < 1) {
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              OnInvalidArrayNum((ulonglong)uVar7);
            }
          }
          else {
            ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar7,&TStack_198.AllocatorInstance,&TStack_198.ArrayNum,
                       &TStack_198.ArrayMax);
          }
          FStack_78.MaxDepthRange = FStack_138.MaxDepthRange;
          FStack_78.bLinearToGamma = FStack_138.bLinearToGamma;
          FStack_78._9_3_ = FStack_138._9_3_;
          TStack_98._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)TStack_178;
          FStack_78._18_2_ = FStack_138._18_2_;
          FStack_78.bOutputStencil = FStack_138.bOutputStencil;
          FStack_78.MipLevel = FStack_138.MipLevel;
          FStack_78.ArrayIndex = FStack_138.ArrayIndex;
          TStack_98._12_4_ = iStack_16c;
          TStack_98._8_4_ = iStack_170;
          FStack_78.CubeFace = FStack_138.CubeFace;
          FStack_78.CompressionMode = FStack_138.CompressionMode;
          FStack_78.GPUIndex = 0;
          FRHICommandListImmediate::ReadSurfaceData
                    (param_2,this_03,(TIntRect<int> *)&TStack_98._s_0,&TStack_198,&FStack_78);
          FVar12.Data = TStack_198.AllocatorInstance.Data;
          TStack_d8.ArrayNum = (long64)TStack_198.ArrayNum;
          TStack_d8.ArrayMax = (long64)TStack_198.ArrayMax;
          TStack_d8.AllocatorInstance.Data = TStack_198.AllocatorInstance.Data;
          TStack_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          TStack_198.ArrayNum = 0;
          TStack_198.ArrayMax = 0;
          TStack_168._s_0.X = iVar3;
          TStack_168._s_0.Y = iVar2;
          this = ::operator_new(0x40);
          if (this != (TImagePixelData<FColor> *)0x0) {
            this_00 = (FRHITexture *)
                      TImagePixelData<FColor>::TImagePixelData<FColor>
                                (this,(TIntPoint<int> *)&TStack_168._s_0,&TStack_d8);
            FVar12.Data = TStack_d8.AllocatorInstance.Data;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_00);
          if (bVar6) {
            pFStack_160 = this_00;
            CheckCallable(*(void **)((longlong)param_1 + 0x10));
            pcVar5 = *(code **)((longlong)param_1 + 0x10);
            plVar11 = (longlong *)((longlong)param_1 + 0x20);
            if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
              plVar11 = *(longlong **)((longlong)param_1 + 0x38);
            }
            uVar10 = (**(code **)(*plVar11 + 8))();
            (*pcVar5)(uVar10,&pFStack_160);
            if (pFStack_160 != (FRHITexture *)0x0) {
              (**(code **)pFStack_160->_padding_)(pFStack_160,1);
            }
            if (TStack_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(TStack_198.AllocatorInstance.Data);
            }
            goto LAB_1446ea2a6;
          }
          FVar12.Data = TStack_198.AllocatorInstance.Data;
          if (this_00 != (FRHITexture *)0x0) {
            (**(code **)this_00->_padding_)(this_00,1);
            FVar12.Data = TStack_198.AllocatorInstance.Data;
          }
          goto LAB_1446ea20d;
        }
        if (cVar1 == '\n') {
          FStack_1a8.Data = (FScriptContainerElement *)0x0;
          uVar7 = iVar3 * iVar2;
          aiStack_1a0[0] = 0;
          aiStack_1a0[1] = 0;
          if ((int)uVar7 < 1) {
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              OnInvalidArrayNum((ulonglong)uVar7);
            }
          }
          else {
            in_stack_fffffffffffffe40 = aiStack_1a0 + 1;
            iVar8 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,2,uVar7,&FStack_1a8,aiStack_1a0,in_stack_fffffffffffffe40);
            DefaultConstructItems<FFloat16Color,int>(FStack_1a8.Data + (longlong)iVar8 * 8,uVar7);
          }
          uVar13 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe40 >> 8),1);
          FLLMScope::FLLMScope(aFStackX_8,Textures,false,None,Default,true);
          FMemScope::FMemScope(&FStack_f8,Textures,true);
          TStack_a8 = TStack_178;
          uStack_a0 = CONCAT44(iStack_16c,iStack_170);
          (**(code **)(GDynamicRHI->_padding_ + 0x440))
                    (GDynamicRHI,param_2,this_03,&TStack_a8,&FStack_1a8,uVar13 & 0xffffffff00000000,
                     0,0);
          FMemScope::~FMemScope(&FStack_f8);
          FLLMScope::~FLLMScope(aFStackX_8);
          FVar12.Data = FStack_1a8.Data;
          TStack_f0.ArrayNum = (long64)aiStack_1a0[0];
          TStack_f0.ArrayMax = (long64)aiStack_1a0[1];
          TStack_f0.AllocatorInstance.Data = FStack_1a8.Data;
          FStack_1a8.Data = (FScriptContainerElement *)0x0;
          aiStack_1a0[0] = 0;
          aiStack_1a0[1] = 0;
          TStackX_18._s_0.X = iVar3;
          TStackX_18._s_0.Y = iVar2;
          this_01 = ::operator_new(0x40);
          if (this_01 != (TImagePixelData<FFloat16Color> *)0x0) {
            this_00 = (FRHITexture *)
                      TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                                (this_01,(TIntPoint<int> *)&TStackX_18._s_0,&TStack_f0);
            FVar12.Data = TStack_f0.AllocatorInstance.Data;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_00);
          if (bVar6) {
            pFStackX_20 = this_00;
            CheckCallable(*(void **)((longlong)param_1 + 0x10));
            pcVar5 = *(code **)((longlong)param_1 + 0x10);
            plVar11 = (longlong *)((longlong)param_1 + 0x20);
            if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
              plVar11 = *(longlong **)((longlong)param_1 + 0x38);
            }
            uVar10 = (**(code **)(*plVar11 + 8))();
            (*pcVar5)(uVar10,&pFStackX_20);
            if (pFStackX_20 != (FRHITexture *)0x0) {
              (**(code **)pFStackX_20->_padding_)(pFStackX_20,1);
            }
            if (FStack_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FStack_1a8.Data);
            }
            goto LAB_1446ea2a6;
          }
          FVar12.Data = FStack_1a8.Data;
          if (this_00 != (FRHITexture *)0x0) {
            (**(code **)this_00->_padding_)(this_00,1);
            FVar12.Data = FStack_1a8.Data;
          }
          goto LAB_1446ea20d;
        }
        if (cVar1 == '%') goto LAB_1446e9cec;
      }
      puStack_148 = (undefined8 *)0x0;
      CheckCallable(*(void **)((longlong)param_1 + 0x10));
      pcVar5 = *(code **)((longlong)param_1 + 0x10);
      plVar11 = (longlong *)((longlong)param_1 + 0x20);
      if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)param_1 + 0x38);
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar10,&puStack_148);
      if (puStack_148 != (undefined8 *)0x0) {
        (**(code **)*puStack_148)(puStack_148,1);
      }
      goto LAB_1446ea2a6;
    }
  }
  puStack_140 = (undefined8 *)0x0;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar5 = *(code **)((longlong)param_1 + 0x10);
  plVar11 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar5)(uVar10,&puStack_140);
  if (puStack_140 != (undefined8 *)0x0) {
    (**(code **)*puStack_140)(puStack_140,1);
  }
  if (this_03 == (FRHITexture *)0x0) {
    return;
  }
LAB_1446ea2a6:
  LOCK();
  plVar11 = &this_03->_padding_;
  lVar9 = *plVar11;
  *(int *)plVar11 = (int)*plVar11 + -1;
  UNLOCK();
  if (((int)(uint)lVar9 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OldPacked & DeletingBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa2,L"Resource is being deleted."), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = (uint)lVar9 & 0x3fffffff;
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (uVar7 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_03);
  }
  return;
}

// Call @ 1446eb590

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageWriteTask::OnAbandoned'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb5e0

void __cdecl
UE::Core::Private::Function::TFunctionRefCaller<`FImageWriteTask::RunTask'::__l5::<lambda_1>,void>::
Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = *(undefined1 *)param_1;
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb640

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageWriteQueue::CreateFence'::__l8::<lambda_1>,void>::Call(void *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001446eb67d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 1446eb690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FImageWriteQueue::DecrementFence'::__l31::<lambda_1>,void>::Call(void *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  longlong *plVar2;
  
  CheckCallable(*(void **)param_1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1;
  plVar2 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar2 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar1 = (**(code **)(*plVar2 + 8))();
                    /* WARNING: Could not recover jumptable at 0x0001446eb6cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1);
  return;
}

// Call @ 1446eb6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb730

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb7d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar3 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res8);
  return;
}

// Call @ 1446eb820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
::Call(void *param_1,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_2)

{
  TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *pTVar1;
  FImagePixelData *pFVar2;
  code *pcVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puStackX_8;
  undefined8 *puStack_28;
  FSharedReferencer<1> FStack_20;
  undefined1 auStack_18 [8];
  TReferenceControllerBase<1> *pTStack_10;
  
  puVar9 = (undefined8 *)0x0;
  puStack_28 = (undefined8 *)0x0;
  FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_2->Ptr != (FImagePixelData *)0x0) {
    puVar7 = ::operator_new(0x80);
    puVar10 = puVar9;
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[1] = 0;
      *puVar7 = &___7FImageWriteTask__6B_;
      puVar7[2] = 0;
      *(undefined1 *)(puVar7 + 3) = 3;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 0;
      *(undefined1 *)(puVar7 + 4) = 1;
      puVar7[6] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar10 = puVar7;
    }
    pTVar1 = (TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *)(puVar10 + 0xc);
    if (pTVar1 != param_2) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = param_2->Ptr;
      param_2->Ptr = (FImagePixelData *)0x0;
      if (pFVar2 != (FImagePixelData *)0x0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    cVar5 = *(char *)((longlong)param_1 + 0x10);
    if (cVar5 == '\0') {
      uVar4 = 0;
    }
    else if (cVar5 == '\x01') {
      uVar4 = 1;
    }
    else if ((cVar5 == '\x02') || (cVar5 != '\x03')) {
      uVar4 = 3;
    }
    else {
      uVar4 = 5;
    }
    *(undefined1 *)(puVar10 + 3) = uVar4;
    TFunction<void___cdecl(bool)>::operator=
              ((TFunction<void___cdecl(bool)> *)(puVar10 + 6),
               (TFunction<void___cdecl(bool)> *)((longlong)param_1 + 0x20));
    ::FString::operator=((FString *)(puVar10 + 1),param_1);
    *(undefined1 *)(puVar10 + 4) = *(undefined1 *)((longlong)param_1 + 0x18);
    *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)param_1 + 0x14);
    puStackX_8 = puVar10;
    ppuVar8 = (undefined8 **)
              (**(code **)(**(longlong **)((longlong)param_1 + 0x50) + 8))
                        (*(longlong **)((longlong)param_1 + 0x50),auStack_18,&puStackX_8,1);
    if (&puStack_28 != ppuVar8) {
      puStack_28 = *ppuVar8;
      *ppuVar8 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&FStack_20,(FSharedReferencer<1> *)(ppuVar8 + 1));
      puVar9 = puStack_28;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_10);
    if (puStackX_8 != (undefined8 *)0x0) {
      (**(code **)*puStackX_8)(puStackX_8,1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x19) == '\0') {
    if (puVar9 != (undefined8 *)0x0) {
      do {
        cVar5 = (**(code **)(*(longlong *)puVar9[0xc] + 0x20))((longlong *)puVar9[0xc],0xffffffff,0)
        ;
      } while (cVar5 == '\0');
    }
    if ((*(longlong *)((longlong)param_1 + 0x58) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TPromise<void>::SetValue(*(TPromise<void> **)((longlong)param_1 + 0x58));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_20.ReferenceController);
  return;
}

