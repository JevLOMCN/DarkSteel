// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWriteQueue
// Functions: 13

// StaticClass @ 1446e7f80

UClass * __cdecl UImageWriteBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImageWriteQueue",L"ImageWriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUImageWriteBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UImageWriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UImageWriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton;
}

// <lambda_1> @ 1446e8ad0

<lambda_1> * __thiscall
`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)&param_1->NativeCB;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(longlong *)this = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->NativeCB).field_0x28;
    puVar3 = (undefined8 *)&(param_1->NativeCB).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)(puVar3,(longlong)this + 0x10);
  }
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->DynamicCB,&local_28
            );
  *(undefined8 *)((longlong)this + 0x38) = *(undefined8 *)&(param_1->DynamicCB).field_0x8;
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&(param_1->DynamicCB).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// UImageWriteBlueprintLibrary @ 1446e94e0

UImageWriteBlueprintLibrary * __thiscall
UImageWriteBlueprintLibrary::UImageWriteBlueprintLibrary
          (UImageWriteBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UImageWriteBlueprintLibrary__6B_;
  return this;
}

// UImageWriteBlueprintLibrary @ 1446e9510

UImageWriteBlueprintLibrary * __thiscall
UImageWriteBlueprintLibrary::UImageWriteBlueprintLibrary
          (UImageWriteBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UImageWriteBlueprintLibrary__6B_;
  return this;
}

// ~UImageWriteBlueprintLibrary @ 1446e9980

void __thiscall
UImageWriteBlueprintLibrary::~UImageWriteBlueprintLibrary(UImageWriteBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UImageWriteBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// operator() @ 1446e9a60

void __thiscall
`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  UObject *pUVar4;
  UFunction *pUVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  undefined1 local_res18 [16];
  FDestructionSentinel local_48;
  FReadAccessScope local_30;
  
  if (*(void **)this != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar1 = *(code **)this;
    plVar6 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar6 = *(longlong **)((longlong)this + 0x28);
    }
    uVar3 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(uVar3,local_res8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30),
             &local_30);
  if ((*(longlong *)((longlong)this + 0x40) == 0) ||
     (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x38)),
     pUVar4 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_30);
    return;
  }
  pUVar5 = UObject::FindFunction(pUVar4,*(FName *)((longlong)this + 0x40));
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_30);
  if (pUVar5 == (UFunction *)0x0) {
    return;
  }
  local_res18[0] = param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30),
             (FWriteAccessScope *)&local_48);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)((longlong)this + 0x38));
  if ((!bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object.IsValid() != false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                         ,0x1bb,L"ProcessDelegate() called with no object bound to delegate!"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(longlong *)((longlong)this + 0x40) == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FunctionName != NAME_None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\UObject\\ScriptDelegates.h"
                         ,0x1bc,L"ProcessDelegate() called with no function name set!"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x38));
  pUVar5 = UObject::FindFunctionChecked(pUVar4,*(FName *)((longlong)this + 0x40));
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  (**(code **)(*(longlong *)pUVar4 + 0x260))(pUVar4,pUVar5,local_res18);
  return;
}

// operator() @ 1446e9be0

void __thiscall
`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

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
  TImagePixelData<FColor> *this_00;
  FRHITexture *this_01;
  TImagePixelData<FFloat16Color> *this_02;
  undefined8 uVar10;
  TImagePixelData<FLinearColor> *this_03;
  longlong *plVar11;
  ForAnyElementType FVar12;
  FRHITexture *this_04;
  FLLMScope local_res8 [2];
  TIntPoint<int>_u_0 local_res18;
  FRHITexture *local_res20;
  int *in_stack_fffffffffffffe40;
  ulonglong uVar13;
  ForAnyElementType local_1a8;
  int local_1a0 [2];
  TArray<FColor,TSizedDefaultAllocator<32>_> local_198;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_188;
  TIntPoint<int>_u_0 local_178;
  int local_170;
  int iStack_16c;
  TIntPoint<int>_u_0 local_168;
  FRHITexture *local_160;
  TIntPoint<int>_u_0 local_158;
  FRHITexture *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  FReadSurfaceDataFlags local_138;
  ECubeFace local_118;
  ERangeCompressionMode EStack_114;
  uint uStack_110;
  float fStack_10c;
  undefined2 local_108;
  undefined2 uStack_106;
  int iStack_104;
  undefined4 uStack_100;
  FMemScope local_f8;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_f0;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_d8;
  TArray<FLinearColor,TSizedDefaultAllocator<64>_> local_c0;
  TIntPoint<int>_u_0 local_a8;
  undefined8 local_a0;
  TIntRect<int>_u_0 local_98;
  TIntRect<int>_u_0 local_88;
  FReadSurfaceDataFlags local_78;
  FReadSurfaceDataFlags local_58;
  
  this_01 = (FRHITexture *)0x0;
  pFVar4 = *(FRHITexture **)(*(longlong *)this + 0x20);
  this_04 = this_01;
  if (pFVar4 != (FRHITexture *)0x0) {
    if ((pFVar4->TextureDesc).Dimension == Texture2D) {
      this_04 = pFVar4;
    }
    if (this_04 != (FRHITexture *)0x0) {
      LOCK();
      plVar11 = &this_04->_padding_;
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
      lVar9 = (**(code **)(this_04->_padding_ + 0x20))(this_04);
      local_178 = (TIntPoint<int>_u_0)0x0;
      iVar2 = *(int *)(lVar9 + 0x28);
      lVar9 = (**(code **)(this_04->_padding_ + 0x20))(this_04);
      iVar3 = *(int *)(lVar9 + 0x24);
      local_170 = iVar3;
      iStack_16c = iVar2;
      lVar9 = (**(code **)(this_04->_padding_ + 0x20))(this_04);
      cVar1 = *(char *)(lVar9 + 0x33);
      if (cVar1 == '\x01') {
        local_118 = CubeFace_MAX;
        uVar7 = iVar3 * iVar2;
        EStack_114 = RCM_MinMax;
        fStack_10c = 16000.0;
        local_108 = 0;
        iStack_104 = 0;
        uStack_100 = 0;
        uStack_110 = uStack_110 & 0xffffff00;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        if ((int)uVar7 < 1) {
          if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
          }
        }
        else {
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,uVar7,&local_188.AllocatorInstance,&local_188.ArrayNum,
                     &local_188.ArrayMax);
        }
        local_58.CompressionMode = EStack_114;
        local_58.CubeFace = local_118;
        local_58.MaxDepthRange = fStack_10c;
        local_58._8_4_ = uStack_110;
        local_88._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_178;
        local_58._18_2_ = uStack_106;
        local_58.bOutputStencil = (bool)(undefined1)local_108;
        local_58.MipLevel = local_108._1_1_;
        local_58.ArrayIndex = iStack_104;
        local_88._12_4_ = iStack_16c;
        local_88._8_4_ = local_170;
        local_58.GPUIndex = 0;
        FRHICommandListImmediate::ReadSurfaceData
                  (param_1,this_04,(TIntRect<int> *)&local_88._s_0,&local_188,&local_58);
        FVar12.Data = local_188.AllocatorInstance.Data;
        local_c0.ArrayNum = (long64)local_188.ArrayNum;
        local_c0.ArrayMax = (long64)local_188.ArrayMax;
        local_c0.AllocatorInstance.Data = local_188.AllocatorInstance.Data;
        local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_188.ArrayNum = 0;
        local_188.ArrayMax = 0;
        local_158._s_0.X = iVar3;
        local_158._s_0.Y = iVar2;
        this_03 = ::operator_new(0x40);
        if (this_03 != (TImagePixelData<FLinearColor> *)0x0) {
          this_01 = (FRHITexture *)
                    TImagePixelData<FLinearColor>::TImagePixelData<FLinearColor>
                              (this_03,(TIntPoint<int> *)&local_158._s_0,&local_c0);
          FVar12.Data = local_c0.AllocatorInstance.Data;
        }
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
        bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_01);
        if (bVar6) {
          local_150 = this_01;
          UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
          pcVar5 = *(code **)((longlong)this + 0x10);
          plVar11 = (longlong *)((longlong)this + 0x20);
          if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
            plVar11 = *(longlong **)((longlong)this + 0x38);
          }
          uVar10 = (**(code **)(*plVar11 + 8))();
          (*pcVar5)(uVar10,&local_150);
          if (local_150 != (FRHITexture *)0x0) {
            (**(code **)local_150->_padding_)(local_150,1);
          }
          if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.AllocatorInstance.Data);
          }
          goto LAB_1446ea2a6;
        }
        FVar12.Data = local_188.AllocatorInstance.Data;
        if (this_01 != (FRHITexture *)0x0) {
          (**(code **)this_01->_padding_)(this_01,1);
          FVar12.Data = local_188.AllocatorInstance.Data;
        }
LAB_1446ea20d:
        if (FVar12.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar12.Data);
        }
      }
      else {
        if (cVar1 == '\x02') {
LAB_1446e9cec:
          local_138.CubeFace = CubeFace_MAX;
          local_138.CompressionMode = RCM_UNorm;
          uVar7 = iVar3 * iVar2;
          local_138.MaxDepthRange = 16000.0;
          local_138.bOutputStencil = false;
          local_138.MipLevel = '\0';
          local_138.ArrayIndex = 0;
          local_138.GPUIndex = 0;
          local_138._8_4_ = local_138._8_4_ & 0xffffff00;
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          if ((int)uVar7 < 1) {
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
            }
          }
          else {
            UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar7,&local_198.AllocatorInstance,&local_198.ArrayNum,
                       &local_198.ArrayMax);
          }
          local_78.MaxDepthRange = local_138.MaxDepthRange;
          local_78.bLinearToGamma = local_138.bLinearToGamma;
          local_78._9_3_ = local_138._9_3_;
          local_98._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>)local_178;
          local_78._18_2_ = local_138._18_2_;
          local_78.bOutputStencil = local_138.bOutputStencil;
          local_78.MipLevel = local_138.MipLevel;
          local_78.ArrayIndex = local_138.ArrayIndex;
          local_98._12_4_ = iStack_16c;
          local_98._8_4_ = local_170;
          local_78.CubeFace = local_138.CubeFace;
          local_78.CompressionMode = local_138.CompressionMode;
          local_78.GPUIndex = 0;
          FRHICommandListImmediate::ReadSurfaceData
                    (param_1,this_04,(TIntRect<int> *)&local_98._s_0,&local_198,&local_78);
          FVar12.Data = local_198.AllocatorInstance.Data;
          local_d8.ArrayNum = (long64)local_198.ArrayNum;
          local_d8.ArrayMax = (long64)local_198.ArrayMax;
          local_d8.AllocatorInstance.Data = local_198.AllocatorInstance.Data;
          local_198.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_198.ArrayNum = 0;
          local_198.ArrayMax = 0;
          local_168._s_0.X = iVar3;
          local_168._s_0.Y = iVar2;
          this_00 = ::operator_new(0x40);
          if (this_00 != (TImagePixelData<FColor> *)0x0) {
            this_01 = (FRHITexture *)
                      TImagePixelData<FColor>::TImagePixelData<FColor>
                                (this_00,(TIntPoint<int> *)&local_168._s_0,&local_d8);
            FVar12.Data = local_d8.AllocatorInstance.Data;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_01);
          if (bVar6) {
            local_160 = this_01;
            UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
            pcVar5 = *(code **)((longlong)this + 0x10);
            plVar11 = (longlong *)((longlong)this + 0x20);
            if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
              plVar11 = *(longlong **)((longlong)this + 0x38);
            }
            uVar10 = (**(code **)(*plVar11 + 8))();
            (*pcVar5)(uVar10,&local_160);
            if (local_160 != (FRHITexture *)0x0) {
              (**(code **)local_160->_padding_)(local_160,1);
            }
            if (local_198.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.AllocatorInstance.Data);
            }
            goto LAB_1446ea2a6;
          }
          FVar12.Data = local_198.AllocatorInstance.Data;
          if (this_01 != (FRHITexture *)0x0) {
            (**(code **)this_01->_padding_)(this_01,1);
            FVar12.Data = local_198.AllocatorInstance.Data;
          }
          goto LAB_1446ea20d;
        }
        if (cVar1 == '\n') {
          local_1a8.Data = (FScriptContainerElement *)0x0;
          uVar7 = iVar3 * iVar2;
          local_1a0[0] = 0;
          local_1a0[1] = 0;
          if ((int)uVar7 < 1) {
            if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
            }
          }
          else {
            in_stack_fffffffffffffe40 = local_1a0 + 1;
            iVar8 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,2,uVar7,&local_1a8,local_1a0,in_stack_fffffffffffffe40);
            DefaultConstructItems<FFloat16Color,int>(local_1a8.Data + (longlong)iVar8 * 8,uVar7);
          }
          uVar13 = CONCAT71((int7)((ulonglong)in_stack_fffffffffffffe40 >> 8),1);
          FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
          FMemScope::FMemScope(&local_f8,Textures,true);
          local_a8 = local_178;
          local_a0 = CONCAT44(iStack_16c,local_170);
          (**(code **)(GDynamicRHI->_padding_ + 0x440))
                    (GDynamicRHI,param_1,this_04,&local_a8,&local_1a8,uVar13 & 0xffffffff00000000,0,
                     0);
          FMemScope::~FMemScope(&local_f8);
          FLLMScope::~FLLMScope(local_res8);
          FVar12.Data = local_1a8.Data;
          local_f0.ArrayNum = (long64)local_1a0[0];
          local_f0.ArrayMax = (long64)local_1a0[1];
          local_f0.AllocatorInstance.Data = local_1a8.Data;
          local_1a8.Data = (FScriptContainerElement *)0x0;
          local_1a0[0] = 0;
          local_1a0[1] = 0;
          local_res18._s_0.X = iVar3;
          local_res18._s_0.Y = iVar2;
          this_02 = ::operator_new(0x40);
          if (this_02 != (TImagePixelData<FFloat16Color> *)0x0) {
            this_01 = (FRHITexture *)
                      TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                                (this_02,(TIntPoint<int> *)&local_res18._s_0,&local_f0);
            FVar12.Data = local_f0.AllocatorInstance.Data;
          }
          if (FVar12.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar12.Data);
          }
          bVar6 = FImagePixelData::IsDataWellFormed((FImagePixelData *)this_01);
          if (bVar6) {
            local_res20 = this_01;
            UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
            pcVar5 = *(code **)((longlong)this + 0x10);
            plVar11 = (longlong *)((longlong)this + 0x20);
            if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
              plVar11 = *(longlong **)((longlong)this + 0x38);
            }
            uVar10 = (**(code **)(*plVar11 + 8))();
            (*pcVar5)(uVar10,&local_res20);
            if (local_res20 != (FRHITexture *)0x0) {
              (**(code **)local_res20->_padding_)(local_res20,1);
            }
            if (local_1a8.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1a8.Data);
            }
            goto LAB_1446ea2a6;
          }
          FVar12.Data = local_1a8.Data;
          if (this_01 != (FRHITexture *)0x0) {
            (**(code **)this_01->_padding_)(this_01,1);
            FVar12.Data = local_1a8.Data;
          }
          goto LAB_1446ea20d;
        }
        if (cVar1 == '%') goto LAB_1446e9cec;
      }
      local_148 = (undefined8 *)0x0;
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
      pcVar5 = *(code **)((longlong)this + 0x10);
      plVar11 = (longlong *)((longlong)this + 0x20);
      if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)this + 0x38);
      }
      uVar10 = (**(code **)(*plVar11 + 8))();
      (*pcVar5)(uVar10,&local_148);
      if (local_148 != (undefined8 *)0x0) {
        (**(code **)*local_148)(local_148,1);
      }
      goto LAB_1446ea2a6;
    }
  }
  local_140 = (undefined8 *)0x0;
  UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
  pcVar5 = *(code **)((longlong)this + 0x10);
  plVar11 = (longlong *)((longlong)this + 0x20);
  if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
    plVar11 = *(longlong **)((longlong)this + 0x38);
  }
  uVar10 = (**(code **)(*plVar11 + 8))();
  (*pcVar5)(uVar10,&local_140);
  if (local_140 != (undefined8 *)0x0) {
    (**(code **)*local_140)(local_140,1);
  }
  if (this_04 == (FRHITexture *)0x0) {
    return;
  }
LAB_1446ea2a6:
  LOCK();
  plVar11 = &this_04->_padding_;
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
    FRHIResource::MarkForDelete((FRHIResource *)this_04);
  }
  return;
}

// operator() @ 1446ea380

void __thiscall
`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>::operator()
          (void *this,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_> *param_1)

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
  undefined8 *local_res8;
  undefined8 *local_28;
  FSharedReferencer<1> local_20;
  undefined1 local_18 [8];
  TReferenceControllerBase<1> *local_10;
  
  puVar9 = (undefined8 *)0x0;
  local_28 = (undefined8 *)0x0;
  local_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (param_1->Ptr != (FImagePixelData *)0x0) {
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
    if (pTVar1 != param_1) {
      pFVar2 = pTVar1->Ptr;
      pTVar1->Ptr = param_1->Ptr;
      param_1->Ptr = (FImagePixelData *)0x0;
      if (pFVar2 != (FImagePixelData *)0x0) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    cVar5 = *(char *)((longlong)this + 0x10);
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
               (TFunction<void___cdecl(bool)> *)((longlong)this + 0x20));
    ::FString::operator=((FString *)(puVar10 + 1),this);
    *(undefined1 *)(puVar10 + 4) = *(undefined1 *)((longlong)this + 0x18);
    *(undefined4 *)((longlong)puVar10 + 0x1c) = *(undefined4 *)((longlong)this + 0x14);
    local_res8 = puVar10;
    ppuVar8 = (undefined8 **)
              (**(code **)(**(longlong **)((longlong)this + 0x50) + 8))
                        (*(longlong **)((longlong)this + 0x50),local_18,&local_res8,1);
    if (&local_28 != ppuVar8) {
      local_28 = *ppuVar8;
      *ppuVar8 = (undefined8 *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&local_20,(FSharedReferencer<1> *)(ppuVar8 + 1));
      puVar9 = local_28;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (*(char *)((longlong)this + 0x19) == '\0') {
    if (puVar9 != (undefined8 *)0x0) {
      do {
        cVar5 = (**(code **)(*(longlong *)puVar9[0xc] + 0x20))((longlong *)puVar9[0xc],0xffffffff,0)
        ;
      } while (cVar5 == '\0');
    }
    if ((*(longlong *)((longlong)this + 0x58) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TPromise<void>::SetValue(*(TPromise<void> **)((longlong)this + 0x58));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_20.ReferenceController);
  return;
}

// ExportToDisk @ 1446ed220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UImageWriteBlueprintLibrary::ExportToDisk
          (UTexture *param_1,FString *param_2,FImageWriteOptions *param_3)

{
  atomic<unsigned_int> aVar1;
  char cVar2;
  undefined8 *puVar3;
  FName FVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  longlong *plVar10;
  FTextureResource *pFVar11;
  longlong lVar12;
  FName *pFVar13;
  FModuleManager *this;
  IModuleInterface *pIVar14;
  FRHIResource *pFVar15;
  TFuture<void> *this_00;
  undefined8 *puVar16;
  code **ppcVar17;
  longlong *plVar18;
  uint uVar19;
  FAtomicFlags *pFVar20;
  FRHIResource *this_01;
  FRHIResource *pFVar21;
  TPromise<void> *pTVar22;
  undefined1 auStack_3f8 [32];
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  FSharedReferencer<1> local_3b0;
  FName local_3a8;
  undefined1 local_3a0 [16];
  FReadAccessScope local_390;
  FReadAccessScope local_378;
  code *local_358 [5];
  undefined8 *local_330;
  code *local_328 [5];
  undefined8 *local_300;
  code *local_2f8 [5];
  undefined8 *local_2d0;
  code *local_2c8 [5];
  undefined8 *local_2a0;
  code *local_298;
  undefined8 uStack_290;
  longlong local_288 [3];
  longlong *plStack_270;
  longlong local_268;
  longlong local_258;
  longlong lStack_250;
  longlong local_248;
  longlong *local_240;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_238;
  longlong local_230;
  longlong local_228;
  undefined1 local_218 [32];
  code *local_1f8;
  undefined8 uStack_1f0;
  longlong local_1e8 [3];
  longlong *plStack_1d0;
  IImageWriteQueue *local_1c8;
  TPromise<void> *local_1c0;
  FSharedReferencer<1> local_1b8 [2];
  code *local_1a8;
  longlong local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  longlong *local_180;
  code *local_178;
  longlong local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  longlong *local_150;
  code *local_148;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  longlong *local_120;
  code *local_118;
  longlong local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  code *local_e8 [2];
  code *local_d8 [3];
  code **local_c0;
  undefined1 local_b8 [96];
  FSharedReferencer<1> local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  local_268 = *(longlong *)&param_3->NativeOnComplete;
  pFVar21 = (FRHIResource *)0x0;
  local_240 = (longlong *)0x0;
  if (local_268 != 0) {
    puVar3 = *(undefined8 **)&(param_3->NativeOnComplete).field_0x28;
    puVar16 = (undefined8 *)&(param_3->NativeOnComplete).field_0x10;
    if (puVar3 != (undefined8 *)0x0) {
      puVar16 = puVar3;
    }
    (**(code **)*puVar16)(puVar16,&local_258);
  }
  local_238.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_230 = 0;
  local_228 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_3->OnComplete,
             &local_390);
  local_230 = *(longlong *)&(param_3->OnComplete).field_0x8;
  local_228 = *(longlong *)&(param_3->OnComplete).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_390);
  local_298 = (code *)0x0;
  plVar10 = FMemory::Malloc(0x60,0x10);
  *plVar10 = (longlong)
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_1>,0,1>
              ::_vftable_;
  plVar18 = plVar10 + 2;
  *plVar18 = local_268;
  plVar10[7] = (longlong)local_240;
  local_240 = (longlong *)0x0;
  plVar10[4] = local_258;
  plVar10[5] = lStack_250;
  plVar10[6] = local_248;
  if (*plVar18 != 0) {
    local_268 = 0;
  }
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[10] = 0;
  plStack_270 = plVar10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_238,&local_378);
  plVar10[9] = local_230;
  plVar10[10] = local_228;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_378);
  if (plVar18 != (longlong *)0x0) {
    local_298 = UE::Core::Private::Function::
                TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_1>,void,bool>
                ::Call;
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_238.AccessDetector);
  if (local_268 != 0) {
    plVar18 = &local_258;
    if (local_240 != (longlong *)0x0) {
      plVar18 = local_240;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  if (((param_1 == (UTexture *)0x0) ||
      (pFVar11 = UTexture::GetResource(param_1), pFVar11 == (FTextureResource *)0x0)) ||
     (pFVar11 = UTexture::GetResource(param_1), pFVar11->_padding_ == 0)) {
    local_3c0 = 0;
    FFrame::KismetExecutionMessage(L"Invalid texture supplied.",Error,(FName)0x0);
    local_118 = local_298;
    local_f0 = (longlong *)0x0;
    if (local_298 != (code *)0x0) {
      plVar18 = local_288;
      if (plStack_270 != (longlong *)0x0) {
        plVar18 = plStack_270;
      }
      (**(code **)*plVar18)(plVar18,&local_108);
    }
    local_2c8[0] = (code *)0x0;
    local_2a0 = FMemory::Malloc(0x40,0x10);
    *local_2a0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`5'::<lambda_2>,1,1>
                  ::_vftable_;
    plVar18 = local_2a0 + 2;
    *plVar18 = (longlong)local_118;
    local_2a0[7] = local_f0;
    local_f0 = (longlong *)0x0;
    local_2a0[4] = local_108;
    local_2a0[5] = uStack_100;
    local_2a0[6] = local_f8;
    if (*plVar18 != 0) {
      local_118 = (code *)0x0;
    }
    if (plVar18 != (longlong *)0x0) {
      local_2c8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l5::<lambda_2>,void>
                     ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_2c8);
    if (local_118 != (code *)0x0) {
      plVar18 = &local_108;
      if (local_f0 != (longlong *)0x0) {
        plVar18 = local_f0;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    goto LAB_1446edc83;
  }
  pFVar11 = UTexture::GetResource(param_1);
  this_01 = pFVar21;
  if (((FRHIResource *)pFVar11->_padding_)[0xb].AtomicFlags.Packed.field_0x2 == '\0') {
    this_01 = (FRHIResource *)pFVar11->_padding_;
  }
  if (this_01 == (FRHIResource *)0x0) {
    local_3c8 = 0;
    FFrame::KismetExecutionMessage(L"Invalid texture supplied.",Error,(FName)0x0);
    local_148 = local_298;
    local_120 = (longlong *)0x0;
    if (local_298 != (code *)0x0) {
      plVar18 = local_288;
      if (plStack_270 != (longlong *)0x0) {
        plVar18 = plStack_270;
      }
      (**(code **)*plVar18)(plVar18,&local_138);
    }
    local_2f8[0] = (code *)0x0;
    local_2d0 = FMemory::Malloc(0x40,0x10);
    *local_2d0 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`8'::<lambda_3>,1,1>
                  ::_vftable_;
    plVar18 = local_2d0 + 2;
    *plVar18 = (longlong)local_148;
    local_2d0[7] = local_120;
    local_120 = (longlong *)0x0;
    local_2d0[4] = local_138;
    local_2d0[5] = uStack_130;
    local_2d0[6] = local_128;
    if (*plVar18 != 0) {
      local_148 = (code *)0x0;
    }
    if (plVar18 != (longlong *)0x0) {
      local_2f8[0] = UE::Core::Private::Function::
                     TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l8::<lambda_3>,void>
                     ::Call;
    }
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_2f8);
    if (local_148 != (code *)0x0) {
      plVar18 = &local_138;
      if (local_120 != (longlong *)0x0) {
        plVar18 = local_120;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
LAB_1446edae2:
    if (this_01 == (FRHIResource *)0x0) goto LAB_1446edc83;
  }
  else {
    pFVar20 = &this_01->AtomicFlags;
    LOCK();
    aVar1 = pFVar20->Packed;
    pFVar20->Packed = (atomic<unsigned_int>)((int)pFVar20->Packed + 1);
    UNLOCK();
    if (((int)aVar1 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(OldPacked & DeletingBit) == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x99,L"Resource is being deleted."), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((0x3ffffffe < ((uint)aVar1 & 0x3fffffff) + 1) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumRefs < NumRefsMask",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x9b,L"Reference count has overflowed."), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar12 = (**(code **)(this_01->_padding_ + 0x20))(this_01);
    cVar2 = *(char *)(lVar12 + 0x33);
    if (cVar2 == '\x01') {
LAB_1446ed5b9:
      if (param_3->Format != EXR) {
        local_3d0 = 0;
        FFrame::KismetExecutionMessage
                  (L"Only EXR export is currently supported for PF_FloatRGBA and PF_A32B32G32R32F formats."
                   ,Error,(FName)0x0);
        local_178 = local_298;
        local_150 = (longlong *)0x0;
        if (local_298 != (code *)0x0) {
          plVar18 = local_288;
          if (plStack_270 != (longlong *)0x0) {
            plVar18 = plStack_270;
          }
          (**(code **)*plVar18)(plVar18,&local_168);
        }
        local_328[0] = (code *)0x0;
        local_300 = FMemory::Malloc(0x40,0x10);
        *local_300 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`13'::<lambda_5>,1,1>
                      ::_vftable_;
        plVar18 = local_300 + 2;
        *plVar18 = (longlong)local_178;
        local_300[7] = local_150;
        local_150 = (longlong *)0x0;
        local_300[4] = local_168;
        local_300[5] = uStack_160;
        local_300[6] = local_158;
        if (*plVar18 != 0) {
          local_178 = (code *)0x0;
        }
        if (plVar18 != (longlong *)0x0) {
          local_328[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l13::<lambda_5>,void>
                         ::Call;
        }
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_328);
        if (local_178 != (code *)0x0) {
          plVar18 = &local_168;
          if (local_150 != (longlong *)0x0) {
            plVar18 = local_150;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        goto LAB_1446edae2;
      }
    }
    else if (cVar2 != '\x02') {
      if (cVar2 == '\n') goto LAB_1446ed5b9;
      if (cVar2 != '%') {
        local_3d8 = 0;
        FFrame::KismetExecutionMessage(L"Unsupported texture format.",Error,(FName)0x0);
        local_1a8 = local_298;
        local_180 = (longlong *)0x0;
        if (local_298 != (code *)0x0) {
          plVar18 = local_288;
          if (plStack_270 != (longlong *)0x0) {
            plVar18 = plStack_270;
          }
          (**(code **)*plVar18)(plVar18,&local_198);
        }
        local_358[0] = (code *)0x0;
        local_330 = FMemory::Malloc(0x40,0x10);
        *local_330 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`10'::<lambda_4>,1,1>
                      ::_vftable_;
        plVar18 = local_330 + 2;
        *plVar18 = (longlong)local_1a8;
        local_330[7] = local_180;
        local_180 = (longlong *)0x0;
        local_330[4] = local_198;
        local_330[5] = uStack_190;
        local_330[6] = local_188;
        if (*plVar18 != 0) {
          local_1a8 = (code *)0x0;
        }
        if (plVar18 != (longlong *)0x0) {
          local_358[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l10::<lambda_4>,void>
                         ::Call;
        }
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_358);
        if (local_1a8 != (code *)0x0) {
          plVar18 = &local_198;
          if (local_180 != (longlong *)0x0) {
            plVar18 = local_180;
          }
          (**(code **)(*plVar18 + 0x10))();
        }
        goto LAB_1446edae2;
      }
    }
    local_218._0_8_ = (FScriptContainerElement *)0x0;
    local_218._8_4_ = 0;
    local_218._12_4_ = 0;
    local_1f8 = (code *)0x0;
    plStack_1d0 = (longlong *)0x0;
    local_1c0 = (TPromise<void> *)0x0;
    local_1b8[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
    FModuleManager::Get();
    pFVar13 = ::FName::FName(&local_3a8,"ImageWriteQueue");
    FVar4 = *pFVar13;
    this = FModuleManager::Get();
    pIVar14 = FModuleManager::LoadModuleChecked(this,FVar4);
    local_1c8 = (IImageWriteQueue *)(**(code **)((longlong)*pIVar14 + 0x40))(pIVar14);
    ::FString::operator=((FString *)local_218,param_2);
    plVar18 = plStack_1d0;
    lVar8 = local_1e8[2];
    lVar7 = local_1e8[1];
    lVar12 = local_1e8[0];
    uVar6 = uStack_1f0;
    pcVar5 = local_1f8;
    local_218[0x10] = param_3->Format;
    local_218._20_4_ = param_3->CompressionQuality;
    local_218[0x18] = param_3->bOverwriteFile;
    local_218[0x19] = param_3->bAsync;
    local_1f8 = local_298;
    uStack_1f0 = uStack_290;
    local_1e8[0] = local_288[0];
    local_1e8[1] = local_288[1];
    local_1e8[2] = local_288[2];
    plStack_1d0 = plStack_270;
    local_298 = pcVar5;
    uStack_290 = uVar6;
    local_288[0] = lVar12;
    local_288[1] = lVar7;
    local_288[2] = lVar8;
    plStack_270 = plVar18;
    if (local_218[0x19] == false) {
      pFVar15 = ::operator_new(0x28);
      if (pFVar15 == (FRHIResource *)0x0) {
        pTVar22 = (TPromise<void> *)&DAT_00000010;
      }
      else {
        (pFVar15->AtomicFlags).Packed = (atomic<unsigned_int>)0x1;
        pFVar15->ResourceType = RRT_SamplerState;
        pFVar15->field_0xd = 0;
        pFVar15->_padding_ = 0;
        pFVar15->_padding_ =
             (longlong)
             &___7__TIntrusiveReferenceController_V__TPromise_X___00_SharedPointerInternals__6B_;
        TPromise<void>::TPromise<void>((TPromise<void> *)&pFVar15->OwnerName);
        pTVar22 = (TPromise<void> *)&pFVar15->OwnerName;
        if ((pTVar22 == (TPromise<void> *)0x0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        LOCK();
        (pFVar15->AtomicFlags).Packed =
             (atomic<unsigned_int>)((int)(pFVar15->AtomicFlags).Packed + 1);
        UNLOCK();
        pFVar21 = pFVar15;
      }
      local_3b8 = 0;
      local_3b0.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
      local_1c0 = pTVar22;
      SharedPointerInternals::FSharedReferencer<1>::operator=(local_1b8,&local_3b0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3b0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pFVar21);
    }
    `UImageWriteBlueprintLibrary::ExportToDisk'::__l2::FCommandParameters::FCommandParameters
              (local_b8,(FCommandParameters *)local_218);
    local_e8[0] = (code *)0x0;
    local_c0 = FMemory::Malloc(0x80,0x10);
    ppcVar17 = local_c0 + 2;
    *local_c0 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ExportToDisk'::`2'::<lambda_6>,0,1>
                         ::_vftable_;
    `UImageWriteBlueprintLibrary::ExportToDisk'::__l2::FCommandParameters::FCommandParameters
              (ppcVar17,(FCommandParameters *)local_b8);
    if (ppcVar17 != (code **)0x0) {
      local_e8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UImageWriteBlueprintLibrary::ExportToDisk'::__l2::<lambda_6>,void,TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&>
                    ::Call;
    }
    bVar9 = ResolvePixelData(param_1,(TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                                      *)local_e8);
    if ((bVar9) && (param_3->bAsync == false)) {
      bVar9 = true;
    }
    else {
      bVar9 = false;
    }
    if (local_e8[0] != (code *)0x0) {
      ppcVar17 = local_e8 + 2;
      if (local_c0 != (code **)0x0) {
        ppcVar17 = local_c0;
      }
      (**(code **)(*ppcVar17 + 0x10))();
    }
    if (bVar9) {
      if ((local_1c0 == (TPromise<void> *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = TPromise<void>::GetFuture(local_1c0,(TFuture<void> *)local_3a0);
      TFutureBase<void>::Wait((TFutureBase<void> *)this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)local_3a0._8_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.ReferenceController);
    if (local_b8._32_8_ != 0) {
      plVar18 = (longlong *)(local_b8 + 0x30);
      if ((longlong *)local_b8._72_8_ != (longlong *)0x0) {
        plVar18 = (longlong *)local_b8._72_8_;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_b8._0_8_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_1b8[0].ReferenceController);
    if (local_1f8 != (code *)0x0) {
      plVar18 = (longlong *)(local_218 + 0x30);
      if (plStack_1d0 != (longlong *)0x0) {
        plVar18 = plStack_1d0;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if ((FScriptContainerElement *)local_218._0_8_ == (FScriptContainerElement *)0x0)
    goto LAB_1446edae2;
    FMemory::Free((void *)local_218._0_8_);
  }
  pFVar20 = &this_01->AtomicFlags;
  LOCK();
  aVar1 = pFVar20->Packed;
  pFVar20->Packed = (atomic<unsigned_int>)((int)pFVar20->Packed + -1);
  UNLOCK();
  if (((int)aVar1 < 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(OldPacked & DeletingBit) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                         ,0xa2,L"Resource is being deleted."), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar19 = (uint)aVar1 & 0x3fffffff;
  if (uVar19 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (uVar19 == 1) {
    FRHIResource::MarkForDelete(this_01);
  }
LAB_1446edc83:
  if (local_298 != (code *)0x0) {
    plVar18 = local_288;
    if (plStack_270 != (longlong *)0x0) {
      plVar18 = plStack_270;
    }
    (**(code **)(*plVar18 + 0x10))();
  }
  return;
}

// GetPrivateStaticClass @ 1446ee3b0

UClass * __cdecl UImageWriteBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImageWriteQueue",L"ImageWriteBlueprintLibrary",
               &Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUImageWriteBlueprintLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UImageWriteBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UImageWriteBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImageWriteBlueprintLibrary.InnerSingleton;
}

// ResolvePixelData @ 1446ef5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UImageWriteBlueprintLibrary::ResolvePixelData
          (UTexture *param_1,
          TFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *param_2)

{
  int iVar1;
  FCommandList *pFVar2;
  code *pcVar3;
  EPixelFormat EVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  UClass *pUVar8;
  code **ppcVar9;
  FRenderCommandList *this;
  FRenderCommandTag *pFVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  code *local_d8 [2];
  code *local_c8 [3];
  code **local_b0;
  undefined1 local_a8 [40];
  code **local_80;
  byte local_78;
  FTextureResource *local_68;
  code *local_58;
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (param_1 == (UTexture *)0x0) {
    local_e8 = 0;
    FFrame::KismetExecutionMessage(L"Invalid texture supplied.",Error,(FName)0x0);
    bVar5 = false;
  }
  else {
    EVar4 = PF_Unknown;
    pUVar8 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar8->_padding_)) {
      pUVar8 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) {
        EVar4 = UTexture2D::GetPixelFormat((UTexture2D *)param_1,0);
      }
    }
    else {
      EVar4 = (**(code **)(param_1->_padding_ + 0x3d0))(param_1);
    }
    if ((((EVar4 == PF_A32B32G32R32F) || (EVar4 == PF_B8G8R8A8)) || (EVar4 == PF_FloatRGBA)) ||
       (EVar4 == PF_R8G8B8A8)) {
      local_68 = UTexture::GetResource(param_1);
      local_58 = *(code **)param_2;
      local_30 = (longlong *)0x0;
      if (local_58 != (code *)0x0) {
        puVar11 = (undefined8 *)&param_2->field_0x10;
        if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
          puVar11 = *(undefined8 **)&param_2->field_0x28;
        }
        (**(code **)*puVar11)(puVar11,local_48);
      }
      local_d8[0] = (code *)0x0;
      ppcVar9 = FMemory::Malloc(0x50,0x10);
      local_b0 = ppcVar9;
      *ppcVar9 = (code *)&UE::Core::Private::Function::
                          TFunction_OwnedObject<`UImageWriteBlueprintLibrary::ResolvePixelData'::`2'::<lambda_1>,1,1>
                          ::_vftable_;
      ppcVar9[2] = (code *)local_68;
      ppcVar9[4] = local_58;
      ppcVar9[9] = (code *)0x0;
      if (local_58 != (code *)0x0) {
        plVar12 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar12 = local_30;
        }
        (**(code **)*plVar12)(plVar12,ppcVar9 + 6);
      }
      if (ppcVar9 + 2 != (code **)0x0) {
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this = FRenderCommandList::GetInstanceTLS();
      if (this == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UImageWriteBlueprintLibrary::ResolvePixelData_::__l2::TSTR_ResolvePixelData63>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_d8);
      }
      else {
        if (this->bInitialized == 0) {
          FRenderCommandList::Init(this);
        }
        iVar1 = (this->CommandLists).ArrayNum;
        uVar13 = iVar1 - 1;
        uVar7 = 0;
        if ((int)uVar13 < iVar1) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if (uVar7 == 0) {
          local_f8 = (longlong)(int)uVar13;
          local_f0 = (longlong)iVar1;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            uVar6 = (*pcVar3)();
            return (bool)uVar6;
          }
        }
        iVar1 = (this->CommandLists).ArrayNum;
        local_a8._0_8_ = local_d8[0];
        local_d8[0] = (code *)0x0;
        local_a8._16_8_ = local_c8[0];
        local_a8._24_8_ = local_c8[1];
        local_a8._32_8_ = local_c8[2];
        local_78 = 2;
        pFVar2 = (this->CommandLists).AllocatorInstance.Data;
        local_80 = local_b0;
        local_b0 = (code **)0x0;
        pFVar10 = (FRenderCommandTag *)
                  TRenderCommandTag<`UImageWriteBlueprintLibrary::ResolvePixelData'::__l2::TSTR_ResolvePixelData63>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar2 + (iVar1 + -1),
                   (TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                    *)local_a8,pFVar10);
        uVar14 = (ulonglong)local_78;
        if ((2 < uVar14) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return (bool)uVar6;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_a8._0_8_ != (code *)0x0) {
            ppcVar9 = (code **)(local_a8 + 0x10);
            if (local_80 != (code **)0x0) {
              ppcVar9 = local_80;
            }
            (**(code **)(*ppcVar9 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar14])(local_a8);
        }
      }
      if (local_d8[0] != (code *)0x0) {
        ppcVar9 = local_d8 + 2;
        if (local_b0 != (code **)0x0) {
          ppcVar9 = local_b0;
        }
        (**(code **)(*ppcVar9 + 0x10))();
      }
      if (local_58 != (code *)0x0) {
        plVar12 = local_48;
        if (local_30 != (longlong *)0x0) {
          plVar12 = local_30;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      bVar5 = true;
    }
    else {
      local_e0 = 0;
      FFrame::KismetExecutionMessage(L"Unsupported texture format.",Error,(FName)0x0);
      bVar5 = false;
    }
  }
  return bVar5;
}

// StaticRegisterNativesUImageWriteBlueprintLibrary @ 1446efd10

void __cdecl UImageWriteBlueprintLibrary::StaticRegisterNativesUImageWriteBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UImageWriteBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execExportToDisk @ 1446f03a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UImageWriteBlueprintLibrary::execExportToDisk(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  FImageWriteOptions *pFVar3;
  undefined1 auStack_b8 [32];
  UTexture *local_98;
  FString local_90;
  undefined1 local_78 [8];
  FMRSWRecursiveAccessDetector local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined2 local_54;
  longlong local_48;
  longlong local_38 [3];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_98 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_98,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_98);
  }
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.Data.ArrayNum = 0;
  local_90.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_90,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_90);
  }
  local_78[0] = EXR;
  local_70.State = (atomic<unsigned___int64>)0x0;
  local_68 = 0;
  local_60 = 0;
  local_54._0_1_ = true;
  local_54._1_1_ = true;
  local_48 = 0;
  local_20 = (longlong *)0x0;
  local_58 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_78);
  }
  pFVar3 = (FImageWriteOptions *)local_78;
  if ((FImageWriteOptions *)param_2->MostRecentPropertyAddress != (FImageWriteOptions *)0x0) {
    pFVar3 = (FImageWriteOptions *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ExportToDisk(local_98,&local_90,pFVar3);
  if (local_48 != 0) {
    plVar2 = local_38;
    if (local_20 != (longlong *)0x0) {
      plVar2 = local_20;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_70);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

