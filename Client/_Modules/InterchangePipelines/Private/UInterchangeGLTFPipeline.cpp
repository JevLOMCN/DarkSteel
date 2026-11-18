// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 10

// StaticClass @ 14e72cb00

UClass * __cdecl UInterchangeGLTFPipeline::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGLTFPipeline",
               &Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGLTFPipeline,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeGLTFPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGLTFPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton;
}

// UInterchangeGLTFPipeline @ 14e766750

UInterchangeGLTFPipeline * __thiscall
UInterchangeGLTFPipeline::UInterchangeGLTFPipeline(UInterchangeGLTFPipeline *this)

{
  int iVar1;
  UGLTFPipelineSettings *pUVar2;
  code *pcVar3;
  bool bVar4;
  FObjectInitializer *pFVar5;
  UClass *pUVar6;
  UInterchangeGLTFPipeline *pUVar7;
  
  pFVar5 = FObjectInitializer::Get();
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,pFVar5);
  this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  pUVar6 = UGLTFPipelineSettings::StaticClass();
  if ((pUVar6->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar6);
  }
  pUVar2 = (UGLTFPipelineSettings *)(pUVar6->ClassDefaultObject).field0_0x0.DebugPtr;
  pUVar6 = UGLTFPipelineSettings::StaticClass();
  iVar1 = (int)pUVar6->_padding_;
  if ((*(int *)(pUVar2->_padding_ + 0x38) < iVar1) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar6->_padding_)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Ret->IsA(T::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                       ,0x1181,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pUVar7 = (UInterchangeGLTFPipeline *)(*pcVar3)();
      return pUVar7;
    }
  }
  (this->GLTFPipelineSettings).field0_0x0.DebugPtr = pUVar2;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  return this;
}

// UInterchangeGLTFPipeline @ 14e766820

UInterchangeGLTFPipeline * __thiscall
UInterchangeGLTFPipeline::UInterchangeGLTFPipeline
          (UInterchangeGLTFPipeline *this,FVTableHelper *param_1)

{
  UInterchangePipelineBase::UInterchangePipelineBase((UInterchangePipelineBase *)this,param_1);
  this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
  (this->PipelineDisplayName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PipelineDisplayName).Data.ArrayNum = 0;
  (this->PipelineDisplayName).Data.ArrayMax = 0;
  (this->GLTFPipelineSettings).field0_0x0.DebugPtr = (UGLTFPipelineSettings *)0x0;
  return this;
}

// ~UInterchangeGLTFPipeline @ 14e76be60

void __thiscall UInterchangeGLTFPipeline::~UInterchangeGLTFPipeline(UInterchangeGLTFPipeline *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UInterchangeGLTFPipeline__6B_;
  pFVar1 = (this->PipelineDisplayName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UInterchangePipelineBase::~UInterchangePipelineBase((UInterchangePipelineBase *)this);
  return;
}

// operator() @ 14e770840

void __thiscall
`UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeFactoryBaseNode *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  UInterchangeBaseNode *pUVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  ForAnyElementType FVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res20 [8];
  UInterchangeBaseNode *local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FString local_60;
  FString local_50;
  undefined1 local_40 [24];
  
  local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.ArrayNum = 0;
  local_70.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_2,&local_70);
  iVar2 = local_70.ArrayNum;
  pFVar8 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
  FVar7.Data = local_70.AllocatorInstance.Data;
LAB_14e7708a0:
  do {
    if (local_70.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (FVar7.Data == pFVar8) goto LAB_14e7709c0;
    pUVar4 = UInterchangeBaseNodeContainer::GetNode
                       ((UInterchangeBaseNodeContainer *)**(undefined8 **)((longlong)this + 8),
                        (FString *)FVar7.Data);
    if (pUVar4 == (UInterchangeBaseNode *)0x0) {
LAB_14e770986:
      local_78 = (UInterchangeBaseNode *)0x0;
    }
    else {
      pUVar5 = Z_Construct_UClass_UInterchangeShaderGraphNode_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14e770986;
      local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_60.Data.ArrayNum = 0;
      local_60.Data.ArrayMax = 0;
      local_78 = pUVar4;
      ::FString::ConcatFC(&local_50,&InterchangeGltfMaterialAttributeIdentifier,L"ParentIdentifier")
      ;
      FVar6.Data = (FScriptContainerElement *)L"";
      if (local_50.Data.ArrayNum != 0) {
        FVar6.Data = local_50.Data.AllocatorInstance.Data;
      }
      ::FString::FString((FString *)local_40,(wchar_t *)FVar6.Data);
      bVar3 = UInterchangeBaseNode::GetStringAttribute(local_78,(FString *)local_40,&local_60);
      if ((FScriptContainerElement *)local_40._0_8_ != (FScriptContainerElement *)0x0) {
        FMemory::Free((void *)local_40._0_8_);
      }
      if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.Data.AllocatorInstance.Data);
      }
      if (bVar3) {
        local_40._8_8_ = &local_78;
        local_40._0_8_ = param_1;
        TSet<TTuple<FString,UInterchangeShaderGraphNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeShaderGraphNode_const_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,UInterchangeShaderGraphNode_const_*_const_&>_>
                  (*(TSet<TTuple<FString,UInterchangeShaderGraphNode_const_*>,TDefaultMapHashableKeyFuncs<FString,UInterchangeShaderGraphNode_const_*,0>,FDefaultSetAllocator>
                     **)this,
                   (TPairInitializer<FString_const_&,UInterchangeShaderGraphNode_const_*_const_&> *)
                   local_res20,(bool *)local_40);
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
LAB_14e7709c0:
        DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
        if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
        return;
      }
      if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data.AllocatorInstance.Data);
        FVar7.Data = FVar7.Data + 0x10;
        goto LAB_14e7708a0;
      }
    }
    FVar7.Data = FVar7.Data + 0x10;
  } while( true );
}

// AdjustSettingsForContext @ 14e780680

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UInterchangeGLTFPipeline::AdjustSettingsForContext
          (UInterchangeGLTFPipeline *this,FInterchangePipelineContextParams *param_1)

{
  int iVar1;
  ForAnyElementType FVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  UInterchangePipelineBase::AdjustSettingsForContext((UInterchangePipelineBase *)this,param_1);
  UGLTFPipelineSettings::ValidateMaterialInstancesAndParameters
            ((this->GLTFPipelineSettings).field0_0x0.DebugPtr,&local_18);
  iVar1 = local_18.ArrayNum;
  pFVar3 = local_18.AllocatorInstance.Data + (longlong)local_18.ArrayNum * 0x10;
  FVar2.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if (local_18.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
      ;
    }
    if (FVar2.Data == pFVar3) break;
    if (2 < (byte)LogInterchangePipeline._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogInterchangePipeline);
    }
    FVar2.Data = FVar2.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// CanExecuteOnAnyThread @ 14e7826d0

bool __thiscall
UInterchangeGLTFPipeline::CanExecuteOnAnyThread
          (UInterchangeGLTFPipeline *this,EInterchangePipelineTask param_1)

{
  return true;
}

// ExecutePipeline @ 14e7a35d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UInterchangeGLTFPipeline::ExecutePipeline
          (UInterchangeGLTFPipeline *this,UInterchangeBaseNodeContainer *param_1,
          TArray<UInterchangeSourceData_*,TSizedDefaultAllocator<32>_> *param_2,FString *param_3)

{
  ulonglong uVar1;
  code *pcVar2;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *pTVar3;
  bool bVar4;
  UInterchangeMaterialInstanceFactoryNode *pUVar5;
  UInterchangeSourceNode *pUVar6;
  byte bVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  FString *pFVar13;
  uint uVar14;
  undefined1 auStack_198 [32];
  undefined1 local_178 [8];
  UInterchangeBaseNodeContainer *local_170;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_168;
  uint uStack_160;
  uint uStack_15c;
  TBitArray<FDefaultBitArrayAllocator> *local_158;
  undefined4 uStack_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  int iStack_140;
  undefined4 uStack_13c;
  int local_138;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_130;
  UInterchangeBaseNodeContainer **local_128;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_120;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_118;
  undefined8 uStack_f8;
  code *local_f0;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_e8;
  code *local_e0;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_d8;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_d0;
  UInterchangeBaseNodeContainer **local_c8;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_c0;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_b8;
  UInterchangeBaseNodeContainer **local_b0;
  TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  **local_a8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((this->GLTFPipelineSettings).field0_0x0.DebugPtr != (UGLTFPipelineSettings *)0x0) {
    local_128 = &local_170;
    local_c8 = &local_170;
    local_c0 = &local_130;
    local_e8 = &local_d0;
    local_f0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_2>,void,FString_const_&,UInterchangeMaterialFactoryNode_*>
               ::Call;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    uVar11 = 0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_58 = (void *)0x0;
    local_50 = 0;
    local_170 = param_1;
    local_130 = (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98;
    local_d0 = (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeMaterialFactoryNode>
              (param_1,(TFunctionRef<void___cdecl(FString_const_&,UInterchangeMaterialFactoryNode_*)>
                        *)&local_f0);
    local_b0 = &local_170;
    local_a8 = &local_130;
    local_d8 = &local_b8;
    local_e0 = UE::Core::Private::Function::
               TFunctionRefCaller<`UInterchangeGLTFPipeline::ExecutePipeline'::__l5::<lambda_3>,void,FString_const_&,UInterchangeMaterialInstanceFactoryNode_*>
               ::Call;
    local_b8 = (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98;
    UInterchangeBaseNodeContainer::IterateNodesOfType<UInterchangeMaterialInstanceFactoryNode>
              (local_170,
               (TFunctionRef<void___cdecl(FString_const_&,UInterchangeMaterialInstanceFactoryNode_*)>
                *)&local_e0);
    uVar10 = local_70;
    uStack_15c = 1;
    local_148 = 0;
    uStack_14c = local_148;
    if (local_70 != 0) {
      puVar12 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar12 = local_78;
      }
      uVar14 = *puVar12;
      local_148 = 0;
      uVar11 = 0;
      while (uVar14 == 0) {
        lVar8 = (longlong)(int)uVar11;
        local_148 = local_148 + 0x20;
        uVar11 = uVar11 + 1;
        uStack_14c = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar11)
        goto LAB_14e7a3751;
        uVar14 = puVar12[lVar8 + 1];
      }
      uStack_15c = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_15c * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      local_138 = (int)lVar8;
      uStack_14c = (local_148 - 1) + local_138;
      if ((int)local_70 < (int)uStack_14c) {
        uStack_14c = local_70;
      }
    }
LAB_14e7a3751:
    local_158 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    iStack_140 = local_98._8_4_ - local_64;
    uVar14 = local_70 & 0xffffffe0;
    uStack_150 = 0xffffffff;
    TStack_118.CurrentBitIndex = uStack_14c;
    TStack_118.UnvisitedBitMask = 0xffffffff;
    TStack_118._padding_ = CONCAT44(uStack_15c,uVar11);
    iVar9 = (int)local_70 >> 5;
    TStack_118._28_4_ = uStack_14c;
    TStack_118.BaseBitIndex = local_148;
    uStack_f8 = CONCAT44(uStack_13c,iStack_140);
    bVar7 = (byte)local_70;
    local_168 = (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98;
    uStack_160 = uVar11;
    uStack_144 = uStack_14c;
    local_120 = (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)local_98;
    TStack_118.Array = local_158;
    if (((int)local_70 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (uVar10 != local_70) {
      puVar12 = (uint *)(local_98 + 0x10);
      if (local_78 != (uint *)0x0) {
        puVar12 = local_78;
      }
      uVar11 = -1 << (bVar7 & 0x1f) & puVar12[iVar9];
      while (uVar11 == 0) {
        lVar8 = (longlong)iVar9;
        uVar14 = uVar14 + 0x20;
        iVar9 = iVar9 + 1;
        uVar10 = local_70;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
        goto LAB_14e7a3880;
        uVar11 = puVar12[lVar8 + 1];
      }
      uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      uVar10 = (int)lVar8 + -1 + uVar14;
      if ((int)local_70 < (int)uVar10) {
        uVar10 = local_70;
      }
    }
LAB_14e7a3880:
    while( true ) {
      pTVar3 = local_120;
      if (*(int *)&local_120->field_0x8 - *(int *)&local_120->field_0x34 != (int)uStack_f8) {
        `TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_178);
      }
      if (((TStack_118.CurrentBitIndex == uVar10) &&
          (TStack_118.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
         (pTVar3 == (TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_98)) break;
      pFVar13 = (FString *)((longlong)TStack_118.CurrentBitIndex * 0x20 + *(longlong *)pTVar3);
      pUVar5 = UGLTFPipelineSettings::BuildMaterialInstance
                         ((this->GLTFPipelineSettings).field0_0x0.DebugPtr,local_170,
                          (UInterchangeShaderGraphNode *)pFVar13[1].Data.AllocatorInstance.Data,
                          pFVar13);
      if (pUVar5 != (UInterchangeMaterialInstanceFactoryNode *)0x0) {
        pUVar6 = UInterchangeSourceNode::FindOrCreateUniqueInstance(local_170);
        UE::Interchange::PipelineHelper::FillSubPathFromSourceNode
                  ((UInterchangeFactoryBaseNode *)pUVar5,pUVar6);
      }
      TStack_118.UnvisitedBitMask = TStack_118.UnvisitedBitMask & ~TStack_118._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_118);
    }
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FString,UInterchangeShaderGraphNode_const_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  return;
}

// GetPrivateStaticClass @ 14e7b9440

UClass * __cdecl UInterchangeGLTFPipeline::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/InterchangePipelines",L"InterchangeGLTFPipeline",
               &Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton,
               StaticRegisterNativesUInterchangeGLTFPipeline,0x140,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UInterchangeGLTFPipeline>,
               InternalVTableHelperCtorCaller<UInterchangeGLTFPipeline>,local_res8,
               UInterchangePipelineBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UInterchangeGLTFPipeline.InnerSingleton;
}

// StaticRegisterNativesUInterchangeGLTFPipeline @ 14e7e45a0

void __cdecl UInterchangeGLTFPipeline::StaticRegisterNativesUInterchangeGLTFPipeline(void)

{
  return;
}

